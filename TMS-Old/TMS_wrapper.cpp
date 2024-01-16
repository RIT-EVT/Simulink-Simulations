
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#define SIMPLIFIED_RTWTYPES_COMPATIBILITY
#include "rtwtypes.h"
#undef SIMPLIFIED_RTWTYPES_COMPATIBILITY
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1
#define y_1_width 1
#define y_2_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void TMS_Outputs_wrapper(const real_T *Temp,
			real_T *pumpSpeed,
			real_T *fan1Speed,
			real_T *fan2Speed)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
if (Temp[0]>= 50) {
    pumpSpeed[0] = 100;
    fan1Speed[0] = 100;
    fan2Speed[0] = 100;
}
    else if (Temp[0] >= 40) {
    pumpSpeed[0] = 75;
    fan1Speed[0] = 75;
    fan2Speed[0] = 75;
    }
    else if (Temp[0] >= 30) {
    pumpSpeed[0] = 50;
    fan1Speed[0] = 50;
    fan2Speed[0] = 50;
    }
    else {
    pumpSpeed[0] = 50;
    fan1Speed[0] = 0;
    fan2Speed[0] = 0;
    }
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


