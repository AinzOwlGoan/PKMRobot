/*
 * StateFlowGUI.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.882
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Nov 23 10:48:39 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "StateFlowGUI_capi.h"
#include "StateFlowGUI.h"
#include "StateFlowGUI_private.h"

/* Named constants for Chart: '<Root>/State flow robot' */
#define StateFlowGUI_IN_Controllo      ((uint8_T)1U)
#define StateFlowGUI_IN_Coppie         ((uint8_T)2U)
#define StateFlowGUI_IN_Discesa_Vite   ((uint8_T)3U)
#define StateFlowGUI_IN_Home           ((uint8_T)4U)
#define StateFlowGUI_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define StateFlowGUI_IN_OffSet         ((uint8_T)5U)
#define StateFlowGUI_IN_SetA           ((uint8_T)6U)
#define StateFlowGUI_IN_SetA1          ((uint8_T)7U)
#define StateFlowGUI_IN_SetB           ((uint8_T)8U)
#define StateFlowGUI_IN_SetB1          ((uint8_T)9U)
#define StateFlowGUI_IN_Step1          ((uint8_T)10U)
#define StateFlowGUI_IN_Step2          ((uint8_T)11U)
#define StateFlowGUI_IN_Step3          ((uint8_T)12U)
#define StateFlowGUI_IN_Step4          ((uint8_T)13U)
#define StateFlowGUI_IN_StopPhase      ((uint8_T)14U)
#define StateFlowGUI_IN_Traiettoria    ((uint8_T)15U)

/* Block signals (auto storage) */
B_StateFlowGUI_T StateFlowGUI_B;

/* Block states (auto storage) */
DW_StateFlowGUI_T StateFlowGUI_DW;

/* Real-time model */
RT_MODEL_StateFlowGUI_T StateFlowGUI_M_;
RT_MODEL_StateFlowGUI_T *const StateFlowGUI_M = &StateFlowGUI_M_;

/* Forward declaration for local functions */
static void StateFlowGUI_enter_atomic_Home(void);
static real_T StateFlowGUI_mpower_m(real_T a);
static void StateFlowGUI_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowGUI_ldm7t_p(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowGUI_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f);
static real_T StateFlowGUI_mpower(real_T a);
static void StateFlowGUI_ldm7t_f(real_T x, real_T *G, real_T *F);
static void StateFlowGUI_ldm7t(real_T x, real_T *G, real_T *F);
static void StateFlowGUI_ldm7t_b(real_T x, real_T *G, real_T *F);
static real_T StateFlowGUI_norm_n(const real_T x[4]);

/*
 * Output and update for atomic system:
 *    '<S4>/Asse A conv brac'
 *    '<S78>/Asse A conv bracc'
 */
