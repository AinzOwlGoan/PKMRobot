/*
 * State_Flow_vel_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "State_Flow_vel".
 *
 * Model version              : 1.369
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Sep 29 11:07:14 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_State_Flow_vel_types_h_
#define RTW_HEADER_State_Flow_vel_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common_State_Flow_v_T
#define typedef_emxArray__common_State_Flow_v_T

typedef struct emxArray__common emxArray__common_State_Flow_v_T;

#endif                                 /*typedef_emxArray__common_State_Flow_v_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T_State_Flow_ve_T
#define typedef_emxArray_real_T_State_Flow_ve_T

typedef struct emxArray_real_T emxArray_real_T_State_Flow_ve_T;

#endif                                 /*typedef_emxArray_real_T_State_Flow_ve_T*/

/* Parameters (auto storage) */
typedef struct P_State_Flow_vel_T_ P_State_Flow_vel_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_State_Flow_vel_T RT_MODEL_State_Flow_vel_T;

#endif                                 /* RTW_HEADER_State_Flow_vel_types_h_ */
