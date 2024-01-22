c1 = int8([0:0.1:10]');
c2 = int8([0:1:100]');
c3 = int8([100:-1:0]');
c4 = int8(([0:1:60 60:-1:21])');
a = timeseries(([c1 c2 c3 c4]));
a.values = ;
save temps -v7.3 a
