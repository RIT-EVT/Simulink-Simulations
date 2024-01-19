#ifndef RTW_HEADER_Slip_ratio_h_
#define RTW_HEADER_Slip_ratio_h_
#ifndef Slip_ratio_COMMON_INCLUDES_
#define Slip_ratio_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Slip_ratio_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T pcsclagx3a ; } gpnrtthmk3 ; typedef struct { int_T
bmu3gdozgn ; } hh21qcqmze ; typedef struct { real_T hn4imxok00 ; real_T
n2isuuogxl ; } fwch1ast5j ; struct hok2rihvalx_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; } ; struct mcfmdxeqc0 { struct SimStruct_tag * _mdlRefSfcnS ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { gpnrtthmk3 rtb ; hh21qcqmze rtdw ; dzl4q3tvov rtm ; }
jj53gj5rgd1 ; extern void jqaspd55h2 ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , dzl4q3tvov * const hegenqfbtu , gpnrtthmk3
* localB , hh21qcqmze * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Slip_ratio_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_Slip_ratio_GetDWork ( const
jj53gj5rgd1 * mdlrefDW ) ; extern void mr_Slip_ratio_SetDWork ( jj53gj5rgd1 *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Slip_ratio_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Slip_ratio_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Slip_ratio_GetCAPIStaticMap ( void ) ;
extern void lnxhlds2xj ( gpnrtthmk3 * localB , fwch1ast5j * localZCSV ) ;
extern void Slip_ratio ( dzl4q3tvov * const hegenqfbtu , const real_T *
n3occkmcl0 , const real_T * am1fbm12hk , real_T * o4wmk01khx , gpnrtthmk3 *
localB , hh21qcqmze * localDW ) ; extern void jrcc0fcp4a ( dzl4q3tvov * const
hegenqfbtu ) ;
#endif
