/*
 * StateflowKalman.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateflowKalman".
 *
 * Model version              : 1.1144
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Dec 06 14:20:18 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "StateflowKalman_capi.h"
#include "StateflowKalman.h"
#include "StateflowKalman_private.h"

/* Named constants for Chart: '<Root>/State flow robot' */
#define StateflowKal_IN_FineLavorazione ((uint8_T)4U)
#define StateflowKal_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define StateflowKalman_IN_Attivazione ((uint8_T)1U)
#define StateflowKalman_IN_Controllo   ((uint8_T)2U)
#define StateflowKalman_IN_Discesa_Vite ((uint8_T)3U)
#define StateflowKalman_IN_Home        ((uint8_T)5U)
#define StateflowKalman_IN_HomeDef     ((uint8_T)6U)
#define StateflowKalman_IN_OffSet      ((uint8_T)7U)
#define StateflowKalman_IN_Step1       ((uint8_T)8U)
#define StateflowKalman_IN_StopPhase   ((uint8_T)9U)

/* Block signals (auto storage) */
B_StateflowKalman_T StateflowKalman_B;

/* Block states (auto storage) */
DW_StateflowKalman_T StateflowKalman_DW;

/* Real-time model */
RT_MODEL_StateflowKalman_T StateflowKalman_M_;
RT_MODEL_StateflowKalman_T *const StateflowKalman_M = &StateflowKalman_M_;

/* Forward declaration for local functions */
static real_T StateflowKalman_mpower(real_T a);
static void StateflowKalman_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f);
static void StateflowKalman_ldm7t(real_T x, real_T *G, real_T *F, real_T *f);
static void StateflowKalman_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f);
static void StateflowKalman_invNxN(const real_T x[16], real_T y[16]);
static void StateflowKalman_DinamicaKalman(const real_T f[4], real_T M[4],
  real_T K[4]);
static void StateflowKalman_mpower_b(const real_T a[4], real_T c[4]);

/*
 * Output and update for atomic system:
 *    '<S23>/MATLAB Function'
 *    '<S26>/MATLAB Function'
 *    '<S30>/MATLAB Function'
 *    '<S32>/MATLAB Function'
 */
void StateflowKalman_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateflowKal_T *localB)
{
  /* MATLAB Function 'Out Asse A Braccia/Fungo/MATLAB Function': '<S25>:1' */
  if ((rtu_old == 0.0) && (rtu_now == 1.0)) {
    /* '<S25>:1:2' */
    /* '<S25>:1:3' */
    localB->y = 1.0;
  } else {
    /* '<S25>:1:5' */
    localB->y = rtu_old;
  }
}

/*
 * System initialize for enable system:
 *    '<S94>/MeasurementUpdate'
 *    '<S139>/MeasurementUpdate'
 */
void Stateflo_MeasurementUpdate_Init(B_MeasurementUpdate_Stateflow_T *localB,
  P_MeasurementUpdate_Stateflow_T *localP)
{
  /* SystemInitialize for Outport: '<S119>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S94>/MeasurementUpdate'
 *    '<S139>/MeasurementUpdate'
 */
void State_MeasurementUpdate_Disable(B_MeasurementUpdate_Stateflow_T *localB,
  DW_MeasurementUpdate_Stateflo_T *localDW, P_MeasurementUpdate_Stateflow_T
  *localP)
{
  /* Disable for Outport: '<S119>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S94>/MeasurementUpdate'
 *    '<S139>/MeasurementUpdate'
 */
void Statefl_MeasurementUpdate_Start(DW_MeasurementUpdate_Stateflo_T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S94>/MeasurementUpdate'
 *    '<S139>/MeasurementUpdate'
 */
void StateflowKalm_MeasurementUpdate(boolean_T rtu_Enable, const real_T rtu_Lk[2],
  real_T rtu_yk, const real_T rtu_Ck[2], const real_T rtu_xhatkk1[2], real_T
  rtu_Dk, real_T rtu_uk, B_MeasurementUpdate_Stateflow_T *localB,
  DW_MeasurementUpdate_Stateflo_T *localDW, P_MeasurementUpdate_Stateflow_T
  *localP)
{
  real_T tmp;
  real_T tmp_0;

  /* Outputs for Enabled SubSystem: '<S94>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Product: '<S119>/C[k]*xhat[k|k-1]' */
    tmp_0 = rtu_Ck[0];
    tmp = tmp_0 * rtu_xhatkk1[0];
    tmp_0 = rtu_Ck[1];
    tmp += tmp_0 * rtu_xhatkk1[1];
    localB->Ckxhatkk1 = tmp;

    /* Product: '<S119>/D[k]*u[k]' */
    localB->Dkuk = rtu_Dk * rtu_uk;

    /* Sum: '<S119>/Add1' */
    localB->yhatkk1 = localB->Ckxhatkk1 + localB->Dkuk;

    /* Sum: '<S119>/Sum' */
    localB->Sum = rtu_yk - localB->yhatkk1;

    /* Product: '<S119>/Product3' */
    tmp_0 = localB->Sum;
    localB->Product3[0] = rtu_Lk[0] * tmp_0;
    localB->Product3[1] = rtu_Lk[1] * tmp_0;
    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      State_MeasurementUpdate_Disable(localB, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S94>/MeasurementUpdate' */
}

/*
 * System initialize for atomic system:
 *    '<S56>/UseCurrentEstimator'
 *    '<S57>/UseCurrentEstimator'
 */
void Statef_UseCurrentEstimator_Init(B_UseCurrentEstimator_Statefl_T *localB,
  P_UseCurrentEstimator_Statefl_T *localP)
{
  /* SystemInitialize for Enabled SubSystem: '<S99>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S120>/deltax' */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S99>/Enabled Subsystem' */
}

/*
 * Start for atomic system:
 *    '<S56>/UseCurrentEstimator'
 *    '<S57>/UseCurrentEstimator'
 */
void State_UseCurrentEstimator_Start(DW_UseCurrentEstimator_Statef_T *localDW)
{
  /* Start for Enabled SubSystem: '<S99>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S99>/Enabled Subsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S56>/UseCurrentEstimator'
 *    '<S57>/UseCurrentEstimator'
 */
void StateflowKa_UseCurrentEstimator(boolean_T rtu_Enablek, const real_T rtu_Mk
  [2], real_T rtu_uk, real_T rtu_yk, const real_T rtu_Ck[2], real_T rtu_Dk,
  const real_T rtu_xhatkk1[2], B_UseCurrentEstimator_Statefl_T *localB,
  DW_UseCurrentEstimator_Statef_T *localDW, P_UseCurrentEstimator_Statefl_T
  *localP)
{
  real_T tmp;
  real_T tmp_0;

  /* Outputs for Enabled SubSystem: '<S99>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S120>/Enable'
   */
  if (rtu_Enablek) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Product: '<S120>/Product' */
    tmp_0 = rtu_Ck[0];
    tmp = tmp_0 * rtu_xhatkk1[0];
    tmp_0 = rtu_Ck[1];
    tmp += tmp_0 * rtu_xhatkk1[1];
    localB->Product = tmp;

    /* Product: '<S120>/Product1' */
    localB->Product1 = rtu_Dk * rtu_uk;

    /* Sum: '<S120>/Add1' */
    localB->Add1 = (rtu_yk - localB->Product) - localB->Product1;

    /* Product: '<S120>/Product2' */
    tmp_0 = localB->Add1;
    localB->Product2[0] = rtu_Mk[0] * tmp_0;
    localB->Product2[1] = rtu_Mk[1] * tmp_0;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S120>/deltax' */
      localB->Product2[0] = localP->deltax_Y0;
      localB->Product2[1] = localP->deltax_Y0;
      localDW->EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S99>/Enabled Subsystem' */

  /* Sum: '<S99>/Add' */
  localB->Add[0] = localB->Product2[0] + rtu_xhatkk1[0];
  localB->Add[1] = localB->Product2[1] + rtu_xhatkk1[1];
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S58>/Quadrato' */
static real_T StateflowKalman_mpower(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

/* Function for MATLAB Function: '<S58>/g' */
static void StateflowKalman_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f)
{
  if ((x >= 0.0) && (x < 0.1)) {
    /* acc crescente positiva */
    *F = x * x * 27.777777777777771;
    *G = 9.259259259259256 * rt_powd_snf(x, 3.0);
    *f = 55.555555555555543 * x;
  } else if ((x >= 0.1) && (x < 0.30000000000000004)) {
    /* acc costante positiva */
    *F = 5.5555555555555545 * x - 0.27777777777777773;
    *G = (x * x * 2.7777777777777772 - 0.27777777777777773 * x) +
      0.0092592592592592587;
    *f = 5.5555555555555545;
  } else if ((x >= 0.30000000000000004) && (x < 0.4)) {
    /* acc decrescente positiva */
    *F = (x * x * -27.777777777777771 + 22.222222222222218 * x) -
      2.7777777777777777;
    *G = ((((x * x * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x,
              3.0)) - 2.7777777777777777 * x) - 0.44444444444444442) +
          0.59259259259259256) + 0.1111111111111111;
    *f = -55.555555555555543 * x + 22.222222222222218;
  } else if ((x >= 0.4) && (x < 0.6)) {
    /* acc costante nulla */
    *F = 1.6666666666666665;
    *G = (1.6666666666666665 * x - 0.44444444444444442) + 0.1111111111111111;
    *f = 0.0;
  } else if ((x >= 0.6) && (x < 0.7)) {
    /* acc decrescente negativa */
    *F = ((x * x * -27.777777777777771 + 33.333333333333321 * x) +
          1.6666666666666665) - 9.9999999999999982;
    *G = (((((x * x * 16.666666666666661 + -9.259259259259256 * rt_powd_snf(x,
               3.0)) + 1.6666666666666665 * x) - 9.9999999999999982 * x) -
           0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
    *f = -55.555555555555543 * x + 33.333333333333321;
  } else if ((x >= 0.7) && (x < 0.9)) {
    /* acc costante negativa */
    *F = (-5.5555555555555545 * x + 5.5555555555555545) - 0.27777777777777773;
    *G = (((x * x * -2.7777777777777772 + 5.5555555555555545 * x) -
           0.27777777777777773 * x) + 1.0) - 2.5092592592592586;
    *f = -5.5555555555555545;
  } else if ((x >= 0.9) && (x <= 1.0)) {
    /* acc crescente negativa */
    *F = (x * x * 27.777777777777771 - 55.555555555555543 * x) +
      27.777777777777771;
    *G = (((9.259259259259256 * rt_powd_snf(x, 3.0) - x * x * 27.777777777777771)
           + 27.777777777777771 * x) + 1.0) - 9.259259259259256;
    *f = (x - 1.0) * 55.555555555555543;
  } else {
    /* acc costante nulla */
    *F = 0.0;
    *G = 1.0;
    *f = 0.0;
  }
}

/* Function for MATLAB Function: '<S58>/Cerchi Tangenti' */
static void StateflowKalman_ldm7t(real_T x, real_T *G, real_T *F, real_T *f)
{
  if ((x >= 0.0) && (x < 0.1)) {
    /* acc crescente positiva */
    *F = x * x * 27.777777777777771;
    *G = 9.259259259259256 * rt_powd_snf(x, 3.0);
    *f = 55.555555555555543 * x;
  } else if ((x >= 0.1) && (x < 0.30000000000000004)) {
    /* acc costante positiva */
    *F = 5.5555555555555545 * x - 0.27777777777777773;
    *G = (x * x * 2.7777777777777772 - 0.27777777777777773 * x) +
      0.0092592592592592587;
    *f = 5.5555555555555545;
  } else if ((x >= 0.30000000000000004) && (x < 0.4)) {
    /* acc decrescente positiva */
    *F = (x * x * -27.777777777777771 + 22.222222222222218 * x) -
      2.7777777777777777;
    *G = ((((x * x * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x,
              3.0)) - 2.7777777777777777 * x) - 0.44444444444444442) +
          0.59259259259259256) + 0.1111111111111111;
    *f = -55.555555555555543 * x + 22.222222222222218;
  } else if ((x >= 0.4) && (x < 0.6)) {
    /* acc costante nulla */
    *F = 1.6666666666666665;
    *G = (1.6666666666666665 * x - 0.44444444444444442) + 0.1111111111111111;
    *f = 0.0;
  } else if ((x >= 0.6) && (x < 0.7)) {
    /* acc decrescente negativa */
    *F = ((x * x * -27.777777777777771 + 33.333333333333321 * x) +
          1.6666666666666665) - 9.9999999999999982;
    *G = (((((x * x * 16.666666666666661 + -9.259259259259256 * rt_powd_snf(x,
               3.0)) + 1.6666666666666665 * x) - 9.9999999999999982 * x) -
           0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
    *f = -55.555555555555543 * x + 33.333333333333321;
  } else if ((x >= 0.7) && (x < 0.9)) {
    /* acc costante negativa */
    *F = (-5.5555555555555545 * x + 5.5555555555555545) - 0.27777777777777773;
    *G = (((x * x * -2.7777777777777772 + 5.5555555555555545 * x) -
           0.27777777777777773 * x) + 1.0) - 2.5092592592592586;
    *f = -5.5555555555555545;
  } else if ((x >= 0.9) && (x <= 1.0)) {
    /* acc crescente negativa */
    *F = (x * x * 27.777777777777771 - 55.555555555555543 * x) +
      27.777777777777771;
    *G = (((9.259259259259256 * rt_powd_snf(x, 3.0) - x * x * 27.777777777777771)
           + 27.777777777777771 * x) + 1.0) - 9.259259259259256;
    *f = (x - 1.0) * 55.555555555555543;
  } else {
    /* acc costante nulla */
    *F = 0.0;
    *G = 1.0;
    *f = 0.0;
  }
}

/* Function for MATLAB Function: '<S58>/spirale' */
static void StateflowKalman_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f)
{
  if ((x >= 0.0) && (x < 0.1)) {
    /* acc crescente positiva */
    *F = x * x * 27.777777777777771;
    *G = 9.259259259259256 * rt_powd_snf(x, 3.0);
    *f = 55.555555555555543 * x;
  } else if ((x >= 0.1) && (x < 0.30000000000000004)) {
    /* acc costante positiva */
    *F = 5.5555555555555545 * x - 0.27777777777777773;
    *G = (x * x * 2.7777777777777772 - 0.27777777777777773 * x) +
      0.0092592592592592587;
    *f = 5.5555555555555545;
  } else if ((x >= 0.30000000000000004) && (x < 0.4)) {
    /* acc decrescente positiva */
    *F = (x * x * -27.777777777777771 + 22.222222222222218 * x) -
      2.7777777777777777;
    *G = ((((x * x * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x,
              3.0)) - 2.7777777777777777 * x) - 0.44444444444444442) +
          0.59259259259259256) + 0.1111111111111111;
    *f = -55.555555555555543 * x + 22.222222222222218;
  } else if ((x >= 0.4) && (x < 0.6)) {
    /* acc costante nulla */
    *F = 1.6666666666666665;
    *G = (1.6666666666666665 * x - 0.44444444444444442) + 0.1111111111111111;
    *f = 0.0;
  } else if ((x >= 0.6) && (x < 0.7)) {
    /* acc decrescente negativa */
    *F = ((x * x * -27.777777777777771 + 33.333333333333321 * x) +
          1.6666666666666665) - 9.9999999999999982;
    *G = (((((x * x * 16.666666666666661 + -9.259259259259256 * rt_powd_snf(x,
               3.0)) + 1.6666666666666665 * x) - 9.9999999999999982 * x) -
           0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
    *f = -55.555555555555543 * x + 33.333333333333321;
  } else if ((x >= 0.7) && (x < 0.9)) {
    /* acc costante negativa */
    *F = (-5.5555555555555545 * x + 5.5555555555555545) - 0.27777777777777773;
    *G = (((x * x * -2.7777777777777772 + 5.5555555555555545 * x) -
           0.27777777777777773 * x) + 1.0) - 2.5092592592592586;
    *f = -5.5555555555555545;
  } else if ((x >= 0.9) && (x <= 1.0)) {
    /* acc crescente negativa */
    *F = (x * x * 27.777777777777771 - 55.555555555555543 * x) +
      27.777777777777771;
    *G = (((9.259259259259256 * rt_powd_snf(x, 3.0) - x * x * 27.777777777777771)
           + 27.777777777777771 * x) + 1.0) - 9.259259259259256;
    *f = (x - 1.0) * 55.555555555555543;
  } else {
    /* acc costante nulla */
    *F = 0.0;
    *G = 1.0;
    *f = 0.0;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp_0, tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S12>/MATLAB Function4' */
static void StateflowKalman_invNxN(const real_T x[16], real_T y[16])
{
  int8_T p[4];
  real_T A[16];
  int8_T ipiv[4];
  int32_T b_j;
  real_T smax;
  real_T s;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T jBcol;
  int32_T kAcol;
  int32_T c_i;
  for (b_j = 0; b_j < 16; b_j++) {
    y[b_j] = 0.0;
    A[b_j] = x[b_j];
  }

  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  for (b_j = 0; b_j < 3; b_j++) {
    jBcol = b_j * 5;
    iy = 0;
    kAcol = jBcol;
    smax = fabs(A[jBcol]);
    for (c_i = 2; c_i <= 4 - b_j; c_i++) {
      kAcol++;
      s = fabs(A[kAcol]);
      if (s > smax) {
        iy = c_i - 1;
        smax = s;
      }
    }

    if (A[jBcol + iy] != 0.0) {
      if (iy != 0) {
        ipiv[b_j] = (int8_T)((b_j + iy) + 1);
        kAcol = b_j;
        iy += b_j;
        smax = A[kAcol];
        A[kAcol] = A[iy];
        A[iy] = smax;
        kAcol += 4;
        iy += 4;
        smax = A[kAcol];
        A[kAcol] = A[iy];
        A[iy] = smax;
        kAcol += 4;
        iy += 4;
        smax = A[kAcol];
        A[kAcol] = A[iy];
        A[iy] = smax;
        kAcol += 4;
        iy += 4;
        smax = A[kAcol];
        A[kAcol] = A[iy];
        A[iy] = smax;
      }

      iy = (jBcol - b_j) + 4;
      for (kAcol = jBcol + 1; kAcol + 1 <= iy; kAcol++) {
        A[kAcol] /= A[jBcol];
      }
    }

    iy = jBcol;
    kAcol = jBcol + 4;
    for (c_i = 1; c_i <= 3 - b_j; c_i++) {
      smax = A[kAcol];
      if (A[kAcol] != 0.0) {
        c_ix = jBcol + 1;
        d = (iy - b_j) + 8;
        for (ijA = 5 + iy; ijA + 1 <= d; ijA++) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
        }
      }

      kAcol += 4;
      iy += 4;
    }
  }

  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    jBcol = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = 1;
    p[0] = (int8_T)jBcol;
  }

  if (ipiv[1] > 2) {
    jBcol = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = (int8_T)jBcol;
  }

  if (ipiv[2] > 3) {
    jBcol = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = (int8_T)jBcol;
  }

  jBcol = p[0] - 1;
  y[(p[0] - 1) << 2] = 1.0;
  for (iy = 0; iy + 1 < 5; iy++) {
    if (y[(jBcol << 2) + iy] != 0.0) {
      for (kAcol = iy + 1; kAcol + 1 < 5; kAcol++) {
        y[kAcol + (jBcol << 2)] -= y[(jBcol << 2) + iy] * A[(iy << 2) + kAcol];
      }
    }
  }

  jBcol = p[1] - 1;
  y[1 + ((p[1] - 1) << 2)] = 1.0;
  for (iy = 1; iy + 1 < 5; iy++) {
    if (y[(jBcol << 2) + iy] != 0.0) {
      for (kAcol = iy + 1; kAcol + 1 < 5; kAcol++) {
        y[kAcol + (jBcol << 2)] -= y[(jBcol << 2) + iy] * A[(iy << 2) + kAcol];
      }
    }
  }

  jBcol = p[2] - 1;
  y[2 + ((p[2] - 1) << 2)] = 1.0;
  for (iy = 2; iy + 1 < 5; iy++) {
    if (y[(jBcol << 2) + iy] != 0.0) {
      for (kAcol = iy + 1; kAcol + 1 < 5; kAcol++) {
        y[kAcol + (jBcol << 2)] -= y[(jBcol << 2) + iy] * A[(iy << 2) + kAcol];
      }
    }
  }

  jBcol = p[3] - 1;
  y[3 + ((p[3] - 1) << 2)] = 1.0;
  for (iy = 3; iy + 1 < 5; iy++) {
    if (y[(jBcol << 2) + iy] != 0.0) {
      for (kAcol = iy + 1; kAcol + 1 < 5; kAcol++) {
        y[kAcol + (jBcol << 2)] -= y[(jBcol << 2) + iy] * A[(iy << 2) + kAcol];
      }
    }
  }

  for (b_j = 0; b_j < 4; b_j++) {
    jBcol = b_j << 2;
    if (y[3 + jBcol] != 0.0) {
      y[3 + jBcol] /= A[15];
      for (c_i = 0; c_i + 1 < 4; c_i++) {
        y[c_i + jBcol] -= y[3 + jBcol] * A[c_i + 12];
      }
    }

    if (y[2 + jBcol] != 0.0) {
      y[2 + jBcol] /= A[10];
      for (c_i = 0; c_i + 1 < 3; c_i++) {
        y[c_i + jBcol] -= y[2 + jBcol] * A[c_i + 8];
      }
    }

    if (y[1 + jBcol] != 0.0) {
      y[1 + jBcol] /= A[5];
      for (c_i = 0; c_i + 1 < 2; c_i++) {
        y[c_i + jBcol] -= y[1 + jBcol] * A[c_i + 4];
      }
    }

    if (y[jBcol] != 0.0) {
      y[jBcol] /= A[0];
    }
  }
}

/* Function for MATLAB Function: '<S12>/MATLAB Function3' */
static void StateflowKalman_DinamicaKalman(const real_T f[4], real_T M[4],
  real_T K[4])
{
  real_T theta3;
  real_T theta4;
  real_T N13;
  real_T N23;
  real_T D13;
  real_T theta3_p;
  real_T N21;
  real_T N22;
  real_T D2;
  real_T theta4_p;
  real_T J34[4];
  real_T D2p;
  real_T J1[4];
  real_T J2[4];
  real_T J3[4];
  real_T J4[4];
  real_T JE[4];
  real_T e_x;
  real_T f_x;
  real_T g_x;
  real_T h_x;
  real_T i_x;
  real_T k_x;
  static const real_T y[4] = { 0.0522, 0.0, 0.0, 0.0522 };

  real_T tmp[4];
  int32_T i;
  real_T tmp_0[4];
  real_T y_0[4];
  real_T tmp_1[4];
  real_T tmp_2[4];
  real_T tmp_3[4];
  real_T tmp_4[4];
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  real_T tmp_a;
  theta3 = (cos(f[1]) - cos(f[0])) + 0.72;
  theta4 = (cos(f[1]) - cos(f[0])) + 0.72;
  theta3_p = sin(f[0]) - sin(f[1]);
  theta4 = theta4 * theta4 / 2.0 + theta3_p * theta3_p / 2.0;
  theta3_p = sin(f[0]) - sin(f[1]);
  D2 = (cos(f[1]) - cos(f[0])) + 0.72;
  theta4_p = sin(f[0]) - sin(f[1]);
  theta3 = atan((sqrt((theta3 * theta3 - theta4 * theta4) + theta3_p * theta3_p)
                 + (sin(f[1]) - sin(f[0]))) / (((D2 * D2 / 2.0 + (cos(f[1]) -
    cos(f[0]))) + theta4_p * theta4_p / 2.0) + 0.72)) * 2.0;
  theta4 = (cos(f[1]) - cos(f[0])) + 0.72;
  theta3_p = (cos(f[1]) - cos(f[0])) + 0.72;
  D2 = sin(f[0]) - sin(f[1]);
  theta3_p = theta3_p * theta3_p / 2.0 + D2 * D2 / 2.0;
  D2 = sin(f[0]) - sin(f[1]);
  theta4_p = (cos(f[1]) - cos(f[0])) + 0.72;
  N13 = sin(f[0]) - sin(f[1]);
  theta4 = atan((sqrt((theta4 * theta4 - theta3_p * theta3_p) + D2 * D2) + (sin
    (f[1]) - sin(f[0]))) / (((theta4_p * theta4_p / 2.0 + (cos(f[0]) - cos(f[1])))
    + N13 * N13 / 2.0) - 0.72)) * -2.0;
  N13 = cos(theta4) / sin(theta4) * sin(f[0]) - cos(f[0]);
  N23 = cos(f[1]) - cos(theta4) / sin(theta4) * sin(f[1]);
  D13 = cos(theta3) - cos(theta4) / sin(theta4) * sin(theta3);
  theta3_p = (f[2] * N13 + f[3] * N23) / D13;
  N21 = ((cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4)) * sin(f[0]) +
         cos(theta4) / sin(theta4) * sin(f[0])) - cos(f[0]);
  N22 = ((cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4)) * -sin(f[1]) -
         cos(theta4) / sin(theta4) * sin(f[1])) + cos(f[1]);
  D2 = (cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4)) * sin(theta4);
  theta4_p = N21 / D2 * f[2] + N22 / D2 * f[3];
  J34[0] = N13 / D13;
  J34[2] = N23 / D13;
  J34[1] = N21 / D2;
  J34[3] = N22 / D2;
  N13 = cos(theta3) - cos(theta4) / sin(theta4) * sin(theta3);
  N23 = sin(theta4);
  D13 = sin(theta4);
  N21 = sin(theta4);
  N21 = (-sin(theta3) * theta3_p - -1.0 / (N21 * N21) * theta4_p * sin(theta3))
    - cos(theta4) / sin(theta4) * cos(theta3) * theta3_p;
  N22 = sin(theta3);
  e_x = sin(theta4);
  f_x = sin(theta4);
  g_x = sin(theta3);
  h_x = sin(theta4);
  i_x = sin(theta4);
  D2p = sin(theta3);
  k_x = sin(theta4);
  D2p = (-1.0 / (D2p * D2p) * theta3_p + 1.0 / (k_x * k_x) * theta4_p) * sin
    (theta4) + (cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4)) * (cos
    (theta4) * theta4_p);
  N23 = (((-1.0 / (N23 * N23) * theta4_p * sin(f[0]) + cos(theta4) / sin(theta4)
           * cos(f[0]) * f[2]) + sin(f[0]) * f[2]) * N13 - (cos(theta4) / sin
          (theta4) * sin(f[0]) - cos(f[0])) * N21) / (N13 * N13);
  N13 = (((1.0 / (D13 * D13) * theta4_p * sin(f[1]) - cos(theta4) / sin(theta4) *
           cos(f[1]) * f[3]) - sin(f[1]) * f[3]) * N13 - (cos(f[1]) - cos(theta4)
          / sin(theta4) * sin(f[1])) * N21) / (N13 * N13);
  N22 = ((((((-1.0 / (N22 * N22) * theta3_p + 1.0 / (e_x * e_x) * theta4_p) *
             sin(f[0]) + (cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4))
             * (cos(f[0]) * f[2])) + -1.0 / (f_x * f_x) * theta4_p * sin(f[0]))
           + cos(theta4) / sin(theta4) * cos(f[0]) * f[2]) + sin(f[0]) * f[2]) *
         D2 - (((cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4)) * sin(f
            [0]) + cos(theta4) / sin(theta4) * sin(f[0])) - cos(f[0])) * D2p) /
    (D2 * D2);
  D2 = ((((((cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4)) * (-cos(f[1])
             * f[3]) - (-1.0 / (g_x * g_x) * theta3_p + 1.0 / (h_x * h_x) *
                        theta4_p) * sin(f[1])) - -1.0 / (i_x * i_x) * theta4_p *
           sin(f[1])) - cos(theta4) / sin(theta4) * cos(f[1]) * f[3]) - sin(f[1])
         * f[3]) * D2 - (((cos(theta3) / sin(theta3) - cos(theta4) / sin(theta4))
          * -sin(f[1]) - cos(theta4) / sin(theta4) * sin(f[1])) + cos(f[1])) *
        D2p) / (D2 * D2);
  J1[0] = -0.125 * sin(f[0]);
  J1[2] = 0.0;
  J1[1] = 0.125 * cos(f[0]);
  J1[3] = 0.0;
  J2[0] = 0.0;
  J2[2] = -0.125 * sin(f[1]);
  J2[1] = 0.0;
  J2[3] = 0.125 * cos(f[1]);
  J3[0] = (0.5 * sin(theta3) * J34[0] + sin(f[0])) * -0.25;
  J3[2] = 0.5 * sin(theta3) * J34[2] * -0.25;
  J3[1] = (0.5 * cos(theta3) * J34[0] + cos(f[0])) * 0.25;
  J3[3] = 0.5 * cos(theta3) * J34[2] * 0.25;
  J4[0] = -0.125 * sin(theta4) * J34[1];
  J4[2] = (0.5 * sin(theta4) * J34[3] + sin(f[1])) * -0.25;
  J4[1] = 0.125 * cos(theta4) * J34[1];
  J4[3] = (0.5 * cos(theta4) * J34[3] + cos(f[1])) * 0.25;
  JE[0] = (sin(theta3) * J34[0] + sin(f[0])) * -0.25;
  JE[2] = sin(theta3) * J34[2] * -0.25;
  JE[1] = (cos(theta3) * J34[0] + cos(f[0])) * 0.25;
  JE[3] = cos(theta3) * J34[2] * 0.25;
  for (i = 0; i < 2; i++) {
    g_x = J1[i << 1] * 2.9 * J1[0];
    g_x += J1[(i << 1) + 1] * 2.9 * J1[1];
    i_x = y[i] + g_x;
    tmp[i] = 0.0;
    g_x = tmp[i];
    g_x += J2[i << 1] * 2.9 * 0.0;
    h_x = J34[i << 1] * 0.0522 * J34[0];
    tmp[i] = g_x;
    g_x = tmp[i];
    g_x += J2[(i << 1) + 1] * 2.9 * 0.0;
    h_x += J34[(i << 1) + 1] * 0.0522 * J34[1];
    tmp[i] = g_x;
    i_x = (i_x + tmp[i]) + h_x;
    tmp_0[i] = 0.0;
    g_x = tmp_0[i];
    g_x += J3[i << 1] * 2.9 * J3[0];
    h_x = J4[i << 1] * 2.9 * J4[0];
    tmp_0[i] = g_x;
    g_x = tmp_0[i];
    g_x += J3[(i << 1) + 1] * 2.9 * J3[1];
    h_x += J4[(i << 1) + 1] * 2.9 * J4[1];
    tmp_0[i] = g_x;
    y_0[i] = (i_x + tmp_0[i]) + h_x;
    tmp_1[i] = 0.0;
    g_x = tmp_1[i];
    g_x += JE[i << 1] * 0.36 * JE[0];
    tmp_1[i] = g_x;
    g_x = tmp_1[i];
    g_x += JE[(i << 1) + 1] * 0.36 * JE[1];
    tmp_1[i] = g_x;
    g_x = J1[i << 1] * 2.9 * 0.0;
    g_x += J1[(i << 1) + 1] * 2.9 * 0.0;
    i_x = y[i + 2] + g_x;
    tmp[i + 2] = 0.0;
    g_x = tmp[i + 2];
    g_x += J2[i << 1] * 2.9 * J2[2];
    h_x = J34[i << 1] * 0.0522 * J34[2];
    tmp[i + 2] = g_x;
    g_x = tmp[i + 2];
    g_x += J2[(i << 1) + 1] * 2.9 * J2[3];
    h_x += J34[(i << 1) + 1] * 0.0522 * J34[3];
    tmp[i + 2] = g_x;
    i_x = (tmp[i + 2] + i_x) + h_x;
    tmp_0[i + 2] = 0.0;
    g_x = tmp_0[i + 2];
    g_x += J3[i << 1] * 2.9 * J3[2];
    h_x = J4[i << 1] * 2.9 * J4[2];
    tmp_0[i + 2] = g_x;
    g_x = tmp_0[i + 2];
    g_x += J3[(i << 1) + 1] * 2.9 * J3[3];
    h_x += J4[(i << 1) + 1] * 2.9 * J4[3];
    tmp_0[i + 2] = g_x;
    y_0[i + 2] = (tmp_0[i + 2] + i_x) + h_x;
    tmp_1[i + 2] = 0.0;
    g_x = tmp_1[i + 2];
    g_x += JE[i << 1] * 0.36 * JE[2];
    tmp_1[i + 2] = g_x;
    g_x = tmp_1[i + 2];
    g_x += JE[(i << 1) + 1] * 0.36 * JE[3];
    tmp_1[i + 2] = g_x;
  }

  i_x = -0.125 * cos(f[0]) * f[2];
  D2p = -0.125 * sin(f[0]) * f[2];
  e_x = -0.125 * cos(f[1]) * f[3];
  f_x = -0.125 * sin(f[1]) * f[3];
  D13 = ((0.5 * cos(theta3) * theta3_p * J34[0] + cos(f[0]) * f[2]) + 0.5 * sin
         (theta3) * N23) * -0.25;
  N21 = (0.5 * cos(theta3) * theta3_p * J34[2] + 0.5 * sin(theta3) * N13) *
    -0.25;
  k_x = ((-sin(f[0]) * f[2] - 0.5 * sin(theta3) * theta3_p * J34[0]) + 0.5 * cos
         (theta3) * N23) * 0.25;
  tmp_5 = (-0.5 * sin(theta3) * theta3_p * J34[2] + 0.5 * cos(theta3) * N13) *
    0.25;
  tmp_6 = (0.5 * cos(theta4) * theta4_p * J34[1] + 0.5 * sin(theta4) * N22) *
    -0.25;
  tmp_7 = ((0.5 * cos(theta4) * theta4_p * J34[3] + cos(f[1]) * f[3]) + 0.5 *
           sin(theta4) * D2) * -0.25;
  tmp_8 = (-0.5 * sin(theta4) * theta4_p * J34[1] + 0.5 * cos(theta4) * N22) *
    0.25;
  theta4 = ((-sin(f[1]) * f[3] - 0.5 * sin(theta4) * theta4_p * J34[3]) + 0.5 *
            cos(theta4) * D2) * 0.25;
  theta4_p = ((cos(theta3) * theta3_p * J34[0] + cos(f[0]) * f[2]) + sin(theta3)
              * N23) * -0.25;
  tmp_9 = (cos(theta3) * theta3_p * J34[2] + sin(theta3) * N13) * -0.25;
  tmp_a = ((-sin(f[0]) * f[2] - sin(theta3) * theta3_p * J34[0]) + cos(theta3) *
           N23) * 0.25;
  theta3 = (-sin(theta3) * theta3_p * J34[2] + cos(theta3) * N13) * 0.25;
  for (i = 0; i < 2; i++) {
    M[i << 1] = y_0[i << 1] + tmp_1[i << 1];
    tmp[i] = 0.0;
    tmp_0[i] = 0.0;
    g_x = tmp_0[i];
    h_x = tmp[i];
    h_x += J1[i << 1] * 2.9 * i_x;
    g_x += J2[i << 1] * 2.9 * 0.0;
    theta3_p = J34[i << 1] * 0.0522 * N23;
    tmp[i] = h_x;
    tmp_0[i] = g_x;
    g_x = tmp_0[i];
    h_x = tmp[i];
    h_x += J1[(i << 1) + 1] * 2.9 * D2p;
    g_x += J2[(i << 1) + 1] * 2.9 * 0.0;
    theta3_p += J34[(i << 1) + 1] * 0.0522 * N22;
    tmp[i] = h_x;
    tmp_0[i] = g_x;
    g_x = (tmp[i] + tmp_0[i]) + theta3_p;
    tmp_2[i] = 0.0;
    h_x = tmp_2[i];
    h_x += J3[i << 1] * 2.9 * D13;
    theta3_p = J4[i << 1] * 2.9 * tmp_6;
    tmp_2[i] = h_x;
    h_x = tmp_2[i];
    h_x += J3[(i << 1) + 1] * 2.9 * k_x;
    theta3_p += J4[(i << 1) + 1] * 2.9 * tmp_8;
    tmp_2[i] = h_x;
    tmp_3[i] = (g_x + tmp_2[i]) + theta3_p;
    tmp_4[i] = 0.0;
    g_x = tmp_4[i];
    g_x += JE[i << 1] * 0.36 * theta4_p;
    tmp_4[i] = g_x;
    g_x = tmp_4[i];
    g_x += JE[(i << 1) + 1] * 0.36 * tmp_a;
    tmp_4[i] = g_x;
    M[1 + (i << 1)] = y_0[(i << 1) + 1] + tmp_1[(i << 1) + 1];
    tmp[i + 2] = 0.0;
    tmp_0[i + 2] = 0.0;
    g_x = tmp_0[i + 2];
    h_x = tmp[i + 2];
    h_x += J1[i << 1] * 2.9 * 0.0;
    g_x += J2[i << 1] * 2.9 * e_x;
    theta3_p = J34[i << 1] * 0.0522 * N13;
    tmp[i + 2] = h_x;
    tmp_0[i + 2] = g_x;
    g_x = tmp_0[i + 2];
    h_x = tmp[i + 2];
    h_x += J1[(i << 1) + 1] * 2.9 * 0.0;
    g_x += J2[(i << 1) + 1] * 2.9 * f_x;
    theta3_p += J34[(i << 1) + 1] * 0.0522 * D2;
    tmp[i + 2] = h_x;
    tmp_0[i + 2] = g_x;
    g_x = (tmp[i + 2] + tmp_0[i + 2]) + theta3_p;
    tmp_2[i + 2] = 0.0;
    h_x = tmp_2[i + 2];
    h_x += J3[i << 1] * 2.9 * N21;
    theta3_p = J4[i << 1] * 2.9 * tmp_7;
    tmp_2[i + 2] = h_x;
    h_x = tmp_2[i + 2];
    h_x += J3[(i << 1) + 1] * 2.9 * tmp_5;
    theta3_p += J4[(i << 1) + 1] * 2.9 * theta4;
    tmp_2[i + 2] = h_x;
    tmp_3[i + 2] = (tmp_2[i + 2] + g_x) + theta3_p;
    tmp_4[i + 2] = 0.0;
    g_x = tmp_4[i + 2];
    g_x += JE[i << 1] * 0.36 * tmp_9;
    tmp_4[i + 2] = g_x;
    g_x = tmp_4[i + 2];
    g_x += JE[(i << 1) + 1] * 0.36 * theta3;
    tmp_4[i + 2] = g_x;
  }

  K[0] = tmp_3[0] + tmp_4[0];
  K[1] = tmp_3[1] + tmp_4[1];
  K[2] = tmp_3[2] + tmp_4[2];
  K[3] = tmp_3[3] + tmp_4[3];
}

/* Function for MATLAB Function: '<S12>/MATLAB Function3' */
static void StateflowKalman_mpower_b(const real_T a[4], real_T c[4])
{
  real_T r;
  real_T t;
  if (fabs(a[1]) > fabs(a[0])) {
    r = a[0] / a[1];
    t = 1.0 / (r * a[3] - a[2]);
    c[0] = a[3] / a[1] * t;
    c[1] = -t;
    c[2] = -a[2] / a[1] * t;
    c[3] = r * t;
  } else {
    r = a[1] / a[0];
    t = 1.0 / (a[3] - r * a[2]);
    c[0] = a[3] / a[0] * t;
    c[1] = -r * t;
    c[2] = -a[2] / a[0] * t;
    c[3] = t;
  }
}

/* Model output function */
static void StateflowKalman_output(void)
{
  int32_T bitIdx;
  int32_T i;
  boolean_T sf_internal_predicateOutput;
  real_T b_a;
  real_T c_a;
  real_T x3;
  real_T x4;
  real_T x5;
  real_T F;
  real_T T5;
  real_T J[4];
  real_T J_p[4];
  real_T g_a;
  real_T i_a;
  real_T j_a;
  real_T m_a;
  real_T N21;
  real_T N22;
  real_T D2p;
  real_T J1[4];
  real_T J2[4];
  real_T J3[4];
  real_T J4[4];
  real_T JE[4];
  static const real_T y[4] = { 0.0522, 0.0, 0.0, 0.0522 };

  real_T fm[4];
  real_T b_a_0[8];
  static const int8_T Ident[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  static const int8_T b[8] = { 0, 0, 0, 0, 1, 0, 0, 1 };

  real_T y_0[16];
  real_T c[16];
  real_T a[16];
  real_T x1;
  real_T x2;
  real_T G1;
  static const int8_T tmp[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  real_T tmp_0[4];
  real_T y_1[4];
  real_T tmp_1[4];
  real_T tmp_2[4];
  real_T tmp_3[4];
  real_T tmp_4[4];
  real_T y_2[16];
  real_T tmp_5[16];
  real_T b_0[16];
  real_T tmp_6[8];
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  real_T tmp_7;
  real_T tmp_8;

  {
    /* user code (Output function Header) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init  Process Received Frames ------------*/
      int32_T data[6]= { 0 };

      int32_T msdata[4] = { 0 };

      xpcEtherCATReadProcessData(0,NULL);
      mwErrorGet((int_T)0,
                 &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
      memcpy(&StateflowKalman_B.EtherCATInit[0], data,6*sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateflowKalman_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC
      (StateflowKalman_DW.UseCurrentEstimator_e.EnabledSubsystem_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateflowKalman_DW.Posizionamento_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateflowKalman_DW.Setting_SubsysRanBC);

    /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/Asse A braccia'
     */
    b_a = floor(StateflowKalman_P.AsseAbraccia_Value);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 256.0);
    }

    StateflowKalman_B.DataTypeConversion7 = (int8_T)(b_a < 0.0 ? (int32_T)
      (int8_T)-(int8_T)(uint8_T)-b_a : (int32_T)(int8_T)(uint8_T)b_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion7' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Asse A vite'
     */
    b_a = floor(StateflowKalman_P.AsseAvite_Value);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 256.0);
    }

    StateflowKalman_B.DataTypeConversion2 = (int8_T)(b_a < 0.0 ? (int32_T)
      (int8_T)-(int8_T)(uint8_T)-b_a : (int32_T)(int8_T)(uint8_T)b_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/Asse B braccia'
     */
    b_a = floor(StateflowKalman_P.AsseBbraccia_Value);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 256.0);
    }

    StateflowKalman_B.DataTypeConversion5 = (int8_T)(b_a < 0.0 ? (int32_T)
      (int8_T)-(int8_T)(uint8_T)-b_a : (int32_T)(int8_T)(uint8_T)b_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion5' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/Asse B vite'
     */
    b_a = floor(StateflowKalman_P.AsseBvite_Value);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 256.0);
    }

    StateflowKalman_B.DataTypeConversion1_p = (int8_T)(b_a < 0.0 ? (int32_T)
      (int8_T)-(int8_T)(uint8_T)-b_a : (int32_T)(int8_T)(uint8_T)b_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */

    /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S9>/convert' */
    StateflowKalman_B.convert = StateflowKalman_B.MotorebracciaA;

    /* S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */

    /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S9>/convert 10 ' */
    StateflowKalman_B.convert10 = StateflowKalman_B.MotorebracciaB;

    /* Clock: '<Root>/Clock' */
    StateflowKalman_B.Clock = StateflowKalman_M->Timing.t[0];

    /* S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */

    /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert' */
    StateflowKalman_B.convert_k = StateflowKalman_B.MotoreviteA;

    /* S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */

    /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[7];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert 10 ' */
    StateflowKalman_B.convert10_p = StateflowKalman_B.MotoreviteB;

    /* S-Function (xpcethercatpdorx): '<S14>/Status Word' */

    /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S14>/Data Type Conversion6' */
    StateflowKalman_B.DataTypeConversion6 = StateflowKalman_B.StatusWord;

    /* S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion8' */
    StateflowKalman_B.DataTypeConversion8 =
      StateflowKalman_B.EtherCATPDOReceive16;

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      prevT_idx_1 = (uint32_T)StateflowKalman_B.DataTypeConversion8;
      for (i = 0; i < 16; i++) {
        StateflowKalman_B.IntegertoBitConverter[bitIdx] = (int32_T)prevT_idx_1 &
          1;
        prevT_idx_1 >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S1>/Integer to Bit Converter' */

    /* S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[10];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S2>/Data Type Conversion8' */
    StateflowKalman_B.DataTypeConversion8_f =
      StateflowKalman_B.EtherCATPDOReceive16_d;

    /* S-Function (scominttobit): '<S2>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      prevT_idx_1 = (uint32_T)StateflowKalman_B.DataTypeConversion8_f;
      for (i = 0; i < 16; i++) {
        StateflowKalman_B.IntegertoBitConverter_d[bitIdx] = (int32_T)prevT_idx_1
          & 1;
        prevT_idx_1 >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S2>/Integer to Bit Converter' */

    /* Constant: '<Root>/StartHome' */
    StateflowKalman_B.StartHome = StateflowKalman_P.StartHome_Value;

    /* Constant: '<Root>/StartRobot' */
    StateflowKalman_B.StartRobot = StateflowKalman_P.StartRobot_Value;

    /* Constant: '<Root>/StartWork' */
    StateflowKalman_B.StartWork = StateflowKalman_P.StartWork_Value;

    /* Constant: '<Root>/Reset' */
    StateflowKalman_B.Reset = StateflowKalman_P.Reset_Value;

    /* Constant: '<Root>/Stop' */
    StateflowKalman_B.Stop = StateflowKalman_P.Stop_Value;

    /* Constant: '<Root>/StartZero' */
    StateflowKalman_B.StartZero = StateflowKalman_P.StartZero_Value;

    /* Constant: '<Root>/Discesa' */
    StateflowKalman_B.Discesa = StateflowKalman_P.Discesa_Value;

    /* Constant: '<Root>/Abbassa' */
    StateflowKalman_B.Abbassa = StateflowKalman_P.Abbassa_Value;

    /* Chart: '<Root>/State flow robot' */
    if (StateflowKalman_DW.temporalCounter_i1 < 65535U) {
      StateflowKalman_DW.temporalCounter_i1++;
    }

    /* Gateway: State flow robot */
    StateflowKalman_DW.sfEvent = -1;

    /* During: State flow robot */
    if (StateflowKalman_DW.is_active_c15_StateflowKalman == 0U) {
      /* Entry: State flow robot */
      StateflowKalman_DW.is_active_c15_StateflowKalman = 1U;

      /* Entry Internal: State flow robot */
      /* Transition: '<S13>:36' */
      StateflowKalman_DW.is_c15_StateflowKalman = StateflowKalman_IN_Step1;

      /* Entry 'Step1': '<S13>:28' */
      StateflowKalman_B.Bool = -1.0;
    } else {
      switch (StateflowKalman_DW.is_c15_StateflowKalman) {
       case StateflowKalman_IN_Attivazione:
        StateflowKalman_B.Enable = 1.0;
        StateflowKalman_B.Bool = 0.0;

        /* During 'Attivazione': '<S13>:231' */
        if (StateflowKalman_B.StartZero == 1.0) {
          /* Transition: '<S13>:232' */
          StateflowKalman_DW.is_c15_StateflowKalman = StateflowKalman_IN_Home;

          /* Entry 'Home': '<S13>:29' */
          StateflowKalman_B.Bool = 1.0;
          StateflowKalman_DW.conv = 5.9921124526782858E-6;
          StateflowKalman_DW.conv_vite = 1.220703125E-7;
          StateflowKalman_B.Luci = 1.0;
          StateflowKalman_B.FineLavorazione = 0.0;
          StateflowKalman_B.PosRifA = StateflowKalman_DW.conv * 180.0 /
            3.1415926535897931 * StateflowKalman_B.convert;

          /* posA in gradi */
          StateflowKalman_B.PosRifB = StateflowKalman_DW.conv * 180.0 /
            3.1415926535897931 * StateflowKalman_B.convert10;

          /* posB in gradi */
        }
        break;

       case StateflowKalman_IN_Controllo:
        StateflowKalman_B.Hb = 0.0;
        StateflowKalman_B.Luci = 4.0;
        StateflowKalman_B.Bool = 4.0;
        StateflowKalman_B.Hv = 0.0;

        /* During 'Controllo': '<S13>:147' */
        if (StateflowKalman_DW.temporalCounter_i1 >= 40000U) {
          /* Transition: '<S13>:148' */
          StateflowKalman_DW.is_c15_StateflowKalman =
            StateflowKal_IN_FineLavorazione;
          StateflowKalman_DW.temporalCounter_i1 = 0U;

          /* Entry 'FineLavorazione': '<S13>:69' */
          StateflowKalman_B.Bool = 5.0;
          StateflowKalman_B.Luci = 5.0;
          StateflowKalman_B.FineLavorazione = 1.0;
          StateflowKalman_B.Hv = 0.0;
          StateflowKalman_B.Hb = 0.0;
        } else {
          if (StateflowKalman_B.Stop == 1.0) {
            /* Transition: '<S13>:248' */
            StateflowKalman_DW.is_c15_StateflowKalman =
              StateflowKalman_IN_StopPhase;

            /* Entry 'StopPhase': '<S13>:247' */
            StateflowKalman_B.Bool = 3.0;
            StateflowKalman_B.CoppiaA = 0.0;
            StateflowKalman_B.CoppiaB = 0.0;
            StateflowKalman_B.CoppiaH = 0.0;
          }
        }
        break;

       case StateflowKalman_IN_Discesa_Vite:
        StateflowKalman_B.Hb = 1.0;

        /* During 'Discesa_Vite': '<S13>:176' */
        if (StateflowKalman_B.convert_k - StateflowKalman_B.OffA_vite >=
            StateflowKalman_DW.dv / StateflowKalman_DW.conv_vite) {
          /* Transition: '<S13>:177' */
          StateflowKalman_DW.is_c15_StateflowKalman = StateflowKalman_IN_OffSet;

          /* Entry 'OffSet': '<S13>:87' */
          StateflowKalman_B.CoppiaH = 0.0;
          StateflowKalman_B.CoppiaA = 0.0;
          StateflowKalman_B.CoppiaB = 0.0;
          StateflowKalman_B.OffA = StateflowKalman_B.convert;
          StateflowKalman_B.OffB = StateflowKalman_B.convert10;
          StateflowKalman_DW.OffA_0 = StateflowKalman_B.convert;
          StateflowKalman_DW.OffB_0 = StateflowKalman_B.convert10;
          StateflowKalman_B.Bool = 2.0;
          StateflowKalman_B.Luci = 3.0;
          StateflowKalman_B.Hv = 1.0;
          StateflowKalman_B.OffA_vite = StateflowKalman_B.convert_k;
          StateflowKalman_B.OffB_vite = StateflowKalman_B.convert10_p;
        }
        break;

       case StateflowKal_IN_FineLavorazione:
        StateflowKalman_B.Hb = 0.0;
        StateflowKalman_B.Luci = 5.0;
        StateflowKalman_B.Bool = 5.0;
        StateflowKalman_B.FineLavorazione = 1.0;
        StateflowKalman_B.Hv = 0.0;

        /* During 'FineLavorazione': '<S13>:69' */
        sf_internal_predicateOutput = (((StateflowKalman_DW.temporalCounter_i1 >=
          10000U) && (StateflowKalman_B.StartHome == 1.0)) ||
          (StateflowKalman_B.Reset == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:243' */
          StateflowKalman_DW.is_c15_StateflowKalman = StateflowKalman_IN_Home;

          /* Entry 'Home': '<S13>:29' */
          StateflowKalman_B.Bool = 1.0;
          StateflowKalman_DW.conv = 5.9921124526782858E-6;
          StateflowKalman_DW.conv_vite = 1.220703125E-7;
          StateflowKalman_B.Luci = 1.0;
          StateflowKalman_B.FineLavorazione = 0.0;
          StateflowKalman_B.PosRifA = StateflowKalman_DW.conv * 180.0 /
            3.1415926535897931 * StateflowKalman_B.convert;

          /* posA in gradi */
          StateflowKalman_B.PosRifB = StateflowKalman_DW.conv * 180.0 /
            3.1415926535897931 * StateflowKalman_B.convert10;

          /* posB in gradi */
        }
        break;

       case StateflowKalman_IN_Home:
        StateflowKalman_B.Luci = 1.0;
        StateflowKalman_B.Bool = 1.0;
        StateflowKalman_B.FineLavorazione = 0.0;

        /* During 'Home': '<S13>:29' */
        sf_internal_predicateOutput = ((StateflowKalman_B.IntegertoBitConverter
          [14] == 0.0) && (StateflowKalman_B.IntegertoBitConverter_d[7] == 1.0) &&
          (StateflowKalman_B.IntegertoBitConverter_d[14] == 1.0) &&
          (StateflowKalman_B.StartHome == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:277' */
          StateflowKalman_DW.is_c15_StateflowKalman = StateflowKalman_IN_HomeDef;

          /* Entry 'HomeDef': '<S13>:329' */
          StateflowKalman_DW.OffA_0 = StateflowKalman_B.convert;
          StateflowKalman_DW.OffB_0 = StateflowKalman_B.convert10;
          StateflowKalman_DW.dv = StateflowKalman_B.Discesa * 0.01;
          StateflowKalman_B.Luci = 2.0;
          StateflowKalman_B.OffT = StateflowKalman_B.Clock;
        } else {
          StateflowKalman_B.PosRifA -= 0.02;
          StateflowKalman_B.PosRifB -= 0.02;
          StateflowKalman_B.Stato = 0.0;

          /* Simulink Function 'Setting': '<S13>:305' */
          StateflowKalman_B.Fc = StateflowKalman_B.IntegertoBitConverter[14];
          StateflowKalman_B.Fca = StateflowKalman_B.IntegertoBitConverter_d[7];
          StateflowKalman_B.Fcb = StateflowKalman_B.IntegertoBitConverter_d[14];
          StateflowKalman_B.posrifA = StateflowKalman_B.PosRifA;
          StateflowKalman_B.posrifB = StateflowKalman_B.PosRifB;
          StateflowKalman_B.posA_k = StateflowKalman_B.convert;
          StateflowKalman_B.posB_c = StateflowKalman_B.convert10;

          /* Outputs for Function Call SubSystem: '<S13>/Setting' */
          if (StateflowKalman_DW.Setting_RESET_ELAPS_T) {
            StateflowKalman_DW.Setting_ELAPS_T[0] = 0U;
            StateflowKalman_DW.Setting_ELAPS_T[1] = 0U;
          } else {
            prevT_idx_0 = StateflowKalman_DW.Setting_PREV_T[0];
            prevT_idx_1 = StateflowKalman_DW.Setting_PREV_T[1];
            elapseTime_idx_0 = StateflowKalman_M->Timing.clockTick1 -
              prevT_idx_0;
            prevT_idx_1 = StateflowKalman_M->Timing.clockTickH1 - prevT_idx_1;
            if (prevT_idx_0 > StateflowKalman_M->Timing.clockTick1) {
              prevT_idx_1--;
            }

            StateflowKalman_DW.Setting_ELAPS_T[0] = elapseTime_idx_0;
            StateflowKalman_DW.Setting_ELAPS_T[1] = prevT_idx_1;
          }

          prevT_idx_0 = StateflowKalman_M->Timing.clockTick1;
          prevT_idx_1 = StateflowKalman_M->Timing.clockTickH1;
          StateflowKalman_DW.Setting_PREV_T[0] = prevT_idx_0;
          StateflowKalman_DW.Setting_PREV_T[1] = prevT_idx_1;
          StateflowKalman_DW.Setting_RESET_ELAPS_T = false;

          /* DiscreteIntegrator: '<S200>/Discrete-Time Integrator1' */
          if (StateflowKalman_DW.DiscreteTimeIntegrator1_SYSTEM_ != 0) {
            StateflowKalman_B.DiscreteTimeIntegrator1 =
              StateflowKalman_DW.DiscreteTimeIntegrator1_DSTATE;
          } else {
            StateflowKalman_B.DiscreteTimeIntegrator1 =
              StateflowKalman_P.DiscreteTimeIntegrator1_gainv_o * (real_T)
              StateflowKalman_DW.Setting_ELAPS_T[0] *
              StateflowKalman_DW.DiscreteTimeIntegrator1_PREV_U +
              StateflowKalman_DW.DiscreteTimeIntegrator1_DSTATE;
          }

          /* End of DiscreteIntegrator: '<S200>/Discrete-Time Integrator1' */
          /* DiscreteIntegrator: '<S200>/Discrete-Time Integrator' */
          if (StateflowKalman_DW.DiscreteTimeIntegrator_SYSTEM_E != 0) {
            StateflowKalman_B.DiscreteTimeIntegrator =
              StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE;
          } else {
            StateflowKalman_B.DiscreteTimeIntegrator =
              StateflowKalman_P.DiscreteTimeIntegrator_gainva_l * (real_T)
              StateflowKalman_DW.Setting_ELAPS_T[0] *
              StateflowKalman_DW.DiscreteTimeIntegrator_PREV_U +
              StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE;
          }

          /* End of DiscreteIntegrator: '<S200>/Discrete-Time Integrator' */
          /* Gain: '<S200>/Gain' */
          StateflowKalman_B.Gain_i = StateflowKalman_P.Gain_Gain_d *
            StateflowKalman_B.posA_k;

          /* Gain: '<S200>/Gain1' */
          StateflowKalman_B.Gain1 = StateflowKalman_P.Gain1_Gain_e *
            StateflowKalman_B.posB_c;

          /* Sum: '<S200>/Sum1' */
          StateflowKalman_B.Sum1_i = StateflowKalman_B.posrifA -
            StateflowKalman_B.Gain_i;

          /* Sum: '<S200>/Sum2' */
          StateflowKalman_B.Sum2_b = StateflowKalman_B.posrifB -
            StateflowKalman_B.Gain1;

          /* MATLAB Function: '<S200>/MATLAB Function' incorporates:
           *  Constant: '<S200>/Ki'
           *  Constant: '<S200>/Kp'
           */
          /* MATLAB Function 'State flow robot/Setting/MATLAB Function': '<S203>:1' */
          if (StateflowKalman_B.Fc < 1.0) {
            /* '<S203>:1:6' */
            /* '<S203>:1:7' */
            StateflowKalman_B.CH = 0.0;
          } else {
            /* '<S203>:1:9' */
            StateflowKalman_B.CH = -600.0;
          }

          if (StateflowKalman_B.Fca == 1.0) {
            /* '<S203>:1:11' */
            /* '<S203>:1:12' */
            StateflowKalman_B.CA = 0.0;
          } else {
            /* '<S203>:1:14' */
            StateflowKalman_B.CA = StateflowKalman_P.Kp_Value *
              StateflowKalman_B.Sum1_i + StateflowKalman_P.Ki_Value *
              StateflowKalman_B.DiscreteTimeIntegrator;
          }

          if (StateflowKalman_B.Fcb == 1.0) {
            /* '<S203>:1:16' */
            /* '<S203>:1:17' */
            StateflowKalman_B.CB = 0.0;
          } else {
            /* '<S203>:1:19' */
            StateflowKalman_B.CB = StateflowKalman_P.Kp_Value *
              StateflowKalman_B.Sum2_b + StateflowKalman_P.Ki_Value *
              StateflowKalman_B.DiscreteTimeIntegrator1;
          }

          /* End of MATLAB Function: '<S200>/MATLAB Function' */

          /* Update for DiscreteIntegrator: '<S200>/Discrete-Time Integrator1' */
          StateflowKalman_DW.DiscreteTimeIntegrator1_SYSTEM_ = 0U;
          StateflowKalman_DW.DiscreteTimeIntegrator1_DSTATE =
            StateflowKalman_B.DiscreteTimeIntegrator1;
          StateflowKalman_DW.DiscreteTimeIntegrator1_PREV_U =
            StateflowKalman_B.Sum2_b;

          /* Update for DiscreteIntegrator: '<S200>/Discrete-Time Integrator' */
          StateflowKalman_DW.DiscreteTimeIntegrator_SYSTEM_E = 0U;
          StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE =
            StateflowKalman_B.DiscreteTimeIntegrator;
          StateflowKalman_DW.DiscreteTimeIntegrator_PREV_U =
            StateflowKalman_B.Sum1_i;
          StateflowKalman_DW.Setting_SubsysRanBC = 4;

          /* End of Outputs for SubSystem: '<S13>/Setting' */
          StateflowKalman_B.CoppiaA = StateflowKalman_B.CA;
          StateflowKalman_B.CoppiaB = StateflowKalman_B.CB;
          StateflowKalman_B.CoppiaH = StateflowKalman_B.CH;
        }
        break;

       case StateflowKalman_IN_HomeDef:
        StateflowKalman_B.Luci = 2.0;

        /* During 'HomeDef': '<S13>:329' */
        sf_internal_predicateOutput = ((StateflowKalman_B.CoppiaA == 0.0) &&
          (StateflowKalman_B.CoppiaB == 0.0) && (StateflowKalman_B.Abbassa ==
          1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:332' */
          StateflowKalman_DW.is_c15_StateflowKalman =
            StateflowKalman_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S13>:176' */
          StateflowKalman_B.OffA_vite = StateflowKalman_B.convert_k;
          StateflowKalman_B.CoppiaH = 500.0;
          StateflowKalman_B.Hb = 1.0;
        } else {
          /* Simulink Function 'Posizionamento': '<S13>:320' */
          StateflowKalman_B.posA = StateflowKalman_B.convert;
          StateflowKalman_B.posB = StateflowKalman_B.convert10;
          StateflowKalman_B.OffA_0 = StateflowKalman_DW.OffA_0;
          StateflowKalman_B.OffB_0 = StateflowKalman_DW.OffB_0;
          StateflowKalman_B.Clock_a = StateflowKalman_B.Clock;
          StateflowKalman_B.OffT_a = StateflowKalman_B.OffT;

          /* Outputs for Function Call SubSystem: '<S13>/Posizionamento' */
          if (StateflowKalman_DW.Posizionamento_RESET_ELAPS_T) {
            StateflowKalman_DW.Posizionamento_ELAPS_T[0] = 0U;
            StateflowKalman_DW.Posizionamento_ELAPS_T[1] = 0U;
          } else {
            prevT_idx_0 = StateflowKalman_DW.Posizionamento_PREV_T[0];
            prevT_idx_1 = StateflowKalman_DW.Posizionamento_PREV_T[1];
            elapseTime_idx_0 = StateflowKalman_M->Timing.clockTick1 -
              prevT_idx_0;
            prevT_idx_1 = StateflowKalman_M->Timing.clockTickH1 - prevT_idx_1;
            if (prevT_idx_0 > StateflowKalman_M->Timing.clockTick1) {
              prevT_idx_1--;
            }

            StateflowKalman_DW.Posizionamento_ELAPS_T[0] = elapseTime_idx_0;
            StateflowKalman_DW.Posizionamento_ELAPS_T[1] = prevT_idx_1;
          }

          prevT_idx_0 = StateflowKalman_M->Timing.clockTick1;
          prevT_idx_1 = StateflowKalman_M->Timing.clockTickH1;
          StateflowKalman_DW.Posizionamento_PREV_T[0] = prevT_idx_0;
          StateflowKalman_DW.Posizionamento_PREV_T[1] = prevT_idx_1;
          StateflowKalman_DW.Posizionamento_RESET_ELAPS_T = false;

          /* Sum: '<S199>/Sum1' */
          StateflowKalman_B.Sum1_e = StateflowKalman_B.posB -
            StateflowKalman_B.OffB_0;

          /* Gain: '<S199>/Conversione in gradi ' */
          StateflowKalman_B.Conversioneingradi =
            StateflowKalman_P.Conversioneingradi_Gain * StateflowKalman_B.Sum1_e;

          /* DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
          if (StateflowKalman_DW.DiscreteTimeIntegrator_SYSTEM_j != 0) {
            StateflowKalman_B.DiscreteTimeIntegrator_i =
              StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE_c;
          } else {
            StateflowKalman_B.DiscreteTimeIntegrator_i =
              StateflowKalman_P.DiscreteTimeIntegrator_gainval * (real_T)
              StateflowKalman_DW.Posizionamento_ELAPS_T[0] *
              StateflowKalman_DW.DiscreteTimeIntegrator_PREV_U_j +
              StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE_c;
          }

          /* End of DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */

          /* DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
          if (StateflowKalman_DW.DiscreteTimeIntegrator1_SYSTE_c != 0) {
            StateflowKalman_B.DiscreteTimeIntegrator1_b =
              StateflowKalman_DW.DiscreteTimeIntegrator1_DSTAT_j;
          } else {
            StateflowKalman_B.DiscreteTimeIntegrator1_b =
              StateflowKalman_P.DiscreteTimeIntegrator1_gainval * (real_T)
              StateflowKalman_DW.Posizionamento_ELAPS_T[0] *
              StateflowKalman_DW.DiscreteTimeIntegrator1_PREV__o +
              StateflowKalman_DW.DiscreteTimeIntegrator1_DSTAT_j;
          }

          /* End of DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */

          /* Sum: '<S199>/Sum2' */
          StateflowKalman_B.Sum2_g = StateflowKalman_B.posA -
            StateflowKalman_B.OffA_0;

          /* Gain: '<S199>/Gain1' */
          StateflowKalman_B.Gain1_e = StateflowKalman_P.Gain1_Gain_d *
            StateflowKalman_B.Sum2_g;

          /* Gain: '<S199>/Ki1' */
          StateflowKalman_B.Ki1 = StateflowKalman_P.Ki1_Gain *
            StateflowKalman_B.DiscreteTimeIntegrator_i;

          /* Gain: '<S199>/Ki2' */
          StateflowKalman_B.Ki2 = StateflowKalman_P.Ki2_Gain *
            StateflowKalman_B.DiscreteTimeIntegrator1_b;

          /* Sum: '<S199>/Sum' */
          StateflowKalman_B.Sum_h = StateflowKalman_B.Clock_a -
            StateflowKalman_B.OffT_a;

          /* MATLAB Function: '<S199>/MATLAB Function' */
          /* MATLAB Function 'State flow robot/Posizionamento/MATLAB Function': '<S201>:1' */
          /* '<S201>:1:3' */
          /* '<S201>:1:4' */
          /*  */
          /* '<S201>:1:8' */
          x1 = (StateflowKalman_B.Sum_h - 1.0) / 1.5;

          /* '<S201>:1:9' */
          x2 = StateflowKalman_B.Sum_h / 2.5;

          /*  theta1 */
          if ((x1 >= 0.0) && (x1 <= 1.0)) {
            /* '<S201>:1:11' */
            /* '<S201>:1:15' */
            G1 = (10.0 * rt_powd_snf(x1, 3.0) - 15.0 * rt_powd_snf(x1, 4.0)) +
              6.0 * rt_powd_snf(x1, 5.0);
          } else if (x1 < 0.0) {
            /* '<S201>:1:16' */
            /* '<S201>:1:20' */
            G1 = 0.0;
          } else {
            /* '<S201>:1:25' */
            G1 = 1.0;
          }

          /*  theta2 */
          if ((x2 >= 0.0) && (x2 <= 1.0)) {
            /* '<S201>:1:28' */
            /* '<S201>:1:32' */
            x2 = (10.0 * rt_powd_snf(x2, 3.0) - 15.0 * rt_powd_snf(x2, 4.0)) +
              6.0 * rt_powd_snf(x2, 5.0);
          } else {
            /* '<S201>:1:37' */
            x2 = 1.0;
          }

          /* '<S201>:1:40' */
          StateflowKalman_B.theta1 = 46.7149 * G1;

          /* '<S201>:1:42' */
          StateflowKalman_B.theta2 = 101.1994 * x2;

          /* End of MATLAB Function: '<S199>/MATLAB Function' */

          /* Sum: '<S199>/Sum3' */
          StateflowKalman_B.Sum3_a = StateflowKalman_B.theta1 -
            StateflowKalman_B.Conversioneingradi;

          /* Gain: '<S199>/Kp1' */
          StateflowKalman_B.Kp1 = StateflowKalman_P.Kp1_Gain *
            StateflowKalman_B.Sum3_a;

          /* Sum: '<S199>/Sum4' */
          StateflowKalman_B.Sum4_f = StateflowKalman_B.theta2 -
            StateflowKalman_B.Gain1_e;

          /* Gain: '<S199>/Kp2' */
          StateflowKalman_B.Kp2 = StateflowKalman_P.Kp2_Gain *
            StateflowKalman_B.Sum4_f;

          /* Sum: '<S199>/Sum5' */
          StateflowKalman_B.Sum5_p = StateflowKalman_B.Ki1 +
            StateflowKalman_B.Kp1;

          /* Sum: '<S199>/Sum6' */
          StateflowKalman_B.Sum6_n = StateflowKalman_B.Kp2 +
            StateflowKalman_B.Ki2;

          /* MATLAB Function: '<S199>/MATLAB Function1' */
          /* MATLAB Function 'State flow robot/Posizionamento/MATLAB Function1': '<S202>:1' */
          if (StateflowKalman_B.Sum_h > 4.0) {
            /* '<S202>:1:3' */
            /* '<S202>:1:4' */
            StateflowKalman_B.CA_o = 0.0;

            /* '<S202>:1:5' */
            StateflowKalman_B.CB_b = 0.0;
          } else {
            /* '<S202>:1:7' */
            StateflowKalman_B.CA_o = StateflowKalman_B.Sum6_n;

            /* '<S202>:1:8' */
            StateflowKalman_B.CB_b = StateflowKalman_B.Sum5_p;
          }

          /* End of MATLAB Function: '<S199>/MATLAB Function1' */

          /* Update for DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
          StateflowKalman_DW.DiscreteTimeIntegrator_SYSTEM_j = 0U;
          StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE_c =
            StateflowKalman_B.DiscreteTimeIntegrator_i;
          StateflowKalman_DW.DiscreteTimeIntegrator_PREV_U_j =
            StateflowKalman_B.Sum3_a;

          /* Update for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
          StateflowKalman_DW.DiscreteTimeIntegrator1_SYSTE_c = 0U;
          StateflowKalman_DW.DiscreteTimeIntegrator1_DSTAT_j =
            StateflowKalman_B.DiscreteTimeIntegrator1_b;
          StateflowKalman_DW.DiscreteTimeIntegrator1_PREV__o =
            StateflowKalman_B.Sum4_f;
          StateflowKalman_DW.Posizionamento_SubsysRanBC = 4;

          /* End of Outputs for SubSystem: '<S13>/Posizionamento' */
          StateflowKalman_B.CoppiaA = StateflowKalman_B.CA_o;
          StateflowKalman_B.CoppiaB = StateflowKalman_B.CB_b;
        }
        break;

       case StateflowKalman_IN_OffSet:
        StateflowKalman_B.Luci = 3.0;
        StateflowKalman_B.Bool = 2.0;
        StateflowKalman_B.Hv = 1.0;

        /* During 'OffSet': '<S13>:87' */
        if (StateflowKalman_B.StartWork == 1.0) {
          /* Transition: '<S13>:90' */
          StateflowKalman_DW.is_c15_StateflowKalman =
            StateflowKalman_IN_Controllo;
          StateflowKalman_DW.temporalCounter_i1 = 0U;

          /* Entry 'Controllo': '<S13>:147' */
          StateflowKalman_B.OffT = StateflowKalman_B.Clock;
          StateflowKalman_B.Luci = 4.0;
          StateflowKalman_B.Bool = 4.0;
          StateflowKalman_B.Hv = 0.0;
          StateflowKalman_B.Hb = 0.0;
        }
        break;

       case StateflowKalman_IN_Step1:
        StateflowKalman_B.Bool = -1.0;

        /* During 'Step1': '<S13>:28' */
        sf_internal_predicateOutput = ((StateflowKalman_B.DataTypeConversion6 ==
          1079.0) && (StateflowKalman_B.StartRobot == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:35' */
          StateflowKalman_DW.is_c15_StateflowKalman =
            StateflowKalman_IN_Attivazione;

          /* Entry 'Attivazione': '<S13>:231' */
          StateflowKalman_B.Bool = 0.0;
          StateflowKalman_B.Enable = 1.0;
        }
        break;

       default:
        StateflowKalman_B.Bool = 3.0;

        /* During 'StopPhase': '<S13>:247' */
        if (StateflowKalman_B.Reset == 1.0) {
          /* Transition: '<S13>:249' */
          StateflowKalman_DW.is_c15_StateflowKalman =
            StateflowKalman_IN_Attivazione;

          /* Entry 'Attivazione': '<S13>:231' */
          StateflowKalman_B.Bool = 0.0;
          StateflowKalman_B.Enable = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/State flow robot' */
    /* MATLAB Function: '<S3>/MATLAB Function1' */
    /* MATLAB Function 'LED Status/MATLAB Function1': '<S16>:1' */
    if ((StateflowKalman_B.Luci == 1.0) || (StateflowKalman_B.Luci == 2.0) ||
        (StateflowKalman_B.Luci == 4.0)) {
      /* '<S16>:1:2' */
      /* '<S16>:1:3' */
      StateflowKalman_B.y_b = 1.0;
    } else {
      /* '<S16>:1:5' */
      StateflowKalman_B.y_b = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function1' */

    /* DataTypeConversion: '<S3>/Data Type Conversion25' */
    StateflowKalman_B.DataTypeConversion25 = (StateflowKalman_B.y_b != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */

    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[11];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function' */
    /* MATLAB Function 'LED Status/MATLAB Function': '<S15>:1' */
    if ((StateflowKalman_B.Luci == 2.0) || (StateflowKalman_B.Luci == 3.0)) {
      /* '<S15>:1:2' */
      /* '<S15>:1:3' */
      StateflowKalman_B.y_i = 1.0;
    } else {
      /* '<S15>:1:5' */
      StateflowKalman_B.y_i = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function' */

    /* DataTypeConversion: '<S3>/Data Type Conversion24' */
    StateflowKalman_B.DataTypeConversion24 = (StateflowKalman_B.y_i != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */

    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[12];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function2' */
    /* MATLAB Function 'LED Status/MATLAB Function2': '<S17>:1' */
    if ((StateflowKalman_B.Luci == 4.0) || (StateflowKalman_B.Luci == 5.0)) {
      /* '<S17>:1:2' */
      /* '<S17>:1:3' */
      StateflowKalman_B.y_f = 1.0;
    } else {
      /* '<S17>:1:5' */
      StateflowKalman_B.y_f = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function2' */

    /* DataTypeConversion: '<S3>/Data Type Conversion26' */
    StateflowKalman_B.DataTypeConversion26 = (StateflowKalman_B.y_f != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */

    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[13];
      sfcnOutputs(rts,1);
    }

    /* Memory: '<S23>/Memory' */
    StateflowKalman_B.Memory = StateflowKalman_DW.Memory_PreviousInput;

    /* Sum: '<S68>/Sum12' */
    StateflowKalman_B.Sum12 = StateflowKalman_B.convert10 -
      StateflowKalman_B.OffB;

    /* MATLAB Function: '<S68>/Asse B conv brac1' */
    /* MATLAB Function 'Sistema_braccia/Posizioni/Asse B conv brac1': '<S173>:1' */
    /* '<S173>:1:2' */
    StateflowKalman_B.pos_B_conv = StateflowKalman_B.Sum12 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S68>/Sum4' incorporates:
     *  Constant: '<S68>/Constant4'
     */
    StateflowKalman_B.Sum4 = StateflowKalman_B.pos_B_conv +
      StateflowKalman_P.Constant4_Value;

    /* Sum: '<S68>/Sum9' */
    StateflowKalman_B.Sum9 = StateflowKalman_B.convert - StateflowKalman_B.OffA;

    /* MATLAB Function: '<S68>/Asse A conv bracc' */
    /* MATLAB Function 'Sistema_braccia/Posizioni/Asse A conv bracc': '<S172>:1' */
    /* '<S172>:1:2' */
    StateflowKalman_B.pos_A_conv = StateflowKalman_B.Sum9 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S68>/Sum7' incorporates:
     *  Constant: '<S68>/Constant5'
     */
    StateflowKalman_B.Sum7 = StateflowKalman_B.pos_A_conv +
      StateflowKalman_P.Constant5_Value;

    /* S-Function (xpcethercatpdorx): '<S72>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S72>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S72>/Velocity B' */
    StateflowKalman_B.VelocityB = StateflowKalman_B.EtherCATPDOReceive15;

    /* MATLAB Function: '<S72>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse B conv': '<S198>:1' */
    /* '<S198>:1:2' */
    StateflowKalman_B.vel_B_conv = StateflowKalman_B.VelocityB *
      6.2831853071795862 / 163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S72>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S72>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S72>/Velocity A' */
    StateflowKalman_B.VelocityA = StateflowKalman_B.EtherCATPDOReceive14;

    /* MATLAB Function: '<S72>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse A conv': '<S197>:1' */
    /* '<S197>:1:2' */
    StateflowKalman_B.vel_A_conv = StateflowKalman_B.VelocityA *
      6.2831853071795862 / 163840.0 / 64.0;

    /* MATLAB Function: '<S67>/Cinematica Inversa2' incorporates:
     *  Constant: '<S67>/Constant'
     *  Constant: '<S67>/Constant1'
     */
    /* MATLAB Function 'Sistema_braccia/Pos iniziali/Cinematica Inversa2': '<S171>:1' */
    /* '<S171>:1:3' */
    /* '<S171>:1:4' */
    /* '<S171>:1:6' */
    x2 = sin(StateflowKalman_P.Constant1_Value) - sin
      (StateflowKalman_P.Constant_Value_b);
    b_a = -0.18 - (cos(StateflowKalman_P.Constant1_Value) - cos
                   (StateflowKalman_P.Constant_Value_b)) * 0.25;
    x2 = x2 * x2 * 0.0625 + b_a * b_a;

    /* '<S171>:1:7' */
    c_a = -0.18 - (cos(StateflowKalman_P.Constant1_Value) - cos
                   (StateflowKalman_P.Constant_Value_b)) * 0.25;
    x1 = ((-0.18 - (cos(StateflowKalman_P.Constant1_Value) - cos
                    (StateflowKalman_P.Constant_Value_b)) * 0.25) * ((sin
            (StateflowKalman_P.Constant1_Value) - sin
            (StateflowKalman_P.Constant_Value_b)) * 0.25) * (-0.18 - 0.5 * cos
           (StateflowKalman_P.Constant1_Value)) + (sin
           (StateflowKalman_P.Constant1_Value) - sin
           (StateflowKalman_P.Constant_Value_b)) * -0.01125 * (cos
           (StateflowKalman_P.Constant1_Value) + cos
           (StateflowKalman_P.Constant_Value_b))) - 0.5 * sin
      (StateflowKalman_P.Constant1_Value) * (c_a * c_a);

    /* '<S171>:1:10' */
    x4 = cos(StateflowKalman_P.Constant1_Value) + cos
      (StateflowKalman_P.Constant_Value_b);
    x5 = -0.18 - (cos(StateflowKalman_P.Constant1_Value) - cos
                  (StateflowKalman_P.Constant_Value_b)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S171>:1:14' */
    x2 = (sqrt(x1 * x1 - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
               (StateflowKalman_P.Constant1_Value) - cos
               (StateflowKalman_P.Constant_Value_b)) * 0.25) * ((cos
               (StateflowKalman_P.Constant1_Value) + cos
               (StateflowKalman_P.Constant_Value_b)) * 0.0225) * (-0.18 - 0.5 *
              cos(StateflowKalman_P.Constant1_Value))) + (0.045 * cos
             (StateflowKalman_P.Constant1_Value) + 0.0081) * (x5 * x5)) * (4.0 *
            x2)) + -x1) / (2.0 * x2);

    /*  Posizione X end-effector */
    /* '<S171>:1:16' */
    StateflowKalman_B.x0 = (x2 * 0.25 * (sin(StateflowKalman_P.Constant1_Value)
      - sin(StateflowKalman_P.Constant_Value_b)) - (cos
      (StateflowKalman_P.Constant1_Value) + cos
      (StateflowKalman_P.Constant_Value_b)) * 0.0225) / (-0.18 - (cos
      (StateflowKalman_P.Constant1_Value) - cos
      (StateflowKalman_P.Constant_Value_b)) * 0.25);
    StateflowKalman_B.y0 = x2;

    /* Sum: '<S53>/Sum2' */
    StateflowKalman_B.Sum2 = StateflowKalman_B.Clock - StateflowKalman_B.OffT;

    /* MATLAB Function: '<S58>/Quadrato' incorporates:
     *  Constant: '<S58>/Alzata Q'
     *  Constant: '<S58>/Periodo Q'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Quadrato': '<S168>:1' */
    /* '<S168>:1:2' */
    /* '<S168>:1:3' */
    /* '<S168>:1:4' */
    x1 = StateflowKalman_B.Sum2 / (0.5 * StateflowKalman_P.PeriodoQ_Value / 4.0);

    /* '<S168>:1:5' */
    x2 = (StateflowKalman_B.Sum2 - 0.5 * StateflowKalman_P.PeriodoQ_Value / 4.0)
      / (StateflowKalman_P.PeriodoQ_Value / 4.0);

    /* '<S168>:1:6' */
    x3 = (StateflowKalman_B.Sum2 - 1.5 * StateflowKalman_P.PeriodoQ_Value / 4.0)
      / (StateflowKalman_P.PeriodoQ_Value / 4.0);

    /* '<S168>:1:7' */
    x4 = (StateflowKalman_B.Sum2 - 2.5 * StateflowKalman_P.PeriodoQ_Value / 4.0)
      / (StateflowKalman_P.PeriodoQ_Value / 4.0);

    /* '<S168>:1:8' */
    x5 = (StateflowKalman_B.Sum2 - 3.5 * StateflowKalman_P.PeriodoQ_Value / 4.0)
      / (0.5 * StateflowKalman_P.PeriodoQ_Value / 4.0);

    /* '<S168>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((StateflowKalman_B.Sum2 > 0.0) && (StateflowKalman_B.Sum2 <= 0.5 *
         StateflowKalman_P.PeriodoQ_Value / 4.0)) {
      /* '<S168>:1:14' */
      if ((x1 >= 0.0) && (x1 < 0.1)) {
        /* '<S168>:1:16' */
        /* acc crescente positiva */
        /* '<S168>:1:17' */
        G1 = 55.555555555555543 * x1;

        /* '<S168>:1:18' */
        F = x1 * x1 * 27.777777777777771;

        /* '<S168>:1:19' */
        x1 = 9.259259259259256 * StateflowKalman_mpower(x1);
      } else if ((x1 >= 0.1) && (x1 < 0.30000000000000004)) {
        /* '<S168>:1:22' */
        /* acc costante positiva */
        /* '<S168>:1:23' */
        G1 = 5.5555555555555545;

        /* '<S168>:1:24' */
        F = 5.5555555555555545 * x1 - 0.27777777777777773;

        /* '<S168>:1:25' */
        x1 = (x1 * x1 * 2.7777777777777772 - 0.27777777777777773 * x1) +
          0.0092592592592592587;
      } else if ((x1 >= 0.30000000000000004) && (x1 < 0.4)) {
        /* '<S168>:1:28' */
        /* acc decrescente positiva */
        /* '<S168>:1:29' */
        G1 = -55.555555555555543 * x1 + 22.222222222222218;

        /* '<S168>:1:30' */
        F = (x1 * x1 * -27.777777777777771 + 22.222222222222218 * x1) -
          2.7777777777777777;

        /* '<S168>:1:31' */
        x1 = ((((x1 * x1 * 11.111111111111109 + -9.259259259259256 *
                 StateflowKalman_mpower(x1)) - 2.7777777777777777 * x1) -
               0.44444444444444442) + 9.259259259259256 * StateflowKalman_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x1 >= 0.4) && (x1 < 0.6)) {
        /* '<S168>:1:35' */
        /* acc costante nulla */
        /* '<S168>:1:36' */
        G1 = 0.0;

        /* '<S168>:1:37' */
        F = 1.6666666666666665;

        /* '<S168>:1:38' */
        x1 = (1.6666666666666665 * x1 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x1 >= 0.6) && (x1 < 0.7)) {
        /* '<S168>:1:41' */
        /* acc decrescente negativa */
        /* '<S168>:1:42' */
        G1 = -55.555555555555543 * x1 + 33.333333333333321;

        /* '<S168>:1:43' */
        F = ((x1 * x1 * -27.777777777777771 + 33.333333333333321 * x1) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S168>:1:44' */
        x1 = (((((x1 * x1 * 16.666666666666661 + -9.259259259259256 *
                  StateflowKalman_mpower(x1)) + 1.6666666666666665 * x1) -
                9.9999999999999982 * x1) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateflowKalman_mpower
          (0.6);
      } else if ((x1 >= 0.7) && (x1 < 0.9)) {
        /* '<S168>:1:48' */
        /* acc costante negativa */
        /* '<S168>:1:49' */
        G1 = -5.5555555555555545;

        /* '<S168>:1:50' */
        F = (-5.5555555555555545 * x1 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S168>:1:51' */
        x1 = (((x1 * x1 * -2.7777777777777772 + 5.5555555555555545 * x1) -
               0.27777777777777773 * x1) + 1.0) - 2.5092592592592586;
      } else if ((x1 >= 0.9) && (x1 <= 1.0)) {
        /* '<S168>:1:54' */
        /* acc crescente negativa */
        /* '<S168>:1:55' */
        G1 = (x1 - 1.0) * 55.555555555555543;

        /* '<S168>:1:56' */
        F = (x1 * x1 * 27.777777777777771 - 55.555555555555543 * x1) +
          27.777777777777771;

        /* '<S168>:1:57' */
        x1 = (((9.259259259259256 * StateflowKalman_mpower(x1) - x1 * x1 *
                27.777777777777771) + 27.777777777777771 * x1) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S168>:1:61' */
        G1 = 0.0;

        /* '<S168>:1:62' */
        F = 0.0;

        /* '<S168>:1:63' */
        x1 = 1.0;
      }

      /* '<S168>:1:66' */
      StateflowKalman_B.xq = x1 * StateflowKalman_P.AlzataQ_Value / 2.0;

      /* '<S168>:1:67' */
      StateflowKalman_B.xq_p = StateflowKalman_P.AlzataQ_Value / 2.0 * F /
        (StateflowKalman_P.PeriodoQ_Value / 4.0);

      /* '<S168>:1:68' */
      StateflowKalman_B.yq = 0.0;

      /* '<S168>:1:69' */
      StateflowKalman_B.yq_p = 0.0;

      /* '<S168>:1:70' */
      x2 = StateflowKalman_P.PeriodoQ_Value / 4.0;
      StateflowKalman_B.xq_pp = StateflowKalman_P.AlzataQ_Value / 2.0 * G1 / (x2
        * x2);

      /* '<S168>:1:71' */
      StateflowKalman_B.yq_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 0.5 * StateflowKalman_P.PeriodoQ_Value /
                4.0) && (StateflowKalman_B.Sum2 <= 1.5 *
                         StateflowKalman_P.PeriodoQ_Value / 4.0)) {
      /* '<S168>:1:73' */
      /* '<S168>:1:74' */
      /*  Cj = Ca/xj; */
      if ((x2 >= 0.0) && (x2 < 0.1)) {
        /* '<S168>:1:77' */
        /* acc crescente positiva */
        /* '<S168>:1:78' */
        G1 = 55.555555555555543 * x2;

        /* '<S168>:1:79' */
        F = x2 * x2 * 27.777777777777771;

        /* '<S168>:1:80' */
        x1 = 9.259259259259256 * StateflowKalman_mpower(x2);
      } else if ((x2 >= 0.1) && (x2 < 0.30000000000000004)) {
        /* '<S168>:1:83' */
        /* acc costante positiva */
        /* '<S168>:1:84' */
        G1 = 5.5555555555555545;

        /* '<S168>:1:85' */
        F = 5.5555555555555545 * x2 - 0.27777777777777773;

        /* '<S168>:1:86' */
        x1 = (x2 * x2 * 2.7777777777777772 - 0.27777777777777773 * x2) +
          0.0092592592592592587;
      } else if ((x2 >= 0.30000000000000004) && (x2 < 0.4)) {
        /* '<S168>:1:89' */
        /* acc decrescente positiva */
        /* '<S168>:1:90' */
        G1 = -55.555555555555543 * x2 + 22.222222222222218;

        /* '<S168>:1:91' */
        F = (x2 * x2 * -27.777777777777771 + 22.222222222222218 * x2) -
          2.7777777777777777;

        /* '<S168>:1:92' */
        x1 = ((((x2 * x2 * 11.111111111111109 + -9.259259259259256 *
                 StateflowKalman_mpower(x2)) - 2.7777777777777777 * x2) -
               0.44444444444444442) + 9.259259259259256 * StateflowKalman_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x2 >= 0.4) && (x2 < 0.6)) {
        /* '<S168>:1:96' */
        /* acc costante nulla */
        /* '<S168>:1:97' */
        G1 = 0.0;

        /* '<S168>:1:98' */
        F = 1.6666666666666665;

        /* '<S168>:1:99' */
        x1 = (1.6666666666666665 * x2 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x2 >= 0.6) && (x2 < 0.7)) {
        /* '<S168>:1:102' */
        /* acc decrescente negativa */
        /* '<S168>:1:103' */
        G1 = -55.555555555555543 * x2 + 33.333333333333321;

        /* '<S168>:1:104' */
        F = ((x2 * x2 * -27.777777777777771 + 33.333333333333321 * x2) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S168>:1:105' */
        x1 = (((((x2 * x2 * 16.666666666666661 + -9.259259259259256 *
                  StateflowKalman_mpower(x2)) + 1.6666666666666665 * x2) -
                9.9999999999999982 * x2) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateflowKalman_mpower
          (0.6);
      } else if ((x2 >= 0.7) && (x2 < 0.9)) {
        /* '<S168>:1:109' */
        /* acc costante negativa */
        /* '<S168>:1:110' */
        G1 = -5.5555555555555545;

        /* '<S168>:1:111' */
        F = (-5.5555555555555545 * x2 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S168>:1:112' */
        x1 = (((x2 * x2 * -2.7777777777777772 + 5.5555555555555545 * x2) -
               0.27777777777777773 * x2) + 1.0) - 2.5092592592592586;
      } else if ((x2 >= 0.9) && (x2 <= 1.0)) {
        /* '<S168>:1:115' */
        /* acc crescente negativa */
        /* '<S168>:1:116' */
        G1 = (x2 - 1.0) * 55.555555555555543;

        /* '<S168>:1:117' */
        F = (x2 * x2 * 27.777777777777771 - 55.555555555555543 * x2) +
          27.777777777777771;

        /* '<S168>:1:118' */
        x1 = (((9.259259259259256 * StateflowKalman_mpower(x2) - x2 * x2 *
                27.777777777777771) + 27.777777777777771 * x2) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S168>:1:122' */
        G1 = 0.0;

        /* '<S168>:1:123' */
        F = 0.0;

        /* '<S168>:1:124' */
        x1 = 1.0;
      }

      /* '<S168>:1:127' */
      StateflowKalman_B.xq = StateflowKalman_P.AlzataQ_Value / 2.0;

      /* '<S168>:1:128' */
      StateflowKalman_B.xq_p = 0.0;

      /* '<S168>:1:129' */
      StateflowKalman_B.yq = -x1 * StateflowKalman_P.AlzataQ_Value;

      /* '<S168>:1:130' */
      StateflowKalman_B.yq_p = -F * StateflowKalman_P.AlzataQ_Value /
        (StateflowKalman_P.PeriodoQ_Value / 4.0);

      /* '<S168>:1:131' */
      StateflowKalman_B.xq_pp = 0.0;

      /* '<S168>:1:132' */
      x2 = StateflowKalman_P.PeriodoQ_Value / 4.0;
      StateflowKalman_B.yq_pp = StateflowKalman_P.AlzataQ_Value / 2.0 * -G1 /
        (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 1.5 * StateflowKalman_P.PeriodoQ_Value /
                4.0) && (StateflowKalman_B.Sum2 <= 2.5 *
                         StateflowKalman_P.PeriodoQ_Value / 4.0)) {
      /* '<S168>:1:134' */
      /* '<S168>:1:135' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S168>:1:138' */
        /* acc crescente positiva */
        /* '<S168>:1:139' */
        G1 = 55.555555555555543 * x3;

        /* '<S168>:1:140' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S168>:1:141' */
        x1 = 9.259259259259256 * StateflowKalman_mpower(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S168>:1:144' */
        /* acc costante positiva */
        /* '<S168>:1:145' */
        G1 = 5.5555555555555545;

        /* '<S168>:1:146' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S168>:1:147' */
        x1 = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S168>:1:150' */
        /* acc decrescente positiva */
        /* '<S168>:1:151' */
        G1 = -55.555555555555543 * x3 + 22.222222222222218;

        /* '<S168>:1:152' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S168>:1:153' */
        x1 = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                 StateflowKalman_mpower(x3)) - 2.7777777777777777 * x3) -
               0.44444444444444442) + 9.259259259259256 * StateflowKalman_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S168>:1:157' */
        /* acc costante nulla */
        /* '<S168>:1:158' */
        G1 = 0.0;

        /* '<S168>:1:159' */
        F = 1.6666666666666665;

        /* '<S168>:1:160' */
        x1 = (1.6666666666666665 * x3 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S168>:1:163' */
        /* acc decrescente negativa */
        /* '<S168>:1:164' */
        G1 = -55.555555555555543 * x3 + 33.333333333333321;

        /* '<S168>:1:165' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S168>:1:166' */
        x1 = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                  StateflowKalman_mpower(x3)) + 1.6666666666666665 * x3) -
                9.9999999999999982 * x3) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateflowKalman_mpower
          (0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S168>:1:170' */
        /* acc costante negativa */
        /* '<S168>:1:171' */
        G1 = -5.5555555555555545;

        /* '<S168>:1:172' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S168>:1:173' */
        x1 = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
               0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S168>:1:176' */
        /* acc crescente negativa */
        /* '<S168>:1:177' */
        G1 = (x3 - 1.0) * 55.555555555555543;

        /* '<S168>:1:178' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S168>:1:179' */
        x1 = (((9.259259259259256 * StateflowKalman_mpower(x3) - x3 * x3 *
                27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S168>:1:183' */
        G1 = 0.0;

        /* '<S168>:1:184' */
        F = 0.0;

        /* '<S168>:1:185' */
        x1 = 1.0;
      }

      /* '<S168>:1:188' */
      StateflowKalman_B.xq = StateflowKalman_P.AlzataQ_Value / 2.0 - x1 *
        StateflowKalman_P.AlzataQ_Value;

      /* '<S168>:1:189' */
      StateflowKalman_B.xq_p = -F * StateflowKalman_P.AlzataQ_Value /
        (StateflowKalman_P.PeriodoQ_Value / 4.0);

      /* '<S168>:1:190' */
      StateflowKalman_B.yq = -StateflowKalman_P.AlzataQ_Value;

      /* '<S168>:1:191' */
      StateflowKalman_B.yq_p = 0.0;

      /* '<S168>:1:192' */
      x2 = StateflowKalman_P.PeriodoQ_Value / 4.0;
      StateflowKalman_B.xq_pp = StateflowKalman_P.AlzataQ_Value / 2.0 * -G1 /
        (x2 * x2);

      /* '<S168>:1:193' */
      StateflowKalman_B.yq_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 2.5 * StateflowKalman_P.PeriodoQ_Value /
                4.0) && (StateflowKalman_B.Sum2 <= 3.5 *
                         StateflowKalman_P.PeriodoQ_Value / 4.0)) {
      /* '<S168>:1:195' */
      /* '<S168>:1:196' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S168>:1:199' */
        /* acc crescente positiva */
        /* '<S168>:1:200' */
        G1 = 55.555555555555543 * x4;

        /* '<S168>:1:201' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S168>:1:202' */
        x1 = 9.259259259259256 * StateflowKalman_mpower(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S168>:1:205' */
        /* acc costante positiva */
        /* '<S168>:1:206' */
        G1 = 5.5555555555555545;

        /* '<S168>:1:207' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S168>:1:208' */
        x1 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S168>:1:211' */
        /* acc decrescente positiva */
        /* '<S168>:1:212' */
        G1 = -55.555555555555543 * x4 + 22.222222222222218;

        /* '<S168>:1:213' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S168>:1:214' */
        x1 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                 StateflowKalman_mpower(x4)) - 2.7777777777777777 * x4) -
               0.44444444444444442) + 9.259259259259256 * StateflowKalman_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S168>:1:218' */
        /* acc costante nulla */
        /* '<S168>:1:219' */
        G1 = 0.0;

        /* '<S168>:1:220' */
        F = 1.6666666666666665;

        /* '<S168>:1:221' */
        x1 = (1.6666666666666665 * x4 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S168>:1:224' */
        /* acc decrescente negativa */
        /* '<S168>:1:225' */
        G1 = -55.555555555555543 * x4 + 33.333333333333321;

        /* '<S168>:1:226' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S168>:1:227' */
        x1 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                  StateflowKalman_mpower(x4)) + 1.6666666666666665 * x4) -
                9.9999999999999982 * x4) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateflowKalman_mpower
          (0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S168>:1:231' */
        /* acc costante negativa */
        /* '<S168>:1:232' */
        G1 = -5.5555555555555545;

        /* '<S168>:1:233' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S168>:1:234' */
        x1 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
               0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S168>:1:237' */
        /* acc crescente negativa */
        /* '<S168>:1:238' */
        G1 = (x4 - 1.0) * 55.555555555555543;

        /* '<S168>:1:239' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S168>:1:240' */
        x1 = (((9.259259259259256 * StateflowKalman_mpower(x4) - x4 * x4 *
                27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S168>:1:244' */
        G1 = 0.0;

        /* '<S168>:1:245' */
        F = 0.0;

        /* '<S168>:1:246' */
        x1 = 1.0;
      }

      /* '<S168>:1:249' */
      StateflowKalman_B.xq = -StateflowKalman_P.AlzataQ_Value / 2.0;

      /* '<S168>:1:250' */
      StateflowKalman_B.xq_p = 0.0;

      /* '<S168>:1:251' */
      StateflowKalman_B.yq = x1 * StateflowKalman_P.AlzataQ_Value +
        -StateflowKalman_P.AlzataQ_Value;

      /* '<S168>:1:252' */
      StateflowKalman_B.yq_p = F * StateflowKalman_P.AlzataQ_Value /
        (StateflowKalman_P.PeriodoQ_Value / 4.0);

      /* '<S168>:1:253' */
      StateflowKalman_B.xq_pp = 0.0;

      /* '<S168>:1:254' */
      x2 = StateflowKalman_P.PeriodoQ_Value / 4.0;
      StateflowKalman_B.yq_pp = StateflowKalman_P.AlzataQ_Value / 2.0 * G1 / (x2
        * x2);
    } else if ((StateflowKalman_B.Sum2 > 3.5 * StateflowKalman_P.PeriodoQ_Value /
                4.0) && (StateflowKalman_B.Sum2 <= 4.0 *
                         StateflowKalman_P.PeriodoQ_Value / 4.0)) {
      /* '<S168>:1:256' */
      /* '<S168>:1:257' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S168>:1:260' */
        /* acc crescente positiva */
        /* '<S168>:1:261' */
        G1 = 55.555555555555543 * x5;

        /* '<S168>:1:262' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S168>:1:263' */
        x1 = 9.259259259259256 * StateflowKalman_mpower(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S168>:1:266' */
        /* acc costante positiva */
        /* '<S168>:1:267' */
        G1 = 5.5555555555555545;

        /* '<S168>:1:268' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S168>:1:269' */
        x1 = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S168>:1:272' */
        /* acc decrescente positiva */
        /* '<S168>:1:273' */
        G1 = -55.555555555555543 * x5 + 22.222222222222218;

        /* '<S168>:1:274' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S168>:1:275' */
        x1 = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                 StateflowKalman_mpower(x5)) - 2.7777777777777777 * x5) -
               0.44444444444444442) + 9.259259259259256 * StateflowKalman_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S168>:1:279' */
        /* acc costante nulla */
        /* '<S168>:1:280' */
        G1 = 0.0;

        /* '<S168>:1:281' */
        F = 1.6666666666666665;

        /* '<S168>:1:282' */
        x1 = (1.6666666666666665 * x5 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S168>:1:285' */
        /* acc decrescente negativa */
        /* '<S168>:1:286' */
        G1 = -55.555555555555543 * x5 + 33.333333333333321;

        /* '<S168>:1:287' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S168>:1:288' */
        x1 = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                  StateflowKalman_mpower(x5)) + 1.6666666666666665 * x5) -
                9.9999999999999982 * x5) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateflowKalman_mpower
          (0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S168>:1:292' */
        /* acc costante negativa */
        /* '<S168>:1:293' */
        G1 = -5.5555555555555545;

        /* '<S168>:1:294' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S168>:1:295' */
        x1 = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
               0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S168>:1:298' */
        /* acc crescente negativa */
        /* '<S168>:1:299' */
        G1 = (x5 - 1.0) * 55.555555555555543;

        /* '<S168>:1:300' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S168>:1:301' */
        x1 = (((9.259259259259256 * StateflowKalman_mpower(x5) - x5 * x5 *
                27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S168>:1:305' */
        G1 = 0.0;

        /* '<S168>:1:306' */
        F = 0.0;

        /* '<S168>:1:307' */
        x1 = 1.0;
      }

      /* '<S168>:1:310' */
      StateflowKalman_B.xq = x1 * StateflowKalman_P.AlzataQ_Value / 2.0 +
        -StateflowKalman_P.AlzataQ_Value / 2.0;

      /* '<S168>:1:311' */
      StateflowKalman_B.xq_p = F * StateflowKalman_P.AlzataQ_Value / 2.0 /
        (StateflowKalman_P.PeriodoQ_Value / 4.0);

      /* '<S168>:1:312' */
      StateflowKalman_B.yq = 0.0;

      /* '<S168>:1:313' */
      StateflowKalman_B.yq_p = 0.0;

      /* '<S168>:1:314' */
      x2 = StateflowKalman_P.PeriodoQ_Value / 4.0;
      StateflowKalman_B.xq_pp = StateflowKalman_P.AlzataQ_Value / 2.0 * G1 / (x2
        * x2);

      /* '<S168>:1:315' */
      StateflowKalman_B.yq_pp = 0.0;
    } else {
      /* '<S168>:1:317' */
      StateflowKalman_B.xq = 0.0;

      /* '<S168>:1:318' */
      StateflowKalman_B.yq = 0.0;

      /* '<S168>:1:319' */
      StateflowKalman_B.xq_p = 0.0;

      /* '<S168>:1:320' */
      StateflowKalman_B.yq_p = 0.0;

      /* '<S168>:1:321' */
      StateflowKalman_B.xq_pp = 0.0;

      /* '<S168>:1:322' */
      StateflowKalman_B.yq_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/Quadrato' */

    /* MATLAB Function: '<S58>/Cerchio' incorporates:
     *  Constant: '<S58>/Alzata C'
     *  Constant: '<S58>/Periodo C'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchio': '<S167>:1' */
    /* '<S167>:1:3' */
    x4 = StateflowKalman_B.Sum2 / StateflowKalman_P.PeriodoC_Value;

    /* '<S167>:1:4' */
    if ((x4 >= 0.0) && (x4 < 0.1)) {
      /* acc crescente positiva */
      F = x4 * x4 * 27.777777777777771;
      x1 = 9.259259259259256 * rt_powd_snf(x4, 3.0);
      G1 = 55.555555555555543 * x4;
    } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
      /* acc costante positiva */
      F = 5.5555555555555545 * x4 - 0.27777777777777773;
      x1 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
        0.0092592592592592587;
      G1 = 5.5555555555555545;
    } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
      /* acc decrescente positiva */
      F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
        2.7777777777777777;
      x1 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 * rt_powd_snf
               (x4, 3.0)) - 2.7777777777777777 * x4) - 0.44444444444444442) +
            0.59259259259259256) + 0.1111111111111111;
      G1 = -55.555555555555543 * x4 + 22.222222222222218;
    } else if ((x4 >= 0.4) && (x4 < 0.6)) {
      /* acc costante nulla */
      F = 1.6666666666666665;
      x1 = (1.6666666666666665 * x4 - 0.44444444444444442) + 0.1111111111111111;
      G1 = 0.0;
    } else if ((x4 >= 0.6) && (x4 < 0.7)) {
      /* acc decrescente negativa */
      F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
           1.6666666666666665) - 9.9999999999999982;
      x1 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 * rt_powd_snf
                (x4, 3.0)) + 1.6666666666666665 * x4) - 9.9999999999999982 * x4)
             - 0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
      G1 = -55.555555555555543 * x4 + 33.333333333333321;
    } else if ((x4 >= 0.7) && (x4 < 0.9)) {
      /* acc costante negativa */
      F = (-5.5555555555555545 * x4 + 5.5555555555555545) - 0.27777777777777773;
      x1 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
             0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      G1 = -5.5555555555555545;
    } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
      /* acc crescente negativa */
      F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
        27.777777777777771;
      x1 = (((9.259259259259256 * rt_powd_snf(x4, 3.0) - x4 * x4 *
              27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
        9.259259259259256;
      G1 = (x4 - 1.0) * 55.555555555555543;
    } else {
      /* acc costante nulla */
      F = 0.0;
      x1 = 1.0;
      G1 = 0.0;
    }

    /* '<S167>:1:6' */
    x1 = x1 * 2.0 * 3.1415926535897931;

    /* '<S167>:1:7' */
    F = F * 2.0 * 3.1415926535897931 / StateflowKalman_P.PeriodoC_Value;

    /* '<S167>:1:8' */
    x3 = G1 * 2.0 * 3.1415926535897931 / (StateflowKalman_P.PeriodoC_Value *
      StateflowKalman_P.PeriodoC_Value);

    /* '<S167>:1:9' */
    StateflowKalman_B.xc = cos(1.5707963267948966 - x1) *
      StateflowKalman_P.AlzataC_Value;

    /* '<S167>:1:10' */
    StateflowKalman_B.yc = sin(1.5707963267948966 - x1) *
      StateflowKalman_P.AlzataC_Value - StateflowKalman_P.AlzataC_Value;

    /* '<S167>:1:11' */
    StateflowKalman_B.xc_p = sin(1.5707963267948966 - x1) *
      StateflowKalman_P.AlzataC_Value * F;

    /* '<S167>:1:12' */
    StateflowKalman_B.yc_p = cos(1.5707963267948966 - x1) *
      -StateflowKalman_P.AlzataC_Value * F;

    /* '<S167>:1:13' */
    StateflowKalman_B.xc_pp = cos(1.5707963267948966 - x1) *
      -StateflowKalman_P.AlzataC_Value * (F * F) + sin(1.5707963267948966 - x1) *
      StateflowKalman_P.AlzataC_Value * x3;

    /* '<S167>:1:14' */
    StateflowKalman_B.yc_pp = sin(1.5707963267948966 - x1) *
      -StateflowKalman_P.AlzataC_Value * (F * F) - cos(1.5707963267948966 - x1) *
      StateflowKalman_P.AlzataC_Value * x3;

    /* End of MATLAB Function: '<S58>/Cerchio' */

    /* MATLAB Function: '<S58>/g' incorporates:
     *  Constant: '<S58>/Alzata C1'
     *  Constant: '<S58>/Periodo C1'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/g': '<S169>:1' */
    /* '<S169>:1:2' */
    x2 = StateflowKalman_P.PeriodoC1_Value / 32.0;

    /* '<S169>:1:3' */
    /* '<S169>:1:4' */
    /* '<S169>:1:5' */
    /* '<S169>:1:6' */
    /* '<S169>:1:7' */
    /* '<S169>:1:8' */
    /* '<S169>:1:9' */
    /* '<S169>:1:10' */
    /* '<S169>:1:11' */
    /* '<S169>:1:12' */
    /* '<S169>:1:13' */
    /* '<S169>:1:14' */
    /* '<S169>:1:15' */
    /* '<S169>:1:16' */
    /* '<S169>:1:17' */
    /* '<S169>:1:18' */
    /* '<S169>:1:19' */
    /* '<S169>:1:20' */
    /* '<S169>:1:21' */
    /* '<S169>:1:22' */
    /* '<S169>:1:23' */
    /* '<S169>:1:24' */
    /* '<S169>:1:25' */
    /* '<S169>:1:26' */
    /* '<S169>:1:27' */
    /* '<S169>:1:28' */
    /* '<S169>:1:29' */
    /* '<S169>:1:30' */
    /* '<S169>:1:31' */
    /* '<S169>:1:32' */
    /* '<S169>:1:33' */
    /* '<S169>:1:34' */
    /* '<S169>:1:35' */
    /* '<S169>:1:36' */
    /* '<S169>:1:37' */
    /* '<S169>:1:38' */
    /* '<S169>:1:39' */
    /* '<S169>:1:40' */
    /* '<S169>:1:41' */
    /* '<S169>:1:42' */
    /* '<S169>:1:43' */
    /* '<S169>:1:44' */
    /* '<S169>:1:45' */
    /* '<S169>:1:46' */
    if ((StateflowKalman_B.Sum2 > 0.0) && (StateflowKalman_B.Sum2 <= x2 / 2.0))
    {
      /* '<S169>:1:48' */
      /*  1 */
      /* '<S169>:1:49' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 0.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:50' */
      StateflowKalman_B.x = 0.0;

      /* '<S169>:1:51' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:52' */
      StateflowKalman_B.y = -x1 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:53' */
      StateflowKalman_B.y_p_o = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:54' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:55' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > x2 / 2.0) && (StateflowKalman_B.Sum2 <=
                3.0 * x2 / 2.0)) {
      /* '<S169>:1:57' */
      /*  2 */
      /* '<S169>:1:58' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - x2 / 2.0) / x2, &x1, &F,
        &x3);

      /* '<S169>:1:59' */
      StateflowKalman_B.x = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:60' */
      StateflowKalman_B.x_p_l = F * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:61' */
      StateflowKalman_B.y = -StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:62' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:63' */
      StateflowKalman_B.x_pp = x3 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:64' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 3.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 4.0 * x2 / 2.0)) {
      /* '<S169>:1:66' */
      /*  3 */
      /* '<S169>:1:67' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 3.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &x4);

      /* '<S169>:1:68' */
      StateflowKalman_B.x = 3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:69' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:70' */
      StateflowKalman_B.y = x1 * StateflowKalman_P.AlzataC1_Value +
        -StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:71' */
      StateflowKalman_B.y_p_o = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:72' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:73' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = x4 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 4.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 5.0 * x2 / 2.0)) {
      /* '<S169>:1:75' */
      /*  4 */
      /* '<S169>:1:76' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 4.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &x5);

      /* '<S169>:1:77' */
      StateflowKalman_B.x = 3.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:78' */
      StateflowKalman_B.x_p_l = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:79' */
      StateflowKalman_B.y = 0.0;

      /* '<S169>:1:80' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:81' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = -x5 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:82' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 5.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 7.0 * x2 / 2.0)) {
      /* '<S169>:1:84' */
      /*  5 */
      /* '<S169>:1:85' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 5.0 * x2 / 2.0) / x2,
        &x1, &F, &x5);

      /* '<S169>:1:86' */
      StateflowKalman_B.x = 2.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:87' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:88' */
      StateflowKalman_B.y = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:89' */
      StateflowKalman_B.y_p_o = -F * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:90' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:91' */
      StateflowKalman_B.y_pp = -x5 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 7.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 9.0 * x2 / 2.0)) {
      /* '<S169>:1:93' */
      /*  6 */
      /* '<S169>:1:94' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 7.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:95' */
      StateflowKalman_B.x = G1 * 3.0 * StateflowKalman_P.AlzataC1_Value + 2.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:96' */
      StateflowKalman_B.x_p_l = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:97' */
      StateflowKalman_B.y = -3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:98' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:99' */
      StateflowKalman_B.x_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:100' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 9.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 11.0 * x2 / 2.0)) {
      /* '<S169>:1:102' */
      /*  7 */
      /* '<S169>:1:103' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 9.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:104' */
      StateflowKalman_B.x = 5.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:105' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:106' */
      StateflowKalman_B.y = G1 * 3.0 * StateflowKalman_P.AlzataC1_Value + -3.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:107' */
      StateflowKalman_B.y_p_o = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:108' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:109' */
      StateflowKalman_B.y_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 11.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 12.0 * x2 / 2.0)) {
      /* '<S169>:1:111' */
      /*  8 */
      /* '<S169>:1:112' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 11.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:113' */
      StateflowKalman_B.x = 5.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:114' */
      StateflowKalman_B.x_p_l = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:115' */
      StateflowKalman_B.y = 0.0;

      /* '<S169>:1:116' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:117' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:118' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 12.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 13.0 * x2 / 2.0)) {
      /* '<S169>:1:120' */
      /*  9 */
      /* '<S169>:1:121' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 12.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:122' */
      StateflowKalman_B.x = 4.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:123' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:124' */
      StateflowKalman_B.y = -x1 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:125' */
      StateflowKalman_B.y_p_o = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:126' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:127' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 13.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 15.0 * x2 / 2.0)) {
      /* '<S169>:1:129' */
      /*  10 */
      /* '<S169>:1:130' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 13.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:131' */
      StateflowKalman_B.x = G1 * 3.0 * StateflowKalman_P.AlzataC1_Value + 4.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:132' */
      StateflowKalman_B.x_p_l = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:133' */
      StateflowKalman_B.y = -StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:134' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:135' */
      StateflowKalman_B.x_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:136' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 15.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 16.0 * x2 / 2.0)) {
      /* '<S169>:1:138' */
      /*  11 */
      /* '<S169>:1:139' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 15.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:140' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:141' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:142' */
      StateflowKalman_B.y = x1 * StateflowKalman_P.AlzataC1_Value +
        -StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:143' */
      StateflowKalman_B.y_p_o = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:144' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:145' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 16.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 17.0 * x2 / 2.0)) {
      /* '<S169>:1:147' */
      /*  12 */
      /* '<S169>:1:148' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 16.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:149' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:150' */
      StateflowKalman_B.x_p_l = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:151' */
      StateflowKalman_B.y = 0.0;

      /* '<S169>:1:152' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:153' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:154' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 17.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 19.0 * x2 / 2.0)) {
      /* '<S169>:1:156' */
      /*  13 */
      /* '<S169>:1:157' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 17.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:158' */
      StateflowKalman_B.x = 6.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:159' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:160' */
      StateflowKalman_B.y = -G1 * 3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:161' */
      StateflowKalman_B.y_p_o = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:162' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:163' */
      StateflowKalman_B.y_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 19.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 20.0 * x2 / 2.0)) {
      /* '<S169>:1:165' */
      /*  14 */
      /* '<S169>:1:166' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 19.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:167' */
      StateflowKalman_B.x = 6.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:168' */
      StateflowKalman_B.x_p_l = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:169' */
      StateflowKalman_B.y = -3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:170' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:171' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:172' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 20.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 21.0 * x2 / 2.0)) {
      /* '<S169>:1:174' */
      /*  15 */
      /* '<S169>:1:175' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 20.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:176' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:177' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:178' */
      StateflowKalman_B.y = -3.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:179' */
      StateflowKalman_B.y_p_o = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:180' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:181' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 21.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 23.0 * x2 / 2.0)) {
      /* '<S169>:1:183' */
      /*  16 */
      /* '<S169>:1:184' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 21.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:185' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value - G1 * 3.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:186' */
      StateflowKalman_B.x_p_l = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:187' */
      StateflowKalman_B.y = -2.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:188' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:189' */
      StateflowKalman_B.x_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:190' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 23.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 25.0 * x2 / 2.0)) {
      /* '<S169>:1:192' */
      /*  17 */
      /* '<S169>:1:193' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 23.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:194' */
      StateflowKalman_B.x = 4.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:195' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:196' */
      StateflowKalman_B.y = -2.0 * StateflowKalman_P.AlzataC1_Value - 3.0 * G1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:197' */
      StateflowKalman_B.y_p_o = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:198' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:199' */
      StateflowKalman_B.y_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 25.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 27.0 * x2 / 2.0)) {
      /* '<S169>:1:201' */
      /*  18 */
      /* '<S169>:1:202' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 25.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:203' */
      StateflowKalman_B.x = 3.0 * G1 * StateflowKalman_P.AlzataC1_Value + 4.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:204' */
      StateflowKalman_B.x_p_l = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:205' */
      StateflowKalman_B.y = -5.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:206' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:207' */
      StateflowKalman_B.x_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:208' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 27.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 28.0 * x2 / 2.0)) {
      /* '<S169>:1:210' */
      /*  19 */
      /* '<S169>:1:211' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 27.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:212' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:213' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:214' */
      StateflowKalman_B.y = -5.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:215' */
      StateflowKalman_B.y_p_o = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:216' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:217' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 28.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 29.0 * x2 / 2.0)) {
      /* '<S169>:1:219' */
      /*  20 */
      /* '<S169>:1:220' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 28.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:221' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:222' */
      StateflowKalman_B.x_p_l = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:223' */
      StateflowKalman_B.y = -4.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:224' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:225' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:226' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 29.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 31.0 * x2 / 2.0)) {
      /* '<S169>:1:228' */
      /*  21 */
      /* '<S169>:1:229' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 29.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:230' */
      StateflowKalman_B.x = 6.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:231' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:232' */
      StateflowKalman_B.y = -4.0 * StateflowKalman_P.AlzataC1_Value - 3.0 * G1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:233' */
      StateflowKalman_B.y_p_o = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:234' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:235' */
      StateflowKalman_B.y_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 31.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 32.0 * x2 / 2.0)) {
      /* '<S169>:1:237' */
      /*  22 */
      /* '<S169>:1:238' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 31.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:239' */
      StateflowKalman_B.x = 6.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:240' */
      StateflowKalman_B.x_p_l = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:241' */
      StateflowKalman_B.y = -7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:242' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:243' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:244' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 32.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 33.0 * x2 / 2.0)) {
      /* '<S169>:1:246' */
      /*  23 */
      /* '<S169>:1:247' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 32.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:248' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:249' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:250' */
      StateflowKalman_B.y = -7.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:251' */
      StateflowKalman_B.y_p_o = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:252' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:253' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 33.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 35.0 * x2 / 2.0)) {
      /* '<S169>:1:255' */
      /*  24 */
      /* '<S169>:1:256' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 33.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:257' */
      StateflowKalman_B.x = 7.0 * StateflowKalman_P.AlzataC1_Value - 3.0 * G1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:258' */
      StateflowKalman_B.x_p_l = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:259' */
      StateflowKalman_B.y = -6.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:260' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:261' */
      StateflowKalman_B.x_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:262' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 35.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 36.0 * x2 / 2.0)) {
      /* '<S169>:1:264' */
      /*  25 */
      /* '<S169>:1:265' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 35.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:266' */
      StateflowKalman_B.x = 4.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:267' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:268' */
      StateflowKalman_B.y = -6.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:269' */
      StateflowKalman_B.y_p_o = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:270' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:271' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 36.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 37.0 * x2 / 2.0)) {
      /* '<S169>:1:273' */
      /*  26 */
      /* '<S169>:1:274' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 36.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:275' */
      StateflowKalman_B.x = 4.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:276' */
      StateflowKalman_B.x_p_l = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:277' */
      StateflowKalman_B.y = -7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:278' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:279' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:280' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 37.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 39.0 * x2 / 2.0)) {
      /* '<S169>:1:282' */
      /*  27 */
      /* '<S169>:1:283' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 37.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:284' */
      StateflowKalman_B.x = 5.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:285' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:286' */
      StateflowKalman_B.y = 3.0 * G1 * StateflowKalman_P.AlzataC1_Value + -7.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:287' */
      StateflowKalman_B.y_p_o = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:288' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:289' */
      StateflowKalman_B.y_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 39.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 41.0 * x2 / 2.0)) {
      /* '<S169>:1:291' */
      /*  28 */
      /* '<S169>:1:292' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 39.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:293' */
      StateflowKalman_B.x = 5.0 * StateflowKalman_P.AlzataC1_Value - 3.0 * G1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:294' */
      StateflowKalman_B.x_p_l = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:295' */
      StateflowKalman_B.y = -4.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:296' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:297' */
      StateflowKalman_B.x_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:298' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 41.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 43.0 * x2 / 2.0)) {
      /* '<S169>:1:300' */
      /*  29 */
      /* '<S169>:1:301' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 41.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:302' */
      StateflowKalman_B.x = 2.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:303' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:304' */
      StateflowKalman_B.y = -4.0 * StateflowKalman_P.AlzataC1_Value - G1 * 3.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:305' */
      StateflowKalman_B.y_p_o = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:306' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:307' */
      StateflowKalman_B.y_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 43.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 44.0 * x2 / 2.0)) {
      /* '<S169>:1:309' */
      /*  30 */
      /* '<S169>:1:310' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 43.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:311' */
      StateflowKalman_B.x = 2.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:312' */
      StateflowKalman_B.x_p_l = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:313' */
      StateflowKalman_B.y = -7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:314' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:315' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:316' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 44.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 45.0 * x2 / 2.0)) {
      /* '<S169>:1:318' */
      /*  31 */
      /* '<S169>:1:319' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 44.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:320' */
      StateflowKalman_B.x = 3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:321' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:322' */
      StateflowKalman_B.y = -7.0 * StateflowKalman_P.AlzataC1_Value + x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:323' */
      StateflowKalman_B.y_p_o = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:324' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:325' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 45.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 47.0 * x2 / 2.0)) {
      /* '<S169>:1:327' */
      /*  32 */
      /* '<S169>:1:328' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 45.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:329' */
      StateflowKalman_B.x = 3.0 * StateflowKalman_P.AlzataC1_Value - 3.0 * G1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:330' */
      StateflowKalman_B.x_p_l = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:331' */
      StateflowKalman_B.y = -6.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:332' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:333' */
      StateflowKalman_B.x_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:334' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 47.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 48.0 * x2 / 2.0)) {
      /* '<S169>:1:336' */
      /*  33 */
      /* '<S169>:1:337' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 47.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:338' */
      StateflowKalman_B.x = 0.0;

      /* '<S169>:1:339' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:340' */
      StateflowKalman_B.y = -6.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:341' */
      StateflowKalman_B.y_p_o = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:342' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:343' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 48.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 49.0 * x2 / 2.0)) {
      /* '<S169>:1:345' */
      /*  34 */
      /* '<S169>:1:346' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 48.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:347' */
      StateflowKalman_B.x = x1 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:348' */
      StateflowKalman_B.x_p_l = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:349' */
      StateflowKalman_B.y = -7.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:350' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:351' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:352' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 49.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 51.0 * x2 / 2.0)) {
      /* '<S169>:1:354' */
      /*  35 */
      /* '<S169>:1:355' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 49.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:356' */
      StateflowKalman_B.x = StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:357' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:358' */
      StateflowKalman_B.y = 3.0 * G1 * StateflowKalman_P.AlzataC1_Value + -7.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:359' */
      StateflowKalman_B.y_p_o = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:360' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:361' */
      StateflowKalman_B.y_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 51.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 52.0 * x2 / 2.0)) {
      /* '<S169>:1:363' */
      /*  36 */
      /* '<S169>:1:364' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 51.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:365' */
      StateflowKalman_B.x = StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:366' */
      StateflowKalman_B.x_p_l = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:367' */
      StateflowKalman_B.y = -4.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:368' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:369' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:370' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 52.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 53.0 * x2 / 2.0)) {
      /* '<S169>:1:372' */
      /*  37 */
      /* '<S169>:1:373' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 52.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:374' */
      StateflowKalman_B.x = 0.0;

      /* '<S169>:1:375' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:376' */
      StateflowKalman_B.y = -4.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:377' */
      StateflowKalman_B.y_p_o = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:378' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:379' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 53.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 55.0 * x2 / 2.0)) {
      /* '<S169>:1:381' */
      /*  38 */
      /* '<S169>:1:382' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 53.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:383' */
      StateflowKalman_B.x = 3.0 * G1 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:384' */
      StateflowKalman_B.x_p_l = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:385' */
      StateflowKalman_B.y = -5.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:386' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:387' */
      StateflowKalman_B.x_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:388' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 55.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 57.0 * x2 / 2.0)) {
      /* '<S169>:1:390' */
      /*  39 */
      /* '<S169>:1:391' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 55.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:392' */
      StateflowKalman_B.x = 3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:393' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:394' */
      StateflowKalman_B.y = G1 * 3.0 * StateflowKalman_P.AlzataC1_Value + -5.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:395' */
      StateflowKalman_B.y_p_o = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:396' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:397' */
      StateflowKalman_B.y_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 57.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 59.0 * x2 / 2.0)) {
      /* '<S169>:1:399' */
      /*  40 */
      /* '<S169>:1:400' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 57.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:401' */
      StateflowKalman_B.x = 3.0 * StateflowKalman_P.AlzataC1_Value - G1 * 3.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:402' */
      StateflowKalman_B.x_p_l = -x1 * 3.0 * StateflowKalman_P.AlzataC1_Value /
        x2;

      /* '<S169>:1:403' */
      StateflowKalman_B.y = -2.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:404' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:405' */
      StateflowKalman_B.x_pp = -F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:406' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 59.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 60.0 * x2 / 2.0)) {
      /* '<S169>:1:408' */
      /*  41 */
      /* '<S169>:1:409' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 59.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:410' */
      StateflowKalman_B.x = 0.0;

      /* '<S169>:1:411' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:412' */
      StateflowKalman_B.y = -2.0 * StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:413' */
      StateflowKalman_B.y_p_o = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:414' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:415' */
      x2 /= 2.0;
      StateflowKalman_B.y_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 60.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 61.0 * x2 / 2.0)) {
      /* '<S169>:1:417' */
      /*  42 */
      /* '<S169>:1:418' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 60.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:419' */
      StateflowKalman_B.x = x1 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:420' */
      StateflowKalman_B.x_p_l = F * StateflowKalman_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S169>:1:421' */
      StateflowKalman_B.y = -3.0 * StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:422' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:423' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:424' */
      StateflowKalman_B.y_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 > 61.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 63.0 * x2 / 2.0)) {
      /* '<S169>:1:426' */
      /*  43 */
      /* '<S169>:1:427' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 61.0 * x2 / 2.0) / x2,
        &G1, &x1, &F);

      /* '<S169>:1:428' */
      StateflowKalman_B.x = StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:429' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:430' */
      StateflowKalman_B.y = 3.0 * G1 * StateflowKalman_P.AlzataC1_Value + -3.0 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:431' */
      StateflowKalman_B.y_p_o = x1 * 3.0 * StateflowKalman_P.AlzataC1_Value / x2;

      /* '<S169>:1:432' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:433' */
      StateflowKalman_B.y_pp = F * StateflowKalman_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateflowKalman_B.Sum2 > 63.0 * x2 / 2.0) &&
               (StateflowKalman_B.Sum2 <= 64.0 * x2 / 2.0)) {
      /* '<S169>:1:435' */
      /*  44 */
      /* '<S169>:1:436' */
      StateflowKalman_ldm7t_k((StateflowKalman_B.Sum2 - 63.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S169>:1:437' */
      StateflowKalman_B.x = StateflowKalman_P.AlzataC1_Value - x1 *
        StateflowKalman_P.AlzataC1_Value;

      /* '<S169>:1:438' */
      StateflowKalman_B.x_p_l = -F * StateflowKalman_P.AlzataC1_Value / (x2 /
        2.0);

      /* '<S169>:1:439' */
      StateflowKalman_B.y = 0.0;

      /* '<S169>:1:440' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:441' */
      x2 /= 2.0;
      StateflowKalman_B.x_pp = -G1 * StateflowKalman_P.AlzataC1_Value / (x2 * x2);

      /* '<S169>:1:442' */
      StateflowKalman_B.y_pp = 0.0;
    } else {
      /* '<S169>:1:445' */
      StateflowKalman_B.x = 0.0;

      /* '<S169>:1:446' */
      StateflowKalman_B.x_p_l = 0.0;

      /* '<S169>:1:447' */
      StateflowKalman_B.y = 0.0;

      /* '<S169>:1:448' */
      StateflowKalman_B.y_p_o = 0.0;

      /* '<S169>:1:449' */
      StateflowKalman_B.x_pp = 0.0;

      /* '<S169>:1:450' */
      StateflowKalman_B.y_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/g' */

    /* MATLAB Function: '<S58>/Cerchi Tangenti' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchi Tangenti': '<S166>:1' */
    /* '<S166>:1:4' */
    x2 = 100.0 * StateflowKalman_P.Constant3_Value / 2.0;

    /* '<S166>:1:5' */
    /* '<S166>:1:6' */
    G1 = (StateflowKalman_P.Constant3_Value - 0.025) * 100.0 / 2.0;

    /* '<S166>:1:7' */
    /* '<S166>:1:8' */
    x3 = ((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) * 100.0 / 2.0;

    /* '<S166>:1:9' */
    /* '<S166>:1:10' */
    x4 = (((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) * 100.0
      / 2.0;

    /* '<S166>:1:11' */
    /* '<S166>:1:12' */
    T5 = ((((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) -
          0.025) * 100.0 / 2.0;

    /* '<S166>:1:14' */
    /* '<S166>:1:15' */
    /* '<S166>:1:16' */
    /* '<S166>:1:17' */
    /* '<S166>:1:18' */
    if ((StateflowKalman_B.Sum2 > 0.0) && (StateflowKalman_B.Sum2 <= x2)) {
      /* '<S166>:1:20' */
      /*  1 */
      /* '<S166>:1:21' */
      StateflowKalman_ldm7t(StateflowKalman_B.Sum2 / x2, &x1, &F, &G1);

      /* '<S166>:1:22' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S166>:1:23' */
      F = F * 2.0 * 3.1415926535897931 / x2;

      /* '<S166>:1:24' */
      x3 = G1 * 2.0 * 3.1415926535897931 / (x2 * x2);

      /* '<S166>:1:25' */
      StateflowKalman_B.xct = StateflowKalman_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x1);

      /* '<S166>:1:26' */
      StateflowKalman_B.yct = StateflowKalman_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x1) - StateflowKalman_P.Constant3_Value / 2.0;

      /* '<S166>:1:27' */
      StateflowKalman_B.xct_p = StateflowKalman_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x1) * F;

      /* '<S166>:1:28' */
      StateflowKalman_B.yct_p = -StateflowKalman_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x1) * F;

      /* '<S166>:1:29' */
      StateflowKalman_B.xct_pp = -StateflowKalman_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x1) * (F * F) + StateflowKalman_P.Constant3_Value /
        2.0 * sin(1.5707963267948966 - x1) * x3;

      /* '<S166>:1:30' */
      StateflowKalman_B.yct_pp = -StateflowKalman_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x1) * (F * F) - StateflowKalman_P.Constant3_Value /
        2.0 * cos(1.5707963267948966 - x1) * x3;
    } else if ((StateflowKalman_B.Sum2 > x2) && (StateflowKalman_B.Sum2 <= x2 +
                G1)) {
      /* '<S166>:1:32' */
      /*  2 */
      /* '<S166>:1:33' */
      StateflowKalman_ldm7t((StateflowKalman_B.Sum2 - x2) / G1, &x1, &F, &x3);

      /* '<S166>:1:34' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S166>:1:35' */
      F = F * 2.0 * 3.1415926535897931 / G1;

      /* '<S166>:1:36' */
      x3 = x3 * 2.0 * 3.1415926535897931 / (G1 * G1);

      /* '<S166>:1:37' */
      StateflowKalman_B.xct = (StateflowKalman_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - x1);

      /* '<S166>:1:38' */
      StateflowKalman_B.yct = (StateflowKalman_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x1) - (StateflowKalman_P.Constant3_Value -
        0.025) / 2.0;

      /* '<S166>:1:39' */
      StateflowKalman_B.xct_p = (StateflowKalman_P.Constant3_Value - 0.025) /
        2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S166>:1:40' */
      StateflowKalman_B.yct_p = -(StateflowKalman_P.Constant3_Value - 0.025) /
        2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S166>:1:41' */
      StateflowKalman_B.xct_pp = -(StateflowKalman_P.Constant3_Value - 0.025) /
        2.0 * cos(1.5707963267948966 - x1) * (F * F) +
        (StateflowKalman_P.Constant3_Value - 0.025) / 2.0 * sin
        (1.5707963267948966 - x1) * x3;

      /* '<S166>:1:42' */
      StateflowKalman_B.yct_pp = -(StateflowKalman_P.Constant3_Value - 0.025) /
        2.0 * sin(1.5707963267948966 - x1) * (F * F) -
        (StateflowKalman_P.Constant3_Value - 0.025) / 2.0 * cos
        (1.5707963267948966 - x1) * x3;
    } else if ((StateflowKalman_B.Sum2 > x2 + G1) && (StateflowKalman_B.Sum2 <=
                (x2 + G1) + x3)) {
      /* '<S166>:1:44' */
      /*  3 */
      /* '<S166>:1:45' */
      StateflowKalman_ldm7t(((StateflowKalman_B.Sum2 - x2) - G1) / x3, &x1, &F,
                            &x4);

      /* '<S166>:1:46' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S166>:1:47' */
      F = F * 2.0 * 3.1415926535897931 / x3;

      /* '<S166>:1:48' */
      x3 = x4 * 2.0 * 3.1415926535897931 / (x3 * x3);

      /* '<S166>:1:49' */
      StateflowKalman_B.xct = ((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - x1);

      /* '<S166>:1:50' */
      StateflowKalman_B.yct = ((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - x1) -
        ((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) / 2.0;

      /* '<S166>:1:51' */
      StateflowKalman_B.xct_p = ((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S166>:1:52' */
      StateflowKalman_B.yct_p = -((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S166>:1:53' */
      StateflowKalman_B.xct_pp = -((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - x1) * (F * F) +
        ((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - x1) * x3;

      /* '<S166>:1:54' */
      StateflowKalman_B.yct_pp = -((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - x1) * (F * F) -
        ((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - x1) * x3;
    } else if ((StateflowKalman_B.Sum2 > (x2 + G1) + x3) &&
               (StateflowKalman_B.Sum2 <= ((x2 + G1) + x3) + x4)) {
      /* '<S166>:1:56' */
      /*  4 */
      /* '<S166>:1:57' */
      StateflowKalman_ldm7t((((StateflowKalman_B.Sum2 - x2) - G1) - x3) / x4,
                            &x1, &F, &x5);

      /* '<S166>:1:58' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S166>:1:59' */
      F = F * 2.0 * 3.1415926535897931 / x4;

      /* '<S166>:1:60' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (x4 * x4);

      /* '<S166>:1:61' */
      StateflowKalman_B.xct = (((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1);

      /* '<S166>:1:62' */
      StateflowKalman_B.yct = (((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) -
        (((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0;

      /* '<S166>:1:63' */
      StateflowKalman_B.xct_p = (((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S166>:1:64' */
      StateflowKalman_B.yct_p = -(((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S166>:1:65' */
      StateflowKalman_B.xct_pp = -(((StateflowKalman_P.Constant3_Value - 0.025)
        - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * (F * F) +
        (((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 *
        sin(1.5707963267948966 - x1) * x3;

      /* '<S166>:1:66' */
      StateflowKalman_B.yct_pp = -(((StateflowKalman_P.Constant3_Value - 0.025)
        - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * (F * F) -
        (((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 *
        cos(1.5707963267948966 - x1) * x3;
    } else if ((StateflowKalman_B.Sum2 > ((x2 + G1) + x3) + x4) &&
               (StateflowKalman_B.Sum2 <= (((x2 + G1) + x3) + x4) + T5)) {
      /* '<S166>:1:68' */
      /*  5 */
      /* '<S166>:1:69' */
      StateflowKalman_ldm7t(((((StateflowKalman_B.Sum2 - x2) - G1) - x3) - x4) /
                            T5, &x1, &F, &x5);

      /* '<S166>:1:70' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S166>:1:71' */
      F = F * 2.0 * 3.1415926535897931 / T5;

      /* '<S166>:1:72' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (T5 * T5);

      /* '<S166>:1:73' */
      StateflowKalman_B.xct = ((((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1);

      /* '<S166>:1:74' */
      StateflowKalman_B.yct = ((((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) -
        ((((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0;

      /* '<S166>:1:75' */
      StateflowKalman_B.xct_p = ((((StateflowKalman_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S166>:1:76' */
      StateflowKalman_B.yct_p = -((((StateflowKalman_P.Constant3_Value - 0.025)
        - 0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S166>:1:77' */
      StateflowKalman_B.xct_pp = -((((StateflowKalman_P.Constant3_Value - 0.025)
        - 0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * (F * F)
        + ((((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) -
           0.025) / 2.0 * sin(1.5707963267948966 - x1) * x3;

      /* '<S166>:1:78' */
      StateflowKalman_B.yct_pp = -((((StateflowKalman_P.Constant3_Value - 0.025)
        - 0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * (F * F)
        - ((((StateflowKalman_P.Constant3_Value - 0.025) - 0.025) - 0.025) -
           0.025) / 2.0 * cos(1.5707963267948966 - x1) * x3;
    } else {
      /* '<S166>:1:80' */
      StateflowKalman_B.xct = 0.0;

      /* '<S166>:1:81' */
      StateflowKalman_B.xct_p = 0.0;

      /* '<S166>:1:82' */
      StateflowKalman_B.yct = 0.0;

      /* '<S166>:1:83' */
      StateflowKalman_B.yct_p = 0.0;

      /* '<S166>:1:84' */
      StateflowKalman_B.xct_pp = 0.0;

      /* '<S166>:1:85' */
      StateflowKalman_B.yct_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/Cerchi Tangenti' */

    /* MATLAB Function: '<S58>/spirale' incorporates:
     *  Constant: '<S58>/N giri'
     *  Constant: '<S58>/Periodo'
     *  Constant: '<S58>/Rmax'
     *  Constant: '<S58>/Rmin'
     *  Constant: '<S58>/Tempo spost. iniziale'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/spirale': '<S170>:1' */
    /* '<S170>:1:3' */
    /* '<S170>:1:4' */
    if ((StateflowKalman_B.Sum2 >= 0.0) && (StateflowKalman_B.Sum2 <=
         StateflowKalman_P.Tempospostiniziale_Value)) {
      /* '<S170>:1:5' */
      /* '<S170>:1:6' */
      StateflowKalman_ldm7t_m(StateflowKalman_B.Sum2 /
        StateflowKalman_P.Tempospostiniziale_Value, &x1, &F, &G1);

      /* '<S170>:1:7' */
      StateflowKalman_B.xs = x1 * StateflowKalman_P.Rmin_Value;

      /* '<S170>:1:8' */
      StateflowKalman_B.xs_p = F * StateflowKalman_P.Rmin_Value /
        StateflowKalman_P.Tempospostiniziale_Value;

      /* '<S170>:1:9' */
      StateflowKalman_B.xs_pp = G1 * StateflowKalman_P.Rmin_Value /
        (StateflowKalman_P.Tempospostiniziale_Value *
         StateflowKalman_P.Tempospostiniziale_Value);

      /* '<S170>:1:10' */
      StateflowKalman_B.ys = 0.0;

      /* '<S170>:1:11' */
      StateflowKalman_B.ys_p = 0.0;

      /* '<S170>:1:12' */
      StateflowKalman_B.ys_pp = 0.0;
    } else if ((StateflowKalman_B.Sum2 >
                StateflowKalman_P.Tempospostiniziale_Value) &&
               (StateflowKalman_B.Sum2 <=
                StateflowKalman_P.Tempospostiniziale_Value +
                StateflowKalman_P.Periodo_Value)) {
      /* '<S170>:1:13' */
      /* '<S170>:1:14' */
      StateflowKalman_ldm7t_m((StateflowKalman_B.Sum2 -
        StateflowKalman_P.Tempospostiniziale_Value) /
        StateflowKalman_P.Periodo_Value, &x1, &F, &x3);

      /* '<S170>:1:15' */
      x2 = x1 * StateflowKalman_P.Rmax_Value + StateflowKalman_P.Rmin_Value;

      /* '<S170>:1:16' */
      G1 = F * StateflowKalman_P.Rmax_Value / StateflowKalman_P.Periodo_Value;

      /* '<S170>:1:17' */
      x4 = x3 * StateflowKalman_P.Rmax_Value / (StateflowKalman_P.Periodo_Value *
        StateflowKalman_P.Periodo_Value);

      /* '<S170>:1:18' */
      x1 = x1 * StateflowKalman_P.Ngiri_Value * 2.0 * 3.1415926535897931;

      /* '<S170>:1:19' */
      F = F * StateflowKalman_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        StateflowKalman_P.Periodo_Value;

      /* '<S170>:1:20' */
      x3 = x3 * StateflowKalman_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        (StateflowKalman_P.Periodo_Value * StateflowKalman_P.Periodo_Value);

      /* '<S170>:1:21' */
      StateflowKalman_B.xs = x2 * cos(x1);

      /* '<S170>:1:22' */
      StateflowKalman_B.ys = x2 * sin(x1);

      /* '<S170>:1:23' */
      StateflowKalman_B.xs_p = -x2 * sin(x1) * F + G1 * cos(x1);

      /* '<S170>:1:24' */
      StateflowKalman_B.ys_p = x2 * cos(x1) * F + G1 * sin(x1);

      /* '<S170>:1:25' */
      StateflowKalman_B.xs_pp = ((-G1 * sin(x1) * F - (F * F * cos(x1) + sin(x1)
        * x3) * x2) + x4 * cos(x1)) - G1 * sin(x1) * F;

      /* '<S170>:1:26' */
      StateflowKalman_B.ys_pp = (((F * F * -sin(x1) + cos(x1) * x3) * x2 + G1 *
        cos(x1) * F) + x4 * sin(x1)) + G1 * cos(x1) * F;
    } else {
      /* '<S170>:1:28' */
      StateflowKalman_B.xs = cos(StateflowKalman_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateflowKalman_P.Rmin_Value +
        StateflowKalman_P.Rmax_Value);

      /* '<S170>:1:29' */
      StateflowKalman_B.xs_p = 0.0;

      /* '<S170>:1:30' */
      StateflowKalman_B.ys = sin(StateflowKalman_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateflowKalman_P.Rmin_Value +
        StateflowKalman_P.Rmax_Value);

      /* '<S170>:1:31' */
      StateflowKalman_B.ys_p = 0.0;

      /* '<S170>:1:32' */
      StateflowKalman_B.xs_pp = 0.0;

      /* '<S170>:1:33' */
      StateflowKalman_B.ys_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/spirale' */

    /* MultiPortSwitch: '<S58>/Multiport Switch' incorporates:
     *  Constant: '<S12>/selettore'
     *  Constant: '<S58>/N giri1'
     *  Constant: '<S58>/N giri2'
     *  Constant: '<S58>/Rmax1'
     *  Constant: '<S58>/Rmin1'
     *  Constant: '<S58>/Rmin2'
     *  Constant: '<S58>/Rmin3'
     */
    switch ((int32_T)StateflowKalman_P.selettore_Value) {
     case 1:
      StateflowKalman_B.MultiportSwitch[0] = StateflowKalman_B.xq;
      StateflowKalman_B.MultiportSwitch[1] = StateflowKalman_B.yq;
      StateflowKalman_B.MultiportSwitch[2] = StateflowKalman_B.xq_p;
      StateflowKalman_B.MultiportSwitch[3] = StateflowKalman_B.yq_p;
      StateflowKalman_B.MultiportSwitch[4] = StateflowKalman_B.xq_pp;
      StateflowKalman_B.MultiportSwitch[5] = StateflowKalman_B.yq_pp;
      break;

     case 2:
      StateflowKalman_B.MultiportSwitch[0] = StateflowKalman_B.xc;
      StateflowKalman_B.MultiportSwitch[1] = StateflowKalman_B.yc;
      StateflowKalman_B.MultiportSwitch[2] = StateflowKalman_B.xc_p;
      StateflowKalman_B.MultiportSwitch[3] = StateflowKalman_B.yc_p;
      StateflowKalman_B.MultiportSwitch[4] = StateflowKalman_B.xc_pp;
      StateflowKalman_B.MultiportSwitch[5] = StateflowKalman_B.yc_pp;
      break;

     case 3:
      StateflowKalman_B.MultiportSwitch[0] = StateflowKalman_B.x;
      StateflowKalman_B.MultiportSwitch[1] = StateflowKalman_B.y;
      StateflowKalman_B.MultiportSwitch[2] = StateflowKalman_B.x_p_l;
      StateflowKalman_B.MultiportSwitch[3] = StateflowKalman_B.y_p_o;
      StateflowKalman_B.MultiportSwitch[4] = StateflowKalman_B.x_pp;
      StateflowKalman_B.MultiportSwitch[5] = StateflowKalman_B.y_pp;
      break;

     case 4:
      StateflowKalman_B.MultiportSwitch[0] = StateflowKalman_B.xct;
      StateflowKalman_B.MultiportSwitch[1] = StateflowKalman_B.yct;
      StateflowKalman_B.MultiportSwitch[2] = StateflowKalman_B.xct_p;
      StateflowKalman_B.MultiportSwitch[3] = StateflowKalman_B.yct_p;
      StateflowKalman_B.MultiportSwitch[4] = StateflowKalman_B.xct_pp;
      StateflowKalman_B.MultiportSwitch[5] = StateflowKalman_B.yct_pp;
      break;

     case 5:
      StateflowKalman_B.MultiportSwitch[0] = StateflowKalman_B.xs;
      StateflowKalman_B.MultiportSwitch[1] = StateflowKalman_B.ys;
      StateflowKalman_B.MultiportSwitch[2] = StateflowKalman_B.xs_p;
      StateflowKalman_B.MultiportSwitch[3] = StateflowKalman_B.ys_p;
      StateflowKalman_B.MultiportSwitch[4] = StateflowKalman_B.xs_pp;
      StateflowKalman_B.MultiportSwitch[5] = StateflowKalman_B.ys_pp;
      break;

     default:
      StateflowKalman_B.MultiportSwitch[0] = StateflowKalman_P.Rmax1_Value;
      StateflowKalman_B.MultiportSwitch[1] = StateflowKalman_P.Ngiri1_Value;
      StateflowKalman_B.MultiportSwitch[2] = StateflowKalman_P.Rmin1_Value;
      StateflowKalman_B.MultiportSwitch[3] = StateflowKalman_P.Ngiri2_Value;
      StateflowKalman_B.MultiportSwitch[4] = StateflowKalman_P.Rmin2_Value;
      StateflowKalman_B.MultiportSwitch[5] = StateflowKalman_P.Rmin3_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S58>/Multiport Switch' */

    /* Sum: '<S12>/Sum' */
    StateflowKalman_B.Xmov = StateflowKalman_B.x0 +
      StateflowKalman_B.MultiportSwitch[0];

    /* Sum: '<S12>/Sum1' */
    StateflowKalman_B.Ymov = StateflowKalman_B.MultiportSwitch[1] +
      StateflowKalman_B.y0;

    /* MATLAB Function: '<S12>/Cinematica Inversa' */
    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa': '<S48>:1' */
    /* '<S48>:1:3' */
    /* '<S48>:1:4' */
    /* '<S48>:1:6' */
    x1 = 2.0 * StateflowKalman_B.Xmov * 0.25 + 0.045;

    /* '<S48>:1:7' */
    F = 2.0 * StateflowKalman_B.Ymov * 0.25;

    /* '<S48>:1:8' */
    G1 = ((StateflowKalman_B.Xmov * StateflowKalman_B.Xmov + 0.0081) +
          StateflowKalman_B.Ymov * StateflowKalman_B.Ymov) + 2.0 *
      StateflowKalman_B.Xmov * 0.09;

    /* '<S48>:1:9' */
    x2 = 2.0 * StateflowKalman_B.Xmov * 0.25 + -0.045;

    /* '<S48>:1:10' */
    x3 = 2.0 * StateflowKalman_B.Ymov * 0.25;

    /* '<S48>:1:11' */
    x4 = ((StateflowKalman_B.Xmov * StateflowKalman_B.Xmov + 0.0081) +
          StateflowKalman_B.Ymov * StateflowKalman_B.Ymov) - 2.0 *
      StateflowKalman_B.Xmov * 0.09;

    /* '<S48>:1:15' */
    StateflowKalman_B.theta1_l = rt_atan2d_snf(sqrt((x1 * x1 + F * F) - G1 * G1)
      + F, x1 + G1) * 2.0;

    /* '<S48>:1:18' */
    x2 = rt_atan2d_snf(x3 - sqrt((x2 * x2 + x3 * x3) - x4 * x4), x2 + x4) * 2.0;
    if (x2 < -3.4906585039886591) {
      /* '<S48>:1:19' */
      /* '<S48>:1:20' */
      x2 += 6.2831853071795862;
    }

    StateflowKalman_B.theta2_j = x2;

    /* End of MATLAB Function: '<S12>/Cinematica Inversa' */

    /* MATLAB Function: '<S12>/Cinematica Inversa vel' */
    G1 = StateflowKalman_B.MultiportSwitch[2];
    x1 = StateflowKalman_B.MultiportSwitch[3];

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa vel': '<S50>:1' */
    /* '<S50>:1:3' */
    /* '<S50>:1:4' */
    /* '<S50>:1:6' */
    /* '<S50>:1:8' */
    /* '<S50>:1:10' */
    x2 = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)) -
      (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos(StateflowKalman_B.theta2_j));

    /* '<S50>:1:12' */
    x4 = (((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos
           (StateflowKalman_B.theta1_l)) * (-0.25 * sin
           (StateflowKalman_B.theta1_l)) + (StateflowKalman_B.Ymov - 0.25 * sin
           (StateflowKalman_B.theta1_l)) * (0.25 * cos
           (StateflowKalman_B.theta1_l))) / x2;

    /* '<S50>:1:14' */
    x2 = ((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
          (-0.25 * cos(StateflowKalman_B.theta2_j)) * ((StateflowKalman_B.Xmov +
            0.09) - 0.25 * cos(StateflowKalman_B.theta1_l)) /
          ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos
           (StateflowKalman_B.theta2_j)) + ((StateflowKalman_B.Xmov + 0.09) -
           0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 * sin
           (StateflowKalman_B.theta2_j))) / x2;

    /* '<S50>:1:16' */
    /* '<S50>:1:18' */
    /* '<S50>:1:20' */
    J[0] = -(StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) /
      ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos(StateflowKalman_B.theta2_j))
      * x4;
    J[2] = (-(StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) /
            ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos
             (StateflowKalman_B.theta2_j)) * x2 - 0.25 * sin
            (StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((StateflowKalman_B.Xmov - 0.09) - 0.25 *
      cos(StateflowKalman_B.theta2_j)) * (0.25 * cos(StateflowKalman_B.theta2_j));
    J[1] = x4;
    J[3] = x2;

    /* '<S50>:1:22' */
    if (fabs(J[1]) > fabs(J[0])) {
      x2 = J[0] / J[1];
      x4 = 1.0 / (x2 * J[3] - J[2]);
      J_p[0] = J[3] / J[1] * x4;
      J_p[1] = -x4;
      J_p[2] = -J[2] / J[1] * x4;
      J_p[3] = x2 * x4;
    } else {
      x2 = J[1] / J[0];
      x4 = 1.0 / (J[3] - x2 * J[2]);
      J_p[0] = J[3] / J[0] * x4;
      J_p[1] = -x2 * x4;
      J_p[2] = -J[2] / J[0] * x4;
      J_p[3] = x4;
    }

    x3 = J_p[0] * G1;
    x3 += J_p[2] * x1;
    F = x3;
    x3 = J_p[1] * G1;
    x3 += J_p[3] * x1;

    /* '<S50>:1:23' */
    /* '<S50>:1:24' */
    StateflowKalman_B.theta1_p = F;
    StateflowKalman_B.theta2_p = x3;

    /* End of MATLAB Function: '<S12>/Cinematica Inversa vel' */

    /* MATLAB Function: '<S12>/Cinematica Inversa Acc' */
    x1 = StateflowKalman_B.MultiportSwitch[4];
    G1 = StateflowKalman_B.MultiportSwitch[5];
    F = StateflowKalman_B.theta1_p;
    x3 = StateflowKalman_B.theta2_p;

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa Acc': '<S49>:1' */
    /* '<S49>:1:3' */
    /* '<S49>:1:4' */
    /* '<S49>:1:6' */
    /* '<S49>:1:8' */
    /* '<S49>:1:10' */
    x2 = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)) -
      (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos(StateflowKalman_B.theta2_j));

    /* '<S49>:1:12' */
    x4 = (((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos
           (StateflowKalman_B.theta1_l)) * (-0.25 * sin
           (StateflowKalman_B.theta1_l)) + (StateflowKalman_B.Ymov - 0.25 * sin
           (StateflowKalman_B.theta1_l)) * (0.25 * cos
           (StateflowKalman_B.theta1_l))) / x2;

    /* '<S49>:1:14' */
    x2 = ((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
          (-0.25 * cos(StateflowKalman_B.theta2_j)) * ((StateflowKalman_B.Xmov +
            0.09) - 0.25 * cos(StateflowKalman_B.theta1_l)) /
          ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos
           (StateflowKalman_B.theta2_j)) + ((StateflowKalman_B.Xmov + 0.09) -
           0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 * sin
           (StateflowKalman_B.theta2_j))) / x2;

    /* '<S49>:1:16' */
    /* '<S49>:1:18' */
    /* '<S49>:1:20' */
    J[0] = -(StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) /
      ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos(StateflowKalman_B.theta2_j))
      * x4;
    J[2] = (-(StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) /
            ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos
             (StateflowKalman_B.theta2_j)) * x2 - 0.25 * sin
            (StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((StateflowKalman_B.Xmov - 0.09) - 0.25 *
      cos(StateflowKalman_B.theta2_j)) * (0.25 * cos(StateflowKalman_B.theta2_j));
    J[1] = x4;
    J[3] = x2;

    /* '<S49>:1:22' */
    x2 = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j);
    b_a = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
      (StateflowKalman_B.theta2_j);
    c_a = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))
      + (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l));

    /* '<S49>:1:25' */
    x4 = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j);
    x5 = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j);
    D2p = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
      (StateflowKalman_B.theta2_j);
    g_a = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
      (StateflowKalman_B.theta2_j);
    T5 = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))
      + (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l));

    /* '<S49>:1:28' */
    i_a = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
      (StateflowKalman_B.theta2_j);
    j_a = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))
      + (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l));

    /* '<S49>:1:31' */
    N21 = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
      (StateflowKalman_B.theta2_j);
    N22 = (0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
      (StateflowKalman_B.theta2_j);
    m_a = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((0.09 - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))
      + (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l));

    /* '<S49>:1:34' */
    J_p[0] = ((((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l))
                * (0.25 * cos(StateflowKalman_B.theta1_l)) - ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 *
      sin(StateflowKalman_B.theta1_l))) * (StateflowKalman_B.MultiportSwitch[3]
                - 0.25 * cos(StateflowKalman_B.theta2_j) *
                StateflowKalman_B.theta2_p) / (((StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25
      * cos(StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov) +
      0.25 * cos(StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta1_l))) * ((0.09 - StateflowKalman_B.Xmov) +
      0.25 * cos(StateflowKalman_B.theta2_j))) - ((((0.25 * sin
      (StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p +
      StateflowKalman_B.MultiportSwitch[2]) * (0.25 * sin
      (StateflowKalman_B.theta1_l)) - (StateflowKalman_B.MultiportSwitch[3] -
      0.25 * cos(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p) *
      (0.25 * cos(StateflowKalman_B.theta1_l))) + (StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta1_l)) * (0.25 * sin
      (StateflowKalman_B.theta1_l)) * StateflowKalman_B.theta1_p) + 0.25 * cos
                (StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p *
                ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos
                 (StateflowKalman_B.theta1_l))) * (StateflowKalman_B.Ymov - 0.25
                * sin(StateflowKalman_B.theta2_j)) / (((StateflowKalman_B.Ymov -
      0.25 * sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov)
      - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
      (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l))) *
                ((0.09 - StateflowKalman_B.Xmov) + 0.25 * cos
                 (StateflowKalman_B.theta2_j)))) + (0.25 * sin
               (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p +
               StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov -
               0.25 * sin(StateflowKalman_B.theta2_j)) *
              ((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l))
               * (0.25 * cos(StateflowKalman_B.theta1_l)) - ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 *
                sin(StateflowKalman_B.theta1_l))) / (((StateflowKalman_B.Ymov -
      0.25 * sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov)
      - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
                (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)))
               * (x2 * x2))) - (((((0.25 * sin(StateflowKalman_B.theta1_l) *
      StateflowKalman_B.theta1_p + StateflowKalman_B.MultiportSwitch[2]) *
      (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
      StateflowKalman_B.MultiportSwitch[3]) +
      (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
       (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) -
      0.25 * cos(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p) +
      (0.25 * sin(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p +
       StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25
      * cos(StateflowKalman_B.theta1_l)) / (b_a * b_a)) *
      (((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)) *
        (0.25 * cos(StateflowKalman_B.theta1_l)) - ((0.09 +
          StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) *
        (0.25 * sin(StateflowKalman_B.theta1_l))) * (StateflowKalman_B.Ymov -
        0.25 * sin(StateflowKalman_B.theta2_j))) / (((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) * (c_a *
      c_a));
    J_p[2] = (((((((((((0.25 * sin(StateflowKalman_B.theta1_l) *
                        StateflowKalman_B.theta1_p +
                        StateflowKalman_B.MultiportSwitch[2]) * (0.25 * cos
      (StateflowKalman_B.theta2_j)) * (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25 *
      cos(StateflowKalman_B.theta2_j)) + ((0.25 * sin(StateflowKalman_B.theta1_l)
      * StateflowKalman_B.theta1_p + StateflowKalman_B.MultiportSwitch[2]) *
      (0.25 * sin(StateflowKalman_B.theta2_j)) + 0.25 * cos
      (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)))) +
                      (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
                       (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p)
                      * (0.25 * cos(StateflowKalman_B.theta2_j)) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) -
                     (StateflowKalman_B.Ymov - 0.25 * sin
                      (StateflowKalman_B.theta2_j)) * (0.25 * sin
      (StateflowKalman_B.theta2_j)) * StateflowKalman_B.theta2_p * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) +
                    (0.25 * sin(StateflowKalman_B.theta2_j) *
                     StateflowKalman_B.theta2_p +
                     StateflowKalman_B.MultiportSwitch[2]) * (0.25 * cos
      (StateflowKalman_B.theta2_j)) * (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25 *
      cos(StateflowKalman_B.theta1_l)) / (x4 * x4)) * (StateflowKalman_B.Ymov -
      0.25 * sin(StateflowKalman_B.theta2_j)) / (((StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) -
      0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov)
      + 0.25 * cos(StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta1_l))) * ((0.09 - StateflowKalman_B.Xmov) +
      0.25 * cos(StateflowKalman_B.theta2_j))) - 0.25 * cos
                   (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) -
                  (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
                   (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) *
                  (0.25 * cos(StateflowKalman_B.theta2_j)) / ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) +
                 ((StateflowKalman_B.Ymov - 0.25 * sin
                   (StateflowKalman_B.theta2_j)) * (0.25 * cos
      (StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25 *
      cos(StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25
      * cos(StateflowKalman_B.theta2_j)) + ((0.09 + StateflowKalman_B.Xmov) -
      0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 * sin
      (StateflowKalman_B.theta2_j))) * (StateflowKalman_B.MultiportSwitch[3] -
      0.25 * cos(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) /
                 (((StateflowKalman_B.Ymov - 0.25 * sin
                    (StateflowKalman_B.theta2_j)) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
                   (StateflowKalman_B.Ymov - 0.25 * sin
                    (StateflowKalman_B.theta1_l))) * ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)))) -
                (0.25 * sin(StateflowKalman_B.theta2_j) *
                 StateflowKalman_B.theta2_p + StateflowKalman_B.MultiportSwitch
                 [2]) * (0.25 * cos(StateflowKalman_B.theta2_j)) *
                (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j))
                / (x5 * x5)) + ((StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) * (0.25 * cos(StateflowKalman_B.theta2_j)) *
                ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos
                 (StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov)
      + 0.25 * cos(StateflowKalman_B.theta2_j)) + ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 *
      sin(StateflowKalman_B.theta2_j))) * (0.25 * sin(StateflowKalman_B.theta2_j)
                * StateflowKalman_B.theta2_p +
                StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov
                - 0.25 * sin(StateflowKalman_B.theta2_j)) /
               (((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j))
                 * ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos
                    (StateflowKalman_B.theta1_l)) / ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
                 (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)))
                * (D2p * D2p))) - (((((0.25 * sin(StateflowKalman_B.theta1_l) *
      StateflowKalman_B.theta1_p + StateflowKalman_B.MultiportSwitch[2]) *
      (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
      StateflowKalman_B.MultiportSwitch[3]) +
      (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
       (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) -
                0.25 * cos(StateflowKalman_B.theta1_l) *
                StateflowKalman_B.theta1_p) + (0.25 * sin
                (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p +
                StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov
                - 0.25 * sin(StateflowKalman_B.theta2_j)) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / (g_a *
                g_a)) * (((StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) * (0.25 * cos(StateflowKalman_B.theta2_j)) *
                          ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos
      (StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25 *
      cos(StateflowKalman_B.theta2_j)) + ((0.09 + StateflowKalman_B.Xmov) - 0.25
      * cos(StateflowKalman_B.theta1_l)) * (0.25 * sin
      (StateflowKalman_B.theta2_j))) * (StateflowKalman_B.Ymov - 0.25 * sin
                (StateflowKalman_B.theta2_j))) / (((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) * (T5 *
                T5))) + (StateflowKalman_B.Ymov - 0.25 * sin
                         (StateflowKalman_B.theta2_j)) * (0.25 * sin
      (StateflowKalman_B.theta2_j)) * StateflowKalman_B.theta2_p / ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j));
    J_p[1] = -((((0.25 * sin(StateflowKalman_B.theta1_l) *
                  StateflowKalman_B.theta1_p +
                  StateflowKalman_B.MultiportSwitch[2]) * (0.25 * sin
      (StateflowKalman_B.theta1_l)) - (StateflowKalman_B.MultiportSwitch[3] -
      0.25 * cos(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p) *
                 (0.25 * cos(StateflowKalman_B.theta1_l))) +
                (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l))
                * (0.25 * sin(StateflowKalman_B.theta1_l)) *
                StateflowKalman_B.theta1_p) + 0.25 * cos
               (StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p *
               ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos
                (StateflowKalman_B.theta1_l))) / ((StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) -
      0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov)
      + 0.25 * cos(StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta1_l))) - (((((0.25 * sin
      (StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p +
      StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta2_j)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25
      * cos(StateflowKalman_B.theta2_j)) + StateflowKalman_B.MultiportSwitch[3])
      + (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
         (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) -
      0.25 * cos(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p) +
      (0.25 * sin(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p +
       StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25
      * cos(StateflowKalman_B.theta1_l)) / (i_a * i_a)) *
      ((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)) * (0.25
        * cos(StateflowKalman_B.theta1_l)) - ((0.09 + StateflowKalman_B.Xmov) -
        0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 * sin
        (StateflowKalman_B.theta1_l))) / (j_a * j_a);
    J_p[3] = (((((0.25 * sin(StateflowKalman_B.theta1_l) *
                  StateflowKalman_B.theta1_p +
                  StateflowKalman_B.MultiportSwitch[2]) * (0.25 * cos
      (StateflowKalman_B.theta2_j)) * (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25 *
      cos(StateflowKalman_B.theta2_j)) + ((0.25 * sin(StateflowKalman_B.theta1_l)
      * StateflowKalman_B.theta1_p + StateflowKalman_B.MultiportSwitch[2]) *
      (0.25 * sin(StateflowKalman_B.theta2_j)) + 0.25 * cos
      (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)))) +
                (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
                 (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) *
                (0.25 * cos(StateflowKalman_B.theta2_j)) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) -
               (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j))
               * (0.25 * sin(StateflowKalman_B.theta2_j)) *
               StateflowKalman_B.theta2_p * ((0.09 + StateflowKalman_B.Xmov) -
                0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09 -
      StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) + (0.25
               * sin(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p +
               StateflowKalman_B.MultiportSwitch[2]) * (0.25 * cos
               (StateflowKalman_B.theta2_j)) * (StateflowKalman_B.Ymov - 0.25 *
               sin(StateflowKalman_B.theta2_j)) * ((0.09 +
                StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l))
              / (N21 * N21)) / ((StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25 *
      cos(StateflowKalman_B.theta1_l)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25
      * cos(StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta1_l))) - (((((0.25 * sin
      (StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p +
      StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta2_j)) / ((0.09 - StateflowKalman_B.Xmov) + 0.25
      * cos(StateflowKalman_B.theta2_j)) + StateflowKalman_B.MultiportSwitch[3])
      + (StateflowKalman_B.MultiportSwitch[3] - 0.25 * cos
         (StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p) * ((0.09 +
      StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09
      - StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j))) -
      0.25 * cos(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p) +
      (0.25 * sin(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p +
       StateflowKalman_B.MultiportSwitch[2]) * (StateflowKalman_B.Ymov - 0.25 *
      sin(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) - 0.25
      * cos(StateflowKalman_B.theta1_l)) / (N22 * N22)) *
      ((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) * (0.25
        * cos(StateflowKalman_B.theta2_j)) * ((0.09 + StateflowKalman_B.Xmov) -
        0.25 * cos(StateflowKalman_B.theta1_l)) / ((0.09 -
         StateflowKalman_B.Xmov) + 0.25 * cos(StateflowKalman_B.theta2_j)) +
       ((0.09 + StateflowKalman_B.Xmov) - 0.25 * cos(StateflowKalman_B.theta1_l))
       * (0.25 * sin(StateflowKalman_B.theta2_j))) / (m_a * m_a);

    /* '<S49>:1:37' */
    if (fabs(J[1]) > fabs(J[0])) {
      x2 = J[0] / J[1];
      x4 = 1.0 / (x2 * J[3] - J[2]);
      J1[0] = J[3] / J[1] * x4;
      J1[1] = -x4;
      J1[2] = -J[2] / J[1] * x4;
      J1[3] = x2 * x4;
    } else {
      x2 = J[1] / J[0];
      x4 = 1.0 / (J[3] - x2 * J[2]);
      J1[0] = J[3] / J[0] * x4;
      J1[1] = -x2 * x4;
      J1[2] = -J[2] / J[0] * x4;
      J1[3] = x4;
    }

    x2 = J_p[0] * F;
    x2 += J_p[2] * x3;
    x1 -= x2;
    x2 = J_p[1] * F;
    x2 += J_p[3] * x3;
    G1 -= x2;
    x3 = J1[0] * x1;
    x3 += J1[2] * G1;
    F = x3;
    x3 = J1[1] * x1;
    x3 += J1[3] * G1;

    /* '<S49>:1:39' */
    /* '<S49>:1:40' */
    StateflowKalman_B.theta1_pp = F;
    StateflowKalman_B.theta2_pp = x3;

    /* End of MATLAB Function: '<S12>/Cinematica Inversa Acc' */

    /* S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S71>/Velocity B' */
    StateflowKalman_B.VelocityB_f = StateflowKalman_B.EtherCATPDOReceive15_d;

    /* MATLAB Function: '<S71>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita /Vel Asse B conv': '<S196>:1' */
    /* '<S196>:1:2' */
    StateflowKalman_B.vel_B_conv_b = StateflowKalman_B.VelocityB_f *
      6.2831853071795862 / 163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[17];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S71>/Velocity A' */
    StateflowKalman_B.VelocityA_o = StateflowKalman_B.EtherCATPDOReceive14_b;

    /* MATLAB Function: '<S71>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita /Vel Asse A conv': '<S195>:1' */
    /* '<S195>:1:2' */
    StateflowKalman_B.vel_A_conv_b = StateflowKalman_B.VelocityA_o *
      6.2831853071795862 / 163840.0 / 64.0;

    /* Sum: '<S12>/Sum7' */
    StateflowKalman_B.qdot[0] = StateflowKalman_B.theta1_p -
      StateflowKalman_B.vel_B_conv_b;
    StateflowKalman_B.qdot[1] = StateflowKalman_B.theta2_p -
      StateflowKalman_B.vel_A_conv_b;

    /* Sum: '<S12>/Sum4' */
    StateflowKalman_B.q[0] = StateflowKalman_B.theta1_l - StateflowKalman_B.Sum4;
    StateflowKalman_B.q[1] = StateflowKalman_B.theta2_j - StateflowKalman_B.Sum7;

    /* Gain: '<S12>/Kd' */
    StateflowKalman_B.Kd[0] = StateflowKalman_P.Kd_Gain *
      StateflowKalman_B.qdot[0];

    /* Gain: '<S66>/Proportional Gain' */
    StateflowKalman_B.ProportionalGain[0] = StateflowKalman_P.PIDController_P *
      StateflowKalman_B.q[0];

    /* Gain: '<S12>/Kd' */
    StateflowKalman_B.Kd[1] = StateflowKalman_P.Kd_Gain *
      StateflowKalman_B.qdot[1];

    /* Gain: '<S66>/Proportional Gain' */
    StateflowKalman_B.ProportionalGain[1] = StateflowKalman_P.PIDController_P *
      StateflowKalman_B.q[1];

    /* DiscreteIntegrator: '<S66>/Integrator' */
    if ((StateflowKalman_B.StartWork > 0.0) &&
        (StateflowKalman_DW.Integrator_PrevResetState <= 0)) {
      StateflowKalman_DW.Integrator_DSTATE[0] = StateflowKalman_P.Integrator_IC;
      StateflowKalman_DW.Integrator_DSTATE[1] = StateflowKalman_P.Integrator_IC;
    }

    StateflowKalman_B.Integrator[0] = StateflowKalman_DW.Integrator_DSTATE[0];

    /* Sum: '<S66>/Sum' */
    StateflowKalman_B.Sum[0] = StateflowKalman_B.ProportionalGain[0] +
      StateflowKalman_B.Integrator[0];

    /* DiscreteIntegrator: '<S66>/Integrator' */
    StateflowKalman_B.Integrator[1] = StateflowKalman_DW.Integrator_DSTATE[1];

    /* Sum: '<S66>/Sum' */
    StateflowKalman_B.Sum[1] = StateflowKalman_B.ProportionalGain[1] +
      StateflowKalman_B.Integrator[1];

    /* Sum: '<S12>/Sum9' */
    StateflowKalman_B.Y[0] = (StateflowKalman_B.theta1_pp +
      StateflowKalman_B.Kd[0]) + StateflowKalman_B.Sum[0];
    StateflowKalman_B.Y[1] = (StateflowKalman_B.theta2_pp +
      StateflowKalman_B.Kd[1]) + StateflowKalman_B.Sum[1];

    /* MATLAB Function: '<S12>/Dinamica Inversa1' */
    /* MATLAB Function 'Sistema_braccia/Dinamica Inversa1': '<S55>:1' */
    /* '<S55>:1:112' */
    /* '<S55>:1:111' */
    /* '<S55>:1:104' */
    /* '<S55>:1:96' */
    /* '<S55>:1:3' */
    /* '<S55>:1:15' */
    x2 = (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) + 0.72;
    b_a = (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) + 0.72;
    c_a = sin(StateflowKalman_B.Sum4) - sin(StateflowKalman_B.Sum7);
    x4 = b_a * b_a / 2.0 + c_a * c_a / 2.0;
    x5 = sin(StateflowKalman_B.Sum4) - sin(StateflowKalman_B.Sum7);
    D2p = (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) + 0.72;
    g_a = sin(StateflowKalman_B.Sum4) - sin(StateflowKalman_B.Sum7);
    G1 = atan((sqrt((x2 * x2 - x4 * x4) + x5 * x5) + (sin(StateflowKalman_B.Sum7)
                - sin(StateflowKalman_B.Sum4))) / (((D2p * D2p / 2.0 + (cos
      (StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4))) + g_a * g_a / 2.0)
               + 0.72)) * 2.0;

    /* '<S55>:1:19' */
    T5 = (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) + 0.72;
    i_a = (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) + 0.72;
    j_a = sin(StateflowKalman_B.Sum4) - sin(StateflowKalman_B.Sum7);
    N21 = i_a * i_a / 2.0 + j_a * j_a / 2.0;
    N22 = sin(StateflowKalman_B.Sum4) - sin(StateflowKalman_B.Sum7);
    m_a = (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) + 0.72;
    x2 = sin(StateflowKalman_B.Sum4) - sin(StateflowKalman_B.Sum7);
    x1 = atan((sqrt((T5 * T5 - N21 * N21) + N22 * N22) + (sin
                (StateflowKalman_B.Sum7) - sin(StateflowKalman_B.Sum4))) /
              (((m_a * m_a / 2.0 + (cos(StateflowKalman_B.Sum4) - cos
      (StateflowKalman_B.Sum7))) + x2 * x2 / 2.0) - 0.72)) * -2.0;

    /* '<S55>:1:23' */
    x4 = cos(x1) / sin(x1) * sin(StateflowKalman_B.Sum4) - cos
      (StateflowKalman_B.Sum4);

    /* '<S55>:1:24' */
    x5 = cos(StateflowKalman_B.Sum7) - cos(x1) / sin(x1) * sin
      (StateflowKalman_B.Sum7);

    /* '<S55>:1:25' */
    T5 = cos(G1) - cos(x1) / sin(x1) * sin(G1);

    /* '<S55>:1:27' */
    F = (StateflowKalman_B.vel_B_conv * x4 + StateflowKalman_B.vel_A_conv * x5) /
      T5;

    /* '<S55>:1:29' */
    N21 = ((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * sin(StateflowKalman_B.Sum4)
           + cos(x1) / sin(x1) * sin(StateflowKalman_B.Sum4)) - cos
      (StateflowKalman_B.Sum4);

    /* '<S55>:1:31' */
    N22 = ((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * -sin(StateflowKalman_B.Sum7)
           - cos(x1) / sin(x1) * sin(StateflowKalman_B.Sum7)) + cos
      (StateflowKalman_B.Sum7);

    /* '<S55>:1:33' */
    x2 = (cos(G1) / sin(G1) - cos(x1) / sin(x1)) * sin(x1);

    /* '<S55>:1:35' */
    x3 = N21 / x2 * StateflowKalman_B.vel_B_conv + N22 / x2 *
      StateflowKalman_B.vel_A_conv;

    /* '<S55>:1:37' */
    J_p[0] = x4 / T5;
    J_p[2] = x5 / T5;
    J_p[1] = N21 / x2;
    J_p[3] = N22 / x2;

    /* '<S55>:1:44' */
    /* '<S55>:1:45' */
    /* '<S55>:1:46' */
    x5 = cos(G1) - cos(x1) / sin(x1) * sin(G1);

    /* '<S55>:1:48' */
    /* '<S55>:1:50' */
    /* '<S55>:1:52' */
    /* '<S55>:1:54' */
    x4 = sin(x1);

    /* '<S55>:1:56' */
    T5 = sin(x1);

    /* '<S55>:1:58' */
    N21 = sin(x1);
    N21 = (-sin(G1) * F - -1.0 / (N21 * N21) * x3 * sin(G1)) - cos(x1) / sin(x1)
      * cos(G1) * F;

    /* '<S55>:1:60' */
    N22 = sin(G1);
    m_a = sin(x1);
    b_a = sin(x1);

    /* '<S55>:1:63' */
    c_a = sin(G1);
    i_a = sin(x1);
    j_a = sin(x1);

    /* '<S55>:1:66' */
    D2p = sin(G1);
    g_a = sin(x1);
    D2p = (-1.0 / (D2p * D2p) * F + 1.0 / (g_a * g_a) * x3) * sin(x1) + (cos(G1)
      / sin(G1) - cos(x1) / sin(x1)) * (cos(x1) * x3);

    /* '<S55>:1:68' */
    J[0] = (((-1.0 / (x4 * x4) * x3 * sin(StateflowKalman_B.Sum4) + cos(x1) /
              sin(x1) * cos(StateflowKalman_B.Sum4) *
              StateflowKalman_B.vel_B_conv) + sin(StateflowKalman_B.Sum4) *
             StateflowKalman_B.vel_B_conv) * x5 - (cos(x1) / sin(x1) * sin
             (StateflowKalman_B.Sum4) - cos(StateflowKalman_B.Sum4)) * N21) /
      (x5 * x5);
    J[2] = (((1.0 / (T5 * T5) * x3 * sin(StateflowKalman_B.Sum7) - cos(x1) / sin
              (x1) * cos(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv)
             - sin(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv) * x5
            - (cos(StateflowKalman_B.Sum7) - cos(x1) / sin(x1) * sin
               (StateflowKalman_B.Sum7)) * N21) / (x5 * x5);
    J[1] = ((((((-1.0 / (N22 * N22) * F + 1.0 / (m_a * m_a) * x3) * sin
                (StateflowKalman_B.Sum4) + (cos(G1) / sin(G1) - cos(x1) / sin(x1))
                * (cos(StateflowKalman_B.Sum4) * StateflowKalman_B.vel_B_conv))
               + -1.0 / (b_a * b_a) * x3 * sin(StateflowKalman_B.Sum4)) + cos(x1)
              / sin(x1) * cos(StateflowKalman_B.Sum4) *
              StateflowKalman_B.vel_B_conv) + sin(StateflowKalman_B.Sum4) *
             StateflowKalman_B.vel_B_conv) * x2 - (((cos(G1) / sin(G1) - cos(x1)
               / sin(x1)) * sin(StateflowKalman_B.Sum4) + cos(x1) / sin(x1) *
              sin(StateflowKalman_B.Sum4)) - cos(StateflowKalman_B.Sum4)) * D2p)
      / (x2 * x2);
    J[3] = ((((((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * (-cos
      (StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv) - (-1.0 / (c_a *
      c_a) * F + 1.0 / (i_a * i_a) * x3) * sin(StateflowKalman_B.Sum7)) - -1.0 /
               (j_a * j_a) * x3 * sin(StateflowKalman_B.Sum7)) - cos(x1) / sin
              (x1) * cos(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv)
             - sin(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv) * x2
            - (((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * -sin
                (StateflowKalman_B.Sum7) - cos(x1) / sin(x1) * sin
                (StateflowKalman_B.Sum7)) + cos(StateflowKalman_B.Sum7)) * D2p) /
      (x2 * x2);

    /* '<S55>:1:70' */
    J1[0] = -0.125 * sin(StateflowKalman_B.Sum4);
    J1[2] = 0.0;
    J1[1] = 0.125 * cos(StateflowKalman_B.Sum4);
    J1[3] = 0.0;

    /* '<S55>:1:72' */
    /* '<S55>:1:75' */
    J2[0] = 0.0;
    J2[2] = -0.125 * sin(StateflowKalman_B.Sum7);
    J2[1] = 0.0;
    J2[3] = 0.125 * cos(StateflowKalman_B.Sum7);

    /* '<S55>:1:77' */
    /* '<S55>:1:80' */
    J3[0] = (0.5 * sin(G1) * J_p[0] + sin(StateflowKalman_B.Sum4)) * -0.25;
    J3[2] = 0.5 * sin(G1) * J_p[2] * -0.25;
    J3[1] = (0.5 * cos(G1) * J_p[0] + cos(StateflowKalman_B.Sum4)) * 0.25;
    J3[3] = 0.5 * cos(G1) * J_p[2] * 0.25;

    /* '<S55>:1:82' */
    /* '<S55>:1:85' */
    J4[0] = -0.125 * sin(x1) * J_p[1];
    J4[2] = (0.5 * sin(x1) * J_p[3] + sin(StateflowKalman_B.Sum7)) * -0.25;
    J4[1] = 0.125 * cos(x1) * J_p[1];
    J4[3] = (0.5 * cos(x1) * J_p[3] + cos(StateflowKalman_B.Sum7)) * 0.25;

    /* '<S55>:1:87' */
    /* '<S55>:1:90' */
    JE[0] = (sin(G1) * J_p[0] + sin(StateflowKalman_B.Sum4)) * -0.25;
    JE[2] = sin(G1) * J_p[2] * -0.25;
    JE[1] = (cos(G1) * J_p[0] + cos(StateflowKalman_B.Sum4)) * 0.25;
    JE[3] = cos(G1) * J_p[2] * 0.25;

    /* '<S55>:1:92' */
    /* '<S55>:1:96' */
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      b_a = J1[bitIdx << 1] * 2.9 * J1[0];
      b_a += J1[(bitIdx << 1) + 1] * 2.9 * J1[1];
      x2 = y[bitIdx] + b_a;
      fm[bitIdx] = 0.0;
      b_a = fm[bitIdx];
      b_a += J2[bitIdx << 1] * 2.9 * 0.0;
      i_a = J_p[bitIdx << 1] * 0.0522 * J_p[0];
      fm[bitIdx] = b_a;
      b_a = fm[bitIdx];
      b_a += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      i_a += J_p[(bitIdx << 1) + 1] * 0.0522 * J_p[1];
      fm[bitIdx] = b_a;
      x2 = (x2 + fm[bitIdx]) + i_a;
      tmp_0[bitIdx] = 0.0;
      b_a = tmp_0[bitIdx];
      b_a += J3[bitIdx << 1] * 2.9 * J3[0];
      i_a = J4[bitIdx << 1] * 2.9 * J4[0];
      tmp_0[bitIdx] = b_a;
      b_a = tmp_0[bitIdx];
      b_a += J3[(bitIdx << 1) + 1] * 2.9 * J3[1];
      i_a += J4[(bitIdx << 1) + 1] * 2.9 * J4[1];
      tmp_0[bitIdx] = b_a;
      y_1[bitIdx] = (x2 + tmp_0[bitIdx]) + i_a;
      tmp_1[bitIdx] = 0.0;
      b_a = tmp_1[bitIdx];
      b_a += JE[bitIdx << 1] * 0.36 * JE[0];
      tmp_1[bitIdx] = b_a;
      b_a = tmp_1[bitIdx];
      b_a += JE[(bitIdx << 1) + 1] * 0.36 * JE[1];
      tmp_1[bitIdx] = b_a;
      b_a = J1[bitIdx << 1] * 2.9 * 0.0;
      b_a += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      x2 = y[bitIdx + 2] + b_a;
      fm[bitIdx + 2] = 0.0;
      b_a = fm[bitIdx + 2];
      b_a += J2[bitIdx << 1] * 2.9 * J2[2];
      i_a = J_p[bitIdx << 1] * 0.0522 * J_p[2];
      fm[bitIdx + 2] = b_a;
      b_a = fm[bitIdx + 2];
      b_a += J2[(bitIdx << 1) + 1] * 2.9 * J2[3];
      i_a += J_p[(bitIdx << 1) + 1] * 0.0522 * J_p[3];
      fm[bitIdx + 2] = b_a;
      x2 = (fm[bitIdx + 2] + x2) + i_a;
      tmp_0[bitIdx + 2] = 0.0;
      b_a = tmp_0[bitIdx + 2];
      b_a += J3[bitIdx << 1] * 2.9 * J3[2];
      i_a = J4[bitIdx << 1] * 2.9 * J4[2];
      tmp_0[bitIdx + 2] = b_a;
      b_a = tmp_0[bitIdx + 2];
      b_a += J3[(bitIdx << 1) + 1] * 2.9 * J3[3];
      i_a += J4[(bitIdx << 1) + 1] * 2.9 * J4[3];
      tmp_0[bitIdx + 2] = b_a;
      y_1[bitIdx + 2] = (tmp_0[bitIdx + 2] + x2) + i_a;
      tmp_1[bitIdx + 2] = 0.0;
      b_a = tmp_1[bitIdx + 2];
      b_a += JE[bitIdx << 1] * 0.36 * JE[2];
      tmp_1[bitIdx + 2] = b_a;
      b_a = tmp_1[bitIdx + 2];
      b_a += JE[(bitIdx << 1) + 1] * 0.36 * JE[3];
      tmp_1[bitIdx + 2] = b_a;
    }

    /* '<S55>:1:97' */
    c_a = -0.125 * cos(StateflowKalman_B.Sum4) * StateflowKalman_B.vel_B_conv;
    x4 = -0.125 * sin(StateflowKalman_B.Sum4) * StateflowKalman_B.vel_B_conv;
    x5 = -0.125 * cos(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv;
    T5 = -0.125 * sin(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv;
    x2 = ((0.5 * cos(G1) * F * J_p[0] + cos(StateflowKalman_B.Sum4) *
           StateflowKalman_B.vel_B_conv) + 0.5 * sin(G1) * J[0]) * -0.25;
    j_a = (0.5 * cos(G1) * F * J_p[2] + 0.5 * sin(G1) * J[2]) * -0.25;
    D2p = ((-sin(StateflowKalman_B.Sum4) * StateflowKalman_B.vel_B_conv - 0.5 *
            sin(G1) * F * J_p[0]) + 0.5 * cos(G1) * J[0]) * 0.25;
    N21 = (-0.5 * sin(G1) * F * J_p[2] + 0.5 * cos(G1) * J[2]) * 0.25;
    N22 = (0.5 * cos(x1) * x3 * J_p[1] + 0.5 * sin(x1) * J[1]) * -0.25;
    m_a = ((0.5 * cos(x1) * x3 * J_p[3] + cos(StateflowKalman_B.Sum7) *
            StateflowKalman_B.vel_A_conv) + 0.5 * sin(x1) * J[3]) * -0.25;
    g_a = (-0.5 * sin(x1) * x3 * J_p[1] + 0.5 * cos(x1) * J[1]) * 0.25;
    x1 = ((-sin(StateflowKalman_B.Sum7) * StateflowKalman_B.vel_A_conv - 0.5 *
           sin(x1) * x3 * J_p[3]) + 0.5 * cos(x1) * J[3]) * 0.25;
    x3 = ((cos(G1) * F * J_p[0] + cos(StateflowKalman_B.Sum4) *
           StateflowKalman_B.vel_B_conv) + sin(G1) * J[0]) * -0.25;
    tmp_7 = (cos(G1) * F * J_p[2] + sin(G1) * J[2]) * -0.25;
    tmp_8 = ((-sin(StateflowKalman_B.Sum4) * StateflowKalman_B.vel_B_conv - sin
              (G1) * F * J_p[0]) + cos(G1) * J[0]) * 0.25;
    G1 = (-sin(G1) * F * J_p[2] + cos(G1) * J[2]) * 0.25;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      StateflowKalman_B.M[bitIdx << 1] = y_1[bitIdx << 1] + tmp_1[bitIdx << 1];
      fm[bitIdx] = 0.0;
      tmp_0[bitIdx] = 0.0;
      b_a = tmp_0[bitIdx];
      i_a = fm[bitIdx];
      i_a += J1[bitIdx << 1] * 2.9 * c_a;
      b_a += J2[bitIdx << 1] * 2.9 * 0.0;
      F = J_p[bitIdx << 1] * 0.0522 * J[0];
      fm[bitIdx] = i_a;
      tmp_0[bitIdx] = b_a;
      b_a = tmp_0[bitIdx];
      i_a = fm[bitIdx];
      i_a += J1[(bitIdx << 1) + 1] * 2.9 * x4;
      b_a += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      F += J_p[(bitIdx << 1) + 1] * 0.0522 * J[1];
      fm[bitIdx] = i_a;
      tmp_0[bitIdx] = b_a;
      b_a = (fm[bitIdx] + tmp_0[bitIdx]) + F;
      tmp_2[bitIdx] = 0.0;
      i_a = tmp_2[bitIdx];
      i_a += J3[bitIdx << 1] * 2.9 * x2;
      F = J4[bitIdx << 1] * 2.9 * N22;
      tmp_2[bitIdx] = i_a;
      i_a = tmp_2[bitIdx];
      i_a += J3[(bitIdx << 1) + 1] * 2.9 * D2p;
      F += J4[(bitIdx << 1) + 1] * 2.9 * g_a;
      tmp_2[bitIdx] = i_a;
      tmp_3[bitIdx] = (b_a + tmp_2[bitIdx]) + F;
      tmp_4[bitIdx] = 0.0;
      b_a = tmp_4[bitIdx];
      b_a += JE[bitIdx << 1] * 0.36 * x3;
      tmp_4[bitIdx] = b_a;
      b_a = tmp_4[bitIdx];
      b_a += JE[(bitIdx << 1) + 1] * 0.36 * tmp_8;
      tmp_4[bitIdx] = b_a;
      StateflowKalman_B.M[1 + (bitIdx << 1)] = y_1[(bitIdx << 1) + 1] + tmp_1
        [(bitIdx << 1) + 1];
      fm[bitIdx + 2] = 0.0;
      tmp_0[bitIdx + 2] = 0.0;
      b_a = tmp_0[bitIdx + 2];
      i_a = fm[bitIdx + 2];
      i_a += J1[bitIdx << 1] * 2.9 * 0.0;
      b_a += J2[bitIdx << 1] * 2.9 * x5;
      F = J_p[bitIdx << 1] * 0.0522 * J[2];
      fm[bitIdx + 2] = i_a;
      tmp_0[bitIdx + 2] = b_a;
      b_a = tmp_0[bitIdx + 2];
      i_a = fm[bitIdx + 2];
      i_a += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      b_a += J2[(bitIdx << 1) + 1] * 2.9 * T5;
      F += J_p[(bitIdx << 1) + 1] * 0.0522 * J[3];
      fm[bitIdx + 2] = i_a;
      tmp_0[bitIdx + 2] = b_a;
      b_a = (fm[bitIdx + 2] + tmp_0[bitIdx + 2]) + F;
      tmp_2[bitIdx + 2] = 0.0;
      i_a = tmp_2[bitIdx + 2];
      i_a += J3[bitIdx << 1] * 2.9 * j_a;
      F = J4[bitIdx << 1] * 2.9 * m_a;
      tmp_2[bitIdx + 2] = i_a;
      i_a = tmp_2[bitIdx + 2];
      i_a += J3[(bitIdx << 1) + 1] * 2.9 * N21;
      F += J4[(bitIdx << 1) + 1] * 2.9 * x1;
      tmp_2[bitIdx + 2] = i_a;
      tmp_3[bitIdx + 2] = (tmp_2[bitIdx + 2] + b_a) + F;
      tmp_4[bitIdx + 2] = 0.0;
      b_a = tmp_4[bitIdx + 2];
      b_a += JE[bitIdx << 1] * 0.36 * tmp_7;
      tmp_4[bitIdx + 2] = b_a;
      b_a = tmp_4[bitIdx + 2];
      b_a += JE[(bitIdx << 1) + 1] * 0.36 * G1;
      tmp_4[bitIdx + 2] = b_a;
    }

    /* '<S55>:1:99' */
    c_a = StateflowKalman_B.Y[0];
    x4 = StateflowKalman_B.Y[1];
    x2 = StateflowKalman_B.vel_B_conv;
    D2p = StateflowKalman_B.vel_A_conv;
    StateflowKalman_B.K_f[0] = tmp_3[0] + tmp_4[0];
    g_a = StateflowKalman_B.M[0] * c_a;
    StateflowKalman_B.K_f[1] = tmp_3[1] + tmp_4[1];
    g_a += StateflowKalman_B.M[2] * x4;
    N22 = g_a;
    StateflowKalman_B.K_f[2] = tmp_3[2] + tmp_4[2];
    g_a = StateflowKalman_B.M[1] * c_a;
    StateflowKalman_B.K_f[3] = tmp_3[3] + tmp_4[3];
    g_a += StateflowKalman_B.M[3] * x4;
    c_a = StateflowKalman_B.K_f[0] * x2;
    c_a += StateflowKalman_B.K_f[2] * D2p;
    F = N22 + c_a;
    c_a = StateflowKalman_B.K_f[1] * x2;
    c_a += StateflowKalman_B.K_f[3] * D2p;
    x3 = g_a + c_a;

    /* '<S55>:1:104' */
    /*  Cm = Jtrasm*C + Jm*Thetam_pp; */
    /* '<S55>:1:111' */
    /* '<S55>:1:112' */
    /* '<S55>:1:113' */
    /* '<S55>:1:114' */
    /*   */
    /*  Mm_ = Jm; */
    /*  DMm = Mm-Jm; */
    /*  D = DMm*Thetam_pp + Km*Thetam_p; */
    /*  Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)]; */
    /*  Bt = [zeros(2,2); Mm_^-1]; */
    /*  Acl = Aol - Bt*[Kp Kd]; */
    /* '<S55>:1:125' */
    StateflowKalman_B.C1 = F;

    /* '<S55>:1:126' */
    StateflowKalman_B.C2 = x3;

    /* End of MATLAB Function: '<S12>/Dinamica Inversa1' */

    /* MATLAB Function: '<S12>/Coppia motrice' */
    /* MATLAB Function 'Sistema_braccia/Coppia motrice': '<S54>:1' */
    /* '<S54>:1:2' */
    /* '<S54>:1:4' */
    StateflowKalman_B.Cm1 = (0.069632 * StateflowKalman_B.Y[0] +
      StateflowKalman_B.C1) / 64.0;

    /* '<S54>:1:5' */
    StateflowKalman_B.Cm2 = (0.069632 * StateflowKalman_B.Y[1] +
      StateflowKalman_B.C2) / 64.0;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S23>/Constant'
     *  Switch: '<S5>/Switch1'
     */
    if (StateflowKalman_B.Memory != 0.0) {
      StateflowKalman_B.Switch1 = StateflowKalman_P.Constant_Value;
    } else {
      if (StateflowKalman_B.Bool > StateflowKalman_P.Switch1_Threshold) {
        /* Gain: '<S12>/Gain1' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        StateflowKalman_B.Gain1_i = StateflowKalman_P.Gain1_Gain *
          StateflowKalman_B.Cm2;

        /* Switch: '<S5>/Switch1' */
        StateflowKalman_B.Switch1_c = StateflowKalman_B.Gain1_i;
      } else {
        /* Switch: '<S5>/Switch1' */
        StateflowKalman_B.Switch1_c = StateflowKalman_B.CoppiaA;
      }

      StateflowKalman_B.Switch1 = StateflowKalman_B.Switch1_c;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Saturate: '<S5>/Coppia A braccia saturata' */
    G1 = StateflowKalman_B.Switch1;
    F = StateflowKalman_P.CoppiaAbracciasaturata_LowerSat;
    x1 = StateflowKalman_P.CoppiaAbracciasaturata_UpperSat;
    if (G1 > x1) {
      StateflowKalman_B.CoppiaAbracciasaturata = x1;
    } else if (G1 < F) {
      StateflowKalman_B.CoppiaAbracciasaturata = F;
    } else {
      StateflowKalman_B.CoppiaAbracciasaturata = G1;
    }

    /* End of Saturate: '<S5>/Coppia A braccia saturata' */

    /* DataTypeConversion: '<S5>/Data Type Conversion3' */
    b_a = floor(StateflowKalman_B.CoppiaAbracciasaturata);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 65536.0);
    }

    StateflowKalman_B.DataTypeConversion3 = (int16_T)(b_a < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-b_a : (int32_T)(int16_T)(uint16_T)b_a);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion3' */

    /* S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */

    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[18];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S23>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S23>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[19];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S23>/Data Type Conversion14' */
    StateflowKalman_B.DataTypeConversion14 =
      StateflowKalman_B.EtherCATPDOReceive9;

    /* MATLAB Function: '<S23>/MATLAB Function' */
    StateflowKalman_MATLABFunction(StateflowKalman_B.Memory,
      StateflowKalman_B.DataTypeConversion14,
      &StateflowKalman_B.sf_MATLABFunction_e);

    /* Memory: '<S26>/Memory' */
    StateflowKalman_B.Memory_g = StateflowKalman_DW.Memory_PreviousInput_o;

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S26>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    if (StateflowKalman_B.Memory_g != 0.0) {
      StateflowKalman_B.Switch1_l = StateflowKalman_P.Constant_Value_l;
    } else {
      if (StateflowKalman_B.Bool > StateflowKalman_P.Switch1_Threshold_f) {
        /* Gain: '<S12>/Gain' incorporates:
         *  Switch: '<S6>/Switch1'
         */
        StateflowKalman_B.Gain_na = StateflowKalman_P.Gain_Gain *
          StateflowKalman_B.Cm1;

        /* Switch: '<S6>/Switch1' */
        StateflowKalman_B.Switch1_i = StateflowKalman_B.Gain_na;
      } else {
        /* Switch: '<S6>/Switch1' */
        StateflowKalman_B.Switch1_i = StateflowKalman_B.CoppiaB;
      }

      StateflowKalman_B.Switch1_l = StateflowKalman_B.Switch1_i;
    }

    /* End of Switch: '<S26>/Switch1' */

    /* Saturate: '<S6>/Coppia B braccia saturata' */
    G1 = StateflowKalman_B.Switch1_l;
    F = StateflowKalman_P.CoppiaBbracciasaturata_LowerSat;
    x1 = StateflowKalman_P.CoppiaBbracciasaturata_UpperSat;
    if (G1 > x1) {
      StateflowKalman_B.CoppiaBbracciasaturata = x1;
    } else if (G1 < F) {
      StateflowKalman_B.CoppiaBbracciasaturata = F;
    } else {
      StateflowKalman_B.CoppiaBbracciasaturata = G1;
    }

    /* End of Saturate: '<S6>/Coppia B braccia saturata' */

    /* DataTypeConversion: '<S6>/Data Type Conversion4' */
    b_a = floor(StateflowKalman_B.CoppiaBbracciasaturata);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 65536.0);
    }

    StateflowKalman_B.DataTypeConversion4 = (int16_T)(b_a < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-b_a : (int32_T)(int16_T)(uint16_T)b_a);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion4' */

    /* S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */

    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[20];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S26>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S26>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[21];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S26>/Data Type Conversion14' */
    StateflowKalman_B.DataTypeConversion14_g =
      StateflowKalman_B.EtherCATPDOReceive9_h;

    /* MATLAB Function: '<S26>/MATLAB Function' */
    StateflowKalman_MATLABFunction(StateflowKalman_B.Memory_g,
      StateflowKalman_B.DataTypeConversion14_g,
      &StateflowKalman_B.sf_MATLABFunction_a);

    /* Memory: '<S30>/Memory' */
    StateflowKalman_B.Memory_n = StateflowKalman_DW.Memory_PreviousInput_g;

    /* Sum: '<S34>/Sum' */
    StateflowKalman_B.Sum_p = StateflowKalman_B.convert_k -
      StateflowKalman_B.OffA_vite;

    /* MATLAB Function: '<S43>/Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv': '<S44>:1' */
    /* '<S44>:1:2' */
    StateflowKalman_B.pos_A_conv_c = StateflowKalman_B.Sum_p * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S11>/Sum3' */
    StateflowKalman_B.Sum3 = StateflowKalman_B.convert10_p -
      StateflowKalman_B.OffB_vite;

    /* MATLAB Function: '<S43>/Asse B conv v' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v': '<S45>:1' */
    /* '<S45>:1:2' */
    StateflowKalman_B.pos_B_conv_v = StateflowKalman_B.Sum3 * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S43>/Sum5' */
    StateflowKalman_B.Sum5 = StateflowKalman_B.pos_A_conv_c +
      StateflowKalman_B.pos_B_conv_v;

    /* Sum: '<S37>/Sum2' */
    StateflowKalman_B.Sum2_m = StateflowKalman_B.Clock - StateflowKalman_B.OffT;

    /* MATLAB Function: '<S11>/Rifermento Asse A Vite' incorporates:
     *  Constant: '<Root>/Alzata A'
     *  Constant: '<Root>/Periodo A'
     */
    /* MATLAB Function 'Sistema Vite/Rifermento Asse A Vite': '<S40>:1' */
    /* '<S40>:1:3' */
    /* '<S40>:1:4' */
    x4 = StateflowKalman_B.Sum2_m / StateflowKalman_P.PeriodoA_Value;

    /* '<S40>:1:5' */
    /* '<S40>:1:6' */
    if ((x4 >= 0.0) && (x4 < 0.3)) {
      /* '<S40>:1:8' */
      /* '<S40>:1:10' */
      F = 4.7619047619047619 * x4;

      /* '<S40>:1:11' */
      x1 = x4 * x4 * 4.7619047619047619 / 2.0;
    } else if ((x4 >= 0.3) && (x4 < 0.7)) {
      /* '<S40>:1:12' */
      /* '<S40>:1:14' */
      F = 1.4285714285714286;

      /* '<S40>:1:15' */
      x1 = (x4 - 0.3) * 1.4285714285714286 + 0.21428571428571427;
    } else if ((x4 >= 0.7) && (x4 <= 1.0)) {
      /* '<S40>:1:16' */
      /* '<S40>:1:18' */
      /* '<S40>:1:19' */
      F = 1.4285714285714286 - (x4 - 0.7) * 4.7619047619047619;

      /* '<S40>:1:20' */
      x1 = ((x4 - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x4 - 0.7) *
        (x4 - 0.7) * 4.7619047619047619 / 2.0;
    } else {
      /* '<S40>:1:23' */
      F = 0.0;

      /* '<S40>:1:24' */
      x1 = 1.0000000000000002;
    }

    /* '<S40>:1:27' */
    StateflowKalman_B.ldm_pos = x1 * StateflowKalman_P.AlzataA_Value;

    /* '<S40>:1:28' */
    StateflowKalman_B.ldm_vel = F * StateflowKalman_P.AlzataA_Value /
      StateflowKalman_P.PeriodoA_Value;

    /* End of MATLAB Function: '<S11>/Rifermento Asse A Vite' */

    /* Sum: '<S11>/Sum1' */
    StateflowKalman_B.Sum1 = StateflowKalman_B.ldm_pos - StateflowKalman_B.Sum5;

    /* Gain: '<S38>/Gain' */
    StateflowKalman_B.Gain = StateflowKalman_P.Gain_Gain_b *
      StateflowKalman_B.Sum1;

    /* S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[22];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S41>/Velocity A' */
    StateflowKalman_B.VelocityA_b = StateflowKalman_B.EtherCATPDOReceive14_j;

    /* S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[23];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S41>/Velocity B' */
    StateflowKalman_B.VelocityB_d = StateflowKalman_B.EtherCATPDOReceive15_k;

    /* MATLAB Function: '<S41>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse A conv': '<S46>:1' */
    /* '<S46>:1:2' */
    StateflowKalman_B.vel_A_conv_d = (StateflowKalman_B.VelocityA_b +
      StateflowKalman_B.VelocityB_d) * 0.02 / 6.2831853071795862 *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum8' */
    StateflowKalman_B.Sum8 = StateflowKalman_B.ldm_vel -
      StateflowKalman_B.vel_A_conv_d;

    /* Gain: '<S38>/Gain6' */
    StateflowKalman_B.Gain6 = StateflowKalman_P.Gain6_Gain *
      StateflowKalman_B.Sum8;

    /* Sum: '<S38>/Sum9' */
    StateflowKalman_B.Sum9_p = StateflowKalman_B.Gain + StateflowKalman_B.Gain6;

    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S30>/Constant'
     *  Switch: '<S7>/Switch'
     */
    if (StateflowKalman_B.Memory_n != 0.0) {
      StateflowKalman_B.Switch1_f = StateflowKalman_P.Constant_Value_e;
    } else {
      if (StateflowKalman_B.Bool > StateflowKalman_P.Switch_Threshold) {
        /* Gain: '<S7>/Gain' incorporates:
         *  Switch: '<S7>/Switch'
         */
        StateflowKalman_B.Gain_m = StateflowKalman_P.Gain_Gain_l *
          StateflowKalman_B.Sum9_p;

        /* Switch: '<S7>/Switch' */
        StateflowKalman_B.Switch = StateflowKalman_B.Gain_m;
      } else {
        /* Switch: '<S7>/Switch' */
        StateflowKalman_B.Switch = StateflowKalman_B.CoppiaH;
      }

      StateflowKalman_B.Switch1_f = StateflowKalman_B.Switch;
    }

    /* End of Switch: '<S30>/Switch1' */

    /* DataTypeConversion: '<S7>/Convert A' */
    b_a = floor(StateflowKalman_B.Switch1_f);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 65536.0);
    }

    StateflowKalman_B.ConvertA = (int16_T)(b_a < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-b_a : (int32_T)(int16_T)(uint16_T)b_a);

    /* End of DataTypeConversion: '<S7>/Convert A' */

    /* S-Function (xpcethercatpdotx): '<S7>/Torque send' */

    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[24];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S30>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S30>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[25];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S30>/Data Type Conversion14' */
    StateflowKalman_B.DataTypeConversion14_k =
      StateflowKalman_B.EtherCATPDOReceive9_hd;

    /* MATLAB Function: '<S30>/MATLAB Function' */
    StateflowKalman_MATLABFunction(StateflowKalman_B.Memory_n,
      StateflowKalman_B.DataTypeConversion14_k,
      &StateflowKalman_B.sf_MATLABFunction_f);

    /* Memory: '<S32>/Memory' */
    StateflowKalman_B.Memory_d = StateflowKalman_DW.Memory_PreviousInput_a;

    /* MATLAB Function: '<S11>/Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Asse B conv': '<S36>:1' */
    /* '<S36>:1:2' */
    StateflowKalman_B.pos_B_conv_p = StateflowKalman_B.Sum3 * 3.1415926535897931
      / 2048.0 / 40.0;

    /* MATLAB Function: '<S11>/Asse B' incorporates:
     *  Constant: '<Root>/Alzata B '
     *  Constant: '<Root>/Periodo B'
     */
    /* MATLAB Function 'Sistema Vite/Asse B': '<S35>:1' */
    /* '<S35>:1:3' */
    /* '<S35>:1:4' */
    x4 = StateflowKalman_B.Sum2_m / StateflowKalman_P.PeriodoB_Value;

    /* '<S35>:1:5' */
    /* '<S35>:1:6' */
    if ((x4 >= 0.0) && (x4 < 0.3)) {
      /* '<S35>:1:8' */
      /* '<S35>:1:10' */
      F = 4.7619047619047619 * x4;

      /* '<S35>:1:11' */
      x1 = x4 * x4 * 4.7619047619047619 / 2.0;
    } else if ((x4 >= 0.3) && (x4 < 0.7)) {
      /* '<S35>:1:12' */
      /* '<S35>:1:14' */
      F = 1.4285714285714286;

      /* '<S35>:1:15' */
      x1 = (x4 - 0.3) * 1.4285714285714286 + 0.21428571428571427;
    } else if ((x4 >= 0.7) && (x4 <= 1.0)) {
      /* '<S35>:1:16' */
      /* '<S35>:1:18' */
      /* '<S35>:1:19' */
      F = 1.4285714285714286 - (x4 - 0.7) * 4.7619047619047619;

      /* '<S35>:1:20' */
      x1 = ((x4 - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x4 - 0.7) *
        (x4 - 0.7) * 4.7619047619047619 / 2.0;
    } else {
      /* '<S35>:1:23' */
      F = 0.0;

      /* '<S35>:1:24' */
      x1 = 1.0000000000000002;
    }

    /* '<S35>:1:27' */
    StateflowKalman_B.ldm_pos_n = x1 * StateflowKalman_P.AlzataB_Value;

    /* '<S35>:1:28' */
    StateflowKalman_B.ldm_vel_c = F * StateflowKalman_P.AlzataB_Value /
      StateflowKalman_P.PeriodoB_Value;

    /* End of MATLAB Function: '<S11>/Asse B' */

    /* Sum: '<S11>/Sum4' */
    StateflowKalman_B.Sum4_l = StateflowKalman_B.ldm_pos_n -
      StateflowKalman_B.pos_B_conv_p;

    /* Gain: '<S11>/Gain2' */
    StateflowKalman_B.Gain2 = StateflowKalman_P.Gain2_Gain *
      StateflowKalman_B.Sum4_l;

    /* MATLAB Function: '<S41>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse B conv': '<S47>:1' */
    /* '<S47>:1:2' */
    StateflowKalman_B.vel_B_conv_d = StateflowKalman_B.VelocityB_d *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum6' */
    StateflowKalman_B.Sum6 = StateflowKalman_B.ldm_vel_c -
      StateflowKalman_B.vel_B_conv_d;

    /* Gain: '<S11>/Gain4' */
    StateflowKalman_B.Gain4 = StateflowKalman_P.Gain4_Gain *
      StateflowKalman_B.Sum6;

    /* Sum: '<S11>/Sum7' */
    StateflowKalman_B.Sum7_n = StateflowKalman_B.Gain2 + StateflowKalman_B.Gain4;

    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S32>/Constant'
     *  Switch: '<S8>/Switch2'
     */
    if (StateflowKalman_B.Memory_d != 0.0) {
      StateflowKalman_B.Switch1_h = StateflowKalman_P.Constant_Value_p;
    } else {
      if (StateflowKalman_B.Bool > StateflowKalman_P.Switch2_Threshold) {
        /* Switch: '<S8>/Switch2' */
        StateflowKalman_B.Switch2 = StateflowKalman_B.Sum7_n;
      } else {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S8>/Constant1'
         */
        StateflowKalman_B.Switch2 = StateflowKalman_P.Constant1_Value_e;
      }

      StateflowKalman_B.Switch1_h = StateflowKalman_B.Switch2;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Saturate: '<S8>/Coppia A vite saturata' */
    G1 = StateflowKalman_B.Switch1_h;
    F = StateflowKalman_P.CoppiaAvitesaturata_LowerSat;
    x1 = StateflowKalman_P.CoppiaAvitesaturata_UpperSat;
    if (G1 > x1) {
      StateflowKalman_B.CoppiaAvitesaturata = x1;
    } else if (G1 < F) {
      StateflowKalman_B.CoppiaAvitesaturata = F;
    } else {
      StateflowKalman_B.CoppiaAvitesaturata = G1;
    }

    /* End of Saturate: '<S8>/Coppia A vite saturata' */

    /* DataTypeConversion: '<S8>/Convert B' */
    b_a = floor(StateflowKalman_B.CoppiaAvitesaturata);
    if (rtIsNaN(b_a) || rtIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = fmod(b_a, 65536.0);
    }

    StateflowKalman_B.ConvertB = (int16_T)(b_a < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-b_a : (int32_T)(int16_T)(uint16_T)b_a);

    /* End of DataTypeConversion: '<S8>/Convert B' */

    /* S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */

    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[26];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S32>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S32>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[27];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S32>/Data Type Conversion14' */
    StateflowKalman_B.DataTypeConversion14_h =
      StateflowKalman_B.EtherCATPDOReceive9_m;

    /* MATLAB Function: '<S32>/MATLAB Function' */
    StateflowKalman_MATLABFunction(StateflowKalman_B.Memory_d,
      StateflowKalman_B.DataTypeConversion14_h,
      &StateflowKalman_B.sf_MATLABFunction_fb);

    /* SampleTimeMath: '<S39>/TSamp'
     *
     * About '<S39>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp = StateflowKalman_B.pos_B_conv_p *
      StateflowKalman_P.TSamp_WtEt;

    /* UnitDelay: '<S39>/UD' */
    StateflowKalman_B.Uk1 = StateflowKalman_DW.UD_DSTATE;

    /* Sum: '<S39>/Diff' */
    StateflowKalman_B.Diff = StateflowKalman_B.TSamp - StateflowKalman_B.Uk1;

    /* SampleTimeMath: '<S42>/TSamp'
     *
     * About '<S42>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_i = StateflowKalman_B.Sum5 *
      StateflowKalman_P.TSamp_WtEt_g;

    /* UnitDelay: '<S42>/UD' */
    StateflowKalman_B.Uk1_p = StateflowKalman_DW.UD_DSTATE_a;

    /* Sum: '<S42>/Diff' */
    StateflowKalman_B.Diff_l = StateflowKalman_B.TSamp_i -
      StateflowKalman_B.Uk1_p;

    /* MATLAB Function: '<S12>/Cinematica diretta' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta': '<S51>:1' */
    /* '<S51>:1:2' */
    /* '<S51>:1:3' */
    /* '<S51>:1:6' */
    x2 = sin(StateflowKalman_B.Sum7) - sin(StateflowKalman_B.Sum4);
    b_a = -0.18 - (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) *
      0.25;
    x2 = x2 * x2 * 0.0625 + b_a * b_a;

    /* '<S51>:1:7' */
    c_a = -0.18 - (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) *
      0.25;
    x1 = ((-0.18 - (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) *
           0.25) * ((sin(StateflowKalman_B.Sum7) - sin(StateflowKalman_B.Sum4)) *
                    0.25) * (-0.18 - 0.5 * cos(StateflowKalman_B.Sum7)) + (sin
           (StateflowKalman_B.Sum7) - sin(StateflowKalman_B.Sum4)) * -0.01125 *
          (cos(StateflowKalman_B.Sum7) + cos(StateflowKalman_B.Sum4))) - 0.5 *
      sin(StateflowKalman_B.Sum7) * (c_a * c_a);

    /* '<S51>:1:10' */
    x4 = cos(StateflowKalman_B.Sum7) + cos(StateflowKalman_B.Sum4);
    x5 = -0.18 - (cos(StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) *
      0.25;

    /*  Posizione Y end-effector */
    /* '<S51>:1:14' */
    x2 = (sqrt(x1 * x1 - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
               (StateflowKalman_B.Sum7) - cos(StateflowKalman_B.Sum4)) * 0.25) *
             ((cos(StateflowKalman_B.Sum7) + cos(StateflowKalman_B.Sum4)) *
              0.0225) * (-0.18 - 0.5 * cos(StateflowKalman_B.Sum7))) + (0.045 *
             cos(StateflowKalman_B.Sum7) + 0.0081) * (x5 * x5)) * (4.0 * x2)) +
          -x1) / (2.0 * x2);

    /*  Posizione X end-effector */
    /* '<S51>:1:16' */
    StateflowKalman_B.x_n = (x2 * 0.25 * (sin(StateflowKalman_B.Sum7) - sin
      (StateflowKalman_B.Sum4)) - (cos(StateflowKalman_B.Sum7) + cos
      (StateflowKalman_B.Sum4)) * 0.0225) / (-0.18 - (cos(StateflowKalman_B.Sum7)
      - cos(StateflowKalman_B.Sum4)) * 0.25);
    StateflowKalman_B.y_k = x2;

    /* DataTypeConversion: '<S57>/DataTypeConversionEnable' incorporates:
     *  Constant: '<S57>/Enable'
     */
    StateflowKalman_B.DataTypeConversionEnable = StateflowKalman_P.Enable_Value;

    /* Reshape: '<S57>/Reshapeu' */
    StateflowKalman_B.Reshapeu = StateflowKalman_B.vel_B_conv_b;

    /* RateTransition: '<S12>/Rate Transition' */
    StateflowKalman_B.RateTransition = StateflowKalman_B.Sum4;

    /* Reshape: '<S57>/Reshapey' */
    StateflowKalman_B.Reshapey = StateflowKalman_B.RateTransition;

    /* DataTypeConversion: '<S126>/Conversion' incorporates:
     *  Constant: '<S57>/D'
     */
    StateflowKalman_B.Conversion_a = StateflowKalman_P.D_Value;

    /* DataTypeConversion: '<S161>/Conversion' incorporates:
     *  Constant: '<S121>/KalmanGainM'
     */
    StateflowKalman_B.Conversion[0] = StateflowKalman_P.KalmanGainM_Value[0];

    /* DataTypeConversion: '<S125>/Conversion' incorporates:
     *  Constant: '<S57>/C'
     */
    StateflowKalman_B.Conversion_f[0] = StateflowKalman_P.C_Value[0];

    /* DataTypeConversion: '<S136>/Conversion' incorporates:
     *  Constant: '<S57>/X0'
     */
    StateflowKalman_B.Conversion_p[0] = StateflowKalman_P.X0_Value[0];

    /* Reshape: '<S57>/ReshapeX0' */
    StateflowKalman_B.ReshapeX0[0] = StateflowKalman_B.Conversion_p[0];

    /* DataTypeConversion: '<S161>/Conversion' incorporates:
     *  Constant: '<S121>/KalmanGainM'
     */
    StateflowKalman_B.Conversion[1] = StateflowKalman_P.KalmanGainM_Value[1];

    /* DataTypeConversion: '<S125>/Conversion' incorporates:
     *  Constant: '<S57>/C'
     */
    StateflowKalman_B.Conversion_f[1] = StateflowKalman_P.C_Value[1];

    /* DataTypeConversion: '<S136>/Conversion' incorporates:
     *  Constant: '<S57>/X0'
     */
    StateflowKalman_B.Conversion_p[1] = StateflowKalman_P.X0_Value[1];

    /* Reshape: '<S57>/ReshapeX0' */
    StateflowKalman_B.ReshapeX0[1] = StateflowKalman_B.Conversion_p[1];

    /* Delay: '<S57>/MemoryX' */
    if (StateflowKalman_DW.icLoad != 0) {
      StateflowKalman_DW.MemoryX_DSTATE[0] = StateflowKalman_B.ReshapeX0[0];
      StateflowKalman_DW.MemoryX_DSTATE[1] = StateflowKalman_B.ReshapeX0[1];
    }

    StateflowKalman_B.MemoryX[0] = StateflowKalman_DW.MemoryX_DSTATE[0];
    StateflowKalman_B.MemoryX[1] = StateflowKalman_DW.MemoryX_DSTATE[1];

    /* End of Delay: '<S57>/MemoryX' */

    /* Outputs for Atomic SubSystem: '<S57>/UseCurrentEstimator' */
    StateflowKa_UseCurrentEstimator(StateflowKalman_B.DataTypeConversionEnable,
      StateflowKalman_B.Conversion, StateflowKalman_B.Reshapeu,
      StateflowKalman_B.Reshapey, StateflowKalman_B.Conversion_f,
      StateflowKalman_B.Conversion_a, StateflowKalman_B.MemoryX,
      &StateflowKalman_B.UseCurrentEstimator,
      &StateflowKalman_DW.UseCurrentEstimator, (P_UseCurrentEstimator_Statefl_T *)
      &StateflowKalman_P.UseCurrentEstimator);

    /* End of Outputs for SubSystem: '<S57>/UseCurrentEstimator' */

    /* Reshape: '<S57>/Reshapexhat' */
    StateflowKalman_B.Reshapexhat[0] =
      StateflowKalman_B.UseCurrentEstimator.Add[0];
    StateflowKalman_B.Reshapexhat[1] =
      StateflowKalman_B.UseCurrentEstimator.Add[1];

    /* Memory: '<S12>/Memory2' */
    StateflowKalman_B.Memory2[0] = StateflowKalman_DW.Memory2_PreviousInput[0];
    StateflowKalman_B.Memory2[1] = StateflowKalman_DW.Memory2_PreviousInput[1];
    StateflowKalman_B.Memory2[2] = StateflowKalman_DW.Memory2_PreviousInput[2];
    StateflowKalman_B.Memory2[3] = StateflowKalman_DW.Memory2_PreviousInput[3];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    x2 = StateflowKalman_B.Cm1;
    G1 = StateflowKalman_B.Cm2;

    /* MATLAB Function 'Sistema_braccia/MATLAB Function3': '<S62>:1' */
    /* '<S62>:1:21' */
    /* '<S62>:1:8' */
    /*  velocit&#xE0; [asse B, asse A] */
    /* '<S62>:1:8' */
    /*  Calcolo phi e F */
    if (StateflowKalman_B.Bool >= 4.0) {
      /* '<S62>:1:11' */
      /* '<S62>:1:14' */
      /* '<S62>:1:15' */
      /* '<S62>:1:21' */
      /* '<S62>:1:22' */
      /* '<S62>:1:24' */
      /* '<S62>:1:25' */
      /* '<S62>:1:1' */
      /* '<S62>:1:13' */
      for (i = 0; i < 4; i++) {
        /* '<S62>:1:13' */
        /* '<S62>:1:14' */
        c_a = StateflowKalman_B.Memory2[0];
        x5 = StateflowKalman_B.Memory2[2];
        x4 = StateflowKalman_B.Memory2[1];
        T5 = StateflowKalman_B.Memory2[3];
        JE[0] = (real_T)Ident[i << 2] * 1.0E-6 + c_a;
        JE[1] = (real_T)Ident[(i << 2) + 1] * 1.0E-6 + x4;
        JE[2] = (real_T)Ident[(i << 2) + 2] * 1.0E-6 + x5;
        JE[3] = (real_T)Ident[(i << 2) + 3] * 1.0E-6 + T5;

        /* '<S62>:1:15' */
        c_a = StateflowKalman_B.Memory2[0];
        x5 = StateflowKalman_B.Memory2[2];
        x4 = StateflowKalman_B.Memory2[1];
        T5 = StateflowKalman_B.Memory2[3];
        fm[0] = c_a - (real_T)Ident[i << 2] * 1.0E-6;
        fm[1] = x4 - (real_T)Ident[(i << 2) + 1] * 1.0E-6;
        fm[2] = x5 - (real_T)Ident[(i << 2) + 2] * 1.0E-6;
        fm[3] = T5 - (real_T)Ident[(i << 2) + 3] * 1.0E-6;

        /* '<S62>:1:17' */
        StateflowKalman_DinamicaKalman(JE, J1, J2);

        /* '<S62>:1:18' */
        StateflowKalman_DinamicaKalman(fm, J3, J4);

        /* '<S62>:1:21' */
        StateflowKalman_mpower_b(J1, J);
        F = J[0];
        F = -F;
        J[0] = F;
        F = J[1];
        F = -F;
        J[1] = F;
        F = J[2];
        F = -F;
        J[2] = F;
        F = J[3];
        F = -F;
        J[3] = F;
        StateflowKalman_mpower_b(J1, J_p);
        b_a_0[0] = 0.0;
        b_a_0[2] = J_p[0];
        b_a_0[1] = 0.0;
        b_a_0[3] = J_p[1];
        b_a_0[4] = 0.0;
        b_a_0[6] = J_p[2];
        b_a_0[5] = 0.0;
        b_a_0[7] = J_p[3];

        /* '<S62>:1:22' */
        StateflowKalman_mpower_b(J3, J1);
        F = J1[0];
        F = -F;
        J1[0] = F;
        F = J1[1];
        F = -F;
        J1[1] = F;
        F = J1[2];
        F = -F;
        J1[2] = F;
        F = J1[3];
        F = -F;
        J1[3] = F;
        StateflowKalman_mpower_b(J3, J_p);

        /* '<S62>:1:24' */
        /* '<S62>:1:25' */
        /* '<S62>:1:27' */
        for (bitIdx = 0; bitIdx < 2; bitIdx++) {
          J3[bitIdx] = 0.0;
          F = J3[bitIdx];
          F += J[bitIdx] * J2[0];
          J3[bitIdx] = F;
          F = J3[bitIdx];
          F += J[bitIdx + 2] * J2[1];
          J3[bitIdx] = F;
          J3[bitIdx + 2] = 0.0;
          F = J3[bitIdx + 2];
          F += J[bitIdx] * J2[2];
          J3[bitIdx + 2] = F;
          F = J3[bitIdx + 2];
          F += J[bitIdx + 2] * J2[3];
          J3[bitIdx + 2] = F;
        }

        for (bitIdx = 0; bitIdx < 4; bitIdx++) {
          b_0[bitIdx << 2] = b[bitIdx << 1];
          b_0[1 + (bitIdx << 2)] = b[(bitIdx << 1) + 1];
        }

        b_0[2] = 0.0;
        b_0[10] = J3[0];
        b_0[3] = 0.0;
        b_0[11] = J3[1];
        b_0[6] = 0.0;
        b_0[14] = J3[2];
        b_0[7] = 0.0;
        b_0[15] = J3[3];
        for (bitIdx = 0; bitIdx < 4; bitIdx++) {
          F = b_0[bitIdx] * JE[0];
          F += b_0[bitIdx + 4] * JE[1];
          F += b_0[bitIdx + 8] * JE[2];
          F += b_0[bitIdx + 12] * JE[3];
          b_a = b_a_0[bitIdx] * x2;
          b_a += b_a_0[bitIdx + 4] * G1;
          J[bitIdx] = F;
          J2[bitIdx] = b_a;
        }

        for (bitIdx = 0; bitIdx < 2; bitIdx++) {
          J3[bitIdx] = 0.0;
          F = J3[bitIdx];
          F += J1[bitIdx] * J4[0];
          J3[bitIdx] = F;
          F = J3[bitIdx];
          F += J1[bitIdx + 2] * J4[1];
          J3[bitIdx] = F;
          J3[bitIdx + 2] = 0.0;
          F = J3[bitIdx + 2];
          F += J1[bitIdx] * J4[2];
          J3[bitIdx + 2] = F;
          F = J3[bitIdx + 2];
          F += J1[bitIdx + 2] * J4[3];
          J3[bitIdx + 2] = F;
        }

        for (bitIdx = 0; bitIdx < 4; bitIdx++) {
          b_0[bitIdx << 2] = b[bitIdx << 1];
          b_0[1 + (bitIdx << 2)] = b[(bitIdx << 1) + 1];
        }

        b_0[2] = 0.0;
        b_0[10] = J3[0];
        tmp_6[0] = 0.0;
        tmp_6[2] = J_p[0];
        b_0[3] = 0.0;
        b_0[11] = J3[1];
        tmp_6[1] = 0.0;
        tmp_6[3] = J_p[1];
        b_0[6] = 0.0;
        b_0[14] = J3[2];
        tmp_6[4] = 0.0;
        tmp_6[6] = J_p[2];
        b_0[7] = 0.0;
        b_0[15] = J3[3];
        tmp_6[5] = 0.0;
        tmp_6[7] = J_p[3];
        for (bitIdx = 0; bitIdx < 4; bitIdx++) {
          F = b_0[bitIdx] * fm[0];
          F += b_0[bitIdx + 4] * fm[1];
          F += b_0[bitIdx + 8] * fm[2];
          F += b_0[bitIdx + 12] * fm[3];
          b_a = tmp_6[bitIdx] * x2;
          b_a += tmp_6[bitIdx + 4] * G1;
          StateflowKalman_B.F[bitIdx + (i << 2)] = (((J[bitIdx] + J2[bitIdx]) *
            0.001 + JE[bitIdx]) - ((F + b_a) * 0.001 + fm[bitIdx])) / 2.0E-6;
        }
      }
    } else {
      /* '<S62>:1:31' */
      memset(&StateflowKalman_B.F[0], 0, sizeof(real_T) << 4U);
    }

    /* End of MATLAB Function: '<S12>/MATLAB Function3' */
    for (i = 0; i < 16; i++) {
      /* Memory: '<S12>/Memory' */
      StateflowKalman_B.Memory_dw[i] =
        StateflowKalman_DW.Memory_PreviousInput_j[i];

      /* MATLAB Function: '<S12>/MATLAB Function4' */
      StateflowKalman_B.H[i] = tmp[i];
    }

    /* MATLAB Function: '<S12>/MATLAB Function4' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function4': '<S63>:1' */
    /* '<S63>:1:4' */
    /* '<S63>:1:2' */
    /* '<S63>:1:3' */
    /* '<S63>:1:4' */
    if (StateflowKalman_B.Bool >= 4.0) {
      /* '<S63>:1:6' */
      /* '<S63>:1:7' */
      for (bitIdx = 0; bitIdx < 4; bitIdx++) {
        for (i = 0; i < 4; i++) {
          y_0[bitIdx + (i << 2)] = 0.0;
          b_0[bitIdx + (i << 2)] = 0.0;
          b_a = b_0[(i << 2) + bitIdx];
          x2 = y_0[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.Memory_dw[i << 2] * StateflowKalman_B.F[bitIdx];
          b_a += StateflowKalman_B.Memory_dw[i << 2] *
            StateflowKalman_B.H[bitIdx];
          y_0[bitIdx + (i << 2)] = x2;
          b_0[bitIdx + (i << 2)] = b_a;
          b_a = b_0[(i << 2) + bitIdx];
          x2 = y_0[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.Memory_dw[(i << 2) + 1] *
            StateflowKalman_B.F[bitIdx + 4];
          b_a += StateflowKalman_B.Memory_dw[(i << 2) + 1] *
            StateflowKalman_B.H[bitIdx + 4];
          y_0[bitIdx + (i << 2)] = x2;
          b_0[bitIdx + (i << 2)] = b_a;
          b_a = b_0[(i << 2) + bitIdx];
          x2 = y_0[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.Memory_dw[(i << 2) + 2] *
            StateflowKalman_B.F[bitIdx + 8];
          b_a += StateflowKalman_B.Memory_dw[(i << 2) + 2] *
            StateflowKalman_B.H[bitIdx + 8];
          y_0[bitIdx + (i << 2)] = x2;
          b_0[bitIdx + (i << 2)] = b_a;
          b_a = b_0[(i << 2) + bitIdx];
          x2 = y_0[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.Memory_dw[(i << 2) + 3] *
            StateflowKalman_B.F[bitIdx + 12];
          b_a += StateflowKalman_B.Memory_dw[(i << 2) + 3] *
            StateflowKalman_B.H[bitIdx + 12];
          y_0[bitIdx + (i << 2)] = x2;
          b_0[bitIdx + (i << 2)] = b_a;
        }

        for (i = 0; i < 4; i++) {
          b_a = StateflowKalman_B.H[i << 2] * b_0[bitIdx];
          b_a += StateflowKalman_B.H[(i << 2) + 1] * b_0[bitIdx + 4];
          b_a += StateflowKalman_B.H[(i << 2) + 2] * b_0[bitIdx + 8];
          b_a += StateflowKalman_B.H[(i << 2) + 3] * b_0[bitIdx + 12];
          a[bitIdx + (i << 2)] = b_a + 1.0E-5;
        }
      }

      StateflowKalman_invNxN(a, c);

      /* '<S63>:1:9' */
      for (bitIdx = 0; bitIdx < 4; bitIdx++) {
        for (i = 0; i < 4; i++) {
          y_2[bitIdx + (i << 2)] = 0.0;
          x2 = y_2[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.H[i << 2] * y_0[bitIdx];
          y_2[bitIdx + (i << 2)] = x2;
          x2 = y_2[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.H[(i << 2) + 1] * y_0[bitIdx + 4];
          y_2[bitIdx + (i << 2)] = x2;
          x2 = y_2[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.H[(i << 2) + 2] * y_0[bitIdx + 8];
          y_2[bitIdx + (i << 2)] = x2;
          x2 = y_2[(i << 2) + bitIdx];
          x2 += StateflowKalman_B.H[(i << 2) + 3] * y_0[bitIdx + 12];
          y_2[bitIdx + (i << 2)] = x2;
        }

        for (i = 0; i < 4; i++) {
          StateflowKalman_B.K[bitIdx + (i << 2)] = 0.0;
          b_0[bitIdx + (i << 2)] = 0.0;
          a[bitIdx + (i << 2)] = 0.0;
          b_a = a[(i << 2) + bitIdx];
          i_a = b_0[(i << 2) + bitIdx];
          StateflowKalman_B.K[bitIdx + (i << 2)] += c[i << 2] * y_2[bitIdx];
          i_a += StateflowKalman_B.Memory_dw[i << 2] *
            StateflowKalman_B.F[bitIdx];
          b_a += StateflowKalman_B.Memory_dw[i << 2] *
            StateflowKalman_B.H[bitIdx];
          b_0[bitIdx + (i << 2)] = i_a;
          a[bitIdx + (i << 2)] = b_a;
          b_a = a[(i << 2) + bitIdx];
          i_a = b_0[(i << 2) + bitIdx];
          StateflowKalman_B.K[bitIdx + (i << 2)] += c[(i << 2) + 1] * y_2[bitIdx
            + 4];
          i_a += StateflowKalman_B.Memory_dw[(i << 2) + 1] *
            StateflowKalman_B.F[bitIdx + 4];
          b_a += StateflowKalman_B.Memory_dw[(i << 2) + 1] *
            StateflowKalman_B.H[bitIdx + 4];
          b_0[bitIdx + (i << 2)] = i_a;
          a[bitIdx + (i << 2)] = b_a;
          b_a = a[(i << 2) + bitIdx];
          i_a = b_0[(i << 2) + bitIdx];
          StateflowKalman_B.K[bitIdx + (i << 2)] += c[(i << 2) + 2] * y_2[bitIdx
            + 8];
          i_a += StateflowKalman_B.Memory_dw[(i << 2) + 2] *
            StateflowKalman_B.F[bitIdx + 8];
          b_a += StateflowKalman_B.Memory_dw[(i << 2) + 2] *
            StateflowKalman_B.H[bitIdx + 8];
          b_0[bitIdx + (i << 2)] = i_a;
          a[bitIdx + (i << 2)] = b_a;
          b_a = a[(i << 2) + bitIdx];
          i_a = b_0[(i << 2) + bitIdx];
          StateflowKalman_B.K[bitIdx + (i << 2)] += c[(i << 2) + 3] * y_2[bitIdx
            + 12];
          i_a += StateflowKalman_B.Memory_dw[(i << 2) + 3] *
            StateflowKalman_B.F[bitIdx + 12];
          b_a += StateflowKalman_B.Memory_dw[(i << 2) + 3] *
            StateflowKalman_B.H[bitIdx + 12];
          b_0[bitIdx + (i << 2)] = i_a;
          a[bitIdx + (i << 2)] = b_a;
        }

        for (i = 0; i < 4; i++) {
          b_a = StateflowKalman_B.H[i << 2] * a[bitIdx];
          b_a += StateflowKalman_B.H[(i << 2) + 1] * a[bitIdx + 4];
          b_a += StateflowKalman_B.H[(i << 2) + 2] * a[bitIdx + 8];
          b_a += StateflowKalman_B.H[(i << 2) + 3] * a[bitIdx + 12];
          tmp_5[bitIdx + (i << 2)] = b_a + 1.0E-5;
        }
      }

      for (bitIdx = 0; bitIdx < 4; bitIdx++) {
        for (i = 0; i < 4; i++) {
          a[bitIdx + (i << 2)] = 0.0;
          y_0[bitIdx + (i << 2)] = 0.0;
          b_a = y_0[(i << 2) + bitIdx];
          i_a = a[(i << 2) + bitIdx];
          i_a += tmp_5[i << 2] * StateflowKalman_B.K[bitIdx];
          b_a += b_0[bitIdx] * StateflowKalman_B.F[i];
          a[bitIdx + (i << 2)] = i_a;
          y_0[bitIdx + (i << 2)] = b_a;
          b_a = y_0[(i << 2) + bitIdx];
          i_a = a[(i << 2) + bitIdx];
          i_a += tmp_5[(i << 2) + 1] * StateflowKalman_B.K[bitIdx + 4];
          b_a += b_0[bitIdx + 4] * StateflowKalman_B.F[i + 4];
          a[bitIdx + (i << 2)] = i_a;
          y_0[bitIdx + (i << 2)] = b_a;
          b_a = y_0[(i << 2) + bitIdx];
          i_a = a[(i << 2) + bitIdx];
          i_a += tmp_5[(i << 2) + 2] * StateflowKalman_B.K[bitIdx + 8];
          b_a += b_0[bitIdx + 8] * StateflowKalman_B.F[i + 8];
          a[bitIdx + (i << 2)] = i_a;
          y_0[bitIdx + (i << 2)] = b_a;
          b_a = y_0[(i << 2) + bitIdx];
          i_a = a[(i << 2) + bitIdx];
          i_a += tmp_5[(i << 2) + 3] * StateflowKalman_B.K[bitIdx + 12];
          b_a += b_0[bitIdx + 12] * StateflowKalman_B.F[i + 12];
          a[bitIdx + (i << 2)] = i_a;
          y_0[bitIdx + (i << 2)] = b_a;
        }

        for (i = 0; i < 4; i++) {
          c[bitIdx + (i << 2)] = 0.0;
          b_a = c[(i << 2) + bitIdx];
          b_a += a[bitIdx] * StateflowKalman_B.K[i];
          c[bitIdx + (i << 2)] = b_a;
          b_a = c[(i << 2) + bitIdx];
          b_a += a[bitIdx + 4] * StateflowKalman_B.K[i + 4];
          c[bitIdx + (i << 2)] = b_a;
          b_a = c[(i << 2) + bitIdx];
          b_a += a[bitIdx + 8] * StateflowKalman_B.K[i + 8];
          c[bitIdx + (i << 2)] = b_a;
          b_a = c[(i << 2) + bitIdx];
          b_a += a[bitIdx + 12] * StateflowKalman_B.K[i + 12];
          c[bitIdx + (i << 2)] = b_a;
        }
      }

      for (bitIdx = 0; bitIdx < 4; bitIdx++) {
        StateflowKalman_B.Pt1[bitIdx << 2] = (y_0[bitIdx << 2] - c[bitIdx << 2])
          + 1.0E-5;
        StateflowKalman_B.Pt1[1 + (bitIdx << 2)] = (y_0[(bitIdx << 2) + 1] - c
          [(bitIdx << 2) + 1]) + 1.0E-5;
        StateflowKalman_B.Pt1[2 + (bitIdx << 2)] = (y_0[(bitIdx << 2) + 2] - c
          [(bitIdx << 2) + 2]) + 1.0E-5;
        StateflowKalman_B.Pt1[3 + (bitIdx << 2)] = (y_0[(bitIdx << 2) + 3] - c
          [(bitIdx << 2) + 3]) + 1.0E-5;
      }
    } else {
      /* '<S63>:1:12' */
      /* '<S63>:1:13' */
      memset(&StateflowKalman_B.K[0], 0, sizeof(real_T) << 4U);
      memset(&StateflowKalman_B.Pt1[0], 0, sizeof(real_T) << 4U);
      StateflowKalman_B.Pt1[0] = 1.0;
      StateflowKalman_B.Pt1[5] = 1.0;
      StateflowKalman_B.Pt1[10] = 1.0;
      StateflowKalman_B.Pt1[15] = 1.0;
    }

    /* Memory: '<S12>/Memory1' */
    StateflowKalman_B.Memory1[0] = StateflowKalman_DW.Memory1_PreviousInput[0];
    StateflowKalman_B.Memory1[1] = StateflowKalman_DW.Memory1_PreviousInput[1];
    StateflowKalman_B.Memory1[2] = StateflowKalman_DW.Memory1_PreviousInput[2];
    StateflowKalman_B.Memory1[3] = StateflowKalman_DW.Memory1_PreviousInput[3];

    /* MATLAB Function: '<S12>/MATLAB Function5' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function5': '<S64>:1' */
    if (StateflowKalman_B.Bool >= 4.0) {
      /* '<S64>:1:3' */
      /* '<S64>:1:4' */
      for (bitIdx = 0; bitIdx < 4; bitIdx++) {
        b_a = StateflowKalman_B.F[bitIdx] * StateflowKalman_B.Memory2[0];
        i_a = StateflowKalman_B.K[bitIdx] * StateflowKalman_B.Memory1[0];
        b_a += StateflowKalman_B.F[bitIdx + 4] * StateflowKalman_B.Memory2[1];
        i_a += StateflowKalman_B.K[bitIdx + 4] * StateflowKalman_B.Memory1[1];
        b_a += StateflowKalman_B.F[bitIdx + 8] * StateflowKalman_B.Memory2[2];
        i_a += StateflowKalman_B.K[bitIdx + 8] * StateflowKalman_B.Memory1[2];
        b_a += StateflowKalman_B.F[bitIdx + 12] * StateflowKalman_B.Memory2[3];
        i_a += StateflowKalman_B.K[bitIdx + 12] * StateflowKalman_B.Memory1[3];
        StateflowKalman_B.xhatt1[bitIdx] = b_a + i_a;
      }

      /* '<S64>:1:6' */
      for (bitIdx = 0; bitIdx < 4; bitIdx++) {
        StateflowKalman_B.yhatt1[bitIdx] = 0.0;
        StateflowKalman_B.yhatt1[bitIdx] += StateflowKalman_B.H[bitIdx] *
          StateflowKalman_B.xhatt1[0];
        StateflowKalman_B.yhatt1[bitIdx] += StateflowKalman_B.H[bitIdx + 4] *
          StateflowKalman_B.xhatt1[1];
        StateflowKalman_B.yhatt1[bitIdx] += StateflowKalman_B.H[bitIdx + 8] *
          StateflowKalman_B.xhatt1[2];
        StateflowKalman_B.yhatt1[bitIdx] += StateflowKalman_B.H[bitIdx + 12] *
          StateflowKalman_B.xhatt1[3];
      }
    } else {
      /* '<S64>:1:8' */
      /* '<S64>:1:9' */
      StateflowKalman_B.xhatt1[0] = 1.7453292519943295;
      StateflowKalman_B.yhatt1[0] = 0.0;
      StateflowKalman_B.xhatt1[1] = 1.3962634015954636;
      StateflowKalman_B.yhatt1[1] = 0.0;
      StateflowKalman_B.xhatt1[2] = 0.0;
      StateflowKalman_B.yhatt1[2] = 0.0;
      StateflowKalman_B.xhatt1[3] = 0.0;
      StateflowKalman_B.yhatt1[3] = 0.0;
    }

    /* End of MATLAB Function: '<S12>/MATLAB Function5' */
    /* MATLAB Function: '<S12>/Cinematica diretta Acc' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta Acc': '<S52>:1' */
    /* '<S52>:1:3' */
    /* '<S52>:1:4' */
    /* '<S52>:1:6' */
    x2 = 0.25 * sin(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p;
    b_a = 0.25 * cos(StateflowKalman_B.theta2_j) * StateflowKalman_B.theta2_p;

    /* '<S52>:1:9' */
    c_a = 0.25 * sin(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p;
    x4 = 0.25 * cos(StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_p;
    x1 = ((((((0.5 * sin(StateflowKalman_B.theta1_l) *
               StateflowKalman_B.MultiportSwitch[2] * StateflowKalman_B.theta1_p
               + StateflowKalman_B.MultiportSwitch[2] *
               StateflowKalman_B.MultiportSwitch[2]) + c_a * c_a) + (0.25 * cos
              (StateflowKalman_B.theta1_l) * (StateflowKalman_B.theta1_p *
               StateflowKalman_B.theta1_p) + 0.25 * sin
              (StateflowKalman_B.theta1_l) * StateflowKalman_B.theta1_pp) *
             ((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos
              (StateflowKalman_B.theta1_l))) +
            StateflowKalman_B.MultiportSwitch[3] *
            StateflowKalman_B.MultiportSwitch[3]) - 0.5 * cos
           (StateflowKalman_B.theta1_l) * StateflowKalman_B.MultiportSwitch[3] *
           StateflowKalman_B.theta1_p) + x4 * x4) + (0.25 * sin
      (StateflowKalman_B.theta1_l) * (StateflowKalman_B.theta1_p *
      StateflowKalman_B.theta1_p) - 0.25 * cos(StateflowKalman_B.theta1_l) *
      StateflowKalman_B.theta1_pp) * (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta1_l));

    /* '<S52>:1:12' */
    G1 = (((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos
           (StateflowKalman_B.theta2_j)) * x1 / ((StateflowKalman_B.Xmov + 0.09)
           - 0.25 * cos(StateflowKalman_B.theta1_l)) - (((((((0.5 * sin
      (StateflowKalman_B.theta2_j) * StateflowKalman_B.MultiportSwitch[2] *
      StateflowKalman_B.theta2_p + StateflowKalman_B.MultiportSwitch[2] *
      StateflowKalman_B.MultiportSwitch[2]) + x2 * x2) + (0.25 * cos
                (StateflowKalman_B.theta2_j) * (StateflowKalman_B.theta2_p *
      StateflowKalman_B.theta2_p) + 0.25 * sin(StateflowKalman_B.theta2_j) *
                StateflowKalman_B.theta2_pp) * ((StateflowKalman_B.Xmov - 0.09)
                - 0.25 * cos(StateflowKalman_B.theta2_j))) +
              StateflowKalman_B.MultiportSwitch[3] *
              StateflowKalman_B.MultiportSwitch[3]) - 0.5 * cos
             (StateflowKalman_B.theta2_j) * StateflowKalman_B.MultiportSwitch[3]
             * StateflowKalman_B.theta2_p) + b_a * b_a) + (0.25 * sin
            (StateflowKalman_B.theta2_j) * (StateflowKalman_B.theta2_p *
             StateflowKalman_B.theta2_p) - 0.25 * cos(StateflowKalman_B.theta2_j)
            * StateflowKalman_B.theta2_pp) * (StateflowKalman_B.Ymov - 0.25 *
            sin(StateflowKalman_B.theta2_j)))) / ((StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta2_j)) - ((StateflowKalman_B.Xmov - 0.09) -
      0.25 * cos(StateflowKalman_B.theta2_j)) / ((StateflowKalman_B.Xmov + 0.09)
      - 0.25 * cos(StateflowKalman_B.theta1_l)) * (StateflowKalman_B.Ymov - 0.25
      * sin(StateflowKalman_B.theta1_l)));

    /* '<S52>:1:14' */
    StateflowKalman_B.x_pp_f = ((StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta1_l)) * -G1 - x1) / ((StateflowKalman_B.Xmov +
      0.09) - 0.25 * cos(StateflowKalman_B.theta1_l));
    StateflowKalman_B.y_pp_l = G1;

    /* Sum: '<S12>/Sum2' */
    StateflowKalman_B.Sum2_d = StateflowKalman_B.x_pp_f -
      StateflowKalman_B.MultiportSwitch[4];

    /* Sum: '<S12>/Sum3' */
    StateflowKalman_B.Sum3_b = StateflowKalman_B.y_pp_l -
      StateflowKalman_B.MultiportSwitch[5];

    /* MATLAB Function: '<S12>/MATLAB Function2' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function2': '<S61>:1' */
    if (StateflowKalman_B.Bool == 4.0) {
      /* '<S61>:1:2' */
      /* '<S61>:1:3' */
      StateflowKalman_B.xp = StateflowKalman_B.x_n;

      /* '<S61>:1:4' */
      StateflowKalman_B.yp = StateflowKalman_B.y_k;
    } else {
      /* '<S61>:1:6' */
      StateflowKalman_B.xp = 0.0;

      /* '<S61>:1:7' */
      StateflowKalman_B.yp = 0.0;
    }

    /* End of MATLAB Function: '<S12>/MATLAB Function2' */

    /* DataTypeConversion: '<S115>/Conversion' incorporates:
     *  Constant: '<S76>/KalmanGainL'
     */
    StateflowKalman_B.Conversion_c[0] = StateflowKalman_P.KalmanGainL_Value[0];

    /* DataTypeConversion: '<S116>/Conversion' incorporates:
     *  Constant: '<S76>/KalmanGainM'
     */
    StateflowKalman_B.Conversion_j[0] = StateflowKalman_P.KalmanGainM_Value_n[0];

    /* DataTypeConversion: '<S115>/Conversion' incorporates:
     *  Constant: '<S76>/KalmanGainL'
     */
    StateflowKalman_B.Conversion_c[1] = StateflowKalman_P.KalmanGainL_Value[1];

    /* DataTypeConversion: '<S116>/Conversion' incorporates:
     *  Constant: '<S76>/KalmanGainM'
     */
    StateflowKalman_B.Conversion_j[1] = StateflowKalman_P.KalmanGainM_Value_n[1];

    /* DataTypeConversion: '<S117>/Conversion' incorporates:
     *  Constant: '<S76>/ConstantP'
     */
    StateflowKalman_B.Conversion_j0 = StateflowKalman_P.ConstantP_Value;

    /* DataTypeConversion: '<S118>/Conversion' incorporates:
     *  Constant: '<S76>/CovarianceZ'
     */
    StateflowKalman_B.Conversion_k[0] = StateflowKalman_P.CovarianceZ_Value[0];
    StateflowKalman_B.Conversion_k[1] = StateflowKalman_P.CovarianceZ_Value[1];
    StateflowKalman_B.Conversion_k[2] = StateflowKalman_P.CovarianceZ_Value[2];
    StateflowKalman_B.Conversion_k[3] = StateflowKalman_P.CovarianceZ_Value[3];

    /* DataTypeConversion: '<S56>/DataTypeConversionEnable' incorporates:
     *  Constant: '<S56>/Enable'
     */
    StateflowKalman_B.DataTypeConversionEnable_i =
      StateflowKalman_P.Enable_Value_d;

    /* Reshape: '<S56>/Reshapeu' */
    StateflowKalman_B.Reshapeu_m = StateflowKalman_B.vel_A_conv_b;

    /* RateTransition: '<S12>/Rate Transition1' */
    StateflowKalman_B.RateTransition1 = StateflowKalman_B.Sum7;

    /* Reshape: '<S56>/Reshapey' */
    StateflowKalman_B.Reshapey_e = StateflowKalman_B.RateTransition1;

    /* DataTypeConversion: '<S81>/Conversion' incorporates:
     *  Constant: '<S56>/D'
     */
    StateflowKalman_B.Conversion_n = StateflowKalman_P.D_Value_e;

    /* DataTypeConversion: '<S80>/Conversion' incorporates:
     *  Constant: '<S56>/C'
     */
    StateflowKalman_B.Conversion_g[0] = StateflowKalman_P.C_Value_j[0];

    /* DataTypeConversion: '<S91>/Conversion' incorporates:
     *  Constant: '<S56>/X0'
     */
    StateflowKalman_B.Conversion_m[0] = StateflowKalman_P.X0_Value_o[0];

    /* Reshape: '<S56>/ReshapeX0' */
    StateflowKalman_B.ReshapeX0_i[0] = StateflowKalman_B.Conversion_m[0];

    /* DataTypeConversion: '<S80>/Conversion' incorporates:
     *  Constant: '<S56>/C'
     */
    StateflowKalman_B.Conversion_g[1] = StateflowKalman_P.C_Value_j[1];

    /* DataTypeConversion: '<S91>/Conversion' incorporates:
     *  Constant: '<S56>/X0'
     */
    StateflowKalman_B.Conversion_m[1] = StateflowKalman_P.X0_Value_o[1];

    /* Reshape: '<S56>/ReshapeX0' */
    StateflowKalman_B.ReshapeX0_i[1] = StateflowKalman_B.Conversion_m[1];

    /* Delay: '<S56>/MemoryX' */
    if (StateflowKalman_DW.icLoad_d != 0) {
      StateflowKalman_DW.MemoryX_DSTATE_h[0] = StateflowKalman_B.ReshapeX0_i[0];
      StateflowKalman_DW.MemoryX_DSTATE_h[1] = StateflowKalman_B.ReshapeX0_i[1];
    }

    StateflowKalman_B.MemoryX_m[0] = StateflowKalman_DW.MemoryX_DSTATE_h[0];
    StateflowKalman_B.MemoryX_m[1] = StateflowKalman_DW.MemoryX_DSTATE_h[1];

    /* End of Delay: '<S56>/MemoryX' */

    /* Outputs for Atomic SubSystem: '<S56>/UseCurrentEstimator' */
    StateflowKa_UseCurrentEstimator(StateflowKalman_B.DataTypeConversionEnable_i,
      StateflowKalman_B.Conversion_j, StateflowKalman_B.Reshapeu_m,
      StateflowKalman_B.Reshapey_e, StateflowKalman_B.Conversion_g,
      StateflowKalman_B.Conversion_n, StateflowKalman_B.MemoryX_m,
      &StateflowKalman_B.UseCurrentEstimator_e,
      &StateflowKalman_DW.UseCurrentEstimator_e,
      (P_UseCurrentEstimator_Statefl_T *)
      &StateflowKalman_P.UseCurrentEstimator_e);

    /* End of Outputs for SubSystem: '<S56>/UseCurrentEstimator' */

    /* Product: '<S77>/Product' */
    b_a = StateflowKalman_B.Conversion_g[0];
    i_a = StateflowKalman_B.UseCurrentEstimator_e.Add[0];
    F = b_a * i_a;
    b_a = StateflowKalman_B.Conversion_g[1];
    i_a = StateflowKalman_B.UseCurrentEstimator_e.Add[1];
    F += b_a * i_a;
    StateflowKalman_B.Product = F;

    /* Product: '<S77>/Product1' */
    x2 = StateflowKalman_B.Conversion_n;
    G1 = StateflowKalman_B.Reshapeu_m;
    StateflowKalman_B.Product1 = x2 * G1;

    /* Sum: '<S77>/Add1' */
    StateflowKalman_B.Add1 = StateflowKalman_B.Product +
      StateflowKalman_B.Product1;

    /* DataTypeConversion: '<S78>/Conversion' incorporates:
     *  Constant: '<S56>/A'
     */
    StateflowKalman_B.Conversion_d[0] = StateflowKalman_P.A_Value[0];
    StateflowKalman_B.Conversion_d[1] = StateflowKalman_P.A_Value[1];
    StateflowKalman_B.Conversion_d[2] = StateflowKalman_P.A_Value[2];
    StateflowKalman_B.Conversion_d[3] = StateflowKalman_P.A_Value[3];

    /* DataTypeConversion: '<S79>/Conversion' incorporates:
     *  Constant: '<S56>/B'
     */
    StateflowKalman_B.Conversion_me[0] = StateflowKalman_P.B_Value[0];
    StateflowKalman_B.Conversion_me[1] = StateflowKalman_P.B_Value[1];

    /* DataTypeConversion: '<S82>/Conversion' incorporates:
     *  Constant: '<S56>/G'
     */
    StateflowKalman_B.Conversion_l[0] = StateflowKalman_P.G_Value[0];
    StateflowKalman_B.Conversion_l[1] = StateflowKalman_P.G_Value[1];
    StateflowKalman_B.Conversion_l[2] = StateflowKalman_P.G_Value[2];
    StateflowKalman_B.Conversion_l[3] = StateflowKalman_P.G_Value[3];

    /* DataTypeConversion: '<S83>/Conversion' incorporates:
     *  Constant: '<S56>/H'
     */
    StateflowKalman_B.Conversion_pk[0] = StateflowKalman_P.H_Value[0];

    /* DataTypeConversion: '<S84>/Conversion' incorporates:
     *  Constant: '<S56>/N'
     */
    StateflowKalman_B.Conversion_cs[0] = StateflowKalman_P.N_Value[0];

    /* DataTypeConversion: '<S83>/Conversion' incorporates:
     *  Constant: '<S56>/H'
     */
    StateflowKalman_B.Conversion_pk[1] = StateflowKalman_P.H_Value[1];

    /* DataTypeConversion: '<S84>/Conversion' incorporates:
     *  Constant: '<S56>/N'
     */
    StateflowKalman_B.Conversion_cs[1] = StateflowKalman_P.N_Value[1];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateflowKalman_B.Conversion_kg[0] = StateflowKalman_P.P0_Value[0];

    /* DataTypeConversion: '<S85>/Conversion' */
    StateflowKalman_B.Conversion_ks[0] = (real32_T)
      StateflowKalman_B.Conversion_kg[0];

    /* DataTypeConversion: '<S87>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateflowKalman_B.Conversion_px[0] = StateflowKalman_P.Q_Value[0];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateflowKalman_B.Conversion_kg[1] = StateflowKalman_P.P0_Value[1];

    /* DataTypeConversion: '<S85>/Conversion' */
    StateflowKalman_B.Conversion_ks[1] = (real32_T)
      StateflowKalman_B.Conversion_kg[1];

    /* DataTypeConversion: '<S87>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateflowKalman_B.Conversion_px[1] = StateflowKalman_P.Q_Value[1];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateflowKalman_B.Conversion_kg[2] = StateflowKalman_P.P0_Value[2];

    /* DataTypeConversion: '<S85>/Conversion' */
    StateflowKalman_B.Conversion_ks[2] = (real32_T)
      StateflowKalman_B.Conversion_kg[2];

    /* DataTypeConversion: '<S87>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateflowKalman_B.Conversion_px[2] = StateflowKalman_P.Q_Value[2];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateflowKalman_B.Conversion_kg[3] = StateflowKalman_P.P0_Value[3];

    /* DataTypeConversion: '<S85>/Conversion' */
    StateflowKalman_B.Conversion_ks[3] = (real32_T)
      StateflowKalman_B.Conversion_kg[3];

    /* DataTypeConversion: '<S87>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateflowKalman_B.Conversion_px[3] = StateflowKalman_P.Q_Value[3];

    /* DataTypeConversion: '<S88>/Conversion' incorporates:
     *  Constant: '<S56>/R'
     */
    StateflowKalman_B.Conversion_h = StateflowKalman_P.R_Value;

    /* DataTypeConversion: '<S89>/Conversion' incorporates:
     *  Constant: '<S56>/Reset'
     */
    StateflowKalman_B.Conversion_n2 = StateflowKalman_P.Reset_Value_f;

    /* DataTypeConversion: '<S90>/Conversion' */
    StateflowKalman_B.Conversion_i[0] = StateflowKalman_B.MemoryX_m[0];
    StateflowKalman_B.Conversion_i[1] = StateflowKalman_B.MemoryX_m[1];

    /* ManualSwitch: '<S56>/ManualSwitchPZ' */
    if (StateflowKalman_P.ManualSwitchPZ_CurrentSetting == 1) {
      StateflowKalman_B.ManualSwitchPZ[0] = StateflowKalman_B.Conversion_k[0];
      StateflowKalman_B.ManualSwitchPZ[1] = StateflowKalman_B.Conversion_k[1];
    } else {
      StateflowKalman_B.ManualSwitchPZ[0] = StateflowKalman_B.Conversion_kg[0];
      StateflowKalman_B.ManualSwitchPZ[1] = StateflowKalman_B.Conversion_kg[1];
    }

    /* Product: '<S94>/A[k]*xhat[k|k-1]' */
    J_p[0] = StateflowKalman_B.Conversion_d[0];
    J_p[1] = StateflowKalman_B.Conversion_d[1];

    /* ManualSwitch: '<S56>/ManualSwitchPZ' */
    if (StateflowKalman_P.ManualSwitchPZ_CurrentSetting == 1) {
      StateflowKalman_B.ManualSwitchPZ[2] = StateflowKalman_B.Conversion_k[2];
      StateflowKalman_B.ManualSwitchPZ[3] = StateflowKalman_B.Conversion_k[3];
    } else {
      StateflowKalman_B.ManualSwitchPZ[2] = StateflowKalman_B.Conversion_kg[2];
      StateflowKalman_B.ManualSwitchPZ[3] = StateflowKalman_B.Conversion_kg[3];
    }

    /* Product: '<S94>/A[k]*xhat[k|k-1]' */
    J_p[2] = StateflowKalman_B.Conversion_d[2];
    J_p[3] = StateflowKalman_B.Conversion_d[3];
    F = StateflowKalman_B.Conversion_i[0];
    x3 = StateflowKalman_B.Conversion_i[1];

    /* Product: '<S94>/B[k]*u[k]' */
    x2 = StateflowKalman_B.Reshapeu_m;

    /* Product: '<S94>/A[k]*xhat[k|k-1]' */
    c_a = J_p[0] * F;
    c_a += J_p[2] * x3;
    StateflowKalman_B.Akxhatkk1[0] = c_a;

    /* Product: '<S94>/B[k]*u[k]' */
    c_a = StateflowKalman_B.Conversion_me[0];
    StateflowKalman_B.Bkuk[0] = c_a * x2;

    /* Product: '<S94>/A[k]*xhat[k|k-1]' */
    x4 = J_p[1] * F;
    x4 += J_p[3] * x3;
    StateflowKalman_B.Akxhatkk1[1] = x4;

    /* Product: '<S94>/B[k]*u[k]' */
    x4 = StateflowKalman_B.Conversion_me[1];
    StateflowKalman_B.Bkuk[1] = x4 * x2;

    /* Outputs for Enabled SubSystem: '<S94>/MeasurementUpdate' */
    StateflowKalm_MeasurementUpdate(StateflowKalman_B.DataTypeConversionEnable_i,
      StateflowKalman_B.Conversion_c, StateflowKalman_B.Reshapey_e,
      StateflowKalman_B.Conversion_g, StateflowKalman_B.Conversion_i,
      StateflowKalman_B.Conversion_n, StateflowKalman_B.Reshapeu_m,
      &StateflowKalman_B.MeasurementUpdate,
      &StateflowKalman_DW.MeasurementUpdate, (P_MeasurementUpdate_Stateflow_T *)
      &StateflowKalman_P.MeasurementUpdate);

    /* End of Outputs for SubSystem: '<S94>/MeasurementUpdate' */

    /* Sum: '<S94>/Add' */
    StateflowKalman_B.Add[0] = (StateflowKalman_B.Bkuk[0] +
      StateflowKalman_B.Akxhatkk1[0]) +
      StateflowKalman_B.MeasurementUpdate.Product3[0];

    /* Reshape: '<S94>/Reshape' */
    StateflowKalman_B.Reshape[0] = StateflowKalman_B.Add[0];

    /* Reshape: '<S56>/Reshapexhat' */
    StateflowKalman_B.Reshapexhat_m[0] =
      StateflowKalman_B.UseCurrentEstimator_e.Add[0];

    /* Sum: '<S94>/Add' */
    StateflowKalman_B.Add[1] = (StateflowKalman_B.Bkuk[1] +
      StateflowKalman_B.Akxhatkk1[1]) +
      StateflowKalman_B.MeasurementUpdate.Product3[1];

    /* Reshape: '<S94>/Reshape' */
    StateflowKalman_B.Reshape[1] = StateflowKalman_B.Add[1];

    /* Reshape: '<S56>/Reshapexhat' */
    StateflowKalman_B.Reshapexhat_m[1] =
      StateflowKalman_B.UseCurrentEstimator_e.Add[1];

    /* Reshape: '<S56>/Reshapeyhat' */
    StateflowKalman_B.Reshapeyhat = StateflowKalman_B.Add1;

    /* DataTypeConversion: '<S160>/Conversion' incorporates:
     *  Constant: '<S121>/KalmanGainL'
     */
    StateflowKalman_B.Conversion_ky[0] = StateflowKalman_P.KalmanGainL_Value_m[0];
    StateflowKalman_B.Conversion_ky[1] = StateflowKalman_P.KalmanGainL_Value_m[1];

    /* DataTypeConversion: '<S162>/Conversion' incorporates:
     *  Constant: '<S121>/ConstantP'
     */
    StateflowKalman_B.Conversion_pq = StateflowKalman_P.ConstantP_Value_c;

    /* DataTypeConversion: '<S163>/Conversion' incorporates:
     *  Constant: '<S121>/CovarianceZ'
     */
    StateflowKalman_B.Conversion_f1[0] = StateflowKalman_P.CovarianceZ_Value_m[0];
    StateflowKalman_B.Conversion_f1[1] = StateflowKalman_P.CovarianceZ_Value_m[1];
    StateflowKalman_B.Conversion_f1[2] = StateflowKalman_P.CovarianceZ_Value_m[2];
    StateflowKalman_B.Conversion_f1[3] = StateflowKalman_P.CovarianceZ_Value_m[3];

    /* Product: '<S122>/Product' */
    b_a = StateflowKalman_B.Conversion_f[0];
    i_a = StateflowKalman_B.UseCurrentEstimator.Add[0];
    F = b_a * i_a;
    b_a = StateflowKalman_B.Conversion_f[1];
    i_a = StateflowKalman_B.UseCurrentEstimator.Add[1];
    F += b_a * i_a;
    StateflowKalman_B.Product_m = F;

    /* Product: '<S122>/Product1' */
    x2 = StateflowKalman_B.Conversion_a;
    G1 = StateflowKalman_B.Reshapeu;
    StateflowKalman_B.Product1_l = x2 * G1;

    /* Sum: '<S122>/Add1' */
    StateflowKalman_B.Add1_a = StateflowKalman_B.Product_m +
      StateflowKalman_B.Product1_l;

    /* DataTypeConversion: '<S123>/Conversion' incorporates:
     *  Constant: '<S57>/A'
     */
    StateflowKalman_B.Conversion_b[0] = StateflowKalman_P.A_Value_j[0];
    StateflowKalman_B.Conversion_b[1] = StateflowKalman_P.A_Value_j[1];
    StateflowKalman_B.Conversion_b[2] = StateflowKalman_P.A_Value_j[2];
    StateflowKalman_B.Conversion_b[3] = StateflowKalman_P.A_Value_j[3];

    /* DataTypeConversion: '<S124>/Conversion' incorporates:
     *  Constant: '<S57>/B'
     */
    StateflowKalman_B.Conversion_pt[0] = StateflowKalman_P.B_Value_i[0];
    StateflowKalman_B.Conversion_pt[1] = StateflowKalman_P.B_Value_i[1];

    /* DataTypeConversion: '<S127>/Conversion' incorporates:
     *  Constant: '<S57>/G'
     */
    StateflowKalman_B.Conversion_i1[0] = StateflowKalman_P.G_Value_m[0];
    StateflowKalman_B.Conversion_i1[1] = StateflowKalman_P.G_Value_m[1];
    StateflowKalman_B.Conversion_i1[2] = StateflowKalman_P.G_Value_m[2];
    StateflowKalman_B.Conversion_i1[3] = StateflowKalman_P.G_Value_m[3];

    /* DataTypeConversion: '<S128>/Conversion' incorporates:
     *  Constant: '<S57>/H'
     */
    StateflowKalman_B.Conversion_g3[0] = StateflowKalman_P.H_Value_h[0];

    /* DataTypeConversion: '<S129>/Conversion' incorporates:
     *  Constant: '<S57>/N'
     */
    StateflowKalman_B.Conversion_jd[0] = StateflowKalman_P.N_Value_m[0];

    /* DataTypeConversion: '<S128>/Conversion' incorporates:
     *  Constant: '<S57>/H'
     */
    StateflowKalman_B.Conversion_g3[1] = StateflowKalman_P.H_Value_h[1];

    /* DataTypeConversion: '<S129>/Conversion' incorporates:
     *  Constant: '<S57>/N'
     */
    StateflowKalman_B.Conversion_jd[1] = StateflowKalman_P.N_Value_m[1];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateflowKalman_B.Conversion_pv[0] = StateflowKalman_P.P0_Value_m[0];

    /* DataTypeConversion: '<S130>/Conversion' */
    StateflowKalman_B.Conversion_gp[0] = (real32_T)
      StateflowKalman_B.Conversion_pv[0];

    /* DataTypeConversion: '<S132>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateflowKalman_B.Conversion_d0[0] = StateflowKalman_P.Q_Value_n[0];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateflowKalman_B.Conversion_pv[1] = StateflowKalman_P.P0_Value_m[1];

    /* DataTypeConversion: '<S130>/Conversion' */
    StateflowKalman_B.Conversion_gp[1] = (real32_T)
      StateflowKalman_B.Conversion_pv[1];

    /* DataTypeConversion: '<S132>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateflowKalman_B.Conversion_d0[1] = StateflowKalman_P.Q_Value_n[1];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateflowKalman_B.Conversion_pv[2] = StateflowKalman_P.P0_Value_m[2];

    /* DataTypeConversion: '<S130>/Conversion' */
    StateflowKalman_B.Conversion_gp[2] = (real32_T)
      StateflowKalman_B.Conversion_pv[2];

    /* DataTypeConversion: '<S132>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateflowKalman_B.Conversion_d0[2] = StateflowKalman_P.Q_Value_n[2];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateflowKalman_B.Conversion_pv[3] = StateflowKalman_P.P0_Value_m[3];

    /* DataTypeConversion: '<S130>/Conversion' */
    StateflowKalman_B.Conversion_gp[3] = (real32_T)
      StateflowKalman_B.Conversion_pv[3];

    /* DataTypeConversion: '<S132>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateflowKalman_B.Conversion_d0[3] = StateflowKalman_P.Q_Value_n[3];

    /* DataTypeConversion: '<S133>/Conversion' incorporates:
     *  Constant: '<S57>/R'
     */
    StateflowKalman_B.Conversion_o = StateflowKalman_P.R_Value_o;

    /* DataTypeConversion: '<S134>/Conversion' incorporates:
     *  Constant: '<S57>/Reset'
     */
    StateflowKalman_B.Conversion_dw = StateflowKalman_P.Reset_Value_o;

    /* DataTypeConversion: '<S135>/Conversion' */
    StateflowKalman_B.Conversion_pc[0] = StateflowKalman_B.MemoryX[0];
    StateflowKalman_B.Conversion_pc[1] = StateflowKalman_B.MemoryX[1];

    /* ManualSwitch: '<S57>/ManualSwitchPZ' */
    if (StateflowKalman_P.ManualSwitchPZ_CurrentSetting_p == 1) {
      StateflowKalman_B.ManualSwitchPZ_l[0] = StateflowKalman_B.Conversion_f1[0];
      StateflowKalman_B.ManualSwitchPZ_l[1] = StateflowKalman_B.Conversion_f1[1];
    } else {
      StateflowKalman_B.ManualSwitchPZ_l[0] = StateflowKalman_B.Conversion_pv[0];
      StateflowKalman_B.ManualSwitchPZ_l[1] = StateflowKalman_B.Conversion_pv[1];
    }

    /* Product: '<S139>/A[k]*xhat[k|k-1]' */
    J_p[0] = StateflowKalman_B.Conversion_b[0];
    J_p[1] = StateflowKalman_B.Conversion_b[1];

    /* ManualSwitch: '<S57>/ManualSwitchPZ' */
    if (StateflowKalman_P.ManualSwitchPZ_CurrentSetting_p == 1) {
      StateflowKalman_B.ManualSwitchPZ_l[2] = StateflowKalman_B.Conversion_f1[2];
      StateflowKalman_B.ManualSwitchPZ_l[3] = StateflowKalman_B.Conversion_f1[3];
    } else {
      StateflowKalman_B.ManualSwitchPZ_l[2] = StateflowKalman_B.Conversion_pv[2];
      StateflowKalman_B.ManualSwitchPZ_l[3] = StateflowKalman_B.Conversion_pv[3];
    }

    /* Product: '<S139>/A[k]*xhat[k|k-1]' */
    J_p[2] = StateflowKalman_B.Conversion_b[2];
    J_p[3] = StateflowKalman_B.Conversion_b[3];
    F = StateflowKalman_B.Conversion_pc[0];
    x3 = StateflowKalman_B.Conversion_pc[1];

    /* Product: '<S139>/B[k]*u[k]' */
    x2 = StateflowKalman_B.Reshapeu;

    /* Product: '<S139>/A[k]*xhat[k|k-1]' */
    c_a = J_p[0] * F;
    c_a += J_p[2] * x3;
    StateflowKalman_B.Akxhatkk1_b[0] = c_a;

    /* Product: '<S139>/B[k]*u[k]' */
    c_a = StateflowKalman_B.Conversion_pt[0];
    StateflowKalman_B.Bkuk_b[0] = c_a * x2;

    /* Product: '<S139>/A[k]*xhat[k|k-1]' */
    x4 = J_p[1] * F;
    x4 += J_p[3] * x3;
    StateflowKalman_B.Akxhatkk1_b[1] = x4;

    /* Product: '<S139>/B[k]*u[k]' */
    x4 = StateflowKalman_B.Conversion_pt[1];
    StateflowKalman_B.Bkuk_b[1] = x4 * x2;

    /* Outputs for Enabled SubSystem: '<S139>/MeasurementUpdate' */
    StateflowKalm_MeasurementUpdate(StateflowKalman_B.DataTypeConversionEnable,
      StateflowKalman_B.Conversion_ky, StateflowKalman_B.Reshapey,
      StateflowKalman_B.Conversion_f, StateflowKalman_B.Conversion_pc,
      StateflowKalman_B.Conversion_a, StateflowKalman_B.Reshapeu,
      &StateflowKalman_B.MeasurementUpdate_a,
      &StateflowKalman_DW.MeasurementUpdate_a, (P_MeasurementUpdate_Stateflow_T *)
      &StateflowKalman_P.MeasurementUpdate_a);

    /* End of Outputs for SubSystem: '<S139>/MeasurementUpdate' */

    /* Sum: '<S139>/Add' */
    StateflowKalman_B.Add_f[0] = (StateflowKalman_B.Bkuk_b[0] +
      StateflowKalman_B.Akxhatkk1_b[0]) +
      StateflowKalman_B.MeasurementUpdate_a.Product3[0];

    /* Reshape: '<S139>/Reshape' */
    StateflowKalman_B.Reshape_c[0] = StateflowKalman_B.Add_f[0];

    /* Sum: '<S139>/Add' */
    StateflowKalman_B.Add_f[1] = (StateflowKalman_B.Bkuk_b[1] +
      StateflowKalman_B.Akxhatkk1_b[1]) +
      StateflowKalman_B.MeasurementUpdate_a.Product3[1];

    /* Reshape: '<S139>/Reshape' */
    StateflowKalman_B.Reshape_c[1] = StateflowKalman_B.Add_f[1];

    /* Reshape: '<S57>/Reshapeyhat' */
    StateflowKalman_B.Reshapeyhat_f = StateflowKalman_B.Add1_a;

    /* MATLAB Function: '<S12>/MATLAB Jin' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Jin': '<S65>:1' */
    /* '<S65>:1:3' */
    /* '<S65>:1:4' */
    /* '<S65>:1:6' */
    /* '<S65>:1:8' */
    /* '<S65>:1:10' */
    x2 = (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta1_l)) -
      (StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
      ((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos(StateflowKalman_B.theta1_l))
      / ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos(StateflowKalman_B.theta2_j));

    /* '<S65>:1:12' */
    x4 = (((StateflowKalman_B.Xmov + 0.09) - 0.25 * cos
           (StateflowKalman_B.theta1_l)) * (-0.25 * sin
           (StateflowKalman_B.theta1_l)) + (StateflowKalman_B.Ymov - 0.25 * sin
           (StateflowKalman_B.theta1_l)) * (0.25 * cos
           (StateflowKalman_B.theta1_l))) / x2;

    /* '<S65>:1:14' */
    x2 = ((StateflowKalman_B.Ymov - 0.25 * sin(StateflowKalman_B.theta2_j)) *
          (-0.25 * cos(StateflowKalman_B.theta2_j)) * ((StateflowKalman_B.Xmov +
            0.09) - 0.25 * cos(StateflowKalman_B.theta1_l)) /
          ((StateflowKalman_B.Xmov - 0.09) - 0.25 * cos
           (StateflowKalman_B.theta2_j)) + ((StateflowKalman_B.Xmov + 0.09) -
           0.25 * cos(StateflowKalman_B.theta1_l)) * (0.25 * sin
           (StateflowKalman_B.theta2_j))) / x2;

    /* '<S65>:1:16' */
    /* '<S65>:1:18' */
    /* '<S65>:1:20' */
    StateflowKalman_B.x_p = ((-(StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((StateflowKalman_B.Xmov - 0.09) - 0.25 *
      cos(StateflowKalman_B.theta2_j)) * x2 - 0.25 * sin
      (StateflowKalman_B.theta2_j)) + (StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((StateflowKalman_B.Xmov - 0.09) - 0.25 *
      cos(StateflowKalman_B.theta2_j)) * (0.25 * cos(StateflowKalman_B.theta2_j)))
      * StateflowKalman_B.theta2_p + -(StateflowKalman_B.Ymov - 0.25 * sin
      (StateflowKalman_B.theta2_j)) / ((StateflowKalman_B.Xmov - 0.09) - 0.25 *
      cos(StateflowKalman_B.theta2_j)) * x4 * StateflowKalman_B.theta1_p;

    /* '<S65>:1:21' */
    StateflowKalman_B.y_p = x4 * StateflowKalman_B.theta1_p + x2 *
      StateflowKalman_B.theta2_p;

    /* Gain: '<S66>/Integral Gain' */
    StateflowKalman_B.IntegralGain[0] = StateflowKalman_P.PIDController_I *
      StateflowKalman_B.q[0];
    StateflowKalman_B.IntegralGain[1] = StateflowKalman_P.PIDController_I *
      StateflowKalman_B.q[1];

    /* SampleTimeMath: '<S176>/TSamp'
     *
     * About '<S176>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_e = StateflowKalman_B.Sum7 *
      StateflowKalman_P.TSamp_WtEt_m;

    /* UnitDelay: '<S176>/UD' */
    StateflowKalman_B.Uk1_l = StateflowKalman_DW.UD_DSTATE_g;

    /* Sum: '<S176>/Diff' */
    StateflowKalman_B.Diff_f = StateflowKalman_B.TSamp_e -
      StateflowKalman_B.Uk1_l;

    /* Gain: '<S187>/D*u(k)' */
    StateflowKalman_B.Duk = StateflowKalman_P.Duk_Gain * StateflowKalman_B.Sum7;

    /* UnitDelay: '<S187>/Delay_x1' */
    StateflowKalman_B.x1k = StateflowKalman_DW.Delay_x1_DSTATE;

    /* Gain: '<S190>/C11' */
    StateflowKalman_B.C11 = StateflowKalman_P.C11_Gain * StateflowKalman_B.x1k;

    /* UnitDelay: '<S187>/Delay_x2' */
    StateflowKalman_B.x2k = StateflowKalman_DW.Delay_x2_DSTATE;

    /* Gain: '<S190>/C12' */
    StateflowKalman_B.C12 = StateflowKalman_P.C12_Gain * StateflowKalman_B.x2k;

    /* Sum: '<S190>/sum2' */
    StateflowKalman_B.sum2 = StateflowKalman_B.C11 + StateflowKalman_B.C12;

    /* Sum: '<S187>/C*X(k)+D*u(k)' */
    StateflowKalman_B.yk = StateflowKalman_B.Duk + StateflowKalman_B.sum2;

    /* SampleTimeMath: '<S174>/TSamp'
     *
     * About '<S174>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_n = StateflowKalman_B.yk *
      StateflowKalman_P.TSamp_WtEt_e;

    /* UnitDelay: '<S174>/UD' */
    StateflowKalman_B.Uk1_d = StateflowKalman_DW.UD_DSTATE_a3;

    /* Sum: '<S174>/Diff' */
    StateflowKalman_B.Diff_i = StateflowKalman_B.TSamp_n -
      StateflowKalman_B.Uk1_d;

    /* Gain: '<S188>/A11' */
    StateflowKalman_B.A11 = StateflowKalman_P.A11_Gain * StateflowKalman_B.x1k;

    /* Gain: '<S188>/A12' */
    StateflowKalman_B.A12 = StateflowKalman_P.A12_Gain * StateflowKalman_B.x2k;

    /* Gain: '<S188>/A21' */
    StateflowKalman_B.A21 = StateflowKalman_P.A21_Gain * StateflowKalman_B.x1k;

    /* Gain: '<S188>/A22' */
    StateflowKalman_B.A22 = StateflowKalman_P.A22_Gain * StateflowKalman_B.x2k;

    /* Sum: '<S188>/sum2' */
    StateflowKalman_B.sum2_n = StateflowKalman_B.A11 + StateflowKalman_B.A12;

    /* Sum: '<S188>/sum3' */
    StateflowKalman_B.sum3 = StateflowKalman_B.A21 + StateflowKalman_B.A22;

    /* Gain: '<S189>/B11' */
    StateflowKalman_B.B11 = StateflowKalman_P.B11_Gain * StateflowKalman_B.Sum7;

    /* Sum: '<S187>/A*x1(k) + B*u1(k) ' */
    StateflowKalman_B.x1k1 = StateflowKalman_B.sum2_n + StateflowKalman_B.B11;

    /* Gain: '<S189>/B21' */
    StateflowKalman_B.B21 = StateflowKalman_P.B21_Gain * StateflowKalman_B.Sum7;

    /* Sum: '<S187>/A*x2(k) + B*u2(k)' */
    StateflowKalman_B.x2k1 = StateflowKalman_B.sum3 + StateflowKalman_B.B21;

    /* Gain: '<S183>/D*u(k)' */
    StateflowKalman_B.Duk_h = StateflowKalman_P.Duk_Gain_h *
      StateflowKalman_B.Sum4;

    /* UnitDelay: '<S183>/Delay_x1' */
    StateflowKalman_B.x1k_a = StateflowKalman_DW.Delay_x1_DSTATE_g;

    /* Gain: '<S186>/C11' */
    StateflowKalman_B.C11_h = StateflowKalman_P.C11_Gain_n *
      StateflowKalman_B.x1k_a;

    /* UnitDelay: '<S183>/Delay_x2' */
    StateflowKalman_B.x2k_g = StateflowKalman_DW.Delay_x2_DSTATE_m;

    /* Gain: '<S186>/C12' */
    StateflowKalman_B.C12_e = StateflowKalman_P.C12_Gain_d *
      StateflowKalman_B.x2k_g;

    /* Sum: '<S186>/sum2' */
    StateflowKalman_B.sum2_k = StateflowKalman_B.C11_h + StateflowKalman_B.C12_e;

    /* Sum: '<S183>/C*X(k)+D*u(k)' */
    StateflowKalman_B.yk_i = StateflowKalman_B.Duk_h + StateflowKalman_B.sum2_k;

    /* SampleTimeMath: '<S175>/TSamp'
     *
     * About '<S175>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_h = StateflowKalman_B.yk_i *
      StateflowKalman_P.TSamp_WtEt_gz;

    /* UnitDelay: '<S175>/UD' */
    StateflowKalman_B.Uk1_b = StateflowKalman_DW.UD_DSTATE_j;

    /* Sum: '<S175>/Diff' */
    StateflowKalman_B.Diff_d = StateflowKalman_B.TSamp_h -
      StateflowKalman_B.Uk1_b;

    /* SampleTimeMath: '<S177>/TSamp'
     *
     * About '<S177>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_nd = StateflowKalman_B.Sum4 *
      StateflowKalman_P.TSamp_WtEt_gh;

    /* UnitDelay: '<S177>/UD' */
    StateflowKalman_B.Uk1_ll = StateflowKalman_DW.UD_DSTATE_f;

    /* Sum: '<S177>/Diff' */
    StateflowKalman_B.Diff_n = StateflowKalman_B.TSamp_nd -
      StateflowKalman_B.Uk1_ll;

    /* Gain: '<S184>/A11' */
    StateflowKalman_B.A11_p = StateflowKalman_P.A11_Gain_e *
      StateflowKalman_B.x1k_a;

    /* Gain: '<S184>/A12' */
    StateflowKalman_B.A12_c = StateflowKalman_P.A12_Gain_a *
      StateflowKalman_B.x2k_g;

    /* Gain: '<S184>/A21' */
    StateflowKalman_B.A21_h = StateflowKalman_P.A21_Gain_m *
      StateflowKalman_B.x1k_a;

    /* Gain: '<S184>/A22' */
    StateflowKalman_B.A22_d = StateflowKalman_P.A22_Gain_g *
      StateflowKalman_B.x2k_g;

    /* Sum: '<S184>/sum2' */
    StateflowKalman_B.sum2_nk = StateflowKalman_B.A11_p +
      StateflowKalman_B.A12_c;

    /* Sum: '<S184>/sum3' */
    StateflowKalman_B.sum3_e = StateflowKalman_B.A21_h + StateflowKalman_B.A22_d;

    /* Gain: '<S185>/B11' */
    StateflowKalman_B.B11_k = StateflowKalman_P.B11_Gain_f *
      StateflowKalman_B.Sum4;

    /* Sum: '<S183>/A*x1(k) + B*u1(k) ' */
    StateflowKalman_B.x1k1_g = StateflowKalman_B.sum2_nk +
      StateflowKalman_B.B11_k;

    /* Gain: '<S185>/B21' */
    StateflowKalman_B.B21_l = StateflowKalman_P.B21_Gain_p *
      StateflowKalman_B.Sum4;

    /* Sum: '<S183>/A*x2(k) + B*u2(k)' */
    StateflowKalman_B.x2k1_n = StateflowKalman_B.sum3_e +
      StateflowKalman_B.B21_l;

    /* DigitalClock: '<S68>/Digital Clock' */
    StateflowKalman_B.DigitalClock = StateflowKalman_M->Timing.t[1];

    /* Gain: '<S191>/D*u(k)' */
    StateflowKalman_B.Duk_n = StateflowKalman_P.Duk_Gain_g *
      StateflowKalman_B.DigitalClock;

    /* UnitDelay: '<S191>/Delay_x1' */
    StateflowKalman_B.x1k_i = StateflowKalman_DW.Delay_x1_DSTATE_k;

    /* Gain: '<S194>/C11' */
    StateflowKalman_B.C11_e = StateflowKalman_P.C11_Gain_g *
      StateflowKalman_B.x1k_i;

    /* UnitDelay: '<S191>/Delay_x2' */
    StateflowKalman_B.x2k_d = StateflowKalman_DW.Delay_x2_DSTATE_k;

    /* Gain: '<S194>/C12' */
    StateflowKalman_B.C12_m = StateflowKalman_P.C12_Gain_d1 *
      StateflowKalman_B.x2k_d;

    /* Sum: '<S194>/sum2' */
    StateflowKalman_B.sum2_ka = StateflowKalman_B.C11_e +
      StateflowKalman_B.C12_m;

    /* Sum: '<S191>/C*X(k)+D*u(k)' */
    StateflowKalman_B.yk_m = StateflowKalman_B.Duk_n + StateflowKalman_B.sum2_ka;

    /* SampleTimeMath: '<S178>/TSamp'
     *
     * About '<S178>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_f = StateflowKalman_B.yk_m *
      StateflowKalman_P.TSamp_WtEt_d;

    /* UnitDelay: '<S178>/UD' */
    StateflowKalman_B.Uk1_j = StateflowKalman_DW.UD_DSTATE_g0;

    /* Sum: '<S178>/Diff' */
    StateflowKalman_B.Diff_b = StateflowKalman_B.TSamp_f -
      StateflowKalman_B.Uk1_j;

    /* SampleTimeMath: '<S179>/TSamp'
     *
     * About '<S179>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateflowKalman_B.TSamp_iq = StateflowKalman_B.DigitalClock *
      StateflowKalman_P.TSamp_WtEt_p;

    /* UnitDelay: '<S179>/UD' */
    StateflowKalman_B.Uk1_bl = StateflowKalman_DW.UD_DSTATE_k;

    /* Sum: '<S179>/Diff' */
    StateflowKalman_B.Diff_bt = StateflowKalman_B.TSamp_iq -
      StateflowKalman_B.Uk1_bl;

    /* Gain: '<S192>/A11' */
    StateflowKalman_B.A11_h = StateflowKalman_P.A11_Gain_h *
      StateflowKalman_B.x1k_i;

    /* Gain: '<S192>/A12' */
    StateflowKalman_B.A12_g = StateflowKalman_P.A12_Gain_a3 *
      StateflowKalman_B.x2k_d;

    /* Gain: '<S192>/A21' */
    StateflowKalman_B.A21_p = StateflowKalman_P.A21_Gain_f *
      StateflowKalman_B.x1k_i;

    /* Gain: '<S192>/A22' */
    StateflowKalman_B.A22_j = StateflowKalman_P.A22_Gain_d *
      StateflowKalman_B.x2k_d;

    /* Sum: '<S192>/sum2' */
    StateflowKalman_B.sum2_e = StateflowKalman_B.A11_h + StateflowKalman_B.A12_g;

    /* Sum: '<S192>/sum3' */
    StateflowKalman_B.sum3_b = StateflowKalman_B.A21_p + StateflowKalman_B.A22_j;

    /* Gain: '<S193>/B11' */
    StateflowKalman_B.B11_d = StateflowKalman_P.B11_Gain_n *
      StateflowKalman_B.DigitalClock;

    /* Sum: '<S191>/A*x1(k) + B*u1(k) ' */
    StateflowKalman_B.x1k1_h = StateflowKalman_B.sum2_e +
      StateflowKalman_B.B11_d;

    /* Gain: '<S193>/B21' */
    StateflowKalman_B.B21_h = StateflowKalman_P.B21_Gain_l *
      StateflowKalman_B.DigitalClock;

    /* Sum: '<S191>/A*x2(k) + B*u2(k)' */
    StateflowKalman_B.x2k1_h = StateflowKalman_B.sum3_b +
      StateflowKalman_B.B21_h;

    /* Gain: '<S69>/Gain' */
    StateflowKalman_B.Gain_p = StateflowKalman_P.Gain_Gain_c *
      StateflowKalman_B.theta1_l;

    /* Gain: '<S70>/Gain' */
    StateflowKalman_B.Gain_n = StateflowKalman_P.Gain_Gain_d4 *
      StateflowKalman_B.theta2_j;

    /* Sum: '<S12>/Sum5' */
    StateflowKalman_B.Sum5_d[0] = StateflowKalman_B.Sum4 -
      StateflowKalman_B.yhatt1[0];
    StateflowKalman_B.Sum5_d[1] = StateflowKalman_B.Sum7 -
      StateflowKalman_B.yhatt1[1];
    StateflowKalman_B.Sum5_d[2] = StateflowKalman_B.vel_B_conv_b -
      StateflowKalman_B.yhatt1[2];
    StateflowKalman_B.Sum5_d[3] = StateflowKalman_B.vel_A_conv_b -
      StateflowKalman_B.yhatt1[3];

    /* user code (Output function Trailer) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init  Write Process Data ,Run Admin Tasks and then Write Acyclic Data------------*/
      static char_T *errMsg;
      xpcEtherCATWriteProcessData(0,NULL);
      xpcEtherCATExecAdminJobs(0);
      xpcEtherCATWriteAcyclicData(0);
    }
  }
}

/* Model update function */
static void StateflowKalman_update(void)
{
  /* Update for Memory: '<S23>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput =
    StateflowKalman_B.sf_MATLABFunction_e.y;

  /* Update for DiscreteIntegrator: '<S66>/Integrator' */
  if (StateflowKalman_B.StartWork > 0.0) {
    StateflowKalman_DW.Integrator_PrevResetState = 1;
  } else if (StateflowKalman_B.StartWork < 0.0) {
    StateflowKalman_DW.Integrator_PrevResetState = -1;
  } else if (StateflowKalman_B.StartWork == 0.0) {
    StateflowKalman_DW.Integrator_PrevResetState = 0;
  } else {
    StateflowKalman_DW.Integrator_PrevResetState = 2;
  }

  /* Update for Memory: '<S26>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput_o =
    StateflowKalman_B.sf_MATLABFunction_a.y;

  /* Update for Memory: '<S30>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput_g =
    StateflowKalman_B.sf_MATLABFunction_f.y;

  /* Update for Memory: '<S32>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput_a =
    StateflowKalman_B.sf_MATLABFunction_fb.y;

  /* Update for UnitDelay: '<S39>/UD' */
  StateflowKalman_DW.UD_DSTATE = StateflowKalman_B.TSamp;

  /* Update for UnitDelay: '<S42>/UD' */
  StateflowKalman_DW.UD_DSTATE_a = StateflowKalman_B.TSamp_i;

  /* Update for Delay: '<S57>/MemoryX' */
  StateflowKalman_DW.icLoad = 0U;

  /* Update for DiscreteIntegrator: '<S66>/Integrator' */
  StateflowKalman_DW.Integrator_DSTATE[0] +=
    StateflowKalman_P.Integrator_gainval * StateflowKalman_B.IntegralGain[0];

  /* Update for Delay: '<S57>/MemoryX' */
  StateflowKalman_DW.MemoryX_DSTATE[0] = StateflowKalman_B.Reshape_c[0];

  /* Update for DiscreteIntegrator: '<S66>/Integrator' */
  StateflowKalman_DW.Integrator_DSTATE[1] +=
    StateflowKalman_P.Integrator_gainval * StateflowKalman_B.IntegralGain[1];

  /* Update for Delay: '<S57>/MemoryX' */
  StateflowKalman_DW.MemoryX_DSTATE[1] = StateflowKalman_B.Reshape_c[1];

  /* Update for Memory: '<S12>/Memory2' */
  StateflowKalman_DW.Memory2_PreviousInput[0] = StateflowKalman_B.xhatt1[0];
  StateflowKalman_DW.Memory2_PreviousInput[1] = StateflowKalman_B.xhatt1[1];
  StateflowKalman_DW.Memory2_PreviousInput[2] = StateflowKalman_B.xhatt1[2];
  StateflowKalman_DW.Memory2_PreviousInput[3] = StateflowKalman_B.xhatt1[3];

  /* Update for Memory: '<S12>/Memory' */
  memcpy(&StateflowKalman_DW.Memory_PreviousInput_j[0], &StateflowKalman_B.Pt1[0],
         sizeof(real_T) << 4U);

  /* Update for Memory: '<S12>/Memory1' */
  StateflowKalman_DW.Memory1_PreviousInput[0] = StateflowKalman_B.Sum5_d[0];
  StateflowKalman_DW.Memory1_PreviousInput[1] = StateflowKalman_B.Sum5_d[1];
  StateflowKalman_DW.Memory1_PreviousInput[2] = StateflowKalman_B.Sum5_d[2];
  StateflowKalman_DW.Memory1_PreviousInput[3] = StateflowKalman_B.Sum5_d[3];

  /* Update for Delay: '<S56>/MemoryX' */
  StateflowKalman_DW.icLoad_d = 0U;
  StateflowKalman_DW.MemoryX_DSTATE_h[0] = StateflowKalman_B.Reshape[0];
  StateflowKalman_DW.MemoryX_DSTATE_h[1] = StateflowKalman_B.Reshape[1];

  /* Update for UnitDelay: '<S176>/UD' */
  StateflowKalman_DW.UD_DSTATE_g = StateflowKalman_B.TSamp_e;

  /* Update for UnitDelay: '<S187>/Delay_x1' */
  StateflowKalman_DW.Delay_x1_DSTATE = StateflowKalman_B.x1k1;

  /* Update for UnitDelay: '<S187>/Delay_x2' */
  StateflowKalman_DW.Delay_x2_DSTATE = StateflowKalman_B.x2k1;

  /* Update for UnitDelay: '<S174>/UD' */
  StateflowKalman_DW.UD_DSTATE_a3 = StateflowKalman_B.TSamp_n;

  /* Update for UnitDelay: '<S183>/Delay_x1' */
  StateflowKalman_DW.Delay_x1_DSTATE_g = StateflowKalman_B.x1k1_g;

  /* Update for UnitDelay: '<S183>/Delay_x2' */
  StateflowKalman_DW.Delay_x2_DSTATE_m = StateflowKalman_B.x2k1_n;

  /* Update for UnitDelay: '<S175>/UD' */
  StateflowKalman_DW.UD_DSTATE_j = StateflowKalman_B.TSamp_h;

  /* Update for UnitDelay: '<S177>/UD' */
  StateflowKalman_DW.UD_DSTATE_f = StateflowKalman_B.TSamp_nd;

  /* Update for UnitDelay: '<S191>/Delay_x1' */
  StateflowKalman_DW.Delay_x1_DSTATE_k = StateflowKalman_B.x1k1_h;

  /* Update for UnitDelay: '<S191>/Delay_x2' */
  StateflowKalman_DW.Delay_x2_DSTATE_k = StateflowKalman_B.x2k1_h;

  /* Update for UnitDelay: '<S178>/UD' */
  StateflowKalman_DW.UD_DSTATE_g0 = StateflowKalman_B.TSamp_f;

  /* Update for UnitDelay: '<S179>/UD' */
  StateflowKalman_DW.UD_DSTATE_k = StateflowKalman_B.TSamp_iq;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++StateflowKalman_M->Timing.clockTick0)) {
    ++StateflowKalman_M->Timing.clockTickH0;
  }

  StateflowKalman_M->Timing.t[0] = StateflowKalman_M->Timing.clockTick0 *
    StateflowKalman_M->Timing.stepSize0 + StateflowKalman_M->Timing.clockTickH0 *
    StateflowKalman_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++StateflowKalman_M->Timing.clockTick1)) {
      ++StateflowKalman_M->Timing.clockTickH1;
    }

    StateflowKalman_M->Timing.t[1] = StateflowKalman_M->Timing.clockTick1 *
      StateflowKalman_M->Timing.stepSize1 +
      StateflowKalman_M->Timing.clockTickH1 *
      StateflowKalman_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void StateflowKalman_initialize(void)
{
  {
    /* user code (Start function Header) */
    {
      int_T status = 1;
      static char_T *errMsg;
      xpcPCIDevice pciInfo;
      int_T j;
      uint8_T *DeviceType;

      /* From LinkOsLayer.h   Intel PRO-100 specific definitions */
      struct EtherCATDevices {
        uint16_T VendorID;
        uint16_T DeviceID;
        uint8_T *DeviceType;
      } EtherCATDeviceTable[] = {
        /* I8254x types */
        { 0x8086, 0xABB1, "I8254x" },  //

        { 0x8086, 0xABB2, "I8254x" },  //

        { 0x8086, 0x100E, "I8254x" },  //  PCI_DEVICE_I82540EM_DESKTOP

        { 0x8086, 0x1010, "I8254x" },  //  PCI_DEVICE_I82546EB_COPPER_DUAL

        { 0x8086, 0x1013, "I8254x" },  //  PCI_DEVICE_I82541EI_COPPER

        { 0x8086, 0x1019, "I8254x" },  //  PCI_DEVICE_I82547GI_COPPER

        { 0x8086, 0x1026, "I8254x" },  //  PCI_DEVICE_I82545GM_COPPER

        { 0x8086, 0x104A, "I8254x" },  //  PCI_DEVICE_I82566DM

        { 0x8086, 0x104D, "I8254x" },  //  PCI_DEVICE_I82566MC

        { 0x8086, 0x105E, "I8254x" },  //  PCI_DEVICE_N1E5132_SERVER

        { 0x8086, 0x1075, "I8254x" },  //  PCI_DEVICE_I82547EI

        { 0x8086, 0x1076, "I8254x" },  //  PCI_DEVICE_I82541GI_COPPER

        { 0x8086, 0x1078, "I8254x" },  //  PCI_DEVICE_I82541ER

        { 0x8086, 0x1079, "I8254x" },  //  PCI_DEVICE_I82546GB_COPPER_DUAL

        { 0x8086, 0x107C, "I8254x" },  //  PCI_DEVICE_I82541PI_DESKTOP

        { 0x8086, 0x107D, "I8254x" },  //  PCI_DEVICE_I82572EI

        { 0x8086, 0x108B, "I8254x" },  //  PCI_DEVICE_I82573E

        { 0x8086, 0x108C, "I8254x" },  //  PCI_DEVICE_I82573

        { 0x8086, 0x109A, "I8254x" },  //  PCI_DEVICE_I82573L

        { 0x8086, 0x10A4, "I8254x" },  //  PCI_DEVICE_I82571GB_QUAD

        { 0x8086, 0x10A7, "I8254x" },  //  PCI_DEVICE_I82575_ZOAR

        { 0x8086, 0x10B9, "I8254x" },  //  PCI_DEVICE_I82572GI

        { 0x8086, 0x10BC, "I8254x" },  //  PCI_DEVICE_I82571GB_QUAD_2

        { 0x8086, 0x10BD, "I8254x" },  //  PCI_DEVICE_I82566L

        { 0x8086, 0x10C9, "I8254x" },  //  PCI_DEVICE_I82576

        { 0x8086, 0x10CE, "I8254x" },  //  PCI_DEVICE_I82567V

        { 0x8086, 0x10D3, "I8254x" },  //  PCI_DEVICE_I82574L

        { 0x8086, 0x10DE, "I8254x" },  //  PCI_DEVICE_I82567LM3

        { 0x8086, 0x10EA, "I8254x" },  //  PCI_DEVICE_I82577LM

        { 0x8086, 0x10EB, "I8254x" },  //  PCI_DEVICE_I82577LC

        { 0x8086, 0x10EF, "I8254x" },  //  PCI_DEVICE_I82578DM

        { 0x8086, 0x10F0, "I8254x" },  //  PCI_DEVICE_I82578DC

        { 0x8086, 0x10F5, "I8254x" },  //  PCI_DEVICE_I82567LM

        { 0x8086, 0x1501, "I8254x" },  //  PCI_DEVICE_I82567V3

        { 0x8086, 0x1502, "I8254x" },  //  PCI_DEVICE_I82579LM

        { 0x8086, 0x1503, "I8254x" },  //  PCI_DEVICE_I82579V

        { 0x8086, 0x150C, "I8254x" },  //  PCI_DEVICE_I82583V

        { 0x8086, 0x150E, "I8254x" },  //  PCI_DEVICE_I82580_QUAD

        { 0x8086, 0x1521, "I8254x" },  //  PCI_DEVICE_I350

        { 0x8086, 0x1526, "I8254x" },  //  PCI_DEVICE_I82576_ET2

        { 0x8086, 0x1527, "I8254x" },  //  PCI_DEVICE_I82580_QUAD_FIBRE

        { 0x8086, 0x1533, "I8254x" },  //  PCI_DEVICE_I210_COPPER

        { 0x8086, 0x1539, "I8254x" },  //  PCI_DEVICE_I211AT

        { 0x8086, 0x157B, "I8254x" },  //  PCI_DEVICE_I210_COPPER_FLASHLESS

        { 0x8086, 0x153A, "I8254x" },  //  PCI_DEVICE_I217LM

        { 0x8086, 0x153B, "I8254x" },  //  PCI_DEVICE_I217V

        { 0x8086, 0x155A, "I8254x" },  //  PCI_DEVICE_I218LM

        { 0x8086, 0x1559, "I8254x" },  //  PCI_DEVICE_I218V

        /* I8255x types */
        { 0x8086, 0x103a, "I8255x" },  //  PCI device ID, Intel 82801DB(M) (ICH4) LAN Controller

        { 0x8086, 0x1229, "I8255x" },  //  82557 device ID

        { 0x8086, 0x1209, "I8255x" },  //  82557 ER device ID

        { 0x8086, 0x1050, "I8255x" },  //  PRO/100 VE device ID

        { 0x8086, 0x1039, "I8255x" },  //  82562 VE/VM device ID

        { 0x8086, 0x2449, "I8255x" },  //  82559 ER device ID

        { 0x8086, 0x27DC, "I8255x" },  //  PRO/100 VE device ID

        { 0x8086, 0x1059, "I8255x" },  //  Mobile version of 1229

        { 0x8086, 0x1092, "I8255x" }   //  PRO/100 VE3 device ID
      };

      if (!xpcIsModelInit()) {
        // Get the exec ratio at model start time.  Needed by the MS controller.
        StateflowKalman_DW.EtherCATInit_RWORK.EXECRATIO = 0.001 /
          slrteGetCurrentStepSize();
        status = xpcGetPciConfigAtSlot( 4, 1, &pciInfo);
        if (status ) {
          rtmSetErrorStatus(StateflowKalman_M,
                            "You must specify a bus/slot, not auto search.");
          return;
        }

        status = -1;                   // Preset to a failed search.
        DeviceType = "";
        for (j = 0 ; j < sizeof(EtherCATDeviceTable)/sizeof(struct
              EtherCATDevices) ; j++ ) {
          // Search through the device table for the matching vendor/device ID.
          if (( pciInfo.DeviceId == EtherCATDeviceTable[j].DeviceID )
              && ( pciInfo.VendorId == EtherCATDeviceTable[j].VendorID ) ) {
            status = 0;
            DeviceType = EtherCATDeviceTable[j].DeviceType;
            break;
          }
        }

        if (status ) {
          rtmSetErrorStatus(StateflowKalman_M,
                            "No valid Ethernet board found at bus 4 slot 1");
        } else {
          char *logfile = "c:\\dbglog.txt";
          mwStateClear( 0 );
          status = xpcEtherCATinitialize(0, DeviceType, 4, 1, 0, 1,
            xmlecatArr_0, xmlecatArr_0_count,0,
            1, logfile, 0.001, 0 );
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(StateflowKalman_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
        }
      }
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */
    /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */
    /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */
    /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */
    /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S14>/Status Word' */
    /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<Root>/StartHome' */
    StateflowKalman_B.StartHome = StateflowKalman_P.StartHome_Value;

    /* Start for Constant: '<Root>/StartRobot' */
    StateflowKalman_B.StartRobot = StateflowKalman_P.StartRobot_Value;

    /* Start for Constant: '<Root>/StartWork' */
    StateflowKalman_B.StartWork = StateflowKalman_P.StartWork_Value;

    /* Start for Constant: '<Root>/Reset' */
    StateflowKalman_B.Reset = StateflowKalman_P.Reset_Value;

    /* Start for Constant: '<Root>/Stop' */
    StateflowKalman_B.Stop = StateflowKalman_P.Stop_Value;

    /* Start for Constant: '<Root>/StartZero' */
    StateflowKalman_B.StartZero = StateflowKalman_P.StartZero_Value;

    /* Start for Constant: '<Root>/Discesa' */
    StateflowKalman_B.Discesa = StateflowKalman_P.Discesa_Value;

    /* Start for Constant: '<Root>/Abbassa' */
    StateflowKalman_B.Abbassa = StateflowKalman_P.Abbassa_Value;

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S72>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S72>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S72>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S72>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S23>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S23>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S26>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S26>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S30>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S30>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S32>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S32>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Atomic SubSystem: '<S57>/UseCurrentEstimator' */
    State_UseCurrentEstimator_Start(&StateflowKalman_DW.UseCurrentEstimator);

    /* End of Start for SubSystem: '<S57>/UseCurrentEstimator' */

    /* Start for Atomic SubSystem: '<S56>/UseCurrentEstimator' */
    State_UseCurrentEstimator_Start(&StateflowKalman_DW.UseCurrentEstimator_e);

    /* End of Start for SubSystem: '<S56>/UseCurrentEstimator' */

    /* Start for Enabled SubSystem: '<S94>/MeasurementUpdate' */
    Statefl_MeasurementUpdate_Start(&StateflowKalman_DW.MeasurementUpdate);

    /* End of Start for SubSystem: '<S94>/MeasurementUpdate' */

    /* Start for Enabled SubSystem: '<S139>/MeasurementUpdate' */
    Statefl_MeasurementUpdate_Start(&StateflowKalman_DW.MeasurementUpdate_a);

    /* End of Start for SubSystem: '<S139>/MeasurementUpdate' */
  }

  /* InitializeConditions for Memory: '<S23>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput = StateflowKalman_P.Memory_X0;

  /* InitializeConditions for DiscreteIntegrator: '<S66>/Integrator' */
  StateflowKalman_DW.Integrator_DSTATE[0] = StateflowKalman_P.Integrator_IC;
  StateflowKalman_DW.Integrator_DSTATE[1] = StateflowKalman_P.Integrator_IC;
  StateflowKalman_DW.Integrator_PrevResetState = 2;

  /* InitializeConditions for Memory: '<S26>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput_o = StateflowKalman_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S30>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput_g = StateflowKalman_P.Memory_X0_o;

  /* InitializeConditions for Memory: '<S32>/Memory' */
  StateflowKalman_DW.Memory_PreviousInput_a = StateflowKalman_P.Memory_X0_a;

  /* InitializeConditions for UnitDelay: '<S39>/UD' */
  StateflowKalman_DW.UD_DSTATE =
    StateflowKalman_P.DiscreteDerivativeB_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S42>/UD' */
  StateflowKalman_DW.UD_DSTATE_a =
    StateflowKalman_P.DiscreteDerivativeA_ICPrevScale;

  /* InitializeConditions for Delay: '<S57>/MemoryX' */
  StateflowKalman_DW.icLoad = 1U;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  StateflowKalman_DW.Memory2_PreviousInput[0] = StateflowKalman_P.Memory2_X0[0];
  StateflowKalman_DW.Memory2_PreviousInput[1] = StateflowKalman_P.Memory2_X0[1];
  StateflowKalman_DW.Memory2_PreviousInput[2] = StateflowKalman_P.Memory2_X0[2];
  StateflowKalman_DW.Memory2_PreviousInput[3] = StateflowKalman_P.Memory2_X0[3];

  /* InitializeConditions for Memory: '<S12>/Memory' */
  memcpy(&StateflowKalman_DW.Memory_PreviousInput_j[0],
         &StateflowKalman_P.Memory_X0_ap[0], sizeof(real_T) << 4U);

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  StateflowKalman_DW.Memory1_PreviousInput[0] = StateflowKalman_P.Memory1_X0[0];
  StateflowKalman_DW.Memory1_PreviousInput[1] = StateflowKalman_P.Memory1_X0[1];
  StateflowKalman_DW.Memory1_PreviousInput[2] = StateflowKalman_P.Memory1_X0[2];
  StateflowKalman_DW.Memory1_PreviousInput[3] = StateflowKalman_P.Memory1_X0[3];

  /* InitializeConditions for Delay: '<S56>/MemoryX' */
  StateflowKalman_DW.icLoad_d = 1U;

  /* InitializeConditions for UnitDelay: '<S176>/UD' */
  StateflowKalman_DW.UD_DSTATE_g =
    StateflowKalman_P.DiscreteDerivativeB2_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S187>/Delay_x1' */
  StateflowKalman_DW.Delay_x1_DSTATE =
    StateflowKalman_P.Delay_x1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S187>/Delay_x2' */
  StateflowKalman_DW.Delay_x2_DSTATE =
    StateflowKalman_P.Delay_x2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S174>/UD' */
  StateflowKalman_DW.UD_DSTATE_a3 =
    StateflowKalman_P.DiscreteDerivativeB_ICPrevSca_m;

  /* InitializeConditions for UnitDelay: '<S183>/Delay_x1' */
  StateflowKalman_DW.Delay_x1_DSTATE_g =
    StateflowKalman_P.Delay_x1_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S183>/Delay_x2' */
  StateflowKalman_DW.Delay_x2_DSTATE_m =
    StateflowKalman_P.Delay_x2_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S175>/UD' */
  StateflowKalman_DW.UD_DSTATE_j =
    StateflowKalman_P.DiscreteDerivativeB1_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S177>/UD' */
  StateflowKalman_DW.UD_DSTATE_f =
    StateflowKalman_P.DiscreteDerivativeB3_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S191>/Delay_x1' */
  StateflowKalman_DW.Delay_x1_DSTATE_k =
    StateflowKalman_P.Delay_x1_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S191>/Delay_x2' */
  StateflowKalman_DW.Delay_x2_DSTATE_k =
    StateflowKalman_P.Delay_x2_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S178>/UD' */
  StateflowKalman_DW.UD_DSTATE_g0 =
    StateflowKalman_P.DiscreteDerivativeB4_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S179>/UD' */
  StateflowKalman_DW.UD_DSTATE_k =
    StateflowKalman_P.DiscreteDerivativeB5_ICPrevScal;
  StateflowKalman_DW.sfEvent = -1;
  StateflowKalman_DW.temporalCounter_i1 = 0U;
  StateflowKalman_DW.is_active_c15_StateflowKalman = 0U;
  StateflowKalman_DW.is_c15_StateflowKalman = StateflowKal_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S13>/Posizionamento'
   */
  /* InitializeConditions for DiscreteIntegrator: '<S199>/Discrete-Time Integrator' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S199>/Discrete-Time Integrator'
   */
  StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE_c =
    StateflowKalman_P.DiscreteTimeIntegrator_IC;
  StateflowKalman_DW.DiscreteTimeIntegrator_PREV_U_j = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1'
   */
  StateflowKalman_DW.DiscreteTimeIntegrator1_DSTAT_j =
    StateflowKalman_P.DiscreteTimeIntegrator1_IC;
  StateflowKalman_DW.DiscreteTimeIntegrator1_PREV__o = 0.0;

  /* SystemInitialize for Outport: '<S199>/CoppiaA' */
  StateflowKalman_B.CA_o = StateflowKalman_P.CoppiaA_Y0;

  /* SystemInitialize for Outport: '<S199>/CoppiaB' */
  StateflowKalman_B.CB_b = StateflowKalman_P.CoppiaB_Y0;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S13>/Setting'
   */
  /* InitializeConditions for DiscreteIntegrator: '<S200>/Discrete-Time Integrator1' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S200>/Discrete-Time Integrator1'
   */
  StateflowKalman_DW.DiscreteTimeIntegrator1_DSTATE =
    StateflowKalman_P.DiscreteTimeIntegrator1_IC_j;
  StateflowKalman_DW.DiscreteTimeIntegrator1_PREV_U = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S200>/Discrete-Time Integrator' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S200>/Discrete-Time Integrator'
   */
  StateflowKalman_DW.DiscreteTimeIntegrator_DSTATE =
    StateflowKalman_P.DiscreteTimeIntegrator_IC_e;
  StateflowKalman_DW.DiscreteTimeIntegrator_PREV_U = 0.0;

  /* SystemInitialize for Outport: '<S200>/CA' */
  StateflowKalman_B.CA = StateflowKalman_P.CA_Y0;

  /* SystemInitialize for Outport: '<S200>/CB' */
  StateflowKalman_B.CB = StateflowKalman_P.CB_Y0;

  /* SystemInitialize for Outport: '<S200>/CH' */
  StateflowKalman_B.CH = StateflowKalman_P.CH_Y0;

  /* SystemInitialize for Atomic SubSystem: '<S57>/UseCurrentEstimator' */
  Statef_UseCurrentEstimator_Init(&StateflowKalman_B.UseCurrentEstimator,
    (P_UseCurrentEstimator_Statefl_T *)&StateflowKalman_P.UseCurrentEstimator);

  /* End of SystemInitialize for SubSystem: '<S57>/UseCurrentEstimator' */

  /* SystemInitialize for Atomic SubSystem: '<S56>/UseCurrentEstimator' */
  Statef_UseCurrentEstimator_Init(&StateflowKalman_B.UseCurrentEstimator_e,
    (P_UseCurrentEstimator_Statefl_T *)&StateflowKalman_P.UseCurrentEstimator_e);

  /* End of SystemInitialize for SubSystem: '<S56>/UseCurrentEstimator' */

  /* SystemInitialize for Enabled SubSystem: '<S94>/MeasurementUpdate' */
  Stateflo_MeasurementUpdate_Init(&StateflowKalman_B.MeasurementUpdate,
    (P_MeasurementUpdate_Stateflow_T *)&StateflowKalman_P.MeasurementUpdate);

  /* End of SystemInitialize for SubSystem: '<S94>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S139>/MeasurementUpdate' */
  Stateflo_MeasurementUpdate_Init(&StateflowKalman_B.MeasurementUpdate_a,
    (P_MeasurementUpdate_Stateflow_T *)&StateflowKalman_P.MeasurementUpdate_a);

  /* End of SystemInitialize for SubSystem: '<S139>/MeasurementUpdate' */

  /* Enable for Chart: '<Root>/State flow robot' incorporates:
   *  Enable for SubSystem: '<S13>/Posizionamento'
   */
  StateflowKalman_DW.Posizionamento_RESET_ELAPS_T = true;

  /* Enable for DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
  StateflowKalman_DW.DiscreteTimeIntegrator_SYSTEM_j = 1U;

  /* Enable for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
  StateflowKalman_DW.DiscreteTimeIntegrator1_SYSTE_c = 1U;

  /* Enable for Chart: '<Root>/State flow robot' incorporates:
   *  Enable for SubSystem: '<S13>/Setting'
   */
  StateflowKalman_DW.Setting_RESET_ELAPS_T = true;

  /* Enable for DiscreteIntegrator: '<S200>/Discrete-Time Integrator1' */
  StateflowKalman_DW.DiscreteTimeIntegrator1_SYSTEM_ = 1U;

  /* Enable for DiscreteIntegrator: '<S200>/Discrete-Time Integrator' */
  StateflowKalman_DW.DiscreteTimeIntegrator_SYSTEM_E = 1U;
}

/* Model terminate function */
static void StateflowKalman_terminate(void)
{
  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */
  /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */
  /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */
  /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */
  /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S14>/Status Word' */
  /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
  /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
  /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
  /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S72>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S72>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S72>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S72>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
  /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S23>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S23>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
  /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S26>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S26>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
  /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S30>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S30>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S32>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S32>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateflowKalman_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */

  /*------------ S-Function Block: <Root>/EtherCAT Init  Process Shutdown Network ------------*/
  {
    int_T status;
    if (!xpcIsModelInit()) {
      status = xpcEtherCATstop(0, 1000 /* 1 second timeout */
        );
    }
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  StateflowKalman_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  StateflowKalman_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  StateflowKalman_initialize();
}

void MdlTerminate(void)
{
  StateflowKalman_terminate();
}

/* Registration function */
RT_MODEL_StateflowKalman_T *StateflowKalman(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)StateflowKalman_M, 0,
                sizeof(RT_MODEL_StateflowKalman_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&StateflowKalman_M->solverInfo,
                          &StateflowKalman_M->Timing.simTimeStep);
    rtsiSetTPtr(&StateflowKalman_M->solverInfo, &rtmGetTPtr(StateflowKalman_M));
    rtsiSetStepSizePtr(&StateflowKalman_M->solverInfo,
                       &StateflowKalman_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&StateflowKalman_M->solverInfo, (&rtmGetErrorStatus
      (StateflowKalman_M)));
    rtsiSetRTModelPtr(&StateflowKalman_M->solverInfo, StateflowKalman_M);
  }

  rtsiSetSimTimeStep(&StateflowKalman_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&StateflowKalman_M->solverInfo,"FixedStepDiscrete");
  StateflowKalman_M->solverInfoPtr = (&StateflowKalman_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = StateflowKalman_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    StateflowKalman_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    StateflowKalman_M->Timing.sampleTimes =
      (&StateflowKalman_M->Timing.sampleTimesArray[0]);
    StateflowKalman_M->Timing.offsetTimes =
      (&StateflowKalman_M->Timing.offsetTimesArray[0]);

    /* task periods */
    StateflowKalman_M->Timing.sampleTimes[0] = (0.0);
    StateflowKalman_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    StateflowKalman_M->Timing.offsetTimes[0] = (0.0);
    StateflowKalman_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(StateflowKalman_M, &StateflowKalman_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = StateflowKalman_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    StateflowKalman_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(StateflowKalman_M, -1);
  StateflowKalman_M->Timing.stepSize0 = 0.001;
  StateflowKalman_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    StateflowKalman_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(StateflowKalman_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(StateflowKalman_M->rtwLogInfo, (NULL));
    rtliSetLogT(StateflowKalman_M->rtwLogInfo, "tout");
    rtliSetLogX(StateflowKalman_M->rtwLogInfo, "");
    rtliSetLogXFinal(StateflowKalman_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(StateflowKalman_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(StateflowKalman_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(StateflowKalman_M->rtwLogInfo, 0);
    rtliSetLogDecimation(StateflowKalman_M->rtwLogInfo, 1);
    rtliSetLogY(StateflowKalman_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(StateflowKalman_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(StateflowKalman_M->rtwLogInfo, (NULL));
  }

  StateflowKalman_M->solverInfoPtr = (&StateflowKalman_M->solverInfo);
  StateflowKalman_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&StateflowKalman_M->solverInfo, 0.001);
  rtsiSetSolverMode(&StateflowKalman_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  StateflowKalman_M->blockIO = ((void *) &StateflowKalman_B);
  (void) memset(((void *) &StateflowKalman_B), 0,
                sizeof(B_StateflowKalman_T));

  /* parameters */
  StateflowKalman_M->defaultParam = ((real_T *)&StateflowKalman_P);

  /* states (dwork) */
  StateflowKalman_M->dwork = ((void *) &StateflowKalman_DW);
  (void) memset((void *)&StateflowKalman_DW, 0,
                sizeof(DW_StateflowKalman_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  StateflowKalman_InitializeDataMapInfo(StateflowKalman_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &StateflowKalman_M->NonInlinedSFcns.sfcnInfo;
    StateflowKalman_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(StateflowKalman_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &StateflowKalman_M->Sizes.numSampTimes);
    StateflowKalman_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (StateflowKalman_M)[0]);
    StateflowKalman_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (StateflowKalman_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,StateflowKalman_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(StateflowKalman_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(StateflowKalman_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (StateflowKalman_M));
    rtssSetStepSizePtr(sfcnInfo, &StateflowKalman_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(StateflowKalman_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &StateflowKalman_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &StateflowKalman_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &StateflowKalman_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &StateflowKalman_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &StateflowKalman_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &StateflowKalman_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &StateflowKalman_M->solverInfoPtr);
  }

  StateflowKalman_M->Sizes.numSFcns = (28);

  /* register each child */
  {
    (void) memset((void *)&StateflowKalman_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  28*sizeof(SimStruct));
    StateflowKalman_M->childSfunctions =
      (&StateflowKalman_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 28; i++) {
        StateflowKalman_M->childSfunctions[i] =
          (&StateflowKalman_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: StateflowKalman/<Root>/EtherCAT PDO Transmit 5 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion7);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 5");
      ssSetPath(rts, "StateflowKalman/EtherCAT PDO Transmit 5");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit5_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit5_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit5_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<Root>/EtherCAT PDO Transmit 6 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 6");
      ssSetPath(rts, "StateflowKalman/EtherCAT PDO Transmit 6");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit6_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit6_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit6_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<Root>/EtherCAT PDO Transmit 3 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion5);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 3");
      ssSetPath(rts, "StateflowKalman/EtherCAT PDO Transmit 3");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit3_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit3_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<Root>/EtherCAT PDO Transmit 4 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion1_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 4");
      ssSetPath(rts, "StateflowKalman/EtherCAT PDO Transmit 4");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit4_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit4_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S9>/Motore braccia A (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.MotorebracciaA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia A");
      ssSetPath(rts, "StateflowKalman/Posizione Braccia /Motore braccia A");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.MotorebracciaA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.MotorebracciaA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.MotorebracciaA_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S9>/Motore braccia B (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.MotorebracciaB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia B");
      ssSetPath(rts, "StateflowKalman/Posizione Braccia /Motore braccia B");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.MotorebracciaB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.MotorebracciaB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.MotorebracciaB_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S10>/Motore vite A (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.MotoreviteA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite A");
      ssSetPath(rts, "StateflowKalman/Posizione Vite/Motore vite A");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.MotoreviteA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.MotoreviteA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.MotoreviteA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.MotoreviteA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.MotoreviteA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.MotoreviteA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.MotoreviteA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.MotoreviteA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.MotoreviteA_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S10>/Motore vite B (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.MotoreviteB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite B");
      ssSetPath(rts, "StateflowKalman/Posizione Vite/Motore vite B");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.MotoreviteB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.MotoreviteB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.MotoreviteB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.MotoreviteB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.MotoreviteB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.MotoreviteB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.MotoreviteB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.MotoreviteB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.MotoreviteB_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S14>/Status Word (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateflowKalman_B.StatusWord));
        }
      }

      /* path info */
      ssSetModelName(rts, "Status Word");
      ssSetPath(rts, "StateflowKalman/Status/Status Word");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.StatusWord_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.StatusWord_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.StatusWord_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.StatusWord_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.StatusWord_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.StatusWord_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.StatusWord_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.StatusWord_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.StatusWord_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S1>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateflowKalman_B.EtherCATPDOReceive16));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "StateflowKalman/Finecorsa Vite/EtherCAT PDO Receive16");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOReceive16_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive16_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S2>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateflowKalman_B.EtherCATPDOReceive16_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "StateflowKalman/Finecorsa braccia/EtherCAT PDO Receive16");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive16_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &StateflowKalman_DW.EtherCATPDOReceive16_IWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive16_IWORK_l[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S3>/Luce Bianca (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion25);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Bianca");
      ssSetPath(rts, "StateflowKalman/LED Status/Luce Bianca");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.LuceBianca_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.LuceBianca_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.LuceBianca_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.LuceBianca_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.LuceBianca_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.LuceBianca_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.LuceBianca_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.LuceBianca_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.LuceBianca_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S3>/Luce Rossa  (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion24);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Rossa ");
      ssSetPath(rts, "StateflowKalman/LED Status/Luce Rossa ");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.LuceRossa_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.LuceRossa_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.LuceRossa_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.LuceRossa_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.LuceRossa_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.LuceRossa_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.LuceRossa_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.LuceRossa_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.LuceRossa_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S3>/Luce Verde (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion26);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Verde");
      ssSetPath(rts, "StateflowKalman/LED Status/Luce Verde");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.LuceVerde_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.LuceVerde_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.LuceVerde_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.LuceVerde_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.LuceVerde_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.LuceVerde_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.LuceVerde_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.LuceVerde_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.LuceVerde_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S72>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.EtherCATPDOReceive15));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateflowKalman/Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOReceive15_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive15_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S72>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.EtherCATPDOReceive14));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateflowKalman/Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOReceive14_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive14_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S71>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.EtherCATPDOReceive15_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateflowKalman/Sistema_braccia/Velocita /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P5_Size_k);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &StateflowKalman_DW.EtherCATPDOReceive15_IWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive15_IWORK_o[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S71>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.EtherCATPDOReceive14_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateflowKalman/Sistema_braccia/Velocita /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P6_Size_h);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &StateflowKalman_DW.EtherCATPDOReceive14_IWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive14_IWORK_p[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S5>/EtherCAT PDO Transmit 1 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "StateflowKalman/Out Asse A Braccia/EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit1_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S23>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateflowKalman_B.EtherCATPDOReceive9));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateflowKalman/Out Asse A Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOReceive9_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive9_IWORK[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S6>/EtherCAT PDO Transmit 7 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.DataTypeConversion4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 7");
      ssSetPath(rts,
                "StateflowKalman/Out Asse B Braccia/EtherCAT PDO Transmit 7");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit7_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit7_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S26>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateflowKalman_B.EtherCATPDOReceive9_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateflowKalman/Out Asse B Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P7_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOReceive9_IWORK_n
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive9_IWORK_n[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S41>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.EtherCATPDOReceive14_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateflowKalman/Sistema Vite/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive14_P7_Size_k);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &StateflowKalman_DW.EtherCATPDOReceive14_IWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive14_IWORK_f[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S41>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateflowKalman_B.EtherCATPDOReceive15_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateflowKalman/Sistema Vite/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P3_Size_a);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive15_P7_Size_fm);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &StateflowKalman_DW.EtherCATPDOReceive15_IWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive15_IWORK_n[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S7>/Torque send (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.ConvertA);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Torque send");
      ssSetPath(rts, "StateflowKalman/Out asse A Vite/Torque send");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateflowKalman_P.Torquesend_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateflowKalman_P.Torquesend_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateflowKalman_P.Torquesend_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateflowKalman_P.Torquesend_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateflowKalman_P.Torquesend_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateflowKalman_P.Torquesend_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateflowKalman_P.Torquesend_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.Torquesend_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.Torquesend_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S30>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateflowKalman_B.EtherCATPDOReceive9_hd));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateflowKalman/Out asse A Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOReceive9_IWORK_g
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive9_IWORK_g[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: StateflowKalman/<S8>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateflowKalman_B.ConvertB);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts, "StateflowKalman/Out asse B Vite/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOTransmit2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateflowKalman_DW.EtherCATPDOTransmit2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOTransmit2_IWORK[0]);
      }

      /* registration */
      xpcethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: StateflowKalman/<S32>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateflowKalman_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = StateflowKalman_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = StateflowKalman_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = StateflowKalman_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateflowKalman_M->NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, StateflowKalman_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateflowKalman_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateflowKalman_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateflowKalman_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateflowKalman_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &StateflowKalman_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateflowKalman_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateflowKalman_B.EtherCATPDOReceive9_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateflowKalman/Out asse B Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateflowKalman_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P4_Size_en);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P5_Size_nv);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateflowKalman_P.EtherCATPDOReceive9_P7_Size_ai);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &StateflowKalman_DW.EtherCATPDOReceive9_IWORK_gl[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateflowKalman_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateflowKalman_DW.EtherCATPDOReceive9_IWORK_gl[0]);
      }

      /* registration */
      xpcethercatpdorx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  StateflowKalman_M->Sizes.numContStates = (0);/* Number of continuous states */
  StateflowKalman_M->Sizes.numY = (0); /* Number of model outputs */
  StateflowKalman_M->Sizes.numU = (0); /* Number of model inputs */
  StateflowKalman_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  StateflowKalman_M->Sizes.numSampTimes = (2);/* Number of sample times */
  StateflowKalman_M->Sizes.numBlocks = (590);/* Number of blocks */
  StateflowKalman_M->Sizes.numBlockIO = (418);/* Number of block outputs */
  StateflowKalman_M->Sizes.numBlockPrms = (2105);/* Sum of parameter "widths" */
  return StateflowKalman_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
