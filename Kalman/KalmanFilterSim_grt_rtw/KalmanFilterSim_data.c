/*
 * KalmanFilterSim_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "KalmanFilterSim".
 *
 * Model version              : 1.21
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Dec 01 13:43:54 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "KalmanFilterSim.h"
#include "KalmanFilterSim_private.h"

/* Block parameters (auto storage) */
P_KalmanFilterSim_T KalmanFilterSim_P = {
  1,                                   /* Computed Parameter: Enable_Value
                                        * Referenced by: '<S2>/Enable'
                                        */
  1,                                   /* Computed Parameter: Enable_Value_e
                                        * Referenced by: '<S3>/Enable'
                                        */
  1,                                   /* Computed Parameter: Enable_Value_g
                                        * Referenced by: '<S4>/Enable'
                                        */
  1,                                   /* Computed Parameter: Enable_Value_p
                                        * Referenced by: '<S5>/Enable'
                                        */

  /* Start of '<S5>/UseCurrentEstimator' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S189>/deltax'
                                        */
  }
  ,

  /* End of '<S5>/UseCurrentEstimator' */

  /* Start of '<S163>/MeasurementUpdate' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S188>/L*(y[k]-yhat[k|k-1])'
                                        */
  }
  ,

  /* End of '<S163>/MeasurementUpdate' */

  /* Start of '<S4>/UseCurrentEstimator' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S144>/deltax'
                                        */
  }
  ,

  /* End of '<S4>/UseCurrentEstimator' */

  /* Start of '<S118>/MeasurementUpdate' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S143>/L*(y[k]-yhat[k|k-1])'
                                        */
  }
  ,

  /* End of '<S118>/MeasurementUpdate' */

  /* Start of '<S3>/UseCurrentEstimator' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S99>/deltax'
                                        */
  }
  ,

  /* End of '<S3>/UseCurrentEstimator' */

  /* Start of '<S73>/MeasurementUpdate' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S98>/L*(y[k]-yhat[k|k-1])'
                                        */
  }
  ,

  /* End of '<S73>/MeasurementUpdate' */

  /* Start of '<S2>/UseCurrentEstimator' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S54>/deltax'
                                        */
  }
  ,

  /* End of '<S2>/UseCurrentEstimator' */

  /* Start of '<S28>/MeasurementUpdate' */
  {
    0.0                                /* Expression: 0
                                        * Referenced by: '<S53>/L*(y[k]-yhat[k|k-1])'
                                        */
  }
  /* End of '<S28>/MeasurementUpdate' */
};
