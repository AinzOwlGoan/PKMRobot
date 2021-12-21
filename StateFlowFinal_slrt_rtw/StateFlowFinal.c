/*
 * StateFlowFinal.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowFinal".
 *
 * Model version              : 1.1088
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Dec 14 14:40:43 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "StateFlowFinal_capi.h"
#include "StateFlowFinal.h"
#include "StateFlowFinal_private.h"

/* Named constants for Chart: '<Root>/State flow robot' */
#define StateFlowFin_IN_FineLavorazione ((uint8_T)4U)
#define StateFlowFin_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define StateFlowFinal_IN_Attivazione  ((uint8_T)1U)
#define StateFlowFinal_IN_Controllo    ((uint8_T)2U)
#define StateFlowFinal_IN_Discesa_Vite ((uint8_T)3U)
#define StateFlowFinal_IN_Home         ((uint8_T)5U)
#define StateFlowFinal_IN_HomeDef      ((uint8_T)6U)
#define StateFlowFinal_IN_OffSet       ((uint8_T)7U)
#define StateFlowFinal_IN_Step1        ((uint8_T)8U)
#define StateFlowFinal_IN_StopPhase    ((uint8_T)9U)

/* Block signals (auto storage) */
B_StateFlowFinal_T StateFlowFinal_B;

/* Block states (auto storage) */
DW_StateFlowFinal_T StateFlowFinal_DW;

/* Real-time model */
RT_MODEL_StateFlowFinal_T StateFlowFinal_M_;
RT_MODEL_StateFlowFinal_T *const StateFlowFinal_M = &StateFlowFinal_M_;

/* Forward declaration for local functions */
static real_T StateFlowFinal_mpower(real_T a);
static void StateFlowFinal_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowFinal_ldm7t(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowFinal_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f);
static real_T StateFlowFinal_norm_n(const real_T x[4]);

/*
 * Output and update for atomic system:
 *    '<S23>/MATLAB Function'
 *    '<S26>/MATLAB Function'
 *    '<S30>/MATLAB Function'
 *    '<S32>/MATLAB Function'
 */
void StateFlowFinal_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateFlowFin_T *localB)
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
 *    '<S93>/MeasurementUpdate'
 *    '<S138>/MeasurementUpdate'
 */
