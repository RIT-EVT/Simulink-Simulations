/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TMS0.h
 *
 * Code generated for Simulink model 'TMS0'.
 *
 * Model version                  : 4.7
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Sep 21 20:32:34 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TMS0_h_
#define RTW_HEADER_TMS0_h_
#ifndef TMS0_COMMON_INCLUDES_
#define TMS0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TMS0_COMMON_INCLUDES_ */

#include "TMS0_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_TMS0_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
} ExtY_TMS0_T;

/* Real-time Model Data Structure */
struct tag_RTM_TMS0_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_TMS0_T TMS0_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TMS0_T TMS0_Y;

/* Model entry point functions */
extern void TMS0_initialize(void);
extern void TMS0_step(void);
extern void TMS0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TMS0_T *const TMS0_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('SIL_TMS/Subsystem/TMS')    - opens subsystem SIL_TMS/Subsystem/TMS
 * hilite_system('SIL_TMS/Subsystem/TMS/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SIL_TMS/Subsystem'
 * '<S1>'   : 'SIL_TMS/Subsystem/TMS'
 */
#endif                                 /* RTW_HEADER_TMS0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
