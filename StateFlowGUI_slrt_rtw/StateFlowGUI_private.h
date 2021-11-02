/*
 * StateFlowGUI_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.746
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Nov 02 15:30:51 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateFlowGUI_private_h_
#define RTW_HEADER_StateFlowGUI_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "StateFlowGUI.h"

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
extern void StateFlowG_CinematicaInversavel(real_T rtu_theta1, real_T rtu_theta2,
  real_T rtu_x, real_T rtu_y, real_T rtu_xp, real_T rtu_yp,
  B_CinematicaInversavel_StateF_T *localB);
extern void StateFlowGUI_AsseAconvbracc(real_T rtu_p,
  B_AsseAconvbracc_StateFlowGUI_T *localB);
extern void StateFlowGUI_VelAsseAconv(real_T rtu_vA,
  B_VelAsseAconv_StateFlowGUI_T *localB);
extern void StateFlowGUI_VelAsseBconv(real_T rtu_p,
  B_VelAsseBconv_StateFlowGUI_T *localB);
extern void StateFlowGUI_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateFlowGUI_T *localB);
extern void StateFlowGUI_AsseB(real_T rtu_t, real_T rtu_h, real_T rtu_T,
  B_AsseB_StateFlowGUI_T *localB);

#endif                                 /* RTW_HEADER_StateFlowGUI_private_h_ */
