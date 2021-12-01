/*
 * KalmanFilterSim.h
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

#ifndef RTW_HEADER_KalmanFilterSim_h_
#define RTW_HEADER_KalmanFilterSim_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef KalmanFilterSim_COMMON_INCLUDES_
# define KalmanFilterSim_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* KalmanFilterSim_COMMON_INCLUDES_ */

#include "KalmanFilterSim_types.h"

/* Shared type includes */
#include "multiword_types.h"
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

/* Block states (auto storage) for system '<S28>/MeasurementUpdate' */
typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S28>/MeasurementUpdate' */
} DW_MeasurementUpdate_KalmanFi_T;

/* Block states (auto storage) for system '<S2>/UseCurrentEstimator' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S33>/Enabled Subsystem' */
} DW_UseCurrentEstimator_Kalman_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  DW_UseCurrentEstimator_Kalman_T UseCurrentEstimator_p;/* '<S5>/UseCurrentEstimator' */
  DW_MeasurementUpdate_KalmanFi_T MeasurementUpdate_i;/* '<S163>/MeasurementUpdate' */
  DW_UseCurrentEstimator_Kalman_T UseCurrentEstimator_d;/* '<S4>/UseCurrentEstimator' */
  DW_MeasurementUpdate_KalmanFi_T MeasurementUpdate_j;/* '<S118>/MeasurementUpdate' */
  DW_UseCurrentEstimator_Kalman_T UseCurrentEstimator_l;/* '<S3>/UseCurrentEstimator' */
  DW_MeasurementUpdate_KalmanFi_T MeasurementUpdate_a;/* '<S73>/MeasurementUpdate' */
  DW_UseCurrentEstimator_Kalman_T UseCurrentEstimator;/* '<S2>/UseCurrentEstimator' */
  DW_MeasurementUpdate_KalmanFi_T MeasurementUpdate;/* '<S28>/MeasurementUpdate' */
} DW_KalmanFilterSim_T;

/* Parameters for system: '<S28>/MeasurementUpdate' */
struct P_MeasurementUpdate_KalmanFil_T_ {
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S53>/L*(y[k]-yhat[k|k-1])'
                                        */
};

/* Parameters for system: '<S2>/UseCurrentEstimator' */
struct P_UseCurrentEstimator_KalmanF_T_ {
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S54>/deltax'
                                        */
};

/* Parameters (auto storage) */
struct P_KalmanFilterSim_T_ {
  boolean_T Enable_Value;              /* Computed Parameter: Enable_Value
                                        * Referenced by: '<S2>/Enable'
                                        */
  boolean_T Enable_Value_e;            /* Computed Parameter: Enable_Value_e
                                        * Referenced by: '<S3>/Enable'
                                        */
  boolean_T Enable_Value_g;            /* Computed Parameter: Enable_Value_g
                                        * Referenced by: '<S4>/Enable'
                                        */
  boolean_T Enable_Value_p;            /* Computed Parameter: Enable_Value_p
                                        * Referenced by: '<S5>/Enable'
                                        */
  P_UseCurrentEstimator_KalmanF_T UseCurrentEstimator_p;/* '<S5>/UseCurrentEstimator' */
  P_MeasurementUpdate_KalmanFil_T MeasurementUpdate_i;/* '<S163>/MeasurementUpdate' */
  P_UseCurrentEstimator_KalmanF_T UseCurrentEstimator_d;/* '<S4>/UseCurrentEstimator' */
  P_MeasurementUpdate_KalmanFil_T MeasurementUpdate_j;/* '<S118>/MeasurementUpdate' */
  P_UseCurrentEstimator_KalmanF_T UseCurrentEstimator_l;/* '<S3>/UseCurrentEstimator' */
  P_MeasurementUpdate_KalmanFil_T MeasurementUpdate_a;/* '<S73>/MeasurementUpdate' */
  P_UseCurrentEstimator_KalmanF_T UseCurrentEstimator;/* '<S2>/UseCurrentEstimator' */
  P_MeasurementUpdate_KalmanFil_T MeasurementUpdate;/* '<S28>/MeasurementUpdate' */
};

