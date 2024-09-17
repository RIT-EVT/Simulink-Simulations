% Load data from .asc file
filename = 'MC0199.asc';  % Update the path to the file

% Open the file
fid = fopen(filename, 'r');

% Initialize variables
time = [];
can_id = [];
data = [];

% Read the file line by line
while ~feof(fid)
    line = fgetl(fid);
    
    % Parse each line assuming format:
    % timestamp_hh:mm:ss:ms can_id data_byte1 ... data_byte8
    tokens = regexp(line, '(\d+):(\d+):(\d+).(\d+)\s+(\S+)\s+(\S+\s+\S+\s+\S+\s+\S+\s+\S+\s+\S+\s+\S+\s+\S+)', 'tokens');
    
    if ~isempty(tokens)
        tokens = tokens{1};
        hour = str2double(tokens{1});
        minute = str2double(tokens{2});
        second = str2double(tokens{3});
        msec = str2double(tokens{4});
        
        % Convert to a single timestamp
        t = duration(hour, minute, second + msec/1000);
        time = [time; t];  % Append to time array
        
        % CAN ID
        can_id_hex = tokens{5};
        can_id = [can_id; hex2dec(can_id_hex)];
        
        % Data bytes
        data_bytes = str2num(tokens{6}); %#ok<ST2NM> % Convert the data bytes into an array
        data = [data; data_bytes];
    end
end

fclose(fid);

% Create timetable
TT = timetable(time, can_id, data);

% Save timetable to workspace or file (optional)
save('can_timetable.mat', 'TT');

% Using Vehicle Network Toolbox to connect DBC
dbcFile = '20180503 RMS PM CAN DB.dbc';  % Specify the path to your DBC file
db = canDatabase(dbcFile);

% Decode the CAN messages using the DBC file
decodedMessages = canMessageDecode(TT, db, 'Timestamp', 'time', 'ID', 'can_id', 'Data', 'data');

% Display or process the decoded messages
disp(decodedMessages);