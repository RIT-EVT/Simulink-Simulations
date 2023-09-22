/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Subsystem_private.h
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

#ifndef RTW_HEADER_Subsystem_private_h_
#define RTW_HEADER_Subsystem_private_h_
#include "rtwtypes.h"
#include "Subsystem_types.h"
#ifdef __cplusplus
#define SFB_EXTERN_C                   extern "C"
#else
#define SFB_EXTERN_C                   extern
#endif

SFB_EXTERN_C void TMS_Start_wrapper(void);
SFB_EXTERN_C void TMS_Outputs_wrapper(const real_T *Temp,
  real_T *pumpSpeed,
  real_T *fan1Speed,
  real_T *fan2Speed);
SFB_EXTERN_C void TMS_Terminate_wrapper(void);

#undef SFB_EXTERN_C
#endif                                 /* RTW_HEADER_Subsystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
