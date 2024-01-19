#include "Controller.h"
#include "rtwtypes.h"
#include "Controller_private.h"
#include "Controller_capi.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_Controller [ 47 ] = { { "bq3at5cnwyr" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Controller" } , {
"h4zdupjsdt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "iwafcdoeua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "ow5aoyf1un" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"cr0ukzfbef" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "laicgiqg5g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "il5125xls4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"ikzztn5ir1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "mh1k2w3dyi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "drfzs0mhoz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"dihj3nqu2a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "a2ntctmzdb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "k3nqvae5dx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"ic5kmc1lx1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "mi2rdzpnyj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "a2tlioayrw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"ezlkssi1ao" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "mqvjxiotvx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "gw2pccfrst" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"bfkl40yjne" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "o0xosci2xp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "mf0sclv040" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"geekc451og" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "nxeukkto1c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "fpx2jincra" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"Controller" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"pgbbwizaul" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Controller" } , { "ckeyufcuxl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Controller" } , { "h3lerrzgol" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Controller" } , {
"cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "uint64" } , {
"uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "cint64" ,
MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , { "int64" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_Controller_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Controller" } , {
"mr_Controller_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Controller" } , {
"mr_Controller_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Controller" } , {
"mr_Controller_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Controller" } , {
"mr_Controller_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Controller" } , {
"mr_Controller_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Controller" } , { "mr_Controller_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Controller" } , {
"mr_Controller_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Controller" } , { "mr_Controller_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Controller" } , {
"mr_Controller_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Controller" } , { "mr_Controller_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Controller" } , {
"mr_Controller_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Controller" } , { "Controller.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
NULL ) } , { "Controller.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"Controller" } } ; bptk3zfs5ca bptk3zfs5c = { 0.0 , 0.2 , 5.0 , 1.0 } ; void
mf0sclv040 ( k3nqvae5dx * localDW , ikzztn5ir1 * localX ) { localDW ->
hd24veowbw = ( rtInf ) ; localDW -> g2tml4rokf = ( rtInf ) ; localX ->
pcdllnmnii = bptk3zfs5c . P_0 ; } void o0xosci2xp ( k3nqvae5dx * localDW ,
ikzztn5ir1 * localX ) { localDW -> hd24veowbw = ( rtInf ) ; localDW ->
g2tml4rokf = ( rtInf ) ; localX -> pcdllnmnii = bptk3zfs5c . P_0 ; } void
Controller ( h3lerrzgol * const blehkyjez0 , const real_T * h2o1bhbj0s ,
const real_T * jzsvdg3pal , real_T * ejhpamlupz , ic5kmc1lx1 * localB ,
k3nqvae5dx * localDW , ikzztn5ir1 * localX ) { real_T g1gmlzj4ic_p ; real_T
lastTime ; real_T * lastU ; localB -> gjxo5iyifa = * h2o1bhbj0s - *
jzsvdg3pal ; g1gmlzj4ic_p = rtmGetTaskTime ( blehkyjez0 , 0 ) ; if ( (
localDW -> hd24veowbw >= g1gmlzj4ic_p ) && ( localDW -> g2tml4rokf >=
g1gmlzj4ic_p ) ) { g1gmlzj4ic_p = 0.0 ; } else { lastTime = localDW ->
hd24veowbw ; lastU = & localDW -> jqoisg3f3v ; if ( localDW -> hd24veowbw <
localDW -> g2tml4rokf ) { if ( localDW -> g2tml4rokf < g1gmlzj4ic_p ) {
lastTime = localDW -> g2tml4rokf ; lastU = & localDW -> bpavhpzcz4 ; } } else
if ( localDW -> hd24veowbw >= g1gmlzj4ic_p ) { lastTime = localDW ->
g2tml4rokf ; lastU = & localDW -> bpavhpzcz4 ; } g1gmlzj4ic_p = ( localB ->
gjxo5iyifa - * lastU ) / ( g1gmlzj4ic_p - lastTime ) ; } * ejhpamlupz = (
bptk3zfs5c . P_2 * localX -> pcdllnmnii + bptk3zfs5c . P_3 * localB ->
gjxo5iyifa ) + bptk3zfs5c . P_1 * g1gmlzj4ic_p ; } void bfkl40yjne (
h3lerrzgol * const blehkyjez0 , ic5kmc1lx1 * localB , k3nqvae5dx * localDW )
{ real_T * lastU ; if ( localDW -> hd24veowbw == ( rtInf ) ) { localDW ->
hd24veowbw = rtmGetTaskTime ( blehkyjez0 , 0 ) ; lastU = & localDW ->
jqoisg3f3v ; } else if ( localDW -> g2tml4rokf == ( rtInf ) ) { localDW ->
g2tml4rokf = rtmGetTaskTime ( blehkyjez0 , 0 ) ; lastU = & localDW ->
bpavhpzcz4 ; } else if ( localDW -> hd24veowbw < localDW -> g2tml4rokf ) {
localDW -> hd24veowbw = rtmGetTaskTime ( blehkyjez0 , 0 ) ; lastU = & localDW
-> jqoisg3f3v ; } else { localDW -> g2tml4rokf = rtmGetTaskTime ( blehkyjez0
, 0 ) ; lastU = & localDW -> bpavhpzcz4 ; } * lastU = localB -> gjxo5iyifa ;
} void gw2pccfrst ( ic5kmc1lx1 * localB , il5125xls4 * localXdot ) {
localXdot -> pcdllnmnii = localB -> gjxo5iyifa ; } void a2tlioayrw (
h3lerrzgol * const blehkyjez0 ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( blehkyjez0 -> _mdlRefSfcnS , "Controller" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void geekc451og (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , h3lerrzgol * const blehkyjez0
, ic5kmc1lx1 * localB , k3nqvae5dx * localDW , ikzztn5ir1 * localX , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
blehkyjez0 , 0 , sizeof ( h3lerrzgol ) ) ; blehkyjez0 -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; blehkyjez0 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( blehkyjez0 -> _mdlRefSfcnS , "Controller" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> gjxo5iyifa = 0.0
; } localDW -> hd24veowbw = 0.0 ; localDW -> jqoisg3f3v = 0.0 ; localDW ->
g2tml4rokf = 0.0 ; localDW -> bpavhpzcz4 = 0.0 ;
Controller_InitializeDataMapInfo ( blehkyjez0 , localDW , localX , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
blehkyjez0 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( blehkyjez0 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
blehkyjez0 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_Controller_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_Controller , 47 ) ; * retVal = 1 ; } static void
mr_Controller_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Controller_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Controller_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Controller_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Controller_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Controller_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Controller_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Controller_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Controller_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Controller_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Controller_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Controller_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Controller_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Controller_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_Controller_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Controller_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Controller_GetDWork ( const bq3at5cnwyr * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Controller_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 4 ] = { "mdlrefDW->rtdw.hd24veowbw" ,
"mdlrefDW->rtdw.jqoisg3f3v" , "mdlrefDW->rtdw.g2tml4rokf" ,
"mdlrefDW->rtdw.bpavhpzcz4" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 4 , rtdwDataFieldNames ) ; mr_Controller_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . hd24veowbw ) ,
sizeof ( mdlrefDW -> rtdw . hd24veowbw ) ) ; mr_Controller_cacheDataAsMxArray
( rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . jqoisg3f3v ) ,
sizeof ( mdlrefDW -> rtdw . jqoisg3f3v ) ) ; mr_Controller_cacheDataAsMxArray
( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . g2tml4rokf ) ,
sizeof ( mdlrefDW -> rtdw . g2tml4rokf ) ) ; mr_Controller_cacheDataAsMxArray
( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . bpavhpzcz4 ) ,
sizeof ( mdlrefDW -> rtdw . bpavhpzcz4 ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_Controller_SetDWork ( bq3at5cnwyr * mdlrefDW , const mxArray * ssDW ) { (
void ) ssDW ; ( void ) mdlrefDW ; mr_Controller_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) )
; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Controller_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hd24veowbw ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . hd24veowbw ) )
; mr_Controller_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jqoisg3f3v ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . jqoisg3f3v ) )
; mr_Controller_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
g2tml4rokf ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . g2tml4rokf ) )
; mr_Controller_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bpavhpzcz4 ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . bpavhpzcz4 ) )
; } } void mr_Controller_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1579323245U , 1279378837U , 2673913153U ,
1456148344U , } ; slmrModelRefRegisterSimStateChecksum ( S , "Controller" , &
chksum [ 0 ] ) ; } mxArray * mr_Controller_GetSimStateDisallowedBlocks ( ) {
return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
