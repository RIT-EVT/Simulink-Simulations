#include "Slip_ratio.h"
#include "rtwtypes.h"
#include "Slip_ratio_private.h"
#include "Slip_ratio_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_Slip_ratio [ 45 ] = { { "jj53gj5rgd1" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"fwch1ast5j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "gxzus5it0e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "fcqcwv5otc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"lb4t4ety1d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "pjujebljbc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "cin5l0kslq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"jl1eggu2yo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "axrj3bdxae" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "luw5npevol" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"ksi0yemrmb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "olsadd5wbq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "hh21qcqmze" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"gpnrtthmk3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "eife21lfbo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "jrcc0fcp4a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"nxzvnujrsa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "duu1roxz1k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "lnxhlds2xj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"cujn3izyur" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "jqaspd55h2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Slip_ratio" } , { "ddxysftxox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"a0kzg2lnbr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Slip_ratio" } , { "Slip_ratio" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 ,
( NULL ) } , { "htndvjfqas" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "Slip_ratio" } , { "mcfmdxeqc0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "Slip_ratio" } , { "dzl4q3tvov" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "uint64" } , {
"uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "cint64" ,
MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , { "int64" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_Slip_ratio_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Slip_ratio" } , { "mr_Slip_ratio_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Slip_ratio" } , { "mr_Slip_ratio_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Slip_ratio" } , { "mr_Slip_ratio_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Slip_ratio" } , {
"mr_Slip_ratio_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Slip_ratio" } , { "Slip_ratio.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
NULL ) } , { "Slip_ratio.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Slip_ratio" } } ; hok2rihvalx hok2rihval = { 200.0 , 0.1 , 0.32 } ; void
lnxhlds2xj ( gpnrtthmk3 * localB , fwch1ast5j * localZCSV ) { localZCSV ->
hn4imxok00 = localB -> pcsclagx3a - hok2rihval . P_0 ; localZCSV ->
n2isuuogxl = localB -> pcsclagx3a - hok2rihval . P_1 ; } void Slip_ratio (
dzl4q3tvov * const hegenqfbtu , const real_T * n3occkmcl0 , const real_T *
am1fbm12hk , real_T * o4wmk01khx , gpnrtthmk3 * localB , hh21qcqmze * localDW
) { real_T nm3jlsl400 ; real_T notlbjqogf ; notlbjqogf = hok2rihval . P_2 * *
n3occkmcl0 ; localB -> pcsclagx3a = hok2rihval . P_2 * * am1fbm12hk ;
nm3jlsl400 = notlbjqogf - localB -> pcsclagx3a ; if ( ssIsModeUpdateTimeStep
( hegenqfbtu -> _mdlRefSfcnS ) ) { localDW -> bmu3gdozgn = localB ->
pcsclagx3a >= hok2rihval . P_0 ? 1 : localB -> pcsclagx3a > hok2rihval . P_1
? 0 : - 1 ; } * o4wmk01khx = nm3jlsl400 / ( localDW -> bmu3gdozgn == 1 ?
hok2rihval . P_0 : localDW -> bmu3gdozgn == - 1 ? hok2rihval . P_1 : localB
-> pcsclagx3a ) ; } void jrcc0fcp4a ( dzl4q3tvov * const hegenqfbtu ) { if (
! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( hegenqfbtu ->
_mdlRefSfcnS , "Slip_ratio" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" )
; } } void jqaspd55h2 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , dzl4q3tvov * const hegenqfbtu , gpnrtthmk3 * localB ,
hh21qcqmze * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) hegenqfbtu , 0 , sizeof ( dzl4q3tvov ) ) ;
hegenqfbtu -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; hegenqfbtu ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; hegenqfbtu -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hegenqfbtu -> _mdlRefSfcnS , "Slip_ratio" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> pcsclagx3a = 0.0
; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( hh21qcqmze ) ) ;
Slip_ratio_InitializeDataMapInfo ( hegenqfbtu , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
hegenqfbtu -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( hegenqfbtu ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
hegenqfbtu -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_Slip_ratio_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_Slip_ratio , 45 ) ; * retVal = 1 ; } static void
mr_Slip_ratio_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Slip_ratio_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Slip_ratio_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Slip_ratio_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Slip_ratio_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Slip_ratio_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Slip_ratio_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Slip_ratio_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Slip_ratio_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Slip_ratio_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Slip_ratio_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Slip_ratio_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Slip_ratio_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Slip_ratio_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_Slip_ratio_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Slip_ratio_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Slip_ratio_GetDWork ( const jj53gj5rgd1 * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Slip_ratio_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.bmu3gdozgn" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ;
mr_Slip_ratio_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . bmu3gdozgn ) , sizeof ( mdlrefDW -> rtdw . bmu3gdozgn ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_Slip_ratio_SetDWork ( jj53gj5rgd1 * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Slip_ratio_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Slip_ratio_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . bmu3gdozgn ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . bmu3gdozgn ) ) ; } } void
mr_Slip_ratio_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 391273283U , 2854575301U , 1897048730U , 2120371640U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Slip_ratio" , & chksum [ 0 ] ) ;
} mxArray * mr_Slip_ratio_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ;
}
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