void StateFlowGUI_AsseAconvbrac(real_T rtu_p, B_AsseAconvbrac_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento Braccia/Asse A conv brac': '<S18>:1' */
  /* '<S18>:1:2' */
  localB->pos_A_conv = rtu_p * 6.2831853071795862 / 16384.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Asse B conv brac1'
 *    '<S78>/Asse B conv brac1'
 */
void StateFlowGUI_AsseBconvbrac1(real_T rtu_p, B_AsseBconvbrac1_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento Braccia/Asse B conv brac1': '<S19>:1' */
  /* '<S19>:1:2' */
  localB->pos_B_conv = rtu_p * 6.2831853071795862 / 16384.0 / 64.0;
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

/*
 * Output and update for atomic system:
 *    '<S4>/Cinematica Inversa'
 *    '<S12>/Cinematica Inversa'
 */
void StateFlowGUI_CinematicaInversa(real_T rtu_x, real_T rtu_y,
  B_CinematicaInversa_StateFlow_T *localB)
{
  real_T p;
  real_T e;
  real_T f;
  real_T a;
  real_T b;
  real_T c;

  /* MATLAB Function 'Movimento Braccia/Cinematica Inversa': '<S20>:1' */
  /* '<S20>:1:3' */
  /* '<S20>:1:4' */
  /* '<S20>:1:6' */
  p = 2.0 * rtu_x * 0.25 + 0.045;

  /* '<S20>:1:7' */
  e = 2.0 * rtu_y * 0.25;

  /* '<S20>:1:8' */
  f = ((rtu_x * rtu_x + 0.0081) + rtu_y * rtu_y) + 2.0 * rtu_x * 0.09;

  /* '<S20>:1:9' */
  a = 2.0 * rtu_x * 0.25 + -0.045;

  /* '<S20>:1:10' */
  b = 2.0 * rtu_y * 0.25;

  /* '<S20>:1:11' */
  c = ((rtu_x * rtu_x + 0.0081) + rtu_y * rtu_y) - 2.0 * rtu_x * 0.09;

  /* '<S20>:1:15' */
  localB->theta1 = rt_atan2d_snf(sqrt((p * p + e * e) - f * f) + e, p + f) * 2.0;

  /* '<S20>:1:18' */
  p = rt_atan2d_snf(b - sqrt((a * a + b * b) - c * c), a + c) * 2.0;
  if (p < -3.4906585039886591) {
    /* '<S20>:1:19' */
    /* '<S20>:1:20' */
    p += 6.2831853071795862;
  }

  localB->theta2 = p;
}

/*
 * Output and update for atomic system:
 *    '<S28>/Vel Asse A conv'
 *    '<S81>/Vel Asse A conv'
 */
void StateFlowGUI_VelAsseAconv(real_T rtu_vA, B_VelAsseAconv_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento Braccia/Velocita vite /Vel Asse A conv': '<S34>:1' */
  /* '<S34>:1:2' */
  localB->vel_A_conv = rtu_vA * 6.2831853071795862 / 163840.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S28>/Vel Asse B conv'
 *    '<S81>/Vel Asse B conv'
 */
void StateFlowGUI_VelAsseBconv(real_T rtu_p, B_VelAsseBconv_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento Braccia/Velocita vite /Vel Asse B conv': '<S35>:1' */
  /* '<S35>:1:2' */
  localB->vel_B_conv = rtu_p * 6.2831853071795862 / 163840.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S36>/MATLAB Function'
 *    '<S40>/MATLAB Function'
 *    '<S44>/MATLAB Function'
 *    '<S46>/MATLAB Function'
 */
void StateFlowGUI_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateFlowGUI_T *localB)
{
  /* MATLAB Function 'Out Asse A Braccia/Fungo/MATLAB Function': '<S39>:1' */
  if ((rtu_old == 0.0) && (rtu_now == 1.0)) {
    /* '<S39>:1:2' */
    /* '<S39>:1:3' */
    localB->y = 1.0;
  } else {
    /* '<S39>:1:5' */
    localB->y = rtu_old;
  }
}

/* Function for Chart: '<Root>/State flow robot' */
static void StateFlowGUI_enter_atomic_Home(void)
{
  /* Entry 'Home': '<S13>:29' */
  /* Simulink Function 'Homing': '<S13>:31' */
  StateFlowGUI_B.fc = StateFlowGUI_B.IntegertoBitConverter[14];
  StateFlowGUI_B.fcA = StateFlowGUI_B.IntegertoBitConverter_d[7];
  StateFlowGUI_B.fcB = StateFlowGUI_B.IntegertoBitConverter_d[14];

  /* Outputs for Function Call SubSystem: '<S13>/Homing' */
  /* MATLAB Function: '<S119>/MATLAB Function' */
  /* MATLAB Function 'State flow robot/Homing/MATLAB Function': '<S120>:1' */
  /* '<S120>:1:3' */
  StateFlowGUI_B.CA = -260.0;

  /* '<S120>:1:4' */
  StateFlowGUI_B.CB = -260.0;

  /* '<S120>:1:5' */
  StateFlowGUI_B.CH = -600.0;
  if (StateFlowGUI_B.fc < 1.0) {
    /* '<S120>:1:7' */
    /* '<S120>:1:8' */
    StateFlowGUI_B.CH = 0.0;
  }

  if (StateFlowGUI_B.fcA == 1.0) {
    /* '<S120>:1:10' */
    /* '<S120>:1:11' */
    StateFlowGUI_B.CA = 0.0;
  }

  if (StateFlowGUI_B.fcB == 1.0) {
    /* '<S120>:1:13' */
    /* '<S120>:1:14' */
    StateFlowGUI_B.CB = 0.0;
  }

  /* End of MATLAB Function: '<S119>/MATLAB Function' */
  StateFlowGUI_DW.Homing_SubsysRanBC = 4;

  /* End of Outputs for SubSystem: '<S13>/Homing' */
  StateFlowGUI_B.CoppiaA = StateFlowGUI_B.CA;
  StateFlowGUI_B.CoppiaB = StateFlowGUI_B.CB;
  StateFlowGUI_B.CoppiaH = StateFlowGUI_B.CH;
  StateFlowGUI_B.Bool = 1.0;
  StateFlowGUI_DW.conv = 5.9921124526782858E-6;
  StateFlowGUI_DW.conv_vite = 1.220703125E-7;
  StateFlowGUI_B.Luci = 1.0;
  StateFlowGUI_DW.C1 = 1.0;
  StateFlowGUI_DW.C2 = 1.0;
  StateFlowGUI_B.Kp_l = StateFlowGUI_B.Kp;
  StateFlowGUI_B.Hb = 0.0;
  StateFlowGUI_B.Hv = 0.0;
  StateFlowGUI_B.FineLavorazione = 0.0;
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

/* Function for MATLAB Function: '<S70>/Quadrato' */
static real_T StateFlowGUI_mpower_m(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

/* Function for MATLAB Function: '<S70>/g' */
static void StateFlowGUI_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f)
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

/* Function for MATLAB Function: '<S70>/Cerchi Tangenti' */
static void StateFlowGUI_ldm7t_p(real_T x, real_T *G, real_T *F, real_T *f)
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

/* Function for MATLAB Function: '<S70>/spirale' */
static void StateFlowGUI_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f)
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

/* Function for MATLAB Function: '<S27>/Quadrato' */
static real_T StateFlowGUI_mpower(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

/* Function for MATLAB Function: '<S27>/g' */
static void StateFlowGUI_ldm7t_f(real_T x, real_T *G, real_T *F)
{
  if ((x >= 0.0) && (x < 0.1)) {
    /* acc crescente positiva */
    *F = x * x * 27.777777777777771;
    *G = 9.259259259259256 * rt_powd_snf(x, 3.0);
  } else if ((x >= 0.1) && (x < 0.30000000000000004)) {
    /* acc costante positiva */
    *F = 5.5555555555555545 * x - 0.27777777777777773;
    *G = (x * x * 2.7777777777777772 - 0.27777777777777773 * x) +
      0.0092592592592592587;
  } else if ((x >= 0.30000000000000004) && (x < 0.4)) {
    /* acc decrescente positiva */
    *F = (x * x * -27.777777777777771 + 22.222222222222218 * x) -
      2.7777777777777777;
    *G = ((((x * x * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x,
              3.0)) - 2.7777777777777777 * x) - 0.44444444444444442) +
          0.59259259259259256) + 0.1111111111111111;
  } else if ((x >= 0.4) && (x < 0.6)) {
    /* acc costante nulla */
    *F = 1.6666666666666665;
    *G = (1.6666666666666665 * x - 0.44444444444444442) + 0.1111111111111111;
  } else if ((x >= 0.6) && (x < 0.7)) {
    /* acc decrescente negativa */
    *F = ((x * x * -27.777777777777771 + 33.333333333333321 * x) +
          1.6666666666666665) - 9.9999999999999982;
    *G = (((((x * x * 16.666666666666661 + -9.259259259259256 * rt_powd_snf(x,
               3.0)) + 1.6666666666666665 * x) - 9.9999999999999982 * x) -
           0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
  } else if ((x >= 0.7) && (x < 0.9)) {
    /* acc costante negativa */
    *F = (-5.5555555555555545 * x + 5.5555555555555545) - 0.27777777777777773;
    *G = (((x * x * -2.7777777777777772 + 5.5555555555555545 * x) -
           0.27777777777777773 * x) + 1.0) - 2.5092592592592586;
  } else if ((x >= 0.9) && (x <= 1.0)) {
    /* acc crescente negativa */
    *F = (x * x * 27.777777777777771 - 55.555555555555543 * x) +
      27.777777777777771;
    *G = (((9.259259259259256 * rt_powd_snf(x, 3.0) - x * x * 27.777777777777771)
           + 27.777777777777771 * x) + 1.0) - 9.259259259259256;
  } else {
    /* acc costante nulla */
    *F = 0.0;
    *G = 1.0;
  }
}

/* Function for MATLAB Function: '<S27>/Cerchi Tangenti' */
static void StateFlowGUI_ldm7t(real_T x, real_T *G, real_T *F)
{
  if ((x >= 0.0) && (x < 0.1)) {
    /* acc crescente positiva */
    *F = x * x * 27.777777777777771;
    *G = 9.259259259259256 * rt_powd_snf(x, 3.0);
  } else if ((x >= 0.1) && (x < 0.30000000000000004)) {
    /* acc costante positiva */
    *F = 5.5555555555555545 * x - 0.27777777777777773;
    *G = (x * x * 2.7777777777777772 - 0.27777777777777773 * x) +
      0.0092592592592592587;
  } else if ((x >= 0.30000000000000004) && (x < 0.4)) {
    /* acc decrescente positiva */
    *F = (x * x * -27.777777777777771 + 22.222222222222218 * x) -
      2.7777777777777777;
    *G = ((((x * x * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x,
              3.0)) - 2.7777777777777777 * x) - 0.44444444444444442) +
          0.59259259259259256) + 0.1111111111111111;
  } else if ((x >= 0.4) && (x < 0.6)) {
    /* acc costante nulla */
    *F = 1.6666666666666665;
    *G = (1.6666666666666665 * x - 0.44444444444444442) + 0.1111111111111111;
  } else if ((x >= 0.6) && (x < 0.7)) {
    /* acc decrescente negativa */
    *F = ((x * x * -27.777777777777771 + 33.333333333333321 * x) +
          1.6666666666666665) - 9.9999999999999982;
    *G = (((((x * x * 16.666666666666661 + -9.259259259259256 * rt_powd_snf(x,
               3.0)) + 1.6666666666666665 * x) - 9.9999999999999982 * x) -
           0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
  } else if ((x >= 0.7) && (x < 0.9)) {
    /* acc costante negativa */
    *F = (-5.5555555555555545 * x + 5.5555555555555545) - 0.27777777777777773;
    *G = (((x * x * -2.7777777777777772 + 5.5555555555555545 * x) -
           0.27777777777777773 * x) + 1.0) - 2.5092592592592586;
  } else if ((x >= 0.9) && (x <= 1.0)) {
    /* acc crescente negativa */
    *F = (x * x * 27.777777777777771 - 55.555555555555543 * x) +
      27.777777777777771;
    *G = (((9.259259259259256 * rt_powd_snf(x, 3.0) - x * x * 27.777777777777771)
           + 27.777777777777771 * x) + 1.0) - 9.259259259259256;
  } else {
    /* acc costante nulla */
    *F = 0.0;
    *G = 1.0;
  }
}

/* Function for MATLAB Function: '<S27>/spirale' */
static void StateFlowGUI_ldm7t_b(real_T x, real_T *G, real_T *F)
{
  if ((x >= 0.0) && (x < 0.1)) {
    /* acc crescente positiva */
    *F = x * x * 27.777777777777771;
    *G = 9.259259259259256 * rt_powd_snf(x, 3.0);
  } else if ((x >= 0.1) && (x < 0.30000000000000004)) {
    /* acc costante positiva */
    *F = 5.5555555555555545 * x - 0.27777777777777773;
    *G = (x * x * 2.7777777777777772 - 0.27777777777777773 * x) +
      0.0092592592592592587;
  } else if ((x >= 0.30000000000000004) && (x < 0.4)) {
    /* acc decrescente positiva */
    *F = (x * x * -27.777777777777771 + 22.222222222222218 * x) -
      2.7777777777777777;
    *G = ((((x * x * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x,
              3.0)) - 2.7777777777777777 * x) - 0.44444444444444442) +
          0.59259259259259256) + 0.1111111111111111;
  } else if ((x >= 0.4) && (x < 0.6)) {
    /* acc costante nulla */
    *F = 1.6666666666666665;
    *G = (1.6666666666666665 * x - 0.44444444444444442) + 0.1111111111111111;
  } else if ((x >= 0.6) && (x < 0.7)) {
    /* acc decrescente negativa */
    *F = ((x * x * -27.777777777777771 + 33.333333333333321 * x) +
          1.6666666666666665) - 9.9999999999999982;
    *G = (((((x * x * 16.666666666666661 + -9.259259259259256 * rt_powd_snf(x,
               3.0)) + 1.6666666666666665 * x) - 9.9999999999999982 * x) -
           0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
  } else if ((x >= 0.7) && (x < 0.9)) {
    /* acc costante negativa */
    *F = (-5.5555555555555545 * x + 5.5555555555555545) - 0.27777777777777773;
    *G = (((x * x * -2.7777777777777772 + 5.5555555555555545 * x) -
           0.27777777777777773 * x) + 1.0) - 2.5092592592592586;
  } else if ((x >= 0.9) && (x <= 1.0)) {
    /* acc crescente negativa */
    *F = (x * x * 27.777777777777771 - 55.555555555555543 * x) +
      27.777777777777771;
    *G = (((9.259259259259256 * rt_powd_snf(x, 3.0) - x * x * 27.777777777777771)
           + 27.777777777777771 * x) + 1.0) - 9.259259259259256;
  } else {
    /* acc costante nulla */
    *F = 0.0;
    *G = 1.0;
  }
}

/* Function for MATLAB Function: '<S12>/MATLAB Function4' */
static real_T StateFlowGUI_norm_n(const real_T x[4])
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
static void StateFlowGUI_output(void)
{
  int32_T bitIdx;
  int32_T i;
  uint32_T u;
  boolean_T sf_internal_predicateOutput;
  real_T A;
  real_T B;
  real_T x2;
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

  real_T tmp[4];
  real_T tmp_0[4];
  real_T y_0[4];
  real_T tmp_1[4];
  real_T tmp_2[4];
  real_T tmp_3[4];
  real_T tmp_4[4];
  real_T M_0[2];
  real_T p_a_0[2];
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
      memcpy(&StateFlowGUI_B.EtherCATInit[0], data,6*sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    /* Reset subsysRan breadcrumbs */
    srClearBC(StateFlowGUI_DW.Homing_SubsysRanBC);

    /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/Asse A braccia'
     */
    j_a = floor(StateFlowGUI_P.AsseAbraccia_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion7 = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion7' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Asse A vite'
     */
    j_a = floor(StateFlowGUI_P.AsseAvite_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion2 = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/Asse B braccia'
     */
    j_a = floor(StateFlowGUI_P.AsseBbraccia_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion5 = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion5' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/Asse B vite'
     */
    j_a = floor(StateFlowGUI_P.AsseBvite_Value);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion1_p = (int8_T)(j_a < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-j_a : (int32_T)(int8_T)(uint8_T)j_a);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    /* Clock: '<Root>/Clock' */
    StateFlowGUI_B.Clock = StateFlowGUI_M->Timing.t[0];

    /* S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */

    /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert' */
    StateFlowGUI_B.convert = StateFlowGUI_B.MotoreviteA;

    /* S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */

    /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert 10 ' */
    StateFlowGUI_B.convert10 = StateFlowGUI_B.MotoreviteB;

    /* S-Function (xpcethercatpdorx): '<S14>/Status Word' */

    /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S14>/Data Type Conversion6' */
    StateFlowGUI_B.DataTypeConversion6 = StateFlowGUI_B.StatusWord;

    /* S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[7];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion8' */
    StateFlowGUI_B.DataTypeConversion8 = StateFlowGUI_B.EtherCATPDOReceive16;

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      u = (uint32_T)StateFlowGUI_B.DataTypeConversion8;
      for (i = 0; i < 16; i++) {
        StateFlowGUI_B.IntegertoBitConverter[bitIdx] = (int32_T)u & 1;
        u >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S1>/Integer to Bit Converter' */

    /* S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */

    /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S9>/convert' */
    StateFlowGUI_B.convert_g = StateFlowGUI_B.MotorebracciaA;

    /* S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */

    /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S9>/convert 10 ' */
    StateFlowGUI_B.convert10_d = StateFlowGUI_B.MotorebracciaB;

    /* S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[10];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S2>/Data Type Conversion8' */
    StateFlowGUI_B.DataTypeConversion8_f = StateFlowGUI_B.EtherCATPDOReceive16_d;

    /* S-Function (scominttobit): '<S2>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      u = (uint32_T)StateFlowGUI_B.DataTypeConversion8_f;
      for (i = 0; i < 16; i++) {
        StateFlowGUI_B.IntegertoBitConverter_d[bitIdx] = (int32_T)u & 1;
        u >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S2>/Integer to Bit Converter' */

    /* Constant: '<Root>/Kp' */
    StateFlowGUI_B.Kp = StateFlowGUI_P.Kp_Value;

    /* Constant: '<Root>/StartHome' */
    StateFlowGUI_B.StartHome = StateFlowGUI_P.StartHome_Value;

    /* Constant: '<Root>/StartRobot' */
    StateFlowGUI_B.StartRobot = StateFlowGUI_P.StartRobot_Value;

    /* Constant: '<Root>/StartWork' */
    StateFlowGUI_B.StartWork = StateFlowGUI_P.StartWork_Value;

    /* Constant: '<Root>/Reset' */
    StateFlowGUI_B.Reset = StateFlowGUI_P.Reset_Value;

    /* Constant: '<Root>/Stop' */
    StateFlowGUI_B.Stop = StateFlowGUI_P.Stop_Value;

    /* Chart: '<Root>/State flow robot' */
    if (StateFlowGUI_DW.temporalCounter_i1 < 65535U) {
      StateFlowGUI_DW.temporalCounter_i1++;
    }

    /* Gateway: State flow robot */
    StateFlowGUI_DW.sfEvent = -1;

    /* During: State flow robot */
    if (StateFlowGUI_DW.is_active_c15_StateFlowGUI == 0U) {
      /* Entry: State flow robot */
      StateFlowGUI_DW.is_active_c15_StateFlowGUI = 1U;

      /* Entry Internal: State flow robot */
      /* Transition: '<S13>:36' */
      StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step1;

      /* Entry 'Step1': '<S13>:28' */
      StateFlowGUI_B.Bool = -1.0;
    } else {
      switch (StateFlowGUI_DW.is_c15_StateFlowGUI) {
       case StateFlowGUI_IN_Controllo:
        StateFlowGUI_B.FineLavorazione = 1.0;
        StateFlowGUI_B.Hb = 0.0;
        StateFlowGUI_B.Luci = 5.0;
        StateFlowGUI_B.Bool = 5.0;
        StateFlowGUI_B.Hv = 0.0;

        /* During 'Controllo': '<S13>:69' */
        sf_internal_predicateOutput = (((StateFlowGUI_DW.temporalCounter_i1 >=
          10000U) && (StateFlowGUI_B.StartHome == 1.0)) || (StateFlowGUI_B.Reset
          == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:243' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Home;
          StateFlowGUI_enter_atomic_Home();
        }
        break;

       case StateFlowGUI_IN_Coppie:
        StateFlowGUI_B.Luci = 2.0;

        /* During 'Coppie': '<S13>:95' */
        if (StateFlowGUI_B.convert_g - StateFlowGUI_DW.OffA_0 >=
            1.9198621771937625 / StateFlowGUI_DW.conv) {
          /* Transition: '<S13>:131' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetA;

          /* Entry 'SetA': '<S13>:129' */
          StateFlowGUI_B.CoppiaA = 0.0;
          StateFlowGUI_DW.C1 = 0.0;
        } else {
          if (StateFlowGUI_B.convert10_d - StateFlowGUI_DW.OffB_0 >=
              0.69813170079773179 / StateFlowGUI_DW.conv) {
            /* Transition: '<S13>:132' */
            StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetB;

            /* Entry 'SetB': '<S13>:130' */
            StateFlowGUI_B.CoppiaB = 0.0;
            StateFlowGUI_DW.C2 = 0.0;
          }
        }
        break;

       case StateFlowGUI_IN_Discesa_Vite:
        StateFlowGUI_B.Hb = 1.0;

        /* During 'Discesa_Vite': '<S13>:176' */
        /* Transition: '<S13>:256' */
        StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_OffSet;

        /* Entry 'OffSet': '<S13>:87' */
        StateFlowGUI_B.CoppiaH = 0.0;
        StateFlowGUI_B.CoppiaA = 0.0;
        StateFlowGUI_B.CoppiaB = 0.0;
        StateFlowGUI_B.OffA = StateFlowGUI_B.convert_g;
        StateFlowGUI_B.OffB = StateFlowGUI_B.convert10_d;
        StateFlowGUI_DW.OffA_0 = StateFlowGUI_B.convert_g;
        StateFlowGUI_DW.OffB_0 = StateFlowGUI_B.convert10_d;
        StateFlowGUI_B.Bool = 2.0;
        StateFlowGUI_B.Luci = 3.0;
        StateFlowGUI_B.Hv = 1.0;
        StateFlowGUI_B.OffA_vite = StateFlowGUI_B.convert;
        StateFlowGUI_B.OffB_vite = StateFlowGUI_B.convert10;
        break;

       case StateFlowGUI_IN_Home:
        StateFlowGUI_B.FineLavorazione = 0.0;
        StateFlowGUI_B.Hb = 0.0;
        StateFlowGUI_B.Luci = 1.0;
        StateFlowGUI_B.Bool = 1.0;
        StateFlowGUI_B.Hv = 0.0;

        /* During 'Home': '<S13>:29' */
        sf_internal_predicateOutput = ((StateFlowGUI_B.IntegertoBitConverter_d[7]
          == 1.0) && (StateFlowGUI_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:37' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step3;

          /* Entry 'Step3': '<S13>:225' */
          StateFlowGUI_B.CoppiaA = 0.0;
          StateFlowGUI_B.CoppiaB = 0.0;
        } else {
          if (StateFlowGUI_B.IntegertoBitConverter[14] == 0.0) {
            /* Transition: '<S13>:127' */
            StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step2;

            /* Entry 'Step2': '<S13>:126' */
            StateFlowGUI_B.CoppiaH = 0.0;
          }
        }
        break;

       case StateFlowGUI_IN_OffSet:
        StateFlowGUI_B.Luci = 3.0;
        StateFlowGUI_B.Bool = 2.0;
        StateFlowGUI_B.Hv = 1.0;

        /* During 'OffSet': '<S13>:87' */
        if (StateFlowGUI_B.StartWork == 1.0) {
          /* Transition: '<S13>:90' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Traiettoria;
          StateFlowGUI_DW.temporalCounter_i1 = 0U;

          /* Entry 'Traiettoria': '<S13>:147' */
          StateFlowGUI_B.OffT = StateFlowGUI_B.Clock;
          StateFlowGUI_B.Luci = 4.0;
          StateFlowGUI_B.Bool = 4.0;
        }
        break;

       case StateFlowGUI_IN_SetA:
        /* During 'SetA': '<S13>:129' */
        if (StateFlowGUI_B.convert10_d - StateFlowGUI_DW.OffB_0 >=
            0.69813170079773179 / StateFlowGUI_DW.conv) {
          /* Transition: '<S13>:133' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetB1;

          /* Entry 'SetB1': '<S13>:145' */
          StateFlowGUI_B.CoppiaB = 0.0;
          StateFlowGUI_DW.C2 = 0.0;
        }
        break;

       case StateFlowGUI_IN_SetA1:
        /* During 'SetA1': '<S13>:146' */
        if (StateFlowGUI_DW.C1 == 0.0) {
          /* Transition: '<S13>:136' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S13>:176' */
          StateFlowGUI_B.OffA_vite = StateFlowGUI_B.convert;
          StateFlowGUI_B.CoppiaH = 0.0;
          StateFlowGUI_B.Hb = 1.0;
        }
        break;

       case StateFlowGUI_IN_SetB:
        /* During 'SetB': '<S13>:130' */
        if (StateFlowGUI_B.convert_g - StateFlowGUI_DW.OffA_0 >=
            1.9198621771937625 / StateFlowGUI_DW.conv) {
          /* Transition: '<S13>:134' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetA1;

          /* Entry 'SetA1': '<S13>:146' */
          StateFlowGUI_B.CoppiaA = 0.0;
          StateFlowGUI_DW.C1 = 0.0;
        }
        break;

       case StateFlowGUI_IN_SetB1:
        /* During 'SetB1': '<S13>:145' */
        if (StateFlowGUI_DW.C2 == 0.0) {
          /* Transition: '<S13>:135' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S13>:176' */
          StateFlowGUI_B.OffA_vite = StateFlowGUI_B.convert;
          StateFlowGUI_B.CoppiaH = 0.0;
          StateFlowGUI_B.Hb = 1.0;
        }
        break;

       case StateFlowGUI_IN_Step1:
        StateFlowGUI_B.Bool = -1.0;

        /* During 'Step1': '<S13>:28' */
        sf_internal_predicateOutput = ((StateFlowGUI_B.DataTypeConversion6 ==
          1079.0) && (StateFlowGUI_B.StartRobot == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:35' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step4;

          /* Entry 'Step4': '<S13>:231' */
          StateFlowGUI_B.Bool = 0.0;
          StateFlowGUI_B.Enable = 1.0;
        }
        break;

       case StateFlowGUI_IN_Step2:
        /* During 'Step2': '<S13>:126' */
        sf_internal_predicateOutput = ((StateFlowGUI_B.IntegertoBitConverter_d[7]
          == 1.0) && (StateFlowGUI_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:128' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Coppie;

          /* Entry 'Coppie': '<S13>:95' */
          StateFlowGUI_DW.OffA_0 = StateFlowGUI_B.convert_g;
          StateFlowGUI_DW.OffB_0 = StateFlowGUI_B.convert10_d;
          StateFlowGUI_B.CoppiaA = 250.0;
          StateFlowGUI_B.CoppiaB = 250.0;
          StateFlowGUI_B.CoppiaH = 0.0;
          StateFlowGUI_B.Luci = 2.0;
        }
        break;

       case StateFlowGUI_IN_Step3:
        /* During 'Step3': '<S13>:225' */
        if (StateFlowGUI_B.IntegertoBitConverter[14] == 0.0) {
          /* Transition: '<S13>:226' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Coppie;

          /* Entry 'Coppie': '<S13>:95' */
          StateFlowGUI_DW.OffA_0 = StateFlowGUI_B.convert_g;
          StateFlowGUI_DW.OffB_0 = StateFlowGUI_B.convert10_d;
          StateFlowGUI_B.CoppiaA = 250.0;
          StateFlowGUI_B.CoppiaB = 250.0;
          StateFlowGUI_B.CoppiaH = 0.0;
          StateFlowGUI_B.Luci = 2.0;
        }
        break;

       case StateFlowGUI_IN_Step4:
        StateFlowGUI_B.Enable = 1.0;
        StateFlowGUI_B.Bool = 0.0;

        /* During 'Step4': '<S13>:231' */
        if (StateFlowGUI_B.StartHome == 1.0) {
          /* Transition: '<S13>:232' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Home;
          StateFlowGUI_enter_atomic_Home();
        }
        break;

       case StateFlowGUI_IN_StopPhase:
        StateFlowGUI_B.Bool = 3.0;

        /* During 'StopPhase': '<S13>:247' */
        if (StateFlowGUI_B.Reset == 1.0) {
          /* Transition: '<S13>:249' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step4;

          /* Entry 'Step4': '<S13>:231' */
          StateFlowGUI_B.Bool = 0.0;
          StateFlowGUI_B.Enable = 1.0;
        }
        break;

       default:
        StateFlowGUI_B.Luci = 4.0;
        StateFlowGUI_B.Bool = 4.0;

        /* During 'Traiettoria': '<S13>:147' */
        if (StateFlowGUI_DW.temporalCounter_i1 >= 40000U) {
          /* Transition: '<S13>:148' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Controllo;
          StateFlowGUI_DW.temporalCounter_i1 = 0U;

          /* Entry 'Controllo': '<S13>:69' */
          StateFlowGUI_B.Bool = 5.0;
          StateFlowGUI_B.Luci = 5.0;
          StateFlowGUI_B.FineLavorazione = 1.0;
          StateFlowGUI_B.Hv = 0.0;
          StateFlowGUI_B.Hb = 0.0;
        } else {
          if (StateFlowGUI_B.Stop == 1.0) {
            /* Transition: '<S13>:248' */
            StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_StopPhase;

            /* Entry 'StopPhase': '<S13>:247' */
            StateFlowGUI_B.Bool = 3.0;
            StateFlowGUI_B.CoppiaA = 0.0;
            StateFlowGUI_B.CoppiaB = 0.0;
            StateFlowGUI_B.CoppiaH = 0.0;
          }
        }
        break;
      }
    }

    /* End of Chart: '<Root>/State flow robot' */

    /* MATLAB Function: '<S3>/MATLAB Function1' */
    /* MATLAB Function 'LED Status/MATLAB Function1': '<S16>:1' */
    if ((StateFlowGUI_B.Luci == 1.0) || (StateFlowGUI_B.Luci == 2.0) ||
        (StateFlowGUI_B.Luci == 4.0)) {
      /* '<S16>:1:2' */
      /* '<S16>:1:3' */
      StateFlowGUI_B.y_b = 1.0;
    } else {
      /* '<S16>:1:5' */
      StateFlowGUI_B.y_b = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function1' */

    /* DataTypeConversion: '<S3>/Data Type Conversion25' */
    StateFlowGUI_B.DataTypeConversion25 = (StateFlowGUI_B.y_b != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */

    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[11];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function' */
    /* MATLAB Function 'LED Status/MATLAB Function': '<S15>:1' */
    if ((StateFlowGUI_B.Luci == 2.0) || (StateFlowGUI_B.Luci == 3.0)) {
      /* '<S15>:1:2' */
      /* '<S15>:1:3' */
      StateFlowGUI_B.y_i = 1.0;
    } else {
      /* '<S15>:1:5' */
      StateFlowGUI_B.y_i = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function' */

    /* DataTypeConversion: '<S3>/Data Type Conversion24' */
    StateFlowGUI_B.DataTypeConversion24 = (StateFlowGUI_B.y_i != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */

    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[12];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function2' */
    /* MATLAB Function 'LED Status/MATLAB Function2': '<S17>:1' */
    if ((StateFlowGUI_B.Luci == 4.0) || (StateFlowGUI_B.Luci == 5.0)) {
      /* '<S17>:1:2' */
      /* '<S17>:1:3' */
      StateFlowGUI_B.y_f = 1.0;
    } else {
      /* '<S17>:1:5' */
      StateFlowGUI_B.y_f = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function2' */

    /* DataTypeConversion: '<S3>/Data Type Conversion26' */
    StateFlowGUI_B.DataTypeConversion26 = (StateFlowGUI_B.y_f != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */

    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[13];
      sfcnOutputs(rts,1);
    }

    /* Memory: '<S36>/Memory' */
    StateFlowGUI_B.Memory = StateFlowGUI_DW.Memory_PreviousInput;

    /* Sum: '<S78>/Sum12' */
    StateFlowGUI_B.Sum12 = StateFlowGUI_B.convert10_d - StateFlowGUI_B.OffB;

    /* MATLAB Function: '<S78>/Asse B conv brac1' */
    StateFlowGUI_AsseBconvbrac1(StateFlowGUI_B.Sum12,
      &StateFlowGUI_B.sf_AsseBconvbrac1);

    /* Sum: '<S78>/Sum4' incorporates:
     *  Constant: '<S78>/Constant4'
     */
    StateFlowGUI_B.Sum4 = StateFlowGUI_B.sf_AsseBconvbrac1.pos_B_conv +
      StateFlowGUI_P.Constant4_Value;

    /* Sum: '<S78>/Sum9' */
    StateFlowGUI_B.Sum9 = StateFlowGUI_B.convert_g - StateFlowGUI_B.OffA;

    /* MATLAB Function: '<S78>/Asse A conv bracc' */
    StateFlowGUI_AsseAconvbrac(StateFlowGUI_B.Sum9,
      &StateFlowGUI_B.sf_AsseAconvbracc);

    /* Sum: '<S78>/Sum7' incorporates:
     *  Constant: '<S78>/Constant5'
     */
    StateFlowGUI_B.Sum7 = StateFlowGUI_B.sf_AsseAconvbracc.pos_A_conv +
      StateFlowGUI_P.Constant5_Value;

    /* S-Function (xpcethercatpdorx): '<S82>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S82>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S82>/Velocity B' */
    StateFlowGUI_B.VelocityB = StateFlowGUI_B.EtherCATPDOReceive15;

    /* MATLAB Function: '<S82>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse B conv': '<S118>:1' */
    /* '<S118>:1:2' */
    StateFlowGUI_B.vel_B_conv = StateFlowGUI_B.VelocityB * 6.2831853071795862 /
      163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S82>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S82>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S82>/Velocity A' */
    StateFlowGUI_B.VelocityA = StateFlowGUI_B.EtherCATPDOReceive14;

    /* MATLAB Function: '<S82>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse A conv': '<S117>:1' */
    /* '<S117>:1:2' */
    StateFlowGUI_B.vel_A_conv = StateFlowGUI_B.VelocityA * 6.2831853071795862 /
      163840.0 / 64.0;

    /* MATLAB Function: '<S77>/Cinematica Inversa2' incorporates:
     *  Constant: '<S77>/Constant'
     *  Constant: '<S77>/Constant1'
     */
    /* MATLAB Function 'Sistema_braccia/Pos iniziali/Cinematica Inversa2': '<S91>:1' */
    /* '<S91>:1:3' */
    /* '<S91>:1:4' */
    /* '<S91>:1:6' */
    A = sin(StateFlowGUI_P.Constant1_Value) - sin
      (StateFlowGUI_P.Constant_Value_b);
    J_p_idx_1 = -0.18 - (cos(StateFlowGUI_P.Constant1_Value) - cos
                         (StateFlowGUI_P.Constant_Value_b)) * 0.25;
    A = A * A * 0.0625 + J_p_idx_1 * J_p_idx_1;

    /* '<S91>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowGUI_P.Constant1_Value) - cos
                         (StateFlowGUI_P.Constant_Value_b)) * 0.25;
    B = ((-0.18 - (cos(StateFlowGUI_P.Constant1_Value) - cos
                   (StateFlowGUI_P.Constant_Value_b)) * 0.25) * ((sin
           (StateFlowGUI_P.Constant1_Value) - sin
           (StateFlowGUI_P.Constant_Value_b)) * 0.25) * (-0.18 - 0.5 * cos
          (StateFlowGUI_P.Constant1_Value)) + (sin
          (StateFlowGUI_P.Constant1_Value) - sin(StateFlowGUI_P.Constant_Value_b))
         * -0.01125 * (cos(StateFlowGUI_P.Constant1_Value) + cos
                       (StateFlowGUI_P.Constant_Value_b))) - 0.5 * sin
      (StateFlowGUI_P.Constant1_Value) * (J_p_idx_3 * J_p_idx_3);

    /* '<S91>:1:10' */
    x4 = cos(StateFlowGUI_P.Constant1_Value) + cos
      (StateFlowGUI_P.Constant_Value_b);
    x5 = -0.18 - (cos(StateFlowGUI_P.Constant1_Value) - cos
                  (StateFlowGUI_P.Constant_Value_b)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S91>:1:14' */
    A = (sqrt(B * B - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
              (StateFlowGUI_P.Constant1_Value) - cos
              (StateFlowGUI_P.Constant_Value_b)) * 0.25) * ((cos
              (StateFlowGUI_P.Constant1_Value) + cos
              (StateFlowGUI_P.Constant_Value_b)) * 0.0225) * (-0.18 - 0.5 * cos
             (StateFlowGUI_P.Constant1_Value))) + (0.045 * cos
            (StateFlowGUI_P.Constant1_Value) + 0.0081) * (x5 * x5)) * (4.0 * A))
         + -B) / (2.0 * A);

    /*  Posizione X end-effector */
    /* '<S91>:1:16' */
    StateFlowGUI_B.x0 = (A * 0.25 * (sin(StateFlowGUI_P.Constant1_Value) - sin
      (StateFlowGUI_P.Constant_Value_b)) - (cos(StateFlowGUI_P.Constant1_Value)
      + cos(StateFlowGUI_P.Constant_Value_b)) * 0.0225) / (-0.18 - (cos
      (StateFlowGUI_P.Constant1_Value) - cos(StateFlowGUI_P.Constant_Value_b)) *
      0.25);
    StateFlowGUI_B.y0 = A;

    /* Sum: '<S67>/Sum2' */
    StateFlowGUI_B.Sum2 = StateFlowGUI_B.Clock - StateFlowGUI_B.OffT;

    /* MATLAB Function: '<S70>/Quadrato' incorporates:
     *  Constant: '<S70>/Alzata Q'
     *  Constant: '<S70>/Periodo Q'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Quadrato': '<S88>:1' */
    /* '<S88>:1:2' */
    /* '<S88>:1:3' */
    /* '<S88>:1:4' */
    A = StateFlowGUI_B.Sum2 / (0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S88>:1:5' */
    x2 = (StateFlowGUI_B.Sum2 - 0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S88>:1:6' */
    x3 = (StateFlowGUI_B.Sum2 - 1.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S88>:1:7' */
    x4 = (StateFlowGUI_B.Sum2 - 2.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S88>:1:8' */
    x5 = (StateFlowGUI_B.Sum2 - 3.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S88>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((StateFlowGUI_B.Sum2 > 0.0) && (StateFlowGUI_B.Sum2 <= 0.5 *
         StateFlowGUI_P.PeriodoQ_Value / 4.0)) {
      /* '<S88>:1:14' */
      if ((A >= 0.0) && (A < 0.1)) {
        /* '<S88>:1:16' */
        /* acc crescente positiva */
        /* '<S88>:1:17' */
        B = 55.555555555555543 * A;

        /* '<S88>:1:18' */
        F = A * A * 27.777777777777771;

        /* '<S88>:1:19' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower_m(A);
      } else if ((A >= 0.1) && (A < 0.30000000000000004)) {
        /* '<S88>:1:22' */
        /* acc costante positiva */
        /* '<S88>:1:23' */
        B = 5.5555555555555545;

        /* '<S88>:1:24' */
        F = 5.5555555555555545 * A - 0.27777777777777773;

        /* '<S88>:1:25' */
        x2 = (A * A * 2.7777777777777772 - 0.27777777777777773 * A) +
          0.0092592592592592587;
      } else if ((A >= 0.30000000000000004) && (A < 0.4)) {
        /* '<S88>:1:28' */
        /* acc decrescente positiva */
        /* '<S88>:1:29' */
        B = -55.555555555555543 * A + 22.222222222222218;

        /* '<S88>:1:30' */
        F = (A * A * -27.777777777777771 + 22.222222222222218 * A) -
          2.7777777777777777;

        /* '<S88>:1:31' */
        x2 = ((((A * A * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower_m(A)) - 2.7777777777777777 * A) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower_m
              (0.4)) + 0.1111111111111111;
      } else if ((A >= 0.4) && (A < 0.6)) {
        /* '<S88>:1:35' */
        /* acc costante nulla */
        /* '<S88>:1:36' */
        B = 0.0;

        /* '<S88>:1:37' */
        F = 1.6666666666666665;

        /* '<S88>:1:38' */
        x2 = (1.6666666666666665 * A - 0.44444444444444442) + 0.1111111111111111;
      } else if ((A >= 0.6) && (A < 0.7)) {
        /* '<S88>:1:41' */
        /* acc decrescente negativa */
        /* '<S88>:1:42' */
        B = -55.555555555555543 * A + 33.333333333333321;

        /* '<S88>:1:43' */
        F = ((A * A * -27.777777777777771 + 33.333333333333321 * A) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S88>:1:44' */
        x2 = (((((A * A * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower_m(A)) + 1.6666666666666665 * A) -
                9.9999999999999982 * A) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower_m
          (0.6);
      } else if ((A >= 0.7) && (A < 0.9)) {
        /* '<S88>:1:48' */
        /* acc costante negativa */
        /* '<S88>:1:49' */
        B = -5.5555555555555545;

        /* '<S88>:1:50' */
        F = (-5.5555555555555545 * A + 5.5555555555555545) - 0.27777777777777773;

        /* '<S88>:1:51' */
        x2 = (((A * A * -2.7777777777777772 + 5.5555555555555545 * A) -
               0.27777777777777773 * A) + 1.0) - 2.5092592592592586;
      } else if ((A >= 0.9) && (A <= 1.0)) {
        /* '<S88>:1:54' */
        /* acc crescente negativa */
        /* '<S88>:1:55' */
        B = (A - 1.0) * 55.555555555555543;

        /* '<S88>:1:56' */
        F = (A * A * 27.777777777777771 - 55.555555555555543 * A) +
          27.777777777777771;

        /* '<S88>:1:57' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower_m(A) - A * A *
                27.777777777777771) + 27.777777777777771 * A) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S88>:1:61' */
        B = 0.0;

        /* '<S88>:1:62' */
        F = 0.0;

        /* '<S88>:1:63' */
        x2 = 1.0;
      }

      /* '<S88>:1:66' */
      StateFlowGUI_B.xq = x2 * StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S88>:1:67' */
      StateFlowGUI_B.xq_p = StateFlowGUI_P.AlzataQ_Value / 2.0 * F /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S88>:1:68' */
      StateFlowGUI_B.yq = 0.0;

      /* '<S88>:1:69' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S88>:1:70' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.xq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * B / (A * A);

      /* '<S88>:1:71' */
      StateFlowGUI_B.yq_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 1.5 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S88>:1:73' */
      /* '<S88>:1:74' */
      /*  Cj = Ca/xj; */
      if ((x2 >= 0.0) && (x2 < 0.1)) {
        /* '<S88>:1:77' */
        /* acc crescente positiva */
        /* '<S88>:1:78' */
        B = 55.555555555555543 * x2;

        /* '<S88>:1:79' */
        F = x2 * x2 * 27.777777777777771;

        /* '<S88>:1:80' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower_m(x2);
      } else if ((x2 >= 0.1) && (x2 < 0.30000000000000004)) {
        /* '<S88>:1:83' */
        /* acc costante positiva */
        /* '<S88>:1:84' */
        B = 5.5555555555555545;

        /* '<S88>:1:85' */
        F = 5.5555555555555545 * x2 - 0.27777777777777773;

        /* '<S88>:1:86' */
        x2 = (x2 * x2 * 2.7777777777777772 - 0.27777777777777773 * x2) +
          0.0092592592592592587;
      } else if ((x2 >= 0.30000000000000004) && (x2 < 0.4)) {
        /* '<S88>:1:89' */
        /* acc decrescente positiva */
        /* '<S88>:1:90' */
        B = -55.555555555555543 * x2 + 22.222222222222218;

        /* '<S88>:1:91' */
        F = (x2 * x2 * -27.777777777777771 + 22.222222222222218 * x2) -
          2.7777777777777777;

        /* '<S88>:1:92' */
        x2 = ((((x2 * x2 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower_m(x2)) - 2.7777777777777777 * x2) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower_m
              (0.4)) + 0.1111111111111111;
      } else if ((x2 >= 0.4) && (x2 < 0.6)) {
        /* '<S88>:1:96' */
        /* acc costante nulla */
        /* '<S88>:1:97' */
        B = 0.0;

        /* '<S88>:1:98' */
        F = 1.6666666666666665;

        /* '<S88>:1:99' */
        x2 = (1.6666666666666665 * x2 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x2 >= 0.6) && (x2 < 0.7)) {
        /* '<S88>:1:102' */
        /* acc decrescente negativa */
        /* '<S88>:1:103' */
        B = -55.555555555555543 * x2 + 33.333333333333321;

        /* '<S88>:1:104' */
        F = ((x2 * x2 * -27.777777777777771 + 33.333333333333321 * x2) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S88>:1:105' */
        x2 = (((((x2 * x2 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower_m(x2)) + 1.6666666666666665 * x2) -
                9.9999999999999982 * x2) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower_m
          (0.6);
      } else if ((x2 >= 0.7) && (x2 < 0.9)) {
        /* '<S88>:1:109' */
        /* acc costante negativa */
        /* '<S88>:1:110' */
        B = -5.5555555555555545;

        /* '<S88>:1:111' */
        F = (-5.5555555555555545 * x2 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S88>:1:112' */
        x2 = (((x2 * x2 * -2.7777777777777772 + 5.5555555555555545 * x2) -
               0.27777777777777773 * x2) + 1.0) - 2.5092592592592586;
      } else if ((x2 >= 0.9) && (x2 <= 1.0)) {
        /* '<S88>:1:115' */
        /* acc crescente negativa */
        /* '<S88>:1:116' */
        B = (x2 - 1.0) * 55.555555555555543;

        /* '<S88>:1:117' */
        F = (x2 * x2 * 27.777777777777771 - 55.555555555555543 * x2) +
          27.777777777777771;

        /* '<S88>:1:118' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower_m(x2) - x2 * x2 *
                27.777777777777771) + 27.777777777777771 * x2) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S88>:1:122' */
        B = 0.0;

        /* '<S88>:1:123' */
        F = 0.0;

        /* '<S88>:1:124' */
        x2 = 1.0;
      }

      /* '<S88>:1:127' */
      StateFlowGUI_B.xq = StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S88>:1:128' */
      StateFlowGUI_B.xq_p = 0.0;

      /* '<S88>:1:129' */
      StateFlowGUI_B.yq = -x2 * StateFlowGUI_P.AlzataQ_Value;

      /* '<S88>:1:130' */
      StateFlowGUI_B.yq_p = -F * StateFlowGUI_P.AlzataQ_Value /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S88>:1:131' */
      StateFlowGUI_B.xq_pp = 0.0;

      /* '<S88>:1:132' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.yq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * -B / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 1.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 2.5 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S88>:1:134' */
      /* '<S88>:1:135' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S88>:1:138' */
        /* acc crescente positiva */
        /* '<S88>:1:139' */
        B = 55.555555555555543 * x3;

        /* '<S88>:1:140' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S88>:1:141' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower_m(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S88>:1:144' */
        /* acc costante positiva */
        /* '<S88>:1:145' */
        B = 5.5555555555555545;

        /* '<S88>:1:146' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S88>:1:147' */
        x2 = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S88>:1:150' */
        /* acc decrescente positiva */
        /* '<S88>:1:151' */
        B = -55.555555555555543 * x3 + 22.222222222222218;

        /* '<S88>:1:152' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S88>:1:153' */
        x2 = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower_m(x3)) - 2.7777777777777777 * x3) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower_m
              (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S88>:1:157' */
        /* acc costante nulla */
        /* '<S88>:1:158' */
        B = 0.0;

        /* '<S88>:1:159' */
        F = 1.6666666666666665;

        /* '<S88>:1:160' */
        x2 = (1.6666666666666665 * x3 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S88>:1:163' */
        /* acc decrescente negativa */
        /* '<S88>:1:164' */
        B = -55.555555555555543 * x3 + 33.333333333333321;

        /* '<S88>:1:165' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S88>:1:166' */
        x2 = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower_m(x3)) + 1.6666666666666665 * x3) -
                9.9999999999999982 * x3) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower_m
          (0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S88>:1:170' */
        /* acc costante negativa */
        /* '<S88>:1:171' */
        B = -5.5555555555555545;

        /* '<S88>:1:172' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S88>:1:173' */
        x2 = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
               0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S88>:1:176' */
        /* acc crescente negativa */
        /* '<S88>:1:177' */
        B = (x3 - 1.0) * 55.555555555555543;

        /* '<S88>:1:178' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S88>:1:179' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower_m(x3) - x3 * x3 *
                27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S88>:1:183' */
        B = 0.0;

        /* '<S88>:1:184' */
        F = 0.0;

        /* '<S88>:1:185' */
        x2 = 1.0;
      }

      /* '<S88>:1:188' */
      StateFlowGUI_B.xq = StateFlowGUI_P.AlzataQ_Value / 2.0 - x2 *
        StateFlowGUI_P.AlzataQ_Value;

      /* '<S88>:1:189' */
      StateFlowGUI_B.xq_p = -F * StateFlowGUI_P.AlzataQ_Value /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S88>:1:190' */
      StateFlowGUI_B.yq = -StateFlowGUI_P.AlzataQ_Value;

      /* '<S88>:1:191' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S88>:1:192' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.xq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * -B / (A * A);

      /* '<S88>:1:193' */
      StateFlowGUI_B.yq_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 2.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 3.5 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S88>:1:195' */
      /* '<S88>:1:196' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S88>:1:199' */
        /* acc crescente positiva */
        /* '<S88>:1:200' */
        B = 55.555555555555543 * x4;

        /* '<S88>:1:201' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S88>:1:202' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower_m(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S88>:1:205' */
        /* acc costante positiva */
        /* '<S88>:1:206' */
        B = 5.5555555555555545;

        /* '<S88>:1:207' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S88>:1:208' */
        x2 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S88>:1:211' */
        /* acc decrescente positiva */
        /* '<S88>:1:212' */
        B = -55.555555555555543 * x4 + 22.222222222222218;

        /* '<S88>:1:213' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S88>:1:214' */
        x2 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower_m(x4)) - 2.7777777777777777 * x4) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower_m
              (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S88>:1:218' */
        /* acc costante nulla */
        /* '<S88>:1:219' */
        B = 0.0;

        /* '<S88>:1:220' */
        F = 1.6666666666666665;

        /* '<S88>:1:221' */
        x2 = (1.6666666666666665 * x4 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S88>:1:224' */
        /* acc decrescente negativa */
        /* '<S88>:1:225' */
        B = -55.555555555555543 * x4 + 33.333333333333321;

        /* '<S88>:1:226' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S88>:1:227' */
        x2 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower_m(x4)) + 1.6666666666666665 * x4) -
                9.9999999999999982 * x4) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower_m
          (0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S88>:1:231' */
        /* acc costante negativa */
        /* '<S88>:1:232' */
        B = -5.5555555555555545;

        /* '<S88>:1:233' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S88>:1:234' */
        x2 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
               0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S88>:1:237' */
        /* acc crescente negativa */
        /* '<S88>:1:238' */
        B = (x4 - 1.0) * 55.555555555555543;

        /* '<S88>:1:239' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S88>:1:240' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower_m(x4) - x4 * x4 *
                27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S88>:1:244' */
        B = 0.0;

        /* '<S88>:1:245' */
        F = 0.0;

        /* '<S88>:1:246' */
        x2 = 1.0;
      }

      /* '<S88>:1:249' */
      StateFlowGUI_B.xq = -StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S88>:1:250' */
      StateFlowGUI_B.xq_p = 0.0;

      /* '<S88>:1:251' */
      StateFlowGUI_B.yq = x2 * StateFlowGUI_P.AlzataQ_Value +
        -StateFlowGUI_P.AlzataQ_Value;

      /* '<S88>:1:252' */
      StateFlowGUI_B.yq_p = F * StateFlowGUI_P.AlzataQ_Value /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S88>:1:253' */
      StateFlowGUI_B.xq_pp = 0.0;

      /* '<S88>:1:254' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.yq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * B / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 3.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 4.0 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S88>:1:256' */
      /* '<S88>:1:257' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S88>:1:260' */
        /* acc crescente positiva */
        /* '<S88>:1:261' */
        B = 55.555555555555543 * x5;

        /* '<S88>:1:262' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S88>:1:263' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower_m(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S88>:1:266' */
        /* acc costante positiva */
        /* '<S88>:1:267' */
        B = 5.5555555555555545;

        /* '<S88>:1:268' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S88>:1:269' */
        x2 = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S88>:1:272' */
        /* acc decrescente positiva */
        /* '<S88>:1:273' */
        B = -55.555555555555543 * x5 + 22.222222222222218;

        /* '<S88>:1:274' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S88>:1:275' */
        x2 = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower_m(x5)) - 2.7777777777777777 * x5) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower_m
              (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S88>:1:279' */
        /* acc costante nulla */
        /* '<S88>:1:280' */
        B = 0.0;

        /* '<S88>:1:281' */
        F = 1.6666666666666665;

        /* '<S88>:1:282' */
        x2 = (1.6666666666666665 * x5 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S88>:1:285' */
        /* acc decrescente negativa */
        /* '<S88>:1:286' */
        B = -55.555555555555543 * x5 + 33.333333333333321;

        /* '<S88>:1:287' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S88>:1:288' */
        x2 = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower_m(x5)) + 1.6666666666666665 * x5) -
                9.9999999999999982 * x5) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower_m
          (0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S88>:1:292' */
        /* acc costante negativa */
        /* '<S88>:1:293' */
        B = -5.5555555555555545;

        /* '<S88>:1:294' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S88>:1:295' */
        x2 = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
               0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S88>:1:298' */
        /* acc crescente negativa */
        /* '<S88>:1:299' */
        B = (x5 - 1.0) * 55.555555555555543;

        /* '<S88>:1:300' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S88>:1:301' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower_m(x5) - x5 * x5 *
                27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S88>:1:305' */
        B = 0.0;

        /* '<S88>:1:306' */
        F = 0.0;

        /* '<S88>:1:307' */
        x2 = 1.0;
      }

      /* '<S88>:1:310' */
      StateFlowGUI_B.xq = x2 * StateFlowGUI_P.AlzataQ_Value / 2.0 +
        -StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S88>:1:311' */
      StateFlowGUI_B.xq_p = F * StateFlowGUI_P.AlzataQ_Value / 2.0 /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S88>:1:312' */
      StateFlowGUI_B.yq = 0.0;

      /* '<S88>:1:313' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S88>:1:314' */
      x2 = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.xq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * B / (x2 * x2);

      /* '<S88>:1:315' */
      StateFlowGUI_B.yq_pp = 0.0;
    } else {
      /* '<S88>:1:317' */
      StateFlowGUI_B.xq = 0.0;

      /* '<S88>:1:318' */
      StateFlowGUI_B.yq = 0.0;

      /* '<S88>:1:319' */
      StateFlowGUI_B.xq_p = 0.0;

      /* '<S88>:1:320' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S88>:1:321' */
      StateFlowGUI_B.xq_pp = 0.0;

      /* '<S88>:1:322' */
      StateFlowGUI_B.yq_pp = 0.0;
    }

    /* End of MATLAB Function: '<S70>/Quadrato' */

    /* MATLAB Function: '<S70>/Cerchio' incorporates:
     *  Constant: '<S70>/Alzata C'
     *  Constant: '<S70>/Periodo C'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchio': '<S87>:1' */
    /* '<S87>:1:3' */
    x4 = StateFlowGUI_B.Sum2 / StateFlowGUI_P.PeriodoC_Value;

    /* '<S87>:1:4' */
    if ((x4 >= 0.0) && (x4 < 0.1)) {
      /* acc crescente positiva */
      F = x4 * x4 * 27.777777777777771;
      x2 = 9.259259259259256 * rt_powd_snf(x4, 3.0);
      B = 55.555555555555543 * x4;
    } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
      /* acc costante positiva */
      F = 5.5555555555555545 * x4 - 0.27777777777777773;
      x2 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
        0.0092592592592592587;
      B = 5.5555555555555545;
    } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
      /* acc decrescente positiva */
      F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
        2.7777777777777777;
      x2 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 * rt_powd_snf
               (x4, 3.0)) - 2.7777777777777777 * x4) - 0.44444444444444442) +
            0.59259259259259256) + 0.1111111111111111;
      B = -55.555555555555543 * x4 + 22.222222222222218;
    } else if ((x4 >= 0.4) && (x4 < 0.6)) {
      /* acc costante nulla */
      F = 1.6666666666666665;
      x2 = (1.6666666666666665 * x4 - 0.44444444444444442) + 0.1111111111111111;
      B = 0.0;
    } else if ((x4 >= 0.6) && (x4 < 0.7)) {
      /* acc decrescente negativa */
      F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
           1.6666666666666665) - 9.9999999999999982;
      x2 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 * rt_powd_snf
                (x4, 3.0)) + 1.6666666666666665 * x4) - 9.9999999999999982 * x4)
             - 0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
      B = -55.555555555555543 * x4 + 33.333333333333321;
    } else if ((x4 >= 0.7) && (x4 < 0.9)) {
      /* acc costante negativa */
      F = (-5.5555555555555545 * x4 + 5.5555555555555545) - 0.27777777777777773;
      x2 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
             0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      B = -5.5555555555555545;
    } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
      /* acc crescente negativa */
      F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
        27.777777777777771;
      x2 = (((9.259259259259256 * rt_powd_snf(x4, 3.0) - x4 * x4 *
              27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
        9.259259259259256;
      B = (x4 - 1.0) * 55.555555555555543;
    } else {
      /* acc costante nulla */
      F = 0.0;
      x2 = 1.0;
      B = 0.0;
    }

    /* '<S87>:1:6' */
    x2 = x2 * 2.0 * 3.1415926535897931;

    /* '<S87>:1:7' */
    F = F * 2.0 * 3.1415926535897931 / StateFlowGUI_P.PeriodoC_Value;

    /* '<S87>:1:8' */
    x3 = B * 2.0 * 3.1415926535897931 / (StateFlowGUI_P.PeriodoC_Value *
      StateFlowGUI_P.PeriodoC_Value);

    /* '<S87>:1:9' */
    StateFlowGUI_B.xc = cos(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value;

    /* '<S87>:1:10' */
    StateFlowGUI_B.yc = sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value - StateFlowGUI_P.AlzataC_Value;

    /* '<S87>:1:11' */
    StateFlowGUI_B.xc_p = sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value * F;

    /* '<S87>:1:12' */
    StateFlowGUI_B.yc_p = cos(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value * F;

    /* '<S87>:1:13' */
    StateFlowGUI_B.xc_pp = cos(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value * (F * F) + sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value * x3;

    /* '<S87>:1:14' */
    StateFlowGUI_B.yc_pp = sin(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value * (F * F) - cos(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value * x3;

    /* End of MATLAB Function: '<S70>/Cerchio' */

    /* MATLAB Function: '<S70>/g' incorporates:
     *  Constant: '<S70>/Alzata C1'
     *  Constant: '<S70>/Periodo C1'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/g': '<S89>:1' */
    /* '<S89>:1:2' */
    A = StateFlowGUI_P.PeriodoC1_Value / 32.0;

    /* '<S89>:1:3' */
    /* '<S89>:1:4' */
    /* '<S89>:1:5' */
    /* '<S89>:1:6' */
    /* '<S89>:1:7' */
    /* '<S89>:1:8' */
    /* '<S89>:1:9' */
    /* '<S89>:1:10' */
    /* '<S89>:1:11' */
    /* '<S89>:1:12' */
    /* '<S89>:1:13' */
    /* '<S89>:1:14' */
    /* '<S89>:1:15' */
    /* '<S89>:1:16' */
    /* '<S89>:1:17' */
    /* '<S89>:1:18' */
    /* '<S89>:1:19' */
    /* '<S89>:1:20' */
    /* '<S89>:1:21' */
    /* '<S89>:1:22' */
    /* '<S89>:1:23' */
    /* '<S89>:1:24' */
    /* '<S89>:1:25' */
    /* '<S89>:1:26' */
    /* '<S89>:1:27' */
    /* '<S89>:1:28' */
    /* '<S89>:1:29' */
    /* '<S89>:1:30' */
    /* '<S89>:1:31' */
    /* '<S89>:1:32' */
    /* '<S89>:1:33' */
    /* '<S89>:1:34' */
    /* '<S89>:1:35' */
    /* '<S89>:1:36' */
    /* '<S89>:1:37' */
    /* '<S89>:1:38' */
    /* '<S89>:1:39' */
    /* '<S89>:1:40' */
    /* '<S89>:1:41' */
    /* '<S89>:1:42' */
    /* '<S89>:1:43' */
    /* '<S89>:1:44' */
    /* '<S89>:1:45' */
    /* '<S89>:1:46' */
    if ((StateFlowGUI_B.Sum2 > 0.0) && (StateFlowGUI_B.Sum2 <= A / 2.0)) {
      /* '<S89>:1:48' */
      /*  1 */
      /* '<S89>:1:49' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 0.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &B);

      /* '<S89>:1:50' */
      StateFlowGUI_B.x = 0.0;

      /* '<S89>:1:51' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:52' */
      StateFlowGUI_B.y = -x2 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:53' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:54' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:55' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -B * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > A / 2.0) && (StateFlowGUI_B.Sum2 <= 3.0 *
                A / 2.0)) {
      /* '<S89>:1:57' */
      /*  2 */
      /* '<S89>:1:58' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - A / 2.0) / A, &x2, &F, &x3);

      /* '<S89>:1:59' */
      StateFlowGUI_B.x = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:60' */
      StateFlowGUI_B.x_p_l = F * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:61' */
      StateFlowGUI_B.y = -StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:62' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:63' */
      StateFlowGUI_B.x_pp = x3 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:64' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 3.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                4.0 * A / 2.0)) {
      /* '<S89>:1:66' */
      /*  3 */
      /* '<S89>:1:67' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 3.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &x4);

      /* '<S89>:1:68' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:69' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:70' */
      StateFlowGUI_B.y = x2 * StateFlowGUI_P.AlzataC1_Value +
        -StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:71' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:72' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:73' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x4 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 4.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                5.0 * A / 2.0)) {
      /* '<S89>:1:75' */
      /*  4 */
      /* '<S89>:1:76' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 4.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &x5);

      /* '<S89>:1:77' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value - x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:78' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:79' */
      StateFlowGUI_B.y = 0.0;

      /* '<S89>:1:80' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:81' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x5 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:82' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 5.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                7.0 * A / 2.0)) {
      /* '<S89>:1:84' */
      /*  5 */
      /* '<S89>:1:85' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 5.0 * A / 2.0) / A, &x2, &F,
                           &x5);

      /* '<S89>:1:86' */
      StateFlowGUI_B.x = 2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:87' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:88' */
      StateFlowGUI_B.y = -x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:89' */
      StateFlowGUI_B.y_p_o = -F * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:90' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:91' */
      StateFlowGUI_B.y_pp = -x5 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 7.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                9.0 * A / 2.0)) {
      /* '<S89>:1:93' */
      /*  6 */
      /* '<S89>:1:94' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 7.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:95' */
      StateFlowGUI_B.x = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + 2.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:96' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:97' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:98' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:99' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:100' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 9.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                11.0 * A / 2.0)) {
      /* '<S89>:1:102' */
      /*  7 */
      /* '<S89>:1:103' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 9.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:104' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:105' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:106' */
      StateFlowGUI_B.y = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + -3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:107' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:108' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:109' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 11.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                12.0 * A / 2.0)) {
      /* '<S89>:1:111' */
      /*  8 */
      /* '<S89>:1:112' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 11.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:113' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:114' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:115' */
      StateFlowGUI_B.y = 0.0;

      /* '<S89>:1:116' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:117' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:118' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 12.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                13.0 * A / 2.0)) {
      /* '<S89>:1:120' */
      /*  9 */
      /* '<S89>:1:121' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 12.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:122' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:123' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:124' */
      StateFlowGUI_B.y = -B * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:125' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:126' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:127' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 13.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                15.0 * A / 2.0)) {
      /* '<S89>:1:129' */
      /*  10 */
      /* '<S89>:1:130' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 13.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:131' */
      StateFlowGUI_B.x = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + 4.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:132' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:133' */
      StateFlowGUI_B.y = -StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:134' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:135' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:136' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 15.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                16.0 * A / 2.0)) {
      /* '<S89>:1:138' */
      /*  11 */
      /* '<S89>:1:139' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 15.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:140' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:141' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:142' */
      StateFlowGUI_B.y = B * StateFlowGUI_P.AlzataC1_Value +
        -StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:143' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:144' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:145' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 16.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                17.0 * A / 2.0)) {
      /* '<S89>:1:147' */
      /*  12 */
      /* '<S89>:1:148' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 16.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:149' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:150' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:151' */
      StateFlowGUI_B.y = 0.0;

      /* '<S89>:1:152' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:153' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:154' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 17.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                19.0 * A / 2.0)) {
      /* '<S89>:1:156' */
      /*  13 */
      /* '<S89>:1:157' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 17.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:158' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:159' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:160' */
      StateFlowGUI_B.y = -x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:161' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:162' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:163' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 19.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                20.0 * A / 2.0)) {
      /* '<S89>:1:165' */
      /*  14 */
      /* '<S89>:1:166' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 19.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:167' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:168' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:169' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:170' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:171' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:172' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 20.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                21.0 * A / 2.0)) {
      /* '<S89>:1:174' */
      /*  15 */
      /* '<S89>:1:175' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 20.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:176' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:177' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:178' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:179' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:180' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:181' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 21.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                23.0 * A / 2.0)) {
      /* '<S89>:1:183' */
      /*  16 */
      /* '<S89>:1:184' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 21.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:185' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:186' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:187' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:188' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:189' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:190' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 23.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                25.0 * A / 2.0)) {
      /* '<S89>:1:192' */
      /*  17 */
      /* '<S89>:1:193' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 23.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:194' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:195' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:196' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:197' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:198' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:199' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 25.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                27.0 * A / 2.0)) {
      /* '<S89>:1:201' */
      /*  18 */
      /* '<S89>:1:202' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 25.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:203' */
      StateFlowGUI_B.x = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + 4.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:204' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:205' */
      StateFlowGUI_B.y = -5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:206' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:207' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:208' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 27.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                28.0 * A / 2.0)) {
      /* '<S89>:1:210' */
      /*  19 */
      /* '<S89>:1:211' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 27.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:212' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:213' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:214' */
      StateFlowGUI_B.y = -5.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:215' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:216' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:217' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 28.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                29.0 * A / 2.0)) {
      /* '<S89>:1:219' */
      /*  20 */
      /* '<S89>:1:220' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 28.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:221' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:222' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:223' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:224' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:225' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:226' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 29.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                31.0 * A / 2.0)) {
      /* '<S89>:1:228' */
      /*  21 */
      /* '<S89>:1:229' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 29.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:230' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:231' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:232' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:233' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:234' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:235' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 31.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                32.0 * A / 2.0)) {
      /* '<S89>:1:237' */
      /*  22 */
      /* '<S89>:1:238' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 31.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:239' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:240' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:241' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:242' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:243' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:244' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 32.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                33.0 * A / 2.0)) {
      /* '<S89>:1:246' */
      /*  23 */
      /* '<S89>:1:247' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 32.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:248' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:249' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:250' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:251' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:252' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:253' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 33.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                35.0 * A / 2.0)) {
      /* '<S89>:1:255' */
      /*  24 */
      /* '<S89>:1:256' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 33.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:257' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:258' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:259' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:260' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:261' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:262' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 35.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                36.0 * A / 2.0)) {
      /* '<S89>:1:264' */
      /*  25 */
      /* '<S89>:1:265' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 35.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:266' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:267' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:268' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:269' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:270' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:271' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 36.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                37.0 * A / 2.0)) {
      /* '<S89>:1:273' */
      /*  26 */
      /* '<S89>:1:274' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 36.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:275' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:276' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:277' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:278' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:279' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:280' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 37.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                39.0 * A / 2.0)) {
      /* '<S89>:1:282' */
      /*  27 */
      /* '<S89>:1:283' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 37.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:284' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:285' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:286' */
      StateFlowGUI_B.y = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + -7.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:287' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:288' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:289' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 39.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                41.0 * A / 2.0)) {
      /* '<S89>:1:291' */
      /*  28 */
      /* '<S89>:1:292' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 39.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:293' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:294' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:295' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:296' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:297' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:298' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 41.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                43.0 * A / 2.0)) {
      /* '<S89>:1:300' */
      /*  29 */
      /* '<S89>:1:301' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 41.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:302' */
      StateFlowGUI_B.x = 2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:303' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:304' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:305' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:306' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:307' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 43.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                44.0 * A / 2.0)) {
      /* '<S89>:1:309' */
      /*  30 */
      /* '<S89>:1:310' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 43.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:311' */
      StateFlowGUI_B.x = 2.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:312' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:313' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:314' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:315' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:316' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 44.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                45.0 * A / 2.0)) {
      /* '<S89>:1:318' */
      /*  31 */
      /* '<S89>:1:319' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 44.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:320' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:321' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:322' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:323' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:324' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:325' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 45.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                47.0 * A / 2.0)) {
      /* '<S89>:1:327' */
      /*  32 */
      /* '<S89>:1:328' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 45.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:329' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:330' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:331' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:332' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:333' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:334' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 47.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                48.0 * A / 2.0)) {
      /* '<S89>:1:336' */
      /*  33 */
      /* '<S89>:1:337' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 47.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:338' */
      StateFlowGUI_B.x = 0.0;

      /* '<S89>:1:339' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:340' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:341' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:342' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:343' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 48.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                49.0 * A / 2.0)) {
      /* '<S89>:1:345' */
      /*  34 */
      /* '<S89>:1:346' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 48.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:347' */
      StateFlowGUI_B.x = B * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:348' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:349' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:350' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:351' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:352' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 49.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                51.0 * A / 2.0)) {
      /* '<S89>:1:354' */
      /*  35 */
      /* '<S89>:1:355' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 49.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:356' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:357' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:358' */
      StateFlowGUI_B.y = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + -7.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:359' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:360' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:361' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 51.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                52.0 * A / 2.0)) {
      /* '<S89>:1:363' */
      /*  36 */
      /* '<S89>:1:364' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 51.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:365' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:366' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:367' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:368' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:369' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:370' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 52.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                53.0 * A / 2.0)) {
      /* '<S89>:1:372' */
      /*  37 */
      /* '<S89>:1:373' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 52.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:374' */
      StateFlowGUI_B.x = 0.0;

      /* '<S89>:1:375' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:376' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:377' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:378' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:379' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 53.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                55.0 * A / 2.0)) {
      /* '<S89>:1:381' */
      /*  38 */
      /* '<S89>:1:382' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 53.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:383' */
      StateFlowGUI_B.x = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:384' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:385' */
      StateFlowGUI_B.y = -5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:386' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:387' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:388' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 55.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                57.0 * A / 2.0)) {
      /* '<S89>:1:390' */
      /*  39 */
      /* '<S89>:1:391' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 55.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:392' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:393' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:394' */
      StateFlowGUI_B.y = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + -5.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:395' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:396' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:397' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 57.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                59.0 * A / 2.0)) {
      /* '<S89>:1:399' */
      /*  40 */
      /* '<S89>:1:400' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 57.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:401' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:402' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:403' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:404' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:405' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:406' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 59.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                60.0 * A / 2.0)) {
      /* '<S89>:1:408' */
      /*  41 */
      /* '<S89>:1:409' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 59.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:410' */
      StateFlowGUI_B.x = 0.0;

      /* '<S89>:1:411' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:412' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:413' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:414' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:415' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 60.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                61.0 * A / 2.0)) {
      /* '<S89>:1:417' */
      /*  42 */
      /* '<S89>:1:418' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 60.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S89>:1:419' */
      StateFlowGUI_B.x = B * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:420' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:421' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:422' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:423' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S89>:1:424' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 61.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                63.0 * A / 2.0)) {
      /* '<S89>:1:426' */
      /*  43 */
      /* '<S89>:1:427' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 61.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S89>:1:428' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:429' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:430' */
      StateFlowGUI_B.y = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + -3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:431' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S89>:1:432' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:433' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 63.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                64.0 * A / 2.0)) {
      /* '<S89>:1:435' */
      /*  44 */
      /* '<S89>:1:436' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 63.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &B);

      /* '<S89>:1:437' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value - x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S89>:1:438' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S89>:1:439' */
      StateFlowGUI_B.y = 0.0;

      /* '<S89>:1:440' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:441' */
      x2 = A / 2.0;
      StateFlowGUI_B.x_pp = -B * StateFlowGUI_P.AlzataC1_Value / (x2 * x2);

      /* '<S89>:1:442' */
      StateFlowGUI_B.y_pp = 0.0;
    } else {
      /* '<S89>:1:445' */
      StateFlowGUI_B.x = 0.0;

      /* '<S89>:1:446' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S89>:1:447' */
      StateFlowGUI_B.y = 0.0;

      /* '<S89>:1:448' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S89>:1:449' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S89>:1:450' */
      StateFlowGUI_B.y_pp = 0.0;
    }

    /* End of MATLAB Function: '<S70>/g' */

    /* MATLAB Function: '<S70>/Cerchi Tangenti' incorporates:
     *  Constant: '<S70>/Constant3'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchi Tangenti': '<S86>:1' */
    /* '<S86>:1:4' */
    A = 100.0 * StateFlowGUI_P.Constant3_Value / 2.0;

    /* '<S86>:1:5' */
    /* '<S86>:1:6' */
    B = (StateFlowGUI_P.Constant3_Value - 0.025) * 100.0 / 2.0;

    /* '<S86>:1:7' */
    /* '<S86>:1:8' */
    x3 = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) * 100.0 / 2.0;

    /* '<S86>:1:9' */
    /* '<S86>:1:10' */
    x4 = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) * 100.0 /
      2.0;

    /* '<S86>:1:11' */
    /* '<S86>:1:12' */
    T5 = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025) *
      100.0 / 2.0;

    /* '<S86>:1:14' */
    /* '<S86>:1:15' */
    /* '<S86>:1:16' */
    /* '<S86>:1:17' */
    /* '<S86>:1:18' */
    if ((StateFlowGUI_B.Sum2 > 0.0) && (StateFlowGUI_B.Sum2 <= A)) {
      /* '<S86>:1:20' */
      /*  1 */
      /* '<S86>:1:21' */
      StateFlowGUI_ldm7t_p(StateFlowGUI_B.Sum2 / A, &x2, &F, &B);

      /* '<S86>:1:22' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S86>:1:23' */
      F = F * 2.0 * 3.1415926535897931 / A;

      /* '<S86>:1:24' */
      x3 = B * 2.0 * 3.1415926535897931 / (A * A);

      /* '<S86>:1:25' */
      StateFlowGUI_B.xct = StateFlowGUI_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x2);

      /* '<S86>:1:26' */
      StateFlowGUI_B.yct = StateFlowGUI_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x2) - StateFlowGUI_P.Constant3_Value / 2.0;

      /* '<S86>:1:27' */
      StateFlowGUI_B.xct_p = StateFlowGUI_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x2) * F;

      /* '<S86>:1:28' */
      StateFlowGUI_B.yct_p = -StateFlowGUI_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x2) * F;

      /* '<S86>:1:29' */
      StateFlowGUI_B.xct_pp = -StateFlowGUI_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x2) * (F * F) + StateFlowGUI_P.Constant3_Value /
        2.0 * sin(1.5707963267948966 - x2) * x3;

      /* '<S86>:1:30' */
      StateFlowGUI_B.yct_pp = -StateFlowGUI_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x2) * (F * F) - StateFlowGUI_P.Constant3_Value /
        2.0 * cos(1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > A) && (StateFlowGUI_B.Sum2 <= A + B)) {
      /* '<S86>:1:32' */
      /*  2 */
      /* '<S86>:1:33' */
      StateFlowGUI_ldm7t_p((StateFlowGUI_B.Sum2 - A) / B, &x2, &F, &x3);

      /* '<S86>:1:34' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S86>:1:35' */
      F = F * 2.0 * 3.1415926535897931 / B;

      /* '<S86>:1:36' */
      x3 = x3 * 2.0 * 3.1415926535897931 / (B * B);

      /* '<S86>:1:37' */
      StateFlowGUI_B.xct = (StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 * cos
        (1.5707963267948966 - x2);

      /* '<S86>:1:38' */
      StateFlowGUI_B.yct = (StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 * sin
        (1.5707963267948966 - x2) - (StateFlowGUI_P.Constant3_Value - 0.025) /
        2.0;

      /* '<S86>:1:39' */
      StateFlowGUI_B.xct_p = (StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x2) * F;

      /* '<S86>:1:40' */
      StateFlowGUI_B.yct_p = -(StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - x2) * F;

      /* '<S86>:1:41' */
      StateFlowGUI_B.xct_pp = -(StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - x2) * (F * F) + (StateFlowGUI_P.Constant3_Value
        - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * x3;

      /* '<S86>:1:42' */
      StateFlowGUI_B.yct_pp = -(StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x2) * (F * F) - (StateFlowGUI_P.Constant3_Value
        - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > A + B) && (StateFlowGUI_B.Sum2 <= (A + B)
                + x3)) {
      /* '<S86>:1:44' */
      /*  3 */
      /* '<S86>:1:45' */
      StateFlowGUI_ldm7t_p(((StateFlowGUI_B.Sum2 - A) - B) / x3, &x2, &F, &x4);

      /* '<S86>:1:46' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S86>:1:47' */
      F = F * 2.0 * 3.1415926535897931 / x3;

      /* '<S86>:1:48' */
      x3 = x4 * 2.0 * 3.1415926535897931 / (x3 * x3);

      /* '<S86>:1:49' */
      StateFlowGUI_B.xct = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) /
        2.0 * cos(1.5707963267948966 - x2);

      /* '<S86>:1:50' */
      StateFlowGUI_B.yct = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) /
        2.0 * sin(1.5707963267948966 - x2) - ((StateFlowGUI_P.Constant3_Value -
        0.025) - 0.025) / 2.0;

      /* '<S86>:1:51' */
      StateFlowGUI_B.xct_p = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) /
        2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S86>:1:52' */
      StateFlowGUI_B.yct_p = -((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2) * F;

      /* '<S86>:1:53' */
      StateFlowGUI_B.xct_pp = -((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2) * (F * F) +
        ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - x2) * x3;

      /* '<S86>:1:54' */
      StateFlowGUI_B.yct_pp = -((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - x2) * (F * F) -
        ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > (A + B) + x3) && (StateFlowGUI_B.Sum2 <=
                ((A + B) + x3) + x4)) {
      /* '<S86>:1:56' */
      /*  4 */
      /* '<S86>:1:57' */
      StateFlowGUI_ldm7t_p((((StateFlowGUI_B.Sum2 - A) - B) - x3) / x4, &x2, &F,
                           &x5);

      /* '<S86>:1:58' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S86>:1:59' */
      F = F * 2.0 * 3.1415926535897931 / x4;

      /* '<S86>:1:60' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (x4 * x4);

      /* '<S86>:1:61' */
      StateFlowGUI_B.xct = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) -
                            0.025) / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S86>:1:62' */
      StateFlowGUI_B.yct = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) -
                            0.025) / 2.0 * sin(1.5707963267948966 - x2) -
        (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0;

      /* '<S86>:1:63' */
      StateFlowGUI_B.xct_p = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S86>:1:64' */
      StateFlowGUI_B.yct_p = -(((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;

      /* '<S86>:1:65' */
      StateFlowGUI_B.xct_pp = -(((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * (F * F) +
        (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - x2) * x3;

      /* '<S86>:1:66' */
      StateFlowGUI_B.yct_pp = -(((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * (F * F) -
        (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > ((A + B) + x3) + x4) &&
               (StateFlowGUI_B.Sum2 <= (((A + B) + x3) + x4) + T5)) {
      /* '<S86>:1:68' */
      /*  5 */
      /* '<S86>:1:69' */
      StateFlowGUI_ldm7t_p(((((StateFlowGUI_B.Sum2 - A) - B) - x3) - x4) / T5,
                           &x2, &F, &x5);

      /* '<S86>:1:70' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S86>:1:71' */
      F = F * 2.0 * 3.1415926535897931 / T5;

      /* '<S86>:1:72' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (T5 * T5);

      /* '<S86>:1:73' */
      StateFlowGUI_B.xct = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S86>:1:74' */
      StateFlowGUI_B.yct = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) -
        ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025) /
        2.0;

      /* '<S86>:1:75' */
      StateFlowGUI_B.xct_p = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S86>:1:76' */
      StateFlowGUI_B.yct_p = -((((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;

      /* '<S86>:1:77' */
      StateFlowGUI_B.xct_pp = -((((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * (F * F)
        + ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - x2) * x3;

      /* '<S86>:1:78' */
      StateFlowGUI_B.yct_pp = -((((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * (F * F)
        - ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2) * x3;
    } else {
      /* '<S86>:1:80' */
      StateFlowGUI_B.xct = 0.0;

      /* '<S86>:1:81' */
      StateFlowGUI_B.xct_p = 0.0;

      /* '<S86>:1:82' */
      StateFlowGUI_B.yct = 0.0;

      /* '<S86>:1:83' */
      StateFlowGUI_B.yct_p = 0.0;

      /* '<S86>:1:84' */
      StateFlowGUI_B.xct_pp = 0.0;

      /* '<S86>:1:85' */
      StateFlowGUI_B.yct_pp = 0.0;
    }

    /* End of MATLAB Function: '<S70>/Cerchi Tangenti' */

    /* MATLAB Function: '<S70>/spirale' incorporates:
     *  Constant: '<S70>/N giri'
     *  Constant: '<S70>/Periodo'
     *  Constant: '<S70>/Rmax'
     *  Constant: '<S70>/Rmin'
     *  Constant: '<S70>/Tempo spost. iniziale'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/spirale': '<S90>:1' */
    /* '<S90>:1:3' */
    /* '<S90>:1:4' */
    if ((StateFlowGUI_B.Sum2 >= 0.0) && (StateFlowGUI_B.Sum2 <=
         StateFlowGUI_P.Tempospostiniziale_Value)) {
      /* '<S90>:1:5' */
      /* '<S90>:1:6' */
      StateFlowGUI_ldm7t_m(StateFlowGUI_B.Sum2 /
                           StateFlowGUI_P.Tempospostiniziale_Value, &x2, &F, &B);

      /* '<S90>:1:7' */
      StateFlowGUI_B.xs = x2 * StateFlowGUI_P.Rmin_Value;

      /* '<S90>:1:8' */
      StateFlowGUI_B.xs_p = F * StateFlowGUI_P.Rmin_Value /
        StateFlowGUI_P.Tempospostiniziale_Value;

      /* '<S90>:1:9' */
      StateFlowGUI_B.xs_pp = B * StateFlowGUI_P.Rmin_Value /
        (StateFlowGUI_P.Tempospostiniziale_Value *
         StateFlowGUI_P.Tempospostiniziale_Value);

      /* '<S90>:1:10' */
      StateFlowGUI_B.ys = 0.0;

      /* '<S90>:1:11' */
      StateFlowGUI_B.ys_p = 0.0;

      /* '<S90>:1:12' */
      StateFlowGUI_B.ys_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > StateFlowGUI_P.Tempospostiniziale_Value) &&
               (StateFlowGUI_B.Sum2 <= StateFlowGUI_P.Tempospostiniziale_Value +
                StateFlowGUI_P.Periodo_Value)) {
      /* '<S90>:1:13' */
      /* '<S90>:1:14' */
      StateFlowGUI_ldm7t_m((StateFlowGUI_B.Sum2 -
                            StateFlowGUI_P.Tempospostiniziale_Value) /
                           StateFlowGUI_P.Periodo_Value, &x2, &F, &x3);

      /* '<S90>:1:15' */
      A = x2 * StateFlowGUI_P.Rmax_Value + StateFlowGUI_P.Rmin_Value;

      /* '<S90>:1:16' */
      B = F * StateFlowGUI_P.Rmax_Value / StateFlowGUI_P.Periodo_Value;

      /* '<S90>:1:17' */
      x4 = x3 * StateFlowGUI_P.Rmax_Value / (StateFlowGUI_P.Periodo_Value *
        StateFlowGUI_P.Periodo_Value);

      /* '<S90>:1:18' */
      x2 = x2 * StateFlowGUI_P.Ngiri_Value * 2.0 * 3.1415926535897931;

      /* '<S90>:1:19' */
      F = F * StateFlowGUI_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        StateFlowGUI_P.Periodo_Value;

      /* '<S90>:1:20' */
      x3 = x3 * StateFlowGUI_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        (StateFlowGUI_P.Periodo_Value * StateFlowGUI_P.Periodo_Value);

      /* '<S90>:1:21' */
      StateFlowGUI_B.xs = A * cos(x2);

      /* '<S90>:1:22' */
      StateFlowGUI_B.ys = A * sin(x2);

      /* '<S90>:1:23' */
      StateFlowGUI_B.xs_p = -A * sin(x2) * F + B * cos(x2);

      /* '<S90>:1:24' */
      StateFlowGUI_B.ys_p = A * cos(x2) * F + B * sin(x2);

      /* '<S90>:1:25' */
      StateFlowGUI_B.xs_pp = ((-B * sin(x2) * F - (F * F * cos(x2) + sin(x2) *
        x3) * A) + x4 * cos(x2)) - B * sin(x2) * F;

      /* '<S90>:1:26' */
      StateFlowGUI_B.ys_pp = (((F * F * -sin(x2) + cos(x2) * x3) * A + B * cos
        (x2) * F) + x4 * sin(x2)) + B * cos(x2) * F;
    } else {
      /* '<S90>:1:28' */
      StateFlowGUI_B.xs = cos(StateFlowGUI_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowGUI_P.Rmin_Value +
        StateFlowGUI_P.Rmax_Value);

      /* '<S90>:1:29' */
      StateFlowGUI_B.xs_p = 0.0;

      /* '<S90>:1:30' */
      StateFlowGUI_B.ys = sin(StateFlowGUI_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowGUI_P.Rmin_Value +
        StateFlowGUI_P.Rmax_Value);

      /* '<S90>:1:31' */
      StateFlowGUI_B.ys_p = 0.0;

      /* '<S90>:1:32' */
      StateFlowGUI_B.xs_pp = 0.0;

      /* '<S90>:1:33' */
      StateFlowGUI_B.ys_pp = 0.0;
    }

    /* End of MATLAB Function: '<S70>/spirale' */

    /* MultiPortSwitch: '<S70>/Multiport Switch' incorporates:
     *  Constant: '<S12>/selettore'
     *  Constant: '<S70>/N giri1'
     *  Constant: '<S70>/N giri2'
     *  Constant: '<S70>/Rmax1'
     *  Constant: '<S70>/Rmin1'
     *  Constant: '<S70>/Rmin2'
     *  Constant: '<S70>/Rmin3'
     */
    switch ((int32_T)StateFlowGUI_P.selettore_Value) {
     case 1:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_B.xq;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_B.yq;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_B.xq_p;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_B.yq_p;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_B.xq_pp;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_B.yq_pp;
      break;

     case 2:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_B.xc;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_B.yc;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_B.xc_p;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_B.yc_p;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_B.xc_pp;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_B.yc_pp;
      break;

     case 3:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_B.x;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_B.y;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_B.x_p_l;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_B.y_p_o;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_B.x_pp;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_B.y_pp;
      break;

     case 4:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_B.xct;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_B.yct;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_B.xct_p;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_B.yct_p;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_B.xct_pp;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_B.yct_pp;
      break;

     case 5:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_B.xs;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_B.ys;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_B.xs_p;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_B.ys_p;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_B.xs_pp;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_B.ys_pp;
      break;

     default:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_P.Rmax1_Value;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_P.Ngiri1_Value;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_P.Rmin1_Value;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_P.Ngiri2_Value;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_P.Rmin2_Value;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_P.Rmin3_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S70>/Multiport Switch' */

    /* Sum: '<S12>/Sum' */
    StateFlowGUI_B.Sum = StateFlowGUI_B.x0 + StateFlowGUI_B.MultiportSwitch[0];

    /* Sum: '<S12>/Sum1' */
    StateFlowGUI_B.Ymov = StateFlowGUI_B.MultiportSwitch[1] + StateFlowGUI_B.y0;

    /* MATLAB Function: '<S12>/Cinematica Inversa' */
    StateFlowGUI_CinematicaInversa(StateFlowGUI_B.Sum, StateFlowGUI_B.Ymov,
      &StateFlowGUI_B.sf_CinematicaInversa);

    /* MATLAB Function: '<S12>/Cinematica Inversa vel' */
    x2 = StateFlowGUI_B.MultiportSwitch[2];
    B = StateFlowGUI_B.MultiportSwitch[3];

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa vel': '<S64>:1' */
    /* '<S64>:1:3' */
    /* '<S64>:1:4' */
    /* '<S64>:1:6' */
    /* '<S64>:1:8' */
    /* '<S64>:1:10' */
    A = (StateFlowGUI_B.Ymov - 0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2));

    /* '<S64>:1:12' */
    x4 = (((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (-0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) + (StateFlowGUI_B.Ymov
           - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 *
           cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) / A;

    /* '<S64>:1:14' */
    A = ((StateFlowGUI_B.Ymov - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (-0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Sum +
           0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) /
         ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((StateFlowGUI_B.Sum +
           0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
         (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / A;

    /* '<S64>:1:16' */
    /* '<S64>:1:18' */
    /* '<S64>:1:20' */
    J[0] = -(StateFlowGUI_B.Ymov - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x4;
    J[2] = (-(StateFlowGUI_B.Ymov - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
            ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * A - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov
      - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2));
    J[1] = x4;
    J[3] = A;

    /* '<S64>:1:22' */
    if (fabs(J[1]) > fabs(J[0])) {
      A = J[0] / J[1];
      x4 = 1.0 / (A * J[3] - J[2]);
      J_p_idx_0 = J[3] / J[1] * x4;
      J_p_idx_1 = -x4;
      x5 = -J[2] / J[1] * x4;
      J_p_idx_3 = A * x4;
    } else {
      A = J[1] / J[0];
      x4 = 1.0 / (J[3] - A * J[2]);
      J_p_idx_0 = J[3] / J[0] * x4;
      J_p_idx_1 = -A * x4;
      x5 = -J[2] / J[0] * x4;
      J_p_idx_3 = x4;
    }

    F = J_p_idx_0 * x2;
    theta_p[0] = F;
    F = theta_p[0];
    F += x5 * B;
    theta_p[0] = F;
    F = J_p_idx_1 * x2;
    theta_p[1] = F;
    F = theta_p[1];
    F += J_p_idx_3 * B;
    theta_p[1] = F;

    /* '<S64>:1:23' */
    /* '<S64>:1:24' */
    StateFlowGUI_B.theta1_p = theta_p[0];
    StateFlowGUI_B.theta2_p = theta_p[1];

    /* End of MATLAB Function: '<S12>/Cinematica Inversa vel' */

    /* MATLAB Function: '<S12>/Cinematica Inversa Acc' */
    B = StateFlowGUI_B.MultiportSwitch[4];
    x2 = StateFlowGUI_B.MultiportSwitch[5];
    F = StateFlowGUI_B.theta1_p;
    x3 = StateFlowGUI_B.theta2_p;

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa Acc': '<S63>:1' */
    /* '<S63>:1:3' */
    /* '<S63>:1:4' */
    /* '<S63>:1:6' */
    /* '<S63>:1:8' */
    /* '<S63>:1:10' */
    A = (StateFlowGUI_B.Ymov - 0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2));

    /* '<S63>:1:12' */
    x4 = (((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (-0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) + (StateFlowGUI_B.Ymov
           - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 *
           cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) / A;

    /* '<S63>:1:14' */
    A = ((StateFlowGUI_B.Ymov - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (-0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Sum +
           0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) /
         ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((StateFlowGUI_B.Sum +
           0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
         (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / A;

    /* '<S63>:1:16' */
    /* '<S63>:1:18' */
    /* '<S63>:1:20' */
    J[0] = -(StateFlowGUI_B.Ymov - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x4;
    J[2] = (-(StateFlowGUI_B.Ymov - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
            ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * A - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov
      - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2));
    J[1] = x4;
    J[3] = A;

    /* '<S63>:1:22' */
    A = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    J_p_idx_1 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    J_p_idx_3 = (StateFlowGUI_B.Ymov - 0.25 * sin
                 (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S63>:1:25' */
    x4 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    x5 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    D2p = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    g_a = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    T5 = (StateFlowGUI_B.Ymov - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S63>:1:28' */
    i_a = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    j_a = (StateFlowGUI_B.Ymov - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S63>:1:31' */
    N21 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    N22 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    m_a = (StateFlowGUI_B.Ymov - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S63>:1:34' */
    J_p_idx_0 = ((((StateFlowGUI_B.Ymov - 0.25 * sin
                    (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) *
                  (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                   (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                   StateFlowGUI_B.theta2_p) / (((StateFlowGUI_B.Ymov - 0.25 *
      sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - ((((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) -
      (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p) *
      (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) +
      (StateFlowGUI_B.Ymov - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * StateFlowGUI_B.theta1_p) +
      0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.theta1_p * ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
                  (((StateFlowGUI_B.Ymov - 0.25 * sin
                     (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)))) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) * StateFlowGUI_B.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Ymov - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) / (((StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (A * A))) -
      (((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
           StateFlowGUI_B.theta1_p + StateFlowGUI_B.MultiportSwitch[2]) *
          (StateFlowGUI_B.Ymov - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
            StateFlowGUI_B.Sum) + 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
          StateFlowGUI_B.MultiportSwitch[3]) + (StateFlowGUI_B.MultiportSwitch[3]
          - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
          StateFlowGUI_B.theta2_p) * ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
           StateFlowGUI_B.Sum) + 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p)
       + (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
          StateFlowGUI_B.theta2_p + StateFlowGUI_B.MultiportSwitch[2]) *
       (StateFlowGUI_B.Ymov - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (J_p_idx_1 * J_p_idx_1))
      * (((StateFlowGUI_B.Ymov - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
            StateFlowGUI_B.Sum) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (StateFlowGUI_B.Ymov
          - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / (((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (J_p_idx_3 * J_p_idx_3));
    x5 = (((((((((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                    StateFlowGUI_B.theta1_p + StateFlowGUI_B.MultiportSwitch[2])
                   * (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
                   (StateFlowGUI_B.Ymov - 0.25 * sin
                    (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) * StateFlowGUI_B.theta2_p *
      ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)))) +
                  (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                   (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                   StateFlowGUI_B.theta2_p) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * StateFlowGUI_B.theta2_p *
                 ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
                  (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) * StateFlowGUI_B.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (x4 * x4)) *
               (StateFlowGUI_B.Ymov - 0.25 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
               (((StateFlowGUI_B.Ymov - 0.25 * sin
                  (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
               StateFlowGUI_B.theta2_p) - (StateFlowGUI_B.MultiportSwitch[3] -
               0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
               StateFlowGUI_B.theta2_p) * (0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2))) +
             ((StateFlowGUI_B.Ymov - 0.25 * sin
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
                StateFlowGUI_B.Sum) - 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.09 +
                StateFlowGUI_B.Sum) - 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
               (StateFlowGUI_B.sf_CinematicaInversa.theta2))) *
             (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
              StateFlowGUI_B.theta2_p) / (((StateFlowGUI_B.Ymov - 0.25 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
                (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
                (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
               (StateFlowGUI_B.Ymov - 0.25 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)))) - (0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
             StateFlowGUI_B.theta2_p + StateFlowGUI_B.MultiportSwitch[2]) *
            (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
            (StateFlowGUI_B.Ymov - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / (x5 * x5)) +
           ((StateFlowGUI_B.Ymov - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
              StateFlowGUI_B.Sum) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
              StateFlowGUI_B.Sum) + 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.09 +
              StateFlowGUI_B.Sum) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2))) * (0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
            StateFlowGUI_B.theta2_p + StateFlowGUI_B.MultiportSwitch[2]) *
           (StateFlowGUI_B.Ymov - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
           (((StateFlowGUI_B.Ymov - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
               StateFlowGUI_B.Sum) - 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
               StateFlowGUI_B.Sum) + 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
             (StateFlowGUI_B.Ymov - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (D2p * D2p))) -
          (((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
               StateFlowGUI_B.theta1_p + StateFlowGUI_B.MultiportSwitch[2]) *
              (StateFlowGUI_B.Ymov - 0.25 * sin
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
              StateFlowGUI_B.MultiportSwitch[3]) +
             (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
              StateFlowGUI_B.theta2_p) * ((0.09 + StateFlowGUI_B.Sum) - 0.25 *
              cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
               StateFlowGUI_B.Sum) + 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
            StateFlowGUI_B.theta1_p) + (0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
            StateFlowGUI_B.theta2_p + StateFlowGUI_B.MultiportSwitch[2]) *
           (StateFlowGUI_B.Ymov - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
             StateFlowGUI_B.Sum) - 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (g_a * g_a)) *
          (((StateFlowGUI_B.Ymov - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
              StateFlowGUI_B.Sum) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
              StateFlowGUI_B.Sum) + 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.09 +
              StateFlowGUI_B.Sum) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2))) *
           (StateFlowGUI_B.Ymov - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2))) / (((0.09 -
             StateFlowGUI_B.Sum) + 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (T5 * T5))) +
      (StateFlowGUI_B.Ymov - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * StateFlowGUI_B.theta2_p /
      ((0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2));
    J_p_idx_1 = -((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                     StateFlowGUI_B.theta1_p + StateFlowGUI_B.MultiportSwitch[2])
                    * (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) -
                    (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                     (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                     StateFlowGUI_B.theta1_p) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * StateFlowGUI_B.theta1_p) +
                  0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                  StateFlowGUI_B.theta1_p * ((0.09 + StateFlowGUI_B.Sum) - 0.25 *
      cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) / ((StateFlowGUI_B.Ymov
      - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) - (((((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Ymov - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
      StateFlowGUI_B.MultiportSwitch[3]) + (StateFlowGUI_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.theta2_p) * ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p) +
      (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
       StateFlowGUI_B.theta2_p + StateFlowGUI_B.MultiportSwitch[2]) *
      (StateFlowGUI_B.Ymov - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (i_a * i_a)) *
      ((StateFlowGUI_B.Ymov - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta1))) / (j_a * j_a);
    J_p_idx_3 = (((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                     StateFlowGUI_B.theta1_p + StateFlowGUI_B.MultiportSwitch[2])
                    * (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
                    (StateFlowGUI_B.Ymov - 0.25 * sin
                     (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) * StateFlowGUI_B.theta2_p *
      ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)))) +
                   (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                    (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                    StateFlowGUI_B.theta2_p) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * StateFlowGUI_B.theta2_p *
                  ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
                   (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) * StateFlowGUI_B.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (N21 * N21)) /
      ((StateFlowGUI_B.Ymov - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
         StateFlowGUI_B.Sum) + 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov -
        0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) - (((((0.25 *
      sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p
      + StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Ymov - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
      StateFlowGUI_B.MultiportSwitch[3]) + (StateFlowGUI_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.theta2_p) * ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_p) +
      (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
       StateFlowGUI_B.theta2_p + StateFlowGUI_B.MultiportSwitch[2]) *
      (StateFlowGUI_B.Ymov - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (N22 * N22)) *
      ((StateFlowGUI_B.Ymov - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
         StateFlowGUI_B.Sum) + 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2))) / (m_a * m_a);

    /* '<S63>:1:37' */
    if (fabs(J[1]) > fabs(J[0])) {
      A = J[0] / J[1];
      x4 = 1.0 / (A * J[3] - J[2]);
      J1[0] = J[3] / J[1] * x4;
      J1[1] = -x4;
      J1[2] = -J[2] / J[1] * x4;
      J1[3] = A * x4;
    } else {
      A = J[1] / J[0];
      x4 = 1.0 / (J[3] - A * J[2]);
      J1[0] = J[3] / J[0] * x4;
      J1[1] = -A * x4;
      J1[2] = -J[2] / J[0] * x4;
      J1[3] = x4;
    }

    J_p_idx_0 *= F;
    J_p_idx_0 += x5 * x3;
    x5 = B - J_p_idx_0;
    J_p_idx_0 = J_p_idx_1 * F;
    J_p_idx_0 += J_p_idx_3 * x3;
    x2 -= J_p_idx_0;
    F = J1[0] * x5;
    theta_p[0] = F;
    F = theta_p[0];
    F += J1[2] * x2;
    theta_p[0] = F;
    F = J1[1] * x5;
    theta_p[1] = F;
    F = theta_p[1];
    F += J1[3] * x2;
    theta_p[1] = F;

    /* '<S63>:1:39' */
    /* '<S63>:1:40' */
    StateFlowGUI_B.theta1_pp = theta_p[0];
    StateFlowGUI_B.theta2_pp = theta_p[1];

    /* End of MATLAB Function: '<S12>/Cinematica Inversa Acc' */

    /* S-Function (xpcethercatpdorx): '<S81>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S81>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S81>/Velocity B' */
    StateFlowGUI_B.VelocityB_f = StateFlowGUI_B.EtherCATPDOReceive15_d;

    /* MATLAB Function: '<S81>/Vel Asse B conv' */
    StateFlowGUI_VelAsseBconv(StateFlowGUI_B.VelocityB_f,
      &StateFlowGUI_B.sf_VelAsseBconv_d);

    /* S-Function (xpcethercatpdorx): '<S81>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S81>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[17];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S81>/Velocity A' */
    StateFlowGUI_B.VelocityA_o = StateFlowGUI_B.EtherCATPDOReceive14_b;

    /* MATLAB Function: '<S81>/Vel Asse A conv' */
    StateFlowGUI_VelAsseAconv(StateFlowGUI_B.VelocityA_o,
      &StateFlowGUI_B.sf_VelAsseAconv_a);

    /* Sum: '<S12>/Sum7' */
    StateFlowGUI_B.qdot[0] = StateFlowGUI_B.theta1_p -
      StateFlowGUI_B.sf_VelAsseBconv_d.vel_B_conv;
    StateFlowGUI_B.qdot[1] = StateFlowGUI_B.theta2_p -
      StateFlowGUI_B.sf_VelAsseAconv_a.vel_A_conv;

    /* Sum: '<S12>/Sum4' */
    StateFlowGUI_B.q[0] = StateFlowGUI_B.sf_CinematicaInversa.theta1 -
      StateFlowGUI_B.Sum4;
    StateFlowGUI_B.q[1] = StateFlowGUI_B.sf_CinematicaInversa.theta2 -
      StateFlowGUI_B.Sum7;

    /* Gain: '<S12>/Kd' */
    StateFlowGUI_B.Kd[0] = StateFlowGUI_P.Kd_Gain * StateFlowGUI_B.qdot[0];

    /* Product: '<S12>/Product' */
    StateFlowGUI_B.Product[0] = StateFlowGUI_B.Kp_l * StateFlowGUI_B.q[0];

    /* Gain: '<S12>/Kd' */
    StateFlowGUI_B.Kd[1] = StateFlowGUI_P.Kd_Gain * StateFlowGUI_B.qdot[1];

    /* Product: '<S12>/Product' */
    StateFlowGUI_B.Product[1] = StateFlowGUI_B.Kp_l * StateFlowGUI_B.q[1];

    /* Sum: '<S12>/Sum9' */
    StateFlowGUI_B.Y[0] = (StateFlowGUI_B.theta1_pp + StateFlowGUI_B.Kd[0]) +
      StateFlowGUI_B.Product[0];
    StateFlowGUI_B.Y[1] = (StateFlowGUI_B.theta2_pp + StateFlowGUI_B.Kd[1]) +
      StateFlowGUI_B.Product[1];

    /* MATLAB Function: '<S12>/Dinamica Inversa1' */
    /* MATLAB Function 'Sistema_braccia/Dinamica Inversa1': '<S69>:1' */
    /* '<S69>:1:112' */
    /* '<S69>:1:108' */
    /* '<S69>:1:104' */
    /* '<S69>:1:96' */
    /* '<S69>:1:3' */
    /* '<S69>:1:15' */
    A = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    J_p_idx_1 = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    J_p_idx_3 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    x4 = J_p_idx_1 * J_p_idx_1 / 2.0 + J_p_idx_3 * J_p_idx_3 / 2.0;
    x5 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    D2p = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    g_a = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    x2 = atan((sqrt((A * A - x4 * x4) + x5 * x5) + (sin(StateFlowGUI_B.Sum7) -
                sin(StateFlowGUI_B.Sum4))) / (((D2p * D2p / 2.0 + (cos
      (StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4))) + g_a * g_a / 2.0) +
               0.72)) * 2.0;

    /* '<S69>:1:19' */
    T5 = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    i_a = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    j_a = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    N21 = i_a * i_a / 2.0 + j_a * j_a / 2.0;
    N22 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    m_a = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    A = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    B = atan((sqrt((T5 * T5 - N21 * N21) + N22 * N22) + (sin(StateFlowGUI_B.Sum7)
               - sin(StateFlowGUI_B.Sum4))) / (((m_a * m_a / 2.0 + (cos
      (StateFlowGUI_B.Sum4) - cos(StateFlowGUI_B.Sum7))) + A * A / 2.0) - 0.72))
      * -2.0;

    /* '<S69>:1:23' */
    x4 = cos(B) / sin(B) * sin(StateFlowGUI_B.Sum4) - cos(StateFlowGUI_B.Sum4);

    /* '<S69>:1:24' */
    x5 = cos(StateFlowGUI_B.Sum7) - cos(B) / sin(B) * sin(StateFlowGUI_B.Sum7);

    /* '<S69>:1:25' */
    T5 = cos(x2) - cos(B) / sin(B) * sin(x2);

    /* '<S69>:1:27' */
    F = (StateFlowGUI_B.vel_B_conv * x4 + StateFlowGUI_B.vel_A_conv * x5) / T5;

    /* '<S69>:1:29' */
    N21 = ((cos(x2) / sin(x2) - cos(B) / sin(B)) * sin(StateFlowGUI_B.Sum4) +
           cos(B) / sin(B) * sin(StateFlowGUI_B.Sum4)) - cos(StateFlowGUI_B.Sum4);

    /* '<S69>:1:31' */
    N22 = ((cos(x2) / sin(x2) - cos(B) / sin(B)) * -sin(StateFlowGUI_B.Sum7) -
           cos(B) / sin(B) * sin(StateFlowGUI_B.Sum7)) + cos(StateFlowGUI_B.Sum7);

    /* '<S69>:1:33' */
    A = (cos(x2) / sin(x2) - cos(B) / sin(B)) * sin(B);

    /* '<S69>:1:35' */
    x3 = N21 / A * StateFlowGUI_B.vel_B_conv + N22 / A *
      StateFlowGUI_B.vel_A_conv;

    /* '<S69>:1:37' */
    J[0] = x4 / T5;
    J[2] = x5 / T5;
    J[1] = N21 / A;
    J[3] = N22 / A;

    /* '<S69>:1:44' */
    /* '<S69>:1:45' */
    /* '<S69>:1:46' */
    x5 = cos(x2) - cos(B) / sin(B) * sin(x2);

    /* '<S69>:1:48' */
    /* '<S69>:1:50' */
    /* '<S69>:1:52' */
    /* '<S69>:1:54' */
    x4 = sin(B);

    /* '<S69>:1:56' */
    T5 = sin(B);

    /* '<S69>:1:58' */
    N21 = sin(B);
    N21 = (-sin(x2) * F - -1.0 / (N21 * N21) * x3 * sin(x2)) - cos(B) / sin(B) *
      cos(x2) * F;

    /* '<S69>:1:60' */
    N22 = sin(x2);
    m_a = sin(B);
    J_p_idx_1 = sin(B);

    /* '<S69>:1:63' */
    J_p_idx_3 = sin(x2);
    i_a = sin(B);
    j_a = sin(B);

    /* '<S69>:1:66' */
    D2p = sin(x2);
    g_a = sin(B);
    D2p = (-1.0 / (D2p * D2p) * F + 1.0 / (g_a * g_a) * x3) * sin(B) + (cos(x2) /
      sin(x2) - cos(B) / sin(B)) * (cos(B) * x3);

    /* '<S69>:1:68' */
    J_p_idx_0 = (((-1.0 / (x4 * x4) * x3 * sin(StateFlowGUI_B.Sum4) + cos(B) /
                   sin(B) * cos(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv)
                  + sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv) * x5 -
                 (cos(B) / sin(B) * sin(StateFlowGUI_B.Sum4) - cos
                  (StateFlowGUI_B.Sum4)) * N21) / (x5 * x5);
    x5 = (((1.0 / (T5 * T5) * x3 * sin(StateFlowGUI_B.Sum7) - cos(B) / sin(B) *
            cos(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv) - sin
           (StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv) * x5 - (cos
           (StateFlowGUI_B.Sum7) - cos(B) / sin(B) * sin(StateFlowGUI_B.Sum7)) *
          N21) / (x5 * x5);
    J_p_idx_1 = ((((((-1.0 / (N22 * N22) * F + 1.0 / (m_a * m_a) * x3) * sin
                     (StateFlowGUI_B.Sum4) + (cos(x2) / sin(x2) - cos(B) / sin(B))
                     * (cos(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv)) +
                    -1.0 / (J_p_idx_1 * J_p_idx_1) * x3 * sin
                    (StateFlowGUI_B.Sum4)) + cos(B) / sin(B) * cos
                   (StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv) + sin
                  (StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv) * A -
                 (((cos(x2) / sin(x2) - cos(B) / sin(B)) * sin
                   (StateFlowGUI_B.Sum4) + cos(B) / sin(B) * sin
                   (StateFlowGUI_B.Sum4)) - cos(StateFlowGUI_B.Sum4)) * D2p) /
      (A * A);
    J_p_idx_3 = ((((((cos(x2) / sin(x2) - cos(B) / sin(B)) * (-cos
      (StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv) - (-1.0 / (J_p_idx_3 *
      J_p_idx_3) * F + 1.0 / (i_a * i_a) * x3) * sin(StateFlowGUI_B.Sum7)) -
                    -1.0 / (j_a * j_a) * x3 * sin(StateFlowGUI_B.Sum7)) - cos(B)
                   / sin(B) * cos(StateFlowGUI_B.Sum7) *
                   StateFlowGUI_B.vel_A_conv) - sin(StateFlowGUI_B.Sum7) *
                  StateFlowGUI_B.vel_A_conv) * A - (((cos(x2) / sin(x2) - cos(B)
      / sin(B)) * -sin(StateFlowGUI_B.Sum7) - cos(B) / sin(B) * sin
      (StateFlowGUI_B.Sum7)) + cos(StateFlowGUI_B.Sum7)) * D2p) / (A * A);

    /* '<S69>:1:70' */
    J1[0] = -0.125 * sin(StateFlowGUI_B.Sum4);
    J1[2] = 0.0;
    J1[1] = 0.125 * cos(StateFlowGUI_B.Sum4);
    J1[3] = 0.0;

    /* '<S69>:1:72' */
    /* '<S69>:1:75' */
    J2[0] = 0.0;
    J2[2] = -0.125 * sin(StateFlowGUI_B.Sum7);
    J2[1] = 0.0;
    J2[3] = 0.125 * cos(StateFlowGUI_B.Sum7);

    /* '<S69>:1:77' */
    /* '<S69>:1:80' */
    J3[0] = (0.5 * sin(x2) * J[0] + sin(StateFlowGUI_B.Sum4)) * -0.25;
    J3[2] = 0.5 * sin(x2) * J[2] * -0.25;
    J3[1] = (0.5 * cos(x2) * J[0] + cos(StateFlowGUI_B.Sum4)) * 0.25;
    J3[3] = 0.5 * cos(x2) * J[2] * 0.25;

    /* '<S69>:1:82' */
    /* '<S69>:1:85' */
    J4[0] = -0.125 * sin(B) * J[1];
    J4[2] = (0.5 * sin(B) * J[3] + sin(StateFlowGUI_B.Sum7)) * -0.25;
    J4[1] = 0.125 * cos(B) * J[1];
    J4[3] = (0.5 * cos(B) * J[3] + cos(StateFlowGUI_B.Sum7)) * 0.25;

    /* '<S69>:1:87' */
    /* '<S69>:1:90' */
    JE[0] = (sin(x2) * J[0] + sin(StateFlowGUI_B.Sum4)) * -0.25;
    JE[2] = sin(x2) * J[2] * -0.25;
    JE[1] = (cos(x2) * J[0] + cos(StateFlowGUI_B.Sum4)) * 0.25;
    JE[3] = cos(x2) * J[2] * 0.25;

    /* '<S69>:1:92' */
    /* '<S69>:1:96' */
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      j_a = J1[bitIdx << 1] * 2.9 * J1[0];
      j_a += J1[(bitIdx << 1) + 1] * 2.9 * J1[1];
      A = y[bitIdx] + j_a;
      tmp[bitIdx] = 0.0;
      j_a = tmp[bitIdx];
      j_a += J2[bitIdx << 1] * 2.9 * 0.0;
      N21 = J[bitIdx << 1] * 0.0522 * J[0];
      tmp[bitIdx] = j_a;
      j_a = tmp[bitIdx];
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      N21 += J[(bitIdx << 1) + 1] * 0.0522 * J[1];
      tmp[bitIdx] = j_a;
      A = (A + tmp[bitIdx]) + N21;
      tmp_0[bitIdx] = 0.0;
      j_a = tmp_0[bitIdx];
      j_a += J3[bitIdx << 1] * 2.9 * J3[0];
      N21 = J4[bitIdx << 1] * 2.9 * J4[0];
      tmp_0[bitIdx] = j_a;
      j_a = tmp_0[bitIdx];
      j_a += J3[(bitIdx << 1) + 1] * 2.9 * J3[1];
      N21 += J4[(bitIdx << 1) + 1] * 2.9 * J4[1];
      tmp_0[bitIdx] = j_a;
      y_0[bitIdx] = (A + tmp_0[bitIdx]) + N21;
      tmp_1[bitIdx] = 0.0;
      j_a = tmp_1[bitIdx];
      j_a += JE[bitIdx << 1] * 0.36 * JE[0];
      tmp_1[bitIdx] = j_a;
      j_a = tmp_1[bitIdx];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * JE[1];
      tmp_1[bitIdx] = j_a;
      j_a = J1[bitIdx << 1] * 2.9 * 0.0;
      j_a += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      A = y[bitIdx + 2] + j_a;
      tmp[bitIdx + 2] = 0.0;
      j_a = tmp[bitIdx + 2];
      j_a += J2[bitIdx << 1] * 2.9 * J2[2];
      N21 = J[bitIdx << 1] * 0.0522 * J[2];
      tmp[bitIdx + 2] = j_a;
      j_a = tmp[bitIdx + 2];
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * J2[3];
      N21 += J[(bitIdx << 1) + 1] * 0.0522 * J[3];
      tmp[bitIdx + 2] = j_a;
      A = (tmp[bitIdx + 2] + A) + N21;
      tmp_0[bitIdx + 2] = 0.0;
      j_a = tmp_0[bitIdx + 2];
      j_a += J3[bitIdx << 1] * 2.9 * J3[2];
      N21 = J4[bitIdx << 1] * 2.9 * J4[2];
      tmp_0[bitIdx + 2] = j_a;
      j_a = tmp_0[bitIdx + 2];
      j_a += J3[(bitIdx << 1) + 1] * 2.9 * J3[3];
      N21 += J4[(bitIdx << 1) + 1] * 2.9 * J4[3];
      tmp_0[bitIdx + 2] = j_a;
      y_0[bitIdx + 2] = (tmp_0[bitIdx + 2] + A) + N21;
      tmp_1[bitIdx + 2] = 0.0;
      j_a = tmp_1[bitIdx + 2];
      j_a += JE[bitIdx << 1] * 0.36 * JE[2];
      tmp_1[bitIdx + 2] = j_a;
      j_a = tmp_1[bitIdx + 2];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * JE[3];
      tmp_1[bitIdx + 2] = j_a;
    }

    /* '<S69>:1:97' */
    A = -0.125 * cos(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv;
    x4 = -0.125 * sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv;
    N22 = -0.125 * cos(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv;
    m_a = -0.125 * sin(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv;
    D2p = ((0.5 * cos(x2) * F * J[0] + cos(StateFlowGUI_B.Sum4) *
            StateFlowGUI_B.vel_B_conv) + 0.5 * sin(x2) * J_p_idx_0) * -0.25;
    T5 = (0.5 * cos(x2) * F * J[2] + 0.5 * sin(x2) * x5) * -0.25;
    i_a = ((-sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv - 0.5 * sin(x2)
            * F * J[0]) + 0.5 * cos(x2) * J_p_idx_0) * 0.25;
    g_a = (-0.5 * sin(x2) * F * J[2] + 0.5 * cos(x2) * x5) * 0.25;
    tmp_5 = (0.5 * cos(B) * x3 * J[1] + 0.5 * sin(B) * J_p_idx_1) * -0.25;
    tmp_6 = ((0.5 * cos(B) * x3 * J[3] + cos(StateFlowGUI_B.Sum7) *
              StateFlowGUI_B.vel_A_conv) + 0.5 * sin(B) * J_p_idx_3) * -0.25;
    tmp_7 = (-0.5 * sin(B) * x3 * J[1] + 0.5 * cos(B) * J_p_idx_1) * 0.25;
    B = ((-sin(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv - 0.5 * sin(B) *
          x3 * J[3]) + 0.5 * cos(B) * J_p_idx_3) * 0.25;
    x3 = ((cos(x2) * F * J[0] + cos(StateFlowGUI_B.Sum4) *
           StateFlowGUI_B.vel_B_conv) + sin(x2) * J_p_idx_0) * -0.25;
    tmp_8 = (cos(x2) * F * J[2] + sin(x2) * x5) * -0.25;
    tmp_9 = ((-sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv - sin(x2) *
              F * J[0]) + cos(x2) * J_p_idx_0) * 0.25;
    x2 = (-sin(x2) * F * J[2] + cos(x2) * x5) * 0.25;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      M[bitIdx << 1] = y_0[bitIdx << 1] + tmp_1[bitIdx << 1];
      tmp[bitIdx] = 0.0;
      tmp_0[bitIdx] = 0.0;
      j_a = tmp_0[bitIdx];
      N21 = tmp[bitIdx];
      N21 += J1[bitIdx << 1] * 2.9 * A;
      j_a += J2[bitIdx << 1] * 2.9 * 0.0;
      F = J[bitIdx << 1] * 0.0522 * J_p_idx_0;
      tmp[bitIdx] = N21;
      tmp_0[bitIdx] = j_a;
      j_a = tmp_0[bitIdx];
      N21 = tmp[bitIdx];
      N21 += J1[(bitIdx << 1) + 1] * 2.9 * x4;
      j_a += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      F += J[(bitIdx << 1) + 1] * 0.0522 * J_p_idx_1;
      tmp[bitIdx] = N21;
      tmp_0[bitIdx] = j_a;
      j_a = (tmp[bitIdx] + tmp_0[bitIdx]) + F;
      tmp_2[bitIdx] = 0.0;
      N21 = tmp_2[bitIdx];
      N21 += J3[bitIdx << 1] * 2.9 * D2p;
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
      F += J4[(bitIdx << 1) + 1] * 2.9 * B;
      tmp_2[bitIdx + 2] = N21;
      tmp_3[bitIdx + 2] = (tmp_2[bitIdx + 2] + j_a) + F;
      tmp_4[bitIdx + 2] = 0.0;
      j_a = tmp_4[bitIdx + 2];
      j_a += JE[bitIdx << 1] * 0.36 * tmp_8;
      tmp_4[bitIdx + 2] = j_a;
      j_a = tmp_4[bitIdx + 2];
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * x2;
      tmp_4[bitIdx + 2] = j_a;
    }

    /* '<S69>:1:99' */
    A = StateFlowGUI_B.Y[0];
    x4 = StateFlowGUI_B.Y[1];
    D2p = StateFlowGUI_B.vel_B_conv;
    i_a = StateFlowGUI_B.vel_A_conv;
    K[0] = tmp_3[0] + tmp_4[0];
    x2 = M[0] * A;
    M_0[0] = x2;
    x2 = M_0[0];
    K[1] = tmp_3[1] + tmp_4[1];
    x2 += M[2] * x4;
    M_0[0] = x2;
    K[2] = tmp_3[2] + tmp_4[2];
    x2 = M[1] * A;
    M_0[1] = x2;
    x2 = M_0[1];
    K[3] = tmp_3[3] + tmp_4[3];
    x2 += M[3] * x4;
    M_0[1] = x2;

    /* '<S69>:1:101' */
    /* '<S69>:1:104' */
    /*  Cm = Jtrasm*C + Jm*Thetam_pp; */
    /* '<S69>:1:108' */
    /* '<S69>:1:111' */
    /* '<S69>:1:112' */
    /* '<S69>:1:113' */
    /* '<S69>:1:114' */
    A = StateFlowGUI_B.vel_B_conv;
    x4 = StateFlowGUI_B.vel_A_conv;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      F = K[bitIdx] * D2p;
      J1[bitIdx] = 0.0;
      x2 = J1[bitIdx];
      x2 += o_a[bitIdx] * M[0];
      J1[bitIdx] = x2;
      x2 = J1[bitIdx];
      x2 += o_a[bitIdx + 2] * M[1];
      J1[bitIdx] = x2;
      F += K[bitIdx + 2] * i_a;
      J1[bitIdx + 2] = 0.0;
      x2 = J1[bitIdx + 2];
      x2 += o_a[bitIdx] * M[2];
      J1[bitIdx + 2] = x2;
      x2 = J1[bitIdx + 2];
      x2 += o_a[bitIdx + 2] * M[3];
      J1[bitIdx + 2] = x2;
      theta_p[bitIdx] = M_0[bitIdx] + F;
      j_a = J1[bitIdx] * 0.015625;
      j_a += J1[bitIdx + 2] * 0.0;
      StateFlowGUI_B.Mm[bitIdx] = j_a + Jm[bitIdx];
      J2[bitIdx] = 0.0;
      x2 = J2[bitIdx];
      x2 += o_a[bitIdx] * K[0];
      J2[bitIdx] = x2;
      x2 = J2[bitIdx];
      x2 += o_a[bitIdx + 2] * K[1];
      J2[bitIdx] = x2;
      j_a = J1[bitIdx] * 0.0;
      j_a += J1[bitIdx + 2] * 0.015625;
      StateFlowGUI_B.Mm[bitIdx + 2] = Jm[bitIdx + 2] + j_a;
      J2[bitIdx + 2] = 0.0;
      x2 = J2[bitIdx + 2];
      x2 += o_a[bitIdx] * K[2];
      J2[bitIdx + 2] = x2;
      x2 = J2[bitIdx + 2];
      x2 += o_a[bitIdx + 2] * K[3];
      J2[bitIdx + 2] = x2;
      J3[bitIdx] = 0.0;
      x2 = J3[bitIdx];
      x2 += J2[bitIdx] * 0.015625;
      J3[bitIdx] = x2;
      x2 = J3[bitIdx];
      x2 += J2[bitIdx + 2] * 0.0;
      J3[bitIdx] = x2;
      F = (real_T)p_a[bitIdx] * A;
      J3[bitIdx + 2] = 0.0;
      x2 = J3[bitIdx + 2];
      x2 += J2[bitIdx] * 0.0;
      J3[bitIdx + 2] = x2;
      x2 = J3[bitIdx + 2];
      x2 += J2[bitIdx + 2] * 0.015625;
      J3[bitIdx + 2] = x2;
      F += (real_T)p_a[bitIdx + 2] * x4;
      p_a_0[bitIdx] = F;
    }

    A = 2.2250738585072014E-308;
    j_a = J3[0] * p_a_0[0];
    j_a += J3[2] * p_a_0[1];
    F = 0.0002485 - j_a;
    B = fabs(F);
    if (B > 2.2250738585072014E-308) {
      x2 = 1.0;
      A = B;
    } else {
      x4 = B / 2.2250738585072014E-308;
      x2 = x4 * x4;
    }

    j_a = J3[1] * p_a_0[0];
    j_a += J3[3] * p_a_0[1];
    F = -0.0002483 - j_a;
    B = fabs(F);
    if (B > A) {
      x4 = A / B;
      x2 = x2 * x4 * x4 + 1.0;
      A = B;
    } else {
      x4 = B / A;
      x2 += x4 * x4;
    }

    x2 = A * sqrt(x2);

    /*   */
    /*  Mm_ = Jm; */
    /*  DMm = Mm-Jm; */
    /*  D = DMm*Thetam_pp + Km*Thetam_p; */
    /*  Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)]; */
    /*  Bt = [zeros(2,2); Mm_^-1]; */
    /*  Acl = Aol - Bt*[Kp Kd]; */
    /* '<S69>:1:125' */
    StateFlowGUI_B.C1 = theta_p[0];

    /* '<S69>:1:126' */
    StateFlowGUI_B.C2 = theta_p[1];
    StateFlowGUI_B.ntilde = x2;

    /* End of MATLAB Function: '<S12>/Dinamica Inversa1' */

    /* MATLAB Function: '<S12>/Coppia motrice' */
    /* MATLAB Function 'Sistema_braccia/Coppia motrice': '<S68>:1' */
    /* '<S68>:1:2' */
    /* '<S68>:1:4' */
    StateFlowGUI_B.Cm1 = (0.069632 * StateFlowGUI_B.Y[0] + StateFlowGUI_B.C1) /
      64.0;

    /* '<S68>:1:5' */
    StateFlowGUI_B.Cm2 = (0.069632 * StateFlowGUI_B.Y[1] + StateFlowGUI_B.C2) /
      64.0;

    /* Gain: '<S12>/Gain1' */
    StateFlowGUI_B.Gain1 = StateFlowGUI_P.Gain1_Gain * StateFlowGUI_B.Cm2;

    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S36>/Constant'
     *  Switch: '<S5>/Switch1'
     */
    if (StateFlowGUI_B.Memory != 0.0) {
      StateFlowGUI_B.Switch1 = StateFlowGUI_P.Constant_Value;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch1_Threshold) {
        /* Switch: '<S5>/Switch1' */
        StateFlowGUI_B.Switch1_c = StateFlowGUI_B.Gain1;
      } else {
        /* Switch: '<S5>/Switch1' */
        StateFlowGUI_B.Switch1_c = StateFlowGUI_B.CoppiaA;
      }

      StateFlowGUI_B.Switch1 = StateFlowGUI_B.Switch1_c;
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Saturate: '<S5>/Coppia A braccia saturata' */
    x2 = StateFlowGUI_B.Switch1;
    F = StateFlowGUI_P.CoppiaAbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowGUI_P.CoppiaAbracciasaturata_UpperSat;
    if (x2 > J_p_idx_0) {
      StateFlowGUI_B.CoppiaAbracciasaturata = J_p_idx_0;
    } else if (x2 < F) {
      StateFlowGUI_B.CoppiaAbracciasaturata = F;
    } else {
      StateFlowGUI_B.CoppiaAbracciasaturata = x2;
    }

    /* End of Saturate: '<S5>/Coppia A braccia saturata' */

    /* DataTypeConversion: '<S5>/Data Type Conversion3' */
    j_a = floor(StateFlowGUI_B.CoppiaAbracciasaturata);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowGUI_B.DataTypeConversion3 = (int16_T)(j_a < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion3' */

    /* S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */

    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[18];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S36>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S36>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[19];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S36>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14 = StateFlowGUI_B.EtherCATPDOReceive9;

    /* MATLAB Function: '<S36>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory,
      StateFlowGUI_B.DataTypeConversion14, &StateFlowGUI_B.sf_MATLABFunction_e);

    /* Memory: '<S40>/Memory' */
    StateFlowGUI_B.Memory_g = StateFlowGUI_DW.Memory_PreviousInput_o;

    /* Gain: '<S12>/Gain' */
    StateFlowGUI_B.Gain = StateFlowGUI_P.Gain_Gain_j * StateFlowGUI_B.Cm1;

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S40>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    if (StateFlowGUI_B.Memory_g != 0.0) {
      StateFlowGUI_B.Switch1_l = StateFlowGUI_P.Constant_Value_l;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch1_Threshold_f) {
        /* Switch: '<S6>/Switch1' */
        StateFlowGUI_B.Switch1_i = StateFlowGUI_B.Gain;
      } else {
        /* Switch: '<S6>/Switch1' */
        StateFlowGUI_B.Switch1_i = StateFlowGUI_B.CoppiaB;
      }

      StateFlowGUI_B.Switch1_l = StateFlowGUI_B.Switch1_i;
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Saturate: '<S6>/Coppia B braccia saturata' */
    x2 = StateFlowGUI_B.Switch1_l;
    F = StateFlowGUI_P.CoppiaBbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowGUI_P.CoppiaBbracciasaturata_UpperSat;
    if (x2 > J_p_idx_0) {
      StateFlowGUI_B.CoppiaBbracciasaturata = J_p_idx_0;
    } else if (x2 < F) {
      StateFlowGUI_B.CoppiaBbracciasaturata = F;
    } else {
      StateFlowGUI_B.CoppiaBbracciasaturata = x2;
    }

    /* End of Saturate: '<S6>/Coppia B braccia saturata' */

    /* DataTypeConversion: '<S6>/Data Type Conversion4' */
    j_a = floor(StateFlowGUI_B.CoppiaBbracciasaturata);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowGUI_B.DataTypeConversion4 = (int16_T)(j_a < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion4' */

    /* S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */

    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[20];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S40>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S40>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[21];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S40>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14_g = StateFlowGUI_B.EtherCATPDOReceive9_h;

    /* MATLAB Function: '<S40>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory_g,
      StateFlowGUI_B.DataTypeConversion14_g, &StateFlowGUI_B.sf_MATLABFunction_a);

    /* Memory: '<S44>/Memory' */
    StateFlowGUI_B.Memory_n = StateFlowGUI_DW.Memory_PreviousInput_g;

    /* Sum: '<S48>/Sum' */
    StateFlowGUI_B.Sum_p = StateFlowGUI_B.convert - StateFlowGUI_B.OffA_vite;

    /* MATLAB Function: '<S57>/Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv': '<S58>:1' */
    /* '<S58>:1:2' */
    StateFlowGUI_B.pos_A_conv = StateFlowGUI_B.Sum_p * 0.02 / 6.2831853071795862
      * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S11>/Sum3' */
    StateFlowGUI_B.Sum3 = StateFlowGUI_B.convert10 - StateFlowGUI_B.OffB_vite;

    /* MATLAB Function: '<S57>/Asse B conv v' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v': '<S59>:1' */
    /* '<S59>:1:2' */
    StateFlowGUI_B.pos_B_conv_v = StateFlowGUI_B.Sum3 * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S57>/Sum5' */
    StateFlowGUI_B.Sum5 = StateFlowGUI_B.pos_A_conv +
      StateFlowGUI_B.pos_B_conv_v;

    /* Sum: '<S51>/Sum2' */
    StateFlowGUI_B.Sum2_m = StateFlowGUI_B.Clock - StateFlowGUI_B.OffT;

    /* MATLAB Function: '<S11>/Rifermento Asse A Vite' incorporates:
     *  Constant: '<Root>/Alzata A'
     *  Constant: '<Root>/Periodo A'
     */
    /* MATLAB Function 'Sistema Vite/Rifermento Asse A Vite': '<S54>:1' */
    /* '<S54>:1:3' */
    /* '<S54>:1:4' */
    x4 = StateFlowGUI_B.Sum2_m / StateFlowGUI_P.PeriodoA_Value;

    /* '<S54>:1:5' */
    /* '<S54>:1:6' */
    if ((x4 >= 0.0) && (x4 < 0.3)) {
      /* '<S54>:1:8' */
      /* '<S54>:1:10' */
      F = 4.7619047619047619 * x4;

      /* '<S54>:1:11' */
      x2 = x4 * x4 * 4.7619047619047619 / 2.0;
    } else if ((x4 >= 0.3) && (x4 < 0.7)) {
      /* '<S54>:1:12' */
      /* '<S54>:1:14' */
      F = 1.4285714285714286;

      /* '<S54>:1:15' */
      x2 = (x4 - 0.3) * 1.4285714285714286 + 0.21428571428571427;
    } else if ((x4 >= 0.7) && (x4 <= 1.0)) {
      /* '<S54>:1:16' */
      /* '<S54>:1:18' */
      /* '<S54>:1:19' */
      F = 1.4285714285714286 - (x4 - 0.7) * 4.7619047619047619;

      /* '<S54>:1:20' */
      x2 = ((x4 - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x4 - 0.7) *
        (x4 - 0.7) * 4.7619047619047619 / 2.0;
    } else {
      /* '<S54>:1:23' */
      F = 0.0;

      /* '<S54>:1:24' */
      x2 = 1.0000000000000002;
    }

    /* '<S54>:1:27' */
    StateFlowGUI_B.ldm_pos = x2 * StateFlowGUI_P.AlzataA_Value;

    /* '<S54>:1:28' */
    StateFlowGUI_B.ldm_vel = F * StateFlowGUI_P.AlzataA_Value /
      StateFlowGUI_P.PeriodoA_Value;

    /* End of MATLAB Function: '<S11>/Rifermento Asse A Vite' */

    /* Sum: '<S11>/Sum1' */
    StateFlowGUI_B.Sum1 = StateFlowGUI_B.ldm_pos - StateFlowGUI_B.Sum5;

    /* Gain: '<S52>/Gain' */
    StateFlowGUI_B.Gain_a = StateFlowGUI_P.Gain_Gain_b * StateFlowGUI_B.Sum1;

    /* S-Function (xpcethercatpdorx): '<S55>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S55>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[22];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S55>/Velocity A' */
    StateFlowGUI_B.VelocityA_b = StateFlowGUI_B.EtherCATPDOReceive14_j;

    /* S-Function (xpcethercatpdorx): '<S55>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S55>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[23];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S55>/Velocity B' */
    StateFlowGUI_B.VelocityB_d = StateFlowGUI_B.EtherCATPDOReceive15_k;

    /* MATLAB Function: '<S55>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse A conv': '<S60>:1' */
    /* '<S60>:1:2' */
    StateFlowGUI_B.vel_A_conv_d = (StateFlowGUI_B.VelocityA_b +
      StateFlowGUI_B.VelocityB_d) * 0.02 / 6.2831853071795862 *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum8' */
    StateFlowGUI_B.Sum8 = StateFlowGUI_B.ldm_vel - StateFlowGUI_B.vel_A_conv_d;

    /* Gain: '<S52>/Gain6' */
    StateFlowGUI_B.Gain6 = StateFlowGUI_P.Gain6_Gain * StateFlowGUI_B.Sum8;

    /* Sum: '<S52>/Sum9' */
    StateFlowGUI_B.Sum9_p = StateFlowGUI_B.Gain_a + StateFlowGUI_B.Gain6;

    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S44>/Constant'
     *  Switch: '<S7>/Switch'
     */
    if (StateFlowGUI_B.Memory_n != 0.0) {
      StateFlowGUI_B.Switch1_f = StateFlowGUI_P.Constant_Value_e;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch_Threshold) {
        /* Gain: '<S7>/Gain' incorporates:
         *  Switch: '<S7>/Switch'
         */
        StateFlowGUI_B.Gain_m = StateFlowGUI_P.Gain_Gain * StateFlowGUI_B.Sum9_p;

        /* Switch: '<S7>/Switch' */
        StateFlowGUI_B.Switch = StateFlowGUI_B.Gain_m;
      } else {
        /* Switch: '<S7>/Switch' */
        StateFlowGUI_B.Switch = StateFlowGUI_B.CoppiaH;
      }

      StateFlowGUI_B.Switch1_f = StateFlowGUI_B.Switch;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* DataTypeConversion: '<S7>/Convert A' */
    j_a = floor(StateFlowGUI_B.Switch1_f);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowGUI_B.ConvertA = (int16_T)(j_a < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S7>/Convert A' */

    /* S-Function (xpcethercatpdotx): '<S7>/Torque send' */

    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[24];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S44>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S44>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[25];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S44>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14_k =
      StateFlowGUI_B.EtherCATPDOReceive9_hd;

    /* MATLAB Function: '<S44>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory_n,
      StateFlowGUI_B.DataTypeConversion14_k, &StateFlowGUI_B.sf_MATLABFunction_f);

    /* Memory: '<S46>/Memory' */
    StateFlowGUI_B.Memory_d = StateFlowGUI_DW.Memory_PreviousInput_a;

    /* MATLAB Function: '<S11>/Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Asse B conv': '<S50>:1' */
    /* '<S50>:1:2' */
    StateFlowGUI_B.pos_B_conv = StateFlowGUI_B.Sum3 * 3.1415926535897931 /
      2048.0 / 40.0;

    /* MATLAB Function: '<S11>/Asse B' incorporates:
     *  Constant: '<Root>/Alzata B '
     *  Constant: '<Root>/Periodo B'
     */
    /* MATLAB Function 'Sistema Vite/Asse B': '<S49>:1' */
    /* '<S49>:1:3' */
    /* '<S49>:1:4' */
    x4 = StateFlowGUI_B.Sum2_m / StateFlowGUI_P.PeriodoB_Value;

    /* '<S49>:1:5' */
    /* '<S49>:1:6' */
    if ((x4 >= 0.0) && (x4 < 0.3)) {
      /* '<S49>:1:8' */
      /* '<S49>:1:10' */
      F = 4.7619047619047619 * x4;

      /* '<S49>:1:11' */
      x2 = x4 * x4 * 4.7619047619047619 / 2.0;
    } else if ((x4 >= 0.3) && (x4 < 0.7)) {
      /* '<S49>:1:12' */
      /* '<S49>:1:14' */
      F = 1.4285714285714286;

      /* '<S49>:1:15' */
      x2 = (x4 - 0.3) * 1.4285714285714286 + 0.21428571428571427;
    } else if ((x4 >= 0.7) && (x4 <= 1.0)) {
      /* '<S49>:1:16' */
      /* '<S49>:1:18' */
      /* '<S49>:1:19' */
      F = 1.4285714285714286 - (x4 - 0.7) * 4.7619047619047619;

      /* '<S49>:1:20' */
      x2 = ((x4 - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x4 - 0.7) *
        (x4 - 0.7) * 4.7619047619047619 / 2.0;
    } else {
      /* '<S49>:1:23' */
      F = 0.0;

      /* '<S49>:1:24' */
      x2 = 1.0000000000000002;
    }

    /* '<S49>:1:27' */
    StateFlowGUI_B.ldm_pos_n = x2 * StateFlowGUI_P.AlzataB_Value;

    /* '<S49>:1:28' */
    StateFlowGUI_B.ldm_vel_c = F * StateFlowGUI_P.AlzataB_Value /
      StateFlowGUI_P.PeriodoB_Value;

    /* End of MATLAB Function: '<S11>/Asse B' */

    /* Sum: '<S11>/Sum4' */
    StateFlowGUI_B.Sum4_l = StateFlowGUI_B.ldm_pos_n - StateFlowGUI_B.pos_B_conv;

    /* Gain: '<S11>/Gain2' */
    StateFlowGUI_B.Gain2 = StateFlowGUI_P.Gain2_Gain * StateFlowGUI_B.Sum4_l;

    /* MATLAB Function: '<S55>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse B conv': '<S61>:1' */
    /* '<S61>:1:2' */
    StateFlowGUI_B.vel_B_conv_d = StateFlowGUI_B.VelocityB_d *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum6' */
    StateFlowGUI_B.Sum6 = StateFlowGUI_B.ldm_vel_c - StateFlowGUI_B.vel_B_conv_d;

    /* Gain: '<S11>/Gain4' */
    StateFlowGUI_B.Gain4 = StateFlowGUI_P.Gain4_Gain * StateFlowGUI_B.Sum6;

    /* Sum: '<S11>/Sum7' */
    StateFlowGUI_B.Sum7_n = StateFlowGUI_B.Gain2 + StateFlowGUI_B.Gain4;

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S46>/Constant'
     *  Switch: '<S8>/Switch2'
     */
    if (StateFlowGUI_B.Memory_d != 0.0) {
      StateFlowGUI_B.Switch1_h = StateFlowGUI_P.Constant_Value_p;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch2_Threshold) {
        /* Switch: '<S8>/Switch2' */
        StateFlowGUI_B.Switch2 = StateFlowGUI_B.Sum7_n;
      } else {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S8>/Constant1'
         */
        StateFlowGUI_B.Switch2 = StateFlowGUI_P.Constant1_Value_e;
      }

      StateFlowGUI_B.Switch1_h = StateFlowGUI_B.Switch2;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Saturate: '<S8>/Coppia A vite saturata' */
    x2 = StateFlowGUI_B.Switch1_h;
    F = StateFlowGUI_P.CoppiaAvitesaturata_LowerSat;
    J_p_idx_0 = StateFlowGUI_P.CoppiaAvitesaturata_UpperSat;
    if (x2 > J_p_idx_0) {
      StateFlowGUI_B.CoppiaAvitesaturata = J_p_idx_0;
    } else if (x2 < F) {
      StateFlowGUI_B.CoppiaAvitesaturata = F;
    } else {
      StateFlowGUI_B.CoppiaAvitesaturata = x2;
    }

    /* End of Saturate: '<S8>/Coppia A vite saturata' */

    /* DataTypeConversion: '<S8>/Convert B' */
    j_a = floor(StateFlowGUI_B.CoppiaAvitesaturata);
    if (rtIsNaN(j_a) || rtIsInf(j_a)) {
      j_a = 0.0;
    } else {
      j_a = fmod(j_a, 65536.0);
    }

    StateFlowGUI_B.ConvertB = (int16_T)(j_a < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-j_a : (int32_T)(int16_T)(uint16_T)j_a);

    /* End of DataTypeConversion: '<S8>/Convert B' */

    /* S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */

    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[26];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[27];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S46>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14_h = StateFlowGUI_B.EtherCATPDOReceive9_m;

    /* MATLAB Function: '<S46>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory_d,
      StateFlowGUI_B.DataTypeConversion14_h,
      &StateFlowGUI_B.sf_MATLABFunction_fb);

    /* Sum: '<S23>/Sum2' */
    StateFlowGUI_B.Sum2_b = StateFlowGUI_B.Clock - StateFlowGUI_B.OffT;

    /* MATLAB Function: '<S27>/Quadrato' incorporates:
     *  Constant: '<S27>/Alzata Q'
     *  Constant: '<S27>/Periodo Q'
     */
    /* MATLAB Function 'Movimento Braccia/Subsystem/Quadrato': '<S31>:1' */
    /* '<S31>:1:2' */
    /* '<S31>:1:3' */
    /* '<S31>:1:4' */
    A = StateFlowGUI_B.Sum2_b / (0.5 * StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

    /* '<S31>:1:5' */
    x2 = (StateFlowGUI_B.Sum2_b - 0.5 * StateFlowGUI_P.PeriodoQ_Value_i / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

    /* '<S31>:1:6' */
    x3 = (StateFlowGUI_B.Sum2_b - 1.5 * StateFlowGUI_P.PeriodoQ_Value_i / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

    /* '<S31>:1:7' */
    x4 = (StateFlowGUI_B.Sum2_b - 2.5 * StateFlowGUI_P.PeriodoQ_Value_i / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

    /* '<S31>:1:8' */
    x5 = (StateFlowGUI_B.Sum2_b - 3.5 * StateFlowGUI_P.PeriodoQ_Value_i / 4.0) /
      (0.5 * StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

    /* '<S31>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((StateFlowGUI_B.Sum2_b > 0.0) && (StateFlowGUI_B.Sum2_b <= 0.5 *
         StateFlowGUI_P.PeriodoQ_Value_i / 4.0)) {
      /* '<S31>:1:14' */
      if ((A >= 0.0) && (A < 0.1)) {
        /* '<S31>:1:16' */
        /* acc crescente positiva */
        /* '<S31>:1:18' */
        F = A * A * 27.777777777777771;

        /* '<S31>:1:19' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(A);
      } else if ((A >= 0.1) && (A < 0.30000000000000004)) {
        /* '<S31>:1:22' */
        /* acc costante positiva */
        /* '<S31>:1:24' */
        F = 5.5555555555555545 * A - 0.27777777777777773;

        /* '<S31>:1:25' */
        x2 = (A * A * 2.7777777777777772 - 0.27777777777777773 * A) +
          0.0092592592592592587;
      } else if ((A >= 0.30000000000000004) && (A < 0.4)) {
        /* '<S31>:1:28' */
        /* acc decrescente positiva */
        /* '<S31>:1:30' */
        F = (A * A * -27.777777777777771 + 22.222222222222218 * A) -
          2.7777777777777777;

        /* '<S31>:1:31' */
        x2 = ((((A * A * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(A)) - 2.7777777777777777 * A) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((A >= 0.4) && (A < 0.6)) {
        /* '<S31>:1:35' */
        /* acc costante nulla */
        /* '<S31>:1:37' */
        F = 1.6666666666666665;

        /* '<S31>:1:38' */
        x2 = (1.6666666666666665 * A - 0.44444444444444442) + 0.1111111111111111;
      } else if ((A >= 0.6) && (A < 0.7)) {
        /* '<S31>:1:41' */
        /* acc decrescente negativa */
        /* '<S31>:1:43' */
        F = ((A * A * -27.777777777777771 + 33.333333333333321 * A) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S31>:1:44' */
        x2 = (((((A * A * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(A)) + 1.6666666666666665 * A) -
                9.9999999999999982 * A) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((A >= 0.7) && (A < 0.9)) {
        /* '<S31>:1:48' */
        /* acc costante negativa */
        /* '<S31>:1:50' */
        F = (-5.5555555555555545 * A + 5.5555555555555545) - 0.27777777777777773;

        /* '<S31>:1:51' */
        x2 = (((A * A * -2.7777777777777772 + 5.5555555555555545 * A) -
               0.27777777777777773 * A) + 1.0) - 2.5092592592592586;
      } else if ((A >= 0.9) && (A <= 1.0)) {
        /* '<S31>:1:54' */
        /* acc crescente negativa */
        /* '<S31>:1:56' */
        F = (A * A * 27.777777777777771 - 55.555555555555543 * A) +
          27.777777777777771;

        /* '<S31>:1:57' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(A) - A * A *
                27.777777777777771) + 27.777777777777771 * A) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S31>:1:62' */
        F = 0.0;

        /* '<S31>:1:63' */
        x2 = 1.0;
      }

      /* '<S31>:1:66' */
      StateFlowGUI_B.xq_pg = x2 * StateFlowGUI_P.AlzataQ_Value_o / 2.0;

      /* '<S31>:1:67' */
      StateFlowGUI_B.xq_p_h = StateFlowGUI_P.AlzataQ_Value_o / 2.0 * F /
        (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

      /* '<S31>:1:68' */
      StateFlowGUI_B.yq_o = 0.0;

      /* '<S31>:1:69' */
      StateFlowGUI_B.yq_p_e = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 0.5 * StateFlowGUI_P.PeriodoQ_Value_i /
                4.0) && (StateFlowGUI_B.Sum2_b <= 1.5 *
                         StateFlowGUI_P.PeriodoQ_Value_i / 4.0)) {
      /* '<S31>:1:71' */
      /* '<S31>:1:72' */
      /*  Cj = Ca/xj; */
      if ((x2 >= 0.0) && (x2 < 0.1)) {
        /* '<S31>:1:75' */
        /* acc crescente positiva */
        /* '<S31>:1:77' */
        F = x2 * x2 * 27.777777777777771;

        /* '<S31>:1:78' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x2);
      } else if ((x2 >= 0.1) && (x2 < 0.30000000000000004)) {
        /* '<S31>:1:81' */
        /* acc costante positiva */
        /* '<S31>:1:83' */
        F = 5.5555555555555545 * x2 - 0.27777777777777773;

        /* '<S31>:1:84' */
        x2 = (x2 * x2 * 2.7777777777777772 - 0.27777777777777773 * x2) +
          0.0092592592592592587;
      } else if ((x2 >= 0.30000000000000004) && (x2 < 0.4)) {
        /* '<S31>:1:87' */
        /* acc decrescente positiva */
        /* '<S31>:1:89' */
        F = (x2 * x2 * -27.777777777777771 + 22.222222222222218 * x2) -
          2.7777777777777777;

        /* '<S31>:1:90' */
        x2 = ((((x2 * x2 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x2)) - 2.7777777777777777 * x2) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x2 >= 0.4) && (x2 < 0.6)) {
        /* '<S31>:1:94' */
        /* acc costante nulla */
        /* '<S31>:1:96' */
        F = 1.6666666666666665;

        /* '<S31>:1:97' */
        x2 = (1.6666666666666665 * x2 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x2 >= 0.6) && (x2 < 0.7)) {
        /* '<S31>:1:100' */
        /* acc decrescente negativa */
        /* '<S31>:1:102' */
        F = ((x2 * x2 * -27.777777777777771 + 33.333333333333321 * x2) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S31>:1:103' */
        x2 = (((((x2 * x2 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x2)) + 1.6666666666666665 * x2) -
                9.9999999999999982 * x2) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x2 >= 0.7) && (x2 < 0.9)) {
        /* '<S31>:1:107' */
        /* acc costante negativa */
        /* '<S31>:1:109' */
        F = (-5.5555555555555545 * x2 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S31>:1:110' */
        x2 = (((x2 * x2 * -2.7777777777777772 + 5.5555555555555545 * x2) -
               0.27777777777777773 * x2) + 1.0) - 2.5092592592592586;
      } else if ((x2 >= 0.9) && (x2 <= 1.0)) {
        /* '<S31>:1:113' */
        /* acc crescente negativa */
        /* '<S31>:1:115' */
        F = (x2 * x2 * 27.777777777777771 - 55.555555555555543 * x2) +
          27.777777777777771;

        /* '<S31>:1:116' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x2) - x2 * x2 *
                27.777777777777771) + 27.777777777777771 * x2) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S31>:1:121' */
        F = 0.0;

        /* '<S31>:1:122' */
        x2 = 1.0;
      }

      /* '<S31>:1:125' */
      StateFlowGUI_B.xq_pg = StateFlowGUI_P.AlzataQ_Value_o / 2.0;

      /* '<S31>:1:126' */
      StateFlowGUI_B.xq_p_h = 0.0;

      /* '<S31>:1:127' */
      StateFlowGUI_B.yq_o = -x2 * StateFlowGUI_P.AlzataQ_Value_o;

      /* '<S31>:1:128' */
      StateFlowGUI_B.yq_p_e = -F * StateFlowGUI_P.AlzataQ_Value_o /
        (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);
    } else if ((StateFlowGUI_B.Sum2_b > 1.5 * StateFlowGUI_P.PeriodoQ_Value_i /
                4.0) && (StateFlowGUI_B.Sum2_b <= 2.5 *
                         StateFlowGUI_P.PeriodoQ_Value_i / 4.0)) {
      /* '<S31>:1:130' */
      /* '<S31>:1:131' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S31>:1:134' */
        /* acc crescente positiva */
        /* '<S31>:1:136' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S31>:1:137' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S31>:1:140' */
        /* acc costante positiva */
        /* '<S31>:1:142' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S31>:1:143' */
        x2 = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S31>:1:146' */
        /* acc decrescente positiva */
        /* '<S31>:1:148' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S31>:1:149' */
        x2 = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x3)) - 2.7777777777777777 * x3) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S31>:1:153' */
        /* acc costante nulla */
        /* '<S31>:1:155' */
        F = 1.6666666666666665;

        /* '<S31>:1:156' */
        x2 = (1.6666666666666665 * x3 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S31>:1:159' */
        /* acc decrescente negativa */
        /* '<S31>:1:161' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S31>:1:162' */
        x2 = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x3)) + 1.6666666666666665 * x3) -
                9.9999999999999982 * x3) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S31>:1:166' */
        /* acc costante negativa */
        /* '<S31>:1:168' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S31>:1:169' */
        x2 = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
               0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S31>:1:172' */
        /* acc crescente negativa */
        /* '<S31>:1:174' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S31>:1:175' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x3) - x3 * x3 *
                27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S31>:1:180' */
        F = 0.0;

        /* '<S31>:1:181' */
        x2 = 1.0;
      }

      /* '<S31>:1:184' */
      StateFlowGUI_B.xq_pg = StateFlowGUI_P.AlzataQ_Value_o / 2.0 - x2 *
        StateFlowGUI_P.AlzataQ_Value_o;

      /* '<S31>:1:185' */
      StateFlowGUI_B.xq_p_h = -F * StateFlowGUI_P.AlzataQ_Value_o /
        (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

      /* '<S31>:1:186' */
      StateFlowGUI_B.yq_o = -StateFlowGUI_P.AlzataQ_Value_o;

      /* '<S31>:1:187' */
      StateFlowGUI_B.yq_p_e = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 2.5 * StateFlowGUI_P.PeriodoQ_Value_i /
                4.0) && (StateFlowGUI_B.Sum2_b <= 3.5 *
                         StateFlowGUI_P.PeriodoQ_Value_i / 4.0)) {
      /* '<S31>:1:189' */
      /* '<S31>:1:190' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S31>:1:193' */
        /* acc crescente positiva */
        /* '<S31>:1:195' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S31>:1:196' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S31>:1:199' */
        /* acc costante positiva */
        /* '<S31>:1:201' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S31>:1:202' */
        x2 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S31>:1:205' */
        /* acc decrescente positiva */
        /* '<S31>:1:207' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S31>:1:208' */
        x2 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x4)) - 2.7777777777777777 * x4) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S31>:1:212' */
        /* acc costante nulla */
        /* '<S31>:1:214' */
        F = 1.6666666666666665;

        /* '<S31>:1:215' */
        x2 = (1.6666666666666665 * x4 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S31>:1:218' */
        /* acc decrescente negativa */
        /* '<S31>:1:220' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S31>:1:221' */
        x2 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x4)) + 1.6666666666666665 * x4) -
                9.9999999999999982 * x4) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S31>:1:225' */
        /* acc costante negativa */
        /* '<S31>:1:227' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S31>:1:228' */
        x2 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
               0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S31>:1:231' */
        /* acc crescente negativa */
        /* '<S31>:1:233' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S31>:1:234' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x4) - x4 * x4 *
                27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S31>:1:239' */
        F = 0.0;

        /* '<S31>:1:240' */
        x2 = 1.0;
      }

      /* '<S31>:1:243' */
      StateFlowGUI_B.xq_pg = -StateFlowGUI_P.AlzataQ_Value_o / 2.0;

      /* '<S31>:1:244' */
      StateFlowGUI_B.xq_p_h = 0.0;

      /* '<S31>:1:245' */
      StateFlowGUI_B.yq_o = x2 * StateFlowGUI_P.AlzataQ_Value_o +
        -StateFlowGUI_P.AlzataQ_Value_o;

      /* '<S31>:1:246' */
      StateFlowGUI_B.yq_p_e = F * StateFlowGUI_P.AlzataQ_Value_o /
        (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);
    } else if ((StateFlowGUI_B.Sum2_b > 3.5 * StateFlowGUI_P.PeriodoQ_Value_i /
                4.0) && (StateFlowGUI_B.Sum2_b <= 4.0 *
                         StateFlowGUI_P.PeriodoQ_Value_i / 4.0)) {
      /* '<S31>:1:248' */
      /* '<S31>:1:249' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S31>:1:252' */
        /* acc crescente positiva */
        /* '<S31>:1:254' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S31>:1:255' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S31>:1:258' */
        /* acc costante positiva */
        /* '<S31>:1:260' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S31>:1:261' */
        x2 = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S31>:1:264' */
        /* acc decrescente positiva */
        /* '<S31>:1:266' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S31>:1:267' */
        x2 = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x5)) - 2.7777777777777777 * x5) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S31>:1:271' */
        /* acc costante nulla */
        /* '<S31>:1:273' */
        F = 1.6666666666666665;

        /* '<S31>:1:274' */
        x2 = (1.6666666666666665 * x5 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S31>:1:277' */
        /* acc decrescente negativa */
        /* '<S31>:1:279' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S31>:1:280' */
        x2 = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x5)) + 1.6666666666666665 * x5) -
                9.9999999999999982 * x5) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S31>:1:284' */
        /* acc costante negativa */
        /* '<S31>:1:286' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S31>:1:287' */
        x2 = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
               0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S31>:1:290' */
        /* acc crescente negativa */
        /* '<S31>:1:292' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S31>:1:293' */
        x2 = (((9.259259259259256 * rt_powd_snf(x5, 3.0) - x5 * x5 *
                27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S31>:1:298' */
        F = 0.0;

        /* '<S31>:1:299' */
        x2 = 1.0;
      }

      /* '<S31>:1:302' */
      StateFlowGUI_B.xq_pg = x2 * StateFlowGUI_P.AlzataQ_Value_o / 2.0 +
        -StateFlowGUI_P.AlzataQ_Value_o / 2.0;

      /* '<S31>:1:303' */
      StateFlowGUI_B.xq_p_h = F * StateFlowGUI_P.AlzataQ_Value_o / 2.0 /
        (StateFlowGUI_P.PeriodoQ_Value_i / 4.0);

      /* '<S31>:1:304' */
      StateFlowGUI_B.yq_o = 0.0;

      /* '<S31>:1:305' */
      StateFlowGUI_B.yq_p_e = 0.0;
    } else {
      /* '<S31>:1:307' */
      StateFlowGUI_B.xq_pg = 0.0;

      /* '<S31>:1:308' */
      StateFlowGUI_B.yq_o = 0.0;

      /* '<S31>:1:309' */
      StateFlowGUI_B.xq_p_h = 0.0;

      /* '<S31>:1:310' */
      StateFlowGUI_B.yq_p_e = 0.0;
    }

    /* End of MATLAB Function: '<S27>/Quadrato' */

    /* MATLAB Function: '<S27>/Cerchio' incorporates:
     *  Constant: '<S27>/Alzata C'
     *  Constant: '<S27>/Periodo C'
     */
    /* MATLAB Function 'Movimento Braccia/Subsystem/Cerchio': '<S30>:1' */
    /* '<S30>:1:2' */
    /* '<S30>:1:3' */
    /* '<S30>:1:4' */
    x4 = StateFlowGUI_B.Sum2_b / StateFlowGUI_P.PeriodoC_Value_f;

    /* '<S30>:1:5' */
    if ((x4 >= 0.0) && (x4 < 0.1)) {
      /* '<S30>:1:6' */
      /* acc crescente positiva */
      /* '<S30>:1:8' */
      F = x4 * x4 * 27.777777777777771;

      /* '<S30>:1:9' */
      x2 = 9.259259259259256 * rt_powd_snf(x4, 3.0);
    } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
      /* '<S30>:1:12' */
      /* acc costante positiva */
      /* '<S30>:1:14' */
      F = 5.5555555555555545 * x4 - 0.27777777777777773;

      /* '<S30>:1:15' */
      x2 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
        0.0092592592592592587;
    } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
      /* '<S30>:1:18' */
      /* acc decrescente positiva */
      /* '<S30>:1:20' */
      F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
        2.7777777777777777;

      /* '<S30>:1:21' */
      x2 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 * rt_powd_snf
               (x4, 3.0)) - 2.7777777777777777 * x4) - 0.44444444444444442) +
            0.59259259259259256) + 0.1111111111111111;
    } else if ((x4 >= 0.4) && (x4 < 0.6)) {
      /* '<S30>:1:25' */
      /* acc costante nulla */
      /* '<S30>:1:27' */
      F = 1.6666666666666665;

      /* '<S30>:1:28' */
      x2 = (1.6666666666666665 * x4 - 0.44444444444444442) + 0.1111111111111111;
    } else if ((x4 >= 0.6) && (x4 < 0.7)) {
      /* '<S30>:1:31' */
      /* acc decrescente negativa */
      /* '<S30>:1:33' */
      F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
           1.6666666666666665) - 9.9999999999999982;

      /* '<S30>:1:34' */
      x2 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 * rt_powd_snf
                (x4, 3.0)) + 1.6666666666666665 * x4) - 9.9999999999999982 * x4)
             - 0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
    } else if ((x4 >= 0.7) && (x4 < 0.9)) {
      /* '<S30>:1:38' */
      /* acc costante negativa */
      /* '<S30>:1:40' */
      F = (-5.5555555555555545 * x4 + 5.5555555555555545) - 0.27777777777777773;

      /* '<S30>:1:41' */
      x2 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
             0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
    } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
      /* '<S30>:1:44' */
      /* acc crescente negativa */
      /* '<S30>:1:46' */
      F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
        27.777777777777771;

      /* '<S30>:1:47' */
      x2 = (((9.259259259259256 * rt_powd_snf(x4, 3.0) - x4 * x4 *
              27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
        9.259259259259256;
    } else {
      /* acc costante nulla */
      /* '<S30>:1:52' */
      F = 0.0;

      /* '<S30>:1:53' */
      x2 = 1.0;
    }

    /* '<S30>:1:57' */
    x2 = x2 * 2.0 * 3.1415926535897931;

    /* '<S30>:1:58' */
    F = F * 2.0 * 3.1415926535897931 / StateFlowGUI_P.PeriodoC_Value_f;

    /* '<S30>:1:59' */
    StateFlowGUI_B.xc_k = cos(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value_j;

    /* '<S30>:1:60' */
    StateFlowGUI_B.yc_g = sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value_j - StateFlowGUI_P.AlzataC_Value_j;

    /* '<S30>:1:61' */
    StateFlowGUI_B.xc_p_c = sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value_j * F;

    /* '<S30>:1:62' */
    StateFlowGUI_B.yc_p_f = cos(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value_j * F;

    /* End of MATLAB Function: '<S27>/Cerchio' */

    /* MATLAB Function: '<S27>/g' incorporates:
     *  Constant: '<S27>/Alzata C1'
     *  Constant: '<S27>/Periodo C1'
     */
    /* MATLAB Function 'Movimento Braccia/Subsystem/g': '<S32>:1' */
    /* '<S32>:1:2' */
    A = StateFlowGUI_P.PeriodoC1_Value_e / 32.0;

    /* '<S32>:1:3' */
    /* '<S32>:1:4' */
    /* '<S32>:1:5' */
    /* '<S32>:1:6' */
    /* '<S32>:1:7' */
    /* '<S32>:1:8' */
    /* '<S32>:1:9' */
    /* '<S32>:1:10' */
    /* '<S32>:1:11' */
    /* '<S32>:1:12' */
    /* '<S32>:1:13' */
    /* '<S32>:1:14' */
    /* '<S32>:1:15' */
    /* '<S32>:1:16' */
    /* '<S32>:1:17' */
    /* '<S32>:1:18' */
    /* '<S32>:1:19' */
    /* '<S32>:1:20' */
    /* '<S32>:1:21' */
    /* '<S32>:1:22' */
    /* '<S32>:1:23' */
    /* '<S32>:1:24' */
    /* '<S32>:1:25' */
    /* '<S32>:1:26' */
    /* '<S32>:1:27' */
    /* '<S32>:1:28' */
    /* '<S32>:1:29' */
    /* '<S32>:1:30' */
    /* '<S32>:1:31' */
    /* '<S32>:1:32' */
    /* '<S32>:1:33' */
    /* '<S32>:1:34' */
    /* '<S32>:1:35' */
    /* '<S32>:1:36' */
    /* '<S32>:1:37' */
    /* '<S32>:1:38' */
    /* '<S32>:1:39' */
    /* '<S32>:1:40' */
    /* '<S32>:1:41' */
    /* '<S32>:1:42' */
    /* '<S32>:1:43' */
    /* '<S32>:1:44' */
    /* '<S32>:1:45' */
    /* '<S32>:1:46' */
    if ((StateFlowGUI_B.Sum2_b > 0.0) && (StateFlowGUI_B.Sum2_b <= A / 2.0)) {
      /* '<S32>:1:48' */
      /*  1 */
      /* '<S32>:1:49' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 0.0 * A / 2.0) / (A / 2.0),
                           &x2, &F);

      /* '<S32>:1:50' */
      StateFlowGUI_B.x_o = 0.0;

      /* '<S32>:1:51' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:52' */
      StateFlowGUI_B.y_j = -x2 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:53' */
      StateFlowGUI_B.y_p_h = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > A / 2.0) && (StateFlowGUI_B.Sum2_b <=
                3.0 * A / 2.0)) {
      /* '<S32>:1:55' */
      /*  2 */
      /* '<S32>:1:56' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - A / 2.0) / A, &x2, &F);

      /* '<S32>:1:57' */
      StateFlowGUI_B.x_o = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:58' */
      StateFlowGUI_B.x_p_n = F * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:59' */
      StateFlowGUI_B.y_j = -StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:60' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 3.0 * A / 2.0) && (StateFlowGUI_B.Sum2_b
                <= 4.0 * A / 2.0)) {
      /* '<S32>:1:62' */
      /*  3 */
      /* '<S32>:1:63' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 3.0 * A / 2.0) / (A / 2.0),
                           &x2, &F);

      /* '<S32>:1:64' */
      StateFlowGUI_B.x_o = 3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:65' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:66' */
      StateFlowGUI_B.y_j = x2 * StateFlowGUI_P.AlzataC1_Value_b +
        -StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:67' */
      StateFlowGUI_B.y_p_h = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 4.0 * A / 2.0) && (StateFlowGUI_B.Sum2_b
                <= 5.0 * A / 2.0)) {
      /* '<S32>:1:69' */
      /*  4 */
      /* '<S32>:1:70' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 4.0 * A / 2.0) / (A / 2.0),
                           &x2, &F);

      /* '<S32>:1:71' */
      StateFlowGUI_B.x_o = 3.0 * StateFlowGUI_P.AlzataC1_Value_b - x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:72' */
      StateFlowGUI_B.x_p_n = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:73' */
      StateFlowGUI_B.y_j = 0.0;

      /* '<S32>:1:74' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 5.0 * A / 2.0) && (StateFlowGUI_B.Sum2_b
                <= 7.0 * A / 2.0)) {
      /* '<S32>:1:76' */
      /*  5 */
      /* '<S32>:1:77' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 5.0 * A / 2.0) / A, &x2, &F);

      /* '<S32>:1:78' */
      StateFlowGUI_B.x_o = 2.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:79' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:80' */
      StateFlowGUI_B.y_j = -x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:81' */
      StateFlowGUI_B.y_p_h = -F * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 7.0 * A / 2.0) && (StateFlowGUI_B.Sum2_b
                <= 9.0 * A / 2.0)) {
      /* '<S32>:1:83' */
      /*  6 */
      /* '<S32>:1:84' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 7.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:85' */
      StateFlowGUI_B.x_o = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b + 2.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:86' */
      StateFlowGUI_B.x_p_n = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:87' */
      StateFlowGUI_B.y_j = -3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:88' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 9.0 * A / 2.0) && (StateFlowGUI_B.Sum2_b
                <= 11.0 * A / 2.0)) {
      /* '<S32>:1:90' */
      /*  7 */
      /* '<S32>:1:91' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 9.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:92' */
      StateFlowGUI_B.x_o = 5.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:93' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:94' */
      StateFlowGUI_B.y_j = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b + -3.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:95' */
      StateFlowGUI_B.y_p_h = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 11.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 12.0 * A / 2.0)) {
      /* '<S32>:1:97' */
      /*  8 */
      /* '<S32>:1:98' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 11.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:99' */
      StateFlowGUI_B.x_o = 5.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:100' */
      StateFlowGUI_B.x_p_n = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:101' */
      StateFlowGUI_B.y_j = 0.0;

      /* '<S32>:1:102' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 12.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 13.0 * A / 2.0)) {
      /* '<S32>:1:104' */
      /*  9 */
      /* '<S32>:1:105' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 12.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:106' */
      StateFlowGUI_B.x_o = 4.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:107' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:108' */
      StateFlowGUI_B.y_j = -B * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:109' */
      StateFlowGUI_B.y_p_h = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 13.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 15.0 * A / 2.0)) {
      /* '<S32>:1:111' */
      /*  10 */
      /* '<S32>:1:112' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 13.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:113' */
      StateFlowGUI_B.x_o = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b + 4.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:114' */
      StateFlowGUI_B.x_p_n = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:115' */
      StateFlowGUI_B.y_j = -StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:116' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 15.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 16.0 * A / 2.0)) {
      /* '<S32>:1:118' */
      /*  11 */
      /* '<S32>:1:119' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 15.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:120' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:121' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:122' */
      StateFlowGUI_B.y_j = B * StateFlowGUI_P.AlzataC1_Value_b +
        -StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:123' */
      StateFlowGUI_B.y_p_h = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 16.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 17.0 * A / 2.0)) {
      /* '<S32>:1:125' */
      /*  12 */
      /* '<S32>:1:126' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 16.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:127' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:128' */
      StateFlowGUI_B.x_p_n = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:129' */
      StateFlowGUI_B.y_j = 0.0;

      /* '<S32>:1:130' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 17.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 19.0 * A / 2.0)) {
      /* '<S32>:1:132' */
      /*  13 */
      /* '<S32>:1:133' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 17.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:134' */
      StateFlowGUI_B.x_o = 6.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:135' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:136' */
      StateFlowGUI_B.y_j = -x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:137' */
      StateFlowGUI_B.y_p_h = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 19.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 20.0 * A / 2.0)) {
      /* '<S32>:1:139' */
      /*  14 */
      /* '<S32>:1:140' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 19.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:141' */
      StateFlowGUI_B.x_o = 6.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:142' */
      StateFlowGUI_B.x_p_n = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:143' */
      StateFlowGUI_B.y_j = -3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:144' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 20.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 21.0 * A / 2.0)) {
      /* '<S32>:1:146' */
      /*  15 */
      /* '<S32>:1:147' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 20.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:148' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:149' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:150' */
      StateFlowGUI_B.y_j = -3.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:151' */
      StateFlowGUI_B.y_p_h = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 21.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 23.0 * A / 2.0)) {
      /* '<S32>:1:153' */
      /*  16 */
      /* '<S32>:1:154' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 21.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:155' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:156' */
      StateFlowGUI_B.x_p_n = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:157' */
      StateFlowGUI_B.y_j = -2.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:158' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 23.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 25.0 * A / 2.0)) {
      /* '<S32>:1:160' */
      /*  17 */
      /* '<S32>:1:161' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 23.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:162' */
      StateFlowGUI_B.x_o = 4.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:163' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:164' */
      StateFlowGUI_B.y_j = -2.0 * StateFlowGUI_P.AlzataC1_Value_b - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:165' */
      StateFlowGUI_B.y_p_h = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 25.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 27.0 * A / 2.0)) {
      /* '<S32>:1:167' */
      /*  18 */
      /* '<S32>:1:168' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 25.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:169' */
      StateFlowGUI_B.x_o = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value_b + 4.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:170' */
      StateFlowGUI_B.x_p_n = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:171' */
      StateFlowGUI_B.y_j = -5.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:172' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 27.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 28.0 * A / 2.0)) {
      /* '<S32>:1:174' */
      /*  19 */
      /* '<S32>:1:175' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 27.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:176' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:177' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:178' */
      StateFlowGUI_B.y_j = -5.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:179' */
      StateFlowGUI_B.y_p_h = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 28.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 29.0 * A / 2.0)) {
      /* '<S32>:1:181' */
      /*  20 */
      /* '<S32>:1:182' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 28.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:183' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:184' */
      StateFlowGUI_B.x_p_n = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:185' */
      StateFlowGUI_B.y_j = -4.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:186' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 29.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 31.0 * A / 2.0)) {
      /* '<S32>:1:188' */
      /*  21 */
      /* '<S32>:1:189' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 29.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:190' */
      StateFlowGUI_B.x_o = 6.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:191' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:192' */
      StateFlowGUI_B.y_j = -4.0 * StateFlowGUI_P.AlzataC1_Value_b - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:193' */
      StateFlowGUI_B.y_p_h = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 31.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 32.0 * A / 2.0)) {
      /* '<S32>:1:195' */
      /*  22 */
      /* '<S32>:1:196' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 31.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:197' */
      StateFlowGUI_B.x_o = 6.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:198' */
      StateFlowGUI_B.x_p_n = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:199' */
      StateFlowGUI_B.y_j = -7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:200' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 32.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 33.0 * A / 2.0)) {
      /* '<S32>:1:202' */
      /*  23 */
      /* '<S32>:1:203' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 32.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:204' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:205' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:206' */
      StateFlowGUI_B.y_j = -7.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:207' */
      StateFlowGUI_B.y_p_h = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 33.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 35.0 * A / 2.0)) {
      /* '<S32>:1:209' */
      /*  24 */
      /* '<S32>:1:210' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 33.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:211' */
      StateFlowGUI_B.x_o = 7.0 * StateFlowGUI_P.AlzataC1_Value_b - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:212' */
      StateFlowGUI_B.x_p_n = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:213' */
      StateFlowGUI_B.y_j = -6.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:214' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 35.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 36.0 * A / 2.0)) {
      /* '<S32>:1:216' */
      /*  25 */
      /* '<S32>:1:217' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 35.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:218' */
      StateFlowGUI_B.x_o = 4.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:219' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:220' */
      StateFlowGUI_B.y_j = -6.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:221' */
      StateFlowGUI_B.y_p_h = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 36.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 37.0 * A / 2.0)) {
      /* '<S32>:1:223' */
      /*  26 */
      /* '<S32>:1:224' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 36.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:225' */
      StateFlowGUI_B.x_o = 4.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:226' */
      StateFlowGUI_B.x_p_n = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:227' */
      StateFlowGUI_B.y_j = -7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:228' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 37.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 39.0 * A / 2.0)) {
      /* '<S32>:1:230' */
      /*  27 */
      /* '<S32>:1:231' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 37.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:232' */
      StateFlowGUI_B.x_o = 5.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:233' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:234' */
      StateFlowGUI_B.y_j = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value_b + -7.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:235' */
      StateFlowGUI_B.y_p_h = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 39.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 41.0 * A / 2.0)) {
      /* '<S32>:1:237' */
      /*  28 */
      /* '<S32>:1:238' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 39.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:239' */
      StateFlowGUI_B.x_o = 5.0 * StateFlowGUI_P.AlzataC1_Value_b - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:240' */
      StateFlowGUI_B.x_p_n = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:241' */
      StateFlowGUI_B.y_j = -4.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:242' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 41.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 43.0 * A / 2.0)) {
      /* '<S32>:1:244' */
      /*  29 */
      /* '<S32>:1:245' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 41.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:246' */
      StateFlowGUI_B.x_o = 2.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:247' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:248' */
      StateFlowGUI_B.y_j = -4.0 * StateFlowGUI_P.AlzataC1_Value_b - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:249' */
      StateFlowGUI_B.y_p_h = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 43.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 44.0 * A / 2.0)) {
      /* '<S32>:1:251' */
      /*  30 */
      /* '<S32>:1:252' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 43.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:253' */
      StateFlowGUI_B.x_o = 2.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:254' */
      StateFlowGUI_B.x_p_n = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:255' */
      StateFlowGUI_B.y_j = -7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:256' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 44.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 45.0 * A / 2.0)) {
      /* '<S32>:1:258' */
      /*  31 */
      /* '<S32>:1:259' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 44.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:260' */
      StateFlowGUI_B.x_o = 3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:261' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:262' */
      StateFlowGUI_B.y_j = -7.0 * StateFlowGUI_P.AlzataC1_Value_b + B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:263' */
      StateFlowGUI_B.y_p_h = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 45.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 47.0 * A / 2.0)) {
      /* '<S32>:1:265' */
      /*  32 */
      /* '<S32>:1:266' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 45.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:267' */
      StateFlowGUI_B.x_o = 3.0 * StateFlowGUI_P.AlzataC1_Value_b - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:268' */
      StateFlowGUI_B.x_p_n = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:269' */
      StateFlowGUI_B.y_j = -6.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:270' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 47.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 48.0 * A / 2.0)) {
      /* '<S32>:1:272' */
      /*  33 */
      /* '<S32>:1:273' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 47.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:274' */
      StateFlowGUI_B.x_o = 0.0;

      /* '<S32>:1:275' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:276' */
      StateFlowGUI_B.y_j = -6.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:277' */
      StateFlowGUI_B.y_p_h = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 48.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 49.0 * A / 2.0)) {
      /* '<S32>:1:279' */
      /*  34 */
      /* '<S32>:1:280' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 48.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:281' */
      StateFlowGUI_B.x_o = B * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:282' */
      StateFlowGUI_B.x_p_n = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:283' */
      StateFlowGUI_B.y_j = -7.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:284' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 49.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 51.0 * A / 2.0)) {
      /* '<S32>:1:286' */
      /*  35 */
      /* '<S32>:1:287' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 49.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:288' */
      StateFlowGUI_B.x_o = StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:289' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:290' */
      StateFlowGUI_B.y_j = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value_b + -7.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:291' */
      StateFlowGUI_B.y_p_h = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 51.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 52.0 * A / 2.0)) {
      /* '<S32>:1:293' */
      /*  36 */
      /* '<S32>:1:294' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 51.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:295' */
      StateFlowGUI_B.x_o = StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:296' */
      StateFlowGUI_B.x_p_n = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:297' */
      StateFlowGUI_B.y_j = -4.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:298' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 52.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 53.0 * A / 2.0)) {
      /* '<S32>:1:300' */
      /*  37 */
      /* '<S32>:1:301' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 52.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:302' */
      StateFlowGUI_B.x_o = 0.0;

      /* '<S32>:1:303' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:304' */
      StateFlowGUI_B.y_j = -4.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:305' */
      StateFlowGUI_B.y_p_h = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 53.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 55.0 * A / 2.0)) {
      /* '<S32>:1:307' */
      /*  38 */
      /* '<S32>:1:308' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 53.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:309' */
      StateFlowGUI_B.x_o = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:310' */
      StateFlowGUI_B.x_p_n = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:311' */
      StateFlowGUI_B.y_j = -5.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:312' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 55.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 57.0 * A / 2.0)) {
      /* '<S32>:1:314' */
      /*  39 */
      /* '<S32>:1:315' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 55.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:316' */
      StateFlowGUI_B.x_o = 3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:317' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:318' */
      StateFlowGUI_B.y_j = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value_b + -5.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:319' */
      StateFlowGUI_B.y_p_h = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 57.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 59.0 * A / 2.0)) {
      /* '<S32>:1:321' */
      /*  40 */
      /* '<S32>:1:322' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 57.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:323' */
      StateFlowGUI_B.x_o = 3.0 * StateFlowGUI_P.AlzataC1_Value_b - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:324' */
      StateFlowGUI_B.x_p_n = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;

      /* '<S32>:1:325' */
      StateFlowGUI_B.y_j = -2.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:326' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 59.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 60.0 * A / 2.0)) {
      /* '<S32>:1:328' */
      /*  41 */
      /* '<S32>:1:329' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 59.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:330' */
      StateFlowGUI_B.x_o = 0.0;

      /* '<S32>:1:331' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:332' */
      StateFlowGUI_B.y_j = -2.0 * StateFlowGUI_P.AlzataC1_Value_b - B *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:333' */
      StateFlowGUI_B.y_p_h = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);
    } else if ((StateFlowGUI_B.Sum2_b > 60.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 61.0 * A / 2.0)) {
      /* '<S32>:1:335' */
      /*  42 */
      /* '<S32>:1:336' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 60.0 * A / 2.0) / (A / 2.0),
                           &B, &F);

      /* '<S32>:1:337' */
      StateFlowGUI_B.x_o = B * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:338' */
      StateFlowGUI_B.x_p_n = F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:339' */
      StateFlowGUI_B.y_j = -3.0 * StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:340' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b > 61.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 63.0 * A / 2.0)) {
      /* '<S32>:1:342' */
      /*  43 */
      /* '<S32>:1:343' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 61.0 * A / 2.0) / A, &x2, &B);

      /* '<S32>:1:344' */
      StateFlowGUI_B.x_o = StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:345' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:346' */
      StateFlowGUI_B.y_j = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value_b + -3.0 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:347' */
      StateFlowGUI_B.y_p_h = B * 3.0 * StateFlowGUI_P.AlzataC1_Value_b / A;
    } else if ((StateFlowGUI_B.Sum2_b > 63.0 * A / 2.0) &&
               (StateFlowGUI_B.Sum2_b <= 64.0 * A / 2.0)) {
      /* '<S32>:1:349' */
      /*  44 */
      /* '<S32>:1:350' */
      StateFlowGUI_ldm7t_f((StateFlowGUI_B.Sum2_b - 63.0 * A / 2.0) / (A / 2.0),
                           &x2, &F);

      /* '<S32>:1:351' */
      StateFlowGUI_B.x_o = StateFlowGUI_P.AlzataC1_Value_b - x2 *
        StateFlowGUI_P.AlzataC1_Value_b;

      /* '<S32>:1:352' */
      StateFlowGUI_B.x_p_n = -F * StateFlowGUI_P.AlzataC1_Value_b / (A / 2.0);

      /* '<S32>:1:353' */
      StateFlowGUI_B.y_j = 0.0;

      /* '<S32>:1:354' */
      StateFlowGUI_B.y_p_h = 0.0;
    } else {
      /* '<S32>:1:357' */
      StateFlowGUI_B.x_o = 0.0;

      /* '<S32>:1:358' */
      StateFlowGUI_B.x_p_n = 0.0;

      /* '<S32>:1:359' */
      StateFlowGUI_B.y_j = 0.0;

      /* '<S32>:1:360' */
      StateFlowGUI_B.y_p_h = 0.0;
    }

    /* End of MATLAB Function: '<S27>/g' */

    /* MATLAB Function: '<S27>/Cerchi Tangenti' incorporates:
     *  Constant: '<S27>/Constant3'
     */
    /* MATLAB Function 'Movimento Braccia/Subsystem/Cerchi Tangenti': '<S29>:1' */
    /* '<S29>:1:4' */
    A = 100.0 * StateFlowGUI_P.Constant3_Value_j / 2.0;

    /* '<S29>:1:5' */
    /* '<S29>:1:6' */
    B = (StateFlowGUI_P.Constant3_Value_j - 0.025) * 100.0 / 2.0;

    /* '<S29>:1:7' */
    /* '<S29>:1:8' */
    x3 = ((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025) * 100.0 / 2.0;

    /* '<S29>:1:9' */
    /* '<S29>:1:10' */
    x4 = (((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025) - 0.025) * 100.0 /
      2.0;

    /* '<S29>:1:11' */
    /* '<S29>:1:12' */
    T5 = ((((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025) - 0.025) - 0.025)
      * 100.0 / 2.0;

    /* '<S29>:1:14' */
    /* '<S29>:1:15' */
    /* '<S29>:1:16' */
    /* '<S29>:1:17' */
    /* '<S29>:1:18' */
    if ((StateFlowGUI_B.Sum2_b > 0.0) && (StateFlowGUI_B.Sum2_b <= A)) {
      /* '<S29>:1:20' */
      /*  1 */
      /* '<S29>:1:21' */
      StateFlowGUI_ldm7t(StateFlowGUI_B.Sum2_b / A, &x2, &F);

      /* '<S29>:1:22' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S29>:1:23' */
      F = F * 2.0 * 3.1415926535897931 / A;

      /* '<S29>:1:24' */
      StateFlowGUI_B.xct_a = StateFlowGUI_P.Constant3_Value_j / 2.0 * cos
        (1.5707963267948966 - x2);

      /* '<S29>:1:25' */
      StateFlowGUI_B.yct_g = StateFlowGUI_P.Constant3_Value_j / 2.0 * sin
        (1.5707963267948966 - x2) - StateFlowGUI_P.Constant3_Value_j / 2.0;

      /* '<S29>:1:26' */
      StateFlowGUI_B.xct_p_l = StateFlowGUI_P.Constant3_Value_j / 2.0 * sin
        (1.5707963267948966 - x2) * F;

      /* '<S29>:1:27' */
      StateFlowGUI_B.yct_p_i = -StateFlowGUI_P.Constant3_Value_j / 2.0 * cos
        (1.5707963267948966 - x2) * F;
    } else if ((StateFlowGUI_B.Sum2_b > A) && (StateFlowGUI_B.Sum2_b <= A + B))
    {
      /* '<S29>:1:29' */
      /*  2 */
      /* '<S29>:1:30' */
      StateFlowGUI_ldm7t((StateFlowGUI_B.Sum2_b - A) / B, &x2, &F);

      /* '<S29>:1:31' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S29>:1:32' */
      F = F * 2.0 * 3.1415926535897931 / B;

      /* '<S29>:1:33' */
      StateFlowGUI_B.xct_a = (StateFlowGUI_P.Constant3_Value_j - 0.025) / 2.0 *
        cos(1.5707963267948966 - x2);

      /* '<S29>:1:34' */
      StateFlowGUI_B.yct_g = (StateFlowGUI_P.Constant3_Value_j - 0.025) / 2.0 *
        sin(1.5707963267948966 - x2) - (StateFlowGUI_P.Constant3_Value_j - 0.025)
        / 2.0;

      /* '<S29>:1:35' */
      StateFlowGUI_B.xct_p_l = (StateFlowGUI_P.Constant3_Value_j - 0.025) / 2.0 *
        sin(1.5707963267948966 - x2) * F;

      /* '<S29>:1:36' */
      StateFlowGUI_B.yct_p_i = -(StateFlowGUI_P.Constant3_Value_j - 0.025) / 2.0
        * cos(1.5707963267948966 - x2) * F;
    } else if ((StateFlowGUI_B.Sum2_b > A + B) && (StateFlowGUI_B.Sum2_b <= (A +
      B) + x3)) {
      /* '<S29>:1:38' */
      /*  3 */
      /* '<S29>:1:39' */
      StateFlowGUI_ldm7t(((StateFlowGUI_B.Sum2_b - A) - B) / x3, &x2, &F);

      /* '<S29>:1:40' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S29>:1:41' */
      F = F * 2.0 * 3.1415926535897931 / x3;

      /* '<S29>:1:42' */
      StateFlowGUI_B.xct_a = ((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S29>:1:43' */
      StateFlowGUI_B.yct_g = ((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - x2) -
        ((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025) / 2.0;

      /* '<S29>:1:44' */
      StateFlowGUI_B.xct_p_l = ((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S29>:1:45' */
      StateFlowGUI_B.yct_p_i = -((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;
    } else if ((StateFlowGUI_B.Sum2_b > (A + B) + x3) && (StateFlowGUI_B.Sum2_b <=
                ((A + B) + x3) + x4)) {
      /* '<S29>:1:47' */
      /*  4 */
      /* '<S29>:1:48' */
      StateFlowGUI_ldm7t((((StateFlowGUI_B.Sum2_b - A) - B) - x3) / x4, &x2, &F);

      /* '<S29>:1:49' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S29>:1:50' */
      F = F * 2.0 * 3.1415926535897931 / x4;

      /* '<S29>:1:51' */
      StateFlowGUI_B.xct_a = (((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S29>:1:52' */
      StateFlowGUI_B.yct_g = (((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) -
        (((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025) - 0.025) / 2.0;

      /* '<S29>:1:53' */
      StateFlowGUI_B.xct_p_l = (((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S29>:1:54' */
      StateFlowGUI_B.yct_p_i = -(((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;
    } else if ((StateFlowGUI_B.Sum2_b > ((A + B) + x3) + x4) &&
               (StateFlowGUI_B.Sum2_b <= (((A + B) + x3) + x4) + T5)) {
      /* '<S29>:1:56' */
      /*  5 */
      /* '<S29>:1:57' */
      StateFlowGUI_ldm7t(((((StateFlowGUI_B.Sum2_b - A) - B) - x3) - x4) / T5,
                         &x2, &F);

      /* '<S29>:1:58' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S29>:1:59' */
      F = F * 2.0 * 3.1415926535897931 / T5;

      /* '<S29>:1:60' */
      StateFlowGUI_B.xct_a = ((((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S29>:1:61' */
      StateFlowGUI_B.yct_g = ((((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) -
        ((((StateFlowGUI_P.Constant3_Value_j - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0;

      /* '<S29>:1:62' */
      StateFlowGUI_B.xct_p_l = ((((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S29>:1:63' */
      StateFlowGUI_B.yct_p_i = -((((StateFlowGUI_P.Constant3_Value_j - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;
    } else {
      /* '<S29>:1:65' */
      StateFlowGUI_B.xct_a = 0.0;

      /* '<S29>:1:66' */
      StateFlowGUI_B.xct_p_l = 0.0;

      /* '<S29>:1:67' */
      StateFlowGUI_B.yct_g = 0.0;

      /* '<S29>:1:68' */
      StateFlowGUI_B.yct_p_i = 0.0;
    }

    /* End of MATLAB Function: '<S27>/Cerchi Tangenti' */

    /* MATLAB Function: '<S27>/spirale' incorporates:
     *  Constant: '<S27>/N giri'
     *  Constant: '<S27>/Periodo'
     *  Constant: '<S27>/Rmax'
     *  Constant: '<S27>/Rmin'
     *  Constant: '<S27>/Tempo spost. iniziale'
     */
    /* MATLAB Function 'Movimento Braccia/Subsystem/spirale': '<S33>:1' */
    /* '<S33>:1:3' */
    /* '<S33>:1:4' */
    if ((StateFlowGUI_B.Sum2_b >= 0.0) && (StateFlowGUI_B.Sum2_b <=
         StateFlowGUI_P.Tempospostiniziale_Value_f)) {
      /* '<S33>:1:5' */
      /* '<S33>:1:6' */
      StateFlowGUI_ldm7t_b(StateFlowGUI_B.Sum2_b /
                           StateFlowGUI_P.Tempospostiniziale_Value_f, &x2, &F);

      /* '<S33>:1:7' */
      StateFlowGUI_B.xs_pl = x2 * StateFlowGUI_P.Rmin_Value_c;

      /* '<S33>:1:8' */
      StateFlowGUI_B.xs_p_e = F * StateFlowGUI_P.Rmin_Value_c /
        StateFlowGUI_P.Tempospostiniziale_Value_f;

      /* '<S33>:1:9' */
      StateFlowGUI_B.ys_j = 0.0;

      /* '<S33>:1:10' */
      StateFlowGUI_B.ys_p_e = 0.0;
    } else if ((StateFlowGUI_B.Sum2_b >
                StateFlowGUI_P.Tempospostiniziale_Value_f) &&
               (StateFlowGUI_B.Sum2_b <=
                StateFlowGUI_P.Tempospostiniziale_Value_f +
                StateFlowGUI_P.Periodo_Value_l)) {
      /* '<S33>:1:11' */
      /* '<S33>:1:12' */
      StateFlowGUI_ldm7t_b((StateFlowGUI_B.Sum2_b -
                            StateFlowGUI_P.Tempospostiniziale_Value_f) /
                           StateFlowGUI_P.Periodo_Value_l, &x2, &F);

      /* '<S33>:1:13' */
      A = x2 * StateFlowGUI_P.Rmax_Value_b + StateFlowGUI_P.Rmin_Value_c;

      /* '<S33>:1:14' */
      B = F * StateFlowGUI_P.Rmax_Value_b / StateFlowGUI_P.Periodo_Value_l;

      /* '<S33>:1:15' */
      x2 = x2 * StateFlowGUI_P.Ngiri_Value_a * 2.0 * 3.1415926535897931;

      /* '<S33>:1:16' */
      F = F * StateFlowGUI_P.Ngiri_Value_a * 2.0 * 3.1415926535897931 /
        StateFlowGUI_P.Periodo_Value_l;

      /* '<S33>:1:17' */
      StateFlowGUI_B.xs_pl = A * cos(x2);

      /* '<S33>:1:18' */
      StateFlowGUI_B.ys_j = A * sin(x2);

      /* '<S33>:1:19' */
      StateFlowGUI_B.xs_p_e = -A * sin(x2) * F + B * cos(x2);

      /* '<S33>:1:20' */
      StateFlowGUI_B.ys_p_e = A * cos(x2) * F + B * sin(x2);
    } else {
      /* '<S33>:1:22' */
      StateFlowGUI_B.xs_pl = cos(StateFlowGUI_P.Ngiri_Value_a * 2.0 *
        3.1415926535897931) * (StateFlowGUI_P.Rmin_Value_c +
        StateFlowGUI_P.Rmax_Value_b);

      /* '<S33>:1:23' */
      StateFlowGUI_B.xs_p_e = 0.0;

      /* '<S33>:1:24' */
      StateFlowGUI_B.ys_j = sin(StateFlowGUI_P.Ngiri_Value_a * 2.0 *
        3.1415926535897931) * (StateFlowGUI_P.Rmin_Value_c +
        StateFlowGUI_P.Rmax_Value_b);

      /* '<S33>:1:25' */
      StateFlowGUI_B.ys_p_e = 0.0;
    }

    /* End of MATLAB Function: '<S27>/spirale' */

    /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
     *  Constant: '<S4>/selettore'
     */
    switch ((int32_T)StateFlowGUI_P.selettore_Value_d) {
     case 1:
      StateFlowGUI_B.MultiportSwitch_o[0] = StateFlowGUI_B.xq_pg;
      StateFlowGUI_B.MultiportSwitch_o[1] = StateFlowGUI_B.yq_o;
      StateFlowGUI_B.MultiportSwitch_o[2] = StateFlowGUI_B.xq_p_h;
      StateFlowGUI_B.MultiportSwitch_o[3] = StateFlowGUI_B.yq_p_e;
      break;

     case 2:
      StateFlowGUI_B.MultiportSwitch_o[0] = StateFlowGUI_B.xc_k;
      StateFlowGUI_B.MultiportSwitch_o[1] = StateFlowGUI_B.yc_g;
      StateFlowGUI_B.MultiportSwitch_o[2] = StateFlowGUI_B.xc_p_c;
      StateFlowGUI_B.MultiportSwitch_o[3] = StateFlowGUI_B.yc_p_f;
      break;

     case 3:
      StateFlowGUI_B.MultiportSwitch_o[0] = StateFlowGUI_B.x_o;
      StateFlowGUI_B.MultiportSwitch_o[1] = StateFlowGUI_B.y_j;
      StateFlowGUI_B.MultiportSwitch_o[2] = StateFlowGUI_B.x_p_n;
      StateFlowGUI_B.MultiportSwitch_o[3] = StateFlowGUI_B.y_p_h;
      break;

     case 4:
      StateFlowGUI_B.MultiportSwitch_o[0] = StateFlowGUI_B.xct_a;
      StateFlowGUI_B.MultiportSwitch_o[1] = StateFlowGUI_B.yct_g;
      StateFlowGUI_B.MultiportSwitch_o[2] = StateFlowGUI_B.xct_p_l;
      StateFlowGUI_B.MultiportSwitch_o[3] = StateFlowGUI_B.yct_p_i;
      break;

     default:
      StateFlowGUI_B.MultiportSwitch_o[0] = StateFlowGUI_B.xs_pl;
      StateFlowGUI_B.MultiportSwitch_o[1] = StateFlowGUI_B.ys_j;
      StateFlowGUI_B.MultiportSwitch_o[2] = StateFlowGUI_B.xs_p_e;
      StateFlowGUI_B.MultiportSwitch_o[3] = StateFlowGUI_B.ys_p_e;
      break;
    }

    /* End of MultiPortSwitch: '<S27>/Multiport Switch' */

    /* Memory: '<S4>/Memory' */
    StateFlowGUI_B.Memory_h = StateFlowGUI_DW.Memory_PreviousInput_e;

    /* Memory: '<S4>/Memory1' */
    StateFlowGUI_B.Memory1 = StateFlowGUI_DW.Memory1_PreviousInput;

    /* Sum: '<S4>/Sum12' */
    StateFlowGUI_B.Sum12_a = StateFlowGUI_B.convert10_d - StateFlowGUI_B.OffB;

    /* MATLAB Function: '<S4>/Asse B conv brac1' */
    StateFlowGUI_AsseBconvbrac1(StateFlowGUI_B.Sum12_a,
      &StateFlowGUI_B.sf_AsseBconvbrac1_f);

    /* Sum: '<S4>/Sum2' incorporates:
     *  Constant: '<S4>/Constant'
     */
    StateFlowGUI_B.Theta1Reale = StateFlowGUI_P.Constant_Value_eg +
      StateFlowGUI_B.sf_AsseBconvbrac1_f.pos_B_conv;

    /* Sum: '<S4>/Sum4' */
    StateFlowGUI_B.Sum4_n = StateFlowGUI_B.convert_g - StateFlowGUI_B.OffA;

    /* MATLAB Function: '<S4>/Asse A conv brac' */
    StateFlowGUI_AsseAconvbrac(StateFlowGUI_B.Sum4_n,
      &StateFlowGUI_B.sf_AsseAconvbrac);

    /* Sum: '<S4>/Sum3' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    StateFlowGUI_B.theta2Reale = StateFlowGUI_P.Constant1_Value_f +
      StateFlowGUI_B.sf_AsseAconvbrac.pos_A_conv;

    /* MATLAB Function: '<S4>/Cinematica Inversa1' */
    /* MATLAB Function 'Movimento Braccia/Cinematica Inversa1': '<S22>:1' */
    if (StateFlowGUI_B.Sum2_b == 0.0) {
      /* '<S22>:1:3' */
      /* '<S22>:1:5' */
      /* '<S22>:1:6' */
      /* '<S22>:1:8' */
      A = sin(StateFlowGUI_B.theta2Reale) - sin(StateFlowGUI_B.Theta1Reale);
      J_p_idx_1 = -0.18 - (cos(StateFlowGUI_B.theta2Reale) - cos
                           (StateFlowGUI_B.Theta1Reale)) * 0.25;
      A = A * A * 0.0625 + J_p_idx_1 * J_p_idx_1;

      /* '<S22>:1:9' */
      J_p_idx_3 = -0.18 - (cos(StateFlowGUI_B.theta2Reale) - cos
                           (StateFlowGUI_B.Theta1Reale)) * 0.25;
      B = ((-0.18 - (cos(StateFlowGUI_B.theta2Reale) - cos
                     (StateFlowGUI_B.Theta1Reale)) * 0.25) * ((sin
             (StateFlowGUI_B.theta2Reale) - sin(StateFlowGUI_B.Theta1Reale)) *
            0.25) * (-0.18 - 0.5 * cos(StateFlowGUI_B.theta2Reale)) + (sin
            (StateFlowGUI_B.theta2Reale) - sin(StateFlowGUI_B.Theta1Reale)) *
           -0.01125 * (cos(StateFlowGUI_B.theta2Reale) + cos
                       (StateFlowGUI_B.Theta1Reale))) - 0.5 * sin
        (StateFlowGUI_B.theta2Reale) * (J_p_idx_3 * J_p_idx_3);

      /* '<S22>:1:12' */
      x4 = cos(StateFlowGUI_B.theta2Reale) + cos(StateFlowGUI_B.Theta1Reale);
      x5 = -0.18 - (cos(StateFlowGUI_B.theta2Reale) - cos
                    (StateFlowGUI_B.Theta1Reale)) * 0.25;

      /*  Posizione Y end-effector */
      /* '<S22>:1:16' */
      A = (sqrt(B * B - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
                (StateFlowGUI_B.theta2Reale) - cos(StateFlowGUI_B.Theta1Reale)) *
               0.25) * ((cos(StateFlowGUI_B.theta2Reale) + cos
                         (StateFlowGUI_B.Theta1Reale)) * 0.0225) * (-0.18 - 0.5 *
               cos(StateFlowGUI_B.theta2Reale))) + (0.045 * cos
              (StateFlowGUI_B.theta2Reale) + 0.0081) * (x5 * x5)) * (4.0 * A)) +
           -B) / (2.0 * A);

      /*  Posizione X end-effector */
      /* '<S22>:1:18' */
      StateFlowGUI_B.x0_o = (A * 0.25 * (sin(StateFlowGUI_B.theta2Reale) - sin
        (StateFlowGUI_B.Theta1Reale)) - (cos(StateFlowGUI_B.theta2Reale) + cos
        (StateFlowGUI_B.Theta1Reale)) * 0.0225) / (-0.18 - (cos
        (StateFlowGUI_B.theta2Reale) - cos(StateFlowGUI_B.Theta1Reale)) * 0.25);
    } else {
      /* '<S22>:1:20' */
      StateFlowGUI_B.x0_o = StateFlowGUI_B.Memory_h;

      /* '<S22>:1:21' */
      A = StateFlowGUI_B.Memory1;
    }

    StateFlowGUI_B.y0_e = A;

    /* End of MATLAB Function: '<S4>/Cinematica Inversa1' */

    /* Sum: '<S4>/Sum' */
    StateFlowGUI_B.Sum_e = StateFlowGUI_B.MultiportSwitch_o[0] +
      StateFlowGUI_B.x0_o;

    /* Sum: '<S4>/Sum1' */
    StateFlowGUI_B.Sum1_g = StateFlowGUI_B.MultiportSwitch_o[1] +
      StateFlowGUI_B.y0_e;

    /* MATLAB Function: '<S4>/Cinematica Inversa' */
    StateFlowGUI_CinematicaInversa(StateFlowGUI_B.Sum_e, StateFlowGUI_B.Sum1_g,
      &StateFlowGUI_B.sf_CinematicaInversa_a);

    /* Sum: '<S4>/Sum14' */
    StateFlowGUI_B.Sum14 = StateFlowGUI_B.sf_CinematicaInversa_a.theta1 -
      StateFlowGUI_B.Theta1Reale;

    /* Sum: '<S4>/Sum5' */
    StateFlowGUI_B.Sum5_g = StateFlowGUI_B.sf_CinematicaInversa_a.theta2 -
      StateFlowGUI_B.theta2Reale;

    /* MATLAB Function: '<S4>/Cinematica Inversa vel' */
    x2 = StateFlowGUI_B.MultiportSwitch_o[2];
    B = StateFlowGUI_B.MultiportSwitch_o[3];

    /* MATLAB Function 'Movimento Braccia/Cinematica Inversa vel': '<S21>:1' */
    /* '<S21>:1:3' */
    /* '<S21>:1:4' */
    /* '<S21>:1:6' */
    /* '<S21>:1:8' */
    /* '<S21>:1:10' */
    A = (StateFlowGUI_B.Sum1_g - 0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) -
      (StateFlowGUI_B.Sum1_g - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) * ((StateFlowGUI_B.Sum_e
      + 0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) /
      ((StateFlowGUI_B.Sum_e - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa_a.theta2));

    /* '<S21>:1:12' */
    x4 = (((StateFlowGUI_B.Sum_e + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) * (-0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) +
          (StateFlowGUI_B.Sum1_g - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) * (0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa_a.theta1))) / A;

    /* '<S21>:1:14' */
    A = ((StateFlowGUI_B.Sum1_g - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) * (-0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) *
         ((StateFlowGUI_B.Sum_e + 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) /
         ((StateFlowGUI_B.Sum_e - 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) +
         ((StateFlowGUI_B.Sum_e + 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa_a.theta1)) * (0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa_a.theta2))) / A;

    /* '<S21>:1:16' */
    /* '<S21>:1:18' */
    /* '<S21>:1:20' */
    J[0] = -(StateFlowGUI_B.Sum1_g - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) /
      ((StateFlowGUI_B.Sum_e - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) * x4;
    J[2] = (-(StateFlowGUI_B.Sum1_g - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) /
            ((StateFlowGUI_B.Sum_e - 0.09) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) * A - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) +
      (StateFlowGUI_B.Sum1_g - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) / ((StateFlowGUI_B.Sum_e
      - 0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa_a.theta2)) *
      (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa_a.theta2));
    J[1] = x4;
    J[3] = A;

    /* '<S21>:1:22' */
    if (fabs(J[1]) > fabs(J[0])) {
      A = J[0] / J[1];
      x4 = 1.0 / (A * J[3] - J[2]);
      J_p_idx_0 = J[3] / J[1] * x4;
      J_p_idx_1 = -x4;
      x5 = -J[2] / J[1] * x4;
      J_p_idx_3 = A * x4;
    } else {
      A = J[1] / J[0];
      x4 = 1.0 / (J[3] - A * J[2]);
      J_p_idx_0 = J[3] / J[0] * x4;
      J_p_idx_1 = -A * x4;
      x5 = -J[2] / J[0] * x4;
      J_p_idx_3 = x4;
    }

    F = J_p_idx_0 * x2;
    theta_p[0] = F;
    F = theta_p[0];
    F += x5 * B;
    theta_p[0] = F;
    F = J_p_idx_1 * x2;
    theta_p[1] = F;
    F = theta_p[1];
    F += J_p_idx_3 * B;
    theta_p[1] = F;

    /* '<S21>:1:23' */
    /* '<S21>:1:24' */
    StateFlowGUI_B.theta1_p_i = theta_p[0];
    StateFlowGUI_B.theta2_p_p = theta_p[1];

    /* End of MATLAB Function: '<S4>/Cinematica Inversa vel' */

    /* S-Function (xpcethercatpdorx): '<S28>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S28>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[28];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S28>/Velocity B' */
    StateFlowGUI_B.VelocityB_p = StateFlowGUI_B.EtherCATPDOReceive15_l;

    /* MATLAB Function: '<S28>/Vel Asse B conv' */
    StateFlowGUI_VelAsseBconv(StateFlowGUI_B.VelocityB_p,
      &StateFlowGUI_B.sf_VelAsseBconv_o);

    /* Sum: '<S4>/Sum6' */
    StateFlowGUI_B.Sum6_n = StateFlowGUI_B.sf_VelAsseBconv_o.vel_B_conv -
      StateFlowGUI_B.theta1_p_i;

    /* Gain: '<S4>/Coppia theta 1 vel' */
    StateFlowGUI_B.Coppiatheta1vel = StateFlowGUI_P.Coppiatheta1vel_Gain *
      StateFlowGUI_B.Sum6_n;

    /* S-Function (xpcethercatpdorx): '<S28>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S28>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[29];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S28>/Velocity A' */
    StateFlowGUI_B.VelocityA_a = StateFlowGUI_B.EtherCATPDOReceive14_c;

    /* MATLAB Function: '<S28>/Vel Asse A conv' */
    StateFlowGUI_VelAsseAconv(StateFlowGUI_B.VelocityA_a,
      &StateFlowGUI_B.sf_VelAsseAconv_o);

    /* Sum: '<S4>/Sum17' */
    StateFlowGUI_B.Sum17 = StateFlowGUI_B.sf_VelAsseAconv_o.vel_A_conv -
      StateFlowGUI_B.theta2_p_p;

    /* Gain: '<S4>/Coppia theta 2 vel' */
    StateFlowGUI_B.Coppiatheta2vel = StateFlowGUI_P.Coppiatheta2vel_Gain *
      StateFlowGUI_B.Sum17;

    /* Gain: '<S24>/Derivative Gain' */
    StateFlowGUI_B.DerivativeGain = StateFlowGUI_P.PIDController1_D *
      StateFlowGUI_B.Sum5_g;

    /* DiscreteIntegrator: '<S24>/Filter' */
    StateFlowGUI_B.Filter = StateFlowGUI_DW.Filter_DSTATE;

    /* Sum: '<S24>/SumD' */
    StateFlowGUI_B.SumD = StateFlowGUI_B.DerivativeGain - StateFlowGUI_B.Filter;

    /* Gain: '<S24>/Filter Coefficient' */
    StateFlowGUI_B.FilterCoefficient = StateFlowGUI_P.PIDController1_N *
      StateFlowGUI_B.SumD;

    /* Gain: '<S24>/Integral Gain' */
    StateFlowGUI_B.IntegralGain = StateFlowGUI_P.PIDController1_I *
      StateFlowGUI_B.Sum5_g;

    /* DiscreteIntegrator: '<S24>/Integrator' */
    StateFlowGUI_B.Integrator = StateFlowGUI_DW.Integrator_DSTATE;

    /* Gain: '<S24>/Proportional Gain' */
    StateFlowGUI_B.ProportionalGain = StateFlowGUI_P.PIDController1_P *
      StateFlowGUI_B.Sum5_g;

    /* Sum: '<S24>/Sum' */
    StateFlowGUI_B.Sum_h = (StateFlowGUI_B.ProportionalGain +
      StateFlowGUI_B.Integrator) + StateFlowGUI_B.FilterCoefficient;

    /* Gain: '<S25>/Derivative Gain' */
    StateFlowGUI_B.DerivativeGain_b = StateFlowGUI_P.PIDController2_D *
      StateFlowGUI_B.Sum14;

    /* DiscreteIntegrator: '<S25>/Filter' */
    StateFlowGUI_B.Filter_d = StateFlowGUI_DW.Filter_DSTATE_d;

    /* Sum: '<S25>/SumD' */
    StateFlowGUI_B.SumD_e = StateFlowGUI_B.DerivativeGain_b -
      StateFlowGUI_B.Filter_d;

    /* Gain: '<S25>/Filter Coefficient' */
    StateFlowGUI_B.FilterCoefficient_g = StateFlowGUI_P.PIDController2_N *
      StateFlowGUI_B.SumD_e;

    /* Gain: '<S25>/Integral Gain' */
    StateFlowGUI_B.IntegralGain_f = StateFlowGUI_P.PIDController2_I *
      StateFlowGUI_B.Sum14;

    /* DiscreteIntegrator: '<S25>/Integrator' */
    StateFlowGUI_B.Integrator_d = StateFlowGUI_DW.Integrator_DSTATE_a;

    /* Gain: '<S25>/Proportional Gain' */
    StateFlowGUI_B.ProportionalGain_p = StateFlowGUI_P.PIDController2_P *
      StateFlowGUI_B.Sum14;

    /* Sum: '<S25>/Sum' */
    StateFlowGUI_B.Sum_n = (StateFlowGUI_B.ProportionalGain_p +
      StateFlowGUI_B.Integrator_d) + StateFlowGUI_B.FilterCoefficient_g;

    /* Sum: '<S4>/Sum7' */
    StateFlowGUI_B.Sum7_l = StateFlowGUI_B.Sum_n +
      StateFlowGUI_B.Coppiatheta1vel;

    /* Sum: '<S4>/Sum8' */
    StateFlowGUI_B.Sum8_f = StateFlowGUI_B.Sum_h +
      StateFlowGUI_B.Coppiatheta2vel;

    /* SampleTimeMath: '<S53>/TSamp'
     *
     * About '<S53>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp = StateFlowGUI_B.pos_B_conv * StateFlowGUI_P.TSamp_WtEt;

    /* UnitDelay: '<S53>/UD' */
    StateFlowGUI_B.Uk1 = StateFlowGUI_DW.UD_DSTATE;

    /* Sum: '<S53>/Diff' */
    StateFlowGUI_B.Diff = StateFlowGUI_B.TSamp - StateFlowGUI_B.Uk1;

    /* SampleTimeMath: '<S56>/TSamp'
     *
     * About '<S56>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_i = StateFlowGUI_B.Sum5 * StateFlowGUI_P.TSamp_WtEt_g;

    /* UnitDelay: '<S56>/UD' */
    StateFlowGUI_B.Uk1_p = StateFlowGUI_DW.UD_DSTATE_a;

    /* Sum: '<S56>/Diff' */
    StateFlowGUI_B.Diff_l = StateFlowGUI_B.TSamp_i - StateFlowGUI_B.Uk1_p;

    /* MATLAB Function: '<S12>/Cinematica diretta' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta': '<S65>:1' */
    /* '<S65>:1:2' */
    /* '<S65>:1:3' */
    /* '<S65>:1:6' */
    A = sin(StateFlowGUI_B.Sum7) - sin(StateFlowGUI_B.Sum4);
    J_p_idx_1 = -0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) *
      0.25;
    A = A * A * 0.0625 + J_p_idx_1 * J_p_idx_1;

    /* '<S65>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) *
      0.25;
    B = ((-0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) * 0.25) *
         ((sin(StateFlowGUI_B.Sum7) - sin(StateFlowGUI_B.Sum4)) * 0.25) * (-0.18
          - 0.5 * cos(StateFlowGUI_B.Sum7)) + (sin(StateFlowGUI_B.Sum7) - sin
          (StateFlowGUI_B.Sum4)) * -0.01125 * (cos(StateFlowGUI_B.Sum7) + cos
          (StateFlowGUI_B.Sum4))) - 0.5 * sin(StateFlowGUI_B.Sum7) * (J_p_idx_3 *
      J_p_idx_3);

    /* '<S65>:1:10' */
    x4 = cos(StateFlowGUI_B.Sum7) + cos(StateFlowGUI_B.Sum4);
    x5 = -0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S65>:1:14' */
    x2 = (sqrt(B * B - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
               (StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) * 0.25) * ((cos
               (StateFlowGUI_B.Sum7) + cos(StateFlowGUI_B.Sum4)) * 0.0225) *
                         (-0.18 - 0.5 * cos(StateFlowGUI_B.Sum7))) + (0.045 *
             cos(StateFlowGUI_B.Sum7) + 0.0081) * (x5 * x5)) * (4.0 * A)) + -B) /
      (2.0 * A);

    /*  Posizione X end-effector */
    /* '<S65>:1:16' */
    StateFlowGUI_B.x_n = (x2 * 0.25 * (sin(StateFlowGUI_B.Sum7) - sin
      (StateFlowGUI_B.Sum4)) - (cos(StateFlowGUI_B.Sum7) + cos
      (StateFlowGUI_B.Sum4)) * 0.0225) / (-0.18 - (cos(StateFlowGUI_B.Sum7) -
      cos(StateFlowGUI_B.Sum4)) * 0.25);
    StateFlowGUI_B.y_k = x2;

    /* MATLAB Function: '<S12>/Cinematica diretta Acc' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta Acc': '<S66>:1' */
    /* '<S66>:1:3' */
    /* '<S66>:1:4' */
    /* '<S66>:1:6' */
    A = 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.theta2_p;
    J_p_idx_1 = 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.theta2_p;

    /* '<S66>:1:9' */
    J_p_idx_3 = 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.theta1_p;
    x4 = 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.theta1_p;
    B = ((((((0.5 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
              StateFlowGUI_B.MultiportSwitch[2] * StateFlowGUI_B.theta1_p +
              StateFlowGUI_B.MultiportSwitch[2] *
              StateFlowGUI_B.MultiportSwitch[2]) + J_p_idx_3 * J_p_idx_3) +
            (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
             (StateFlowGUI_B.theta1_p * StateFlowGUI_B.theta1_p) + 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
             StateFlowGUI_B.theta1_pp) * ((StateFlowGUI_B.Sum + 0.09) - 0.25 *
             cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) +
           StateFlowGUI_B.MultiportSwitch[3] * StateFlowGUI_B.MultiportSwitch[3])
          - 0.5 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
          StateFlowGUI_B.MultiportSwitch[3] * StateFlowGUI_B.theta1_p) + x4 * x4)
      + (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
         (StateFlowGUI_B.theta1_p * StateFlowGUI_B.theta1_p) - 0.25 * cos
         (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_pp)
      * (StateFlowGUI_B.Ymov - 0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S66>:1:12' */
    x2 = (((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * B /
          ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (((((((0.5 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.MultiportSwitch[2] * StateFlowGUI_B.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2] * StateFlowGUI_B.MultiportSwitch[2]) + A
                * A) + (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                        (StateFlowGUI_B.theta2_p * StateFlowGUI_B.theta2_p) +
                        0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                        StateFlowGUI_B.theta2_pp) * ((StateFlowGUI_B.Sum - 0.09)
                - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2))) +
              StateFlowGUI_B.MultiportSwitch[3] *
              StateFlowGUI_B.MultiportSwitch[3]) - 0.5 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
             StateFlowGUI_B.MultiportSwitch[3] * StateFlowGUI_B.theta2_p) +
            J_p_idx_1 * J_p_idx_1) + (0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
            (StateFlowGUI_B.theta2_p * StateFlowGUI_B.theta2_p) - 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
            StateFlowGUI_B.theta2_pp) * (StateFlowGUI_B.Ymov - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)))) /
      ((StateFlowGUI_B.Ymov - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) - ((StateFlowGUI_B.Sum -
         0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
       ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (StateFlowGUI_B.Ymov -
        0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)));

    /* '<S66>:1:14' */
    StateFlowGUI_B.x_pp_f = ((StateFlowGUI_B.Ymov - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * -x2 - B) /
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1));
    StateFlowGUI_B.y_pp_l = x2;

    /* Sum: '<S12>/Sum2' */
    StateFlowGUI_B.Sum2_d = StateFlowGUI_B.x_pp_f -
      StateFlowGUI_B.MultiportSwitch[4];

    /* Sum: '<S12>/Sum3' */
    StateFlowGUI_B.Sum3_b = StateFlowGUI_B.y_pp_l -
      StateFlowGUI_B.MultiportSwitch[5];

    /* MATLAB Function: '<S12>/MATLAB Function2' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function2': '<S73>:1' */
    if (StateFlowGUI_B.Bool == 4.0) {
      /* '<S73>:1:2' */
      /* '<S73>:1:3' */
      StateFlowGUI_B.xp = StateFlowGUI_B.x_n;

      /* '<S73>:1:4' */
      StateFlowGUI_B.yp = StateFlowGUI_B.y_k;
    } else {
      /* '<S73>:1:6' */
      StateFlowGUI_B.xp = 0.0;

      /* '<S73>:1:7' */
      StateFlowGUI_B.yp = 0.0;
    }

    /* End of MATLAB Function: '<S12>/MATLAB Function2' */

    /* Gain: '<S12>/Kd1' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function3': '<S74>:1' */
    /* '<S74>:1:2' */
    /* '<S74>:1:3' */
    /* '<S74>:1:4' */
    /* '<S74>:1:5' */
    StateFlowGUI_B.Kd1[0] = StateFlowGUI_P.Kd1_Gain * StateFlowGUI_B.qdot[0];

    /* Gain: '<S12>/Kp1' */
    StateFlowGUI_B.Kp1[0] = StateFlowGUI_P.Kp1_Gain * StateFlowGUI_B.q[0];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    StateFlowGUI_B.csiH[0] = StateFlowGUI_B.q[0];
    StateFlowGUI_B.csiH[2] = StateFlowGUI_B.qdot[0];

    /* Gain: '<S12>/Kd1' */
    StateFlowGUI_B.Kd1[1] = StateFlowGUI_P.Kd1_Gain * StateFlowGUI_B.qdot[1];

    /* Gain: '<S12>/Kp1' */
    StateFlowGUI_B.Kp1[1] = StateFlowGUI_P.Kp1_Gain * StateFlowGUI_B.q[1];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    StateFlowGUI_B.csiH[1] = StateFlowGUI_B.q[1];
    StateFlowGUI_B.csiH[3] = StateFlowGUI_B.qdot[1];

    /* '<S74>:1:6' */
    A = 2.2250738585072014E-308;
    B = fabs(StateFlowGUI_B.csiH[0]);
    if (B > 2.2250738585072014E-308) {
      x2 = 1.0;
      A = B;
    } else {
      x4 = B / 2.2250738585072014E-308;
      x2 = x4 * x4;
    }

    B = fabs(StateFlowGUI_B.csiH[1]);
    if (B > A) {
      x4 = A / B;
      x2 = x2 * x4 * x4 + 1.0;
      A = B;
    } else {
      x4 = B / A;
      x2 += x4 * x4;
    }

    B = fabs(StateFlowGUI_B.csiH[2]);
    if (B > A) {
      x4 = A / B;
      x2 = x2 * x4 * x4 + 1.0;
      A = B;
    } else {
      x4 = B / A;
      x2 += x4 * x4;
    }

    B = fabs(StateFlowGUI_B.csiH[3]);
    if (B > A) {
      x4 = A / B;
      x2 = x2 * x4 * x4 + 1.0;
      A = B;
    } else {
      x4 = B / A;
      x2 += x4 * x4;
    }

    x2 = A * sqrt(x2);

    /* '<S74>:1:7' */
    StateFlowGUI_B.phi = (0.002 * x2 + 0.0005) + x2 * x2 * -1.5E-6;

    /* MATLAB Function: '<S12>/MATLAB Function4' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function4': '<S75>:1' */
    /* '<S75>:1:27' */
    /* '<S75>:1:13' */
    /* '<S75>:1:27' */
    /*  Il risultato &#xE8; una 2x1 [2x4][4x4][4x1] */
    /* '<S75>:1:28' */
    x2 = 0.0;
    A = 2.2250738585072014E-308;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      StateFlowGUI_B.z[bitIdx] = 0.0;
      StateFlowGUI_B.z[bitIdx] += b_a[bitIdx] * StateFlowGUI_B.csiH[0];
      StateFlowGUI_B.z[bitIdx] += b_a[bitIdx + 2] * StateFlowGUI_B.csiH[1];
      StateFlowGUI_B.z[bitIdx] += b_a[bitIdx + 4] * StateFlowGUI_B.csiH[2];
      StateFlowGUI_B.z[bitIdx] += b_a[bitIdx + 6] * StateFlowGUI_B.csiH[3];
      B = fabs(StateFlowGUI_B.z[bitIdx]);
      if (B > A) {
        x4 = A / B;
        x2 = x2 * x4 * x4 + 1.0;
        A = B;
      } else {
        x4 = B / A;
        x2 += x4 * x4;
      }
    }

    x2 = A * sqrt(x2);

    /* y = theta_pp + K*csiH+omega; */
    /* eta = (eye(2)-M^-1*Mhat)*y-M^-1*ntilde; */
    /* '<S75>:1:36' */
    /* '<S75>:1:37' */
    /* '<S75>:1:38' */
    /* '<S75>:1:39' */
    A = StateFlowGUI_norm_n(StateFlowGUI_B.csiH);
    A = (39.619574132744681 * StateFlowGUI_norm_n(StateFlowGUI_B.csiH) +
         9.6405136097991448) + A * A * -0.27679543903127646;

    /* '<S75>:1:41' */
    StateFlowGUI_B.rho = A;
    StateFlowGUI_B.omega[0] = StateFlowGUI_B.z[0] / x2 * A;
    StateFlowGUI_B.omega[1] = StateFlowGUI_B.z[1] / x2 * A;

    /* End of MATLAB Function: '<S12>/MATLAB Function4' */

    /* MATLAB Function: '<S12>/MATLAB Jin' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Jin': '<S76>:1' */
    /* '<S76>:1:3' */
    /* '<S76>:1:4' */
    /* '<S76>:1:6' */
    /* '<S76>:1:8' */
    /* '<S76>:1:10' */
    A = (StateFlowGUI_B.Ymov - 0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (StateFlowGUI_B.Ymov -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2));

    /* '<S76>:1:12' */
    x4 = (((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (-0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) + (StateFlowGUI_B.Ymov
           - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 *
           cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) / A;

    /* '<S76>:1:14' */
    A = ((StateFlowGUI_B.Ymov - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (-0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Sum +
           0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) /
         ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((StateFlowGUI_B.Sum +
           0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
         (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / A;

    /* '<S76>:1:16' */
    /* '<S76>:1:18' */
    /* '<S76>:1:20' */
    StateFlowGUI_B.x_p = ((-(StateFlowGUI_B.Ymov - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * A - 0.25
      * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Ymov
      - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
                          ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) * StateFlowGUI_B.theta2_p +
      -(StateFlowGUI_B.Ymov - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x4 *
      StateFlowGUI_B.theta1_p;

    /* '<S76>:1:21' */
    StateFlowGUI_B.y_p = x4 * StateFlowGUI_B.theta1_p + A *
      StateFlowGUI_B.theta2_p;

    /* SampleTimeMath: '<S96>/TSamp'
     *
     * About '<S96>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_e = StateFlowGUI_B.Sum7 * StateFlowGUI_P.TSamp_WtEt_m;

    /* UnitDelay: '<S96>/UD' */
    StateFlowGUI_B.Uk1_l = StateFlowGUI_DW.UD_DSTATE_g;

    /* Sum: '<S96>/Diff' */
    StateFlowGUI_B.Diff_f = StateFlowGUI_B.TSamp_e - StateFlowGUI_B.Uk1_l;

    /* Gain: '<S107>/D*u(k)' */
    StateFlowGUI_B.Duk = StateFlowGUI_P.Duk_Gain * StateFlowGUI_B.Sum7;

    /* UnitDelay: '<S107>/Delay_x1' */
    StateFlowGUI_B.x1k = StateFlowGUI_DW.Delay_x1_DSTATE;

    /* Gain: '<S110>/C11' */
    StateFlowGUI_B.C11 = StateFlowGUI_P.C11_Gain * StateFlowGUI_B.x1k;

    /* UnitDelay: '<S107>/Delay_x2' */
    StateFlowGUI_B.x2k = StateFlowGUI_DW.Delay_x2_DSTATE;

    /* Gain: '<S110>/C12' */
    StateFlowGUI_B.C12 = StateFlowGUI_P.C12_Gain * StateFlowGUI_B.x2k;

    /* Sum: '<S110>/sum2' */
    StateFlowGUI_B.sum2 = StateFlowGUI_B.C11 + StateFlowGUI_B.C12;

    /* Sum: '<S107>/C*X(k)+D*u(k)' */
    StateFlowGUI_B.yk = StateFlowGUI_B.Duk + StateFlowGUI_B.sum2;

    /* SampleTimeMath: '<S94>/TSamp'
     *
     * About '<S94>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_n = StateFlowGUI_B.yk * StateFlowGUI_P.TSamp_WtEt_e;

    /* UnitDelay: '<S94>/UD' */
    StateFlowGUI_B.Uk1_d = StateFlowGUI_DW.UD_DSTATE_a3;

    /* Sum: '<S94>/Diff' */
    StateFlowGUI_B.Diff_i = StateFlowGUI_B.TSamp_n - StateFlowGUI_B.Uk1_d;

    /* Gain: '<S108>/A11' */
    StateFlowGUI_B.A11 = StateFlowGUI_P.A11_Gain * StateFlowGUI_B.x1k;

    /* Gain: '<S108>/A12' */
    StateFlowGUI_B.A12 = StateFlowGUI_P.A12_Gain * StateFlowGUI_B.x2k;

    /* Gain: '<S108>/A21' */
    StateFlowGUI_B.A21 = StateFlowGUI_P.A21_Gain * StateFlowGUI_B.x1k;

    /* Gain: '<S108>/A22' */
    StateFlowGUI_B.A22 = StateFlowGUI_P.A22_Gain * StateFlowGUI_B.x2k;

    /* Sum: '<S108>/sum2' */
    StateFlowGUI_B.sum2_n = StateFlowGUI_B.A11 + StateFlowGUI_B.A12;

    /* Sum: '<S108>/sum3' */
    StateFlowGUI_B.sum3 = StateFlowGUI_B.A21 + StateFlowGUI_B.A22;

    /* Gain: '<S109>/B11' */
    StateFlowGUI_B.B11 = StateFlowGUI_P.B11_Gain * StateFlowGUI_B.Sum7;

    /* Sum: '<S107>/A*x1(k) + B*u1(k) ' */
    StateFlowGUI_B.x1k1 = StateFlowGUI_B.sum2_n + StateFlowGUI_B.B11;

    /* Gain: '<S109>/B21' */
    StateFlowGUI_B.B21 = StateFlowGUI_P.B21_Gain * StateFlowGUI_B.Sum7;

    /* Sum: '<S107>/A*x2(k) + B*u2(k)' */
    StateFlowGUI_B.x2k1 = StateFlowGUI_B.sum3 + StateFlowGUI_B.B21;

    /* Gain: '<S103>/D*u(k)' */
    StateFlowGUI_B.Duk_h = StateFlowGUI_P.Duk_Gain_h * StateFlowGUI_B.Sum4;

    /* UnitDelay: '<S103>/Delay_x1' */
    StateFlowGUI_B.x1k_a = StateFlowGUI_DW.Delay_x1_DSTATE_g;

    /* Gain: '<S106>/C11' */
    StateFlowGUI_B.C11_h = StateFlowGUI_P.C11_Gain_n * StateFlowGUI_B.x1k_a;

    /* UnitDelay: '<S103>/Delay_x2' */
    StateFlowGUI_B.x2k_g = StateFlowGUI_DW.Delay_x2_DSTATE_m;

    /* Gain: '<S106>/C12' */
    StateFlowGUI_B.C12_e = StateFlowGUI_P.C12_Gain_d * StateFlowGUI_B.x2k_g;

    /* Sum: '<S106>/sum2' */
    StateFlowGUI_B.sum2_k = StateFlowGUI_B.C11_h + StateFlowGUI_B.C12_e;

    /* Sum: '<S103>/C*X(k)+D*u(k)' */
    StateFlowGUI_B.yk_i = StateFlowGUI_B.Duk_h + StateFlowGUI_B.sum2_k;

    /* SampleTimeMath: '<S95>/TSamp'
     *
     * About '<S95>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_h = StateFlowGUI_B.yk_i * StateFlowGUI_P.TSamp_WtEt_gz;

    /* UnitDelay: '<S95>/UD' */
    StateFlowGUI_B.Uk1_b = StateFlowGUI_DW.UD_DSTATE_j;

    /* Sum: '<S95>/Diff' */
    StateFlowGUI_B.Diff_d = StateFlowGUI_B.TSamp_h - StateFlowGUI_B.Uk1_b;

    /* SampleTimeMath: '<S97>/TSamp'
     *
     * About '<S97>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_nd = StateFlowGUI_B.Sum4 * StateFlowGUI_P.TSamp_WtEt_gh;

    /* UnitDelay: '<S97>/UD' */
    StateFlowGUI_B.Uk1_ll = StateFlowGUI_DW.UD_DSTATE_f;

    /* Sum: '<S97>/Diff' */
    StateFlowGUI_B.Diff_n = StateFlowGUI_B.TSamp_nd - StateFlowGUI_B.Uk1_ll;

    /* Gain: '<S104>/A11' */
    StateFlowGUI_B.A11_p = StateFlowGUI_P.A11_Gain_e * StateFlowGUI_B.x1k_a;

    /* Gain: '<S104>/A12' */
    StateFlowGUI_B.A12_c = StateFlowGUI_P.A12_Gain_a * StateFlowGUI_B.x2k_g;

    /* Gain: '<S104>/A21' */
    StateFlowGUI_B.A21_h = StateFlowGUI_P.A21_Gain_m * StateFlowGUI_B.x1k_a;

    /* Gain: '<S104>/A22' */
    StateFlowGUI_B.A22_d = StateFlowGUI_P.A22_Gain_g * StateFlowGUI_B.x2k_g;

    /* Sum: '<S104>/sum2' */
    StateFlowGUI_B.sum2_nk = StateFlowGUI_B.A11_p + StateFlowGUI_B.A12_c;

    /* Sum: '<S104>/sum3' */
    StateFlowGUI_B.sum3_e = StateFlowGUI_B.A21_h + StateFlowGUI_B.A22_d;

    /* Gain: '<S105>/B11' */
    StateFlowGUI_B.B11_k = StateFlowGUI_P.B11_Gain_f * StateFlowGUI_B.Sum4;

    /* Sum: '<S103>/A*x1(k) + B*u1(k) ' */
    StateFlowGUI_B.x1k1_g = StateFlowGUI_B.sum2_nk + StateFlowGUI_B.B11_k;

    /* Gain: '<S105>/B21' */
    StateFlowGUI_B.B21_l = StateFlowGUI_P.B21_Gain_p * StateFlowGUI_B.Sum4;

    /* Sum: '<S103>/A*x2(k) + B*u2(k)' */
    StateFlowGUI_B.x2k1_n = StateFlowGUI_B.sum3_e + StateFlowGUI_B.B21_l;

    /* DigitalClock: '<S78>/Digital Clock' */
    StateFlowGUI_B.DigitalClock = StateFlowGUI_M->Timing.t[1];

    /* Gain: '<S111>/D*u(k)' */
    StateFlowGUI_B.Duk_n = StateFlowGUI_P.Duk_Gain_g *
      StateFlowGUI_B.DigitalClock;

    /* UnitDelay: '<S111>/Delay_x1' */
    StateFlowGUI_B.x1k_i = StateFlowGUI_DW.Delay_x1_DSTATE_k;

    /* Gain: '<S114>/C11' */
    StateFlowGUI_B.C11_e = StateFlowGUI_P.C11_Gain_g * StateFlowGUI_B.x1k_i;

    /* UnitDelay: '<S111>/Delay_x2' */
    StateFlowGUI_B.x2k_d = StateFlowGUI_DW.Delay_x2_DSTATE_k;

    /* Gain: '<S114>/C12' */
    StateFlowGUI_B.C12_m = StateFlowGUI_P.C12_Gain_d1 * StateFlowGUI_B.x2k_d;

    /* Sum: '<S114>/sum2' */
    StateFlowGUI_B.sum2_ka = StateFlowGUI_B.C11_e + StateFlowGUI_B.C12_m;

    /* Sum: '<S111>/C*X(k)+D*u(k)' */
    StateFlowGUI_B.yk_m = StateFlowGUI_B.Duk_n + StateFlowGUI_B.sum2_ka;

    /* SampleTimeMath: '<S98>/TSamp'
     *
     * About '<S98>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_f = StateFlowGUI_B.yk_m * StateFlowGUI_P.TSamp_WtEt_d;

    /* UnitDelay: '<S98>/UD' */
    StateFlowGUI_B.Uk1_j = StateFlowGUI_DW.UD_DSTATE_g0;

    /* Sum: '<S98>/Diff' */
    StateFlowGUI_B.Diff_b = StateFlowGUI_B.TSamp_f - StateFlowGUI_B.Uk1_j;

    /* SampleTimeMath: '<S99>/TSamp'
     *
     * About '<S99>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_iq = StateFlowGUI_B.DigitalClock *
      StateFlowGUI_P.TSamp_WtEt_p;

    /* UnitDelay: '<S99>/UD' */
    StateFlowGUI_B.Uk1_bl = StateFlowGUI_DW.UD_DSTATE_k;

    /* Sum: '<S99>/Diff' */
    StateFlowGUI_B.Diff_bt = StateFlowGUI_B.TSamp_iq - StateFlowGUI_B.Uk1_bl;

    /* Gain: '<S112>/A11' */
    StateFlowGUI_B.A11_h = StateFlowGUI_P.A11_Gain_h * StateFlowGUI_B.x1k_i;

    /* Gain: '<S112>/A12' */
    StateFlowGUI_B.A12_g = StateFlowGUI_P.A12_Gain_a3 * StateFlowGUI_B.x2k_d;

    /* Gain: '<S112>/A21' */
    StateFlowGUI_B.A21_p = StateFlowGUI_P.A21_Gain_f * StateFlowGUI_B.x1k_i;

    /* Gain: '<S112>/A22' */
    StateFlowGUI_B.A22_j = StateFlowGUI_P.A22_Gain_d * StateFlowGUI_B.x2k_d;

    /* Sum: '<S112>/sum2' */
    StateFlowGUI_B.sum2_e = StateFlowGUI_B.A11_h + StateFlowGUI_B.A12_g;

    /* Sum: '<S112>/sum3' */
    StateFlowGUI_B.sum3_b = StateFlowGUI_B.A21_p + StateFlowGUI_B.A22_j;

    /* Gain: '<S113>/B11' */
    StateFlowGUI_B.B11_d = StateFlowGUI_P.B11_Gain_n *
      StateFlowGUI_B.DigitalClock;

    /* Sum: '<S111>/A*x1(k) + B*u1(k) ' */
    StateFlowGUI_B.x1k1_h = StateFlowGUI_B.sum2_e + StateFlowGUI_B.B11_d;

    /* Gain: '<S113>/B21' */
    StateFlowGUI_B.B21_h = StateFlowGUI_P.B21_Gain_l *
      StateFlowGUI_B.DigitalClock;

    /* Sum: '<S111>/A*x2(k) + B*u2(k)' */
    StateFlowGUI_B.x2k1_h = StateFlowGUI_B.sum3_b + StateFlowGUI_B.B21_h;

    /* Gain: '<S79>/Gain' */
    StateFlowGUI_B.Gain_p = StateFlowGUI_P.Gain_Gain_c *
      StateFlowGUI_B.sf_CinematicaInversa.theta1;

    /* Gain: '<S80>/Gain' */
    StateFlowGUI_B.Gain_n = StateFlowGUI_P.Gain_Gain_d *
      StateFlowGUI_B.sf_CinematicaInversa.theta2;

    /* Sum: '<S12>/Sum5' */
    StateFlowGUI_B.nphi = StateFlowGUI_B.ntilde - StateFlowGUI_B.phi;

    /* Sum: '<S12>/Sum8' */
    StateFlowGUI_B.YRobusto[0] = ((StateFlowGUI_B.omega[0] + StateFlowGUI_B.Kd1
      [0]) + StateFlowGUI_B.Kp1[0]) + StateFlowGUI_B.theta1_pp;
    StateFlowGUI_B.YRobusto[1] = ((StateFlowGUI_B.omega[1] + StateFlowGUI_B.Kd1
      [1]) + StateFlowGUI_B.Kp1[1]) + StateFlowGUI_B.theta2_pp;

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
static void StateFlowGUI_update(void)
{
  /* Update for Memory: '<S36>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput = StateFlowGUI_B.sf_MATLABFunction_e.y;

  /* Update for Memory: '<S40>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_o = StateFlowGUI_B.sf_MATLABFunction_a.y;

  /* Update for Memory: '<S44>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_g = StateFlowGUI_B.sf_MATLABFunction_f.y;

  /* Update for Memory: '<S46>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_a = StateFlowGUI_B.sf_MATLABFunction_fb.y;

  /* Update for Memory: '<S4>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_e = StateFlowGUI_B.x0_o;

  /* Update for Memory: '<S4>/Memory1' */
  StateFlowGUI_DW.Memory1_PreviousInput = StateFlowGUI_B.y0_e;

  /* Update for DiscreteIntegrator: '<S24>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE += StateFlowGUI_P.Filter_gainval *
    StateFlowGUI_B.FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S24>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE += StateFlowGUI_P.Integrator_gainval *
    StateFlowGUI_B.IntegralGain;

  /* Update for DiscreteIntegrator: '<S25>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE_d += StateFlowGUI_P.Filter_gainval_m *
    StateFlowGUI_B.FilterCoefficient_g;

  /* Update for DiscreteIntegrator: '<S25>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE_a += StateFlowGUI_P.Integrator_gainval_o *
    StateFlowGUI_B.IntegralGain_f;

  /* Update for UnitDelay: '<S53>/UD' */
  StateFlowGUI_DW.UD_DSTATE = StateFlowGUI_B.TSamp;

  /* Update for UnitDelay: '<S56>/UD' */
  StateFlowGUI_DW.UD_DSTATE_a = StateFlowGUI_B.TSamp_i;

  /* Update for UnitDelay: '<S96>/UD' */
  StateFlowGUI_DW.UD_DSTATE_g = StateFlowGUI_B.TSamp_e;

  /* Update for UnitDelay: '<S107>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE = StateFlowGUI_B.x1k1;

  /* Update for UnitDelay: '<S107>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE = StateFlowGUI_B.x2k1;

  /* Update for UnitDelay: '<S94>/UD' */
  StateFlowGUI_DW.UD_DSTATE_a3 = StateFlowGUI_B.TSamp_n;

  /* Update for UnitDelay: '<S103>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_g = StateFlowGUI_B.x1k1_g;

  /* Update for UnitDelay: '<S103>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_m = StateFlowGUI_B.x2k1_n;

  /* Update for UnitDelay: '<S95>/UD' */
  StateFlowGUI_DW.UD_DSTATE_j = StateFlowGUI_B.TSamp_h;

  /* Update for UnitDelay: '<S97>/UD' */
  StateFlowGUI_DW.UD_DSTATE_f = StateFlowGUI_B.TSamp_nd;

  /* Update for UnitDelay: '<S111>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_k = StateFlowGUI_B.x1k1_h;

  /* Update for UnitDelay: '<S111>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_k = StateFlowGUI_B.x2k1_h;

  /* Update for UnitDelay: '<S98>/UD' */
  StateFlowGUI_DW.UD_DSTATE_g0 = StateFlowGUI_B.TSamp_f;

  /* Update for UnitDelay: '<S99>/UD' */
  StateFlowGUI_DW.UD_DSTATE_k = StateFlowGUI_B.TSamp_iq;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++StateFlowGUI_M->Timing.clockTick0)) {
    ++StateFlowGUI_M->Timing.clockTickH0;
  }

  StateFlowGUI_M->Timing.t[0] = StateFlowGUI_M->Timing.clockTick0 *
    StateFlowGUI_M->Timing.stepSize0 + StateFlowGUI_M->Timing.clockTickH0 *
    StateFlowGUI_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++StateFlowGUI_M->Timing.clockTick1)) {
      ++StateFlowGUI_M->Timing.clockTickH1;
    }

    StateFlowGUI_M->Timing.t[1] = StateFlowGUI_M->Timing.clockTick1 *
      StateFlowGUI_M->Timing.stepSize1 + StateFlowGUI_M->Timing.clockTickH1 *
      StateFlowGUI_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void StateFlowGUI_initialize(void)
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
        StateFlowGUI_DW.EtherCATInit_RWORK.EXECRATIO = 0.001 /
          slrteGetCurrentStepSize();
        status = xpcGetPciConfigAtSlot( 4, 1, &pciInfo);
        if (status ) {
          rtmSetErrorStatus(StateFlowGUI_M,
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
          rtmSetErrorStatus(StateFlowGUI_M,
                            "No valid Ethernet board found at bus 4 slot 1");
        } else {
          char *logfile = "c:\\dbglog.txt";
          mwStateClear( 0 );
          status = xpcEtherCATinitialize(0, DeviceType, 4, 1, 0, 1,
            xmlecatArr_0, xmlecatArr_0_count,0,
            1, logfile, 0.001, 0 );
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(StateFlowGUI_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
        }
      }
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */
    /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */
    /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S14>/Status Word' */
    /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */
    /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */
    /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<Root>/Kp' */
    StateFlowGUI_B.Kp = StateFlowGUI_P.Kp_Value;

    /* Start for Constant: '<Root>/StartHome' */
    StateFlowGUI_B.StartHome = StateFlowGUI_P.StartHome_Value;

    /* Start for Constant: '<Root>/StartRobot' */
    StateFlowGUI_B.StartRobot = StateFlowGUI_P.StartRobot_Value;

    /* Start for Constant: '<Root>/StartWork' */
    StateFlowGUI_B.StartWork = StateFlowGUI_P.StartWork_Value;

    /* Start for Constant: '<Root>/Reset' */
    StateFlowGUI_B.Reset = StateFlowGUI_P.Reset_Value;

    /* Start for Constant: '<Root>/Stop' */
    StateFlowGUI_B.Stop = StateFlowGUI_P.Stop_Value;

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S82>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S82>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S82>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S82>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S81>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S81>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S81>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S81>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S36>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S36>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S40>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S40>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S55>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S55>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S55>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S55>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S44>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S44>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S28>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S28>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[28];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S28>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S28>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[29];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* InitializeConditions for Memory: '<S36>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput = StateFlowGUI_P.Memory_X0;

  /* InitializeConditions for Memory: '<S40>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_o = StateFlowGUI_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S44>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_g = StateFlowGUI_P.Memory_X0_o;

  /* InitializeConditions for Memory: '<S46>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_a = StateFlowGUI_P.Memory_X0_a;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_e = StateFlowGUI_P.Memory_X0_d;

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  StateFlowGUI_DW.Memory1_PreviousInput = StateFlowGUI_P.Memory1_X0;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE = StateFlowGUI_P.Filter_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE = StateFlowGUI_P.Integrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S25>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE_d = StateFlowGUI_P.Filter_IC_b;

  /* InitializeConditions for DiscreteIntegrator: '<S25>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE_a = StateFlowGUI_P.Integrator_IC_f;

  /* InitializeConditions for UnitDelay: '<S53>/UD' */
  StateFlowGUI_DW.UD_DSTATE = StateFlowGUI_P.DiscreteDerivativeB_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S56>/UD' */
  StateFlowGUI_DW.UD_DSTATE_a = StateFlowGUI_P.DiscreteDerivativeA_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S96>/UD' */
  StateFlowGUI_DW.UD_DSTATE_g = StateFlowGUI_P.DiscreteDerivativeB2_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S107>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE = StateFlowGUI_P.Delay_x1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S107>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE = StateFlowGUI_P.Delay_x2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S94>/UD' */
  StateFlowGUI_DW.UD_DSTATE_a3 = StateFlowGUI_P.DiscreteDerivativeB_ICPrevSca_m;

  /* InitializeConditions for UnitDelay: '<S103>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_g = StateFlowGUI_P.Delay_x1_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S103>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_m = StateFlowGUI_P.Delay_x2_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S95>/UD' */
  StateFlowGUI_DW.UD_DSTATE_j = StateFlowGUI_P.DiscreteDerivativeB1_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S97>/UD' */
  StateFlowGUI_DW.UD_DSTATE_f = StateFlowGUI_P.DiscreteDerivativeB3_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S111>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_k = StateFlowGUI_P.Delay_x1_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S111>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_k = StateFlowGUI_P.Delay_x2_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S98>/UD' */
  StateFlowGUI_DW.UD_DSTATE_g0 = StateFlowGUI_P.DiscreteDerivativeB4_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S99>/UD' */
  StateFlowGUI_DW.UD_DSTATE_k = StateFlowGUI_P.DiscreteDerivativeB5_ICPrevScal;
  StateFlowGUI_DW.sfEvent = -1;
  StateFlowGUI_DW.temporalCounter_i1 = 0U;
  StateFlowGUI_DW.is_active_c15_StateFlowGUI = 0U;
  StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S13>/Homing'
   */
  /* SystemInitialize for Outport: '<S119>/CA' */
  StateFlowGUI_B.CA = StateFlowGUI_P.CA_Y0;

  /* SystemInitialize for Outport: '<S119>/CB' */
  StateFlowGUI_B.CB = StateFlowGUI_P.CB_Y0;

  /* SystemInitialize for Outport: '<S119>/CH' */
  StateFlowGUI_B.CH = StateFlowGUI_P.CH_Y0;
}

/* Model terminate function */
static void StateFlowGUI_terminate(void)
{
  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore vite A' */
  /* Level2 S-Function Block: '<S10>/Motore vite A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore vite B' */
  /* Level2 S-Function Block: '<S10>/Motore vite B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S14>/Status Word' */
  /* Level2 S-Function Block: '<S14>/Status Word' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S9>/Motore braccia A' */
  /* Level2 S-Function Block: '<S9>/Motore braccia A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S9>/Motore braccia B' */
  /* Level2 S-Function Block: '<S9>/Motore braccia B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
  /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
  /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
  /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S82>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S82>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S82>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S82>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S81>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S81>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S81>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S81>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
  /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S36>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S36>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
  /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S40>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S40>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S55>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S55>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S55>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S55>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
  /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S44>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S44>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S28>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S28>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S28>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S28>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[29];
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
  StateFlowGUI_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  StateFlowGUI_update();
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
  StateFlowGUI_initialize();
}

void MdlTerminate(void)
{
  StateFlowGUI_terminate();
}

/* Registration function */
RT_MODEL_StateFlowGUI_T *StateFlowGUI(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)StateFlowGUI_M, 0,
                sizeof(RT_MODEL_StateFlowGUI_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&StateFlowGUI_M->solverInfo,
                          &StateFlowGUI_M->Timing.simTimeStep);
    rtsiSetTPtr(&StateFlowGUI_M->solverInfo, &rtmGetTPtr(StateFlowGUI_M));
    rtsiSetStepSizePtr(&StateFlowGUI_M->solverInfo,
                       &StateFlowGUI_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&StateFlowGUI_M->solverInfo, (&rtmGetErrorStatus
      (StateFlowGUI_M)));
    rtsiSetRTModelPtr(&StateFlowGUI_M->solverInfo, StateFlowGUI_M);
  }

  rtsiSetSimTimeStep(&StateFlowGUI_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&StateFlowGUI_M->solverInfo,"FixedStepDiscrete");
  StateFlowGUI_M->solverInfoPtr = (&StateFlowGUI_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = StateFlowGUI_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    StateFlowGUI_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    StateFlowGUI_M->Timing.sampleTimes =
      (&StateFlowGUI_M->Timing.sampleTimesArray[0]);
    StateFlowGUI_M->Timing.offsetTimes =
      (&StateFlowGUI_M->Timing.offsetTimesArray[0]);

    /* task periods */
    StateFlowGUI_M->Timing.sampleTimes[0] = (0.0);
    StateFlowGUI_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    StateFlowGUI_M->Timing.offsetTimes[0] = (0.0);
    StateFlowGUI_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(StateFlowGUI_M, &StateFlowGUI_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = StateFlowGUI_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    StateFlowGUI_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(StateFlowGUI_M, -1);
  StateFlowGUI_M->Timing.stepSize0 = 0.001;
  StateFlowGUI_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    StateFlowGUI_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(StateFlowGUI_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(StateFlowGUI_M->rtwLogInfo, (NULL));
    rtliSetLogT(StateFlowGUI_M->rtwLogInfo, "tout");
    rtliSetLogX(StateFlowGUI_M->rtwLogInfo, "");
    rtliSetLogXFinal(StateFlowGUI_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(StateFlowGUI_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(StateFlowGUI_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(StateFlowGUI_M->rtwLogInfo, 0);
    rtliSetLogDecimation(StateFlowGUI_M->rtwLogInfo, 1);
    rtliSetLogY(StateFlowGUI_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(StateFlowGUI_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(StateFlowGUI_M->rtwLogInfo, (NULL));
  }

  StateFlowGUI_M->solverInfoPtr = (&StateFlowGUI_M->solverInfo);
  StateFlowGUI_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&StateFlowGUI_M->solverInfo, 0.001);
  rtsiSetSolverMode(&StateFlowGUI_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  StateFlowGUI_M->blockIO = ((void *) &StateFlowGUI_B);
  (void) memset(((void *) &StateFlowGUI_B), 0,
                sizeof(B_StateFlowGUI_T));

  /* parameters */
  StateFlowGUI_M->defaultParam = ((real_T *)&StateFlowGUI_P);

  /* states (dwork) */
  StateFlowGUI_M->dwork = ((void *) &StateFlowGUI_DW);
  (void) memset((void *)&StateFlowGUI_DW, 0,
                sizeof(DW_StateFlowGUI_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  StateFlowGUI_InitializeDataMapInfo(StateFlowGUI_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &StateFlowGUI_M->NonInlinedSFcns.sfcnInfo;
    StateFlowGUI_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(StateFlowGUI_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &StateFlowGUI_M->Sizes.numSampTimes);
    StateFlowGUI_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (StateFlowGUI_M)[0]);
    StateFlowGUI_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (StateFlowGUI_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,StateFlowGUI_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(StateFlowGUI_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(StateFlowGUI_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(StateFlowGUI_M));
    rtssSetStepSizePtr(sfcnInfo, &StateFlowGUI_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(StateFlowGUI_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &StateFlowGUI_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &StateFlowGUI_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &StateFlowGUI_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &StateFlowGUI_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &StateFlowGUI_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &StateFlowGUI_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &StateFlowGUI_M->solverInfoPtr);
  }

  StateFlowGUI_M->Sizes.numSFcns = (30);

  /* register each child */
  {
    (void) memset((void *)&StateFlowGUI_M->NonInlinedSFcns.childSFunctions[0], 0,
                  30*sizeof(SimStruct));
    StateFlowGUI_M->childSfunctions =
      (&StateFlowGUI_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 30; i++) {
        StateFlowGUI_M->childSfunctions[i] =
          (&StateFlowGUI_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: StateFlowGUI/<Root>/EtherCAT PDO Transmit 5 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion7);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 5");
      ssSetPath(rts, "StateFlowGUI/EtherCAT PDO Transmit 5");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit5_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit5_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit5_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<Root>/EtherCAT PDO Transmit 6 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 6");
      ssSetPath(rts, "StateFlowGUI/EtherCAT PDO Transmit 6");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit6_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit6_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit6_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<Root>/EtherCAT PDO Transmit 3 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion5);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 3");
      ssSetPath(rts, "StateFlowGUI/EtherCAT PDO Transmit 3");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit3_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit3_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<Root>/EtherCAT PDO Transmit 4 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion1_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 4");
      ssSetPath(rts, "StateFlowGUI/EtherCAT PDO Transmit 4");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit4_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit4_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S10>/Motore vite A (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *) &StateFlowGUI_B.MotoreviteA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite A");
      ssSetPath(rts, "StateFlowGUI/Posizione Vite/Motore vite A");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.MotoreviteA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.MotoreviteA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.MotoreviteA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.MotoreviteA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.MotoreviteA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.MotoreviteA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.MotoreviteA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.MotoreviteA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.MotoreviteA_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S10>/Motore vite B (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *) &StateFlowGUI_B.MotoreviteB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite B");
      ssSetPath(rts, "StateFlowGUI/Posizione Vite/Motore vite B");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.MotoreviteB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.MotoreviteB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.MotoreviteB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.MotoreviteB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.MotoreviteB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.MotoreviteB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.MotoreviteB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.MotoreviteB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.MotoreviteB_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S14>/Status Word (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *) &StateFlowGUI_B.StatusWord));
        }
      }

      /* path info */
      ssSetModelName(rts, "Status Word");
      ssSetPath(rts, "StateFlowGUI/Status/Status Word");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.StatusWord_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.StatusWord_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.StatusWord_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.StatusWord_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.StatusWord_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.StatusWord_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.StatusWord_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.StatusWord_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.StatusWord_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S1>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateFlowGUI_B.EtherCATPDOReceive16));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "StateFlowGUI/Finecorsa Vite/EtherCAT PDO Receive16");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive16_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive16_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S9>/Motore braccia A (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.MotorebracciaA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia A");
      ssSetPath(rts, "StateFlowGUI/Posizione Braccia /Motore braccia A");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.MotorebracciaA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.MotorebracciaA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.MotorebracciaA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.MotorebracciaA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.MotorebracciaA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.MotorebracciaA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.MotorebracciaA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.MotorebracciaA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.MotorebracciaA_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S9>/Motore braccia B (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.MotorebracciaB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia B");
      ssSetPath(rts, "StateFlowGUI/Posizione Braccia /Motore braccia B");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.MotorebracciaB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.MotorebracciaB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.MotorebracciaB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.MotorebracciaB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.MotorebracciaB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.MotorebracciaB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.MotorebracciaB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.MotorebracciaB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.MotorebracciaB_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S2>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &StateFlowGUI_B.EtherCATPDOReceive16_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "StateFlowGUI/Finecorsa braccia/EtherCAT PDO Receive16");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive16_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive16_IWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive16_IWORK_l[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S3>/Luce Bianca (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion25);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Bianca");
      ssSetPath(rts, "StateFlowGUI/LED Status/Luce Bianca");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.LuceBianca_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.LuceBianca_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.LuceBianca_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.LuceBianca_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.LuceBianca_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.LuceBianca_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.LuceBianca_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.LuceBianca_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.LuceBianca_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S3>/Luce Rossa  (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion24);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Rossa ");
      ssSetPath(rts, "StateFlowGUI/LED Status/Luce Rossa ");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.LuceRossa_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.LuceRossa_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.LuceRossa_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.LuceRossa_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.LuceRossa_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.LuceRossa_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.LuceRossa_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.LuceRossa_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.LuceRossa_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S3>/Luce Verde (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion26);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Verde");
      ssSetPath(rts, "StateFlowGUI/LED Status/Luce Verde");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.LuceVerde_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.LuceVerde_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.LuceVerde_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.LuceVerde_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.LuceVerde_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.LuceVerde_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.LuceVerde_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.LuceVerde_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.LuceVerde_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S82>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive15));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowGUI/Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S82>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive14));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowGUI/Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S81>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive15_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowGUI/Sistema_braccia/Velocita /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P5_Size_k);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_o[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S81>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive14_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowGUI/Sistema_braccia/Velocita /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P6_Size_h);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_p[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S5>/EtherCAT PDO Transmit 1 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 1");
      ssSetPath(rts, "StateFlowGUI/Out Asse A Braccia/EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit1_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S36>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowGUI_B.EtherCATPDOReceive9));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateFlowGUI/Out Asse A Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S6>/EtherCAT PDO Transmit 7 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 7");
      ssSetPath(rts, "StateFlowGUI/Out Asse B Braccia/EtherCAT PDO Transmit 7");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit7_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit7_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S40>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowGUI_B.EtherCATPDOReceive9_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "StateFlowGUI/Out Asse B Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P7_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_n[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S55>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive14_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowGUI/Sistema Vite/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P7_Size_k);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_f[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S55>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive15_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowGUI/Sistema Vite/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P3_Size_a);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P7_Size_fm);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_n[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S7>/Torque send (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.ConvertA);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Torque send");
      ssSetPath(rts, "StateFlowGUI/Out asse A Vite/Torque send");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)StateFlowGUI_P.Torquesend_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)StateFlowGUI_P.Torquesend_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)StateFlowGUI_P.Torquesend_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)StateFlowGUI_P.Torquesend_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)StateFlowGUI_P.Torquesend_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)StateFlowGUI_P.Torquesend_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)StateFlowGUI_P.Torquesend_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.Torquesend_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.Torquesend_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S44>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowGUI_B.EtherCATPDOReceive9_hd));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts, "StateFlowGUI/Out asse A Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_g[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S8>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.ConvertB);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts, "StateFlowGUI/Out asse B Vite/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOTransmit2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOTransmit2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOTransmit2_IWORK[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S46>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &StateFlowGUI_B.EtherCATPDOReceive9_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts, "StateFlowGUI/Out asse B Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P4_Size_en);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P5_Size_nv);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P7_Size_ai);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_gl[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_gl[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S28>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[28]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[28]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn28.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive15_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "StateFlowGUI/Movimento Braccia/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P3_Size_o);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P7_Size_n);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_m[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S28>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod = StateFlowGUI_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset = StateFlowGUI_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = StateFlowGUI_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &StateFlowGUI_M->NonInlinedSFcns.blkInfo2[29]);
      }

      ssSetRTWSfcnInfo(rts, StateFlowGUI_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &StateFlowGUI_M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &StateFlowGUI_M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &StateFlowGUI_M->NonInlinedSFcns.methods4[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &StateFlowGUI_M->NonInlinedSFcns.statesInfo2[29]);
        ssSetPeriodicStatesInfo(rts,
          &StateFlowGUI_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn29.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &StateFlowGUI_B.EtherCATPDOReceive14_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "StateFlowGUI/Movimento Braccia/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,StateFlowGUI_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P2_Size_m4);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P3_Size_e);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &StateFlowGUI_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_j[0]);
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
  StateFlowGUI_M->Sizes.numContStates = (0);/* Number of continuous states */
  StateFlowGUI_M->Sizes.numY = (0);    /* Number of model outputs */
  StateFlowGUI_M->Sizes.numU = (0);    /* Number of model inputs */
  StateFlowGUI_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  StateFlowGUI_M->Sizes.numSampTimes = (2);/* Number of sample times */
  StateFlowGUI_M->Sizes.numBlocks = (460);/* Number of blocks */
  StateFlowGUI_M->Sizes.numBlockIO = (355);/* Number of block outputs */
  StateFlowGUI_M->Sizes.numBlockPrms = (1926);/* Sum of parameter "widths" */
  return StateFlowGUI_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