/* Real-time Model Data Structure */
struct tag_RTM_KalmanFilterSim_T {
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
extern P_KalmanFilterSim_T KalmanFilterSim_P;

/* Block states (auto storage) */
extern DW_KalmanFilterSim_T KalmanFilterSim_DW;

/* Model entry point functions */
extern void KalmanFilterSim_initialize(void);
extern void KalmanFilterSim_step(void);
extern void KalmanFilterSim_terminate(void);

/* Real-time Model object */
extern RT_MODEL_KalmanFilterSim_T *const KalmanFilterSim_M;

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
 * '<Root>' : 'KalmanFilterSim'
 * '<S1>'   : 'KalmanFilterSim/Hilbert Filter'
 * '<S2>'   : 'KalmanFilterSim/Kalman Filter1'
 * '<S3>'   : 'KalmanFilterSim/Kalman Filter2'
 * '<S4>'   : 'KalmanFilterSim/Kalman Filter3'
 * '<S5>'   : 'KalmanFilterSim/Kalman Filter4'
 * '<S6>'   : 'KalmanFilterSim/Signal From Workspace'
 * '<S7>'   : 'KalmanFilterSim/Signal From Workspace2'
 * '<S8>'   : 'KalmanFilterSim/Signal From Workspace4'
 * '<S9>'   : 'KalmanFilterSim/Hilbert Filter/Generated Filter Block'
 * '<S10>'  : 'KalmanFilterSim/Kalman Filter1/CalculatePL'
 * '<S11>'  : 'KalmanFilterSim/Kalman Filter1/CalculateYhat'
 * '<S12>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionA'
 * '<S13>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionB'
 * '<S14>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionC'
 * '<S15>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionD'
 * '<S16>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionG'
 * '<S17>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionH'
 * '<S18>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionN'
 * '<S19>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionP'
 * '<S20>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionP0'
 * '<S21>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionQ'
 * '<S22>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionR'
 * '<S23>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionReset'
 * '<S24>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionX'
 * '<S25>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionX0'
 * '<S26>'  : 'KalmanFilterSim/Kalman Filter1/DataTypeConversionu'
 * '<S27>'  : 'KalmanFilterSim/Kalman Filter1/MemoryP'
 * '<S28>'  : 'KalmanFilterSim/Kalman Filter1/Observer'
 * '<S29>'  : 'KalmanFilterSim/Kalman Filter1/ReducedQRN'
 * '<S30>'  : 'KalmanFilterSim/Kalman Filter1/ScalarExpansionP0'
 * '<S31>'  : 'KalmanFilterSim/Kalman Filter1/ScalarExpansionQ'
 * '<S32>'  : 'KalmanFilterSim/Kalman Filter1/ScalarExpansionR'
 * '<S33>'  : 'KalmanFilterSim/Kalman Filter1/UseCurrentEstimator'
 * '<S34>'  : 'KalmanFilterSim/Kalman Filter1/checkA'
 * '<S35>'  : 'KalmanFilterSim/Kalman Filter1/checkB'
 * '<S36>'  : 'KalmanFilterSim/Kalman Filter1/checkC'
 * '<S37>'  : 'KalmanFilterSim/Kalman Filter1/checkD'
 * '<S38>'  : 'KalmanFilterSim/Kalman Filter1/checkEnable'
 * '<S39>'  : 'KalmanFilterSim/Kalman Filter1/checkG'
 * '<S40>'  : 'KalmanFilterSim/Kalman Filter1/checkH'
 * '<S41>'  : 'KalmanFilterSim/Kalman Filter1/checkN'
 * '<S42>'  : 'KalmanFilterSim/Kalman Filter1/checkP0'
 * '<S43>'  : 'KalmanFilterSim/Kalman Filter1/checkQ'
 * '<S44>'  : 'KalmanFilterSim/Kalman Filter1/checkR'
 * '<S45>'  : 'KalmanFilterSim/Kalman Filter1/checkReset'
 * '<S46>'  : 'KalmanFilterSim/Kalman Filter1/checkX0'
 * '<S47>'  : 'KalmanFilterSim/Kalman Filter1/checku'
 * '<S48>'  : 'KalmanFilterSim/Kalman Filter1/checky'
 * '<S49>'  : 'KalmanFilterSim/Kalman Filter1/CalculatePL/DataTypeConversionL'
 * '<S50>'  : 'KalmanFilterSim/Kalman Filter1/CalculatePL/DataTypeConversionM'
 * '<S51>'  : 'KalmanFilterSim/Kalman Filter1/CalculatePL/DataTypeConversionP'
 * '<S52>'  : 'KalmanFilterSim/Kalman Filter1/CalculatePL/DataTypeConversionZ'
 * '<S53>'  : 'KalmanFilterSim/Kalman Filter1/Observer/MeasurementUpdate'
 * '<S54>'  : 'KalmanFilterSim/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem'
 * '<S55>'  : 'KalmanFilterSim/Kalman Filter2/CalculatePL'
 * '<S56>'  : 'KalmanFilterSim/Kalman Filter2/CalculateYhat'
 * '<S57>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionA'
 * '<S58>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionB'
 * '<S59>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionC'
 * '<S60>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionD'
 * '<S61>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionG'
 * '<S62>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionH'
 * '<S63>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionN'
 * '<S64>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionP'
 * '<S65>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionP0'
 * '<S66>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionQ'
 * '<S67>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionR'
 * '<S68>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionReset'
 * '<S69>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionX'
 * '<S70>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionX0'
 * '<S71>'  : 'KalmanFilterSim/Kalman Filter2/DataTypeConversionu'
 * '<S72>'  : 'KalmanFilterSim/Kalman Filter2/MemoryP'
 * '<S73>'  : 'KalmanFilterSim/Kalman Filter2/Observer'
 * '<S74>'  : 'KalmanFilterSim/Kalman Filter2/ReducedQRN'
 * '<S75>'  : 'KalmanFilterSim/Kalman Filter2/ScalarExpansionP0'
 * '<S76>'  : 'KalmanFilterSim/Kalman Filter2/ScalarExpansionQ'
 * '<S77>'  : 'KalmanFilterSim/Kalman Filter2/ScalarExpansionR'
 * '<S78>'  : 'KalmanFilterSim/Kalman Filter2/UseCurrentEstimator'
 * '<S79>'  : 'KalmanFilterSim/Kalman Filter2/checkA'
 * '<S80>'  : 'KalmanFilterSim/Kalman Filter2/checkB'
 * '<S81>'  : 'KalmanFilterSim/Kalman Filter2/checkC'
 * '<S82>'  : 'KalmanFilterSim/Kalman Filter2/checkD'
 * '<S83>'  : 'KalmanFilterSim/Kalman Filter2/checkEnable'
 * '<S84>'  : 'KalmanFilterSim/Kalman Filter2/checkG'
 * '<S85>'  : 'KalmanFilterSim/Kalman Filter2/checkH'
 * '<S86>'  : 'KalmanFilterSim/Kalman Filter2/checkN'
 * '<S87>'  : 'KalmanFilterSim/Kalman Filter2/checkP0'
 * '<S88>'  : 'KalmanFilterSim/Kalman Filter2/checkQ'
 * '<S89>'  : 'KalmanFilterSim/Kalman Filter2/checkR'
 * '<S90>'  : 'KalmanFilterSim/Kalman Filter2/checkReset'
 * '<S91>'  : 'KalmanFilterSim/Kalman Filter2/checkX0'
 * '<S92>'  : 'KalmanFilterSim/Kalman Filter2/checku'
 * '<S93>'  : 'KalmanFilterSim/Kalman Filter2/checky'
 * '<S94>'  : 'KalmanFilterSim/Kalman Filter2/CalculatePL/DataTypeConversionL'
 * '<S95>'  : 'KalmanFilterSim/Kalman Filter2/CalculatePL/DataTypeConversionM'
 * '<S96>'  : 'KalmanFilterSim/Kalman Filter2/CalculatePL/DataTypeConversionP'
 * '<S97>'  : 'KalmanFilterSim/Kalman Filter2/CalculatePL/DataTypeConversionZ'
 * '<S98>'  : 'KalmanFilterSim/Kalman Filter2/Observer/MeasurementUpdate'
 * '<S99>'  : 'KalmanFilterSim/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem'
 * '<S100>' : 'KalmanFilterSim/Kalman Filter3/CalculatePL'
 * '<S101>' : 'KalmanFilterSim/Kalman Filter3/CalculateYhat'
 * '<S102>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionA'
 * '<S103>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionB'
 * '<S104>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionC'
 * '<S105>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionD'
 * '<S106>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionG'
 * '<S107>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionH'
 * '<S108>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionN'
 * '<S109>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionP'
 * '<S110>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionP0'
 * '<S111>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionQ'
 * '<S112>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionR'
 * '<S113>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionReset'
 * '<S114>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionX'
 * '<S115>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionX0'
 * '<S116>' : 'KalmanFilterSim/Kalman Filter3/DataTypeConversionu'
 * '<S117>' : 'KalmanFilterSim/Kalman Filter3/MemoryP'
 * '<S118>' : 'KalmanFilterSim/Kalman Filter3/Observer'
 * '<S119>' : 'KalmanFilterSim/Kalman Filter3/ReducedQRN'
 * '<S120>' : 'KalmanFilterSim/Kalman Filter3/ScalarExpansionP0'
 * '<S121>' : 'KalmanFilterSim/Kalman Filter3/ScalarExpansionQ'
 * '<S122>' : 'KalmanFilterSim/Kalman Filter3/ScalarExpansionR'
 * '<S123>' : 'KalmanFilterSim/Kalman Filter3/UseCurrentEstimator'
 * '<S124>' : 'KalmanFilterSim/Kalman Filter3/checkA'
 * '<S125>' : 'KalmanFilterSim/Kalman Filter3/checkB'
 * '<S126>' : 'KalmanFilterSim/Kalman Filter3/checkC'
 * '<S127>' : 'KalmanFilterSim/Kalman Filter3/checkD'
 * '<S128>' : 'KalmanFilterSim/Kalman Filter3/checkEnable'
 * '<S129>' : 'KalmanFilterSim/Kalman Filter3/checkG'
 * '<S130>' : 'KalmanFilterSim/Kalman Filter3/checkH'
 * '<S131>' : 'KalmanFilterSim/Kalman Filter3/checkN'
 * '<S132>' : 'KalmanFilterSim/Kalman Filter3/checkP0'
 * '<S133>' : 'KalmanFilterSim/Kalman Filter3/checkQ'
 * '<S134>' : 'KalmanFilterSim/Kalman Filter3/checkR'
 * '<S135>' : 'KalmanFilterSim/Kalman Filter3/checkReset'
 * '<S136>' : 'KalmanFilterSim/Kalman Filter3/checkX0'
 * '<S137>' : 'KalmanFilterSim/Kalman Filter3/checku'
 * '<S138>' : 'KalmanFilterSim/Kalman Filter3/checky'
 * '<S139>' : 'KalmanFilterSim/Kalman Filter3/CalculatePL/DataTypeConversionL'
 * '<S140>' : 'KalmanFilterSim/Kalman Filter3/CalculatePL/DataTypeConversionM'
 * '<S141>' : 'KalmanFilterSim/Kalman Filter3/CalculatePL/DataTypeConversionP'
 * '<S142>' : 'KalmanFilterSim/Kalman Filter3/CalculatePL/DataTypeConversionZ'
 * '<S143>' : 'KalmanFilterSim/Kalman Filter3/Observer/MeasurementUpdate'
 * '<S144>' : 'KalmanFilterSim/Kalman Filter3/UseCurrentEstimator/Enabled Subsystem'
 * '<S145>' : 'KalmanFilterSim/Kalman Filter4/CalculatePL'
 * '<S146>' : 'KalmanFilterSim/Kalman Filter4/CalculateYhat'
 * '<S147>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionA'
 * '<S148>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionB'
 * '<S149>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionC'
 * '<S150>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionD'
 * '<S151>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionG'
 * '<S152>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionH'
 * '<S153>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionN'
 * '<S154>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionP'
 * '<S155>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionP0'
 * '<S156>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionQ'
 * '<S157>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionR'
 * '<S158>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionReset'
 * '<S159>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionX'
 * '<S160>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionX0'
 * '<S161>' : 'KalmanFilterSim/Kalman Filter4/DataTypeConversionu'
 * '<S162>' : 'KalmanFilterSim/Kalman Filter4/MemoryP'
 * '<S163>' : 'KalmanFilterSim/Kalman Filter4/Observer'
 * '<S164>' : 'KalmanFilterSim/Kalman Filter4/ReducedQRN'
 * '<S165>' : 'KalmanFilterSim/Kalman Filter4/ScalarExpansionP0'
 * '<S166>' : 'KalmanFilterSim/Kalman Filter4/ScalarExpansionQ'
 * '<S167>' : 'KalmanFilterSim/Kalman Filter4/ScalarExpansionR'
 * '<S168>' : 'KalmanFilterSim/Kalman Filter4/UseCurrentEstimator'
 * '<S169>' : 'KalmanFilterSim/Kalman Filter4/checkA'
 * '<S170>' : 'KalmanFilterSim/Kalman Filter4/checkB'
 * '<S171>' : 'KalmanFilterSim/Kalman Filter4/checkC'
 * '<S172>' : 'KalmanFilterSim/Kalman Filter4/checkD'
 * '<S173>' : 'KalmanFilterSim/Kalman Filter4/checkEnable'
 * '<S174>' : 'KalmanFilterSim/Kalman Filter4/checkG'
 * '<S175>' : 'KalmanFilterSim/Kalman Filter4/checkH'
 * '<S176>' : 'KalmanFilterSim/Kalman Filter4/checkN'
 * '<S177>' : 'KalmanFilterSim/Kalman Filter4/checkP0'
 * '<S178>' : 'KalmanFilterSim/Kalman Filter4/checkQ'
 * '<S179>' : 'KalmanFilterSim/Kalman Filter4/checkR'
 * '<S180>' : 'KalmanFilterSim/Kalman Filter4/checkReset'
 * '<S181>' : 'KalmanFilterSim/Kalman Filter4/checkX0'
 * '<S182>' : 'KalmanFilterSim/Kalman Filter4/checku'
 * '<S183>' : 'KalmanFilterSim/Kalman Filter4/checky'
 * '<S184>' : 'KalmanFilterSim/Kalman Filter4/CalculatePL/DataTypeConversionL'
 * '<S185>' : 'KalmanFilterSim/Kalman Filter4/CalculatePL/DataTypeConversionM'
 * '<S186>' : 'KalmanFilterSim/Kalman Filter4/CalculatePL/DataTypeConversionP'
 * '<S187>' : 'KalmanFilterSim/Kalman Filter4/CalculatePL/DataTypeConversionZ'
 * '<S188>' : 'KalmanFilterSim/Kalman Filter4/Observer/MeasurementUpdate'
 * '<S189>' : 'KalmanFilterSim/Kalman Filter4/UseCurrentEstimator/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_KalmanFilterSim_h_ */
