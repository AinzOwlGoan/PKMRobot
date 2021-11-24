/*
 * kalmanSimulink_types.h
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

#ifndef RTW_HEADER_kalmanSimulink_types_h_
#define RTW_HEADER_kalmanSimulink_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

/* Custom Type definition for MATLAB Function: '<Root>/DinamicaInversa' */
#ifndef struct_tag_ssuCSsEJFa1a3Z2WZlLiziH
#define struct_tag_ssuCSsEJFa1a3Z2WZlLiziH

struct tag_ssuCSsEJFa1a3Z2WZlLiziH
{
  real_T l;
  real_T m;
  real_T cm;
  real_T J;
  real_T d;
};

#endif                                 /*struct_tag_ssuCSsEJFa1a3Z2WZlLiziH*/

#ifndef typedef_ssuCSsEJFa1a3Z2WZlLiziH_kalma_T
#define typedef_ssuCSsEJFa1a3Z2WZlLiziH_kalma_T

typedef struct tag_ssuCSsEJFa1a3Z2WZlLiziH ssuCSsEJFa1a3Z2WZlLiziH_kalma_T;

#endif                                 /*typedef_ssuCSsEJFa1a3Z2WZlLiziH_kalma_T*/

#ifndef struct_tag_sTwYrgnqAJaIbw6sIQWCUZ
#define struct_tag_sTwYrgnqAJaIbw6sIQWCUZ

struct tag_sTwYrgnqAJaIbw6sIQWCUZ
{
  real_T me;
  real_T pv;
  real_T z0;
  real_T Jv;
};

#endif                                 /*struct_tag_sTwYrgnqAJaIbw6sIQWCUZ*/

#ifndef typedef_sTwYrgnqAJaIbw6sIQWCUZ_kalman_T
#define typedef_sTwYrgnqAJaIbw6sIQWCUZ_kalman_T

typedef struct tag_sTwYrgnqAJaIbw6sIQWCUZ sTwYrgnqAJaIbw6sIQWCUZ_kalman_T;

#endif                                 /*typedef_sTwYrgnqAJaIbw6sIQWCUZ_kalman_T*/

#ifndef struct_tag_ss3HIcL3PsSdo46dkekEzLH
#define struct_tag_ss3HIcL3PsSdo46dkekEzLH

struct tag_ss3HIcL3PsSdo46dkekEzLH
{
  ssuCSsEJFa1a3Z2WZlLiziH_kalma_T link;
  sTwYrgnqAJaIbw6sIQWCUZ_kalman_T vite;
};

#endif                                 /*struct_tag_ss3HIcL3PsSdo46dkekEzLH*/

#ifndef typedef_ss3HIcL3PsSdo46dkekEzLH_kalma_T
#define typedef_ss3HIcL3PsSdo46dkekEzLH_kalma_T

typedef struct tag_ss3HIcL3PsSdo46dkekEzLH ss3HIcL3PsSdo46dkekEzLH_kalma_T;

#endif                                 /*typedef_ss3HIcL3PsSdo46dkekEzLH_kalma_T*/

/* Parameters (auto storage) */
typedef struct P_kalmanSimulink_T_ P_kalmanSimulink_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_kalmanSimulink_T RT_MODEL_kalmanSimulink_T;

#endif                                 /* RTW_HEADER_kalmanSimulink_types_h_ */
