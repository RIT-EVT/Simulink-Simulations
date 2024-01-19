#ifndef RTW_HEADER_Controller_h_
#define RTW_HEADER_Controller_h_
#ifndef Controller_COMMON_INCLUDES_
#define Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Controller_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include <stddef.h>
typedef struct { real_T gjxo5iyifa ; } ic5kmc1lx1 ; typedef struct { real_T
hd24veowbw ; real_T jqoisg3f3v ; real_T g2tml4rokf ; real_T bpavhpzcz4 ; }
k3nqvae5dx ; typedef struct { real_T pcdllnmnii ; } ikzztn5ir1 ; typedef
struct { real_T pcdllnmnii ; } il5125xls4 ; typedef struct { boolean_T
pcdllnmnii ; } laicgiqg5g ; typedef struct { real_T pcdllnmnii ; } cr0ukzfbef
; typedef struct { real_T pcdllnmnii ; } ow5aoyf1un ; typedef struct { real_T
pcdllnmnii ; } iwafcdoeua ; struct bptk3zfs5ca_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; } ; struct ckeyufcuxl { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ; typedef struct {
ic5kmc1lx1 rtb ; k3nqvae5dx rtdw ; h3lerrzgol rtm ; } bq3at5cnwyr ; extern
void geekc451og ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , h3lerrzgol *
const blehkyjez0 , ic5kmc1lx1 * localB , k3nqvae5dx * localDW , ikzztn5ir1 *
localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_Controller_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_Controller_GetDWork ( const bq3at5cnwyr * mdlrefDW ) ; extern void
mr_Controller_SetDWork ( bq3at5cnwyr * mdlrefDW , const mxArray * ssDW ) ;
extern void mr_Controller_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Controller_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Controller_GetCAPIStaticMap ( void ) ;
extern void mf0sclv040 ( k3nqvae5dx * localDW , ikzztn5ir1 * localX ) ;
extern void o0xosci2xp ( k3nqvae5dx * localDW , ikzztn5ir1 * localX ) ;
extern void gw2pccfrst ( ic5kmc1lx1 * localB , il5125xls4 * localXdot ) ;
extern void bfkl40yjne ( h3lerrzgol * const blehkyjez0 , ic5kmc1lx1 * localB
, k3nqvae5dx * localDW ) ; extern void Controller ( h3lerrzgol * const
blehkyjez0 , const real_T * h2o1bhbj0s , const real_T * jzsvdg3pal , real_T *
ejhpamlupz , ic5kmc1lx1 * localB , k3nqvae5dx * localDW , ikzztn5ir1 * localX
) ; extern void a2tlioayrw ( h3lerrzgol * const blehkyjez0 ) ;
#endif
