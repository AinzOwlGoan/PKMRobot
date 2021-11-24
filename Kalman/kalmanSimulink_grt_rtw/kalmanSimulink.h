/*
 * kalmanSimulink.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "kalmanSimulink".
 *
 * Model version              : 1.118
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Nov 24 14:55:35 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_kalmanSimulink_h_
#define RTW_HEADER_kalmanSimulink_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef kalmanSimulink_COMMON_INCLUDES_
# define kalmanSimulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* kalmanSimulink_COMMON_INCLUDES_ */

#include "kalmanSimulink_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<S6>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK_i;             /* '<S7>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<S6>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK_m;             /* '<S7>/From Workspace' */
} DW_kalmanSimulink_T;

/* Parameters (auto storage) */
struct P_kalmanSimulink_T_ {
  real_T Vk_Value;                     /* Expression: 1
                                        * Referenced by: '<Root>/Vk'
                                        */
  real_T Wk_Value;                     /* Expression: 1
                                        * Referenced by: '<Root>/Wk'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_kalmanSimulink_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_kalmanSimulink_T kalmanSimulink_P;

/* Block states (auto storage) */
extern DW_kalmanSimulink_T kalmanSimulink_DW;

/* Model entry point functions */
extern void kalmanSimulink_initialize(void);
extern void kalmanSimulink_step(void);
extern void kalmanSimulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_kalmanSimulink_T *const kalmanSimulink_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'kalmanSimulink'
 * '<S1>'   : 'kalmanSimulink/DinamicaInversa'
 * '<S2>'   : 'kalmanSimulink/Id metodo'
 * '<S3>'   : 'kalmanSimulink/Id modello'
 * '<S4>'   : 'kalmanSimulink/PassoStima std'
 * '<S5>'   : 'kalmanSimulink/Predizione'
 * '<S6>'   : 'kalmanSimulink/Signal From Workspace'
 * '<S7>'   : 'kalmanSimulink/Signal From Workspace1'
 */
#endif                                 /* RTW_HEADER_kalmanSimulink_h_ */
