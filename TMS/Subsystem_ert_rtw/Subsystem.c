/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Subsystem.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 4.4
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Sep 19 20:19:21 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem.h"

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
  /* Switch: '<S1>/Switch1' incorporates:
   *  Inport: '<Root>/In1'
   *  Switch: '<S1>/Switch'
   *  Switch: '<S1>/Switch2'
   *  Switch: '<S1>/Switch3'
   *  Switch: '<S1>/Switch4'
   */
  if (Subsystem_U.In1 >= 50.0) {
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S1>/Constant'
     */
    Subsystem_Y.Out2 = 100.0;

    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    Subsystem_Y.Out1 = 100.0;
  } else if (Subsystem_U.In1 >= 40.0) {
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Switch: '<S1>/Switch'
     */
    Subsystem_Y.Out2 = 75.0;

    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Switch: '<S1>/Switch3'
     */
    Subsystem_Y.Out1 = 75.0;
  } else {
    if (Subsystem_U.In1 >= 30.0) {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Constant2'
       *  Outport: '<Root>/Out2'
       *  Switch: '<S1>/Switch'
       */
      Subsystem_Y.Out2 = 50.0;
    } else {
      /* Outport: '<Root>/Out2' incorporates:
       *  Constant: '<S1>/Constant3'
       *  Switch: '<S1>/Switch'
       *  Switch: '<S1>/Switch2'
       */
      Subsystem_Y.Out2 = 0.0;
    }

    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<S1>/Constant2'
     *  Switch: '<S1>/Switch3'
     *  Switch: '<S1>/Switch5'
     */
    Subsystem_Y.Out1 = 50.0;
  }

  /* End of Switch: '<S1>/Switch1' */
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
