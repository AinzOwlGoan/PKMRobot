/*
 * StateflowKalman_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateflowKalman".
 *
 * Model version              : 1.1142
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Dec 06 14:16:06 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateflowKalman_private_h_
#define RTW_HEADER_StateflowKalman_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "StateflowKalman.h"

extern unsigned int xmlecatArr_0_count;
extern unsigned char xmlecatArr_0[];
extern int_T slrtEcatDCM[8];           // From master shift controller
int32_T dcmHwSetIntTimestamp( void );
void dcmCtlExecJob();                  // Master shift control job
extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void xpcethercatpdotx(SimStruct *rts);
extern void xpcethercatpdorx(SimStruct *rts);
extern void StateflowKalman_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateflowKal_T *localB);
extern void Stateflo_MeasurementUpdate_Init(B_MeasurementUpdate_Stateflow_T
  *localB, P_MeasurementUpdate_Stateflow_T *localP);
extern void Statefl_MeasurementUpdate_Start(DW_MeasurementUpdate_Stateflo_T
  *localDW);
extern void State_MeasurementUpdate_Disable(B_MeasurementUpdate_Stateflow_T
  *localB, DW_MeasurementUpdate_Stateflo_T *localDW,
  P_MeasurementUpdate_Stateflow_T *localP);
extern void StateflowKalm_MeasurementUpdate(boolean_T rtu_Enable, const real_T
  rtu_Lk[2], real_T rtu_yk, const real_T rtu_Ck[2], const real_T rtu_xhatkk1[2],
  real_T rtu_Dk, real_T rtu_uk, B_MeasurementUpdate_Stateflow_T *localB,
  DW_MeasurementUpdate_Stateflo_T *localDW, P_MeasurementUpdate_Stateflow_T
  *localP);
extern void Statef_UseCurrentEstimator_Init(B_UseCurrentEstimator_Statefl_T
  *localB, P_UseCurrentEstimator_Statefl_T *localP);
extern void State_UseCurrentEstimator_Start(DW_UseCurrentEstimator_Statef_T
  *localDW);
extern void StateflowKa_UseCurrentEstimator(boolean_T rtu_Enablek, const real_T
  rtu_Mk[2], real_T rtu_uk, real_T rtu_yk, const real_T rtu_Ck[2], real_T rtu_Dk,
  const real_T rtu_xhatkk1[2], B_UseCurrentEstimator_Statefl_T *localB,
  DW_UseCurrentEstimator_Statef_T *localDW, P_UseCurrentEstimator_Statefl_T
  *localP);

#endif                                 /* RTW_HEADER_StateflowKalman_private_h_ */
