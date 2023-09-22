/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TMS0.c
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

#include "TMS0.h"
#include "TMS0_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_TMS0_T TMS0_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TMS0_T TMS0_Y;

/* Real-time model */
static RT_MODEL_TMS0_T TMS0_M_;
RT_MODEL_TMS0_T *const TMS0_M = &TMS0_M_;

/* Model step function */
void TMS0_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/TMS' */

  /* S-Function (TMS): '<S1>/S-Function Builder' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   *  Outport: '<Root>/Out2'
   *  Outport: '<Root>/Out3'
   */
  TMS_Outputs_wrapper(&TMS0_U.In1, &TMS0_Y.Out1, &TMS0_Y.Out2, &TMS0_Y.Out3);

  /* End of Outputs for SubSystem: '<Root>/TMS' */
}

/* Model initialize function */
void TMS0_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void TMS0_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
