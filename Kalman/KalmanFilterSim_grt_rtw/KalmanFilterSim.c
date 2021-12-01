/*
 * KalmanFilterSim.c
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

/* Block states (auto storage) */
DW_KalmanFilterSim_T KalmanFilterSim_DW;

/* Real-time model */
RT_MODEL_KalmanFilterSim_T KalmanFilterSim_M_;
RT_MODEL_KalmanFilterSim_T *const KalmanFilterSim_M = &KalmanFilterSim_M_;

/* Model step function */
void KalmanFilterSim_step(void)
{
  /* Matfile logging */
  rt_UpdateTXYLogVars(KalmanFilterSim_M->rtwLogInfo,
                      (&KalmanFilterSim_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(KalmanFilterSim_M)!=-1) &&
        !((rtmGetTFinal(KalmanFilterSim_M)-KalmanFilterSim_M->Timing.taskTime0) >
          KalmanFilterSim_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(KalmanFilterSim_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++KalmanFilterSim_M->Timing.clockTick0)) {
    ++KalmanFilterSim_M->Timing.clockTickH0;
  }

  KalmanFilterSim_M->Timing.taskTime0 = KalmanFilterSim_M->Timing.clockTick0 *
    KalmanFilterSim_M->Timing.stepSize0 + KalmanFilterSim_M->Timing.clockTickH0 *
    KalmanFilterSim_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void KalmanFilterSim_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)KalmanFilterSim_M, 0,
                sizeof(RT_MODEL_KalmanFilterSim_T));
  rtmSetTFinal(KalmanFilterSim_M, 3.0);
  KalmanFilterSim_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    KalmanFilterSim_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(KalmanFilterSim_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(KalmanFilterSim_M->rtwLogInfo, (NULL));
    rtliSetLogT(KalmanFilterSim_M->rtwLogInfo, "tout");
    rtliSetLogX(KalmanFilterSim_M->rtwLogInfo, "");
    rtliSetLogXFinal(KalmanFilterSim_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(KalmanFilterSim_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(KalmanFilterSim_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(KalmanFilterSim_M->rtwLogInfo, 0);
    rtliSetLogDecimation(KalmanFilterSim_M->rtwLogInfo, 1);
    rtliSetLogY(KalmanFilterSim_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(KalmanFilterSim_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(KalmanFilterSim_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&KalmanFilterSim_DW, 0,
                sizeof(DW_KalmanFilterSim_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(KalmanFilterSim_M->rtwLogInfo, 0.0,
    rtmGetTFinal(KalmanFilterSim_M), KalmanFilterSim_M->Timing.stepSize0,
    (&rtmGetErrorStatus(KalmanFilterSim_M)));
}

/* Model terminate function */
void KalmanFilterSim_terminate(void)
{
  /* (no terminate code required) */
}
