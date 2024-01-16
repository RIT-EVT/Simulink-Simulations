/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Subsystem.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 4.7
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Sep 21 20:29:08 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem.h"
#include "Subsystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Subsystem_T Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Subsystem_T Subsystem_Y;

/* Real-time model */
static RT_MODEL_Subsystem_T Subsystem_M_;
RT_MODEL_Subsystem_T *const Subsystem_M = &Subsystem_M_;

/* Model step function */
void Subsystem_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* S-Function (TMS): '<S1>/S-Function Builder' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   *  Outport: '<Root>/Out2'
   *  Outport: '<Root>/Out3'
   */
  TMS_Outputs_wrapper(&Subsystem_U.In1, &Subsystem_Y.Out1, &Subsystem_Y.Out2,
                      &Subsystem_Y.Out3);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