void StateFlo_MeasurementUpdate_Init(B_MeasurementUpdate_StateFlow_T *localB,
  P_MeasurementUpdate_StateFlow_T *localP)
{
  /* SystemInitialize for Outport: '<S118>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S93>/MeasurementUpdate'
 *    '<S138>/MeasurementUpdate'
 */
void State_MeasurementUpdate_Disable(B_MeasurementUpdate_StateFlow_T *localB,
  DW_MeasurementUpdate_StateFlo_T *localDW, P_MeasurementUpdate_StateFlow_T
  *localP)
{
  /* Disable for Outport: '<S118>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S93>/MeasurementUpdate'
 *    '<S138>/MeasurementUpdate'
 */
void StateFl_MeasurementUpdate_Start(DW_MeasurementUpdate_StateFlo_T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S93>/MeasurementUpdate'
 *    '<S138>/MeasurementUpdate'
 */
void StateFlowFina_MeasurementUpdate(boolean_T rtu_Enable, const real_T rtu_Lk[2],
  real_T rtu_yk, const real_T rtu_Ck[2], const real_T rtu_xhatkk1[2], real_T
  rtu_Dk, real_T rtu_uk, B_MeasurementUpdate_StateFlow_T *localB,
  DW_MeasurementUpdate_StateFlo_T *localDW, P_MeasurementUpdate_StateFlow_T
  *localP)
{
  real_T tmp;
  real_T tmp_0;

  /* Outputs for Enabled SubSystem: '<S93>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S118>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Product: '<S118>/C[k]*xhat[k|k-1]' */
    tmp_0 = rtu_Ck[0];
    tmp = tmp_0 * rtu_xhatkk1[0];
    tmp_0 = rtu_Ck[1];
    tmp += tmp_0 * rtu_xhatkk1[1];
    localB->Ckxhatkk1 = tmp;

    /* Product: '<S118>/D[k]*u[k]' */
    localB->Dkuk = rtu_Dk * rtu_uk;

    /* Sum: '<S118>/Add1' */
    localB->yhatkk1 = localB->Ckxhatkk1 + localB->Dkuk;

    /* Sum: '<S118>/Sum' */
    localB->Sum = rtu_yk - localB->yhatkk1;

    /* Product: '<S118>/Product3' */
    tmp_0 = localB->Sum;
    localB->Product3[0] = rtu_Lk[0] * tmp_0;
    localB->Product3[1] = rtu_Lk[1] * tmp_0;
    srUpdateBC(localDW->MeasurementUpdate_SubsysRanBC);
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      State_MeasurementUpdate_Disable(localB, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S93>/MeasurementUpdate' */
}

/*
 * System initialize for atomic system:
 *    '<S56>/UseCurrentEstimator'
 *    '<S57>/UseCurrentEstimator'
 */
void StateF_UseCurrentEstimator_Init(B_UseCurrentEstimator_StateFl_T *localB,
  P_UseCurrentEstimator_StateFl_T *localP)
{
  /* SystemInitialize for Enabled SubSystem: '<S98>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S119>/deltax' */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S98>/Enabled Subsystem' */
}

/*
 * Start for atomic system:
 *    '<S56>/UseCurrentEstimator'
 *    '<S57>/UseCurrentEstimator'
 */
void State_UseCurrentEstimator_Start(DW_UseCurrentEstimator_StateF_T *localDW)
{
  /* Start for Enabled SubSystem: '<S98>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S98>/Enabled Subsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S56>/UseCurrentEstimator'
 *    '<S57>/UseCurrentEstimator'
 */
void StateFlowFi_UseCurrentEstimator(boolean_T rtu_Enablek, const real_T rtu_Mk
  [2], real_T rtu_uk, real_T rtu_yk, const real_T rtu_Ck[2], real_T rtu_Dk,
  const real_T rtu_xhatkk1[2], B_UseCurrentEstimator_StateFl_T *localB,
  DW_UseCurrentEstimator_StateF_T *localDW, P_UseCurrentEstimator_StateFl_T
  *localP)
{
  real_T tmp;
  real_T tmp_0;

  /* Outputs for Enabled SubSystem: '<S98>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  if (rtu_Enablek) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Product: '<S119>/Product' */
    tmp_0 = rtu_Ck[0];
    tmp = tmp_0 * rtu_xhatkk1[0];
    tmp_0 = rtu_Ck[1];
    tmp += tmp_0 * rtu_xhatkk1[1];
    localB->Product = tmp;

    /* Product: '<S119>/Product1' */
    localB->Product1 = rtu_Dk * rtu_uk;

    /* Sum: '<S119>/Add1' */
    localB->Add1 = (rtu_yk - localB->Product) - localB->Product1;

    /* Product: '<S119>/Product2' */
    tmp_0 = localB->Add1;
    localB->Product2[0] = rtu_Mk[0] * tmp_0;
    localB->Product2[1] = rtu_Mk[1] * tmp_0;
    srUpdateBC(localDW->EnabledSubsystem_SubsysRanBC);
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S119>/deltax' */
      localB->Product2[0] = localP->deltax_Y0;
      localB->Product2[1] = localP->deltax_Y0;
      localDW->EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S98>/Enabled Subsystem' */

  /* Sum: '<S98>/Add' */
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
static real_T StateFlowFinal_mpower(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

/* Function for MATLAB Function: '<S58>/g' */
static void StateFlowFinal_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f)
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
static void StateFlowFinal_ldm7t(real_T x, real_T *G, real_T *F, real_T *f)
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
static void StateFlowFinal_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f)
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
static real_T StateFlowFinal_norm_n(const real_T x[4])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 2.2250738585072014E-308;
  absxk = fabs(x[0]);
  if (absxk > 2.2250738585072014E-308) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 2.2250738585072014E-308;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[3]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

/* Model output function */
static void StateFlowFinal_output(void)
{
  int32_T bitIdx;
  int32_T i;
  boolean_T sf_internal_predicateOutput;
  real_T x3;
  real_T x4;
  real_T x5;
  real_T F;
  real_T T5;
  real_T J[4];
  real_T theta_p[2];
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
  real_T M[4];
  real_T K[4];
  static const real_T y[4] = { 0.0522, 0.0, 0.0, 0.0522 };

  static const real_T Jm[4] = { 1.7E-5, 0.0, 0.0, 1.7E-5 };

  static const real_T o_a[4] = { 0.015625, 0.0, 0.0, 0.015625 };

  static const int8_T p_a[4] = { 64, 0, 0, 64 };

  static const real_T b_a[8] = { 0.055555555555555552, 0.0, 0.0,
    0.055555555555555552, 0.1111111111111111, 0.0, 0.0, 0.1111111111111111 };

  real_T x1;
  real_T x2;
  real_T G1;
  real_T tmp[4];
  real_T tmp_0[4];
  real_T y_0[4];
  real_T tmp_1[4];
  real_T tmp_2[4];
  real_T tmp_3[4];
  real_T tmp_4[4];
  real_T M_0[2];
  real_T p_a_0[2];
  uint32_T prevT_idx_0;
  uint32_T elapseTime_idx_0;
  uint32_T prevT_idx_1;
  real_T J_p_idx_0;
  real_T J_p_idx_1;
  real_T J_p_idx_3;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;

  {
    /* user code (Output function Header) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init  Process Received Frames ------------*/
      int32_T data[6]= { 0 };

      int32_T msdata[4] = { 0 };

      xpcEtherCATReadProcessData(0,NULL);
      mwErrorGet((int_T)0,
                 &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
      memcpy(&StateFlowFinal_B.EtherCATInit[0], data,6*sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateFlowFinal_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC
      (StateFlowFinal_DW.UseCurrentEstimator_e.EnabledSubsystem_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateFlowFinal_DW.Posizionamento_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateFlowFinal_DW.Setting_SubsysRanBC);

    /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/Asse A braccia'
     */
    j_a = floor(StateFlowFinal_P.AsseAbraccia_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowFinal_B.DataTypeConversion7 = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion7' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Asse A vite'
     */
    j_a = floor(StateFlowFinal_P.AsseAvite_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowFinal_B.DataTypeConversion2 = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/Asse B braccia'
     */
    j_a = floor(StateFlowFinal_P.AsseBbraccia_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowFinal_B.DataTypeConversion5 = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion5' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/Asse B vite'
     */
    j_a = floor(StateFlowFinal_P.AsseBvite_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowFinal_B.DataTypeConversion1_p = (int8_T)(j_a < 0.0 ? (int32_T)
      (int8_T)-(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */

    /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S9>/convert' */
    StateFlowFinal_B.convert = StateFlowFinal_B.MotorebracciaA;

    /* S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */

    /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S9>/convert 10 ' */
    StateFlowFinal_B.convert10 = StateFlowFinal_B.MotorebracciaB;

    /* Clock: '<Root>/Clock' */
    StateFlowFinal_B.Clock = StateFlowFinal_M->Timing.t[0];

    /* S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */

    /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert' */
    StateFlowFinal_B.convert_k = StateFlowFinal_B.MotoreviteA;

    /* S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */

    /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[7];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert 10 ' */
    StateFlowFinal_B.convert10_p = StateFlowFinal_B.MotoreviteB;

    /* S-Function (xpcethercatpdorx): '<S14>/Status Word' */

    /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S14>/Data Type Conversion6' */
    StateFlowFinal_B.DataTypeConversion6 = StateFlowFinal_B.StatusWord;

    /* S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion8' */
    StateFlowFinal_B.DataTypeConversion8 = StateFlowFinal_B.EtherCATPDOReceive16;

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      prevT_idx_1 = (uint32_T)StateFlowFinal_B.DataTypeConversion8;
      for (i = 0; i < 16; i++) {
        StateFlowFinal_B.IntegertoBitConverter[bitIdx] = (int32_T)prevT_idx_1 &
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
      SimStruct *rts = StateFlowFinal_M->childSfunctions[10];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S2>/Data Type Conversion8' */
    StateFlowFinal_B.DataTypeConversion8_f =
      StateFlowFinal_B.EtherCATPDOReceive16_d;

    /* S-Function (scominttobit): '<S2>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      prevT_idx_1 = (uint32_T)StateFlowFinal_B.DataTypeConversion8_f;
      for (i = 0; i < 16; i++) {
        StateFlowFinal_B.IntegertoBitConverter_d[bitIdx] = (int32_T)prevT_idx_1
          & 1;
        prevT_idx_1 >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S2>/Integer to Bit Converter' */

    /* Constant: '<Root>/StartHome' */
    StateFlowFinal_B.StartHome = StateFlowFinal_P.StartHome_Value;

    /* Constant: '<Root>/StartRobot' */
    StateFlowFinal_B.StartRobot = StateFlowFinal_P.StartRobot_Value;

    /* Constant: '<Root>/StartWork' */
    StateFlowFinal_B.StartWork = StateFlowFinal_P.StartWork_Value;

    /* Constant: '<Root>/Reset' */
    StateFlowFinal_B.Reset = StateFlowFinal_P.Reset_Value;

    /* Constant: '<Root>/Stop' */
    StateFlowFinal_B.Stop = StateFlowFinal_P.Stop_Value;

    /* Constant: '<Root>/StartZero' */
    StateFlowFinal_B.StartZero = StateFlowFinal_P.StartZero_Value;

    /* Constant: '<Root>/Discesa' */
    StateFlowFinal_B.Discesa = StateFlowFinal_P.Discesa_Value;

    /* Constant: '<Root>/Abbassa' */
    StateFlowFinal_B.Abbassa = StateFlowFinal_P.Abbassa_Value;

    /* Chart: '<Root>/State flow robot' */
    if (StateFlowFinal_DW.temporalCounter_i1 < 65535U) {
      StateFlowFinal_DW.temporalCounter_i1++;
    }

    /* Gateway: State flow robot */
    StateFlowFinal_DW.sfEvent = -1;

    /* During: State flow robot */
    if (StateFlowFinal_DW.is_active_c15_StateFlowFinal == 0U) {
      /* Entry: State flow robot */
      StateFlowFinal_DW.is_active_c15_StateFlowFinal = 1U;

      /* Entry Internal: State flow robot */
      /* Transition: '<S13>:36' */
      StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Step1;

      /* Entry 'Step1': '<S13>:28' */
      StateFlowFinal_B.Bool = -1.0;
    } else {
      switch (StateFlowFinal_DW.is_c15_StateFlowFinal) {
       case StateFlowFinal_IN_Attivazione:
        StateFlowFinal_B.Enable = 1.0;
        StateFlowFinal_B.Bool = 0.0;

        /* During 'Attivazione': '<S13>:231' */
        if (StateFlowFinal_B.StartZero == 1.0) {
          /* Transition: '<S13>:232' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Home;

          /* Entry 'Home': '<S13>:29' */
          StateFlowFinal_B.Bool = 1.0;
          StateFlowFinal_DW.conv = 5.9921124526782858E-6;
          StateFlowFinal_DW.conv_vite = 1.220703125E-7;
          StateFlowFinal_B.Luci = 1.0;
          StateFlowFinal_B.FineLavorazione = 0.0;
          StateFlowFinal_B.PosRifA = StateFlowFinal_DW.conv * 180.0 /
            3.1415926535897931 * StateFlowFinal_B.convert;

          /* posA in gradi */
          StateFlowFinal_B.PosRifB = StateFlowFinal_DW.conv * 180.0 /
            3.1415926535897931 * StateFlowFinal_B.convert10;

          /* posB in gradi */
        }
        break;

       case StateFlowFinal_IN_Controllo:
        StateFlowFinal_B.Hv = 0.0;
        StateFlowFinal_B.Luci = 4.0;
        StateFlowFinal_B.Bool = 4.0;
        StateFlowFinal_B.Hb = 0.0;

        /* During 'Controllo': '<S13>:147' */
        if (StateFlowFinal_DW.temporalCounter_i1 >= 40000U) {
          /* Transition: '<S13>:148' */
          StateFlowFinal_DW.is_c15_StateFlowFinal =
            StateFlowFin_IN_FineLavorazione;
          StateFlowFinal_DW.temporalCounter_i1 = 0U;

          /* Entry 'FineLavorazione': '<S13>:69' */
          StateFlowFinal_B.Bool = 5.0;
          StateFlowFinal_B.Luci = 5.0;
          StateFlowFinal_B.FineLavorazione = 1.0;
          StateFlowFinal_B.Hv = 0.0;
          StateFlowFinal_B.Hb = 0.0;
        } else {
          if (StateFlowFinal_B.Stop == 1.0) {
            /* Transition: '<S13>:248' */
            StateFlowFinal_DW.is_c15_StateFlowFinal =
              StateFlowFinal_IN_StopPhase;

            /* Entry 'StopPhase': '<S13>:247' */
            StateFlowFinal_B.Bool = 3.0;
            StateFlowFinal_B.CoppiaA = 0.0;
            StateFlowFinal_B.CoppiaB = 0.0;
            StateFlowFinal_B.CoppiaH = 0.0;
          }
        }
        break;

       case StateFlowFinal_IN_Discesa_Vite:
        StateFlowFinal_B.Hb = 1.0;

        /* During 'Discesa_Vite': '<S13>:176' */
        /* Transition: '<S13>:177' */
        StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_OffSet;

        /* Entry 'OffSet': '<S13>:87' */
        StateFlowFinal_B.CoppiaH = 0.0;
        StateFlowFinal_B.CoppiaA = 0.0;
        StateFlowFinal_B.CoppiaB = 0.0;
        StateFlowFinal_B.OffA = StateFlowFinal_B.convert;
        StateFlowFinal_B.OffB = StateFlowFinal_B.convert10;
        StateFlowFinal_DW.OffA_0 = StateFlowFinal_B.convert;
        StateFlowFinal_DW.OffB_0 = StateFlowFinal_B.convert10;
        StateFlowFinal_B.Bool = 2.0;
        StateFlowFinal_B.Luci = 3.0;
        StateFlowFinal_B.Hv = 1.0;
        StateFlowFinal_B.OffA_vite = StateFlowFinal_B.convert_k;
        StateFlowFinal_B.OffB_vite = StateFlowFinal_B.convert10_p;
        break;

       case StateFlowFin_IN_FineLavorazione:
        StateFlowFinal_B.Hv = 0.0;
        StateFlowFinal_B.Luci = 5.0;
        StateFlowFinal_B.FineLavorazione = 1.0;
        StateFlowFinal_B.Bool = 5.0;
        StateFlowFinal_B.Hb = 0.0;

        /* During 'FineLavorazione': '<S13>:69' */
        sf_internal_predicateOutput = (((StateFlowFinal_DW.temporalCounter_i1 >=
          10000U) && (StateFlowFinal_B.StartHome == 1.0)) ||
          (StateFlowFinal_B.Reset == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:243' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Home;

          /* Entry 'Home': '<S13>:29' */
          StateFlowFinal_B.Bool = 1.0;
          StateFlowFinal_DW.conv = 5.9921124526782858E-6;
          StateFlowFinal_DW.conv_vite = 1.220703125E-7;
          StateFlowFinal_B.Luci = 1.0;
          StateFlowFinal_B.FineLavorazione = 0.0;
          StateFlowFinal_B.PosRifA = StateFlowFinal_DW.conv * 180.0 /
            3.1415926535897931 * StateFlowFinal_B.convert;

          /* posA in gradi */
          StateFlowFinal_B.PosRifB = StateFlowFinal_DW.conv * 180.0 /
            3.1415926535897931 * StateFlowFinal_B.convert10;

          /* posB in gradi */
        }
        break;

       case StateFlowFinal_IN_Home:
        StateFlowFinal_B.Luci = 1.0;
        StateFlowFinal_B.FineLavorazione = 0.0;
        StateFlowFinal_B.Bool = 1.0;

        /* During 'Home': '<S13>:29' */
        sf_internal_predicateOutput = ((StateFlowFinal_B.IntegertoBitConverter
          [14] == 0.0) && (StateFlowFinal_B.IntegertoBitConverter_d[7] == 1.0) &&
          (StateFlowFinal_B.IntegertoBitConverter_d[14] == 1.0) &&
          (StateFlowFinal_B.StartHome == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:277' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_HomeDef;

          /* Entry 'HomeDef': '<S13>:329' */
          StateFlowFinal_DW.OffA_0 = StateFlowFinal_B.convert;
          StateFlowFinal_DW.OffB_0 = StateFlowFinal_B.convert10;
          StateFlowFinal_B.Luci = 2.0;
          StateFlowFinal_B.OffT = StateFlowFinal_B.Clock;
        } else {
          StateFlowFinal_B.PosRifA -= 0.02;
          StateFlowFinal_B.PosRifB -= 0.02;
          StateFlowFinal_B.Stato = 0.0;

          /* Simulink Function 'Setting': '<S13>:305' */
          StateFlowFinal_B.Fc = StateFlowFinal_B.IntegertoBitConverter[14];
          StateFlowFinal_B.Fca = StateFlowFinal_B.IntegertoBitConverter_d[7];
          StateFlowFinal_B.Fcb = StateFlowFinal_B.IntegertoBitConverter_d[14];
          StateFlowFinal_B.posrifA = StateFlowFinal_B.PosRifA;
          StateFlowFinal_B.posrifB = StateFlowFinal_B.PosRifB;
          StateFlowFinal_B.posA_k = StateFlowFinal_B.convert;
          StateFlowFinal_B.posB_c = StateFlowFinal_B.convert10;

          /* Outputs for Function Call SubSystem: '<S13>/Setting' */
          if (StateFlowFinal_DW.Setting_RESET_ELAPS_T) {
            StateFlowFinal_DW.Setting_ELAPS_T[0] = 0U;
            StateFlowFinal_DW.Setting_ELAPS_T[1] = 0U;
          } else {
            prevT_idx_0 = StateFlowFinal_DW.Setting_PREV_T[0];
            prevT_idx_1 = StateFlowFinal_DW.Setting_PREV_T[1];
            elapseTime_idx_0 = StateFlowFinal_M->Timing.clockTick1 - prevT_idx_0;
            prevT_idx_1 = StateFlowFinal_M->Timing.clockTickH1 - prevT_idx_1;
            if (prevT_idx_0 > StateFlowFinal_M->Timing.clockTick1) {
              prevT_idx_1--;
            }

            StateFlowFinal_DW.Setting_ELAPS_T[0] = elapseTime_idx_0;
            StateFlowFinal_DW.Setting_ELAPS_T[1] = prevT_idx_1;
          }

          prevT_idx_0 = StateFlowFinal_M->Timing.clockTick1;
          prevT_idx_1 = StateFlowFinal_M->Timing.clockTickH1;
          StateFlowFinal_DW.Setting_PREV_T[0] = prevT_idx_0;
          StateFlowFinal_DW.Setting_PREV_T[1] = prevT_idx_1;
          StateFlowFinal_DW.Setting_RESET_ELAPS_T = false;

          /* DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
          if (StateFlowFinal_DW.DiscreteTimeIntegrator1_SYSTEM_ != 0) {
            StateFlowFinal_B.DiscreteTimeIntegrator1 =
              StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTATE;
          } else {
            StateFlowFinal_B.DiscreteTimeIntegrator1 =
              StateFlowFinal_P.DiscreteTimeIntegrator1_gainv_o * (real_T)
              StateFlowFinal_DW.Setting_ELAPS_T[0] *
              StateFlowFinal_DW.DiscreteTimeIntegrator1_PREV_U +
              StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTATE;
          }

          /* End of DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
          /* DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
          if (StateFlowFinal_DW.DiscreteTimeIntegrator_SYSTEM_E != 0) {
            StateFlowFinal_B.DiscreteTimeIntegrator =
              StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE;
          } else {
            StateFlowFinal_B.DiscreteTimeIntegrator =
              StateFlowFinal_P.DiscreteTimeIntegrator_gainva_l * (real_T)
              StateFlowFinal_DW.Setting_ELAPS_T[0] *
              StateFlowFinal_DW.DiscreteTimeIntegrator_PREV_U +
              StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE;
          }

          /* End of DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
          /* Gain: '<S199>/Gain' */
          StateFlowFinal_B.Gain_i = StateFlowFinal_P.Gain_Gain_d *
            StateFlowFinal_B.posA_k;

          /* Gain: '<S199>/Gain1' */
          StateFlowFinal_B.Gain1_f = StateFlowFinal_P.Gain1_Gain_e *
            StateFlowFinal_B.posB_c;

          /* Sum: '<S199>/Sum1' */
          StateFlowFinal_B.Sum1_i = StateFlowFinal_B.posrifA -
            StateFlowFinal_B.Gain_i;

          /* Sum: '<S199>/Sum2' */
          StateFlowFinal_B.Sum2_b = StateFlowFinal_B.posrifB -
            StateFlowFinal_B.Gain1_f;

          /* MATLAB Function: '<S199>/MATLAB Function' incorporates:
           *  Constant: '<S199>/Ki'
           *  Constant: '<S199>/Kp'
           */
          /* MATLAB Function 'State flow robot/Setting/MATLAB Function': '<S202>:1' */
          if (StateFlowFinal_B.Fc < 1.0) {
            /* '<S202>:1:6' */
            /* '<S202>:1:7' */
            StateFlowFinal_B.CH = 0.0;
          } else {
            /* '<S202>:1:9' */
            StateFlowFinal_B.CH = -600.0;
          }

          if (StateFlowFinal_B.Fca == 1.0) {
            /* '<S202>:1:11' */
            /* '<S202>:1:12' */
            StateFlowFinal_B.CA = 0.0;
          } else {
            /* '<S202>:1:14' */
            StateFlowFinal_B.CA = StateFlowFinal_P.Kp_Value *
              StateFlowFinal_B.Sum1_i + StateFlowFinal_P.Ki_Value *
              StateFlowFinal_B.DiscreteTimeIntegrator;
          }

          if (StateFlowFinal_B.Fcb == 1.0) {
            /* '<S202>:1:16' */
            /* '<S202>:1:17' */
            StateFlowFinal_B.CB = 0.0;
          } else {
            /* '<S202>:1:19' */
            StateFlowFinal_B.CB = StateFlowFinal_P.Kp_Value *
              StateFlowFinal_B.Sum2_b + StateFlowFinal_P.Ki_Value *
              StateFlowFinal_B.DiscreteTimeIntegrator1;
          }

          /* End of MATLAB Function: '<S199>/MATLAB Function' */

          /* Update for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
          StateFlowFinal_DW.DiscreteTimeIntegrator1_SYSTEM_ = 0U;
          StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTATE =
            StateFlowFinal_B.DiscreteTimeIntegrator1;
          StateFlowFinal_DW.DiscreteTimeIntegrator1_PREV_U =
            StateFlowFinal_B.Sum2_b;

          /* Update for DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
          StateFlowFinal_DW.DiscreteTimeIntegrator_SYSTEM_E = 0U;
          StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE =
            StateFlowFinal_B.DiscreteTimeIntegrator;
          StateFlowFinal_DW.DiscreteTimeIntegrator_PREV_U =
            StateFlowFinal_B.Sum1_i;
          StateFlowFinal_DW.Setting_SubsysRanBC = 4;

          /* End of Outputs for SubSystem: '<S13>/Setting' */
          StateFlowFinal_B.CoppiaA = StateFlowFinal_B.CA;
          StateFlowFinal_B.CoppiaB = StateFlowFinal_B.CB;
          StateFlowFinal_B.CoppiaH = StateFlowFinal_B.CH;
        }
        break;

       case StateFlowFinal_IN_HomeDef:
        StateFlowFinal_B.Luci = 2.0;

        /* During 'HomeDef': '<S13>:329' */
        sf_internal_predicateOutput = ((StateFlowFinal_B.CoppiaA == 0.0) &&
          (StateFlowFinal_B.CoppiaB == 0.0) && (StateFlowFinal_B.Abbassa == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:332' */
          StateFlowFinal_DW.is_c15_StateFlowFinal =
            StateFlowFinal_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S13>:176' */
          StateFlowFinal_B.OffA_vite = StateFlowFinal_B.convert_k;
          StateFlowFinal_B.CoppiaH = 0.0;
          StateFlowFinal_B.Hb = 1.0;
        } else {
          /* Simulink Function 'Posizionamento': '<S13>:320' */
          StateFlowFinal_B.posA = StateFlowFinal_B.convert;
          StateFlowFinal_B.posB = StateFlowFinal_B.convert10;
          StateFlowFinal_B.OffA_0 = StateFlowFinal_DW.OffA_0;
          StateFlowFinal_B.OffB_0 = StateFlowFinal_DW.OffB_0;
          StateFlowFinal_B.Clock_a = StateFlowFinal_B.Clock;
          StateFlowFinal_B.OffT_a = StateFlowFinal_B.OffT;

          /* Outputs for Function Call SubSystem: '<S13>/Posizionamento' */
          if (StateFlowFinal_DW.Posizionamento_RESET_ELAPS_T) {
            StateFlowFinal_DW.Posizionamento_ELAPS_T[0] = 0U;
            StateFlowFinal_DW.Posizionamento_ELAPS_T[1] = 0U;
          } else {
            prevT_idx_0 = StateFlowFinal_DW.Posizionamento_PREV_T[0];
            prevT_idx_1 = StateFlowFinal_DW.Posizionamento_PREV_T[1];
            elapseTime_idx_0 = StateFlowFinal_M->Timing.clockTick1 - prevT_idx_0;
            prevT_idx_1 = StateFlowFinal_M->Timing.clockTickH1 - prevT_idx_1;
            if (prevT_idx_0 > StateFlowFinal_M->Timing.clockTick1) {
              prevT_idx_1--;
            }

            StateFlowFinal_DW.Posizionamento_ELAPS_T[0] = elapseTime_idx_0;
            StateFlowFinal_DW.Posizionamento_ELAPS_T[1] = prevT_idx_1;
          }

          prevT_idx_0 = StateFlowFinal_M->Timing.clockTick1;
          prevT_idx_1 = StateFlowFinal_M->Timing.clockTickH1;
          StateFlowFinal_DW.Posizionamento_PREV_T[0] = prevT_idx_0;
          StateFlowFinal_DW.Posizionamento_PREV_T[1] = prevT_idx_1;
          StateFlowFinal_DW.Posizionamento_RESET_ELAPS_T = false;

          /* Sum: '<S198>/Sum1' */
          StateFlowFinal_B.Sum1_e = StateFlowFinal_B.posB -
            StateFlowFinal_B.OffB_0;

          /* Gain: '<S198>/Conversione in gradi ' */
          StateFlowFinal_B.Conversioneingradi =
            StateFlowFinal_P.Conversioneingradi_Gain * StateFlowFinal_B.Sum1_e;

          /* DiscreteIntegrator: '<S198>/Discrete-Time Integrator' */
          if (StateFlowFinal_DW.DiscreteTimeIntegrator_SYSTEM_j != 0) {
            StateFlowFinal_B.DiscreteTimeIntegrator_i =
              StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE_c;
          } else {
            StateFlowFinal_B.DiscreteTimeIntegrator_i =
              StateFlowFinal_P.DiscreteTimeIntegrator_gainval * (real_T)
              StateFlowFinal_DW.Posizionamento_ELAPS_T[0] *
              StateFlowFinal_DW.DiscreteTimeIntegrator_PREV_U_j +
              StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE_c;
          }

          /* End of DiscreteIntegrator: '<S198>/Discrete-Time Integrator' */

          /* DiscreteIntegrator: '<S198>/Discrete-Time Integrator1' */
          if (StateFlowFinal_DW.DiscreteTimeIntegrator1_SYSTE_c != 0) {
            StateFlowFinal_B.DiscreteTimeIntegrator1_b =
              StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTAT_j;
          } else {
            StateFlowFinal_B.DiscreteTimeIntegrator1_b =
              StateFlowFinal_P.DiscreteTimeIntegrator1_gainval * (real_T)
              StateFlowFinal_DW.Posizionamento_ELAPS_T[0] *
              StateFlowFinal_DW.DiscreteTimeIntegrator1_PREV__o +
              StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTAT_j;
          }

          /* End of DiscreteIntegrator: '<S198>/Discrete-Time Integrator1' */

          /* Sum: '<S198>/Sum2' */
          StateFlowFinal_B.Sum2_g = StateFlowFinal_B.posA -
            StateFlowFinal_B.OffA_0;

          /* Gain: '<S198>/Gain1' */
          StateFlowFinal_B.Gain1_e = StateFlowFinal_P.Gain1_Gain *
            StateFlowFinal_B.Sum2_g;

          /* Gain: '<S198>/Ki1' */
          StateFlowFinal_B.Ki1 = StateFlowFinal_P.Ki1_Gain *
            StateFlowFinal_B.DiscreteTimeIntegrator_i;

          /* Gain: '<S198>/Ki2' */
          StateFlowFinal_B.Ki2 = StateFlowFinal_P.Ki2_Gain *
            StateFlowFinal_B.DiscreteTimeIntegrator1_b;

          /* Sum: '<S198>/Sum' */
          StateFlowFinal_B.Sum_h = StateFlowFinal_B.Clock_a -
            StateFlowFinal_B.OffT_a;

          /* MATLAB Function: '<S198>/MATLAB Function' */
          /* MATLAB Function 'State flow robot/Posizionamento/MATLAB Function': '<S200>:1' */
          /* '<S200>:1:3' */
          /* '<S200>:1:4' */
          /*  */
          /* '<S200>:1:8' */
          x1 = (StateFlowFinal_B.Sum_h - 1.0) / 1.5;

          /* '<S200>:1:9' */
          x2 = StateFlowFinal_B.Sum_h / 2.5;

          /*  theta1 */
          if ((x1 >= 0.0) && (x1 <= 1.0)) {
            /* '<S200>:1:11' */
            /* '<S200>:1:15' */
            G1 = (10.0 * rt_powd_snf(x1, 3.0) - 15.0 * rt_powd_snf(x1, 4.0)) +
              6.0 * rt_powd_snf(x1, 5.0);
          } else if (x1 < 0.0) {
            /* '<S200>:1:16' */
            /* '<S200>:1:20' */
            G1 = 0.0;
          } else {
            /* '<S200>:1:25' */
            G1 = 1.0;
          }

          /*  theta2 */
          if ((x2 >= 0.0) && (x2 <= 1.0)) {
            /* '<S200>:1:28' */
            /* '<S200>:1:32' */
            x2 = (10.0 * rt_powd_snf(x2, 3.0) - 15.0 * rt_powd_snf(x2, 4.0)) +
              6.0 * rt_powd_snf(x2, 5.0);
          } else {
            /* '<S200>:1:37' */
            x2 = 1.0;
          }

          /* '<S200>:1:40' */
          StateFlowFinal_B.theta1 = 46.7149 * G1;

          /* '<S200>:1:42' */
          StateFlowFinal_B.theta2 = 101.1994 * x2;

          /* End of MATLAB Function: '<S198>/MATLAB Function' */

          /* Sum: '<S198>/Sum3' */
          StateFlowFinal_B.Sum3_a = StateFlowFinal_B.theta1 -
            StateFlowFinal_B.Conversioneingradi;

          /* Gain: '<S198>/Kp1' */
          StateFlowFinal_B.Kp1_g = StateFlowFinal_P.Kp1_Gain *
            StateFlowFinal_B.Sum3_a;

          /* Sum: '<S198>/Sum4' */
          StateFlowFinal_B.Sum4_f = StateFlowFinal_B.theta2 -
            StateFlowFinal_B.Gain1_e;

          /* Gain: '<S198>/Kp2' */
          StateFlowFinal_B.Kp2 = StateFlowFinal_P.Kp2_Gain *
            StateFlowFinal_B.Sum4_f;

          /* Sum: '<S198>/Sum5' */
          StateFlowFinal_B.Sum5_p = StateFlowFinal_B.Ki1 +
            StateFlowFinal_B.Kp1_g;

          /* Sum: '<S198>/Sum6' */
          StateFlowFinal_B.Sum6_n = StateFlowFinal_B.Kp2 + StateFlowFinal_B.Ki2;

          /* MATLAB Function: '<S198>/MATLAB Function1' */
          /* MATLAB Function 'State flow robot/Posizionamento/MATLAB Function1': '<S201>:1' */
          if (StateFlowFinal_B.Sum_h > 4.0) {
            /* '<S201>:1:3' */
            /* '<S201>:1:4' */
            StateFlowFinal_B.CA_o = 0.0;

            /* '<S201>:1:5' */
            StateFlowFinal_B.CB_b = 0.0;
          } else {
            /* '<S201>:1:7' */
            StateFlowFinal_B.CA_o = StateFlowFinal_B.Sum6_n;

            /* '<S201>:1:8' */
            StateFlowFinal_B.CB_b = StateFlowFinal_B.Sum5_p;
          }

          /* End of MATLAB Function: '<S198>/MATLAB Function1' */

          /* Update for DiscreteIntegrator: '<S198>/Discrete-Time Integrator' */
          StateFlowFinal_DW.DiscreteTimeIntegrator_SYSTEM_j = 0U;
          StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE_c =
            StateFlowFinal_B.DiscreteTimeIntegrator_i;
          StateFlowFinal_DW.DiscreteTimeIntegrator_PREV_U_j =
            StateFlowFinal_B.Sum3_a;

          /* Update for DiscreteIntegrator: '<S198>/Discrete-Time Integrator1' */
          StateFlowFinal_DW.DiscreteTimeIntegrator1_SYSTE_c = 0U;
          StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTAT_j =
            StateFlowFinal_B.DiscreteTimeIntegrator1_b;
          StateFlowFinal_DW.DiscreteTimeIntegrator1_PREV__o =
            StateFlowFinal_B.Sum4_f;
          StateFlowFinal_DW.Posizionamento_SubsysRanBC = 4;

          /* End of Outputs for SubSystem: '<S13>/Posizionamento' */
          StateFlowFinal_B.CoppiaA = StateFlowFinal_B.CA_o;
          StateFlowFinal_B.CoppiaB = StateFlowFinal_B.CB_b;
        }
        break;

       case StateFlowFinal_IN_OffSet:
        StateFlowFinal_B.Hv = 1.0;
        StateFlowFinal_B.Luci = 3.0;
        StateFlowFinal_B.Bool = 2.0;

        /* During 'OffSet': '<S13>:87' */
        if (StateFlowFinal_B.StartWork == 1.0) {
          /* Transition: '<S13>:90' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Controllo;
          StateFlowFinal_DW.temporalCounter_i1 = 0U;

          /* Entry 'Controllo': '<S13>:147' */
          StateFlowFinal_B.OffT = StateFlowFinal_B.Clock;
          StateFlowFinal_B.Luci = 4.0;
          StateFlowFinal_B.Bool = 4.0;
          StateFlowFinal_B.Hv = 0.0;
          StateFlowFinal_B.Hb = 0.0;
        }
        break;

       case StateFlowFinal_IN_Step1:
        StateFlowFinal_B.Bool = -1.0;

        /* During 'Step1': '<S13>:28' */
        sf_internal_predicateOutput = ((StateFlowFinal_B.DataTypeConversion6 ==
          1079.0) && (StateFlowFinal_B.StartRobot == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:35' */
          StateFlowFinal_DW.is_c15_StateFlowFinal =
            StateFlowFinal_IN_Attivazione;

          /* Entry 'Attivazione': '<S13>:231' */
          StateFlowFinal_B.Bool = 0.0;
          StateFlowFinal_B.Enable = 1.0;
        }
        break;

       default:
        StateFlowFinal_B.Bool = 3.0;

        /* During 'StopPhase': '<S13>:247' */
        if (StateFlowFinal_B.Reset == 1.0) {
          /* Transition: '<S13>:249' */
          StateFlowFinal_DW.is_c15_StateFlowFinal =
            StateFlowFinal_IN_Attivazione;

          /* Entry 'Attivazione': '<S13>:231' */
          StateFlowFinal_B.Bool = 0.0;
          StateFlowFinal_B.Enable = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/State flow robot' */
    /* MATLAB Function: '<S3>/MATLAB Function1' */
    /* MATLAB Function 'LED Status/MATLAB Function1': '<S16>:1' */
    if ((StateFlowFinal_B.Luci == 1.0) || (StateFlowFinal_B.Luci == 2.0) ||
        (StateFlowFinal_B.Luci == 4.0)) {
      /* '<S16>:1:2' */
      /* '<S16>:1:3' */
      StateFlowFinal_B.y_b = 1.0;
    } else {
      /* '<S16>:1:5' */
      StateFlowFinal_B.y_b = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function1' */

    /* DataTypeConversion: '<S3>/Data Type Conversion25' */
    StateFlowFinal_B.DataTypeConversion25 = (StateFlowFinal_B.y_b != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */

    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[11];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function' */
    /* MATLAB Function 'LED Status/MATLAB Function': '<S15>:1' */
    if ((StateFlowFinal_B.Luci == 2.0) || (StateFlowFinal_B.Luci == 3.0)) {
      /* '<S15>:1:2' */
      /* '<S15>:1:3' */
      StateFlowFinal_B.y_i = 1.0;
    } else {
      /* '<S15>:1:5' */
      StateFlowFinal_B.y_i = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function' */

    /* DataTypeConversion: '<S3>/Data Type Conversion24' */
    StateFlowFinal_B.DataTypeConversion24 = (StateFlowFinal_B.y_i != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */

    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[12];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function2' */
    /* MATLAB Function 'LED Status/MATLAB Function2': '<S17>:1' */
    if ((StateFlowFinal_B.Luci == 4.0) || (StateFlowFinal_B.Luci == 5.0)) {
      /* '<S17>:1:2' */
      /* '<S17>:1:3' */
      StateFlowFinal_B.y_f = 1.0;
    } else {
      /* '<S17>:1:5' */
      StateFlowFinal_B.y_f = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function2' */

    /* DataTypeConversion: '<S3>/Data Type Conversion26' */
    StateFlowFinal_B.DataTypeConversion26 = (StateFlowFinal_B.y_f != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */

    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[13];
      sfcnOutputs(rts,1);
    }

    /* Memory: '<S23>/Memory' */
    StateFlowFinal_B.Memory = StateFlowFinal_DW.Memory_PreviousInput;

    /* Sum: '<S67>/Sum12' */
    StateFlowFinal_B.Sum12 = StateFlowFinal_B.convert10 - StateFlowFinal_B.OffB;

    /* MATLAB Function: '<S67>/Asse B conv brac1' */
    /* MATLAB Function 'Sistema_braccia/Posizioni/Asse B conv brac1': '<S172>:1' */
    /* '<S172>:1:2' */
    StateFlowFinal_B.pos_B_conv = StateFlowFinal_B.Sum12 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S67>/Sum4' incorporates:
     *  Constant: '<S67>/Constant4'
     */
    StateFlowFinal_B.Sum4 = StateFlowFinal_B.pos_B_conv +
      StateFlowFinal_P.Constant4_Value;

    /* Sum: '<S67>/Sum9' */
    StateFlowFinal_B.Sum9 = StateFlowFinal_B.convert - StateFlowFinal_B.OffA;

    /* MATLAB Function: '<S67>/Asse A conv bracc' */
    /* MATLAB Function 'Sistema_braccia/Posizioni/Asse A conv bracc': '<S171>:1' */
    /* '<S171>:1:2' */
    StateFlowFinal_B.pos_A_conv = StateFlowFinal_B.Sum9 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S67>/Sum7' incorporates:
     *  Constant: '<S67>/Constant5'
     */
    StateFlowFinal_B.Sum7 = StateFlowFinal_B.pos_A_conv +
      StateFlowFinal_P.Constant5_Value;

    /* S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S71>/Velocity B' */
    StateFlowFinal_B.VelocityB = StateFlowFinal_B.EtherCATPDOReceive15;

    /* MATLAB Function: '<S71>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse B conv': '<S197>:1' */
    /* '<S197>:1:2' */
    StateFlowFinal_B.vel_B_conv = StateFlowFinal_B.VelocityB *
      6.2831853071795862 / 163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S71>/Velocity A' */
    StateFlowFinal_B.VelocityA = StateFlowFinal_B.EtherCATPDOReceive14;

    /* MATLAB Function: '<S71>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse A conv': '<S196>:1' */
    /* '<S196>:1:2' */
    StateFlowFinal_B.vel_A_conv = StateFlowFinal_B.VelocityA *
      6.2831853071795862 / 163840.0 / 64.0;

    /* MATLAB Function: '<S66>/Cinematica Inversa2' incorporates:
     *  Constant: '<S66>/Constant'
     *  Constant: '<S66>/Constant1'
     */
    /* MATLAB Function 'Sistema_braccia/Pos iniziali/Cinematica Inversa2': '<S170>:1' */
    /* '<S170>:1:3' */
    /* '<S170>:1:4' */
    /* '<S170>:1:6' */
    x2 = sin(StateFlowFinal_P.Constant1_Value) - sin
      (StateFlowFinal_P.Constant_Value_b);
    J_p_idx_1 = -0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                         (StateFlowFinal_P.Constant_Value_b)) * 0.25;
    x2 = x2 * x2 * 0.0625 + J_p_idx_1 * J_p_idx_1;

    /* '<S170>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                         (StateFlowFinal_P.Constant_Value_b)) * 0.25;
    x1 = ((-0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                    (StateFlowFinal_P.Constant_Value_b)) * 0.25) * ((sin
            (StateFlowFinal_P.Constant1_Value) - sin
            (StateFlowFinal_P.Constant_Value_b)) * 0.25) * (-0.18 - 0.5 * cos
           (StateFlowFinal_P.Constant1_Value)) + (sin
           (StateFlowFinal_P.Constant1_Value) - sin
           (StateFlowFinal_P.Constant_Value_b)) * -0.01125 * (cos
           (StateFlowFinal_P.Constant1_Value) + cos
           (StateFlowFinal_P.Constant_Value_b))) - 0.5 * sin
      (StateFlowFinal_P.Constant1_Value) * (J_p_idx_3 * J_p_idx_3);

    /* '<S170>:1:10' */
    x4 = cos(StateFlowFinal_P.Constant1_Value) + cos
      (StateFlowFinal_P.Constant_Value_b);
    x5 = -0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                  (StateFlowFinal_P.Constant_Value_b)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S170>:1:14' */
    x2 = (sqrt(x1 * x1 - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
               (StateFlowFinal_P.Constant1_Value) - cos
               (StateFlowFinal_P.Constant_Value_b)) * 0.25) * ((cos
               (StateFlowFinal_P.Constant1_Value) + cos
               (StateFlowFinal_P.Constant_Value_b)) * 0.0225) * (-0.18 - 0.5 *
              cos(StateFlowFinal_P.Constant1_Value))) + (0.045 * cos
             (StateFlowFinal_P.Constant1_Value) + 0.0081) * (x5 * x5)) * (4.0 *
            x2)) + -x1) / (2.0 * x2);

    /*  Posizione X end-effector */
    /* '<S170>:1:16' */
    StateFlowFinal_B.x0 = (x2 * 0.25 * (sin(StateFlowFinal_P.Constant1_Value) -
      sin(StateFlowFinal_P.Constant_Value_b)) - (cos
      (StateFlowFinal_P.Constant1_Value) + cos(StateFlowFinal_P.Constant_Value_b))
      * 0.0225) / (-0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
      (StateFlowFinal_P.Constant_Value_b)) * 0.25);
    StateFlowFinal_B.y0 = x2;

    /* Sum: '<S53>/Sum2' */
    StateFlowFinal_B.Sum2 = StateFlowFinal_B.Clock - StateFlowFinal_B.OffT;

    /* MATLAB Function: '<S58>/Quadrato' incorporates:
     *  Constant: '<S58>/Alzata Q'
     *  Constant: '<S58>/Periodo Q'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Quadrato': '<S167>:1' */
    /* '<S167>:1:2' */
    /* '<S167>:1:3' */
    /* '<S167>:1:4' */
    x1 = StateFlowFinal_B.Sum2 / (0.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S167>:1:5' */
    x2 = (StateFlowFinal_B.Sum2 - 0.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S167>:1:6' */
    x3 = (StateFlowFinal_B.Sum2 - 1.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S167>:1:7' */
    x4 = (StateFlowFinal_B.Sum2 - 2.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S167>:1:8' */
    x5 = (StateFlowFinal_B.Sum2 - 3.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (0.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S167>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((StateFlowFinal_B.Sum2 > 0.0) && (StateFlowFinal_B.Sum2 <= 0.5 *
         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S167>:1:14' */
      if ((x1 >= 0.0) && (x1 < 0.1)) {
        /* '<S167>:1:16' */
        /* acc crescente positiva */
        /* '<S167>:1:17' */
        G1 = 55.555555555555543 * x1;

        /* '<S167>:1:18' */
        F = x1 * x1 * 27.777777777777771;

        /* '<S167>:1:19' */
        x1 = 9.259259259259256 * StateFlowFinal_mpower(x1);
      } else if ((x1 >= 0.1) && (x1 < 0.30000000000000004)) {
        /* '<S167>:1:22' */
        /* acc costante positiva */
        /* '<S167>:1:23' */
        G1 = 5.5555555555555545;

        /* '<S167>:1:24' */
        F = 5.5555555555555545 * x1 - 0.27777777777777773;

        /* '<S167>:1:25' */
        x1 = (x1 * x1 * 2.7777777777777772 - 0.27777777777777773 * x1) +
          0.0092592592592592587;
      } else if ((x1 >= 0.30000000000000004) && (x1 < 0.4)) {
        /* '<S167>:1:28' */
        /* acc decrescente positiva */
        /* '<S167>:1:29' */
        G1 = -55.555555555555543 * x1 + 22.222222222222218;

        /* '<S167>:1:30' */
        F = (x1 * x1 * -27.777777777777771 + 22.222222222222218 * x1) -
          2.7777777777777777;

        /* '<S167>:1:31' */
        x1 = ((((x1 * x1 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowFinal_mpower(x1)) - 2.7777777777777777 * x1) -
               0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x1 >= 0.4) && (x1 < 0.6)) {
        /* '<S167>:1:35' */
        /* acc costante nulla */
        /* '<S167>:1:36' */
        G1 = 0.0;

        /* '<S167>:1:37' */
        F = 1.6666666666666665;

        /* '<S167>:1:38' */
        x1 = (1.6666666666666665 * x1 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x1 >= 0.6) && (x1 < 0.7)) {
        /* '<S167>:1:41' */
        /* acc decrescente negativa */
        /* '<S167>:1:42' */
        G1 = -55.555555555555543 * x1 + 33.333333333333321;

        /* '<S167>:1:43' */
        F = ((x1 * x1 * -27.777777777777771 + 33.333333333333321 * x1) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S167>:1:44' */
        x1 = (((((x1 * x1 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowFinal_mpower(x1)) + 1.6666666666666665 * x1) -
                9.9999999999999982 * x1) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower
          (0.6);
      } else if ((x1 >= 0.7) && (x1 < 0.9)) {
        /* '<S167>:1:48' */
        /* acc costante negativa */
        /* '<S167>:1:49' */
        G1 = -5.5555555555555545;

        /* '<S167>:1:50' */
        F = (-5.5555555555555545 * x1 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S167>:1:51' */
        x1 = (((x1 * x1 * -2.7777777777777772 + 5.5555555555555545 * x1) -
               0.27777777777777773 * x1) + 1.0) - 2.5092592592592586;
      } else if ((x1 >= 0.9) && (x1 <= 1.0)) {
        /* '<S167>:1:54' */
        /* acc crescente negativa */
        /* '<S167>:1:55' */
        G1 = (x1 - 1.0) * 55.555555555555543;

        /* '<S167>:1:56' */
        F = (x1 * x1 * 27.777777777777771 - 55.555555555555543 * x1) +
          27.777777777777771;

        /* '<S167>:1:57' */
        x1 = (((9.259259259259256 * StateFlowFinal_mpower(x1) - x1 * x1 *
                27.777777777777771) + 27.777777777777771 * x1) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S167>:1:61' */
        G1 = 0.0;

        /* '<S167>:1:62' */
        F = 0.0;

        /* '<S167>:1:63' */
        x1 = 1.0;
      }

      /* '<S167>:1:66' */
      StateFlowFinal_B.xq = x1 * StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S167>:1:67' */
      StateFlowFinal_B.xq_p = StateFlowFinal_P.AlzataQ_Value / 2.0 * F /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S167>:1:68' */
      StateFlowFinal_B.yq = 0.0;

      /* '<S167>:1:69' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S167>:1:70' */
      x2 = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.xq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * G1 / (x2 *
        x2);

      /* '<S167>:1:71' */
      StateFlowFinal_B.yq_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 0.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 1.5 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S167>:1:73' */
      /* '<S167>:1:74' */
      /*  Cj = Ca/xj; */
      if ((x2 >= 0.0) && (x2 < 0.1)) {
        /* '<S167>:1:77' */
        /* acc crescente positiva */
        /* '<S167>:1:78' */
        G1 = 55.555555555555543 * x2;

        /* '<S167>:1:79' */
        F = x2 * x2 * 27.777777777777771;

        /* '<S167>:1:80' */
        x1 = 9.259259259259256 * StateFlowFinal_mpower(x2);
      } else if ((x2 >= 0.1) && (x2 < 0.30000000000000004)) {
        /* '<S167>:1:83' */
        /* acc costante positiva */
        /* '<S167>:1:84' */
        G1 = 5.5555555555555545;

        /* '<S167>:1:85' */
        F = 5.5555555555555545 * x2 - 0.27777777777777773;

        /* '<S167>:1:86' */
        x1 = (x2 * x2 * 2.7777777777777772 - 0.27777777777777773 * x2) +
          0.0092592592592592587;
      } else if ((x2 >= 0.30000000000000004) && (x2 < 0.4)) {
        /* '<S167>:1:89' */
        /* acc decrescente positiva */
        /* '<S167>:1:90' */
        G1 = -55.555555555555543 * x2 + 22.222222222222218;

        /* '<S167>:1:91' */
        F = (x2 * x2 * -27.777777777777771 + 22.222222222222218 * x2) -
          2.7777777777777777;

        /* '<S167>:1:92' */
        x1 = ((((x2 * x2 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowFinal_mpower(x2)) - 2.7777777777777777 * x2) -
               0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x2 >= 0.4) && (x2 < 0.6)) {
        /* '<S167>:1:96' */
        /* acc costante nulla */
        /* '<S167>:1:97' */
        G1 = 0.0;

        /* '<S167>:1:98' */
        F = 1.6666666666666665;

        /* '<S167>:1:99' */
        x1 = (1.6666666666666665 * x2 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x2 >= 0.6) && (x2 < 0.7)) {
        /* '<S167>:1:102' */
        /* acc decrescente negativa */
        /* '<S167>:1:103' */
        G1 = -55.555555555555543 * x2 + 33.333333333333321;

        /* '<S167>:1:104' */
        F = ((x2 * x2 * -27.777777777777771 + 33.333333333333321 * x2) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S167>:1:105' */
        x1 = (((((x2 * x2 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowFinal_mpower(x2)) + 1.6666666666666665 * x2) -
                9.9999999999999982 * x2) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower
          (0.6);
      } else if ((x2 >= 0.7) && (x2 < 0.9)) {
        /* '<S167>:1:109' */
        /* acc costante negativa */
        /* '<S167>:1:110' */
        G1 = -5.5555555555555545;

        /* '<S167>:1:111' */
        F = (-5.5555555555555545 * x2 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S167>:1:112' */
        x1 = (((x2 * x2 * -2.7777777777777772 + 5.5555555555555545 * x2) -
               0.27777777777777773 * x2) + 1.0) - 2.5092592592592586;
      } else if ((x2 >= 0.9) && (x2 <= 1.0)) {
        /* '<S167>:1:115' */
        /* acc crescente negativa */
        /* '<S167>:1:116' */
        G1 = (x2 - 1.0) * 55.555555555555543;

        /* '<S167>:1:117' */
        F = (x2 * x2 * 27.777777777777771 - 55.555555555555543 * x2) +
          27.777777777777771;

        /* '<S167>:1:118' */
        x1 = (((9.259259259259256 * StateFlowFinal_mpower(x2) - x2 * x2 *
                27.777777777777771) + 27.777777777777771 * x2) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S167>:1:122' */
        G1 = 0.0;

        /* '<S167>:1:123' */
        F = 0.0;

        /* '<S167>:1:124' */
        x1 = 1.0;
      }

      /* '<S167>:1:127' */
      StateFlowFinal_B.xq = StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S167>:1:128' */
      StateFlowFinal_B.xq_p = 0.0;

      /* '<S167>:1:129' */
      StateFlowFinal_B.yq = -x1 * StateFlowFinal_P.AlzataQ_Value;

      /* '<S167>:1:130' */
      StateFlowFinal_B.yq_p = -F * StateFlowFinal_P.AlzataQ_Value /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S167>:1:131' */
      StateFlowFinal_B.xq_pp = 0.0;

      /* '<S167>:1:132' */
      x2 = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.yq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * -G1 / (x2 *
        x2);
    } else if ((StateFlowFinal_B.Sum2 > 1.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 2.5 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S167>:1:134' */
      /* '<S167>:1:135' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S167>:1:138' */
        /* acc crescente positiva */
        /* '<S167>:1:139' */
        G1 = 55.555555555555543 * x3;

        /* '<S167>:1:140' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S167>:1:141' */
        x1 = 9.259259259259256 * StateFlowFinal_mpower(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S167>:1:144' */
        /* acc costante positiva */
        /* '<S167>:1:145' */
        G1 = 5.5555555555555545;

        /* '<S167>:1:146' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S167>:1:147' */
        x1 = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S167>:1:150' */
        /* acc decrescente positiva */
        /* '<S167>:1:151' */
        G1 = -55.555555555555543 * x3 + 22.222222222222218;

        /* '<S167>:1:152' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S167>:1:153' */
        x1 = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowFinal_mpower(x3)) - 2.7777777777777777 * x3) -
               0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S167>:1:157' */
        /* acc costante nulla */
        /* '<S167>:1:158' */
        G1 = 0.0;

        /* '<S167>:1:159' */
        F = 1.6666666666666665;

        /* '<S167>:1:160' */
        x1 = (1.6666666666666665 * x3 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S167>:1:163' */
        /* acc decrescente negativa */
        /* '<S167>:1:164' */
        G1 = -55.555555555555543 * x3 + 33.333333333333321;

        /* '<S167>:1:165' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S167>:1:166' */
        x1 = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowFinal_mpower(x3)) + 1.6666666666666665 * x3) -
                9.9999999999999982 * x3) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower
          (0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S167>:1:170' */
        /* acc costante negativa */
        /* '<S167>:1:171' */
        G1 = -5.5555555555555545;

        /* '<S167>:1:172' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S167>:1:173' */
        x1 = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
               0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S167>:1:176' */
        /* acc crescente negativa */
        /* '<S167>:1:177' */
        G1 = (x3 - 1.0) * 55.555555555555543;

        /* '<S167>:1:178' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S167>:1:179' */
        x1 = (((9.259259259259256 * StateFlowFinal_mpower(x3) - x3 * x3 *
                27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S167>:1:183' */
        G1 = 0.0;

        /* '<S167>:1:184' */
        F = 0.0;

        /* '<S167>:1:185' */
        x1 = 1.0;
      }

      /* '<S167>:1:188' */
      StateFlowFinal_B.xq = StateFlowFinal_P.AlzataQ_Value / 2.0 - x1 *
        StateFlowFinal_P.AlzataQ_Value;

      /* '<S167>:1:189' */
      StateFlowFinal_B.xq_p = -F * StateFlowFinal_P.AlzataQ_Value /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S167>:1:190' */
      StateFlowFinal_B.yq = -StateFlowFinal_P.AlzataQ_Value;

      /* '<S167>:1:191' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S167>:1:192' */
      x2 = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.xq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * -G1 / (x2 *
        x2);

      /* '<S167>:1:193' */
      StateFlowFinal_B.yq_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 2.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 3.5 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S167>:1:195' */
      /* '<S167>:1:196' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S167>:1:199' */
        /* acc crescente positiva */
        /* '<S167>:1:200' */
        G1 = 55.555555555555543 * x4;

        /* '<S167>:1:201' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S167>:1:202' */
        x1 = 9.259259259259256 * StateFlowFinal_mpower(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S167>:1:205' */
        /* acc costante positiva */
        /* '<S167>:1:206' */
        G1 = 5.5555555555555545;

        /* '<S167>:1:207' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S167>:1:208' */
        x1 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S167>:1:211' */
        /* acc decrescente positiva */
        /* '<S167>:1:212' */
        G1 = -55.555555555555543 * x4 + 22.222222222222218;

        /* '<S167>:1:213' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S167>:1:214' */
        x1 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowFinal_mpower(x4)) - 2.7777777777777777 * x4) -
               0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S167>:1:218' */
        /* acc costante nulla */
        /* '<S167>:1:219' */
        G1 = 0.0;

        /* '<S167>:1:220' */
        F = 1.6666666666666665;

        /* '<S167>:1:221' */
        x1 = (1.6666666666666665 * x4 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S167>:1:224' */
        /* acc decrescente negativa */
        /* '<S167>:1:225' */
        G1 = -55.555555555555543 * x4 + 33.333333333333321;

        /* '<S167>:1:226' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S167>:1:227' */
        x1 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowFinal_mpower(x4)) + 1.6666666666666665 * x4) -
                9.9999999999999982 * x4) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower
          (0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S167>:1:231' */
        /* acc costante negativa */
        /* '<S167>:1:232' */
        G1 = -5.5555555555555545;

        /* '<S167>:1:233' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S167>:1:234' */
        x1 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
               0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S167>:1:237' */
        /* acc crescente negativa */
        /* '<S167>:1:238' */
        G1 = (x4 - 1.0) * 55.555555555555543;

        /* '<S167>:1:239' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S167>:1:240' */
        x1 = (((9.259259259259256 * StateFlowFinal_mpower(x4) - x4 * x4 *
                27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S167>:1:244' */
        G1 = 0.0;

        /* '<S167>:1:245' */
        F = 0.0;

        /* '<S167>:1:246' */
        x1 = 1.0;
      }

      /* '<S167>:1:249' */
      StateFlowFinal_B.xq = -StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S167>:1:250' */
      StateFlowFinal_B.xq_p = 0.0;

      /* '<S167>:1:251' */
      StateFlowFinal_B.yq = x1 * StateFlowFinal_P.AlzataQ_Value +
        -StateFlowFinal_P.AlzataQ_Value;

      /* '<S167>:1:252' */
      StateFlowFinal_B.yq_p = F * StateFlowFinal_P.AlzataQ_Value /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S167>:1:253' */
      StateFlowFinal_B.xq_pp = 0.0;

      /* '<S167>:1:254' */
      x2 = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.yq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * G1 / (x2 *
        x2);
    } else if ((StateFlowFinal_B.Sum2 > 3.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 4.0 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S167>:1:256' */
      /* '<S167>:1:257' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S167>:1:260' */
        /* acc crescente positiva */
        /* '<S167>:1:261' */
        G1 = 55.555555555555543 * x5;

        /* '<S167>:1:262' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S167>:1:263' */
        x1 = 9.259259259259256 * StateFlowFinal_mpower(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S167>:1:266' */
        /* acc costante positiva */
        /* '<S167>:1:267' */
        G1 = 5.5555555555555545;

        /* '<S167>:1:268' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S167>:1:269' */
        x1 = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S167>:1:272' */
        /* acc decrescente positiva */
        /* '<S167>:1:273' */
        G1 = -55.555555555555543 * x5 + 22.222222222222218;

        /* '<S167>:1:274' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S167>:1:275' */
        x1 = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowFinal_mpower(x5)) - 2.7777777777777777 * x5) -
               0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S167>:1:279' */
        /* acc costante nulla */
        /* '<S167>:1:280' */
        G1 = 0.0;

        /* '<S167>:1:281' */
        F = 1.6666666666666665;

        /* '<S167>:1:282' */
        x1 = (1.6666666666666665 * x5 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S167>:1:285' */
        /* acc decrescente negativa */
        /* '<S167>:1:286' */
        G1 = -55.555555555555543 * x5 + 33.333333333333321;

        /* '<S167>:1:287' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S167>:1:288' */
        x1 = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowFinal_mpower(x5)) + 1.6666666666666665 * x5) -
                9.9999999999999982 * x5) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower
          (0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S167>:1:292' */
        /* acc costante negativa */
        /* '<S167>:1:293' */
        G1 = -5.5555555555555545;

        /* '<S167>:1:294' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S167>:1:295' */
        x1 = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
               0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S167>:1:298' */
        /* acc crescente negativa */
        /* '<S167>:1:299' */
        G1 = (x5 - 1.0) * 55.555555555555543;

        /* '<S167>:1:300' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S167>:1:301' */
        x1 = (((9.259259259259256 * StateFlowFinal_mpower(x5) - x5 * x5 *
                27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S167>:1:305' */
        G1 = 0.0;

        /* '<S167>:1:306' */
        F = 0.0;

        /* '<S167>:1:307' */
        x1 = 1.0;
      }

      /* '<S167>:1:310' */
      StateFlowFinal_B.xq = x1 * StateFlowFinal_P.AlzataQ_Value / 2.0 +
        -StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S167>:1:311' */
      StateFlowFinal_B.xq_p = F * StateFlowFinal_P.AlzataQ_Value / 2.0 /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S167>:1:312' */
      StateFlowFinal_B.yq = 0.0;

      /* '<S167>:1:313' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S167>:1:314' */
      x1 = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.xq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * G1 / (x1 *
        x1);

      /* '<S167>:1:315' */
      StateFlowFinal_B.yq_pp = 0.0;
    } else {
      /* '<S167>:1:317' */
      StateFlowFinal_B.xq = 0.0;

      /* '<S167>:1:318' */
      StateFlowFinal_B.yq = 0.0;

      /* '<S167>:1:319' */
      StateFlowFinal_B.xq_p = 0.0;

      /* '<S167>:1:320' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S167>:1:321' */
      StateFlowFinal_B.xq_pp = 0.0;

      /* '<S167>:1:322' */
      StateFlowFinal_B.yq_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/Quadrato' */

    /* MATLAB Function: '<S58>/Cerchio' incorporates:
     *  Constant: '<S58>/Alzata C'
     *  Constant: '<S58>/Periodo C'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchio': '<S166>:1' */
    /* '<S166>:1:3' */
    x4 = StateFlowFinal_B.Sum2 / StateFlowFinal_P.PeriodoC_Value;

    /* '<S166>:1:4' */
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

    /* '<S166>:1:6' */
    x1 = x1 * 2.0 * 3.1415926535897931;

    /* '<S166>:1:7' */
    F = F * 2.0 * 3.1415926535897931 / StateFlowFinal_P.PeriodoC_Value;

    /* '<S166>:1:8' */
    x3 = G1 * 2.0 * 3.1415926535897931 / (StateFlowFinal_P.PeriodoC_Value *
      StateFlowFinal_P.PeriodoC_Value);

    /* '<S166>:1:9' */
    StateFlowFinal_B.xc = cos(1.5707963267948966 - x1) *
      StateFlowFinal_P.AlzataC_Value;

    /* '<S166>:1:10' */
    StateFlowFinal_B.yc = sin(1.5707963267948966 - x1) *
      StateFlowFinal_P.AlzataC_Value - StateFlowFinal_P.AlzataC_Value;

    /* '<S166>:1:11' */
    StateFlowFinal_B.xc_p = sin(1.5707963267948966 - x1) *
      StateFlowFinal_P.AlzataC_Value * F;

    /* '<S166>:1:12' */
    StateFlowFinal_B.yc_p = cos(1.5707963267948966 - x1) *
      -StateFlowFinal_P.AlzataC_Value * F;

    /* '<S166>:1:13' */
    StateFlowFinal_B.xc_pp = cos(1.5707963267948966 - x1) *
      -StateFlowFinal_P.AlzataC_Value * (F * F) + sin(1.5707963267948966 - x1) *
      StateFlowFinal_P.AlzataC_Value * x3;

    /* '<S166>:1:14' */
    StateFlowFinal_B.yc_pp = sin(1.5707963267948966 - x1) *
      -StateFlowFinal_P.AlzataC_Value * (F * F) - cos(1.5707963267948966 - x1) *
      StateFlowFinal_P.AlzataC_Value * x3;

    /* End of MATLAB Function: '<S58>/Cerchio' */

    /* MATLAB Function: '<S58>/g' incorporates:
     *  Constant: '<S58>/Alzata C1'
     *  Constant: '<S58>/Periodo C1'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/g': '<S168>:1' */
    /* '<S168>:1:2' */
    x2 = StateFlowFinal_P.PeriodoC1_Value / 32.0;

    /* '<S168>:1:3' */
    /* '<S168>:1:4' */
    /* '<S168>:1:5' */
    /* '<S168>:1:6' */
    /* '<S168>:1:7' */
    /* '<S168>:1:8' */
    /* '<S168>:1:9' */
    /* '<S168>:1:10' */
    /* '<S168>:1:11' */
    /* '<S168>:1:12' */
    /* '<S168>:1:13' */
    /* '<S168>:1:14' */
    /* '<S168>:1:15' */
    /* '<S168>:1:16' */
    /* '<S168>:1:17' */
    /* '<S168>:1:18' */
    /* '<S168>:1:19' */
    /* '<S168>:1:20' */
    /* '<S168>:1:21' */
    /* '<S168>:1:22' */
    /* '<S168>:1:23' */
    /* '<S168>:1:24' */
    /* '<S168>:1:25' */
    /* '<S168>:1:26' */
    /* '<S168>:1:27' */
    /* '<S168>:1:28' */
    /* '<S168>:1:29' */
    /* '<S168>:1:30' */
    /* '<S168>:1:31' */
    /* '<S168>:1:32' */
    /* '<S168>:1:33' */
    /* '<S168>:1:34' */
    /* '<S168>:1:35' */
    /* '<S168>:1:36' */
    /* '<S168>:1:37' */
    /* '<S168>:1:38' */
    /* '<S168>:1:39' */
    /* '<S168>:1:40' */
    /* '<S168>:1:41' */
    /* '<S168>:1:42' */
    /* '<S168>:1:43' */
    /* '<S168>:1:44' */
    /* '<S168>:1:45' */
    /* '<S168>:1:46' */
    if ((StateFlowFinal_B.Sum2 > 0.0) && (StateFlowFinal_B.Sum2 <= x2 / 2.0)) {
      /* '<S168>:1:48' */
      /*  1 */
      /* '<S168>:1:49' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 0.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:50' */
      StateFlowFinal_B.x = 0.0;

      /* '<S168>:1:51' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:52' */
      StateFlowFinal_B.y = -x1 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:53' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:54' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:55' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > x2 / 2.0) && (StateFlowFinal_B.Sum2 <=
                3.0 * x2 / 2.0)) {
      /* '<S168>:1:57' */
      /*  2 */
      /* '<S168>:1:58' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - x2 / 2.0) / x2, &x1, &F,
        &x3);

      /* '<S168>:1:59' */
      StateFlowFinal_B.x = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:60' */
      StateFlowFinal_B.x_p_l = F * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:61' */
      StateFlowFinal_B.y = -StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:62' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:63' */
      StateFlowFinal_B.x_pp = x3 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:64' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 3.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 4.0 * x2 / 2.0)) {
      /* '<S168>:1:66' */
      /*  3 */
      /* '<S168>:1:67' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 3.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &x4);

      /* '<S168>:1:68' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:69' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:70' */
      StateFlowFinal_B.y = x1 * StateFlowFinal_P.AlzataC1_Value +
        -StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:71' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:72' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:73' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = x4 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 4.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 5.0 * x2 / 2.0)) {
      /* '<S168>:1:75' */
      /*  4 */
      /* '<S168>:1:76' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 4.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &x5);

      /* '<S168>:1:77' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:78' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:79' */
      StateFlowFinal_B.y = 0.0;

      /* '<S168>:1:80' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:81' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = -x5 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:82' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 5.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 7.0 * x2 / 2.0)) {
      /* '<S168>:1:84' */
      /*  5 */
      /* '<S168>:1:85' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 5.0 * x2 / 2.0) / x2, &x1,
        &F, &x5);

      /* '<S168>:1:86' */
      StateFlowFinal_B.x = 2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:87' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:88' */
      StateFlowFinal_B.y = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:89' */
      StateFlowFinal_B.y_p_o = -F * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:90' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:91' */
      StateFlowFinal_B.y_pp = -x5 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 7.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 9.0 * x2 / 2.0)) {
      /* '<S168>:1:93' */
      /*  6 */
      /* '<S168>:1:94' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 7.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:95' */
      StateFlowFinal_B.x = G1 * 3.0 * StateFlowFinal_P.AlzataC1_Value + 2.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:96' */
      StateFlowFinal_B.x_p_l = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:97' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:98' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:99' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:100' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 9.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 11.0 * x2 / 2.0)) {
      /* '<S168>:1:102' */
      /*  7 */
      /* '<S168>:1:103' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 9.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:104' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:105' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:106' */
      StateFlowFinal_B.y = G1 * 3.0 * StateFlowFinal_P.AlzataC1_Value + -3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:107' */
      StateFlowFinal_B.y_p_o = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:108' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:109' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 11.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 12.0 * x2 / 2.0)) {
      /* '<S168>:1:111' */
      /*  8 */
      /* '<S168>:1:112' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 11.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:113' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:114' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:115' */
      StateFlowFinal_B.y = 0.0;

      /* '<S168>:1:116' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:117' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:118' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 12.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 13.0 * x2 / 2.0)) {
      /* '<S168>:1:120' */
      /*  9 */
      /* '<S168>:1:121' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 12.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:122' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:123' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:124' */
      StateFlowFinal_B.y = -x1 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:125' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:126' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:127' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 13.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 15.0 * x2 / 2.0)) {
      /* '<S168>:1:129' */
      /*  10 */
      /* '<S168>:1:130' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 13.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:131' */
      StateFlowFinal_B.x = G1 * 3.0 * StateFlowFinal_P.AlzataC1_Value + 4.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:132' */
      StateFlowFinal_B.x_p_l = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:133' */
      StateFlowFinal_B.y = -StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:134' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:135' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:136' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 15.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 16.0 * x2 / 2.0)) {
      /* '<S168>:1:138' */
      /*  11 */
      /* '<S168>:1:139' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 15.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:140' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:141' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:142' */
      StateFlowFinal_B.y = x1 * StateFlowFinal_P.AlzataC1_Value +
        -StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:143' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:144' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:145' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 16.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 17.0 * x2 / 2.0)) {
      /* '<S168>:1:147' */
      /*  12 */
      /* '<S168>:1:148' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 16.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:149' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:150' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:151' */
      StateFlowFinal_B.y = 0.0;

      /* '<S168>:1:152' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:153' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:154' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 17.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 19.0 * x2 / 2.0)) {
      /* '<S168>:1:156' */
      /*  13 */
      /* '<S168>:1:157' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 17.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:158' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:159' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:160' */
      StateFlowFinal_B.y = -G1 * 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:161' */
      StateFlowFinal_B.y_p_o = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:162' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:163' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 19.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 20.0 * x2 / 2.0)) {
      /* '<S168>:1:165' */
      /*  14 */
      /* '<S168>:1:166' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 19.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:167' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:168' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:169' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:170' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:171' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:172' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 20.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 21.0 * x2 / 2.0)) {
      /* '<S168>:1:174' */
      /*  15 */
      /* '<S168>:1:175' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 20.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:176' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:177' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:178' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:179' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:180' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:181' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 21.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 23.0 * x2 / 2.0)) {
      /* '<S168>:1:183' */
      /*  16 */
      /* '<S168>:1:184' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 21.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:185' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - G1 * 3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:186' */
      StateFlowFinal_B.x_p_l = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:187' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:188' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:189' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:190' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 23.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 25.0 * x2 / 2.0)) {
      /* '<S168>:1:192' */
      /*  17 */
      /* '<S168>:1:193' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 23.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:194' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:195' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:196' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * G1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:197' */
      StateFlowFinal_B.y_p_o = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:198' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:199' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 25.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 27.0 * x2 / 2.0)) {
      /* '<S168>:1:201' */
      /*  18 */
      /* '<S168>:1:202' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 25.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:203' */
      StateFlowFinal_B.x = 3.0 * G1 * StateFlowFinal_P.AlzataC1_Value + 4.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:204' */
      StateFlowFinal_B.x_p_l = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:205' */
      StateFlowFinal_B.y = -5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:206' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:207' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:208' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 27.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 28.0 * x2 / 2.0)) {
      /* '<S168>:1:210' */
      /*  19 */
      /* '<S168>:1:211' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 27.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:212' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:213' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:214' */
      StateFlowFinal_B.y = -5.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:215' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:216' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:217' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 28.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 29.0 * x2 / 2.0)) {
      /* '<S168>:1:219' */
      /*  20 */
      /* '<S168>:1:220' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 28.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:221' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:222' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:223' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:224' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:225' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:226' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 29.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 31.0 * x2 / 2.0)) {
      /* '<S168>:1:228' */
      /*  21 */
      /* '<S168>:1:229' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 29.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:230' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:231' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:232' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * G1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:233' */
      StateFlowFinal_B.y_p_o = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:234' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:235' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 31.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 32.0 * x2 / 2.0)) {
      /* '<S168>:1:237' */
      /*  22 */
      /* '<S168>:1:238' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 31.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:239' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:240' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:241' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:242' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:243' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:244' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 32.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 33.0 * x2 / 2.0)) {
      /* '<S168>:1:246' */
      /*  23 */
      /* '<S168>:1:247' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 32.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:248' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:249' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:250' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:251' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:252' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:253' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 33.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 35.0 * x2 / 2.0)) {
      /* '<S168>:1:255' */
      /*  24 */
      /* '<S168>:1:256' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 33.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:257' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * G1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:258' */
      StateFlowFinal_B.x_p_l = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:259' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:260' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:261' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:262' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 35.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 36.0 * x2 / 2.0)) {
      /* '<S168>:1:264' */
      /*  25 */
      /* '<S168>:1:265' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 35.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:266' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:267' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:268' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:269' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:270' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:271' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 36.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 37.0 * x2 / 2.0)) {
      /* '<S168>:1:273' */
      /*  26 */
      /* '<S168>:1:274' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 36.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:275' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:276' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:277' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:278' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:279' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:280' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 37.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 39.0 * x2 / 2.0)) {
      /* '<S168>:1:282' */
      /*  27 */
      /* '<S168>:1:283' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 37.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:284' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:285' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:286' */
      StateFlowFinal_B.y = 3.0 * G1 * StateFlowFinal_P.AlzataC1_Value + -7.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:287' */
      StateFlowFinal_B.y_p_o = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:288' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:289' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 39.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 41.0 * x2 / 2.0)) {
      /* '<S168>:1:291' */
      /*  28 */
      /* '<S168>:1:292' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 39.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:293' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * G1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:294' */
      StateFlowFinal_B.x_p_l = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:295' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:296' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:297' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:298' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 41.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 43.0 * x2 / 2.0)) {
      /* '<S168>:1:300' */
      /*  29 */
      /* '<S168>:1:301' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 41.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:302' */
      StateFlowFinal_B.x = 2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:303' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:304' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value - G1 * 3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:305' */
      StateFlowFinal_B.y_p_o = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:306' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:307' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 43.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 44.0 * x2 / 2.0)) {
      /* '<S168>:1:309' */
      /*  30 */
      /* '<S168>:1:310' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 43.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:311' */
      StateFlowFinal_B.x = 2.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:312' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:313' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:314' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:315' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:316' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 44.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 45.0 * x2 / 2.0)) {
      /* '<S168>:1:318' */
      /*  31 */
      /* '<S168>:1:319' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 44.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:320' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:321' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:322' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value + x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:323' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:324' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:325' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 45.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 47.0 * x2 / 2.0)) {
      /* '<S168>:1:327' */
      /*  32 */
      /* '<S168>:1:328' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 45.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:329' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * G1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:330' */
      StateFlowFinal_B.x_p_l = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:331' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:332' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:333' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:334' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 47.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 48.0 * x2 / 2.0)) {
      /* '<S168>:1:336' */
      /*  33 */
      /* '<S168>:1:337' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 47.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:338' */
      StateFlowFinal_B.x = 0.0;

      /* '<S168>:1:339' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:340' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:341' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:342' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:343' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 48.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 49.0 * x2 / 2.0)) {
      /* '<S168>:1:345' */
      /*  34 */
      /* '<S168>:1:346' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 48.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:347' */
      StateFlowFinal_B.x = x1 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:348' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:349' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:350' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:351' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:352' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 49.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 51.0 * x2 / 2.0)) {
      /* '<S168>:1:354' */
      /*  35 */
      /* '<S168>:1:355' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 49.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:356' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:357' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:358' */
      StateFlowFinal_B.y = 3.0 * G1 * StateFlowFinal_P.AlzataC1_Value + -7.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:359' */
      StateFlowFinal_B.y_p_o = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:360' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:361' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 51.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 52.0 * x2 / 2.0)) {
      /* '<S168>:1:363' */
      /*  36 */
      /* '<S168>:1:364' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 51.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:365' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:366' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:367' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:368' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:369' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:370' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 52.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 53.0 * x2 / 2.0)) {
      /* '<S168>:1:372' */
      /*  37 */
      /* '<S168>:1:373' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 52.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:374' */
      StateFlowFinal_B.x = 0.0;

      /* '<S168>:1:375' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:376' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:377' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:378' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:379' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 53.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 55.0 * x2 / 2.0)) {
      /* '<S168>:1:381' */
      /*  38 */
      /* '<S168>:1:382' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 53.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:383' */
      StateFlowFinal_B.x = 3.0 * G1 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:384' */
      StateFlowFinal_B.x_p_l = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:385' */
      StateFlowFinal_B.y = -5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:386' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:387' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:388' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 55.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 57.0 * x2 / 2.0)) {
      /* '<S168>:1:390' */
      /*  39 */
      /* '<S168>:1:391' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 55.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:392' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:393' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:394' */
      StateFlowFinal_B.y = G1 * 3.0 * StateFlowFinal_P.AlzataC1_Value + -5.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:395' */
      StateFlowFinal_B.y_p_o = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:396' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:397' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 57.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 59.0 * x2 / 2.0)) {
      /* '<S168>:1:399' */
      /*  40 */
      /* '<S168>:1:400' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 57.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:401' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value - G1 * 3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:402' */
      StateFlowFinal_B.x_p_l = -x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:403' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:404' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:405' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:406' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 59.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 60.0 * x2 / 2.0)) {
      /* '<S168>:1:408' */
      /*  41 */
      /* '<S168>:1:409' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 59.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:410' */
      StateFlowFinal_B.x = 0.0;

      /* '<S168>:1:411' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:412' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:413' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:414' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:415' */
      x2 /= 2.0;
      StateFlowFinal_B.y_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 60.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 61.0 * x2 / 2.0)) {
      /* '<S168>:1:417' */
      /*  42 */
      /* '<S168>:1:418' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 60.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:419' */
      StateFlowFinal_B.x = x1 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:420' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:421' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:422' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:423' */
      x2 /= 2.0;
      StateFlowFinal_B.x_pp = G1 * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);

      /* '<S168>:1:424' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 61.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 63.0 * x2 / 2.0)) {
      /* '<S168>:1:426' */
      /*  43 */
      /* '<S168>:1:427' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 61.0 * x2 / 2.0) / x2, &G1,
        &x1, &F);

      /* '<S168>:1:428' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:429' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:430' */
      StateFlowFinal_B.y = 3.0 * G1 * StateFlowFinal_P.AlzataC1_Value + -3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:431' */
      StateFlowFinal_B.y_p_o = x1 * 3.0 * StateFlowFinal_P.AlzataC1_Value / x2;

      /* '<S168>:1:432' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:433' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (x2 * x2);
    } else if ((StateFlowFinal_B.Sum2 > 63.0 * x2 / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 64.0 * x2 / 2.0)) {
      /* '<S168>:1:435' */
      /*  44 */
      /* '<S168>:1:436' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 63.0 * x2 / 2.0) / (x2 /
        2.0), &x1, &F, &G1);

      /* '<S168>:1:437' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value - x1 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S168>:1:438' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (x2 / 2.0);

      /* '<S168>:1:439' */
      StateFlowFinal_B.y = 0.0;

      /* '<S168>:1:440' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:441' */
      x1 = x2 / 2.0;
      StateFlowFinal_B.x_pp = -G1 * StateFlowFinal_P.AlzataC1_Value / (x1 * x1);

      /* '<S168>:1:442' */
      StateFlowFinal_B.y_pp = 0.0;
    } else {
      /* '<S168>:1:445' */
      StateFlowFinal_B.x = 0.0;

      /* '<S168>:1:446' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S168>:1:447' */
      StateFlowFinal_B.y = 0.0;

      /* '<S168>:1:448' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S168>:1:449' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S168>:1:450' */
      StateFlowFinal_B.y_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/g' */

    /* MATLAB Function: '<S58>/Cerchi Tangenti' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchi Tangenti': '<S165>:1' */
    /* '<S165>:1:4' */
    x2 = 100.0 * StateFlowFinal_P.Constant3_Value / 2.0;

    /* '<S165>:1:5' */
    /* '<S165>:1:6' */
    G1 = (StateFlowFinal_P.Constant3_Value - 0.025) * 100.0 / 2.0;

    /* '<S165>:1:7' */
    /* '<S165>:1:8' */
    x3 = ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) * 100.0 / 2.0;

    /* '<S165>:1:9' */
    /* '<S165>:1:10' */
    x4 = (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) * 100.0 /
      2.0;

    /* '<S165>:1:11' */
    /* '<S165>:1:12' */
    T5 = ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
      * 100.0 / 2.0;

    /* '<S165>:1:14' */
    /* '<S165>:1:15' */
    /* '<S165>:1:16' */
    /* '<S165>:1:17' */
    /* '<S165>:1:18' */
    if ((StateFlowFinal_B.Sum2 > 0.0) && (StateFlowFinal_B.Sum2 <= x2)) {
      /* '<S165>:1:20' */
      /*  1 */
      /* '<S165>:1:21' */
      StateFlowFinal_ldm7t(StateFlowFinal_B.Sum2 / x2, &x1, &F, &G1);

      /* '<S165>:1:22' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S165>:1:23' */
      F = F * 2.0 * 3.1415926535897931 / x2;

      /* '<S165>:1:24' */
      x3 = G1 * 2.0 * 3.1415926535897931 / (x2 * x2);

      /* '<S165>:1:25' */
      StateFlowFinal_B.xct = StateFlowFinal_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x1);

      /* '<S165>:1:26' */
      StateFlowFinal_B.yct = StateFlowFinal_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x1) - StateFlowFinal_P.Constant3_Value / 2.0;

      /* '<S165>:1:27' */
      StateFlowFinal_B.xct_p = StateFlowFinal_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x1) * F;

      /* '<S165>:1:28' */
      StateFlowFinal_B.yct_p = -StateFlowFinal_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x1) * F;

      /* '<S165>:1:29' */
      StateFlowFinal_B.xct_pp = -StateFlowFinal_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x1) * (F * F) + StateFlowFinal_P.Constant3_Value /
        2.0 * sin(1.5707963267948966 - x1) * x3;

      /* '<S165>:1:30' */
      StateFlowFinal_B.yct_pp = -StateFlowFinal_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x1) * (F * F) - StateFlowFinal_P.Constant3_Value /
        2.0 * cos(1.5707963267948966 - x1) * x3;
    } else if ((StateFlowFinal_B.Sum2 > x2) && (StateFlowFinal_B.Sum2 <= x2 + G1))
    {
      /* '<S165>:1:32' */
      /*  2 */
      /* '<S165>:1:33' */
      StateFlowFinal_ldm7t((StateFlowFinal_B.Sum2 - x2) / G1, &x1, &F, &x3);

      /* '<S165>:1:34' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S165>:1:35' */
      F = F * 2.0 * 3.1415926535897931 / G1;

      /* '<S165>:1:36' */
      x3 = x3 * 2.0 * 3.1415926535897931 / (G1 * G1);

      /* '<S165>:1:37' */
      StateFlowFinal_B.xct = (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - x1);

      /* '<S165>:1:38' */
      StateFlowFinal_B.yct = (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x1) - (StateFlowFinal_P.Constant3_Value - 0.025)
        / 2.0;

      /* '<S165>:1:39' */
      StateFlowFinal_B.xct_p = (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x1) * F;

      /* '<S165>:1:40' */
      StateFlowFinal_B.yct_p = -(StateFlowFinal_P.Constant3_Value - 0.025) / 2.0
        * cos(1.5707963267948966 - x1) * F;

      /* '<S165>:1:41' */
      StateFlowFinal_B.xct_pp = -(StateFlowFinal_P.Constant3_Value - 0.025) /
        2.0 * cos(1.5707963267948966 - x1) * (F * F) +
        (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 * sin
        (1.5707963267948966 - x1) * x3;

      /* '<S165>:1:42' */
      StateFlowFinal_B.yct_pp = -(StateFlowFinal_P.Constant3_Value - 0.025) /
        2.0 * sin(1.5707963267948966 - x1) * (F * F) -
        (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 * cos
        (1.5707963267948966 - x1) * x3;
    } else if ((StateFlowFinal_B.Sum2 > x2 + G1) && (StateFlowFinal_B.Sum2 <=
                (x2 + G1) + x3)) {
      /* '<S165>:1:44' */
      /*  3 */
      /* '<S165>:1:45' */
      StateFlowFinal_ldm7t(((StateFlowFinal_B.Sum2 - x2) - G1) / x3, &x1, &F,
                           &x4);

      /* '<S165>:1:46' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S165>:1:47' */
      F = F * 2.0 * 3.1415926535897931 / x3;

      /* '<S165>:1:48' */
      x3 = x4 * 2.0 * 3.1415926535897931 / (x3 * x3);

      /* '<S165>:1:49' */
      StateFlowFinal_B.xct = ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x1);

      /* '<S165>:1:50' */
      StateFlowFinal_B.yct = ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - x1) -
        ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) / 2.0;

      /* '<S165>:1:51' */
      StateFlowFinal_B.xct_p = ((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S165>:1:52' */
      StateFlowFinal_B.yct_p = -((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S165>:1:53' */
      StateFlowFinal_B.xct_pp = -((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - x1) * (F * F) +
        ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - x1) * x3;

      /* '<S165>:1:54' */
      StateFlowFinal_B.yct_pp = -((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - x1) * (F * F) -
        ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - x1) * x3;
    } else if ((StateFlowFinal_B.Sum2 > (x2 + G1) + x3) &&
               (StateFlowFinal_B.Sum2 <= ((x2 + G1) + x3) + x4)) {
      /* '<S165>:1:56' */
      /*  4 */
      /* '<S165>:1:57' */
      StateFlowFinal_ldm7t((((StateFlowFinal_B.Sum2 - x2) - G1) - x3) / x4, &x1,
                           &F, &x5);

      /* '<S165>:1:58' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S165>:1:59' */
      F = F * 2.0 * 3.1415926535897931 / x4;

      /* '<S165>:1:60' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (x4 * x4);

      /* '<S165>:1:61' */
      StateFlowFinal_B.xct = (((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1);

      /* '<S165>:1:62' */
      StateFlowFinal_B.yct = (((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) -
        (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0;

      /* '<S165>:1:63' */
      StateFlowFinal_B.xct_p = (((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S165>:1:64' */
      StateFlowFinal_B.yct_p = -(((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S165>:1:65' */
      StateFlowFinal_B.xct_pp = -(((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * (F * F) +
        (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 *
        sin(1.5707963267948966 - x1) * x3;

      /* '<S165>:1:66' */
      StateFlowFinal_B.yct_pp = -(((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * (F * F) -
        (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 *
        cos(1.5707963267948966 - x1) * x3;
    } else if ((StateFlowFinal_B.Sum2 > ((x2 + G1) + x3) + x4) &&
               (StateFlowFinal_B.Sum2 <= (((x2 + G1) + x3) + x4) + T5)) {
      /* '<S165>:1:68' */
      /*  5 */
      /* '<S165>:1:69' */
      StateFlowFinal_ldm7t(((((StateFlowFinal_B.Sum2 - x2) - G1) - x3) - x4) /
                           T5, &x1, &F, &x5);

      /* '<S165>:1:70' */
      x1 = x1 * 2.0 * 3.1415926535897931;

      /* '<S165>:1:71' */
      F = F * 2.0 * 3.1415926535897931 / T5;

      /* '<S165>:1:72' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (T5 * T5);

      /* '<S165>:1:73' */
      StateFlowFinal_B.xct = ((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1);

      /* '<S165>:1:74' */
      StateFlowFinal_B.yct = ((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) -
        ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0;

      /* '<S165>:1:75' */
      StateFlowFinal_B.xct_p = ((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * F;

      /* '<S165>:1:76' */
      StateFlowFinal_B.yct_p = -((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * F;

      /* '<S165>:1:77' */
      StateFlowFinal_B.xct_pp = -((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x1) * (F * F)
        + ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) -
           0.025) / 2.0 * sin(1.5707963267948966 - x1) * x3;

      /* '<S165>:1:78' */
      StateFlowFinal_B.yct_pp = -((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x1) * (F * F)
        - ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) -
           0.025) / 2.0 * cos(1.5707963267948966 - x1) * x3;
    } else {
      /* '<S165>:1:80' */
      StateFlowFinal_B.xct = 0.0;

      /* '<S165>:1:81' */
      StateFlowFinal_B.xct_p = 0.0;

      /* '<S165>:1:82' */
      StateFlowFinal_B.yct = 0.0;

      /* '<S165>:1:83' */
      StateFlowFinal_B.yct_p = 0.0;

      /* '<S165>:1:84' */
      StateFlowFinal_B.xct_pp = 0.0;

      /* '<S165>:1:85' */
      StateFlowFinal_B.yct_pp = 0.0;
    }

    /* End of MATLAB Function: '<S58>/Cerchi Tangenti' */

    /* MATLAB Function: '<S58>/spirale' incorporates:
     *  Constant: '<S58>/N giri'
     *  Constant: '<S58>/Periodo'
     *  Constant: '<S58>/Rmax'
     *  Constant: '<S58>/Rmin'
     *  Constant: '<S58>/Tempo spost. iniziale'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/spirale': '<S169>:1' */
    /* '<S169>:1:3' */
    /* '<S169>:1:4' */
    if ((StateFlowFinal_B.Sum2 >= 0.0) && (StateFlowFinal_B.Sum2 <=
         StateFlowFinal_P.Tempospostiniziale_Value)) {
      /* '<S169>:1:5' */
      /* '<S169>:1:6' */
      StateFlowFinal_ldm7t_m(StateFlowFinal_B.Sum2 /
        StateFlowFinal_P.Tempospostiniziale_Value, &x1, &F, &G1);

      /* '<S169>:1:7' */
      StateFlowFinal_B.xs = x1 * StateFlowFinal_P.Rmin_Value;

      /* '<S169>:1:8' */
      StateFlowFinal_B.xs_p = F * StateFlowFinal_P.Rmin_Value /
        StateFlowFinal_P.Tempospostiniziale_Value;

      /* '<S169>:1:9' */
      StateFlowFinal_B.xs_pp = G1 * StateFlowFinal_P.Rmin_Value /
        (StateFlowFinal_P.Tempospostiniziale_Value *
         StateFlowFinal_P.Tempospostiniziale_Value);

      /* '<S169>:1:10' */
      StateFlowFinal_B.ys = 0.0;

      /* '<S169>:1:11' */
      StateFlowFinal_B.ys_p = 0.0;

      /* '<S169>:1:12' */
      StateFlowFinal_B.ys_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 >
                StateFlowFinal_P.Tempospostiniziale_Value) &&
               (StateFlowFinal_B.Sum2 <=
                StateFlowFinal_P.Tempospostiniziale_Value +
                StateFlowFinal_P.Periodo_Value)) {
      /* '<S169>:1:13' */
      /* '<S169>:1:14' */
      StateFlowFinal_ldm7t_m((StateFlowFinal_B.Sum2 -
        StateFlowFinal_P.Tempospostiniziale_Value) /
        StateFlowFinal_P.Periodo_Value, &x1, &F, &x3);

      /* '<S169>:1:15' */
      x2 = x1 * StateFlowFinal_P.Rmax_Value + StateFlowFinal_P.Rmin_Value;

      /* '<S169>:1:16' */
      G1 = F * StateFlowFinal_P.Rmax_Value / StateFlowFinal_P.Periodo_Value;

      /* '<S169>:1:17' */
      x4 = x3 * StateFlowFinal_P.Rmax_Value / (StateFlowFinal_P.Periodo_Value *
        StateFlowFinal_P.Periodo_Value);

      /* '<S169>:1:18' */
      x1 = x1 * StateFlowFinal_P.Ngiri_Value * 2.0 * 3.1415926535897931;

      /* '<S169>:1:19' */
      F = F * StateFlowFinal_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        StateFlowFinal_P.Periodo_Value;

      /* '<S169>:1:20' */
      x3 = x3 * StateFlowFinal_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        (StateFlowFinal_P.Periodo_Value * StateFlowFinal_P.Periodo_Value);

      /* '<S169>:1:21' */
      StateFlowFinal_B.xs = x2 * cos(x1);

      /* '<S169>:1:22' */
      StateFlowFinal_B.ys = x2 * sin(x1);

      /* '<S169>:1:23' */
      StateFlowFinal_B.xs_p = -x2 * sin(x1) * F + G1 * cos(x1);

      /* '<S169>:1:24' */
      StateFlowFinal_B.ys_p = x2 * cos(x1) * F + G1 * sin(x1);

      /* '<S169>:1:25' */
      StateFlowFinal_B.xs_pp = ((-G1 * sin(x1) * F - (F * F * cos(x1) + sin(x1) *
        x3) * x2) + x4 * cos(x1)) - G1 * sin(x1) * F;

      /* '<S169>:1:26' */
      StateFlowFinal_B.ys_pp = (((F * F * -sin(x1) + cos(x1) * x3) * x2 + G1 *
        cos(x1) * F) + x4 * sin(x1)) + G1 * cos(x1) * F;
    } else {
      /* '<S169>:1:28' */
      StateFlowFinal_B.xs = cos(StateFlowFinal_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowFinal_P.Rmin_Value +
        StateFlowFinal_P.Rmax_Value);

      /* '<S169>:1:29' */
      StateFlowFinal_B.xs_p = 0.0;

      /* '<S169>:1:30' */
      StateFlowFinal_B.ys = sin(StateFlowFinal_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowFinal_P.Rmin_Value +
        StateFlowFinal_P.Rmax_Value);

      /* '<S169>:1:31' */
      StateFlowFinal_B.ys_p = 0.0;

      /* '<S169>:1:32' */
      StateFlowFinal_B.xs_pp = 0.0;

      /* '<S169>:1:33' */
      StateFlowFinal_B.ys_pp = 0.0;
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
    switch ((int32_T)StateFlowFinal_P.selettore_Value) {
     case 1:
      StateFlowFinal_B.MultiportSwitch[0] = StateFlowFinal_B.xq;
      StateFlowFinal_B.MultiportSwitch[1] = StateFlowFinal_B.yq;
      StateFlowFinal_B.MultiportSwitch[2] = StateFlowFinal_B.xq_p;
      StateFlowFinal_B.MultiportSwitch[3] = StateFlowFinal_B.yq_p;
      StateFlowFinal_B.MultiportSwitch[4] = StateFlowFinal_B.xq_pp;
      StateFlowFinal_B.MultiportSwitch[5] = StateFlowFinal_B.yq_pp;
      break;

     case 2:
      StateFlowFinal_B.MultiportSwitch[0] = StateFlowFinal_B.xc;
      StateFlowFinal_B.MultiportSwitch[1] = StateFlowFinal_B.yc;
      StateFlowFinal_B.MultiportSwitch[2] = StateFlowFinal_B.xc_p;
      StateFlowFinal_B.MultiportSwitch[3] = StateFlowFinal_B.yc_p;
      StateFlowFinal_B.MultiportSwitch[4] = StateFlowFinal_B.xc_pp;
      StateFlowFinal_B.MultiportSwitch[5] = StateFlowFinal_B.yc_pp;
      break;

     case 3:
      StateFlowFinal_B.MultiportSwitch[0] = StateFlowFinal_B.x;
      StateFlowFinal_B.MultiportSwitch[1] = StateFlowFinal_B.y;
      StateFlowFinal_B.MultiportSwitch[2] = StateFlowFinal_B.x_p_l;
      StateFlowFinal_B.MultiportSwitch[3] = StateFlowFinal_B.y_p_o;
      StateFlowFinal_B.MultiportSwitch[4] = StateFlowFinal_B.x_pp;
      StateFlowFinal_B.MultiportSwitch[5] = StateFlowFinal_B.y_pp;
      break;

     case 4:
      StateFlowFinal_B.MultiportSwitch[0] = StateFlowFinal_B.xct;
      StateFlowFinal_B.MultiportSwitch[1] = StateFlowFinal_B.yct;
      StateFlowFinal_B.MultiportSwitch[2] = StateFlowFinal_B.xct_p;
      StateFlowFinal_B.MultiportSwitch[3] = StateFlowFinal_B.yct_p;
      StateFlowFinal_B.MultiportSwitch[4] = StateFlowFinal_B.xct_pp;
      StateFlowFinal_B.MultiportSwitch[5] = StateFlowFinal_B.yct_pp;
      break;

     case 5:
      StateFlowFinal_B.MultiportSwitch[0] = StateFlowFinal_B.xs;
      StateFlowFinal_B.MultiportSwitch[1] = StateFlowFinal_B.ys;
      StateFlowFinal_B.MultiportSwitch[2] = StateFlowFinal_B.xs_p;
      StateFlowFinal_B.MultiportSwitch[3] = StateFlowFinal_B.ys_p;
      StateFlowFinal_B.MultiportSwitch[4] = StateFlowFinal_B.xs_pp;
      StateFlowFinal_B.MultiportSwitch[5] = StateFlowFinal_B.ys_pp;
      break;

     default:
      StateFlowFinal_B.MultiportSwitch[0] = StateFlowFinal_P.Rmax1_Value;
      StateFlowFinal_B.MultiportSwitch[1] = StateFlowFinal_P.Ngiri1_Value;
      StateFlowFinal_B.MultiportSwitch[2] = StateFlowFinal_P.Rmin1_Value;
      StateFlowFinal_B.MultiportSwitch[3] = StateFlowFinal_P.Ngiri2_Value;
      StateFlowFinal_B.MultiportSwitch[4] = StateFlowFinal_P.Rmin2_Value;
      StateFlowFinal_B.MultiportSwitch[5] = StateFlowFinal_P.Rmin3_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S58>/Multiport Switch' */

    /* Sum: '<S12>/Sum' */
    StateFlowFinal_B.Xmov = StateFlowFinal_B.x0 +
      StateFlowFinal_B.MultiportSwitch[0];

    /* Sum: '<S12>/Sum1' */
    StateFlowFinal_B.Ymov = StateFlowFinal_B.MultiportSwitch[1] +
      StateFlowFinal_B.y0;

    /* MATLAB Function: '<S12>/Cinematica Inversa' */
    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa': '<S48>:1' */
    /* '<S48>:1:3' */
    /* '<S48>:1:4' */
    /* '<S48>:1:6' */
    x1 = 2.0 * StateFlowFinal_B.Xmov * 0.25 + 0.045;

    /* '<S48>:1:7' */
    F = 2.0 * StateFlowFinal_B.Ymov * 0.25;

    /* '<S48>:1:8' */
    G1 = ((StateFlowFinal_B.Xmov * StateFlowFinal_B.Xmov + 0.0081) +
          StateFlowFinal_B.Ymov * StateFlowFinal_B.Ymov) + 2.0 *
      StateFlowFinal_B.Xmov * 0.09;

    /* '<S48>:1:9' */
    x2 = 2.0 * StateFlowFinal_B.Xmov * 0.25 + -0.045;

    /* '<S48>:1:10' */
    x3 = 2.0 * StateFlowFinal_B.Ymov * 0.25;

    /* '<S48>:1:11' */
    x4 = ((StateFlowFinal_B.Xmov * StateFlowFinal_B.Xmov + 0.0081) +
          StateFlowFinal_B.Ymov * StateFlowFinal_B.Ymov) - 2.0 *
      StateFlowFinal_B.Xmov * 0.09;

    /* '<S48>:1:15' */
    StateFlowFinal_B.theta1_l = rt_atan2d_snf(sqrt((x1 * x1 + F * F) - G1 * G1)
      + F, x1 + G1) * 2.0;

    /* '<S48>:1:18' */
    x2 = rt_atan2d_snf(x3 - sqrt((x2 * x2 + x3 * x3) - x4 * x4), x2 + x4) * 2.0;
    if (x2 < -3.4906585039886591) {
      /* '<S48>:1:19' */
      /* '<S48>:1:20' */
      x2 += 6.2831853071795862;
    }

    StateFlowFinal_B.theta2_j = x2;

    /* End of MATLAB Function: '<S12>/Cinematica Inversa' */

    /* MATLAB Function: '<S12>/Cinematica Inversa vel' */
    G1 = StateFlowFinal_B.MultiportSwitch[2];
    x1 = StateFlowFinal_B.MultiportSwitch[3];

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa vel': '<S50>:1' */
    /* '<S50>:1:3' */
    /* '<S50>:1:4' */
    /* '<S50>:1:6' */
    /* '<S50>:1:8' */
    /* '<S50>:1:10' */
    x2 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l)) -
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j));

    /* '<S50>:1:12' */
    x4 = (((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l))
          * (-0.25 * sin(StateFlowFinal_B.theta1_l)) + (StateFlowFinal_B.Ymov -
           0.25 * sin(StateFlowFinal_B.theta1_l)) * (0.25 * cos
           (StateFlowFinal_B.theta1_l))) / x2;

    /* '<S50>:1:14' */
    x2 = ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
          (-0.25 * cos(StateFlowFinal_B.theta2_j)) * ((StateFlowFinal_B.Xmov +
            0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
          ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j))
          + ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos
             (StateFlowFinal_B.theta1_l)) * (0.25 * sin
           (StateFlowFinal_B.theta2_j))) / x2;

    /* '<S50>:1:16' */
    /* '<S50>:1:18' */
    /* '<S50>:1:20' */
    J[0] = -(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) /
      ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j)) *
      x4;
    J[2] = (-(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) /
            ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos
             (StateFlowFinal_B.theta2_j)) * x2 - 0.25 * sin
            (StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((StateFlowFinal_B.Xmov - 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta2_j)) * (0.25 * cos(StateFlowFinal_B.theta2_j));
    J[1] = x4;
    J[3] = x2;

    /* '<S50>:1:22' */
    if (fabs(J[1]) > fabs(J[0])) {
      x2 = J[0] / J[1];
      x4 = 1.0 / (x2 * J[3] - J[2]);
      J_p_idx_0 = J[3] / J[1] * x4;
      J_p_idx_1 = -x4;
      x5 = -J[2] / J[1] * x4;
      J_p_idx_3 = x2 * x4;
    } else {
      x2 = J[1] / J[0];
      x4 = 1.0 / (J[3] - x2 * J[2]);
      J_p_idx_0 = J[3] / J[0] * x4;
      J_p_idx_1 = -x2 * x4;
      x5 = -J[2] / J[0] * x4;
      J_p_idx_3 = x4;
    }

    F = J_p_idx_0 * G1;
    theta_p[0] = F;
    F = theta_p[0];
    F += x5 * x1;
    theta_p[0] = F;
    F = J_p_idx_1 * G1;
    theta_p[1] = F;
    F = theta_p[1];
    F += J_p_idx_3 * x1;
    theta_p[1] = F;

    /* '<S50>:1:23' */
    /* '<S50>:1:24' */
    StateFlowFinal_B.theta1_p = theta_p[0];
    StateFlowFinal_B.theta2_p = theta_p[1];

    /* End of MATLAB Function: '<S12>/Cinematica Inversa vel' */

    /* MATLAB Function: '<S12>/Cinematica Inversa Acc' */
    x1 = StateFlowFinal_B.MultiportSwitch[4];
    G1 = StateFlowFinal_B.MultiportSwitch[5];
    F = StateFlowFinal_B.theta1_p;
    x3 = StateFlowFinal_B.theta2_p;

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa Acc': '<S49>:1' */
    /* '<S49>:1:3' */
    /* '<S49>:1:4' */
    /* '<S49>:1:6' */
    /* '<S49>:1:8' */
    /* '<S49>:1:10' */
    x2 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l)) -
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j));

    /* '<S49>:1:12' */
    x4 = (((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l))
          * (-0.25 * sin(StateFlowFinal_B.theta1_l)) + (StateFlowFinal_B.Ymov -
           0.25 * sin(StateFlowFinal_B.theta1_l)) * (0.25 * cos
           (StateFlowFinal_B.theta1_l))) / x2;

    /* '<S49>:1:14' */
    x2 = ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
          (-0.25 * cos(StateFlowFinal_B.theta2_j)) * ((StateFlowFinal_B.Xmov +
            0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
          ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j))
          + ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos
             (StateFlowFinal_B.theta1_l)) * (0.25 * sin
           (StateFlowFinal_B.theta2_j))) / x2;

    /* '<S49>:1:16' */
    /* '<S49>:1:18' */
    /* '<S49>:1:20' */
    J[0] = -(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) /
      ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j)) *
      x4;
    J[2] = (-(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) /
            ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos
             (StateFlowFinal_B.theta2_j)) * x2 - 0.25 * sin
            (StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((StateFlowFinal_B.Xmov - 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta2_j)) * (0.25 * cos(StateFlowFinal_B.theta2_j));
    J[1] = x4;
    J[3] = x2;

    /* '<S49>:1:22' */
    x2 = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    J_p_idx_1 = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos
      (StateFlowFinal_B.theta2_j);
    J_p_idx_3 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l));

    /* '<S49>:1:25' */
    x4 = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    x5 = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    D2p = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    g_a = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    T5 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l));

    /* '<S49>:1:28' */
    i_a = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    j_a = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l));

    /* '<S49>:1:31' */
    N21 = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    N22 = (0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j);
    m_a = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l));

    /* '<S49>:1:34' */
    J_p_idx_0 = ((((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l))
                   * (0.25 * cos(StateFlowFinal_B.theta1_l)) - ((0.09 +
      StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) * (0.25 *
      sin(StateFlowFinal_B.theta1_l))) * (StateFlowFinal_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) /
                  (((StateFlowFinal_B.Ymov - 0.25 * sin
                     (StateFlowFinal_B.theta2_j)) * ((0.09 +
      StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
                    (StateFlowFinal_B.Ymov - 0.25 * sin
                     (StateFlowFinal_B.theta1_l))) * ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j))) -
                  ((((0.25 * sin(StateFlowFinal_B.theta1_l) *
                      StateFlowFinal_B.theta1_p +
                      StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowFinal_B.theta1_l)) - (StateFlowFinal_B.MultiportSwitch[3] - 0.25
      * cos(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p) * (0.25 *
      cos(StateFlowFinal_B.theta1_l))) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1_l)) * (0.25 * sin(StateFlowFinal_B.theta1_l)) *
                    StateFlowFinal_B.theta1_p) + 0.25 * cos
                   (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p *
                   ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
                    (StateFlowFinal_B.theta1_l))) * (StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta2_j)) / (((StateFlowFinal_B.Ymov - 0.25 *
      sin(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1_l))) * ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)))) + (0.25 * sin(StateFlowFinal_B.theta2_j)
      * StateFlowFinal_B.theta2_p + StateFlowFinal_B.MultiportSwitch[2]) *
                 (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j))
                 * ((StateFlowFinal_B.Ymov - 0.25 * sin
                     (StateFlowFinal_B.theta1_l)) * (0.25 * cos
      (StateFlowFinal_B.theta1_l)) - ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) * (0.25 * sin(StateFlowFinal_B.theta1_l)))
                 / (((StateFlowFinal_B.Ymov - 0.25 * sin
                      (StateFlowFinal_B.theta2_j)) * ((0.09 +
      StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
                     (StateFlowFinal_B.Ymov - 0.25 * sin
                      (StateFlowFinal_B.theta1_l))) * (x2 * x2))) - (((((0.25 *
      sin(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + StateFlowFinal_B.MultiportSwitch[3]) +
      (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
       (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) * ((0.09 +
      StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j))) - 0.25 *
      cos(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p) + (0.25 * sin
      (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / (J_p_idx_1 * J_p_idx_1)) *
      (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l)) * (0.25 *
         cos(StateFlowFinal_B.theta1_l)) - ((0.09 + StateFlowFinal_B.Xmov) -
         0.25 * cos(StateFlowFinal_B.theta1_l)) * (0.25 * sin
         (StateFlowFinal_B.theta1_l))) * (StateFlowFinal_B.Ymov - 0.25 * sin
        (StateFlowFinal_B.theta2_j))) / (((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) * (J_p_idx_3 * J_p_idx_3));
    x5 = (((((((((((0.25 * sin(StateFlowFinal_B.theta1_l) *
                    StateFlowFinal_B.theta1_p +
                    StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowFinal_B.theta2_j)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + ((0.25 * sin(StateFlowFinal_B.theta1_l) *
      StateFlowFinal_B.theta1_p + StateFlowFinal_B.MultiportSwitch[2]) * (0.25 *
      sin(StateFlowFinal_B.theta2_j)) + 0.25 * cos(StateFlowFinal_B.theta2_j) *
      StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
      (StateFlowFinal_B.theta1_l)))) + (StateFlowFinal_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) * (0.25
      * cos(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25
      * cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25
      * cos(StateFlowFinal_B.theta2_j))) - (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * (0.25 * sin(StateFlowFinal_B.theta2_j)) *
                 StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Xmov) -
      0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) +
      0.25 * cos(StateFlowFinal_B.theta2_j))) + (0.25 * sin
      (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowFinal_B.theta2_j)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / (x4 * x4)) * (StateFlowFinal_B.Ymov -
                0.25 * sin(StateFlowFinal_B.theta2_j)) /
               (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j))
                 * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
                    (StateFlowFinal_B.theta1_l)) / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
                 (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l)))
                * ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos
                   (StateFlowFinal_B.theta2_j))) - 0.25 * cos
               (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) -
              (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
               (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) * (0.25 *
               cos(StateFlowFinal_B.theta2_j)) / ((0.09 - StateFlowFinal_B.Xmov)
               + 0.25 * cos(StateFlowFinal_B.theta2_j))) +
             ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
              (0.25 * cos(StateFlowFinal_B.theta2_j)) * ((0.09 +
                StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
              ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos
               (StateFlowFinal_B.theta2_j)) + ((0.09 + StateFlowFinal_B.Xmov) -
               0.25 * cos(StateFlowFinal_B.theta1_l)) * (0.25 * sin
               (StateFlowFinal_B.theta2_j))) *
             (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
              (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) /
             (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
               ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
                (StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) +
                0.25 * cos(StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov
                - 0.25 * sin(StateFlowFinal_B.theta1_l))) * ((0.09 -
                StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j))))
            - (0.25 * sin(StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p
               + StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
             (StateFlowFinal_B.theta2_j)) * (StateFlowFinal_B.Ymov - 0.25 * sin
             (StateFlowFinal_B.theta2_j)) / (x5 * x5)) + ((StateFlowFinal_B.Ymov
             - 0.25 * sin(StateFlowFinal_B.theta2_j)) * (0.25 * cos
             (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) -
             0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
              StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
            ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
             (StateFlowFinal_B.theta1_l)) * (0.25 * sin
             (StateFlowFinal_B.theta2_j))) * (0.25 * sin
            (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
            StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25
            * sin(StateFlowFinal_B.theta2_j)) / (((StateFlowFinal_B.Ymov - 0.25 *
              sin(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov)
              - 0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
               StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j)) +
             (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l))) *
            (D2p * D2p))) - (((((0.25 * sin(StateFlowFinal_B.theta1_l) *
               StateFlowFinal_B.theta1_p + StateFlowFinal_B.MultiportSwitch[2]) *
              (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) /
              ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos
               (StateFlowFinal_B.theta2_j)) + StateFlowFinal_B.MultiportSwitch[3])
             + (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
                (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) *
             ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
              (StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) +
              0.25 * cos(StateFlowFinal_B.theta2_j))) - 0.25 * cos
            (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p) + (0.25 *
            sin(StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
            StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25
            * sin(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov)
            - 0.25 * cos(StateFlowFinal_B.theta1_l)) / (g_a * g_a)) *
          (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
            (0.25 * cos(StateFlowFinal_B.theta2_j)) * ((0.09 +
              StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
            ((0.09 - StateFlowFinal_B.Xmov) + 0.25 * cos
             (StateFlowFinal_B.theta2_j)) + ((0.09 + StateFlowFinal_B.Xmov) -
             0.25 * cos(StateFlowFinal_B.theta1_l)) * (0.25 * sin
             (StateFlowFinal_B.theta2_j))) * (StateFlowFinal_B.Ymov - 0.25 * sin
            (StateFlowFinal_B.theta2_j))) / (((0.09 - StateFlowFinal_B.Xmov) +
            0.25 * cos(StateFlowFinal_B.theta2_j)) * (T5 * T5))) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) * (0.25 *
      sin(StateFlowFinal_B.theta2_j)) * StateFlowFinal_B.theta2_p / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j));
    J_p_idx_1 = -((((0.25 * sin(StateFlowFinal_B.theta1_l) *
                     StateFlowFinal_B.theta1_p +
                     StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowFinal_B.theta1_l)) - (StateFlowFinal_B.MultiportSwitch[3] - 0.25
      * cos(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p) * (0.25 *
      cos(StateFlowFinal_B.theta1_l))) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1_l)) * (0.25 * sin(StateFlowFinal_B.theta1_l)) *
                   StateFlowFinal_B.theta1_p) + 0.25 * cos
                  (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p *
                  ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
                   (StateFlowFinal_B.theta1_l))) / ((StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) -
      0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) +
      0.25 * cos(StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov - 0.25 *
      sin(StateFlowFinal_B.theta1_l))) - (((((0.25 * sin
      (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + StateFlowFinal_B.MultiportSwitch[3]) +
      (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
       (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) * ((0.09 +
      StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j))) - 0.25 *
      cos(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p) + (0.25 * sin
      (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / (i_a * i_a)) * ((StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta1_l)) * (0.25 * cos
      (StateFlowFinal_B.theta1_l)) - ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) * (0.25 * sin(StateFlowFinal_B.theta1_l)))
      / (j_a * j_a);
    J_p_idx_3 = (((((0.25 * sin(StateFlowFinal_B.theta1_l) *
                     StateFlowFinal_B.theta1_p +
                     StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowFinal_B.theta2_j)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + ((0.25 * sin(StateFlowFinal_B.theta1_l) *
      StateFlowFinal_B.theta1_p + StateFlowFinal_B.MultiportSwitch[2]) * (0.25 *
      sin(StateFlowFinal_B.theta2_j)) + 0.25 * cos(StateFlowFinal_B.theta2_j) *
      StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 * cos
      (StateFlowFinal_B.theta1_l)))) + (StateFlowFinal_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) * (0.25
      * cos(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25
      * cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25
      * cos(StateFlowFinal_B.theta2_j))) - (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * (0.25 * sin(StateFlowFinal_B.theta2_j)) *
                  StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Xmov) -
      0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) +
      0.25 * cos(StateFlowFinal_B.theta2_j))) + (0.25 * sin
      (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowFinal_B.theta2_j)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / (N21 * N21)) / ((StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) -
      0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) +
      0.25 * cos(StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov - 0.25 *
      sin(StateFlowFinal_B.theta1_l))) - (((((0.25 * sin
      (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + StateFlowFinal_B.MultiportSwitch[3]) +
      (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
       (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p) * ((0.09 +
      StateFlowFinal_B.Xmov) - 0.25 * cos(StateFlowFinal_B.theta1_l)) / ((0.09 -
      StateFlowFinal_B.Xmov) + 0.25 * cos(StateFlowFinal_B.theta2_j))) - 0.25 *
      cos(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p) + (0.25 * sin
      (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / (N22 * N22)) * ((StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta2_j)) * (0.25 * cos
      (StateFlowFinal_B.theta2_j)) * ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) / ((0.09 - StateFlowFinal_B.Xmov) + 0.25 *
      cos(StateFlowFinal_B.theta2_j)) + ((0.09 + StateFlowFinal_B.Xmov) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) * (0.25 * sin(StateFlowFinal_B.theta2_j)))
      / (m_a * m_a);

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

    J_p_idx_0 *= F;
    J_p_idx_0 += x5 * x3;
    x5 = x1 - J_p_idx_0;
    J_p_idx_0 = J_p_idx_1 * F;
    J_p_idx_0 += J_p_idx_3 * x3;
    G1 -= J_p_idx_0;
    F = J1[0] * x5;
    theta_p[0] = F;
    F = theta_p[0];
    F += J1[2] * G1;
    theta_p[0] = F;
    F = J1[1] * x5;
    theta_p[1] = F;
    F = theta_p[1];
    F += J1[3] * G1;
    theta_p[1] = F;

    /* '<S49>:1:39' */
    /* '<S49>:1:40' */
    StateFlowFinal_B.theta1_pp = theta_p[0];
    StateFlowFinal_B.theta2_pp = theta_p[1];

    /* End of MATLAB Function: '<S12>/Cinematica Inversa Acc' */

    /* S-Function (xpcethercatpdorx): '<S70>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S70>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S70>/Velocity B' */
    StateFlowFinal_B.VelocityB_f = StateFlowFinal_B.EtherCATPDOReceive15_d;

    /* MATLAB Function: '<S70>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita /Vel Asse B conv': '<S195>:1' */
    /* '<S195>:1:2' */
    StateFlowFinal_B.vel_B_conv_b = StateFlowFinal_B.VelocityB_f *
      6.2831853071795862 / 163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S70>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S70>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[17];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S70>/Velocity A' */
    StateFlowFinal_B.VelocityA_o = StateFlowFinal_B.EtherCATPDOReceive14_b;

    /* MATLAB Function: '<S70>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita /Vel Asse A conv': '<S194>:1' */
    /* '<S194>:1:2' */
    StateFlowFinal_B.vel_A_conv_b = StateFlowFinal_B.VelocityA_o *
      6.2831853071795862 / 163840.0 / 64.0;

    /* Sum: '<S12>/Sum7' */
    StateFlowFinal_B.qdot[0] = StateFlowFinal_B.theta1_p -
      StateFlowFinal_B.vel_B_conv_b;
    StateFlowFinal_B.qdot[1] = StateFlowFinal_B.theta2_p -
      StateFlowFinal_B.vel_A_conv_b;

    /* Sum: '<S12>/Sum4' */
    StateFlowFinal_B.q[0] = StateFlowFinal_B.theta1_l - StateFlowFinal_B.Sum4;
    StateFlowFinal_B.q[1] = StateFlowFinal_B.theta2_j - StateFlowFinal_B.Sum7;

    /* Gain: '<S12>/Kd' */
    StateFlowFinal_B.Kd[0] = StateFlowFinal_P.Kd_Gain * StateFlowFinal_B.qdot[0];

    /* Gain: '<S65>/Proportional Gain' */
    StateFlowFinal_B.ProportionalGain[0] = StateFlowFinal_P.PIDController_P *
      StateFlowFinal_B.q[0];

    /* Gain: '<S12>/Kd' */
    StateFlowFinal_B.Kd[1] = StateFlowFinal_P.Kd_Gain * StateFlowFinal_B.qdot[1];

    /* Gain: '<S65>/Proportional Gain' */
    StateFlowFinal_B.ProportionalGain[1] = StateFlowFinal_P.PIDController_P *
      StateFlowFinal_B.q[1];

    /* DiscreteIntegrator: '<S65>/Integrator' */
    if ((StateFlowFinal_B.StartWork > 0.0) &&
        (StateFlowFinal_DW.Integrator_PrevResetState <= 0)) {
      StateFlowFinal_DW.Integrator_DSTATE[0] = StateFlowFinal_P.Integrator_IC;
      StateFlowFinal_DW.Integrator_DSTATE[1] = StateFlowFinal_P.Integrator_IC;
    }

    StateFlowFinal_B.Integrator[0] = StateFlowFinal_DW.Integrator_DSTATE[0];

    /* Sum: '<S65>/Sum' */
    StateFlowFinal_B.Sum[0] = StateFlowFinal_B.ProportionalGain[0] +
      StateFlowFinal_B.Integrator[0];

    /* DiscreteIntegrator: '<S65>/Integrator' */
    StateFlowFinal_B.Integrator[1] = StateFlowFinal_DW.Integrator_DSTATE[1];

    /* Sum: '<S65>/Sum' */
    StateFlowFinal_B.Sum[1] = StateFlowFinal_B.ProportionalGain[1] +
      StateFlowFinal_B.Integrator[1];

    /* Sum: '<S12>/Sum9' */
    StateFlowFinal_B.Y[0] = (StateFlowFinal_B.theta1_pp + StateFlowFinal_B.Kd[0])
      + StateFlowFinal_B.Sum[0];
    StateFlowFinal_B.Y[1] = (StateFlowFinal_B.theta2_pp + StateFlowFinal_B.Kd[1])
      + StateFlowFinal_B.Sum[1];

    /* MATLAB Function: '<S12>/Dinamica Inversa1' */
    /* MATLAB Function 'Sistema_braccia/Dinamica Inversa1': '<S55>:1' */
    /* '<S55>:1:112' */
    /* '<S55>:1:108' */
    /* '<S55>:1:104' */
    /* '<S55>:1:96' */
    /* '<S55>:1:3' */
    /* '<S55>:1:15' */
    x2 = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    J_p_idx_1 = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    J_p_idx_3 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    x4 = J_p_idx_1 * J_p_idx_1 / 2.0 + J_p_idx_3 * J_p_idx_3 / 2.0;
    x5 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    D2p = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    g_a = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    G1 = atan((sqrt((x2 * x2 - x4 * x4) + x5 * x5) + (sin(StateFlowFinal_B.Sum7)
                - sin(StateFlowFinal_B.Sum4))) / (((D2p * D2p / 2.0 + (cos
      (StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4))) + g_a * g_a / 2.0)
               + 0.72)) * 2.0;

    /* '<S55>:1:19' */
    T5 = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    i_a = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    j_a = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    N21 = i_a * i_a / 2.0 + j_a * j_a / 2.0;
    N22 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    m_a = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    x2 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    x1 = atan((sqrt((T5 * T5 - N21 * N21) + N22 * N22) + (sin
                (StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4))) / (((m_a *
      m_a / 2.0 + (cos(StateFlowFinal_B.Sum4) - cos(StateFlowFinal_B.Sum7))) +
                x2 * x2 / 2.0) - 0.72)) * -2.0;

    /* '<S55>:1:23' */
    x4 = cos(x1) / sin(x1) * sin(StateFlowFinal_B.Sum4) - cos
      (StateFlowFinal_B.Sum4);

    /* '<S55>:1:24' */
    x5 = cos(StateFlowFinal_B.Sum7) - cos(x1) / sin(x1) * sin
      (StateFlowFinal_B.Sum7);

    /* '<S55>:1:25' */
    T5 = cos(G1) - cos(x1) / sin(x1) * sin(G1);

    /* '<S55>:1:27' */
    F = (StateFlowFinal_B.vel_B_conv * x4 + StateFlowFinal_B.vel_A_conv * x5) /
      T5;

    /* '<S55>:1:29' */
    N21 = ((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * sin(StateFlowFinal_B.Sum4)
           + cos(x1) / sin(x1) * sin(StateFlowFinal_B.Sum4)) - cos
      (StateFlowFinal_B.Sum4);

    /* '<S55>:1:31' */
    N22 = ((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * -sin(StateFlowFinal_B.Sum7)
           - cos(x1) / sin(x1) * sin(StateFlowFinal_B.Sum7)) + cos
      (StateFlowFinal_B.Sum7);

    /* '<S55>:1:33' */
    x2 = (cos(G1) / sin(G1) - cos(x1) / sin(x1)) * sin(x1);

    /* '<S55>:1:35' */
    x3 = N21 / x2 * StateFlowFinal_B.vel_B_conv + N22 / x2 *
      StateFlowFinal_B.vel_A_conv;

    /* '<S55>:1:37' */
    J[0] = x4 / T5;
    J[2] = x5 / T5;
    J[1] = N21 / x2;
    J[3] = N22 / x2;

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
    J_p_idx_1 = sin(x1);

    /* '<S55>:1:63' */
    J_p_idx_3 = sin(G1);
    i_a = sin(x1);
    j_a = sin(x1);

    /* '<S55>:1:66' */
    D2p = sin(G1);
    g_a = sin(x1);
    D2p = (-1.0 / (D2p * D2p) * F + 1.0 / (g_a * g_a) * x3) * sin(x1) + (cos(G1)
      / sin(G1) - cos(x1) / sin(x1)) * (cos(x1) * x3);

    /* '<S55>:1:68' */
    J_p_idx_0 = (((-1.0 / (x4 * x4) * x3 * sin(StateFlowFinal_B.Sum4) + cos(x1) /
                   sin(x1) * cos(StateFlowFinal_B.Sum4) *
                   StateFlowFinal_B.vel_B_conv) + sin(StateFlowFinal_B.Sum4) *
                  StateFlowFinal_B.vel_B_conv) * x5 - (cos(x1) / sin(x1) * sin
      (StateFlowFinal_B.Sum4) - cos(StateFlowFinal_B.Sum4)) * N21) / (x5 * x5);
    x5 = (((1.0 / (T5 * T5) * x3 * sin(StateFlowFinal_B.Sum7) - cos(x1) / sin(x1)
            * cos(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) - sin
           (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) * x5 - (cos
           (StateFlowFinal_B.Sum7) - cos(x1) / sin(x1) * sin
           (StateFlowFinal_B.Sum7)) * N21) / (x5 * x5);
    J_p_idx_1 = ((((((-1.0 / (N22 * N22) * F + 1.0 / (m_a * m_a) * x3) * sin
                     (StateFlowFinal_B.Sum4) + (cos(G1) / sin(G1) - cos(x1) /
      sin(x1)) * (cos(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv)) +
                    -1.0 / (J_p_idx_1 * J_p_idx_1) * x3 * sin
                    (StateFlowFinal_B.Sum4)) + cos(x1) / sin(x1) * cos
                   (StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv) + sin
                  (StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv) * x2 -
                 (((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * sin
                   (StateFlowFinal_B.Sum4) + cos(x1) / sin(x1) * sin
                   (StateFlowFinal_B.Sum4)) - cos(StateFlowFinal_B.Sum4)) * D2p)
      / (x2 * x2);
    J_p_idx_3 = ((((((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * (-cos
      (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) - (-1.0 /
      (J_p_idx_3 * J_p_idx_3) * F + 1.0 / (i_a * i_a) * x3) * sin
                     (StateFlowFinal_B.Sum7)) - -1.0 / (j_a * j_a) * x3 * sin
                    (StateFlowFinal_B.Sum7)) - cos(x1) / sin(x1) * cos
                   (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) - sin
                  (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) * x2 -
                 (((cos(G1) / sin(G1) - cos(x1) / sin(x1)) * -sin
                   (StateFlowFinal_B.Sum7) - cos(x1) / sin(x1) * sin
                   (StateFlowFinal_B.Sum7)) + cos(StateFlowFinal_B.Sum7)) * D2p)
      / (x2 * x2);

    /* '<S55>:1:70' */
    J1[0] = -0.125 * sin(StateFlowFinal_B.Sum4);
    J1[2] = 0.0;
    J1[1] = 0.125 * cos(StateFlowFinal_B.Sum4);
    J1[3] = 0.0;

    /* '<S55>:1:72' */
    /* '<S55>:1:75' */
    J2[0] = 0.0;
    J2[2] = -0.125 * sin(StateFlowFinal_B.Sum7);
    J2[1] = 0.0;
    J2[3] = 0.125 * cos(StateFlowFinal_B.Sum7);

    /* '<S55>:1:77' */
    /* '<S55>:1:80' */
    J3[0] = (0.5 * sin(G1) * J[0] + sin(StateFlowFinal_B.Sum4)) * -0.25;
    J3[2] = 0.5 * sin(G1) * J[2] * -0.25;
    J3[1] = (0.5 * cos(G1) * J[0] + cos(StateFlowFinal_B.Sum4)) * 0.25;
    J3[3] = 0.5 * cos(G1) * J[2] * 0.25;

    /* '<S55>:1:82' */
    /* '<S55>:1:85' */
    J4[0] = -0.125 * sin(x1) * J[1];
    J4[2] = (0.5 * sin(x1) * J[3] + sin(StateFlowFinal_B.Sum7)) * -0.25;
    J4[1] = 0.125 * cos(x1) * J[1];
    J4[3] = (0.5 * cos(x1) * J[3] + cos(StateFlowFinal_B.Sum7)) * 0.25;

    /* '<S55>:1:87' */
    /* '<S55>:1:90' */
    JE[0] = (sin(G1) * J[0] + sin(StateFlowFinal_B.Sum4)) * -0.25;
    JE[2] = sin(G1) * J[2] * -0.25;
    JE[1] = (cos(G1) * J[0] + cos(StateFlowFinal_B.Sum4)) * 0.25;
    JE[3] = cos(G1) * J[2] * 0.25;

    /* '<S55>:1:92' */
    /* '<S55>:1:96' */
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      j_a = J1[bitIdx << 1] * 2.9 * J1[0];
      j_a += J1[(bitIdx << 1) + 1] * 2.9 * J1[1];
      x4 = y[bitIdx] + j_a;
      tmp[bitIdx] = 0.0;
      j_a = tmp[bitIdx];
      j_a += J2[bitIdx << 1] * 2.9 * 0.0;
      N21 = J[bitIdx << 1] * 0.0522 * J[0];
      tmp[bitIdx] = j_a;
      j_a = tmp[bitIdx];
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      N21 += J[(bitIdx << 1) + 1] * 0.0522 * J[1];
      tmp[bitIdx] = j_a;
      x4 = (x4 + tmp[bitIdx]) + N21;
      tmp_0[bitIdx] = 0.0;
      j_a = tmp_0[bitIdx];
      j_a += J3[bitIdx << 1] * 2.9 * J3[0];
      N21 = J4[bitIdx << 1] * 2.9 * J4[0];
      tmp_0[bitIdx] = j_a;
      j_a = tmp_0[bitIdx];
      j_a += J3[(bitIdx << 1) + 1] * 2.9 * J3[1];
      N21 += J4[(bitIdx << 1) + 1] * 2.9 * J4[1];
      tmp_0[bitIdx] = j_a;
      y_0[bitIdx] = (x4 + tmp_0[bitIdx]) + N21;
      tmp_1[bitIdx] = 0.0;
      j_a = tmp_1[bitIdx];
      j_a += JE[bitIdx << 1] * 0.36 * JE[0];
      tmp_1[bitIdx] = j_a;
      j_a = tmp_1[bitIdx];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * JE[1];
      tmp_1[bitIdx] = j_a;
      j_a = J1[bitIdx << 1] * 2.9 * 0.0;
      j_a += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      x4 = y[bitIdx + 2] + j_a;
      tmp[bitIdx + 2] = 0.0;
      j_a = tmp[bitIdx + 2];
      j_a += J2[bitIdx << 1] * 2.9 * J2[2];
      N21 = J[bitIdx << 1] * 0.0522 * J[2];
      tmp[bitIdx + 2] = j_a;
      j_a = tmp[bitIdx + 2];
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * J2[3];
      N21 += J[(bitIdx << 1) + 1] * 0.0522 * J[3];
      tmp[bitIdx + 2] = j_a;
      x4 = (tmp[bitIdx + 2] + x4) + N21;
      tmp_0[bitIdx + 2] = 0.0;
      j_a = tmp_0[bitIdx + 2];
      j_a += J3[bitIdx << 1] * 2.9 * J3[2];
      N21 = J4[bitIdx << 1] * 2.9 * J4[2];
      tmp_0[bitIdx + 2] = j_a;
      j_a = tmp_0[bitIdx + 2];
      j_a += J3[(bitIdx << 1) + 1] * 2.9 * J3[3];
      N21 += J4[(bitIdx << 1) + 1] * 2.9 * J4[3];
      tmp_0[bitIdx + 2] = j_a;
      y_0[bitIdx + 2] = (tmp_0[bitIdx + 2] + x4) + N21;
      tmp_1[bitIdx + 2] = 0.0;
      j_a = tmp_1[bitIdx + 2];
      j_a += JE[bitIdx << 1] * 0.36 * JE[2];
      tmp_1[bitIdx + 2] = j_a;
      j_a = tmp_1[bitIdx + 2];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * JE[3];
      tmp_1[bitIdx + 2] = j_a;
    }

    /* '<S55>:1:97' */
    x4 = -0.125 * cos(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv;
    D2p = -0.125 * sin(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv;
    N22 = -0.125 * cos(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv;
    m_a = -0.125 * sin(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv;
    x2 = ((0.5 * cos(G1) * F * J[0] + cos(StateFlowFinal_B.Sum4) *
           StateFlowFinal_B.vel_B_conv) + 0.5 * sin(G1) * J_p_idx_0) * -0.25;
    T5 = (0.5 * cos(G1) * F * J[2] + 0.5 * sin(G1) * x5) * -0.25;
    i_a = ((-sin(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv - 0.5 *
            sin(G1) * F * J[0]) + 0.5 * cos(G1) * J_p_idx_0) * 0.25;
    g_a = (-0.5 * sin(G1) * F * J[2] + 0.5 * cos(G1) * x5) * 0.25;
    tmp_5 = (0.5 * cos(x1) * x3 * J[1] + 0.5 * sin(x1) * J_p_idx_1) * -0.25;
    tmp_6 = ((0.5 * cos(x1) * x3 * J[3] + cos(StateFlowFinal_B.Sum7) *
              StateFlowFinal_B.vel_A_conv) + 0.5 * sin(x1) * J_p_idx_3) * -0.25;
    tmp_7 = (-0.5 * sin(x1) * x3 * J[1] + 0.5 * cos(x1) * J_p_idx_1) * 0.25;
    x1 = ((-sin(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv - 0.5 * sin
           (x1) * x3 * J[3]) + 0.5 * cos(x1) * J_p_idx_3) * 0.25;
    x3 = ((cos(G1) * F * J[0] + cos(StateFlowFinal_B.Sum4) *
           StateFlowFinal_B.vel_B_conv) + sin(G1) * J_p_idx_0) * -0.25;
    tmp_8 = (cos(G1) * F * J[2] + sin(G1) * x5) * -0.25;
    tmp_9 = ((-sin(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv - sin(G1)
              * F * J[0]) + cos(G1) * J_p_idx_0) * 0.25;
    G1 = (-sin(G1) * F * J[2] + cos(G1) * x5) * 0.25;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      M[bitIdx << 1] = y_0[bitIdx << 1] + tmp_1[bitIdx << 1];
      tmp[bitIdx] = 0.0;
      tmp_0[bitIdx] = 0.0;
      j_a = tmp_0[bitIdx];
      N21 = tmp[bitIdx];
      N21 += J1[bitIdx << 1] * 2.9 * x4;
      j_a += J2[bitIdx << 1] * 2.9 * 0.0;
      F = J[bitIdx << 1] * 0.0522 * J_p_idx_0;
      tmp[bitIdx] = N21;
      tmp_0[bitIdx] = j_a;
      j_a = tmp_0[bitIdx];
      N21 = tmp[bitIdx];
      N21 += J1[(bitIdx << 1) + 1] * 2.9 * D2p;
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      F += J[(bitIdx << 1) + 1] * 0.0522 * J_p_idx_1;
      tmp[bitIdx] = N21;
      tmp_0[bitIdx] = j_a;
      j_a = (tmp[bitIdx] + tmp_0[bitIdx]) + F;
      tmp_2[bitIdx] = 0.0;
      N21 = tmp_2[bitIdx];
      N21 += J3[bitIdx << 1] * 2.9 * x2;
      F = J4[bitIdx << 1] * 2.9 * tmp_5;
      tmp_2[bitIdx] = N21;
      N21 = tmp_2[bitIdx];
      N21 += J3[(bitIdx << 1) + 1] * 2.9 * i_a;
      F += J4[(bitIdx << 1) + 1] * 2.9 * tmp_7;
      tmp_2[bitIdx] = N21;
      tmp_3[bitIdx] = (j_a + tmp_2[bitIdx]) + F;
      tmp_4[bitIdx] = 0.0;
      j_a = tmp_4[bitIdx];
      j_a += JE[bitIdx << 1] * 0.36 * x3;
      tmp_4[bitIdx] = j_a;
      j_a = tmp_4[bitIdx];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * tmp_9;
      tmp_4[bitIdx] = j_a;
      M[1 + (bitIdx << 1)] = y_0[(bitIdx << 1) + 1] + tmp_1[(bitIdx << 1) + 1];
      tmp[bitIdx + 2] = 0.0;
      tmp_0[bitIdx + 2] = 0.0;
      j_a = tmp_0[bitIdx + 2];
      N21 = tmp[bitIdx + 2];
      N21 += J1[bitIdx << 1] * 2.9 * 0.0;
      j_a += J2[bitIdx << 1] * 2.9 * N22;
      F = J[bitIdx << 1] * 0.0522 * x5;
      tmp[bitIdx + 2] = N21;
      tmp_0[bitIdx + 2] = j_a;
      j_a = tmp_0[bitIdx + 2];
      N21 = tmp[bitIdx + 2];
      N21 += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * m_a;
      F += J[(bitIdx << 1) + 1] * 0.0522 * J_p_idx_3;
      tmp[bitIdx + 2] = N21;
      tmp_0[bitIdx + 2] = j_a;
      j_a = (tmp[bitIdx + 2] + tmp_0[bitIdx + 2]) + F;
      tmp_2[bitIdx + 2] = 0.0;
      N21 = tmp_2[bitIdx + 2];
      N21 += J3[bitIdx << 1] * 2.9 * T5;
      F = J4[bitIdx << 1] * 2.9 * tmp_6;
      tmp_2[bitIdx + 2] = N21;
      N21 = tmp_2[bitIdx + 2];
      N21 += J3[(bitIdx << 1) + 1] * 2.9 * g_a;
      F += J4[(bitIdx << 1) + 1] * 2.9 * x1;
      tmp_2[bitIdx + 2] = N21;
      tmp_3[bitIdx + 2] = (tmp_2[bitIdx + 2] + j_a) + F;
      tmp_4[bitIdx + 2] = 0.0;
      j_a = tmp_4[bitIdx + 2];
      j_a += JE[bitIdx << 1] * 0.36 * tmp_8;
      tmp_4[bitIdx + 2] = j_a;
      j_a = tmp_4[bitIdx + 2];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * G1;
      tmp_4[bitIdx + 2] = j_a;
    }

    /* '<S55>:1:99' */
    x4 = StateFlowFinal_B.Y[0];
    D2p = StateFlowFinal_B.Y[1];
    x2 = StateFlowFinal_B.vel_B_conv;
    i_a = StateFlowFinal_B.vel_A_conv;
    K[0] = tmp_3[0] + tmp_4[0];
    G1 = M[0] * x4;
    M_0[0] = G1;
    G1 = M_0[0];
    K[1] = tmp_3[1] + tmp_4[1];
    G1 += M[2] * D2p;
    M_0[0] = G1;
    K[2] = tmp_3[2] + tmp_4[2];
    G1 = M[1] * x4;
    M_0[1] = G1;
    G1 = M_0[1];
    K[3] = tmp_3[3] + tmp_4[3];
    G1 += M[3] * D2p;
    M_0[1] = G1;

    /* '<S55>:1:101' */
    /* '<S55>:1:104' */
    /*  Cm = Jtrasm*C + Jm*Thetam_pp; */
    /* '<S55>:1:108' */
    /* '<S55>:1:111' */
    /* '<S55>:1:112' */
    /* '<S55>:1:113' */
    /* '<S55>:1:114' */
    x4 = StateFlowFinal_B.vel_B_conv;
    D2p = StateFlowFinal_B.vel_A_conv;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      F = K[bitIdx] * x2;
      J1[bitIdx] = 0.0;
      G1 = J1[bitIdx];
      G1 += o_a[bitIdx] * M[0];
      J1[bitIdx] = G1;
      G1 = J1[bitIdx];
      G1 += o_a[bitIdx + 2] * M[1];
      J1[bitIdx] = G1;
      F += K[bitIdx + 2] * i_a;
      J1[bitIdx + 2] = 0.0;
      G1 = J1[bitIdx + 2];
      G1 += o_a[bitIdx] * M[2];
      J1[bitIdx + 2] = G1;
      G1 = J1[bitIdx + 2];
      G1 += o_a[bitIdx + 2] * M[3];
      J1[bitIdx + 2] = G1;
      theta_p[bitIdx] = M_0[bitIdx] + F;
      j_a = J1[bitIdx] * 0.015625;
      j_a += J1[bitIdx + 2] * 0.0;
      StateFlowFinal_B.Mm[bitIdx] = j_a + Jm[bitIdx];
      J2[bitIdx] = 0.0;
      G1 = J2[bitIdx];
      G1 += o_a[bitIdx] * K[0];
      J2[bitIdx] = G1;
      G1 = J2[bitIdx];
      G1 += o_a[bitIdx + 2] * K[1];
      J2[bitIdx] = G1;
      j_a = J1[bitIdx] * 0.0;
      j_a += J1[bitIdx + 2] * 0.015625;
      StateFlowFinal_B.Mm[bitIdx + 2] = Jm[bitIdx + 2] + j_a;
      J2[bitIdx + 2] = 0.0;
      G1 = J2[bitIdx + 2];
      G1 += o_a[bitIdx] * K[2];
      J2[bitIdx + 2] = G1;
      G1 = J2[bitIdx + 2];
      G1 += o_a[bitIdx + 2] * K[3];
      J2[bitIdx + 2] = G1;
      J3[bitIdx] = 0.0;
      G1 = J3[bitIdx];
      G1 += J2[bitIdx] * 0.015625;
      J3[bitIdx] = G1;
      G1 = J3[bitIdx];
      G1 += J2[bitIdx + 2] * 0.0;
      J3[bitIdx] = G1;
      F = (real_T)p_a[bitIdx] * x4;
      J3[bitIdx + 2] = 0.0;
      G1 = J3[bitIdx + 2];
      G1 += J2[bitIdx] * 0.0;
      J3[bitIdx + 2] = G1;
      G1 = J3[bitIdx + 2];
      G1 += J2[bitIdx + 2] * 0.015625;
      J3[bitIdx + 2] = G1;
      F += (real_T)p_a[bitIdx + 2] * D2p;
      p_a_0[bitIdx] = F;
    }

    x2 = 2.2250738585072014E-308;
    j_a = J3[0] * p_a_0[0];
    j_a += J3[2] * p_a_0[1];
    G1 = 0.0002485 - j_a;
    G1 = fabs(G1);
    if (G1 > 2.2250738585072014E-308) {
      x1 = 1.0;
      x2 = G1;
    } else {
      x4 = G1 / 2.2250738585072014E-308;
      x1 = x4 * x4;
    }

    j_a = J3[1] * p_a_0[0];
    j_a += J3[3] * p_a_0[1];
    G1 = -0.0002483 - j_a;
    G1 = fabs(G1);
    if (G1 > x2) {
      x4 = x2 / G1;
      x1 = x1 * x4 * x4 + 1.0;
      x2 = G1;
    } else {
      x4 = G1 / x2;
      x1 += x4 * x4;
    }

    x1 = x2 * sqrt(x1);

    /*   */
    /*  Mm_ = Jm; */
    /*  DMm = Mm-Jm; */
    /*  D = DMm*Thetam_pp + Km*Thetam_p; */
    /*  Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)]; */
    /*  Bt = [zeros(2,2); Mm_^-1]; */
    /*  Acl = Aol - Bt*[Kp Kd]; */
    /* '<S55>:1:125' */
    StateFlowFinal_B.C1 = theta_p[0];

    /* '<S55>:1:126' */
    StateFlowFinal_B.C2 = theta_p[1];
    StateFlowFinal_B.ntilde = x1;

    /* End of MATLAB Function: '<S12>/Dinamica Inversa1' */

    /* MATLAB Function: '<S12>/Coppia motrice' */
    /* MATLAB Function 'Sistema_braccia/Coppia motrice': '<S54>:1' */
    /* '<S54>:1:2' */
    /* '<S54>:1:4' */
    StateFlowFinal_B.Cm1 = (0.069632 * StateFlowFinal_B.Y[0] +
      StateFlowFinal_B.C1) / 64.0;

    /* '<S54>:1:5' */
    StateFlowFinal_B.Cm2 = (0.069632 * StateFlowFinal_B.Y[1] +
      StateFlowFinal_B.C2) / 64.0;

    /* Gain: '<S12>/Gain1' */
    StateFlowFinal_B.Gain1 = StateFlowFinal_P.Gain1_Gain_i *
      StateFlowFinal_B.Cm2;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S23>/Constant'
     *  Switch: '<S5>/Switch1'
     */
    if (StateFlowFinal_B.Memory != 0.0) {
      StateFlowFinal_B.Switch1 = StateFlowFinal_P.Constant_Value;
    } else {
      if (StateFlowFinal_B.Bool > StateFlowFinal_P.Switch1_Threshold) {
        /* Switch: '<S5>/Switch1' */
        StateFlowFinal_B.Switch1_c = StateFlowFinal_B.Gain1;
      } else {
        /* Switch: '<S5>/Switch1' */
        StateFlowFinal_B.Switch1_c = StateFlowFinal_B.CoppiaA;
      }

      StateFlowFinal_B.Switch1 = StateFlowFinal_B.Switch1_c;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Saturate: '<S5>/Coppia A braccia saturata' */
    G1 = StateFlowFinal_B.Switch1;
    F = StateFlowFinal_P.CoppiaAbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowFinal_P.CoppiaAbracciasaturata_UpperSat;
    if (G1 > J_p_idx_0) {
      StateFlowFinal_B.CoppiaAbracciasaturata = J_p_idx_0;
    } else if (G1 < F) {
      StateFlowFinal_B.CoppiaAbracciasaturata = F;
    } else {
      StateFlowFinal_B.CoppiaAbracciasaturata = G1;
    }

    /* End of Saturate: '<S5>/Coppia A braccia saturata' */

    /* DataTypeConversion: '<S5>/Data Type Conversion3' */
    j_a = floor(StateFlowFinal_B.CoppiaAbracciasaturata);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowFinal_B.DataTypeConversion3 = (int16_T)(j_a < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion3' */

    /* S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */

    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[18];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S23>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S23>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[19];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S23>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14 = StateFlowFinal_B.EtherCATPDOReceive9;

    /* MATLAB Function: '<S23>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory,
      StateFlowFinal_B.DataTypeConversion14,
      &StateFlowFinal_B.sf_MATLABFunction_e);

    /* Memory: '<S26>/Memory' */
    StateFlowFinal_B.Memory_g = StateFlowFinal_DW.Memory_PreviousInput_o;

    /* Gain: '<S12>/Gain' */
    StateFlowFinal_B.Gain = StateFlowFinal_P.Gain_Gain_j * StateFlowFinal_B.Cm1;

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S26>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    if (StateFlowFinal_B.Memory_g != 0.0) {
      StateFlowFinal_B.Switch1_l = StateFlowFinal_P.Constant_Value_l;
    } else {
      if (StateFlowFinal_B.Bool > StateFlowFinal_P.Switch1_Threshold_f) {
        /* Switch: '<S6>/Switch1' */
        StateFlowFinal_B.Switch1_i = StateFlowFinal_B.Gain;
      } else {
        /* Switch: '<S6>/Switch1' */
        StateFlowFinal_B.Switch1_i = StateFlowFinal_B.CoppiaB;
      }

      StateFlowFinal_B.Switch1_l = StateFlowFinal_B.Switch1_i;
    }

    /* End of Switch: '<S26>/Switch1' */

    /* Saturate: '<S6>/Coppia B braccia saturata' */
    G1 = StateFlowFinal_B.Switch1_l;
    F = StateFlowFinal_P.CoppiaBbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowFinal_P.CoppiaBbracciasaturata_UpperSat;
    if (G1 > J_p_idx_0) {
      StateFlowFinal_B.CoppiaBbracciasaturata = J_p_idx_0;
    } else if (G1 < F) {
      StateFlowFinal_B.CoppiaBbracciasaturata = F;
    } else {
      StateFlowFinal_B.CoppiaBbracciasaturata = G1;
    }

    /* End of Saturate: '<S6>/Coppia B braccia saturata' */

    /* DataTypeConversion: '<S6>/Data Type Conversion4' */
    j_a = floor(StateFlowFinal_B.CoppiaBbracciasaturata);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowFinal_B.DataTypeConversion4 = (int16_T)(j_a < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion4' */

    /* S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */

    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[20];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S26>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S26>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[21];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S26>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14_g =
      StateFlowFinal_B.EtherCATPDOReceive9_h;

    /* MATLAB Function: '<S26>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory_g,
      StateFlowFinal_B.DataTypeConversion14_g,
      &StateFlowFinal_B.sf_MATLABFunction_a);

    /* Memory: '<S30>/Memory' */
    StateFlowFinal_B.Memory_n = StateFlowFinal_DW.Memory_PreviousInput_g;

    /* Sum: '<S34>/Sum' */
    StateFlowFinal_B.Sum_p = StateFlowFinal_B.convert_k -
      StateFlowFinal_B.OffA_vite;

    /* MATLAB Function: '<S43>/Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv': '<S44>:1' */
    /* '<S44>:1:2' */
    StateFlowFinal_B.pos_A_conv_c = StateFlowFinal_B.Sum_p * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S11>/Sum3' */
    StateFlowFinal_B.Sum3 = StateFlowFinal_B.convert10_p -
      StateFlowFinal_B.OffB_vite;

    /* MATLAB Function: '<S43>/Asse B conv v' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v': '<S45>:1' */
    /* '<S45>:1:2' */
    StateFlowFinal_B.pos_B_conv_v = StateFlowFinal_B.Sum3 * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S43>/Sum5' */
    StateFlowFinal_B.Sum5 = StateFlowFinal_B.pos_A_conv_c -
      StateFlowFinal_B.pos_B_conv_v;

    /* Sum: '<S37>/Sum2' */
    StateFlowFinal_B.Sum2_m = StateFlowFinal_B.Clock - StateFlowFinal_B.OffT;

    /* MATLAB Function: '<S11>/Rifermento Asse A Vite' incorporates:
     *  Constant: '<Root>/Alzata A'
     *  Constant: '<Root>/Periodo A'
     */
    /* MATLAB Function 'Sistema Vite/Rifermento Asse A Vite': '<S40>:1' */
    /* '<S40>:1:3' */
    /* '<S40>:1:4' */
    x4 = StateFlowFinal_B.Sum2_m / StateFlowFinal_P.PeriodoA_Value;

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
    StateFlowFinal_B.ldm_pos = x1 * StateFlowFinal_P.AlzataA_Value;

    /* '<S40>:1:28' */
    StateFlowFinal_B.ldm_vel = F * StateFlowFinal_P.AlzataA_Value /
      StateFlowFinal_P.PeriodoA_Value;

    /* End of MATLAB Function: '<S11>/Rifermento Asse A Vite' */

    /* Sum: '<S11>/Sum1' */
    StateFlowFinal_B.Sum1 = StateFlowFinal_B.ldm_pos - StateFlowFinal_B.Sum5;

    /* Gain: '<S38>/Gain' */
    StateFlowFinal_B.Gain_a = StateFlowFinal_P.Gain_Gain_b *
      StateFlowFinal_B.Sum1;

    /* S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[22];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S41>/Velocity A' */
    StateFlowFinal_B.VelocityA_b = StateFlowFinal_B.EtherCATPDOReceive14_j;

    /* S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[23];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S41>/Velocity B' */
    StateFlowFinal_B.VelocityB_d = StateFlowFinal_B.EtherCATPDOReceive15_k;

    /* MATLAB Function: '<S41>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse A conv': '<S46>:1' */
    /* '<S46>:1:2' */
    StateFlowFinal_B.vel_A_conv_d = (StateFlowFinal_B.VelocityA_b +
      StateFlowFinal_B.VelocityB_d) * 0.02 / 6.2831853071795862 *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum8' */
    StateFlowFinal_B.Sum8 = StateFlowFinal_B.ldm_vel -
      StateFlowFinal_B.vel_A_conv_d;

    /* Gain: '<S38>/Gain6' */
    StateFlowFinal_B.Gain6 = StateFlowFinal_P.Gain6_Gain * StateFlowFinal_B.Sum8;

    /* Sum: '<S38>/Sum9' */
    StateFlowFinal_B.Sum9_p = StateFlowFinal_B.Gain_a + StateFlowFinal_B.Gain6;

    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S30>/Constant'
     *  Switch: '<S7>/Switch'
     */
    if (StateFlowFinal_B.Memory_n != 0.0) {
      StateFlowFinal_B.Switch1_f = StateFlowFinal_P.Constant_Value_e;
    } else {
      if (StateFlowFinal_B.Bool > StateFlowFinal_P.Switch_Threshold) {
        /* Gain: '<S7>/Gain' incorporates:
         *  Switch: '<S7>/Switch'
         */
        StateFlowFinal_B.Gain_m = StateFlowFinal_P.Gain_Gain *
          StateFlowFinal_B.Sum9_p;

        /* Switch: '<S7>/Switch' */
        StateFlowFinal_B.Switch = StateFlowFinal_B.Gain_m;
      } else {
        /* Switch: '<S7>/Switch' */
        StateFlowFinal_B.Switch = StateFlowFinal_B.CoppiaH;
      }

      StateFlowFinal_B.Switch1_f = StateFlowFinal_B.Switch;
    }

    /* End of Switch: '<S30>/Switch1' */

    /* DataTypeConversion: '<S7>/Convert A' */
    j_a = floor(StateFlowFinal_B.Switch1_f);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowFinal_B.ConvertA = (int16_T)(j_a < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S7>/Convert A' */

    /* S-Function (xpcethercatpdotx): '<S7>/Torque send' */

    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[24];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S30>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S30>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[25];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S30>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14_k =
      StateFlowFinal_B.EtherCATPDOReceive9_hd;

    /* MATLAB Function: '<S30>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory_n,
      StateFlowFinal_B.DataTypeConversion14_k,
      &StateFlowFinal_B.sf_MATLABFunction_f);

    /* Memory: '<S32>/Memory' */
    StateFlowFinal_B.Memory_d = StateFlowFinal_DW.Memory_PreviousInput_a;

    /* MATLAB Function: '<S11>/Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Asse B conv': '<S36>:1' */
    /* '<S36>:1:2' */
    StateFlowFinal_B.pos_B_conv_p = StateFlowFinal_B.Sum3 * 3.1415926535897931 /
      2048.0 / 40.0;

    /* MATLAB Function: '<S11>/Asse B' incorporates:
     *  Constant: '<Root>/Alzata B '
     *  Constant: '<Root>/Periodo B'
     */
    /* MATLAB Function 'Sistema Vite/Asse B': '<S35>:1' */
    /* '<S35>:1:3' */
    /* '<S35>:1:4' */
    x4 = StateFlowFinal_B.Sum2_m / StateFlowFinal_P.PeriodoB_Value;

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
    StateFlowFinal_B.ldm_pos_n = x1 * StateFlowFinal_P.AlzataB_Value;

    /* '<S35>:1:28' */
    StateFlowFinal_B.ldm_vel_c = F * StateFlowFinal_P.AlzataB_Value /
      StateFlowFinal_P.PeriodoB_Value;

    /* End of MATLAB Function: '<S11>/Asse B' */

    /* Sum: '<S11>/Sum4' */
    StateFlowFinal_B.Sum4_l = StateFlowFinal_B.ldm_pos_n -
      StateFlowFinal_B.pos_B_conv_p;

    /* Gain: '<S11>/Gain2' */
    StateFlowFinal_B.Gain2 = StateFlowFinal_P.Gain2_Gain *
      StateFlowFinal_B.Sum4_l;

    /* MATLAB Function: '<S41>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse B conv': '<S47>:1' */
    /* '<S47>:1:2' */
    StateFlowFinal_B.vel_B_conv_d = StateFlowFinal_B.VelocityB_d *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum6' */
    StateFlowFinal_B.Sum6 = StateFlowFinal_B.ldm_vel_c -
      StateFlowFinal_B.vel_B_conv_d;

    /* Gain: '<S11>/Gain4' */
    StateFlowFinal_B.Gain4 = StateFlowFinal_P.Gain4_Gain * StateFlowFinal_B.Sum6;

    /* Sum: '<S11>/Sum7' */
    StateFlowFinal_B.Sum7_n = StateFlowFinal_B.Gain2 + StateFlowFinal_B.Gain4;

    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S32>/Constant'
     *  Switch: '<S8>/Switch2'
     */
    if (StateFlowFinal_B.Memory_d != 0.0) {
      StateFlowFinal_B.Switch1_h = StateFlowFinal_P.Constant_Value_p;
    } else {
      if (StateFlowFinal_B.Bool > StateFlowFinal_P.Switch2_Threshold) {
        /* Switch: '<S8>/Switch2' */
        StateFlowFinal_B.Switch2 = StateFlowFinal_B.Sum7_n;
      } else {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S8>/Constant1'
         */
        StateFlowFinal_B.Switch2 = StateFlowFinal_P.Constant1_Value_e;
      }

      StateFlowFinal_B.Switch1_h = StateFlowFinal_B.Switch2;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Saturate: '<S8>/Coppia A vite saturata' */
    G1 = StateFlowFinal_B.Switch1_h;
    F = StateFlowFinal_P.CoppiaAvitesaturata_LowerSat;
    J_p_idx_0 = StateFlowFinal_P.CoppiaAvitesaturata_UpperSat;
    if (G1 > J_p_idx_0) {
      StateFlowFinal_B.CoppiaAvitesaturata = J_p_idx_0;
    } else if (G1 < F) {
      StateFlowFinal_B.CoppiaAvitesaturata = F;
    } else {
      StateFlowFinal_B.CoppiaAvitesaturata = G1;
    }

    /* End of Saturate: '<S8>/Coppia A vite saturata' */

    /* DataTypeConversion: '<S8>/Convert B' */
    j_a = floor(StateFlowFinal_B.CoppiaAvitesaturata);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowFinal_B.ConvertB = (int16_T)(j_a < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S8>/Convert B' */

    /* S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */

    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[26];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S32>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S32>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[27];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S32>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14_h =
      StateFlowFinal_B.EtherCATPDOReceive9_m;

    /* MATLAB Function: '<S32>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory_d,
      StateFlowFinal_B.DataTypeConversion14_h,
      &StateFlowFinal_B.sf_MATLABFunction_fb);

    /* SampleTimeMath: '<S39>/TSamp'
     *
     * About '<S39>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp = StateFlowFinal_B.pos_B_conv_p *
      StateFlowFinal_P.TSamp_WtEt;

    /* UnitDelay: '<S39>/UD' */
    StateFlowFinal_B.Uk1 = StateFlowFinal_DW.UD_DSTATE;

    /* Sum: '<S39>/Diff' */
    StateFlowFinal_B.Diff = StateFlowFinal_B.TSamp - StateFlowFinal_B.Uk1;

    /* SampleTimeMath: '<S42>/TSamp'
     *
     * About '<S42>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_i = StateFlowFinal_B.Sum5 *
      StateFlowFinal_P.TSamp_WtEt_g;

    /* UnitDelay: '<S42>/UD' */
    StateFlowFinal_B.Uk1_p = StateFlowFinal_DW.UD_DSTATE_a;

    /* Sum: '<S42>/Diff' */
    StateFlowFinal_B.Diff_l = StateFlowFinal_B.TSamp_i - StateFlowFinal_B.Uk1_p;

    /* MATLAB Function: '<S12>/Cinematica diretta' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta': '<S51>:1' */
    /* '<S51>:1:2' */
    /* '<S51>:1:3' */
    /* '<S51>:1:6' */
    x2 = sin(StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4);
    J_p_idx_1 = -0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4))
      * 0.25;
    x2 = x2 * x2 * 0.0625 + J_p_idx_1 * J_p_idx_1;

    /* '<S51>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4))
      * 0.25;
    x1 = ((-0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) *
           0.25) * ((sin(StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4)) *
                    0.25) * (-0.18 - 0.5 * cos(StateFlowFinal_B.Sum7)) + (sin
           (StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4)) * -0.01125 *
          (cos(StateFlowFinal_B.Sum7) + cos(StateFlowFinal_B.Sum4))) - 0.5 * sin
      (StateFlowFinal_B.Sum7) * (J_p_idx_3 * J_p_idx_3);

    /* '<S51>:1:10' */
    x4 = cos(StateFlowFinal_B.Sum7) + cos(StateFlowFinal_B.Sum4);
    x5 = -0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) *
      0.25;

    /*  Posizione Y end-effector */
    /* '<S51>:1:14' */
    x1 = (sqrt(x1 * x1 - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
               (StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) * 0.25) *
             ((cos(StateFlowFinal_B.Sum7) + cos(StateFlowFinal_B.Sum4)) * 0.0225)
             * (-0.18 - 0.5 * cos(StateFlowFinal_B.Sum7))) + (0.045 * cos
             (StateFlowFinal_B.Sum7) + 0.0081) * (x5 * x5)) * (4.0 * x2)) + -x1)
      / (2.0 * x2);

    /*  Posizione X end-effector */
    /* '<S51>:1:16' */
    StateFlowFinal_B.x_n = (x1 * 0.25 * (sin(StateFlowFinal_B.Sum7) - sin
      (StateFlowFinal_B.Sum4)) - (cos(StateFlowFinal_B.Sum7) + cos
      (StateFlowFinal_B.Sum4)) * 0.0225) / (-0.18 - (cos(StateFlowFinal_B.Sum7)
      - cos(StateFlowFinal_B.Sum4)) * 0.25);
    StateFlowFinal_B.y_k = x1;

    /* DataTypeConversion: '<S57>/DataTypeConversionEnable' incorporates:
     *  Constant: '<S57>/Enable'
     */
    StateFlowFinal_B.DataTypeConversionEnable = StateFlowFinal_P.Enable_Value;

    /* Reshape: '<S57>/Reshapeu' */
    StateFlowFinal_B.Reshapeu = StateFlowFinal_B.vel_B_conv_b;

    /* RateTransition: '<S12>/Rate Transition' */
    StateFlowFinal_B.RateTransition = StateFlowFinal_B.Sum4;

    /* Reshape: '<S57>/Reshapey' */
    StateFlowFinal_B.Reshapey = StateFlowFinal_B.RateTransition;

    /* DataTypeConversion: '<S125>/Conversion' incorporates:
     *  Constant: '<S57>/D'
     */
    StateFlowFinal_B.Conversion_a = StateFlowFinal_P.D_Value;

    /* DataTypeConversion: '<S160>/Conversion' incorporates:
     *  Constant: '<S120>/KalmanGainM'
     */
    StateFlowFinal_B.Conversion[0] = StateFlowFinal_P.KalmanGainM_Value[0];

    /* DataTypeConversion: '<S124>/Conversion' incorporates:
     *  Constant: '<S57>/C'
     */
    StateFlowFinal_B.Conversion_f[0] = StateFlowFinal_P.C_Value[0];

    /* DataTypeConversion: '<S135>/Conversion' incorporates:
     *  Constant: '<S57>/X0'
     */
    StateFlowFinal_B.Conversion_p[0] = StateFlowFinal_P.X0_Value[0];

    /* Reshape: '<S57>/ReshapeX0' */
    StateFlowFinal_B.ReshapeX0[0] = StateFlowFinal_B.Conversion_p[0];

    /* DataTypeConversion: '<S160>/Conversion' incorporates:
     *  Constant: '<S120>/KalmanGainM'
     */
    StateFlowFinal_B.Conversion[1] = StateFlowFinal_P.KalmanGainM_Value[1];

    /* DataTypeConversion: '<S124>/Conversion' incorporates:
     *  Constant: '<S57>/C'
     */
    StateFlowFinal_B.Conversion_f[1] = StateFlowFinal_P.C_Value[1];

    /* DataTypeConversion: '<S135>/Conversion' incorporates:
     *  Constant: '<S57>/X0'
     */
    StateFlowFinal_B.Conversion_p[1] = StateFlowFinal_P.X0_Value[1];

    /* Reshape: '<S57>/ReshapeX0' */
    StateFlowFinal_B.ReshapeX0[1] = StateFlowFinal_B.Conversion_p[1];

    /* Delay: '<S57>/MemoryX' */
    if (StateFlowFinal_DW.icLoad != 0) {
      StateFlowFinal_DW.MemoryX_DSTATE[0] = StateFlowFinal_B.ReshapeX0[0];
      StateFlowFinal_DW.MemoryX_DSTATE[1] = StateFlowFinal_B.ReshapeX0[1];
    }

    StateFlowFinal_B.MemoryX[0] = StateFlowFinal_DW.MemoryX_DSTATE[0];
    StateFlowFinal_B.MemoryX[1] = StateFlowFinal_DW.MemoryX_DSTATE[1];

    /* End of Delay: '<S57>/MemoryX' */

    /* Outputs for Atomic SubSystem: '<S57>/UseCurrentEstimator' */
    StateFlowFi_UseCurrentEstimator(StateFlowFinal_B.DataTypeConversionEnable,
      StateFlowFinal_B.Conversion, StateFlowFinal_B.Reshapeu,
      StateFlowFinal_B.Reshapey, StateFlowFinal_B.Conversion_f,
      StateFlowFinal_B.Conversion_a, StateFlowFinal_B.MemoryX,
      &StateFlowFinal_B.UseCurrentEstimator,
      &StateFlowFinal_DW.UseCurrentEstimator, (P_UseCurrentEstimator_StateFl_T *)
      &StateFlowFinal_P.UseCurrentEstimator);

    /* End of Outputs for SubSystem: '<S57>/UseCurrentEstimator' */

    /* Reshape: '<S57>/Reshapexhat' */
    StateFlowFinal_B.Reshapexhat[0] = StateFlowFinal_B.UseCurrentEstimator.Add[0];
    StateFlowFinal_B.Reshapexhat[1] = StateFlowFinal_B.UseCurrentEstimator.Add[1];

    /* MATLAB Function: '<S12>/Cinematica diretta Acc' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta Acc': '<S52>:1' */
    /* '<S52>:1:3' */
    /* '<S52>:1:4' */
    /* '<S52>:1:6' */
    x2 = 0.25 * sin(StateFlowFinal_B.theta2_j) * StateFlowFinal_B.theta2_p;
    J_p_idx_1 = 0.25 * cos(StateFlowFinal_B.theta2_j) *
      StateFlowFinal_B.theta2_p;

    /* '<S52>:1:9' */
    J_p_idx_3 = 0.25 * sin(StateFlowFinal_B.theta1_l) *
      StateFlowFinal_B.theta1_p;
    x4 = 0.25 * cos(StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_p;
    x1 = ((((((0.5 * sin(StateFlowFinal_B.theta1_l) *
               StateFlowFinal_B.MultiportSwitch[2] * StateFlowFinal_B.theta1_p +
               StateFlowFinal_B.MultiportSwitch[2] *
               StateFlowFinal_B.MultiportSwitch[2]) + J_p_idx_3 * J_p_idx_3) +
             (0.25 * cos(StateFlowFinal_B.theta1_l) * (StateFlowFinal_B.theta1_p
               * StateFlowFinal_B.theta1_p) + 0.25 * sin
              (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.theta1_pp) *
             ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos
              (StateFlowFinal_B.theta1_l))) + StateFlowFinal_B.MultiportSwitch[3]
            * StateFlowFinal_B.MultiportSwitch[3]) - 0.5 * cos
           (StateFlowFinal_B.theta1_l) * StateFlowFinal_B.MultiportSwitch[3] *
           StateFlowFinal_B.theta1_p) + x4 * x4) + (0.25 * sin
      (StateFlowFinal_B.theta1_l) * (StateFlowFinal_B.theta1_p *
      StateFlowFinal_B.theta1_p) - 0.25 * cos(StateFlowFinal_B.theta1_l) *
      StateFlowFinal_B.theta1_pp) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1_l));

    /* '<S52>:1:12' */
    G1 = (((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j))
          * x1 / ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos
                  (StateFlowFinal_B.theta1_l)) - (((((((0.5 * sin
      (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.MultiportSwitch[2] *
      StateFlowFinal_B.theta2_p + StateFlowFinal_B.MultiportSwitch[2] *
      StateFlowFinal_B.MultiportSwitch[2]) + x2 * x2) + (0.25 * cos
                (StateFlowFinal_B.theta2_j) * (StateFlowFinal_B.theta2_p *
      StateFlowFinal_B.theta2_p) + 0.25 * sin(StateFlowFinal_B.theta2_j) *
                StateFlowFinal_B.theta2_pp) * ((StateFlowFinal_B.Xmov - 0.09) -
                0.25 * cos(StateFlowFinal_B.theta2_j))) +
              StateFlowFinal_B.MultiportSwitch[3] *
              StateFlowFinal_B.MultiportSwitch[3]) - 0.5 * cos
             (StateFlowFinal_B.theta2_j) * StateFlowFinal_B.MultiportSwitch[3] *
             StateFlowFinal_B.theta2_p) + J_p_idx_1 * J_p_idx_1) + (0.25 * sin
            (StateFlowFinal_B.theta2_j) * (StateFlowFinal_B.theta2_p *
             StateFlowFinal_B.theta2_p) - 0.25 * cos(StateFlowFinal_B.theta2_j) *
            StateFlowFinal_B.theta2_pp) * (StateFlowFinal_B.Ymov - 0.25 * sin
            (StateFlowFinal_B.theta2_j)))) / ((StateFlowFinal_B.Ymov - 0.25 *
      sin(StateFlowFinal_B.theta2_j)) - ((StateFlowFinal_B.Xmov - 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta2_j)) / ((StateFlowFinal_B.Xmov + 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta1_l)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1_l)));

    /* '<S52>:1:14' */
    StateFlowFinal_B.x_pp_f = ((StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1_l)) * -G1 - x1) / ((StateFlowFinal_B.Xmov + 0.09)
      - 0.25 * cos(StateFlowFinal_B.theta1_l));
    StateFlowFinal_B.y_pp_l = G1;

    /* Sum: '<S12>/Sum2' */
    StateFlowFinal_B.Sum2_d = StateFlowFinal_B.x_pp_f -
      StateFlowFinal_B.MultiportSwitch[4];

    /* Sum: '<S12>/Sum3' */
    StateFlowFinal_B.Sum3_b = StateFlowFinal_B.y_pp_l -
      StateFlowFinal_B.MultiportSwitch[5];

    /* MATLAB Function: '<S12>/MATLAB Function2' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function2': '<S61>:1' */
    if (StateFlowFinal_B.Bool == 4.0) {
      /* '<S61>:1:2' */
      /* '<S61>:1:3' */
      StateFlowFinal_B.xp = StateFlowFinal_B.x_n;

      /* '<S61>:1:4' */
      StateFlowFinal_B.yp = StateFlowFinal_B.y_k;
    } else {
      /* '<S61>:1:6' */
      StateFlowFinal_B.xp = 0.0;

      /* '<S61>:1:7' */
      StateFlowFinal_B.yp = 0.0;
    }

    /* End of MATLAB Function: '<S12>/MATLAB Function2' */

    /* DataTypeConversion: '<S114>/Conversion' incorporates:
     *  Constant: '<S75>/KalmanGainL'
     */
    StateFlowFinal_B.Conversion_c[0] = StateFlowFinal_P.KalmanGainL_Value[0];

    /* DataTypeConversion: '<S115>/Conversion' incorporates:
     *  Constant: '<S75>/KalmanGainM'
     */
    StateFlowFinal_B.Conversion_j[0] = StateFlowFinal_P.KalmanGainM_Value_n[0];

    /* DataTypeConversion: '<S114>/Conversion' incorporates:
     *  Constant: '<S75>/KalmanGainL'
     */
    StateFlowFinal_B.Conversion_c[1] = StateFlowFinal_P.KalmanGainL_Value[1];

    /* DataTypeConversion: '<S115>/Conversion' incorporates:
     *  Constant: '<S75>/KalmanGainM'
     */
    StateFlowFinal_B.Conversion_j[1] = StateFlowFinal_P.KalmanGainM_Value_n[1];

    /* DataTypeConversion: '<S116>/Conversion' incorporates:
     *  Constant: '<S75>/ConstantP'
     */
    StateFlowFinal_B.Conversion_j0 = StateFlowFinal_P.ConstantP_Value;

    /* DataTypeConversion: '<S117>/Conversion' incorporates:
     *  Constant: '<S75>/CovarianceZ'
     */
    StateFlowFinal_B.Conversion_k[0] = StateFlowFinal_P.CovarianceZ_Value[0];
    StateFlowFinal_B.Conversion_k[1] = StateFlowFinal_P.CovarianceZ_Value[1];
    StateFlowFinal_B.Conversion_k[2] = StateFlowFinal_P.CovarianceZ_Value[2];
    StateFlowFinal_B.Conversion_k[3] = StateFlowFinal_P.CovarianceZ_Value[3];

    /* DataTypeConversion: '<S56>/DataTypeConversionEnable' incorporates:
     *  Constant: '<S56>/Enable'
     */
    StateFlowFinal_B.DataTypeConversionEnable_i =
      StateFlowFinal_P.Enable_Value_d;

    /* Reshape: '<S56>/Reshapeu' */
    StateFlowFinal_B.Reshapeu_m = StateFlowFinal_B.vel_A_conv_b;

    /* RateTransition: '<S12>/Rate Transition1' */
    StateFlowFinal_B.RateTransition1 = StateFlowFinal_B.Sum7;

    /* Reshape: '<S56>/Reshapey' */
    StateFlowFinal_B.Reshapey_e = StateFlowFinal_B.RateTransition1;

    /* DataTypeConversion: '<S80>/Conversion' incorporates:
     *  Constant: '<S56>/D'
     */
    StateFlowFinal_B.Conversion_n = StateFlowFinal_P.D_Value_e;

    /* DataTypeConversion: '<S79>/Conversion' incorporates:
     *  Constant: '<S56>/C'
     */
    StateFlowFinal_B.Conversion_g[0] = StateFlowFinal_P.C_Value_j[0];

    /* DataTypeConversion: '<S90>/Conversion' incorporates:
     *  Constant: '<S56>/X0'
     */
    StateFlowFinal_B.Conversion_m[0] = StateFlowFinal_P.X0_Value_o[0];

    /* Reshape: '<S56>/ReshapeX0' */
    StateFlowFinal_B.ReshapeX0_i[0] = StateFlowFinal_B.Conversion_m[0];

    /* DataTypeConversion: '<S79>/Conversion' incorporates:
     *  Constant: '<S56>/C'
     */
    StateFlowFinal_B.Conversion_g[1] = StateFlowFinal_P.C_Value_j[1];

    /* DataTypeConversion: '<S90>/Conversion' incorporates:
     *  Constant: '<S56>/X0'
     */
    StateFlowFinal_B.Conversion_m[1] = StateFlowFinal_P.X0_Value_o[1];

    /* Reshape: '<S56>/ReshapeX0' */
    StateFlowFinal_B.ReshapeX0_i[1] = StateFlowFinal_B.Conversion_m[1];

    /* Delay: '<S56>/MemoryX' */
    if (StateFlowFinal_DW.icLoad_d != 0) {
      StateFlowFinal_DW.MemoryX_DSTATE_h[0] = StateFlowFinal_B.ReshapeX0_i[0];
      StateFlowFinal_DW.MemoryX_DSTATE_h[1] = StateFlowFinal_B.ReshapeX0_i[1];
    }

    StateFlowFinal_B.MemoryX_m[0] = StateFlowFinal_DW.MemoryX_DSTATE_h[0];
    StateFlowFinal_B.MemoryX_m[1] = StateFlowFinal_DW.MemoryX_DSTATE_h[1];

    /* End of Delay: '<S56>/MemoryX' */

    /* Outputs for Atomic SubSystem: '<S56>/UseCurrentEstimator' */
    StateFlowFi_UseCurrentEstimator(StateFlowFinal_B.DataTypeConversionEnable_i,
      StateFlowFinal_B.Conversion_j, StateFlowFinal_B.Reshapeu_m,
      StateFlowFinal_B.Reshapey_e, StateFlowFinal_B.Conversion_g,
      StateFlowFinal_B.Conversion_n, StateFlowFinal_B.MemoryX_m,
      &StateFlowFinal_B.UseCurrentEstimator_e,
      &StateFlowFinal_DW.UseCurrentEstimator_e, (P_UseCurrentEstimator_StateFl_T
      *)&StateFlowFinal_P.UseCurrentEstimator_e);

    /* End of Outputs for SubSystem: '<S56>/UseCurrentEstimator' */

    /* Product: '<S76>/Product' */
    j_a = StateFlowFinal_B.Conversion_g[0];
    N21 = StateFlowFinal_B.UseCurrentEstimator_e.Add[0];
    F = j_a * N21;
    j_a = StateFlowFinal_B.Conversion_g[1];
    N21 = StateFlowFinal_B.UseCurrentEstimator_e.Add[1];
    F += j_a * N21;
    StateFlowFinal_B.Product = F;

    /* Product: '<S76>/Product1' */
    x2 = StateFlowFinal_B.Conversion_n;
    G1 = StateFlowFinal_B.Reshapeu_m;
    StateFlowFinal_B.Product1 = x2 * G1;

    /* Sum: '<S76>/Add1' */
    StateFlowFinal_B.Add1 = StateFlowFinal_B.Product + StateFlowFinal_B.Product1;

    /* DataTypeConversion: '<S77>/Conversion' incorporates:
     *  Constant: '<S56>/A'
     */
    StateFlowFinal_B.Conversion_d[0] = StateFlowFinal_P.A_Value[0];
    StateFlowFinal_B.Conversion_d[1] = StateFlowFinal_P.A_Value[1];
    StateFlowFinal_B.Conversion_d[2] = StateFlowFinal_P.A_Value[2];
    StateFlowFinal_B.Conversion_d[3] = StateFlowFinal_P.A_Value[3];

    /* DataTypeConversion: '<S78>/Conversion' incorporates:
     *  Constant: '<S56>/B'
     */
    StateFlowFinal_B.Conversion_me[0] = StateFlowFinal_P.B_Value[0];
    StateFlowFinal_B.Conversion_me[1] = StateFlowFinal_P.B_Value[1];

    /* DataTypeConversion: '<S81>/Conversion' incorporates:
     *  Constant: '<S56>/G'
     */
    StateFlowFinal_B.Conversion_l[0] = StateFlowFinal_P.G_Value[0];
    StateFlowFinal_B.Conversion_l[1] = StateFlowFinal_P.G_Value[1];
    StateFlowFinal_B.Conversion_l[2] = StateFlowFinal_P.G_Value[2];
    StateFlowFinal_B.Conversion_l[3] = StateFlowFinal_P.G_Value[3];

    /* DataTypeConversion: '<S82>/Conversion' incorporates:
     *  Constant: '<S56>/H'
     */
    StateFlowFinal_B.Conversion_pk[0] = StateFlowFinal_P.H_Value[0];

    /* DataTypeConversion: '<S83>/Conversion' incorporates:
     *  Constant: '<S56>/N'
     */
    StateFlowFinal_B.Conversion_cs[0] = StateFlowFinal_P.N_Value[0];

    /* DataTypeConversion: '<S82>/Conversion' incorporates:
     *  Constant: '<S56>/H'
     */
    StateFlowFinal_B.Conversion_pk[1] = StateFlowFinal_P.H_Value[1];

    /* DataTypeConversion: '<S83>/Conversion' incorporates:
     *  Constant: '<S56>/N'
     */
    StateFlowFinal_B.Conversion_cs[1] = StateFlowFinal_P.N_Value[1];

    /* DataTypeConversion: '<S85>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateFlowFinal_B.Conversion_kg[0] = StateFlowFinal_P.P0_Value[0];

    /* DataTypeConversion: '<S84>/Conversion' */
    StateFlowFinal_B.Conversion_ks[0] = (real32_T)
      StateFlowFinal_B.Conversion_kg[0];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateFlowFinal_B.Conversion_px[0] = StateFlowFinal_P.Q_Value[0];

    /* DataTypeConversion: '<S85>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateFlowFinal_B.Conversion_kg[1] = StateFlowFinal_P.P0_Value[1];

    /* DataTypeConversion: '<S84>/Conversion' */
    StateFlowFinal_B.Conversion_ks[1] = (real32_T)
      StateFlowFinal_B.Conversion_kg[1];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateFlowFinal_B.Conversion_px[1] = StateFlowFinal_P.Q_Value[1];

    /* DataTypeConversion: '<S85>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateFlowFinal_B.Conversion_kg[2] = StateFlowFinal_P.P0_Value[2];

    /* DataTypeConversion: '<S84>/Conversion' */
    StateFlowFinal_B.Conversion_ks[2] = (real32_T)
      StateFlowFinal_B.Conversion_kg[2];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateFlowFinal_B.Conversion_px[2] = StateFlowFinal_P.Q_Value[2];

    /* DataTypeConversion: '<S85>/Conversion' incorporates:
     *  Constant: '<S56>/P0'
     */
    StateFlowFinal_B.Conversion_kg[3] = StateFlowFinal_P.P0_Value[3];

    /* DataTypeConversion: '<S84>/Conversion' */
    StateFlowFinal_B.Conversion_ks[3] = (real32_T)
      StateFlowFinal_B.Conversion_kg[3];

    /* DataTypeConversion: '<S86>/Conversion' incorporates:
     *  Constant: '<S56>/Q'
     */
    StateFlowFinal_B.Conversion_px[3] = StateFlowFinal_P.Q_Value[3];

    /* DataTypeConversion: '<S87>/Conversion' incorporates:
     *  Constant: '<S56>/R'
     */
    StateFlowFinal_B.Conversion_h = StateFlowFinal_P.R_Value;

    /* DataTypeConversion: '<S88>/Conversion' incorporates:
     *  Constant: '<S56>/Reset'
     */
    StateFlowFinal_B.Conversion_n2 = StateFlowFinal_P.Reset_Value_f;

    /* DataTypeConversion: '<S89>/Conversion' */
    StateFlowFinal_B.Conversion_i[0] = StateFlowFinal_B.MemoryX_m[0];
    StateFlowFinal_B.Conversion_i[1] = StateFlowFinal_B.MemoryX_m[1];

    /* ManualSwitch: '<S56>/ManualSwitchPZ' */
    if (StateFlowFinal_P.ManualSwitchPZ_CurrentSetting == 1) {
      StateFlowFinal_B.ManualSwitchPZ[0] = StateFlowFinal_B.Conversion_k[0];
      StateFlowFinal_B.ManualSwitchPZ[1] = StateFlowFinal_B.Conversion_k[1];
    } else {
      StateFlowFinal_B.ManualSwitchPZ[0] = StateFlowFinal_B.Conversion_kg[0];
      StateFlowFinal_B.ManualSwitchPZ[1] = StateFlowFinal_B.Conversion_kg[1];
    }

    /* Product: '<S93>/A[k]*xhat[k|k-1]' */
    J[0] = StateFlowFinal_B.Conversion_d[0];
    J[1] = StateFlowFinal_B.Conversion_d[1];

    /* ManualSwitch: '<S56>/ManualSwitchPZ' */
    if (StateFlowFinal_P.ManualSwitchPZ_CurrentSetting == 1) {
      StateFlowFinal_B.ManualSwitchPZ[2] = StateFlowFinal_B.Conversion_k[2];
      StateFlowFinal_B.ManualSwitchPZ[3] = StateFlowFinal_B.Conversion_k[3];
    } else {
      StateFlowFinal_B.ManualSwitchPZ[2] = StateFlowFinal_B.Conversion_kg[2];
      StateFlowFinal_B.ManualSwitchPZ[3] = StateFlowFinal_B.Conversion_kg[3];
    }

    /* Product: '<S93>/A[k]*xhat[k|k-1]' */
    J[2] = StateFlowFinal_B.Conversion_d[2];
    J[3] = StateFlowFinal_B.Conversion_d[3];
    theta_p[0] = StateFlowFinal_B.Conversion_i[0];
    theta_p[1] = StateFlowFinal_B.Conversion_i[1];

    /* Product: '<S93>/B[k]*u[k]' */
    x2 = StateFlowFinal_B.Reshapeu_m;

    /* Product: '<S93>/A[k]*xhat[k|k-1]' */
    x4 = J[0] * theta_p[0];
    x4 += J[2] * theta_p[1];
    StateFlowFinal_B.Akxhatkk1[0] = x4;

    /* Product: '<S93>/B[k]*u[k]' */
    x4 = StateFlowFinal_B.Conversion_me[0];
    StateFlowFinal_B.Bkuk[0] = x4 * x2;

    /* Product: '<S93>/A[k]*xhat[k|k-1]' */
    D2p = J[1] * theta_p[0];
    D2p += J[3] * theta_p[1];
    StateFlowFinal_B.Akxhatkk1[1] = D2p;

    /* Product: '<S93>/B[k]*u[k]' */
    D2p = StateFlowFinal_B.Conversion_me[1];
    StateFlowFinal_B.Bkuk[1] = D2p * x2;

    /* Outputs for Enabled SubSystem: '<S93>/MeasurementUpdate' */
    StateFlowFina_MeasurementUpdate(StateFlowFinal_B.DataTypeConversionEnable_i,
      StateFlowFinal_B.Conversion_c, StateFlowFinal_B.Reshapey_e,
      StateFlowFinal_B.Conversion_g, StateFlowFinal_B.Conversion_i,
      StateFlowFinal_B.Conversion_n, StateFlowFinal_B.Reshapeu_m,
      &StateFlowFinal_B.MeasurementUpdate, &StateFlowFinal_DW.MeasurementUpdate,
      (P_MeasurementUpdate_StateFlow_T *)&StateFlowFinal_P.MeasurementUpdate);

    /* End of Outputs for SubSystem: '<S93>/MeasurementUpdate' */

    /* Sum: '<S93>/Add' */
    StateFlowFinal_B.Add[0] = (StateFlowFinal_B.Bkuk[0] +
      StateFlowFinal_B.Akxhatkk1[0]) +
      StateFlowFinal_B.MeasurementUpdate.Product3[0];

    /* Reshape: '<S93>/Reshape' */
    StateFlowFinal_B.Reshape[0] = StateFlowFinal_B.Add[0];

    /* Reshape: '<S56>/Reshapexhat' */
    StateFlowFinal_B.Reshapexhat_m[0] =
      StateFlowFinal_B.UseCurrentEstimator_e.Add[0];

    /* Sum: '<S93>/Add' */
    StateFlowFinal_B.Add[1] = (StateFlowFinal_B.Bkuk[1] +
      StateFlowFinal_B.Akxhatkk1[1]) +
      StateFlowFinal_B.MeasurementUpdate.Product3[1];

    /* Reshape: '<S93>/Reshape' */
    StateFlowFinal_B.Reshape[1] = StateFlowFinal_B.Add[1];

    /* Reshape: '<S56>/Reshapexhat' */
    StateFlowFinal_B.Reshapexhat_m[1] =
      StateFlowFinal_B.UseCurrentEstimator_e.Add[1];

    /* Reshape: '<S56>/Reshapeyhat' */
    StateFlowFinal_B.Reshapeyhat = StateFlowFinal_B.Add1;

    /* DataTypeConversion: '<S159>/Conversion' incorporates:
     *  Constant: '<S120>/KalmanGainL'
     */
    StateFlowFinal_B.Conversion_ky[0] = StateFlowFinal_P.KalmanGainL_Value_m[0];
    StateFlowFinal_B.Conversion_ky[1] = StateFlowFinal_P.KalmanGainL_Value_m[1];

    /* DataTypeConversion: '<S161>/Conversion' incorporates:
     *  Constant: '<S120>/ConstantP'
     */
    StateFlowFinal_B.Conversion_pq = StateFlowFinal_P.ConstantP_Value_c;

    /* DataTypeConversion: '<S162>/Conversion' incorporates:
     *  Constant: '<S120>/CovarianceZ'
     */
    StateFlowFinal_B.Conversion_f1[0] = StateFlowFinal_P.CovarianceZ_Value_m[0];
    StateFlowFinal_B.Conversion_f1[1] = StateFlowFinal_P.CovarianceZ_Value_m[1];
    StateFlowFinal_B.Conversion_f1[2] = StateFlowFinal_P.CovarianceZ_Value_m[2];
    StateFlowFinal_B.Conversion_f1[3] = StateFlowFinal_P.CovarianceZ_Value_m[3];

    /* Product: '<S121>/Product' */
    j_a = StateFlowFinal_B.Conversion_f[0];
    N21 = StateFlowFinal_B.UseCurrentEstimator.Add[0];
    F = j_a * N21;
    j_a = StateFlowFinal_B.Conversion_f[1];
    N21 = StateFlowFinal_B.UseCurrentEstimator.Add[1];
    F += j_a * N21;
    StateFlowFinal_B.Product_m = F;

    /* Product: '<S121>/Product1' */
    x2 = StateFlowFinal_B.Conversion_a;
    G1 = StateFlowFinal_B.Reshapeu;
    StateFlowFinal_B.Product1_l = x2 * G1;

    /* Sum: '<S121>/Add1' */
    StateFlowFinal_B.Add1_a = StateFlowFinal_B.Product_m +
      StateFlowFinal_B.Product1_l;

    /* DataTypeConversion: '<S122>/Conversion' incorporates:
     *  Constant: '<S57>/A'
     */
    StateFlowFinal_B.Conversion_b[0] = StateFlowFinal_P.A_Value_j[0];
    StateFlowFinal_B.Conversion_b[1] = StateFlowFinal_P.A_Value_j[1];
    StateFlowFinal_B.Conversion_b[2] = StateFlowFinal_P.A_Value_j[2];
    StateFlowFinal_B.Conversion_b[3] = StateFlowFinal_P.A_Value_j[3];

    /* DataTypeConversion: '<S123>/Conversion' incorporates:
     *  Constant: '<S57>/B'
     */
    StateFlowFinal_B.Conversion_pt[0] = StateFlowFinal_P.B_Value_i[0];
    StateFlowFinal_B.Conversion_pt[1] = StateFlowFinal_P.B_Value_i[1];

    /* DataTypeConversion: '<S126>/Conversion' incorporates:
     *  Constant: '<S57>/G'
     */
    StateFlowFinal_B.Conversion_i1[0] = StateFlowFinal_P.G_Value_m[0];
    StateFlowFinal_B.Conversion_i1[1] = StateFlowFinal_P.G_Value_m[1];
    StateFlowFinal_B.Conversion_i1[2] = StateFlowFinal_P.G_Value_m[2];
    StateFlowFinal_B.Conversion_i1[3] = StateFlowFinal_P.G_Value_m[3];

    /* DataTypeConversion: '<S127>/Conversion' incorporates:
     *  Constant: '<S57>/H'
     */
    StateFlowFinal_B.Conversion_g3[0] = StateFlowFinal_P.H_Value_h[0];

    /* DataTypeConversion: '<S128>/Conversion' incorporates:
     *  Constant: '<S57>/N'
     */
    StateFlowFinal_B.Conversion_jd[0] = StateFlowFinal_P.N_Value_m[0];

    /* DataTypeConversion: '<S127>/Conversion' incorporates:
     *  Constant: '<S57>/H'
     */
    StateFlowFinal_B.Conversion_g3[1] = StateFlowFinal_P.H_Value_h[1];

    /* DataTypeConversion: '<S128>/Conversion' incorporates:
     *  Constant: '<S57>/N'
     */
    StateFlowFinal_B.Conversion_jd[1] = StateFlowFinal_P.N_Value_m[1];

    /* DataTypeConversion: '<S130>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateFlowFinal_B.Conversion_pv[0] = StateFlowFinal_P.P0_Value_m[0];

    /* DataTypeConversion: '<S129>/Conversion' */
    StateFlowFinal_B.Conversion_gp[0] = (real32_T)
      StateFlowFinal_B.Conversion_pv[0];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateFlowFinal_B.Conversion_d0[0] = StateFlowFinal_P.Q_Value_n[0];

    /* DataTypeConversion: '<S130>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateFlowFinal_B.Conversion_pv[1] = StateFlowFinal_P.P0_Value_m[1];

    /* DataTypeConversion: '<S129>/Conversion' */
    StateFlowFinal_B.Conversion_gp[1] = (real32_T)
      StateFlowFinal_B.Conversion_pv[1];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateFlowFinal_B.Conversion_d0[1] = StateFlowFinal_P.Q_Value_n[1];

    /* DataTypeConversion: '<S130>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateFlowFinal_B.Conversion_pv[2] = StateFlowFinal_P.P0_Value_m[2];

    /* DataTypeConversion: '<S129>/Conversion' */
    StateFlowFinal_B.Conversion_gp[2] = (real32_T)
      StateFlowFinal_B.Conversion_pv[2];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateFlowFinal_B.Conversion_d0[2] = StateFlowFinal_P.Q_Value_n[2];

    /* DataTypeConversion: '<S130>/Conversion' incorporates:
     *  Constant: '<S57>/P0'
     */
    StateFlowFinal_B.Conversion_pv[3] = StateFlowFinal_P.P0_Value_m[3];

    /* DataTypeConversion: '<S129>/Conversion' */
    StateFlowFinal_B.Conversion_gp[3] = (real32_T)
      StateFlowFinal_B.Conversion_pv[3];

    /* DataTypeConversion: '<S131>/Conversion' incorporates:
     *  Constant: '<S57>/Q'
     */
    StateFlowFinal_B.Conversion_d0[3] = StateFlowFinal_P.Q_Value_n[3];

    /* DataTypeConversion: '<S132>/Conversion' incorporates:
     *  Constant: '<S57>/R'
     */
    StateFlowFinal_B.Conversion_o = StateFlowFinal_P.R_Value_o;

    /* DataTypeConversion: '<S133>/Conversion' incorporates:
     *  Constant: '<S57>/Reset'
     */
    StateFlowFinal_B.Conversion_dw = StateFlowFinal_P.Reset_Value_o;

    /* DataTypeConversion: '<S134>/Conversion' */
    StateFlowFinal_B.Conversion_pc[0] = StateFlowFinal_B.MemoryX[0];
    StateFlowFinal_B.Conversion_pc[1] = StateFlowFinal_B.MemoryX[1];

    /* ManualSwitch: '<S57>/ManualSwitchPZ' */
    if (StateFlowFinal_P.ManualSwitchPZ_CurrentSetting_p == 1) {
      StateFlowFinal_B.ManualSwitchPZ_l[0] = StateFlowFinal_B.Conversion_f1[0];
      StateFlowFinal_B.ManualSwitchPZ_l[1] = StateFlowFinal_B.Conversion_f1[1];
    } else {
      StateFlowFinal_B.ManualSwitchPZ_l[0] = StateFlowFinal_B.Conversion_pv[0];
      StateFlowFinal_B.ManualSwitchPZ_l[1] = StateFlowFinal_B.Conversion_pv[1];
    }

    /* Product: '<S138>/A[k]*xhat[k|k-1]' */
    J[0] = StateFlowFinal_B.Conversion_b[0];
    J[1] = StateFlowFinal_B.Conversion_b[1];

    /* ManualSwitch: '<S57>/ManualSwitchPZ' */
    if (StateFlowFinal_P.ManualSwitchPZ_CurrentSetting_p == 1) {
      StateFlowFinal_B.ManualSwitchPZ_l[2] = StateFlowFinal_B.Conversion_f1[2];
      StateFlowFinal_B.ManualSwitchPZ_l[3] = StateFlowFinal_B.Conversion_f1[3];
    } else {
      StateFlowFinal_B.ManualSwitchPZ_l[2] = StateFlowFinal_B.Conversion_pv[2];
      StateFlowFinal_B.ManualSwitchPZ_l[3] = StateFlowFinal_B.Conversion_pv[3];
    }

    /* Product: '<S138>/A[k]*xhat[k|k-1]' */
    J[2] = StateFlowFinal_B.Conversion_b[2];
    J[3] = StateFlowFinal_B.Conversion_b[3];
    theta_p[0] = StateFlowFinal_B.Conversion_pc[0];
    theta_p[1] = StateFlowFinal_B.Conversion_pc[1];

    /* Product: '<S138>/B[k]*u[k]' */
    x2 = StateFlowFinal_B.Reshapeu;

    /* Product: '<S138>/A[k]*xhat[k|k-1]' */
    x4 = J[0] * theta_p[0];
    x4 += J[2] * theta_p[1];
    StateFlowFinal_B.Akxhatkk1_b[0] = x4;

    /* Product: '<S138>/B[k]*u[k]' */
    x4 = StateFlowFinal_B.Conversion_pt[0];
    StateFlowFinal_B.Bkuk_b[0] = x4 * x2;

    /* Product: '<S138>/A[k]*xhat[k|k-1]' */
    D2p = J[1] * theta_p[0];
    D2p += J[3] * theta_p[1];
    StateFlowFinal_B.Akxhatkk1_b[1] = D2p;

    /* Product: '<S138>/B[k]*u[k]' */
    D2p = StateFlowFinal_B.Conversion_pt[1];
    StateFlowFinal_B.Bkuk_b[1] = D2p * x2;

    /* Outputs for Enabled SubSystem: '<S138>/MeasurementUpdate' */
    StateFlowFina_MeasurementUpdate(StateFlowFinal_B.DataTypeConversionEnable,
      StateFlowFinal_B.Conversion_ky, StateFlowFinal_B.Reshapey,
      StateFlowFinal_B.Conversion_f, StateFlowFinal_B.Conversion_pc,
      StateFlowFinal_B.Conversion_a, StateFlowFinal_B.Reshapeu,
      &StateFlowFinal_B.MeasurementUpdate_a,
      &StateFlowFinal_DW.MeasurementUpdate_a, (P_MeasurementUpdate_StateFlow_T *)
      &StateFlowFinal_P.MeasurementUpdate_a);

    /* End of Outputs for SubSystem: '<S138>/MeasurementUpdate' */

    /* Sum: '<S138>/Add' */
    StateFlowFinal_B.Add_f[0] = (StateFlowFinal_B.Bkuk_b[0] +
      StateFlowFinal_B.Akxhatkk1_b[0]) +
      StateFlowFinal_B.MeasurementUpdate_a.Product3[0];

    /* Reshape: '<S138>/Reshape' */
    StateFlowFinal_B.Reshape_c[0] = StateFlowFinal_B.Add_f[0];

    /* Sum: '<S138>/Add' */
    StateFlowFinal_B.Add_f[1] = (StateFlowFinal_B.Bkuk_b[1] +
      StateFlowFinal_B.Akxhatkk1_b[1]) +
      StateFlowFinal_B.MeasurementUpdate_a.Product3[1];

    /* Reshape: '<S138>/Reshape' */
    StateFlowFinal_B.Reshape_c[1] = StateFlowFinal_B.Add_f[1];

    /* Reshape: '<S57>/Reshapeyhat' */
    StateFlowFinal_B.Reshapeyhat_f = StateFlowFinal_B.Add1_a;

    /* Gain: '<S12>/Kd1' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function3': '<S62>:1' */
    /* '<S62>:1:2' */
    /* '<S62>:1:3' */
    /* '<S62>:1:4' */
    /* '<S62>:1:5' */
    StateFlowFinal_B.Kd1[0] = StateFlowFinal_P.Kd1_Gain * StateFlowFinal_B.qdot
      [0];

    /* Gain: '<S12>/Kp1' */
    StateFlowFinal_B.Kp1[0] = StateFlowFinal_P.Kp1_Gain_c * StateFlowFinal_B.q[0];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    StateFlowFinal_B.csiH[0] = StateFlowFinal_B.q[0];
    StateFlowFinal_B.csiH[2] = StateFlowFinal_B.qdot[0];

    /* Gain: '<S12>/Kd1' */
    StateFlowFinal_B.Kd1[1] = StateFlowFinal_P.Kd1_Gain * StateFlowFinal_B.qdot
      [1];

    /* Gain: '<S12>/Kp1' */
    StateFlowFinal_B.Kp1[1] = StateFlowFinal_P.Kp1_Gain_c * StateFlowFinal_B.q[1];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    StateFlowFinal_B.csiH[1] = StateFlowFinal_B.q[1];
    StateFlowFinal_B.csiH[3] = StateFlowFinal_B.qdot[1];

    /* '<S62>:1:6' */
    x2 = 2.2250738585072014E-308;
    G1 = fabs(StateFlowFinal_B.csiH[0]);
    if (G1 > 2.2250738585072014E-308) {
      x1 = 1.0;
      x2 = G1;
    } else {
      x4 = G1 / 2.2250738585072014E-308;
      x1 = x4 * x4;
    }

    G1 = fabs(StateFlowFinal_B.csiH[1]);
    if (G1 > x2) {
      x4 = x2 / G1;
      x1 = x1 * x4 * x4 + 1.0;
      x2 = G1;
    } else {
      x4 = G1 / x2;
      x1 += x4 * x4;
    }

    G1 = fabs(StateFlowFinal_B.csiH[2]);
    if (G1 > x2) {
      x4 = x2 / G1;
      x1 = x1 * x4 * x4 + 1.0;
      x2 = G1;
    } else {
      x4 = G1 / x2;
      x1 += x4 * x4;
    }

    G1 = fabs(StateFlowFinal_B.csiH[3]);
    if (G1 > x2) {
      x4 = x2 / G1;
      x1 = x1 * x4 * x4 + 1.0;
      x2 = G1;
    } else {
      x4 = G1 / x2;
      x1 += x4 * x4;
    }

    x1 = x2 * sqrt(x1);

    /* '<S62>:1:7' */
    StateFlowFinal_B.phi = (0.002 * x1 + 0.0005) + x1 * x1 * -1.5E-6;

    /* MATLAB Function: '<S12>/MATLAB Function4' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function4': '<S63>:1' */
    /* '<S63>:1:27' */
    /* '<S63>:1:13' */
    /* '<S63>:1:27' */
    /*  Il risultato &#xE8; una 2x1 [2x4][4x4][4x1] */
    /* '<S63>:1:28' */
    x1 = 0.0;
    x2 = 2.2250738585072014E-308;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      StateFlowFinal_B.z[bitIdx] = 0.0;
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx] * StateFlowFinal_B.csiH[0];
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx + 2] * StateFlowFinal_B.csiH[1];
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx + 4] * StateFlowFinal_B.csiH[2];
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx + 6] * StateFlowFinal_B.csiH[3];
      G1 = fabs(StateFlowFinal_B.z[bitIdx]);
      if (G1 > x2) {
        x4 = x2 / G1;
        x1 = x1 * x4 * x4 + 1.0;
        x2 = G1;
      } else {
        x4 = G1 / x2;
        x1 += x4 * x4;
      }
    }

    x1 = x2 * sqrt(x1);

    /* y = theta_pp + K*csiH+omega; */
    /* eta = (eye(2)-M^-1*Mhat)*y-M^-1*ntilde; */
    /* '<S63>:1:36' */
    /* '<S63>:1:37' */
    /* '<S63>:1:38' */
    /* '<S63>:1:39' */
    x2 = StateFlowFinal_norm_n(StateFlowFinal_B.csiH);
    x2 = (39.619574132744681 * StateFlowFinal_norm_n(StateFlowFinal_B.csiH) +
          9.6405136097991448) + x2 * x2 * -0.27679543903127646;

    /* '<S63>:1:41' */
    StateFlowFinal_B.rho = x2;

    /* MATLAB Function 'Sistema_braccia/MATLAB Jin': '<S64>:1' */
    /* '<S64>:1:3' */
    /* '<S64>:1:4' */
    /* '<S64>:1:6' */
    /* '<S64>:1:8' */
    /* '<S64>:1:10' */
    StateFlowFinal_B.omega[0] = StateFlowFinal_B.z[0] / x1 * x2;

    /* Gain: '<S65>/Integral Gain' */
    StateFlowFinal_B.IntegralGain[0] = StateFlowFinal_P.PIDController_I *
      StateFlowFinal_B.q[0];

    /* MATLAB Function: '<S12>/MATLAB Function4' */
    StateFlowFinal_B.omega[1] = StateFlowFinal_B.z[1] / x1 * x2;

    /* Gain: '<S65>/Integral Gain' */
    StateFlowFinal_B.IntegralGain[1] = StateFlowFinal_P.PIDController_I *
      StateFlowFinal_B.q[1];

    /* MATLAB Function: '<S12>/MATLAB Jin' */
    x2 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1_l)) -
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
      ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
      ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j));

    /* '<S64>:1:12' */
    x4 = (((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l))
          * (-0.25 * sin(StateFlowFinal_B.theta1_l)) + (StateFlowFinal_B.Ymov -
           0.25 * sin(StateFlowFinal_B.theta1_l)) * (0.25 * cos
           (StateFlowFinal_B.theta1_l))) / x2;

    /* '<S64>:1:14' */
    x2 = ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2_j)) *
          (-0.25 * cos(StateFlowFinal_B.theta2_j)) * ((StateFlowFinal_B.Xmov +
            0.09) - 0.25 * cos(StateFlowFinal_B.theta1_l)) /
          ((StateFlowFinal_B.Xmov - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2_j))
          + ((StateFlowFinal_B.Xmov + 0.09) - 0.25 * cos
             (StateFlowFinal_B.theta1_l)) * (0.25 * sin
           (StateFlowFinal_B.theta2_j))) / x2;

    /* '<S64>:1:16' */
    /* '<S64>:1:18' */
    /* '<S64>:1:20' */
    StateFlowFinal_B.x_p = ((-(StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((StateFlowFinal_B.Xmov - 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta2_j)) * x2 - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((StateFlowFinal_B.Xmov - 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta2_j)) * (0.25 * cos(StateFlowFinal_B.theta2_j)))
      * StateFlowFinal_B.theta2_p + -(StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2_j)) / ((StateFlowFinal_B.Xmov - 0.09) - 0.25 *
      cos(StateFlowFinal_B.theta2_j)) * x4 * StateFlowFinal_B.theta1_p;

    /* '<S64>:1:21' */
    StateFlowFinal_B.y_p = x4 * StateFlowFinal_B.theta1_p + x2 *
      StateFlowFinal_B.theta2_p;

    /* SampleTimeMath: '<S175>/TSamp'
     *
     * About '<S175>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_e = StateFlowFinal_B.Sum7 *
      StateFlowFinal_P.TSamp_WtEt_m;

    /* UnitDelay: '<S175>/UD' */
    StateFlowFinal_B.Uk1_l = StateFlowFinal_DW.UD_DSTATE_g;

    /* Sum: '<S175>/Diff' */
    StateFlowFinal_B.Diff_f = StateFlowFinal_B.TSamp_e - StateFlowFinal_B.Uk1_l;

    /* Gain: '<S186>/D*u(k)' */
    StateFlowFinal_B.Duk = StateFlowFinal_P.Duk_Gain * StateFlowFinal_B.Sum7;

    /* UnitDelay: '<S186>/Delay_x1' */
    StateFlowFinal_B.x1k = StateFlowFinal_DW.Delay_x1_DSTATE;

    /* Gain: '<S189>/C11' */
    StateFlowFinal_B.C11 = StateFlowFinal_P.C11_Gain * StateFlowFinal_B.x1k;

    /* UnitDelay: '<S186>/Delay_x2' */
    StateFlowFinal_B.x2k = StateFlowFinal_DW.Delay_x2_DSTATE;

    /* Gain: '<S189>/C12' */
    StateFlowFinal_B.C12 = StateFlowFinal_P.C12_Gain * StateFlowFinal_B.x2k;

    /* Sum: '<S189>/sum2' */
    StateFlowFinal_B.sum2 = StateFlowFinal_B.C11 + StateFlowFinal_B.C12;

    /* Sum: '<S186>/C*X(k)+D*u(k)' */
    StateFlowFinal_B.yk = StateFlowFinal_B.Duk + StateFlowFinal_B.sum2;

    /* SampleTimeMath: '<S173>/TSamp'
     *
     * About '<S173>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_n = StateFlowFinal_B.yk *
      StateFlowFinal_P.TSamp_WtEt_e;

    /* UnitDelay: '<S173>/UD' */
    StateFlowFinal_B.Uk1_d = StateFlowFinal_DW.UD_DSTATE_a3;

    /* Sum: '<S173>/Diff' */
    StateFlowFinal_B.Diff_i = StateFlowFinal_B.TSamp_n - StateFlowFinal_B.Uk1_d;

    /* Gain: '<S187>/A11' */
    StateFlowFinal_B.A11 = StateFlowFinal_P.A11_Gain * StateFlowFinal_B.x1k;

    /* Gain: '<S187>/A12' */
    StateFlowFinal_B.A12 = StateFlowFinal_P.A12_Gain * StateFlowFinal_B.x2k;

    /* Gain: '<S187>/A21' */
    StateFlowFinal_B.A21 = StateFlowFinal_P.A21_Gain * StateFlowFinal_B.x1k;

    /* Gain: '<S187>/A22' */
    StateFlowFinal_B.A22 = StateFlowFinal_P.A22_Gain * StateFlowFinal_B.x2k;

    /* Sum: '<S187>/sum2' */
    StateFlowFinal_B.sum2_n = StateFlowFinal_B.A11 + StateFlowFinal_B.A12;

    /* Sum: '<S187>/sum3' */
    StateFlowFinal_B.sum3 = StateFlowFinal_B.A21 + StateFlowFinal_B.A22;

    /* Gain: '<S188>/B11' */
    StateFlowFinal_B.B11 = StateFlowFinal_P.B11_Gain * StateFlowFinal_B.Sum7;

    /* Sum: '<S186>/A*x1(k) + B*u1(k) ' */
    StateFlowFinal_B.x1k1 = StateFlowFinal_B.sum2_n + StateFlowFinal_B.B11;

    /* Gain: '<S188>/B21' */
    StateFlowFinal_B.B21 = StateFlowFinal_P.B21_Gain * StateFlowFinal_B.Sum7;

    /* Sum: '<S186>/A*x2(k) + B*u2(k)' */
    StateFlowFinal_B.x2k1 = StateFlowFinal_B.sum3 + StateFlowFinal_B.B21;

    /* Gain: '<S182>/D*u(k)' */
    StateFlowFinal_B.Duk_h = StateFlowFinal_P.Duk_Gain_h * StateFlowFinal_B.Sum4;

    /* UnitDelay: '<S182>/Delay_x1' */
    StateFlowFinal_B.x1k_a = StateFlowFinal_DW.Delay_x1_DSTATE_g;

    /* Gain: '<S185>/C11' */
    StateFlowFinal_B.C11_h = StateFlowFinal_P.C11_Gain_n *
      StateFlowFinal_B.x1k_a;

    /* UnitDelay: '<S182>/Delay_x2' */
    StateFlowFinal_B.x2k_g = StateFlowFinal_DW.Delay_x2_DSTATE_m;

    /* Gain: '<S185>/C12' */
    StateFlowFinal_B.C12_e = StateFlowFinal_P.C12_Gain_d *
      StateFlowFinal_B.x2k_g;

    /* Sum: '<S185>/sum2' */
    StateFlowFinal_B.sum2_k = StateFlowFinal_B.C11_h + StateFlowFinal_B.C12_e;

    /* Sum: '<S182>/C*X(k)+D*u(k)' */
    StateFlowFinal_B.yk_i = StateFlowFinal_B.Duk_h + StateFlowFinal_B.sum2_k;

    /* SampleTimeMath: '<S174>/TSamp'
     *
     * About '<S174>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_h = StateFlowFinal_B.yk_i *
      StateFlowFinal_P.TSamp_WtEt_gz;

    /* UnitDelay: '<S174>/UD' */
    StateFlowFinal_B.Uk1_b = StateFlowFinal_DW.UD_DSTATE_j;

    /* Sum: '<S174>/Diff' */
    StateFlowFinal_B.Diff_d = StateFlowFinal_B.TSamp_h - StateFlowFinal_B.Uk1_b;

    /* SampleTimeMath: '<S176>/TSamp'
     *
     * About '<S176>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_nd = StateFlowFinal_B.Sum4 *
      StateFlowFinal_P.TSamp_WtEt_gh;

    /* UnitDelay: '<S176>/UD' */
    StateFlowFinal_B.Uk1_ll = StateFlowFinal_DW.UD_DSTATE_f;

    /* Sum: '<S176>/Diff' */
    StateFlowFinal_B.Diff_n = StateFlowFinal_B.TSamp_nd -
      StateFlowFinal_B.Uk1_ll;

    /* Gain: '<S183>/A11' */
    StateFlowFinal_B.A11_p = StateFlowFinal_P.A11_Gain_e *
      StateFlowFinal_B.x1k_a;

    /* Gain: '<S183>/A12' */
    StateFlowFinal_B.A12_c = StateFlowFinal_P.A12_Gain_a *
      StateFlowFinal_B.x2k_g;

    /* Gain: '<S183>/A21' */
    StateFlowFinal_B.A21_h = StateFlowFinal_P.A21_Gain_m *
      StateFlowFinal_B.x1k_a;

    /* Gain: '<S183>/A22' */
    StateFlowFinal_B.A22_d = StateFlowFinal_P.A22_Gain_g *
      StateFlowFinal_B.x2k_g;

    /* Sum: '<S183>/sum2' */
    StateFlowFinal_B.sum2_nk = StateFlowFinal_B.A11_p + StateFlowFinal_B.A12_c;

    /* Sum: '<S183>/sum3' */
    StateFlowFinal_B.sum3_e = StateFlowFinal_B.A21_h + StateFlowFinal_B.A22_d;

    /* Gain: '<S184>/B11' */
    StateFlowFinal_B.B11_k = StateFlowFinal_P.B11_Gain_f * StateFlowFinal_B.Sum4;

    /* Sum: '<S182>/A*x1(k) + B*u1(k) ' */
    StateFlowFinal_B.x1k1_g = StateFlowFinal_B.sum2_nk + StateFlowFinal_B.B11_k;

    /* Gain: '<S184>/B21' */
    StateFlowFinal_B.B21_l = StateFlowFinal_P.B21_Gain_p * StateFlowFinal_B.Sum4;

    /* Sum: '<S182>/A*x2(k) + B*u2(k)' */
    StateFlowFinal_B.x2k1_n = StateFlowFinal_B.sum3_e + StateFlowFinal_B.B21_l;

    /* DigitalClock: '<S67>/Digital Clock' */
    StateFlowFinal_B.DigitalClock = StateFlowFinal_M->Timing.t[1];

    /* Gain: '<S190>/D*u(k)' */
    StateFlowFinal_B.Duk_n = StateFlowFinal_P.Duk_Gain_g *
      StateFlowFinal_B.DigitalClock;

    /* UnitDelay: '<S190>/Delay_x1' */
    StateFlowFinal_B.x1k_i = StateFlowFinal_DW.Delay_x1_DSTATE_k;

    /* Gain: '<S193>/C11' */
    StateFlowFinal_B.C11_e = StateFlowFinal_P.C11_Gain_g *
      StateFlowFinal_B.x1k_i;

    /* UnitDelay: '<S190>/Delay_x2' */
    StateFlowFinal_B.x2k_d = StateFlowFinal_DW.Delay_x2_DSTATE_k;

    /* Gain: '<S193>/C12' */
    StateFlowFinal_B.C12_m = StateFlowFinal_P.C12_Gain_d1 *
      StateFlowFinal_B.x2k_d;

    /* Sum: '<S193>/sum2' */
    StateFlowFinal_B.sum2_ka = StateFlowFinal_B.C11_e + StateFlowFinal_B.C12_m;

    /* Sum: '<S190>/C*X(k)+D*u(k)' */
    StateFlowFinal_B.yk_m = StateFlowFinal_B.Duk_n + StateFlowFinal_B.sum2_ka;

    /* SampleTimeMath: '<S177>/TSamp'
     *
     * About '<S177>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_f = StateFlowFinal_B.yk_m *
      StateFlowFinal_P.TSamp_WtEt_d;

    /* UnitDelay: '<S177>/UD' */
    StateFlowFinal_B.Uk1_j = StateFlowFinal_DW.UD_DSTATE_g0;

    /* Sum: '<S177>/Diff' */
    StateFlowFinal_B.Diff_b = StateFlowFinal_B.TSamp_f - StateFlowFinal_B.Uk1_j;

    /* SampleTimeMath: '<S178>/TSamp'
     *
     * About '<S178>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_iq = StateFlowFinal_B.DigitalClock *
      StateFlowFinal_P.TSamp_WtEt_p;

    /* UnitDelay: '<S178>/UD' */
    StateFlowFinal_B.Uk1_bl = StateFlowFinal_DW.UD_DSTATE_k;

    /* Sum: '<S178>/Diff' */
    StateFlowFinal_B.Diff_bt = StateFlowFinal_B.TSamp_iq -
      StateFlowFinal_B.Uk1_bl;

    /* Gain: '<S191>/A11' */
    StateFlowFinal_B.A11_h = StateFlowFinal_P.A11_Gain_h *
      StateFlowFinal_B.x1k_i;

    /* Gain: '<S191>/A12' */
    StateFlowFinal_B.A12_g = StateFlowFinal_P.A12_Gain_a3 *
      StateFlowFinal_B.x2k_d;

    /* Gain: '<S191>/A21' */
    StateFlowFinal_B.A21_p = StateFlowFinal_P.A21_Gain_f *
      StateFlowFinal_B.x1k_i;

    /* Gain: '<S191>/A22' */
    StateFlowFinal_B.A22_j = StateFlowFinal_P.A22_Gain_d *
      StateFlowFinal_B.x2k_d;

    /* Sum: '<S191>/sum2' */
    StateFlowFinal_B.sum2_e = StateFlowFinal_B.A11_h + StateFlowFinal_B.A12_g;

    /* Sum: '<S191>/sum3' */
    StateFlowFinal_B.sum3_b = StateFlowFinal_B.A21_p + StateFlowFinal_B.A22_j;

    /* Gain: '<S192>/B11' */
    StateFlowFinal_B.B11_d = StateFlowFinal_P.B11_Gain_n *
      StateFlowFinal_B.DigitalClock;

    /* Sum: '<S190>/A*x1(k) + B*u1(k) ' */
    StateFlowFinal_B.x1k1_h = StateFlowFinal_B.sum2_e + StateFlowFinal_B.B11_d;

    /* Gain: '<S192>/B21' */
    StateFlowFinal_B.B21_h = StateFlowFinal_P.B21_Gain_l *
      StateFlowFinal_B.DigitalClock;

    /* Sum: '<S190>/A*x2(k) + B*u2(k)' */
    StateFlowFinal_B.x2k1_h = StateFlowFinal_B.sum3_b + StateFlowFinal_B.B21_h;

    /* Gain: '<S68>/Gain' */
    StateFlowFinal_B.Gain_p = StateFlowFinal_P.Gain_Gain_c *
      StateFlowFinal_B.theta1_l;

    /* Gain: '<S69>/Gain' */
    StateFlowFinal_B.Gain_n = StateFlowFinal_P.Gain_Gain_d4 *
      StateFlowFinal_B.theta2_j;

    /* Sum: '<S12>/Sum5' */
    StateFlowFinal_B.nphi = StateFlowFinal_B.ntilde - StateFlowFinal_B.phi;

    /* Sum: '<S12>/Sum8' */
    StateFlowFinal_B.YRobusto[0] = ((StateFlowFinal_B.omega[0] +
      StateFlowFinal_B.Kd1[0]) + StateFlowFinal_B.Kp1[0]) +
      StateFlowFinal_B.theta1_pp;
    StateFlowFinal_B.YRobusto[1] = ((StateFlowFinal_B.omega[1] +
      StateFlowFinal_B.Kd1[1]) + StateFlowFinal_B.Kp1[1]) +
      StateFlowFinal_B.theta2_pp;

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
static void StateFlowFinal_update(void)
{
  /* Update for Memory: '<S23>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput =
    StateFlowFinal_B.sf_MATLABFunction_e.y;

  /* Update for DiscreteIntegrator: '<S65>/Integrator' */
  if (StateFlowFinal_B.StartWork > 0.0) {
    StateFlowFinal_DW.Integrator_PrevResetState = 1;
  } else if (StateFlowFinal_B.StartWork < 0.0) {
    StateFlowFinal_DW.Integrator_PrevResetState = -1;
  } else if (StateFlowFinal_B.StartWork == 0.0) {
    StateFlowFinal_DW.Integrator_PrevResetState = 0;
  } else {
    StateFlowFinal_DW.Integrator_PrevResetState = 2;
  }

  /* Update for Memory: '<S26>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_o =
    StateFlowFinal_B.sf_MATLABFunction_a.y;

  /* Update for Memory: '<S30>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_g =
    StateFlowFinal_B.sf_MATLABFunction_f.y;

  /* Update for Memory: '<S32>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_a =
    StateFlowFinal_B.sf_MATLABFunction_fb.y;

  /* Update for UnitDelay: '<S39>/UD' */
  StateFlowFinal_DW.UD_DSTATE = StateFlowFinal_B.TSamp;

  /* Update for UnitDelay: '<S42>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a = StateFlowFinal_B.TSamp_i;

  /* Update for Delay: '<S57>/MemoryX' */
  StateFlowFinal_DW.icLoad = 0U;

  /* Update for Delay: '<S56>/MemoryX' */
  StateFlowFinal_DW.icLoad_d = 0U;

  /* Update for DiscreteIntegrator: '<S65>/Integrator' */
  StateFlowFinal_DW.Integrator_DSTATE[0] += StateFlowFinal_P.Integrator_gainval *
    StateFlowFinal_B.IntegralGain[0];

  /* Update for Delay: '<S57>/MemoryX' */
  StateFlowFinal_DW.MemoryX_DSTATE[0] = StateFlowFinal_B.Reshape_c[0];

  /* Update for Delay: '<S56>/MemoryX' */
  StateFlowFinal_DW.MemoryX_DSTATE_h[0] = StateFlowFinal_B.Reshape[0];

  /* Update for DiscreteIntegrator: '<S65>/Integrator' */
  StateFlowFinal_DW.Integrator_DSTATE[1] += StateFlowFinal_P.Integrator_gainval *
    StateFlowFinal_B.IntegralGain[1];

  /* Update for Delay: '<S57>/MemoryX' */
  StateFlowFinal_DW.MemoryX_DSTATE[1] = StateFlowFinal_B.Reshape_c[1];

  /* Update for Delay: '<S56>/MemoryX' */
  StateFlowFinal_DW.MemoryX_DSTATE_h[1] = StateFlowFinal_B.Reshape[1];

  /* Update for UnitDelay: '<S175>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g = StateFlowFinal_B.TSamp_e;

  /* Update for UnitDelay: '<S186>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE = StateFlowFinal_B.x1k1;

  /* Update for UnitDelay: '<S186>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE = StateFlowFinal_B.x2k1;

  /* Update for UnitDelay: '<S173>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a3 = StateFlowFinal_B.TSamp_n;

  /* Update for UnitDelay: '<S182>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_g = StateFlowFinal_B.x1k1_g;

  /* Update for UnitDelay: '<S182>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_m = StateFlowFinal_B.x2k1_n;

  /* Update for UnitDelay: '<S174>/UD' */
  StateFlowFinal_DW.UD_DSTATE_j = StateFlowFinal_B.TSamp_h;

  /* Update for UnitDelay: '<S176>/UD' */
  StateFlowFinal_DW.UD_DSTATE_f = StateFlowFinal_B.TSamp_nd;

  /* Update for UnitDelay: '<S190>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_k = StateFlowFinal_B.x1k1_h;

  /* Update for UnitDelay: '<S190>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_k = StateFlowFinal_B.x2k1_h;

  /* Update for UnitDelay: '<S177>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g0 = StateFlowFinal_B.TSamp_f;

  /* Update for UnitDelay: '<S178>/UD' */
  StateFlowFinal_DW.UD_DSTATE_k = StateFlowFinal_B.TSamp_iq;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++StateFlowFinal_M->Timing.clockTick0)) {
    ++StateFlowFinal_M->Timing.clockTickH0;
  }

  StateFlowFinal_M->Timing.t[0] = StateFlowFinal_M->Timing.clockTick0 *
    StateFlowFinal_M->Timing.stepSize0 + StateFlowFinal_M->Timing.clockTickH0 *
    StateFlowFinal_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++StateFlowFinal_M->Timing.clockTick1)) {
      ++StateFlowFinal_M->Timing.clockTickH1;
    }

    StateFlowFinal_M->Timing.t[1] = StateFlowFinal_M->Timing.clockTick1 *
      StateFlowFinal_M->Timing.stepSize1 + StateFlowFinal_M->Timing.clockTickH1 *
      StateFlowFinal_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void StateFlowFinal_initialize(void)
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
        StateFlowFinal_DW.EtherCATInit_RWORK.EXECRATIO = 0.001 /
          slrteGetCurrentStepSize();
        status = xpcGetPciConfigAtSlot( 4, 1, &pciInfo);
        if (status ) {
          rtmSetErrorStatus(StateFlowFinal_M,
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
          rtmSetErrorStatus(StateFlowFinal_M,
                            "No valid Ethernet board found at bus 4 slot 1");
        } else {
          char *logfile = "c:\\dbglog.txt";
          mwStateClear( 0 );
          status = xpcEtherCATinitialize(0, DeviceType, 4, 1, 0, 1,
            xmlecatArr_0, xmlecatArr_0_count,0,
            1, logfile, 0.001, 0 );
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(StateFlowFinal_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
        }
      }
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */
    /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */
    /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */
    /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */
    /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S14>/Status Word' */
    /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<Root>/StartHome' */
    StateFlowFinal_B.StartHome = StateFlowFinal_P.StartHome_Value;

    /* Start for Constant: '<Root>/StartRobot' */
    StateFlowFinal_B.StartRobot = StateFlowFinal_P.StartRobot_Value;

    /* Start for Constant: '<Root>/StartWork' */
    StateFlowFinal_B.StartWork = StateFlowFinal_P.StartWork_Value;

    /* Start for Constant: '<Root>/Reset' */
    StateFlowFinal_B.Reset = StateFlowFinal_P.Reset_Value;

    /* Start for Constant: '<Root>/Stop' */
    StateFlowFinal_B.Stop = StateFlowFinal_P.Stop_Value;

    /* Start for Constant: '<Root>/StartZero' */
    StateFlowFinal_B.StartZero = StateFlowFinal_P.StartZero_Value;

    /* Start for Constant: '<Root>/Discesa' */
    StateFlowFinal_B.Discesa = StateFlowFinal_P.Discesa_Value;

    /* Start for Constant: '<Root>/Abbassa' */
    StateFlowFinal_B.Abbassa = StateFlowFinal_P.Abbassa_Value;

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S70>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S70>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S70>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S70>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S23>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S23>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S26>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S26>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S30>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S30>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S32>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S32>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Atomic SubSystem: '<S57>/UseCurrentEstimator' */
    State_UseCurrentEstimator_Start(&StateFlowFinal_DW.UseCurrentEstimator);

    /* End of Start for SubSystem: '<S57>/UseCurrentEstimator' */

    /* Start for Atomic SubSystem: '<S56>/UseCurrentEstimator' */
    State_UseCurrentEstimator_Start(&StateFlowFinal_DW.UseCurrentEstimator_e);

    /* End of Start for SubSystem: '<S56>/UseCurrentEstimator' */

    /* Start for Enabled SubSystem: '<S93>/MeasurementUpdate' */
    StateFl_MeasurementUpdate_Start(&StateFlowFinal_DW.MeasurementUpdate);

    /* End of Start for SubSystem: '<S93>/MeasurementUpdate' */

    /* Start for Enabled SubSystem: '<S138>/MeasurementUpdate' */
    StateFl_MeasurementUpdate_Start(&StateFlowFinal_DW.MeasurementUpdate_a);

    /* End of Start for SubSystem: '<S138>/MeasurementUpdate' */
  }

  /* InitializeConditions for Memory: '<S23>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput = StateFlowFinal_P.Memory_X0;

  /* InitializeConditions for DiscreteIntegrator: '<S65>/Integrator' */
  StateFlowFinal_DW.Integrator_DSTATE[0] = StateFlowFinal_P.Integrator_IC;
  StateFlowFinal_DW.Integrator_DSTATE[1] = StateFlowFinal_P.Integrator_IC;
  StateFlowFinal_DW.Integrator_PrevResetState = 2;

  /* InitializeConditions for Memory: '<S26>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_o = StateFlowFinal_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S30>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_g = StateFlowFinal_P.Memory_X0_o;

  /* InitializeConditions for Memory: '<S32>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_a = StateFlowFinal_P.Memory_X0_a;

  /* InitializeConditions for UnitDelay: '<S39>/UD' */
  StateFlowFinal_DW.UD_DSTATE = StateFlowFinal_P.DiscreteDerivativeB_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S42>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a =
    StateFlowFinal_P.DiscreteDerivativeA_ICPrevScale;

  /* InitializeConditions for Delay: '<S57>/MemoryX' */
  StateFlowFinal_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<S56>/MemoryX' */
  StateFlowFinal_DW.icLoad_d = 1U;

  /* InitializeConditions for UnitDelay: '<S175>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g =
    StateFlowFinal_P.DiscreteDerivativeB2_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S186>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE = StateFlowFinal_P.Delay_x1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S186>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE = StateFlowFinal_P.Delay_x2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S173>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a3 =
    StateFlowFinal_P.DiscreteDerivativeB_ICPrevSca_m;

  /* InitializeConditions for UnitDelay: '<S182>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_g =
    StateFlowFinal_P.Delay_x1_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S182>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_m =
    StateFlowFinal_P.Delay_x2_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S174>/UD' */
  StateFlowFinal_DW.UD_DSTATE_j =
    StateFlowFinal_P.DiscreteDerivativeB1_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S176>/UD' */
  StateFlowFinal_DW.UD_DSTATE_f =
    StateFlowFinal_P.DiscreteDerivativeB3_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S190>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_k =
    StateFlowFinal_P.Delay_x1_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S190>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_k =
    StateFlowFinal_P.Delay_x2_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S177>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g0 =
    StateFlowFinal_P.DiscreteDerivativeB4_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S178>/UD' */
  StateFlowFinal_DW.UD_DSTATE_k =
    StateFlowFinal_P.DiscreteDerivativeB5_ICPrevScal;
  StateFlowFinal_DW.sfEvent = -1;
  StateFlowFinal_DW.temporalCounter_i1 = 0U;
  StateFlowFinal_DW.is_active_c15_StateFlowFinal = 0U;
  StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFin_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S13>/Posizionamento'
   */
  /* InitializeConditions for DiscreteIntegrator: '<S198>/Discrete-Time Integrator' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S198>/Discrete-Time Integrator'
   */
  StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE_c =
    StateFlowFinal_P.DiscreteTimeIntegrator_IC;
  StateFlowFinal_DW.DiscreteTimeIntegrator_PREV_U_j = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S198>/Discrete-Time Integrator1' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S198>/Discrete-Time Integrator1'
   */
  StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTAT_j =
    StateFlowFinal_P.DiscreteTimeIntegrator1_IC;
  StateFlowFinal_DW.DiscreteTimeIntegrator1_PREV__o = 0.0;

  /* SystemInitialize for Outport: '<S198>/CoppiaA' */
  StateFlowFinal_B.CA_o = StateFlowFinal_P.CoppiaA_Y0;

  /* SystemInitialize for Outport: '<S198>/CoppiaB' */
  StateFlowFinal_B.CB_b = StateFlowFinal_P.CoppiaB_Y0;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S13>/Setting'
   */
  /* InitializeConditions for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1'
   */
  StateFlowFinal_DW.DiscreteTimeIntegrator1_DSTATE =
    StateFlowFinal_P.DiscreteTimeIntegrator1_IC_j;
  StateFlowFinal_DW.DiscreteTimeIntegrator1_PREV_U = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S199>/Discrete-Time Integrator' incorporates:
   *  SystemInitialize for DiscreteIntegrator: '<S199>/Discrete-Time Integrator'
   */
  StateFlowFinal_DW.DiscreteTimeIntegrator_DSTATE =
    StateFlowFinal_P.DiscreteTimeIntegrator_IC_e;
  StateFlowFinal_DW.DiscreteTimeIntegrator_PREV_U = 0.0;

  /* SystemInitialize for Outport: '<S199>/CA' */
  StateFlowFinal_B.CA = StateFlowFinal_P.CA_Y0;

  /* SystemInitialize for Outport: '<S199>/CB' */
  StateFlowFinal_B.CB = StateFlowFinal_P.CB_Y0;

  /* SystemInitialize for Outport: '<S199>/CH' */
  StateFlowFinal_B.CH = StateFlowFinal_P.CH_Y0;

  /* SystemInitialize for Atomic SubSystem: '<S57>/UseCurrentEstimator' */
  StateF_UseCurrentEstimator_Init(&StateFlowFinal_B.UseCurrentEstimator,
    (P_UseCurrentEstimator_StateFl_T *)&StateFlowFinal_P.UseCurrentEstimator);

  /* End of SystemInitialize for SubSystem: '<S57>/UseCurrentEstimator' */

  /* SystemInitialize for Atomic SubSystem: '<S56>/UseCurrentEstimator' */
  StateF_UseCurrentEstimator_Init(&StateFlowFinal_B.UseCurrentEstimator_e,
    (P_UseCurrentEstimator_StateFl_T *)&StateFlowFinal_P.UseCurrentEstimator_e);

  /* End of SystemInitialize for SubSystem: '<S56>/UseCurrentEstimator' */

  /* SystemInitialize for Enabled SubSystem: '<S93>/MeasurementUpdate' */
  StateFlo_MeasurementUpdate_Init(&StateFlowFinal_B.MeasurementUpdate,
    (P_MeasurementUpdate_StateFlow_T *)&StateFlowFinal_P.MeasurementUpdate);

  /* End of SystemInitialize for SubSystem: '<S93>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S138>/MeasurementUpdate' */
  StateFlo_MeasurementUpdate_Init(&StateFlowFinal_B.MeasurementUpdate_a,
    (P_MeasurementUpdate_StateFlow_T *)&StateFlowFinal_P.MeasurementUpdate_a);

  /* End of SystemInitialize for SubSystem: '<S138>/MeasurementUpdate' */

  /* Enable for Chart: '<Root>/State flow robot' incorporates:
   *  Enable for SubSystem: '<S13>/Posizionamento'
   */
  StateFlowFinal_DW.Posizionamento_RESET_ELAPS_T = true;

  /* Enable for DiscreteIntegrator: '<S198>/Discrete-Time Integrator' */
  StateFlowFinal_DW.DiscreteTimeIntegrator_SYSTEM_j = 1U;

  /* Enable for DiscreteIntegrator: '<S198>/Discrete-Time Integrator1' */
  StateFlowFinal_DW.DiscreteTimeIntegrator1_SYSTE_c = 1U;

  /* Enable for Chart: '<Root>/State flow robot' incorporates:
   *  Enable for SubSystem: '<S13>/Setting'
   */
  StateFlowFinal_DW.Setting_RESET_ELAPS_T = true;

  /* Enable for DiscreteIntegrator: '<S199>/Discrete-Time Integrator1' */
  StateFlowFinal_DW.DiscreteTimeIntegrator1_SYSTEM_ = 1U;

  /* Enable for DiscreteIntegrator: '<S199>/Discrete-Time Integrator' */
  StateFlowFinal_DW.DiscreteTimeIntegrator_SYSTEM_E = 1U;
}

/* Model terminate function */
static void StateFlowFinal_terminate(void)
{
  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */
  /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */
  /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */
  /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */
  /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S14>/Status Word' */
  /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
  /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
  /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
  /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S71>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S71>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S70>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S70>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S70>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S70>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
  /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S23>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S23>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
  /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S26>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S26>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S41>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S41>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
  /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S30>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S30>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S32>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S32>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[27];
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
  StateFlowFinal_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  StateFlowFinal_update();
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
  StateFlowFinal_initialize();
}

void MdlTerminate(void)
{
  StateFlowFinal_terminate();
}

/* Registration function */
RT_MODEL_StateFlowFinal_T *StateFlowFinal(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)StateFlowFinal_M, 0,
                sizeof(RT_MODEL_StateFlowFinal_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&StateFlowFinal_M->solverInfo,
                          &StateFlowFinal_M->Timing.simTimeStep);
    rtsiSetTPtr(&StateFlowFinal_M->solverInfo, &rtmGetTPtr(StateFlowFinal_M));
    rtsiSetStepSizePtr(&StateFlowFinal_M->solverInfo,
                       &StateFlowFinal_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&StateFlowFinal_M->solverInfo, (&rtmGetErrorStatus
      (StateFlowFinal_M)));
    rtsiSetRTModelPtr(&StateFlowFinal_M->solverInfo, StateFlowFinal_M);
  }

  rtsiSetSimTimeStep(&StateFlowFinal_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&StateFlowFinal_M->solverInfo,"FixedStepDiscrete");
  StateFlowFinal_M->solverInfoPtr = (&StateFlowFinal_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = StateFlowFinal_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    StateFlowFinal_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    StateFlowFinal_M->Timing.sampleTimes =
      (&StateFlowFinal_M->Timing.sampleTimesArray[0]);
    StateFlowFinal_M->Timing.offsetTimes =
      (&StateFlowFinal_M->Timing.offsetTimesArray[0]);

    /* task periods */
    StateFlowFinal_M->Timing.sampleTimes[0] = (0.0);
    StateFlowFinal_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    StateFlowFinal_M->Timing.offsetTimes[0] = (0.0);
    StateFlowFinal_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(StateFlowFinal_M, &StateFlowFinal_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = StateFlowFinal_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    StateFlowFinal_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(StateFlowFinal_M, -1);
  StateFlowFinal_M->Timing.stepSize0 = 0.001;
  StateFlowFinal_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    StateFlowFinal_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(StateFlowFinal_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(StateFlowFinal_M->rtwLogInfo, (NULL));
    rtliSetLogT(StateFlowFinal_M->rtwLogInfo, "tout");
    rtliSetLogX(StateFlowFinal_M->rtwLogInfo, "");
    rtliSetLogXFinal(StateFlowFinal_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(StateFlowFinal_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(StateFlowFinal_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(StateFlowFinal_M->rtwLogInfo, 0);
    rtliSetLogDecimation(StateFlowFinal_M->rtwLogInfo, 1);
    rtliSetLogY(StateFlowFinal_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(StateFlowFinal_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(StateFlowFinal_M->rtwLogInfo, (NULL));
  }

  StateFlowFinal_M->solverInfoPtr = (&StateFlowFinal_M->solverInfo);
  StateFlowFinal_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&StateFlowFinal_M->solverInfo, 0.001);
  rtsiSetSolverMode(&StateFlowFinal_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  StateFlowFinal_M->blockIO = ((void *) &StateFlowFinal_B);
  (void) memset(((void *) &StateFlowFinal_B), 0,
                sizeof(B_StateFlowFinal_T));

  /* parameters */
  StateFlowFinal_M->defaultParam = ((real_T *)&StateFlowFinal_P);

  /* states (dwork) */
  StateFlowFinal_M->dwork = ((void *) &StateFlowFinal_DW);
  (void) memset((void *)&StateFlowFinal_DW, 0,
                sizeof(DW_StateFlowFinal_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  StateFlowFinal_InitializeDataMapInfo(StateFlowFinal_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &StateFlowFinal_M->NonInlinedSFcns.sfcnInfo;
    StateFlowFinal_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(StateFlowFinal_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &StateFlowFinal_M->Sizes.numSampTimes);
    StateFlowFinal_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (StateFlowFinal_M)[0]);
    StateFlowFinal_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (StateFlowFinal_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,StateFlowFinal_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(StateFlowFinal_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(StateFlowFinal_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (StateFlowFinal_M));
    rtssSetStepSizePtr(sfcnInfo, &StateFlowFinal_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(StateFlowFinal_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &StateFlowFinal_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &StateFlowFinal_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &StateFlowFinal_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &StateFlowFinal_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &StateFlowFinal_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &StateFlowFinal_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &StateFlowFinal_M->solverInfoPtr);
  }

  StateFlowFinal_M->Sizes.numSFcns = (28);

  /* register each child */
  {
    (void) memset((void *)&StateFlowFinal_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  28*sizeof(SimStruct));
    StateFlowFinal_M->childSfunctions =
      (&StateFlowFinal_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 28; i++) {
        StateFlowFinal_M->childSfunctions[i] =
          (&StateFlowFinal_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: StateFlowFinal/<Root>/EtherCAT PDO Transmit 5 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion7);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 5");
      ssSetPath(rts, "StateFlowFinal/EtherCAT PDO Transmit 5");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit5_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit5_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit5_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<Root>/EtherCAT PDO Transmit 6 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 6");
      ssSetPath(rts, "StateFlowFinal/EtherCAT PDO Transmit 6");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit6_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit6_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit6_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<Root>/EtherCAT PDO Transmit 3 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion5);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 3");
      ssSetPath(rts, "StateFlowFinal/EtherCAT PDO Transmit 3");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit3_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit3_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<Root>/EtherCAT PDO Transmit 4 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion1_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 4");
      ssSetPath(rts, "StateFlowFinal/EtherCAT PDO Transmit 4");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit4_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit4_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S9>/Motore braccia A (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.MotorebracciaA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia A");
      ssSetPath(rts, "StateFlowFinal/Posizione Braccia /Motore braccia A");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.MotorebracciaA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.MotorebracciaA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.MotorebracciaA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.MotorebracciaA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.MotorebracciaA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.MotorebracciaA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.MotorebracciaA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.MotorebracciaA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.MotorebracciaA_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S9>/Motore braccia B (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.MotorebracciaB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia B");
      ssSetPath(rts, "StateFlowFinal/Posizione Braccia /Motore braccia B");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.MotorebracciaB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.MotorebracciaB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.MotorebracciaB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.MotorebracciaB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.MotorebracciaB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.MotorebracciaB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.MotorebracciaB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.MotorebracciaB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.MotorebracciaB_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S10>/Motore vite A (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.MotoreviteA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite A");
      ssSetPath(rts, "StateFlowFinal/Posizione Vite/Motore vite A");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.MotoreviteA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.MotoreviteA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.MotoreviteA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.MotoreviteA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.MotoreviteA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.MotoreviteA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.MotoreviteA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.MotoreviteA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.MotoreviteA_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S10>/Motore vite B (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.MotoreviteB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite B");
      ssSetPath(rts, "StateFlowFinal/Posizione Vite/Motore vite B");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.MotoreviteB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.MotoreviteB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.MotoreviteB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.MotoreviteB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.MotoreviteB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.MotoreviteB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.MotoreviteB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.MotoreviteB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.MotoreviteB_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S14>/Status Word (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateFlowFinal_B.StatusWord));
        }
      }

      /* path info */
      ssSetModelName(rts, "Status Word");
      ssSetPath(rts, "StateFlowFinal/Status/Status Word");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.StatusWord_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.StatusWord_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.StatusWord_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.StatusWord_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.StatusWord_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.StatusWord_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.StatusWord_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.StatusWord_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.StatusWord_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S1>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateFlowFinal_B.EtherCATPDOReceive16));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "StateFlowFinal/Finecorsa Vite/EtherCAT PDO Receive16");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive16_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive16_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S2>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateFlowFinal_B.EtherCATPDOReceive16_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "StateFlowFinal/Finecorsa braccia/EtherCAT PDO Receive16");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive16_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive16_IWORK_l
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive16_IWORK_l[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S3>/Luce Bianca (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion25);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Bianca");
      ssSetPath(rts, "StateFlowFinal/LED Status/Luce Bianca");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.LuceBianca_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.LuceBianca_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.LuceBianca_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.LuceBianca_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.LuceBianca_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.LuceBianca_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.LuceBianca_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.LuceBianca_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.LuceBianca_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S3>/Luce Rossa  (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion24);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Rossa ");
      ssSetPath(rts, "StateFlowFinal/LED Status/Luce Rossa ");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.LuceRossa_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.LuceRossa_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.LuceRossa_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.LuceRossa_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.LuceRossa_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.LuceRossa_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.LuceRossa_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.LuceRossa_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.LuceRossa_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S3>/Luce Verde (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion26);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Verde");
      ssSetPath(rts, "StateFlowFinal/LED Status/Luce Verde");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.LuceVerde_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.LuceVerde_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.LuceVerde_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.LuceVerde_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.LuceVerde_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.LuceVerde_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.LuceVerde_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.LuceVerde_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.LuceVerde_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S71>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.EtherCATPDOReceive15));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowFinal/Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive15_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive15_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S71>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.EtherCATPDOReceive14));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowFinal/Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive14_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive14_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S70>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.EtherCATPDOReceive15_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowFinal/Sistema_braccia/Velocita /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P5_Size_k);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive15_IWORK_o
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive15_IWORK_o[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S70>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.EtherCATPDOReceive14_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowFinal/Sistema_braccia/Velocita /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P6_Size_h);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive14_IWORK_p
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive14_IWORK_p[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S5>/EtherCAT PDO Transmit 1 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 1");
      ssSetPath(rts, "StateFlowFinal/Out Asse A Braccia/EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit1_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S23>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowFinal_B.EtherCATPDOReceive9));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateFlowFinal/Out Asse A Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S6>/EtherCAT PDO Transmit 7 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.DataTypeConversion4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 7");
      ssSetPath(rts, "StateFlowFinal/Out Asse B Braccia/EtherCAT PDO Transmit 7");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit7_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit7_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S26>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowFinal_B.EtherCATPDOReceive9_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateFlowFinal/Out Asse B Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P7_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK_n[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S41>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.EtherCATPDOReceive14_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowFinal/Sistema Vite/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive14_P7_Size_k);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive14_IWORK_f
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive14_IWORK_f[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S41>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowFinal_B.EtherCATPDOReceive15_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowFinal/Sistema Vite/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P3_Size_a);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive15_P7_Size_fm);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive15_IWORK_n
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive15_IWORK_n[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S7>/Torque send (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.ConvertA);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Torque send");
      ssSetPath(rts, "StateFlowFinal/Out asse A Vite/Torque send");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowFinal_P.Torquesend_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowFinal_P.Torquesend_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowFinal_P.Torquesend_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowFinal_P.Torquesend_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowFinal_P.Torquesend_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowFinal_P.Torquesend_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowFinal_P.Torquesend_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.Torquesend_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.Torquesend_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S30>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowFinal_B.EtherCATPDOReceive9_hd));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateFlowFinal/Out asse A Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK_g[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S8>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowFinal_B.ConvertB);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts, "StateFlowFinal/Out asse B Vite/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOTransmit2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOTransmit2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOTransmit2_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowFinal/<S32>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = StateFlowFinal_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = StateFlowFinal_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = StateFlowFinal_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowFinal_M->NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowFinal_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowFinal_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowFinal_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowFinal_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowFinal_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowFinal_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowFinal_B.EtherCATPDOReceive9_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateFlowFinal/Out asse B Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowFinal_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P4_Size_en);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P5_Size_nv);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowFinal_P.EtherCATPDOReceive9_P7_Size_ai);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK_gl
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowFinal_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowFinal_DW.EtherCATPDOReceive9_IWORK_gl[0]);
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
  StateFlowFinal_M->Sizes.numContStates = (0);/* Number of continuous states */
  StateFlowFinal_M->Sizes.numY = (0);  /* Number of model outputs */
  StateFlowFinal_M->Sizes.numU = (0);  /* Number of model inputs */
  StateFlowFinal_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  StateFlowFinal_M->Sizes.numSampTimes = (2);/* Number of sample times */
  StateFlowFinal_M->Sizes.numBlocks = (579);/* Number of blocks */
  StateFlowFinal_M->Sizes.numBlockIO = (417);/* Number of block outputs */
  StateFlowFinal_M->Sizes.numBlockPrms = (2079);/* Sum of parameter "widths" */
  return StateFlowFinal_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
