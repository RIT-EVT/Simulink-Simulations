/*
 * File: TMS0_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef TMS0_CA_H
#define TMS0_CA_H

/* preprocessor validation checks */
#include "TMS0_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_TMS0_HWRes;
extern CA_PWS_TestResults CA_TMS0_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_TMS0_ExpHW;
extern CA_HWImpl CA_TMS0_ActHW;

/* entry point function to run tests */
void TMS0_caRunTests(void);

#endif                                 /* TMS0_CA_H */
