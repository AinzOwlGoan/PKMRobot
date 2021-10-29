/*
 * StateFlowGUI.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.703
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Oct 29 15:13:07 2021
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
#define StateFlowGUI_IN_Traiettoria    ((uint8_T)14U)

/* Block signals (auto storage) */
B_StateFlowGUI_T StateFlowGUI_B;

/* Block states (auto storage) */
DW_StateFlowGUI_T StateFlowGUI_DW;

/* Real-time model */
RT_MODEL_StateFlowGUI_T StateFlowGUI_M_;
RT_MODEL_StateFlowGUI_T *const StateFlowGUI_M = &StateFlowGUI_M_;

/* Forward declaration for local functions */
static void StateFlowGUI_enter_atomic_Home(void);
static real_T StateFlowGUI_mpower(real_T a);
static void StateFlowGUI_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowGUI_ldm7t(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowGUI_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f);
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
 *    '<S5>/Cinematica Inversa'
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

  /* MATLAB Function 'Movimento/Cinematica Inversa': '<S19>:1' */
  /* '<S19>:1:3' */
  /* '<S19>:1:4' */
  /* '<S19>:1:6' */
  p = 2.0 * rtu_x * 0.25 + 0.045;

  /* '<S19>:1:7' */
  e = 2.0 * rtu_y * 0.25;

  /* '<S19>:1:8' */
  f = ((rtu_x * rtu_x + 0.0081) + rtu_y * rtu_y) + 2.0 * rtu_x * 0.09;

  /* '<S19>:1:9' */
  a = 2.0 * rtu_x * 0.25 + -0.045;

  /* '<S19>:1:10' */
  b = 2.0 * rtu_y * 0.25;

  /* '<S19>:1:11' */
  c = ((rtu_x * rtu_x + 0.0081) + rtu_y * rtu_y) - 2.0 * rtu_x * 0.09;

  /* '<S19>:1:15' */
  localB->theta1 = rt_atan2d_snf(sqrt((p * p + e * e) - f * f) + e, p + f) * 2.0;

  /* '<S19>:1:18' */
  p = rt_atan2d_snf(b - sqrt((a * a + b * b) - c * c), a + c) * 2.0;
  if (p < -3.4906585039886591) {
    /* '<S19>:1:19' */
    /* '<S19>:1:20' */
    p += 6.2831853071795862;
  }

  localB->theta2 = p;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Cinematica Inversa vel'
 *    '<S5>/Cinematica Inversa vel'
 */
void StateFlowG_CinematicaInversavel(real_T rtu_theta1, real_T rtu_theta2,
  real_T rtu_x, real_T rtu_y, real_T rtu_xp, real_T rtu_yp,
  B_CinematicaInversavel_StateF_T *localB)
{
  real_T D2;
  real_T J21;
  real_T J_idx_0;
  real_T J_idx_2;
  real_T J_idx_1;
  real_T J_idx_3;
  real_T c_idx_0;

  /* MATLAB Function 'Movimento/Cinematica Inversa vel': '<S21>:1' */
  /* '<S21>:1:3' */
  /* '<S21>:1:4' */
  /* '<S21>:1:6' */
  /* '<S21>:1:8' */
  /* '<S21>:1:10' */
  D2 = (rtu_y - 0.25 * sin(rtu_theta1)) - (rtu_y - 0.25 * sin(rtu_theta2)) *
    ((rtu_x + 0.09) - 0.25 * cos(rtu_theta1)) / ((rtu_x - 0.09) - 0.25 * cos
    (rtu_theta2));

  /* '<S21>:1:12' */
  J21 = (((rtu_x + 0.09) - 0.25 * cos(rtu_theta1)) * (-0.25 * sin(rtu_theta1)) +
         (rtu_y - 0.25 * sin(rtu_theta1)) * (0.25 * cos(rtu_theta1))) / D2;

  /* '<S21>:1:14' */
  D2 = ((rtu_y - 0.25 * sin(rtu_theta2)) * (-0.25 * cos(rtu_theta2)) * ((rtu_x +
          0.09) - 0.25 * cos(rtu_theta1)) / ((rtu_x - 0.09) - 0.25 * cos
         (rtu_theta2)) + ((rtu_x + 0.09) - 0.25 * cos(rtu_theta1)) * (0.25 * sin
         (rtu_theta2))) / D2;

  /* '<S21>:1:16' */
  /* '<S21>:1:18' */
  /* '<S21>:1:20' */
  J_idx_0 = -(rtu_y - 0.25 * sin(rtu_theta2)) / ((rtu_x - 0.09) - 0.25 * cos
    (rtu_theta2)) * J21;
  J_idx_2 = (-(rtu_y - 0.25 * sin(rtu_theta2)) / ((rtu_x - 0.09) - 0.25 * cos
              (rtu_theta2)) * D2 - 0.25 * sin(rtu_theta2)) + (rtu_y - 0.25 * sin
    (rtu_theta2)) / ((rtu_x - 0.09) - 0.25 * cos(rtu_theta2)) * (0.25 * cos
    (rtu_theta2));
  J_idx_1 = J21;
  J_idx_3 = D2;

  /* '<S21>:1:22' */
  if (fabs(J_idx_1) > fabs(J_idx_0)) {
    J21 = J_idx_0 / J_idx_1;
    D2 = 1.0 / (J21 * J_idx_3 - J_idx_2);
    c_idx_0 = J_idx_3 / J_idx_1 * D2;
    J_idx_3 = -D2;
    J_idx_0 = -J_idx_2 / J_idx_1 * D2;
    D2 *= J21;
  } else {
    J21 = J_idx_1 / J_idx_0;
    D2 = 1.0 / (J_idx_3 - J21 * J_idx_2);
    c_idx_0 = J_idx_3 / J_idx_0 * D2;
    J_idx_3 = -J21 * D2;
    J_idx_0 = -J_idx_2 / J_idx_0 * D2;
  }

  J_idx_2 = c_idx_0 * rtu_xp;
  J_idx_2 += J_idx_0 * rtu_yp;
  J21 = J_idx_2;
  J_idx_2 = J_idx_3 * rtu_xp;
  J_idx_2 += D2 * rtu_yp;

  /* '<S21>:1:23' */
  /* '<S21>:1:24' */
  localB->theta1_p = J21;
  localB->theta2_p = J_idx_2;
}

/*
 * Output and update for atomic system:
 *    '<S33>/Asse A conv bracc'
 *    '<S33>/Asse B conv brac1'
 *    '<S5>/Asse B conv brac1'
 */
void StateFlowGUI_AsseAconvbracc(real_T rtu_p, B_AsseAconvbracc_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento/Posizioni/Asse A conv bracc': '<S45>:1' */
  /* '<S45>:1:2' */
  localB->pos_B_conv = rtu_p * 6.2831853071795862 / 16384.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S34>/Vel Asse A conv'
 *    '<S84>/Vel Asse A conv'
 */
void StateFlowGUI_VelAsseAconv(real_T rtu_vA, B_VelAsseAconv_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento/Velocita /Vel Asse A conv': '<S68>:1' */
  /* '<S68>:1:2' */
  localB->vel_A_conv = rtu_vA * 6.2831853071795862 / 163840.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S34>/Vel Asse B conv'
 *    '<S84>/Vel Asse B conv'
 */
void StateFlowGUI_VelAsseBconv(real_T rtu_p, B_VelAsseBconv_StateFlowGUI_T
  *localB)
{
  /* MATLAB Function 'Movimento/Velocita /Vel Asse B conv': '<S69>:1' */
  /* '<S69>:1:2' */
  localB->vel_B_conv = rtu_p * 6.2831853071795862 / 163840.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S94>/MATLAB Function'
 *    '<S98>/MATLAB Function'
 *    '<S102>/MATLAB Function'
 *    '<S104>/MATLAB Function'
 */
void StateFlowGUI_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateFlowGUI_T *localB)
{
  /* MATLAB Function 'Out Asse A Braccia/Fungo/MATLAB Function': '<S97>:1' */
  if ((rtu_old == 0.0) && (rtu_now == 1.0)) {
    /* '<S97>:1:2' */
    /* '<S97>:1:3' */
    localB->y = 1.0;
  } else {
    /* '<S97>:1:5' */
    localB->y = rtu_old;
  }
}

/*
 * Output and update for atomic system:
 *    '<S13>/Asse B'
 *    '<S13>/Rifermento Asse A Vite'
 */
void StateFlowGUI_AsseB(real_T rtu_t, real_T rtu_h, real_T rtu_T,
  B_AsseB_StateFlowGUI_T *localB)
{
  real_T x;
  real_T F;

  /* MATLAB Function 'Sistema Vite/Asse B': '<S117>:1' */
  /* '<S117>:1:3' */
  /* '<S117>:1:4' */
  x = rtu_t / rtu_T;

  /* '<S117>:1:5' */
  /* '<S117>:1:6' */
  if ((x >= 0.0) && (x < 0.3)) {
    /* '<S117>:1:8' */
    /* '<S117>:1:10' */
    F = 4.7619047619047619 * x;

    /* '<S117>:1:11' */
    x = x * x * 4.7619047619047619 / 2.0;
  } else if ((x >= 0.3) && (x < 0.7)) {
    /* '<S117>:1:12' */
    /* '<S117>:1:14' */
    F = 1.4285714285714286;

    /* '<S117>:1:15' */
    x = (x - 0.3) * 1.4285714285714286 + 0.21428571428571427;
  } else if ((x >= 0.7) && (x <= 1.0)) {
    /* '<S117>:1:16' */
    /* '<S117>:1:18' */
    /* '<S117>:1:19' */
    F = 1.4285714285714286 - (x - 0.7) * 4.7619047619047619;

    /* '<S117>:1:20' */
    x = ((x - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x - 0.7) * (x
      - 0.7) * 4.7619047619047619 / 2.0;
  } else {
    /* '<S117>:1:23' */
    F = 0.0;

    /* '<S117>:1:24' */
    x = 1.0000000000000002;
  }

  /* '<S117>:1:27' */
  localB->ldm_pos = x * rtu_h;

  /* '<S117>:1:28' */
  localB->ldm_vel = F * rtu_h / rtu_T;
}

/* Function for Chart: '<Root>/State flow robot' */
static void StateFlowGUI_enter_atomic_Home(void)
{
  /* Entry 'Home': '<S14>:29' */
  /* Simulink Function 'Homing': '<S14>:31' */
  StateFlowGUI_B.fc = StateFlowGUI_B.IntegertoBitConverter[14];
  StateFlowGUI_B.fcA = StateFlowGUI_B.IntegertoBitConverter_d[7];
  StateFlowGUI_B.fcB = StateFlowGUI_B.IntegertoBitConverter_d[14];

  /* Outputs for Function Call SubSystem: '<S14>/Homing' */
  /* MATLAB Function: '<S130>/MATLAB Function' */
  /* MATLAB Function 'State flow robot/Homing/MATLAB Function': '<S133>:1' */
  /* '<S133>:1:3' */
  StateFlowGUI_B.CA = -250.0;

  /* '<S133>:1:4' */
  StateFlowGUI_B.CB = -250.0;

  /* '<S133>:1:5' */
  StateFlowGUI_B.CH = -600.0;
  if (StateFlowGUI_B.fc < 1.0) {
    /* '<S133>:1:7' */
    /* '<S133>:1:8' */
    StateFlowGUI_B.CH = 0.0;
  }

  if (StateFlowGUI_B.fcA == 1.0) {
    /* '<S133>:1:10' */
    /* '<S133>:1:11' */
    StateFlowGUI_B.CA = 0.0;
  }

  if (StateFlowGUI_B.fcB == 1.0) {
    /* '<S133>:1:13' */
    /* '<S133>:1:14' */
    StateFlowGUI_B.CB = 0.0;
  }

  /* End of MATLAB Function: '<S130>/MATLAB Function' */
  StateFlowGUI_DW.Homing_SubsysRanBC = 4;

  /* End of Outputs for SubSystem: '<S14>/Homing' */
  StateFlowGUI_B.CoppiaA = StateFlowGUI_B.CA;
  StateFlowGUI_B.CoppiaB = StateFlowGUI_B.CB;
  StateFlowGUI_B.CoppiaH = StateFlowGUI_B.CH;
  StateFlowGUI_B.Bool = 1.0;
  StateFlowGUI_DW.conv = 5.9921124526782858E-6;
  StateFlowGUI_DW.conv_vite = 1.220703125E-7;
  StateFlowGUI_B.Luci = 1.0;
  StateFlowGUI_DW.C1 = 1.0;
  StateFlowGUI_DW.C2 = 1.0;
  StateFlowGUI_B.Kp_n = StateFlowGUI_B.Kp;
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

/* Function for MATLAB Function: '<S27>/Quadrato' */
static real_T StateFlowGUI_mpower(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

/* Function for MATLAB Function: '<S27>/g' */
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

/* Function for MATLAB Function: '<S27>/Cerchi Tangenti' */
static void StateFlowGUI_ldm7t(real_T x, real_T *G, real_T *F, real_T *f)
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

/* Function for MATLAB Function: '<S27>/spirale' */
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

/* Model output function */
static void StateFlowGUI_output(void)
{
  int32_T bitIdx;
  int32_T i;
  uint32_T u;
  boolean_T sf_internal_predicateOutput;
  real_T A;
  real_T B;
  real_T b_a;
  real_T x2;
  real_T x3;
  real_T x4;
  real_T x5;
  real_T F;
  real_T T5;
  real_T J[4];
  real_T Theta_pp[2];
  real_T g_a;
  real_T i_a;
  real_T j_a;
  real_T N21;
  real_T N22;
  real_T D2p;
  real_T J1[4];
  real_T J2[4];
  real_T J3[4];
  real_T J4[4];
  real_T JE[4];
  real_T M[4];
  static const real_T b_y[4] = { 0.0522, 0.0, 0.0, 0.0522 };

  static const real_T Jm[4] = { 1.7E-5, 0.0, 0.0, 1.7E-5 };

  static const real_T o_a[4] = { 0.015625, 0.0, 0.0, 0.015625 };

  real_T tmp[4];
  real_T tmp_0[4];
  real_T b_y_0[4];
  real_T tmp_1[4];
  real_T tmp_2[4];
  real_T tmp_3[4];
  real_T tmp_4[4];
  real_T M_0[2];
  real_T J_p_idx_0;
  real_T J_p_idx_1;
  real_T J_p_idx_3;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  boolean_T exitg1;

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
    x2 = floor(StateFlowGUI_P.AsseAbraccia_Value);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion7 = (int8_T)(x2 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x2 : (int32_T)(int8_T)(uint8_T)x2);

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
    x2 = floor(StateFlowGUI_P.AsseAvite_Value);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion2 = (int8_T)(x2 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x2 : (int32_T)(int8_T)(uint8_T)x2);

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
    x2 = floor(StateFlowGUI_P.AsseBbraccia_Value);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion5 = (int8_T)(x2 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x2 : (int32_T)(int8_T)(uint8_T)x2);

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
    x2 = floor(StateFlowGUI_P.AsseBvite_Value);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 256.0);
    }

    StateFlowGUI_B.DataTypeConversion1 = (int8_T)(x2 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x2 : (int32_T)(int8_T)(uint8_T)x2);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    /* Clock: '<Root>/Clock' */
    StateFlowGUI_B.Clock = StateFlowGUI_M->Timing.t[0];

    /* S-Function (xpcethercatpdorx): '<S11>/Motore vite A' */

    /* Level2 S-Function Block: '<S11>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S11>/convert' */
    StateFlowGUI_B.convert = StateFlowGUI_B.MotoreviteA;

    /* S-Function (xpcethercatpdorx): '<S11>/Motore vite B' */

    /* Level2 S-Function Block: '<S11>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S11>/convert 10 ' */
    StateFlowGUI_B.convert10 = StateFlowGUI_B.MotoreviteB;

    /* S-Function (xpcethercatpdorx): '<S15>/Status Word' */

    /* Level2 S-Function Block: '<S15>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S15>/Data Type Conversion6' */
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

    /* S-Function (xpcethercatpdorx): '<S10>/Motore braccia A' */

    /* Level2 S-Function Block: '<S10>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert' */
    StateFlowGUI_B.convert_g = StateFlowGUI_B.MotorebracciaA;

    /* S-Function (xpcethercatpdorx): '<S10>/Motore braccia B' */

    /* Level2 S-Function Block: '<S10>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S10>/convert 10 ' */
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

    /* Chart: '<Root>/State flow robot' */
    if (StateFlowGUI_DW.temporalCounter_i1 < 16383U) {
      StateFlowGUI_DW.temporalCounter_i1++;
    }

    /* Gateway: State flow robot */
    StateFlowGUI_DW.sfEvent = -1;

    /* During: State flow robot */
    if (StateFlowGUI_DW.is_active_c15_StateFlowGUI == 0U) {
      /* Entry: State flow robot */
      StateFlowGUI_DW.is_active_c15_StateFlowGUI = 1U;

      /* Entry Internal: State flow robot */
      /* Transition: '<S14>:36' */
      StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step1;

      /* Entry 'Step1': '<S14>:28' */
      StateFlowGUI_B.Bool = -1.0;
    } else {
      switch (StateFlowGUI_DW.is_c15_StateFlowGUI) {
       case StateFlowGUI_IN_Controllo:
        StateFlowGUI_B.FineLavorazione = 1.0;
        StateFlowGUI_B.Luci = 5.0;
        StateFlowGUI_B.Bool = 5.0;

        /* During 'Controllo': '<S14>:69' */
        sf_internal_predicateOutput = ((StateFlowGUI_DW.temporalCounter_i1 >=
          10000U) && (StateFlowGUI_B.StartHome == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S14>:243' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Home;
          StateFlowGUI_enter_atomic_Home();
        }
        break;

       case StateFlowGUI_IN_Coppie:
        StateFlowGUI_B.Luci = 2.0;

        /* During 'Coppie': '<S14>:95' */
        if (StateFlowGUI_B.convert_g - StateFlowGUI_DW.OffA_0 >=
            1.9198621771937625 / StateFlowGUI_DW.conv) {
          /* Transition: '<S14>:131' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetA;

          /* Entry 'SetA': '<S14>:129' */
          StateFlowGUI_B.CoppiaA = 0.0;
          StateFlowGUI_DW.C1 = 0.0;
        } else {
          if (StateFlowGUI_B.convert10_d - StateFlowGUI_DW.OffB_0 >=
              0.69813170079773179 / StateFlowGUI_DW.conv) {
            /* Transition: '<S14>:132' */
            StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetB;

            /* Entry 'SetB': '<S14>:130' */
            StateFlowGUI_B.CoppiaB = 0.0;
            StateFlowGUI_DW.C2 = 0.0;
          }
        }
        break;

       case StateFlowGUI_IN_Discesa_Vite:
        StateFlowGUI_B.Hb = 1.0;

        /* During 'Discesa_Vite': '<S14>:176' */
        if (StateFlowGUI_B.convert - StateFlowGUI_B.OffA_vite >= 0.038 /
            StateFlowGUI_DW.conv_vite) {
          /* Transition: '<S14>:177' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_OffSet;

          /* Entry 'OffSet': '<S14>:87' */
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
        }
        break;

       case StateFlowGUI_IN_Home:
        StateFlowGUI_B.FineLavorazione = 0.0;
        StateFlowGUI_B.Hv = 0.0;
        StateFlowGUI_B.Luci = 1.0;
        StateFlowGUI_B.Hb = 0.0;
        StateFlowGUI_B.Bool = 1.0;

        /* During 'Home': '<S14>:29' */
        sf_internal_predicateOutput = ((StateFlowGUI_B.IntegertoBitConverter_d[7]
          == 1.0) && (StateFlowGUI_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S14>:37' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step3;

          /* Entry 'Step3': '<S14>:225' */
          StateFlowGUI_B.CoppiaA = 0.0;
          StateFlowGUI_B.CoppiaB = 0.0;
        } else {
          if (StateFlowGUI_B.IntegertoBitConverter[14] == 0.0) {
            /* Transition: '<S14>:127' */
            StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step2;

            /* Entry 'Step2': '<S14>:126' */
            StateFlowGUI_B.CoppiaH = 0.0;
          }
        }
        break;

       case StateFlowGUI_IN_OffSet:
        StateFlowGUI_B.Hv = 1.0;
        StateFlowGUI_B.Luci = 3.0;
        StateFlowGUI_B.Bool = 2.0;

        /* During 'OffSet': '<S14>:87' */
        if (StateFlowGUI_B.StartWork == 1.0) {
          /* Transition: '<S14>:90' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Traiettoria;
          StateFlowGUI_DW.temporalCounter_i1 = 0U;

          /* Entry 'Traiettoria': '<S14>:147' */
          StateFlowGUI_B.OffT = StateFlowGUI_B.Clock;
          StateFlowGUI_B.OffA_vite = StateFlowGUI_B.convert;
          StateFlowGUI_B.OffB_vite = StateFlowGUI_B.convert10;
          StateFlowGUI_B.Luci = 4.0;
          StateFlowGUI_B.Bool = 4.0;
        }
        break;

       case StateFlowGUI_IN_SetA:
        /* During 'SetA': '<S14>:129' */
        if (StateFlowGUI_B.convert10_d - StateFlowGUI_DW.OffB_0 >=
            0.69813170079773179 / StateFlowGUI_DW.conv) {
          /* Transition: '<S14>:133' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetB1;

          /* Entry 'SetB1': '<S14>:145' */
          StateFlowGUI_B.CoppiaB = 0.0;
          StateFlowGUI_DW.C2 = 0.0;
        }
        break;

       case StateFlowGUI_IN_SetA1:
        /* During 'SetA1': '<S14>:146' */
        if (StateFlowGUI_DW.C1 == 0.0) {
          /* Transition: '<S14>:136' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S14>:176' */
          StateFlowGUI_B.OffA_vite = StateFlowGUI_B.convert;
          StateFlowGUI_B.CoppiaH = 700.0;
          StateFlowGUI_B.Hb = 1.0;
        }
        break;

       case StateFlowGUI_IN_SetB:
        /* During 'SetB': '<S14>:130' */
        if (StateFlowGUI_B.convert_g - StateFlowGUI_DW.OffA_0 >=
            1.9198621771937625 / StateFlowGUI_DW.conv) {
          /* Transition: '<S14>:134' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_SetA1;

          /* Entry 'SetA1': '<S14>:146' */
          StateFlowGUI_B.CoppiaA = 0.0;
          StateFlowGUI_DW.C1 = 0.0;
        }
        break;

       case StateFlowGUI_IN_SetB1:
        /* During 'SetB1': '<S14>:145' */
        if (StateFlowGUI_DW.C2 == 0.0) {
          /* Transition: '<S14>:135' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S14>:176' */
          StateFlowGUI_B.OffA_vite = StateFlowGUI_B.convert;
          StateFlowGUI_B.CoppiaH = 700.0;
          StateFlowGUI_B.Hb = 1.0;
        }
        break;

       case StateFlowGUI_IN_Step1:
        StateFlowGUI_B.Bool = -1.0;

        /* During 'Step1': '<S14>:28' */
        sf_internal_predicateOutput = ((StateFlowGUI_B.DataTypeConversion6 ==
          1079.0) && (StateFlowGUI_B.StartRobot == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S14>:35' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Step4;

          /* Entry 'Step4': '<S14>:231' */
          StateFlowGUI_B.Bool = 0.0;
          StateFlowGUI_B.Enable = 1.0;
        }
        break;

       case StateFlowGUI_IN_Step2:
        /* During 'Step2': '<S14>:126' */
        sf_internal_predicateOutput = ((StateFlowGUI_B.IntegertoBitConverter_d[7]
          == 1.0) && (StateFlowGUI_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S14>:128' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Coppie;

          /* Entry 'Coppie': '<S14>:95' */
          StateFlowGUI_DW.OffA_0 = StateFlowGUI_B.convert_g;
          StateFlowGUI_DW.OffB_0 = StateFlowGUI_B.convert10_d;
          StateFlowGUI_B.CoppiaA = 250.0;
          StateFlowGUI_B.CoppiaB = 250.0;
          StateFlowGUI_B.CoppiaH = 0.0;
          StateFlowGUI_B.Luci = 2.0;
        }
        break;

       case StateFlowGUI_IN_Step3:
        /* During 'Step3': '<S14>:225' */
        if (StateFlowGUI_B.IntegertoBitConverter[14] == 0.0) {
          /* Transition: '<S14>:226' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Coppie;

          /* Entry 'Coppie': '<S14>:95' */
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

        /* During 'Step4': '<S14>:231' */
        if (StateFlowGUI_B.StartHome == 1.0) {
          /* Transition: '<S14>:232' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Home;
          StateFlowGUI_enter_atomic_Home();
        }
        break;

       default:
        StateFlowGUI_B.Luci = 4.0;
        StateFlowGUI_B.Bool = 4.0;

        /* During 'Traiettoria': '<S14>:147' */
        if (StateFlowGUI_DW.temporalCounter_i1 >= 5000U) {
          /* Transition: '<S14>:148' */
          StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_Controllo;
          StateFlowGUI_DW.temporalCounter_i1 = 0U;

          /* Entry 'Controllo': '<S14>:69' */
          StateFlowGUI_B.Bool = 5.0;
          StateFlowGUI_B.Luci = 5.0;
          StateFlowGUI_B.FineLavorazione = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/State flow robot' */
    /* MATLAB Function: '<S3>/MATLAB Function1' */
    /* MATLAB Function 'LED Status/MATLAB Function1': '<S17>:1' */
    if ((StateFlowGUI_B.Luci == 1.0) || (StateFlowGUI_B.Luci == 2.0) ||
        (StateFlowGUI_B.Luci == 4.0)) {
      /* '<S17>:1:2' */
      /* '<S17>:1:3' */
      StateFlowGUI_B.y_b = 1.0;
    } else {
      /* '<S17>:1:5' */
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
    /* MATLAB Function 'LED Status/MATLAB Function': '<S16>:1' */
    if ((StateFlowGUI_B.Luci == 2.0) || (StateFlowGUI_B.Luci == 3.0)) {
      /* '<S16>:1:2' */
      /* '<S16>:1:3' */
      StateFlowGUI_B.y_i = 1.0;
    } else {
      /* '<S16>:1:5' */
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
    /* MATLAB Function 'LED Status/MATLAB Function2': '<S18>:1' */
    if ((StateFlowGUI_B.Luci == 4.0) || (StateFlowGUI_B.Luci == 5.0)) {
      /* '<S18>:1:2' */
      /* '<S18>:1:3' */
      StateFlowGUI_B.y_f = 1.0;
    } else {
      /* '<S18>:1:5' */
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

    /* Memory: '<S94>/Memory' */
    StateFlowGUI_B.Memory = StateFlowGUI_DW.Memory_PreviousInput;

    /* Sum: '<S33>/Sum12' */
    StateFlowGUI_B.Sum12 = StateFlowGUI_B.convert10_d - StateFlowGUI_B.OffB;

    /* MATLAB Function: '<S33>/Asse B conv brac1' */
    StateFlowGUI_AsseAconvbracc(StateFlowGUI_B.Sum12,
      &StateFlowGUI_B.sf_AsseBconvbrac1);

    /* Sum: '<S33>/Sum4' incorporates:
     *  Constant: '<S33>/Constant4'
     */
    StateFlowGUI_B.Sum4 = StateFlowGUI_B.sf_AsseBconvbrac1.pos_B_conv +
      StateFlowGUI_P.Constant4_Value;

    /* Sum: '<S33>/Sum9' */
    StateFlowGUI_B.Sum9 = StateFlowGUI_B.convert_g - StateFlowGUI_B.OffA;

    /* MATLAB Function: '<S33>/Asse A conv bracc' */
    StateFlowGUI_AsseAconvbracc(StateFlowGUI_B.Sum9,
      &StateFlowGUI_B.sf_AsseAconvbracc);

    /* Sum: '<S33>/Sum7' incorporates:
     *  Constant: '<S33>/Constant5'
     */
    StateFlowGUI_B.Sum7 = StateFlowGUI_B.sf_AsseAconvbracc.pos_B_conv +
      StateFlowGUI_P.Constant5_Value;

    /* S-Function (xpcethercatpdorx): '<S35>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S35>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S35>/Velocity B' */
    StateFlowGUI_B.VelocityB = StateFlowGUI_B.EtherCATPDOReceive15;

    /* MATLAB Function: '<S35>/Vel Asse B conv' */
    /* MATLAB Function 'Movimento/Velocita braccia 1/Vel Asse B conv': '<S71>:1' */
    /* '<S71>:1:2' */
    StateFlowGUI_B.vel_B_conv_a = StateFlowGUI_B.VelocityB * 6.2831853071795862 /
      163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S35>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S35>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S35>/Velocity A' */
    StateFlowGUI_B.VelocityA = StateFlowGUI_B.EtherCATPDOReceive14;

    /* MATLAB Function: '<S35>/Vel Asse A conv' */
    /* MATLAB Function 'Movimento/Velocita braccia 1/Vel Asse A conv': '<S70>:1' */
    /* '<S70>:1:2' */
    StateFlowGUI_B.vel_A_conv_b = StateFlowGUI_B.VelocityA * 6.2831853071795862 /
      163840.0 / 64.0;

    /* MATLAB Function: '<S32>/Cinematica Inversa2' incorporates:
     *  Constant: '<S32>/Constant'
     *  Constant: '<S32>/Constant1'
     */
    /* MATLAB Function 'Movimento/Pos iniziali/Cinematica Inversa2': '<S44>:1' */
    /* '<S44>:1:3' */
    /* '<S44>:1:4' */
    /* '<S44>:1:6' */
    J_p_idx_1 = sin(StateFlowGUI_P.Constant1_Value) - sin
      (StateFlowGUI_P.Constant_Value_b);
    b_a = -0.18 - (cos(StateFlowGUI_P.Constant1_Value) - cos
                   (StateFlowGUI_P.Constant_Value_b)) * 0.25;
    A = J_p_idx_1 * J_p_idx_1 * 0.0625 + b_a * b_a;

    /* '<S44>:1:7' */
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

    /* '<S44>:1:10' */
    x2 = cos(StateFlowGUI_P.Constant1_Value) + cos
      (StateFlowGUI_P.Constant_Value_b);
    x4 = -0.18 - (cos(StateFlowGUI_P.Constant1_Value) - cos
                  (StateFlowGUI_P.Constant_Value_b)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S44>:1:14' */
    A = (sqrt(B * B - ((x2 * x2 * 0.00050625 - (-0.18 - (cos
              (StateFlowGUI_P.Constant1_Value) - cos
              (StateFlowGUI_P.Constant_Value_b)) * 0.25) * ((cos
              (StateFlowGUI_P.Constant1_Value) + cos
              (StateFlowGUI_P.Constant_Value_b)) * 0.0225) * (-0.18 - 0.5 * cos
             (StateFlowGUI_P.Constant1_Value))) + (0.045 * cos
            (StateFlowGUI_P.Constant1_Value) + 0.0081) * (x4 * x4)) * (4.0 * A))
         + -B) / (2.0 * A);

    /*  Posizione X end-effector */
    /* '<S44>:1:16' */
    StateFlowGUI_B.x0_l = (A * 0.25 * (sin(StateFlowGUI_P.Constant1_Value) - sin
      (StateFlowGUI_P.Constant_Value_b)) - (cos(StateFlowGUI_P.Constant1_Value)
      + cos(StateFlowGUI_P.Constant_Value_b)) * 0.0225) / (-0.18 - (cos
      (StateFlowGUI_P.Constant1_Value) - cos(StateFlowGUI_P.Constant_Value_b)) *
      0.25);
    StateFlowGUI_B.y0_p = A;

    /* Sum: '<S24>/Sum2' */
    StateFlowGUI_B.Sum2 = StateFlowGUI_B.Clock - StateFlowGUI_B.OffT;

    /* MATLAB Function: '<S27>/Quadrato' incorporates:
     *  Constant: '<S27>/Alzata Q'
     *  Constant: '<S27>/Periodo Q'
     */
    /* MATLAB Function 'Movimento/Leggi di moto/Quadrato': '<S41>:1' */
    /* '<S41>:1:2' */
    /* '<S41>:1:3' */
    /* '<S41>:1:4' */
    A = StateFlowGUI_B.Sum2 / (0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S41>:1:5' */
    x2 = (StateFlowGUI_B.Sum2 - 0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S41>:1:6' */
    x3 = (StateFlowGUI_B.Sum2 - 1.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S41>:1:7' */
    x4 = (StateFlowGUI_B.Sum2 - 2.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S41>:1:8' */
    x5 = (StateFlowGUI_B.Sum2 - 3.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0) /
      (0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0);

    /* '<S41>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((StateFlowGUI_B.Sum2 > 0.0) && (StateFlowGUI_B.Sum2 <= 0.5 *
         StateFlowGUI_P.PeriodoQ_Value / 4.0)) {
      /* '<S41>:1:14' */
      if ((A >= 0.0) && (A < 0.1)) {
        /* '<S41>:1:16' */
        /* acc crescente positiva */
        /* '<S41>:1:17' */
        B = 55.555555555555543 * A;

        /* '<S41>:1:18' */
        F = A * A * 27.777777777777771;

        /* '<S41>:1:19' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(A);
      } else if ((A >= 0.1) && (A < 0.30000000000000004)) {
        /* '<S41>:1:22' */
        /* acc costante positiva */
        /* '<S41>:1:23' */
        B = 5.5555555555555545;

        /* '<S41>:1:24' */
        F = 5.5555555555555545 * A - 0.27777777777777773;

        /* '<S41>:1:25' */
        x2 = (A * A * 2.7777777777777772 - 0.27777777777777773 * A) +
          0.0092592592592592587;
      } else if ((A >= 0.30000000000000004) && (A < 0.4)) {
        /* '<S41>:1:28' */
        /* acc decrescente positiva */
        /* '<S41>:1:29' */
        B = -55.555555555555543 * A + 22.222222222222218;

        /* '<S41>:1:30' */
        F = (A * A * -27.777777777777771 + 22.222222222222218 * A) -
          2.7777777777777777;

        /* '<S41>:1:31' */
        x2 = ((((A * A * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(A)) - 2.7777777777777777 * A) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((A >= 0.4) && (A < 0.6)) {
        /* '<S41>:1:35' */
        /* acc costante nulla */
        /* '<S41>:1:36' */
        B = 0.0;

        /* '<S41>:1:37' */
        F = 1.6666666666666665;

        /* '<S41>:1:38' */
        x2 = (1.6666666666666665 * A - 0.44444444444444442) + 0.1111111111111111;
      } else if ((A >= 0.6) && (A < 0.7)) {
        /* '<S41>:1:41' */
        /* acc decrescente negativa */
        /* '<S41>:1:42' */
        B = -55.555555555555543 * A + 33.333333333333321;

        /* '<S41>:1:43' */
        F = ((A * A * -27.777777777777771 + 33.333333333333321 * A) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S41>:1:44' */
        x2 = (((((A * A * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(A)) + 1.6666666666666665 * A) -
                9.9999999999999982 * A) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((A >= 0.7) && (A < 0.9)) {
        /* '<S41>:1:48' */
        /* acc costante negativa */
        /* '<S41>:1:49' */
        B = -5.5555555555555545;

        /* '<S41>:1:50' */
        F = (-5.5555555555555545 * A + 5.5555555555555545) - 0.27777777777777773;

        /* '<S41>:1:51' */
        x2 = (((A * A * -2.7777777777777772 + 5.5555555555555545 * A) -
               0.27777777777777773 * A) + 1.0) - 2.5092592592592586;
      } else if ((A >= 0.9) && (A <= 1.0)) {
        /* '<S41>:1:54' */
        /* acc crescente negativa */
        /* '<S41>:1:55' */
        B = (A - 1.0) * 55.555555555555543;

        /* '<S41>:1:56' */
        F = (A * A * 27.777777777777771 - 55.555555555555543 * A) +
          27.777777777777771;

        /* '<S41>:1:57' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(A) - A * A *
                27.777777777777771) + 27.777777777777771 * A) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S41>:1:61' */
        B = 0.0;

        /* '<S41>:1:62' */
        F = 0.0;

        /* '<S41>:1:63' */
        x2 = 1.0;
      }

      /* '<S41>:1:66' */
      StateFlowGUI_B.xq = x2 * StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S41>:1:67' */
      StateFlowGUI_B.xq_p = StateFlowGUI_P.AlzataQ_Value / 2.0 * F /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S41>:1:68' */
      StateFlowGUI_B.yq = 0.0;

      /* '<S41>:1:69' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S41>:1:70' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.xq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * B / (A * A);

      /* '<S41>:1:71' */
      StateFlowGUI_B.yq_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 0.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 1.5 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S41>:1:73' */
      /* '<S41>:1:74' */
      /*  Cj = Ca/xj; */
      if ((x2 >= 0.0) && (x2 < 0.1)) {
        /* '<S41>:1:77' */
        /* acc crescente positiva */
        /* '<S41>:1:78' */
        B = 55.555555555555543 * x2;

        /* '<S41>:1:79' */
        F = x2 * x2 * 27.777777777777771;

        /* '<S41>:1:80' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x2);
      } else if ((x2 >= 0.1) && (x2 < 0.30000000000000004)) {
        /* '<S41>:1:83' */
        /* acc costante positiva */
        /* '<S41>:1:84' */
        B = 5.5555555555555545;

        /* '<S41>:1:85' */
        F = 5.5555555555555545 * x2 - 0.27777777777777773;

        /* '<S41>:1:86' */
        x2 = (x2 * x2 * 2.7777777777777772 - 0.27777777777777773 * x2) +
          0.0092592592592592587;
      } else if ((x2 >= 0.30000000000000004) && (x2 < 0.4)) {
        /* '<S41>:1:89' */
        /* acc decrescente positiva */
        /* '<S41>:1:90' */
        B = -55.555555555555543 * x2 + 22.222222222222218;

        /* '<S41>:1:91' */
        F = (x2 * x2 * -27.777777777777771 + 22.222222222222218 * x2) -
          2.7777777777777777;

        /* '<S41>:1:92' */
        x2 = ((((x2 * x2 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x2)) - 2.7777777777777777 * x2) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x2 >= 0.4) && (x2 < 0.6)) {
        /* '<S41>:1:96' */
        /* acc costante nulla */
        /* '<S41>:1:97' */
        B = 0.0;

        /* '<S41>:1:98' */
        F = 1.6666666666666665;

        /* '<S41>:1:99' */
        x2 = (1.6666666666666665 * x2 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x2 >= 0.6) && (x2 < 0.7)) {
        /* '<S41>:1:102' */
        /* acc decrescente negativa */
        /* '<S41>:1:103' */
        B = -55.555555555555543 * x2 + 33.333333333333321;

        /* '<S41>:1:104' */
        F = ((x2 * x2 * -27.777777777777771 + 33.333333333333321 * x2) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S41>:1:105' */
        x2 = (((((x2 * x2 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x2)) + 1.6666666666666665 * x2) -
                9.9999999999999982 * x2) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x2 >= 0.7) && (x2 < 0.9)) {
        /* '<S41>:1:109' */
        /* acc costante negativa */
        /* '<S41>:1:110' */
        B = -5.5555555555555545;

        /* '<S41>:1:111' */
        F = (-5.5555555555555545 * x2 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S41>:1:112' */
        x2 = (((x2 * x2 * -2.7777777777777772 + 5.5555555555555545 * x2) -
               0.27777777777777773 * x2) + 1.0) - 2.5092592592592586;
      } else if ((x2 >= 0.9) && (x2 <= 1.0)) {
        /* '<S41>:1:115' */
        /* acc crescente negativa */
        /* '<S41>:1:116' */
        B = (x2 - 1.0) * 55.555555555555543;

        /* '<S41>:1:117' */
        F = (x2 * x2 * 27.777777777777771 - 55.555555555555543 * x2) +
          27.777777777777771;

        /* '<S41>:1:118' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x2) - x2 * x2 *
                27.777777777777771) + 27.777777777777771 * x2) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S41>:1:122' */
        B = 0.0;

        /* '<S41>:1:123' */
        F = 0.0;

        /* '<S41>:1:124' */
        x2 = 1.0;
      }

      /* '<S41>:1:127' */
      StateFlowGUI_B.xq = StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S41>:1:128' */
      StateFlowGUI_B.xq_p = 0.0;

      /* '<S41>:1:129' */
      StateFlowGUI_B.yq = -x2 * StateFlowGUI_P.AlzataQ_Value;

      /* '<S41>:1:130' */
      StateFlowGUI_B.yq_p = -F * StateFlowGUI_P.AlzataQ_Value /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S41>:1:131' */
      StateFlowGUI_B.xq_pp = 0.0;

      /* '<S41>:1:132' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.yq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * -B / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 1.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 2.5 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S41>:1:134' */
      /* '<S41>:1:135' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S41>:1:138' */
        /* acc crescente positiva */
        /* '<S41>:1:139' */
        B = 55.555555555555543 * x3;

        /* '<S41>:1:140' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S41>:1:141' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S41>:1:144' */
        /* acc costante positiva */
        /* '<S41>:1:145' */
        B = 5.5555555555555545;

        /* '<S41>:1:146' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S41>:1:147' */
        x2 = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S41>:1:150' */
        /* acc decrescente positiva */
        /* '<S41>:1:151' */
        B = -55.555555555555543 * x3 + 22.222222222222218;

        /* '<S41>:1:152' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S41>:1:153' */
        x2 = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x3)) - 2.7777777777777777 * x3) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S41>:1:157' */
        /* acc costante nulla */
        /* '<S41>:1:158' */
        B = 0.0;

        /* '<S41>:1:159' */
        F = 1.6666666666666665;

        /* '<S41>:1:160' */
        x2 = (1.6666666666666665 * x3 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S41>:1:163' */
        /* acc decrescente negativa */
        /* '<S41>:1:164' */
        B = -55.555555555555543 * x3 + 33.333333333333321;

        /* '<S41>:1:165' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S41>:1:166' */
        x2 = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x3)) + 1.6666666666666665 * x3) -
                9.9999999999999982 * x3) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S41>:1:170' */
        /* acc costante negativa */
        /* '<S41>:1:171' */
        B = -5.5555555555555545;

        /* '<S41>:1:172' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S41>:1:173' */
        x2 = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
               0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S41>:1:176' */
        /* acc crescente negativa */
        /* '<S41>:1:177' */
        B = (x3 - 1.0) * 55.555555555555543;

        /* '<S41>:1:178' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S41>:1:179' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x3) - x3 * x3 *
                27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S41>:1:183' */
        B = 0.0;

        /* '<S41>:1:184' */
        F = 0.0;

        /* '<S41>:1:185' */
        x2 = 1.0;
      }

      /* '<S41>:1:188' */
      StateFlowGUI_B.xq = StateFlowGUI_P.AlzataQ_Value / 2.0 - x2 *
        StateFlowGUI_P.AlzataQ_Value;

      /* '<S41>:1:189' */
      StateFlowGUI_B.xq_p = -F * StateFlowGUI_P.AlzataQ_Value /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S41>:1:190' */
      StateFlowGUI_B.yq = -StateFlowGUI_P.AlzataQ_Value;

      /* '<S41>:1:191' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S41>:1:192' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.xq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * -B / (A * A);

      /* '<S41>:1:193' */
      StateFlowGUI_B.yq_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 2.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 3.5 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S41>:1:195' */
      /* '<S41>:1:196' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S41>:1:199' */
        /* acc crescente positiva */
        /* '<S41>:1:200' */
        B = 55.555555555555543 * x4;

        /* '<S41>:1:201' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S41>:1:202' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S41>:1:205' */
        /* acc costante positiva */
        /* '<S41>:1:206' */
        B = 5.5555555555555545;

        /* '<S41>:1:207' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S41>:1:208' */
        x2 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S41>:1:211' */
        /* acc decrescente positiva */
        /* '<S41>:1:212' */
        B = -55.555555555555543 * x4 + 22.222222222222218;

        /* '<S41>:1:213' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S41>:1:214' */
        x2 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x4)) - 2.7777777777777777 * x4) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S41>:1:218' */
        /* acc costante nulla */
        /* '<S41>:1:219' */
        B = 0.0;

        /* '<S41>:1:220' */
        F = 1.6666666666666665;

        /* '<S41>:1:221' */
        x2 = (1.6666666666666665 * x4 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S41>:1:224' */
        /* acc decrescente negativa */
        /* '<S41>:1:225' */
        B = -55.555555555555543 * x4 + 33.333333333333321;

        /* '<S41>:1:226' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S41>:1:227' */
        x2 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x4)) + 1.6666666666666665 * x4) -
                9.9999999999999982 * x4) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S41>:1:231' */
        /* acc costante negativa */
        /* '<S41>:1:232' */
        B = -5.5555555555555545;

        /* '<S41>:1:233' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S41>:1:234' */
        x2 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
               0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S41>:1:237' */
        /* acc crescente negativa */
        /* '<S41>:1:238' */
        B = (x4 - 1.0) * 55.555555555555543;

        /* '<S41>:1:239' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S41>:1:240' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x4) - x4 * x4 *
                27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S41>:1:244' */
        B = 0.0;

        /* '<S41>:1:245' */
        F = 0.0;

        /* '<S41>:1:246' */
        x2 = 1.0;
      }

      /* '<S41>:1:249' */
      StateFlowGUI_B.xq = -StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S41>:1:250' */
      StateFlowGUI_B.xq_p = 0.0;

      /* '<S41>:1:251' */
      StateFlowGUI_B.yq = x2 * StateFlowGUI_P.AlzataQ_Value +
        -StateFlowGUI_P.AlzataQ_Value;

      /* '<S41>:1:252' */
      StateFlowGUI_B.yq_p = F * StateFlowGUI_P.AlzataQ_Value /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S41>:1:253' */
      StateFlowGUI_B.xq_pp = 0.0;

      /* '<S41>:1:254' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.yq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * B / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 3.5 * StateFlowGUI_P.PeriodoQ_Value / 4.0)
               && (StateFlowGUI_B.Sum2 <= 4.0 * StateFlowGUI_P.PeriodoQ_Value /
                   4.0)) {
      /* '<S41>:1:256' */
      /* '<S41>:1:257' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S41>:1:260' */
        /* acc crescente positiva */
        /* '<S41>:1:261' */
        B = 55.555555555555543 * x5;

        /* '<S41>:1:262' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S41>:1:263' */
        x2 = 9.259259259259256 * StateFlowGUI_mpower(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S41>:1:266' */
        /* acc costante positiva */
        /* '<S41>:1:267' */
        B = 5.5555555555555545;

        /* '<S41>:1:268' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S41>:1:269' */
        x2 = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S41>:1:272' */
        /* acc decrescente positiva */
        /* '<S41>:1:273' */
        B = -55.555555555555543 * x5 + 22.222222222222218;

        /* '<S41>:1:274' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S41>:1:275' */
        x2 = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                 StateFlowGUI_mpower(x5)) - 2.7777777777777777 * x5) -
               0.44444444444444442) + 9.259259259259256 * StateFlowGUI_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S41>:1:279' */
        /* acc costante nulla */
        /* '<S41>:1:280' */
        B = 0.0;

        /* '<S41>:1:281' */
        F = 1.6666666666666665;

        /* '<S41>:1:282' */
        x2 = (1.6666666666666665 * x5 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S41>:1:285' */
        /* acc decrescente negativa */
        /* '<S41>:1:286' */
        B = -55.555555555555543 * x5 + 33.333333333333321;

        /* '<S41>:1:287' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S41>:1:288' */
        x2 = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                  StateFlowGUI_mpower(x5)) + 1.6666666666666665 * x5) -
                9.9999999999999982 * x5) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * StateFlowGUI_mpower(0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S41>:1:292' */
        /* acc costante negativa */
        /* '<S41>:1:293' */
        B = -5.5555555555555545;

        /* '<S41>:1:294' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S41>:1:295' */
        x2 = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
               0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S41>:1:298' */
        /* acc crescente negativa */
        /* '<S41>:1:299' */
        B = (x5 - 1.0) * 55.555555555555543;

        /* '<S41>:1:300' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S41>:1:301' */
        x2 = (((9.259259259259256 * StateFlowGUI_mpower(x5) - x5 * x5 *
                27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S41>:1:305' */
        B = 0.0;

        /* '<S41>:1:306' */
        F = 0.0;

        /* '<S41>:1:307' */
        x2 = 1.0;
      }

      /* '<S41>:1:310' */
      StateFlowGUI_B.xq = x2 * StateFlowGUI_P.AlzataQ_Value / 2.0 +
        -StateFlowGUI_P.AlzataQ_Value / 2.0;

      /* '<S41>:1:311' */
      StateFlowGUI_B.xq_p = F * StateFlowGUI_P.AlzataQ_Value / 2.0 /
        (StateFlowGUI_P.PeriodoQ_Value / 4.0);

      /* '<S41>:1:312' */
      StateFlowGUI_B.yq = 0.0;

      /* '<S41>:1:313' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S41>:1:314' */
      A = StateFlowGUI_P.PeriodoQ_Value / 4.0;
      StateFlowGUI_B.xq_pp = StateFlowGUI_P.AlzataQ_Value / 2.0 * B / (A * A);

      /* '<S41>:1:315' */
      StateFlowGUI_B.yq_pp = 0.0;
    } else {
      /* '<S41>:1:317' */
      StateFlowGUI_B.xq = 0.0;

      /* '<S41>:1:318' */
      StateFlowGUI_B.yq = 0.0;

      /* '<S41>:1:319' */
      StateFlowGUI_B.xq_p = 0.0;

      /* '<S41>:1:320' */
      StateFlowGUI_B.yq_p = 0.0;

      /* '<S41>:1:321' */
      StateFlowGUI_B.xq_pp = 0.0;

      /* '<S41>:1:322' */
      StateFlowGUI_B.yq_pp = 0.0;
    }

    /* End of MATLAB Function: '<S27>/Quadrato' */

    /* MATLAB Function: '<S27>/Cerchio' incorporates:
     *  Constant: '<S27>/Alzata C'
     *  Constant: '<S27>/Periodo C'
     */
    /* MATLAB Function 'Movimento/Leggi di moto/Cerchio': '<S40>:1' */
    /* '<S40>:1:3' */
    x4 = StateFlowGUI_B.Sum2 / StateFlowGUI_P.PeriodoC_Value;

    /* '<S40>:1:4' */
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

    /* '<S40>:1:6' */
    x2 = x2 * 2.0 * 3.1415926535897931;

    /* '<S40>:1:7' */
    F = F * 2.0 * 3.1415926535897931 / StateFlowGUI_P.PeriodoC_Value;

    /* '<S40>:1:8' */
    x3 = B * 2.0 * 3.1415926535897931 / (StateFlowGUI_P.PeriodoC_Value *
      StateFlowGUI_P.PeriodoC_Value);

    /* '<S40>:1:9' */
    StateFlowGUI_B.xc = cos(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value;

    /* '<S40>:1:10' */
    StateFlowGUI_B.yc = sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value - StateFlowGUI_P.AlzataC_Value;

    /* '<S40>:1:11' */
    StateFlowGUI_B.xc_p = sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value * F;

    /* '<S40>:1:12' */
    StateFlowGUI_B.yc_p = cos(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value * F;

    /* '<S40>:1:13' */
    StateFlowGUI_B.xc_pp = cos(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value * (F * F) + sin(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value * x3;

    /* '<S40>:1:14' */
    StateFlowGUI_B.yc_pp = sin(1.5707963267948966 - x2) *
      -StateFlowGUI_P.AlzataC_Value * (F * F) - cos(1.5707963267948966 - x2) *
      StateFlowGUI_P.AlzataC_Value * x3;

    /* End of MATLAB Function: '<S27>/Cerchio' */

    /* MATLAB Function: '<S27>/g' incorporates:
     *  Constant: '<S27>/Alzata C1'
     *  Constant: '<S27>/Periodo C1'
     */
    /* MATLAB Function 'Movimento/Leggi di moto/g': '<S42>:1' */
    /* '<S42>:1:2' */
    A = StateFlowGUI_P.PeriodoC1_Value / 32.0;

    /* '<S42>:1:3' */
    /* '<S42>:1:4' */
    /* '<S42>:1:5' */
    /* '<S42>:1:6' */
    /* '<S42>:1:7' */
    /* '<S42>:1:8' */
    /* '<S42>:1:9' */
    /* '<S42>:1:10' */
    /* '<S42>:1:11' */
    /* '<S42>:1:12' */
    /* '<S42>:1:13' */
    /* '<S42>:1:14' */
    /* '<S42>:1:15' */
    /* '<S42>:1:16' */
    /* '<S42>:1:17' */
    /* '<S42>:1:18' */
    /* '<S42>:1:19' */
    /* '<S42>:1:20' */
    /* '<S42>:1:21' */
    /* '<S42>:1:22' */
    /* '<S42>:1:23' */
    /* '<S42>:1:24' */
    /* '<S42>:1:25' */
    /* '<S42>:1:26' */
    /* '<S42>:1:27' */
    /* '<S42>:1:28' */
    /* '<S42>:1:29' */
    /* '<S42>:1:30' */
    /* '<S42>:1:31' */
    /* '<S42>:1:32' */
    /* '<S42>:1:33' */
    /* '<S42>:1:34' */
    /* '<S42>:1:35' */
    /* '<S42>:1:36' */
    /* '<S42>:1:37' */
    /* '<S42>:1:38' */
    /* '<S42>:1:39' */
    /* '<S42>:1:40' */
    /* '<S42>:1:41' */
    /* '<S42>:1:42' */
    /* '<S42>:1:43' */
    /* '<S42>:1:44' */
    /* '<S42>:1:45' */
    /* '<S42>:1:46' */
    if ((StateFlowGUI_B.Sum2 > 0.0) && (StateFlowGUI_B.Sum2 <= A / 2.0)) {
      /* '<S42>:1:48' */
      /*  1 */
      /* '<S42>:1:49' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 0.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &B);

      /* '<S42>:1:50' */
      StateFlowGUI_B.x = 0.0;

      /* '<S42>:1:51' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:52' */
      StateFlowGUI_B.y = -x2 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:53' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:54' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:55' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -B * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > A / 2.0) && (StateFlowGUI_B.Sum2 <= 3.0 *
                A / 2.0)) {
      /* '<S42>:1:57' */
      /*  2 */
      /* '<S42>:1:58' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - A / 2.0) / A, &x2, &F, &x3);

      /* '<S42>:1:59' */
      StateFlowGUI_B.x = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:60' */
      StateFlowGUI_B.x_p_l = F * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:61' */
      StateFlowGUI_B.y = -StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:62' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:63' */
      StateFlowGUI_B.x_pp = x3 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:64' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 3.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                4.0 * A / 2.0)) {
      /* '<S42>:1:66' */
      /*  3 */
      /* '<S42>:1:67' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 3.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &x4);

      /* '<S42>:1:68' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:69' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:70' */
      StateFlowGUI_B.y = x2 * StateFlowGUI_P.AlzataC1_Value +
        -StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:71' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:72' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:73' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x4 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 4.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                5.0 * A / 2.0)) {
      /* '<S42>:1:75' */
      /*  4 */
      /* '<S42>:1:76' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 4.0 * A / 2.0) / (A / 2.0),
                           &x2, &F, &x5);

      /* '<S42>:1:77' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value - x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:78' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:79' */
      StateFlowGUI_B.y = 0.0;

      /* '<S42>:1:80' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:81' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x5 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:82' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 5.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                7.0 * A / 2.0)) {
      /* '<S42>:1:84' */
      /*  5 */
      /* '<S42>:1:85' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 5.0 * A / 2.0) / A, &x2, &F,
                           &x5);

      /* '<S42>:1:86' */
      StateFlowGUI_B.x = 2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:87' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:88' */
      StateFlowGUI_B.y = -x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:89' */
      StateFlowGUI_B.y_p_o = -F * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:90' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:91' */
      StateFlowGUI_B.y_pp = -x5 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 7.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                9.0 * A / 2.0)) {
      /* '<S42>:1:93' */
      /*  6 */
      /* '<S42>:1:94' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 7.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:95' */
      StateFlowGUI_B.x = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + 2.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:96' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:97' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:98' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:99' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:100' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 9.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                11.0 * A / 2.0)) {
      /* '<S42>:1:102' */
      /*  7 */
      /* '<S42>:1:103' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 9.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:104' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:105' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:106' */
      StateFlowGUI_B.y = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + -3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:107' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:108' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:109' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 11.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                12.0 * A / 2.0)) {
      /* '<S42>:1:111' */
      /*  8 */
      /* '<S42>:1:112' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 11.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:113' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:114' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:115' */
      StateFlowGUI_B.y = 0.0;

      /* '<S42>:1:116' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:117' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:118' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 12.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                13.0 * A / 2.0)) {
      /* '<S42>:1:120' */
      /*  9 */
      /* '<S42>:1:121' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 12.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:122' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:123' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:124' */
      StateFlowGUI_B.y = -B * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:125' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:126' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:127' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 13.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                15.0 * A / 2.0)) {
      /* '<S42>:1:129' */
      /*  10 */
      /* '<S42>:1:130' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 13.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:131' */
      StateFlowGUI_B.x = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + 4.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:132' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:133' */
      StateFlowGUI_B.y = -StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:134' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:135' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:136' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 15.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                16.0 * A / 2.0)) {
      /* '<S42>:1:138' */
      /*  11 */
      /* '<S42>:1:139' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 15.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:140' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:141' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:142' */
      StateFlowGUI_B.y = B * StateFlowGUI_P.AlzataC1_Value +
        -StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:143' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:144' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:145' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 16.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                17.0 * A / 2.0)) {
      /* '<S42>:1:147' */
      /*  12 */
      /* '<S42>:1:148' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 16.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:149' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:150' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:151' */
      StateFlowGUI_B.y = 0.0;

      /* '<S42>:1:152' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:153' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:154' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 17.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                19.0 * A / 2.0)) {
      /* '<S42>:1:156' */
      /*  13 */
      /* '<S42>:1:157' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 17.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:158' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:159' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:160' */
      StateFlowGUI_B.y = -x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:161' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:162' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:163' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 19.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                20.0 * A / 2.0)) {
      /* '<S42>:1:165' */
      /*  14 */
      /* '<S42>:1:166' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 19.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:167' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:168' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:169' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:170' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:171' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:172' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 20.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                21.0 * A / 2.0)) {
      /* '<S42>:1:174' */
      /*  15 */
      /* '<S42>:1:175' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 20.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:176' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:177' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:178' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:179' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:180' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:181' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 21.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                23.0 * A / 2.0)) {
      /* '<S42>:1:183' */
      /*  16 */
      /* '<S42>:1:184' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 21.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:185' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:186' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:187' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:188' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:189' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:190' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 23.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                25.0 * A / 2.0)) {
      /* '<S42>:1:192' */
      /*  17 */
      /* '<S42>:1:193' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 23.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:194' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:195' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:196' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:197' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:198' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:199' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 25.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                27.0 * A / 2.0)) {
      /* '<S42>:1:201' */
      /*  18 */
      /* '<S42>:1:202' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 25.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:203' */
      StateFlowGUI_B.x = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + 4.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:204' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:205' */
      StateFlowGUI_B.y = -5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:206' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:207' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:208' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 27.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                28.0 * A / 2.0)) {
      /* '<S42>:1:210' */
      /*  19 */
      /* '<S42>:1:211' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 27.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:212' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:213' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:214' */
      StateFlowGUI_B.y = -5.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:215' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:216' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:217' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 28.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                29.0 * A / 2.0)) {
      /* '<S42>:1:219' */
      /*  20 */
      /* '<S42>:1:220' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 28.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:221' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:222' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:223' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:224' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:225' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:226' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 29.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                31.0 * A / 2.0)) {
      /* '<S42>:1:228' */
      /*  21 */
      /* '<S42>:1:229' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 29.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:230' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:231' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:232' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:233' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:234' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:235' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 31.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                32.0 * A / 2.0)) {
      /* '<S42>:1:237' */
      /*  22 */
      /* '<S42>:1:238' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 31.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:239' */
      StateFlowGUI_B.x = 6.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:240' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:241' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:242' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:243' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:244' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 32.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                33.0 * A / 2.0)) {
      /* '<S42>:1:246' */
      /*  23 */
      /* '<S42>:1:247' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 32.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:248' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:249' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:250' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:251' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:252' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:253' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 33.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                35.0 * A / 2.0)) {
      /* '<S42>:1:255' */
      /*  24 */
      /* '<S42>:1:256' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 33.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:257' */
      StateFlowGUI_B.x = 7.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:258' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:259' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:260' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:261' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:262' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 35.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                36.0 * A / 2.0)) {
      /* '<S42>:1:264' */
      /*  25 */
      /* '<S42>:1:265' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 35.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:266' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:267' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:268' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:269' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:270' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:271' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 36.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                37.0 * A / 2.0)) {
      /* '<S42>:1:273' */
      /*  26 */
      /* '<S42>:1:274' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 36.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:275' */
      StateFlowGUI_B.x = 4.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:276' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:277' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:278' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:279' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:280' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 37.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                39.0 * A / 2.0)) {
      /* '<S42>:1:282' */
      /*  27 */
      /* '<S42>:1:283' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 37.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:284' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:285' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:286' */
      StateFlowGUI_B.y = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + -7.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:287' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:288' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:289' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 39.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                41.0 * A / 2.0)) {
      /* '<S42>:1:291' */
      /*  28 */
      /* '<S42>:1:292' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 39.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:293' */
      StateFlowGUI_B.x = 5.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:294' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:295' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:296' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:297' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:298' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 41.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                43.0 * A / 2.0)) {
      /* '<S42>:1:300' */
      /*  29 */
      /* '<S42>:1:301' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 41.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:302' */
      StateFlowGUI_B.x = 2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:303' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:304' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:305' */
      StateFlowGUI_B.y_p_o = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:306' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:307' */
      StateFlowGUI_B.y_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 43.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                44.0 * A / 2.0)) {
      /* '<S42>:1:309' */
      /*  30 */
      /* '<S42>:1:310' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 43.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:311' */
      StateFlowGUI_B.x = 2.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:312' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:313' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:314' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:315' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:316' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 44.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                45.0 * A / 2.0)) {
      /* '<S42>:1:318' */
      /*  31 */
      /* '<S42>:1:319' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 44.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:320' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:321' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:322' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value + B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:323' */
      StateFlowGUI_B.y_p_o = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:324' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:325' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 45.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                47.0 * A / 2.0)) {
      /* '<S42>:1:327' */
      /*  32 */
      /* '<S42>:1:328' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 45.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:329' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value - 3.0 * x2 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:330' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:331' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:332' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:333' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:334' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 47.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                48.0 * A / 2.0)) {
      /* '<S42>:1:336' */
      /*  33 */
      /* '<S42>:1:337' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 47.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:338' */
      StateFlowGUI_B.x = 0.0;

      /* '<S42>:1:339' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:340' */
      StateFlowGUI_B.y = -6.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:341' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:342' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:343' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 48.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                49.0 * A / 2.0)) {
      /* '<S42>:1:345' */
      /*  34 */
      /* '<S42>:1:346' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 48.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:347' */
      StateFlowGUI_B.x = B * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:348' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:349' */
      StateFlowGUI_B.y = -7.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:350' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:351' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:352' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 49.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                51.0 * A / 2.0)) {
      /* '<S42>:1:354' */
      /*  35 */
      /* '<S42>:1:355' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 49.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:356' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:357' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:358' */
      StateFlowGUI_B.y = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + -7.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:359' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:360' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:361' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 51.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                52.0 * A / 2.0)) {
      /* '<S42>:1:363' */
      /*  36 */
      /* '<S42>:1:364' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 51.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:365' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:366' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:367' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:368' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:369' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:370' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 52.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                53.0 * A / 2.0)) {
      /* '<S42>:1:372' */
      /*  37 */
      /* '<S42>:1:373' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 52.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:374' */
      StateFlowGUI_B.x = 0.0;

      /* '<S42>:1:375' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:376' */
      StateFlowGUI_B.y = -4.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:377' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:378' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:379' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 53.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                55.0 * A / 2.0)) {
      /* '<S42>:1:381' */
      /*  38 */
      /* '<S42>:1:382' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 53.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:383' */
      StateFlowGUI_B.x = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:384' */
      StateFlowGUI_B.x_p_l = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:385' */
      StateFlowGUI_B.y = -5.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:386' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:387' */
      StateFlowGUI_B.x_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:388' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 55.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                57.0 * A / 2.0)) {
      /* '<S42>:1:390' */
      /*  39 */
      /* '<S42>:1:391' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 55.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:392' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:393' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:394' */
      StateFlowGUI_B.y = x2 * 3.0 * StateFlowGUI_P.AlzataC1_Value + -5.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:395' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:396' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:397' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 57.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                59.0 * A / 2.0)) {
      /* '<S42>:1:399' */
      /*  40 */
      /* '<S42>:1:400' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 57.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:401' */
      StateFlowGUI_B.x = 3.0 * StateFlowGUI_P.AlzataC1_Value - x2 * 3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:402' */
      StateFlowGUI_B.x_p_l = -B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:403' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:404' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:405' */
      StateFlowGUI_B.x_pp = -F * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:406' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 59.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                60.0 * A / 2.0)) {
      /* '<S42>:1:408' */
      /*  41 */
      /* '<S42>:1:409' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 59.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:410' */
      StateFlowGUI_B.x = 0.0;

      /* '<S42>:1:411' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:412' */
      StateFlowGUI_B.y = -2.0 * StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:413' */
      StateFlowGUI_B.y_p_o = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:414' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:415' */
      A /= 2.0;
      StateFlowGUI_B.y_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 60.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                61.0 * A / 2.0)) {
      /* '<S42>:1:417' */
      /*  42 */
      /* '<S42>:1:418' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 60.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:419' */
      StateFlowGUI_B.x = B * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:420' */
      StateFlowGUI_B.x_p_l = F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:421' */
      StateFlowGUI_B.y = -3.0 * StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:422' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:423' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:424' */
      StateFlowGUI_B.y_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > 61.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                63.0 * A / 2.0)) {
      /* '<S42>:1:426' */
      /*  43 */
      /* '<S42>:1:427' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 61.0 * A / 2.0) / A, &x2, &B,
                           &F);

      /* '<S42>:1:428' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:429' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:430' */
      StateFlowGUI_B.y = 3.0 * x2 * StateFlowGUI_P.AlzataC1_Value + -3.0 *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:431' */
      StateFlowGUI_B.y_p_o = B * 3.0 * StateFlowGUI_P.AlzataC1_Value / A;

      /* '<S42>:1:432' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:433' */
      StateFlowGUI_B.y_pp = F * StateFlowGUI_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowGUI_B.Sum2 > 63.0 * A / 2.0) && (StateFlowGUI_B.Sum2 <=
                64.0 * A / 2.0)) {
      /* '<S42>:1:435' */
      /*  44 */
      /* '<S42>:1:436' */
      StateFlowGUI_ldm7t_k((StateFlowGUI_B.Sum2 - 63.0 * A / 2.0) / (A / 2.0),
                           &B, &F, &x2);

      /* '<S42>:1:437' */
      StateFlowGUI_B.x = StateFlowGUI_P.AlzataC1_Value - B *
        StateFlowGUI_P.AlzataC1_Value;

      /* '<S42>:1:438' */
      StateFlowGUI_B.x_p_l = -F * StateFlowGUI_P.AlzataC1_Value / (A / 2.0);

      /* '<S42>:1:439' */
      StateFlowGUI_B.y = 0.0;

      /* '<S42>:1:440' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:441' */
      A /= 2.0;
      StateFlowGUI_B.x_pp = -x2 * StateFlowGUI_P.AlzataC1_Value / (A * A);

      /* '<S42>:1:442' */
      StateFlowGUI_B.y_pp = 0.0;
    } else {
      /* '<S42>:1:445' */
      StateFlowGUI_B.x = 0.0;

      /* '<S42>:1:446' */
      StateFlowGUI_B.x_p_l = 0.0;

      /* '<S42>:1:447' */
      StateFlowGUI_B.y = 0.0;

      /* '<S42>:1:448' */
      StateFlowGUI_B.y_p_o = 0.0;

      /* '<S42>:1:449' */
      StateFlowGUI_B.x_pp = 0.0;

      /* '<S42>:1:450' */
      StateFlowGUI_B.y_pp = 0.0;
    }

    /* End of MATLAB Function: '<S27>/g' */

    /* MATLAB Function: '<S27>/Cerchi Tangenti' incorporates:
     *  Constant: '<S27>/Constant3'
     */
    /* MATLAB Function 'Movimento/Leggi di moto/Cerchi Tangenti': '<S39>:1' */
    /* '<S39>:1:4' */
    A = 100.0 * StateFlowGUI_P.Constant3_Value / 2.0;

    /* '<S39>:1:5' */
    /* '<S39>:1:6' */
    B = (StateFlowGUI_P.Constant3_Value - 0.025) * 100.0 / 2.0;

    /* '<S39>:1:7' */
    /* '<S39>:1:8' */
    x3 = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) * 100.0 / 2.0;

    /* '<S39>:1:9' */
    /* '<S39>:1:10' */
    x4 = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) * 100.0 /
      2.0;

    /* '<S39>:1:11' */
    /* '<S39>:1:12' */
    T5 = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025) *
      100.0 / 2.0;

    /* '<S39>:1:14' */
    /* '<S39>:1:15' */
    /* '<S39>:1:16' */
    /* '<S39>:1:17' */
    /* '<S39>:1:18' */
    if ((StateFlowGUI_B.Sum2 > 0.0) && (StateFlowGUI_B.Sum2 <= A)) {
      /* '<S39>:1:20' */
      /*  1 */
      /* '<S39>:1:21' */
      StateFlowGUI_ldm7t(StateFlowGUI_B.Sum2 / A, &x2, &F, &B);

      /* '<S39>:1:22' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S39>:1:23' */
      F = F * 2.0 * 3.1415926535897931 / A;

      /* '<S39>:1:24' */
      x3 = B * 2.0 * 3.1415926535897931 / (A * A);

      /* '<S39>:1:25' */
      StateFlowGUI_B.xct = StateFlowGUI_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x2);

      /* '<S39>:1:26' */
      StateFlowGUI_B.yct = StateFlowGUI_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x2) - StateFlowGUI_P.Constant3_Value / 2.0;

      /* '<S39>:1:27' */
      StateFlowGUI_B.xct_p = StateFlowGUI_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x2) * F;

      /* '<S39>:1:28' */
      StateFlowGUI_B.yct_p = -StateFlowGUI_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x2) * F;

      /* '<S39>:1:29' */
      StateFlowGUI_B.xct_pp = -StateFlowGUI_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - x2) * (F * F) + StateFlowGUI_P.Constant3_Value /
        2.0 * sin(1.5707963267948966 - x2) * x3;

      /* '<S39>:1:30' */
      StateFlowGUI_B.yct_pp = -StateFlowGUI_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - x2) * (F * F) - StateFlowGUI_P.Constant3_Value /
        2.0 * cos(1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > A) && (StateFlowGUI_B.Sum2 <= A + B)) {
      /* '<S39>:1:32' */
      /*  2 */
      /* '<S39>:1:33' */
      StateFlowGUI_ldm7t((StateFlowGUI_B.Sum2 - A) / B, &x2, &F, &x3);

      /* '<S39>:1:34' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S39>:1:35' */
      F = F * 2.0 * 3.1415926535897931 / B;

      /* '<S39>:1:36' */
      x3 = x3 * 2.0 * 3.1415926535897931 / (B * B);

      /* '<S39>:1:37' */
      StateFlowGUI_B.xct = (StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 * cos
        (1.5707963267948966 - x2);

      /* '<S39>:1:38' */
      StateFlowGUI_B.yct = (StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 * sin
        (1.5707963267948966 - x2) - (StateFlowGUI_P.Constant3_Value - 0.025) /
        2.0;

      /* '<S39>:1:39' */
      StateFlowGUI_B.xct_p = (StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x2) * F;

      /* '<S39>:1:40' */
      StateFlowGUI_B.yct_p = -(StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - x2) * F;

      /* '<S39>:1:41' */
      StateFlowGUI_B.xct_pp = -(StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - x2) * (F * F) + (StateFlowGUI_P.Constant3_Value
        - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * x3;

      /* '<S39>:1:42' */
      StateFlowGUI_B.yct_pp = -(StateFlowGUI_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - x2) * (F * F) - (StateFlowGUI_P.Constant3_Value
        - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > A + B) && (StateFlowGUI_B.Sum2 <= (A + B)
                + x3)) {
      /* '<S39>:1:44' */
      /*  3 */
      /* '<S39>:1:45' */
      StateFlowGUI_ldm7t(((StateFlowGUI_B.Sum2 - A) - B) / x3, &x2, &F, &x4);

      /* '<S39>:1:46' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S39>:1:47' */
      F = F * 2.0 * 3.1415926535897931 / x3;

      /* '<S39>:1:48' */
      x3 = x4 * 2.0 * 3.1415926535897931 / (x3 * x3);

      /* '<S39>:1:49' */
      StateFlowGUI_B.xct = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) /
        2.0 * cos(1.5707963267948966 - x2);

      /* '<S39>:1:50' */
      StateFlowGUI_B.yct = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) /
        2.0 * sin(1.5707963267948966 - x2) - ((StateFlowGUI_P.Constant3_Value -
        0.025) - 0.025) / 2.0;

      /* '<S39>:1:51' */
      StateFlowGUI_B.xct_p = ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) /
        2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S39>:1:52' */
      StateFlowGUI_B.yct_p = -((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2) * F;

      /* '<S39>:1:53' */
      StateFlowGUI_B.xct_pp = -((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2) * (F * F) +
        ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - x2) * x3;

      /* '<S39>:1:54' */
      StateFlowGUI_B.yct_pp = -((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - x2) * (F * F) -
        ((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > (A + B) + x3) && (StateFlowGUI_B.Sum2 <=
                ((A + B) + x3) + x4)) {
      /* '<S39>:1:56' */
      /*  4 */
      /* '<S39>:1:57' */
      StateFlowGUI_ldm7t((((StateFlowGUI_B.Sum2 - A) - B) - x3) / x4, &x2, &F,
                         &x5);

      /* '<S39>:1:58' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S39>:1:59' */
      F = F * 2.0 * 3.1415926535897931 / x4;

      /* '<S39>:1:60' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (x4 * x4);

      /* '<S39>:1:61' */
      StateFlowGUI_B.xct = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) -
                            0.025) / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S39>:1:62' */
      StateFlowGUI_B.yct = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) -
                            0.025) / 2.0 * sin(1.5707963267948966 - x2) -
        (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0;

      /* '<S39>:1:63' */
      StateFlowGUI_B.xct_p = (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S39>:1:64' */
      StateFlowGUI_B.yct_p = -(((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;

      /* '<S39>:1:65' */
      StateFlowGUI_B.xct_pp = -(((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * (F * F) +
        (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - x2) * x3;

      /* '<S39>:1:66' */
      StateFlowGUI_B.yct_pp = -(((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * (F * F) -
        (((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - x2) * x3;
    } else if ((StateFlowGUI_B.Sum2 > ((A + B) + x3) + x4) &&
               (StateFlowGUI_B.Sum2 <= (((A + B) + x3) + x4) + T5)) {
      /* '<S39>:1:68' */
      /*  5 */
      /* '<S39>:1:69' */
      StateFlowGUI_ldm7t(((((StateFlowGUI_B.Sum2 - A) - B) - x3) - x4) / T5, &x2,
                         &F, &x5);

      /* '<S39>:1:70' */
      x2 = x2 * 2.0 * 3.1415926535897931;

      /* '<S39>:1:71' */
      F = F * 2.0 * 3.1415926535897931 / T5;

      /* '<S39>:1:72' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (T5 * T5);

      /* '<S39>:1:73' */
      StateFlowGUI_B.xct = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2);

      /* '<S39>:1:74' */
      StateFlowGUI_B.yct = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) -
        ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025) /
        2.0;

      /* '<S39>:1:75' */
      StateFlowGUI_B.xct_p = ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025)
        - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * F;

      /* '<S39>:1:76' */
      StateFlowGUI_B.yct_p = -((((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * F;

      /* '<S39>:1:77' */
      StateFlowGUI_B.xct_pp = -((((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - x2) * (F * F)
        + ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - x2) * x3;

      /* '<S39>:1:78' */
      StateFlowGUI_B.yct_pp = -((((StateFlowGUI_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - x2) * (F * F)
        - ((((StateFlowGUI_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - x2) * x3;
    } else {
      /* '<S39>:1:80' */
      StateFlowGUI_B.xct = 0.0;

      /* '<S39>:1:81' */
      StateFlowGUI_B.xct_p = 0.0;

      /* '<S39>:1:82' */
      StateFlowGUI_B.yct = 0.0;

      /* '<S39>:1:83' */
      StateFlowGUI_B.yct_p = 0.0;

      /* '<S39>:1:84' */
      StateFlowGUI_B.xct_pp = 0.0;

      /* '<S39>:1:85' */
      StateFlowGUI_B.yct_pp = 0.0;
    }

    /* End of MATLAB Function: '<S27>/Cerchi Tangenti' */

    /* MATLAB Function: '<S27>/spirale' incorporates:
     *  Constant: '<S27>/N giri'
     *  Constant: '<S27>/Periodo'
     *  Constant: '<S27>/Rmax'
     *  Constant: '<S27>/Rmin'
     *  Constant: '<S27>/Tempo spost. iniziale'
     */
    /* MATLAB Function 'Movimento/Leggi di moto/spirale': '<S43>:1' */
    /* '<S43>:1:3' */
    /* '<S43>:1:4' */
    if ((StateFlowGUI_B.Sum2 >= 0.0) && (StateFlowGUI_B.Sum2 <=
         StateFlowGUI_P.Tempospostiniziale_Value)) {
      /* '<S43>:1:5' */
      /* '<S43>:1:6' */
      StateFlowGUI_ldm7t_m(StateFlowGUI_B.Sum2 /
                           StateFlowGUI_P.Tempospostiniziale_Value, &x2, &F, &B);

      /* '<S43>:1:7' */
      StateFlowGUI_B.xs = x2 * StateFlowGUI_P.Rmin_Value;

      /* '<S43>:1:8' */
      StateFlowGUI_B.xs_p = F * StateFlowGUI_P.Rmin_Value /
        StateFlowGUI_P.Tempospostiniziale_Value;

      /* '<S43>:1:9' */
      StateFlowGUI_B.xs_pp = B * StateFlowGUI_P.Rmin_Value /
        (StateFlowGUI_P.Tempospostiniziale_Value *
         StateFlowGUI_P.Tempospostiniziale_Value);

      /* '<S43>:1:10' */
      StateFlowGUI_B.ys = 0.0;

      /* '<S43>:1:11' */
      StateFlowGUI_B.ys_p = 0.0;

      /* '<S43>:1:12' */
      StateFlowGUI_B.ys_pp = 0.0;
    } else if ((StateFlowGUI_B.Sum2 > StateFlowGUI_P.Tempospostiniziale_Value) &&
               (StateFlowGUI_B.Sum2 <= StateFlowGUI_P.Tempospostiniziale_Value +
                StateFlowGUI_P.Periodo_Value)) {
      /* '<S43>:1:13' */
      /* '<S43>:1:14' */
      StateFlowGUI_ldm7t_m((StateFlowGUI_B.Sum2 -
                            StateFlowGUI_P.Tempospostiniziale_Value) /
                           StateFlowGUI_P.Periodo_Value, &x2, &F, &x3);

      /* '<S43>:1:15' */
      x4 = x2 * StateFlowGUI_P.Rmax_Value + StateFlowGUI_P.Rmin_Value;

      /* '<S43>:1:16' */
      A = F * StateFlowGUI_P.Rmax_Value / StateFlowGUI_P.Periodo_Value;

      /* '<S43>:1:17' */
      B = x3 * StateFlowGUI_P.Rmax_Value / (StateFlowGUI_P.Periodo_Value *
        StateFlowGUI_P.Periodo_Value);

      /* '<S43>:1:18' */
      x2 = x2 * StateFlowGUI_P.Ngiri_Value * 2.0 * 3.1415926535897931;

      /* '<S43>:1:19' */
      F = F * StateFlowGUI_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        StateFlowGUI_P.Periodo_Value;

      /* '<S43>:1:20' */
      x3 = x3 * StateFlowGUI_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        (StateFlowGUI_P.Periodo_Value * StateFlowGUI_P.Periodo_Value);

      /* '<S43>:1:21' */
      StateFlowGUI_B.xs = x4 * cos(x2);

      /* '<S43>:1:22' */
      StateFlowGUI_B.ys = x4 * sin(x2);

      /* '<S43>:1:23' */
      StateFlowGUI_B.xs_p = -x4 * sin(x2) * F + A * cos(x2);

      /* '<S43>:1:24' */
      StateFlowGUI_B.ys_p = x4 * cos(x2) * F + A * sin(x2);

      /* '<S43>:1:25' */
      StateFlowGUI_B.xs_pp = ((-A * sin(x2) * F - (F * F * cos(x2) + sin(x2) *
        x3) * x4) + B * cos(x2)) - A * sin(x2) * F;

      /* '<S43>:1:26' */
      StateFlowGUI_B.ys_pp = (((F * F * -sin(x2) + cos(x2) * x3) * x4 + A * cos
        (x2) * F) + B * sin(x2)) + A * cos(x2) * F;
    } else {
      /* '<S43>:1:28' */
      StateFlowGUI_B.xs = cos(StateFlowGUI_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowGUI_P.Rmin_Value +
        StateFlowGUI_P.Rmax_Value);

      /* '<S43>:1:29' */
      StateFlowGUI_B.xs_p = 0.0;

      /* '<S43>:1:30' */
      StateFlowGUI_B.ys = sin(StateFlowGUI_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowGUI_P.Rmin_Value +
        StateFlowGUI_P.Rmax_Value);

      /* '<S43>:1:31' */
      StateFlowGUI_B.ys_p = 0.0;

      /* '<S43>:1:32' */
      StateFlowGUI_B.xs_pp = 0.0;

      /* '<S43>:1:33' */
      StateFlowGUI_B.ys_pp = 0.0;
    }

    /* End of MATLAB Function: '<S27>/spirale' */

    /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
     *  Constant: '<S4>/selettore'
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

     default:
      StateFlowGUI_B.MultiportSwitch[0] = StateFlowGUI_B.xs;
      StateFlowGUI_B.MultiportSwitch[1] = StateFlowGUI_B.ys;
      StateFlowGUI_B.MultiportSwitch[2] = StateFlowGUI_B.xs_p;
      StateFlowGUI_B.MultiportSwitch[3] = StateFlowGUI_B.ys_p;
      StateFlowGUI_B.MultiportSwitch[4] = StateFlowGUI_B.xs_pp;
      StateFlowGUI_B.MultiportSwitch[5] = StateFlowGUI_B.ys_pp;
      break;
    }

    /* End of MultiPortSwitch: '<S27>/Multiport Switch' */

    /* Sum: '<S4>/Sum' */
    StateFlowGUI_B.Sum = StateFlowGUI_B.x0_l + StateFlowGUI_B.MultiportSwitch[0];

    /* Sum: '<S4>/Sum1' */
    StateFlowGUI_B.Sum1 = StateFlowGUI_B.MultiportSwitch[1] +
      StateFlowGUI_B.y0_p;

    /* MATLAB Function: '<S4>/Cinematica Inversa' */
    StateFlowGUI_CinematicaInversa(StateFlowGUI_B.Sum, StateFlowGUI_B.Sum1,
      &StateFlowGUI_B.sf_CinematicaInversa);

    /* MATLAB Function: '<S4>/Cinematica Inversa vel' */
    StateFlowG_CinematicaInversavel(StateFlowGUI_B.sf_CinematicaInversa.theta1,
      StateFlowGUI_B.sf_CinematicaInversa.theta2, StateFlowGUI_B.Sum,
      StateFlowGUI_B.Sum1, StateFlowGUI_B.MultiportSwitch[2],
      StateFlowGUI_B.MultiportSwitch[3], &StateFlowGUI_B.sf_CinematicaInversavel);

    /* MATLAB Function: '<S4>/Cinematica Inversa Acc' */
    B = StateFlowGUI_B.MultiportSwitch[4];
    A = StateFlowGUI_B.MultiportSwitch[5];
    F = StateFlowGUI_B.sf_CinematicaInversavel.theta1_p;
    x3 = StateFlowGUI_B.sf_CinematicaInversavel.theta2_p;

    /* MATLAB Function 'Movimento/Cinematica Inversa Acc': '<S20>:1' */
    /* '<S20>:1:3' */
    /* '<S20>:1:4' */
    /* '<S20>:1:6' */
    /* '<S20>:1:8' */
    /* '<S20>:1:10' */
    x2 = (StateFlowGUI_B.Sum1 - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2));

    /* '<S20>:1:12' */
    x4 = (((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (-0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) + (StateFlowGUI_B.Sum1
           - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 *
           cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) / x2;

    /* '<S20>:1:14' */
    x2 = ((StateFlowGUI_B.Sum1 - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (-0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Sum
            + 0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) /
          ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((StateFlowGUI_B.Sum
            + 0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
          (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / x2;

    /* '<S20>:1:16' */
    /* '<S20>:1:18' */
    /* '<S20>:1:20' */
    J[0] = -(StateFlowGUI_B.Sum1 - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x4;
    J[2] = (-(StateFlowGUI_B.Sum1 - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
            ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x2 - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1
      - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2));
    J[1] = x4;
    J[3] = x2;

    /* '<S20>:1:22' */
    J_p_idx_1 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    b_a = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    J_p_idx_3 = (StateFlowGUI_B.Sum1 - 0.25 * sin
                 (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S20>:1:25' */
    x2 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    x4 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    D2p = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    g_a = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    x5 = (StateFlowGUI_B.Sum1 - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S20>:1:28' */
    i_a = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    j_a = (StateFlowGUI_B.Sum1 - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S20>:1:31' */
    T5 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    N21 = (0.09 - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2);
    N22 = (StateFlowGUI_B.Sum1 - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S20>:1:34' */
    J_p_idx_0 = ((((StateFlowGUI_B.Sum1 - 0.25 * sin
                    (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) *
                  (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                   (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                   StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) /
                  (((StateFlowGUI_B.Sum1 - 0.25 * sin
                     (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - ((((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) -
      (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
       StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
                  (((StateFlowGUI_B.Sum1 - 0.25 * sin
                     (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)))) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) / (((StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (J_p_idx_1 *
      J_p_idx_1))) - (((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)
                          * StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
                          StateFlowGUI_B.MultiportSwitch[2]) *
                         (StateFlowGUI_B.Sum1 - 0.25 * sin
                          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09
      - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
                         StateFlowGUI_B.MultiportSwitch[3]) +
                        (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                         (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                         StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) *
                        ((0.09 + StateFlowGUI_B.Sum) - 0.25 * cos
                         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09
      - StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
                       (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                       StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + (0.25 *
      sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (b_a * b_a)) *
      (((StateFlowGUI_B.Sum1 - 0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
          StateFlowGUI_B.Sum) - 0.25 * cos
         (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
         (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (StateFlowGUI_B.Sum1 -
        0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / (((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (J_p_idx_3 * J_p_idx_3));
    x5 = (((((((((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                    StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
                    StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)))) +
                  (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                   (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                   StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) * (0.25 *
      cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
                 StateFlowGUI_B.sf_CinematicaInversavel.theta2_p * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (x2 * x2)) *
               (StateFlowGUI_B.Sum1 - 0.25 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
               (((StateFlowGUI_B.Sum1 - 0.25 * sin
                  (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
               StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) -
              (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
               StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) * (0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2))) +
             ((StateFlowGUI_B.Sum1 - 0.25 * sin
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
              StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) /
             (((StateFlowGUI_B.Sum1 - 0.25 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
                (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
                (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
               (StateFlowGUI_B.Sum1 - 0.25 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)))) - (0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
             StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
             StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
            (StateFlowGUI_B.Sum1 - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / (x4 * x4)) +
           ((StateFlowGUI_B.Sum1 - 0.25 * sin
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
            StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
            StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 *
            sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
           (((StateFlowGUI_B.Sum1 - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
               StateFlowGUI_B.Sum) - 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
               StateFlowGUI_B.Sum) + 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
             (StateFlowGUI_B.Sum1 - 0.25 * sin
              (StateFlowGUI_B.sf_CinematicaInversa.theta1))) * (D2p * D2p))) -
          (((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
               StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
               StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 *
               sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
                StateFlowGUI_B.Sum) + 0.25 * cos
               (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
              StateFlowGUI_B.MultiportSwitch[3]) +
             (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
              StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) * ((0.09 +
               StateFlowGUI_B.Sum) - 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
               StateFlowGUI_B.Sum) + 0.25 * cos
              (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
            StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + (0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
            StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
            StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 *
            sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
             StateFlowGUI_B.Sum) - 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (g_a * g_a)) *
          (((StateFlowGUI_B.Sum1 - 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
              StateFlowGUI_B.Sum) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
              StateFlowGUI_B.Sum) + 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.09 +
              StateFlowGUI_B.Sum) - 0.25 * cos
             (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta2))) *
           (StateFlowGUI_B.Sum1 - 0.25 * sin
            (StateFlowGUI_B.sf_CinematicaInversa.theta2))) / (((0.09 -
             StateFlowGUI_B.Sum) + 0.25 * cos
            (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (x5 * x5))) +
      (StateFlowGUI_B.Sum1 - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2));
    J_p_idx_1 = -((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                     StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
                     StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) -
                    (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                     (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                     StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) * (0.25 *
      cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
                   StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + 0.25 * cos
                  (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                  StateFlowGUI_B.sf_CinematicaInversavel.theta1_p * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1))) / ((StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) - (((((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
      StateFlowGUI_B.MultiportSwitch[3]) + (StateFlowGUI_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (i_a * i_a)) *
      ((StateFlowGUI_B.Sum1 - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta1))) / (j_a * j_a);
    J_p_idx_3 = (((((0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
                     StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
                     StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)))) +
                   (StateFlowGUI_B.MultiportSwitch[3] - 0.25 * cos
                    (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                    StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) * (0.25 *
      cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
                  StateFlowGUI_B.sf_CinematicaInversavel.theta2_p * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (T5 * T5)) /
      ((StateFlowGUI_B.Sum1 - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
         StateFlowGUI_B.Sum) + 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + (StateFlowGUI_B.Sum1 -
        0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1))) - (((((0.25 *
      sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
      StateFlowGUI_B.MultiportSwitch[3]) + (StateFlowGUI_B.MultiportSwitch[3] -
      0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
      StateFlowGUI_B.Sum) + 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta2))) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + (0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
      StateFlowGUI_B.MultiportSwitch[2]) * (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
      StateFlowGUI_B.Sum) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / (N21 * N21)) *
      ((StateFlowGUI_B.Sum1 - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((0.09 -
         StateFlowGUI_B.Sum) + 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((0.09 +
         StateFlowGUI_B.Sum) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2))) / (N22 * N22);

    /* '<S20>:1:37' */
    if (fabs(J[1]) > fabs(J[0])) {
      x4 = J[0] / J[1];
      x2 = 1.0 / (x4 * J[3] - J[2]);
      J1[0] = J[3] / J[1] * x2;
      J1[1] = -x2;
      J1[2] = -J[2] / J[1] * x2;
      J1[3] = x4 * x2;
    } else {
      x4 = J[1] / J[0];
      x2 = 1.0 / (J[3] - x4 * J[2]);
      J1[0] = J[3] / J[0] * x2;
      J1[1] = -x4 * x2;
      J1[2] = -J[2] / J[0] * x2;
      J1[3] = x2;
    }

    J_p_idx_0 *= F;
    J_p_idx_0 += x5 * x3;
    x5 = B - J_p_idx_0;
    J_p_idx_0 = J_p_idx_1 * F;
    J_p_idx_0 += J_p_idx_3 * x3;
    A -= J_p_idx_0;
    F = J1[0] * x5;
    Theta_pp[0] = F;
    F = Theta_pp[0];
    F += J1[2] * A;
    Theta_pp[0] = F;
    F = J1[1] * x5;
    Theta_pp[1] = F;
    F = Theta_pp[1];
    F += J1[3] * A;
    Theta_pp[1] = F;

    /* '<S20>:1:39' */
    /* '<S20>:1:40' */
    StateFlowGUI_B.theta1_pp = Theta_pp[0];
    StateFlowGUI_B.theta2_pp = Theta_pp[1];

    /* End of MATLAB Function: '<S4>/Cinematica Inversa Acc' */

    /* S-Function (xpcethercatpdorx): '<S34>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S34>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S34>/Velocity B' */
    StateFlowGUI_B.VelocityB_f = StateFlowGUI_B.EtherCATPDOReceive15_d;

    /* MATLAB Function: '<S34>/Vel Asse B conv' */
    StateFlowGUI_VelAsseBconv(StateFlowGUI_B.VelocityB_f,
      &StateFlowGUI_B.sf_VelAsseBconv_d);

    /* S-Function (xpcethercatpdorx): '<S34>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S34>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[17];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S34>/Velocity A' */
    StateFlowGUI_B.VelocityA_o = StateFlowGUI_B.EtherCATPDOReceive14_b;

    /* MATLAB Function: '<S34>/Vel Asse A conv' */
    StateFlowGUI_VelAsseAconv(StateFlowGUI_B.VelocityA_o,
      &StateFlowGUI_B.sf_VelAsseAconv_a);

    /* Sum: '<S4>/Sum7' */
    StateFlowGUI_B.Sum7_j[0] = StateFlowGUI_B.sf_CinematicaInversavel.theta1_p -
      StateFlowGUI_B.sf_VelAsseBconv_d.vel_B_conv;
    StateFlowGUI_B.Sum7_j[1] = StateFlowGUI_B.sf_CinematicaInversavel.theta2_p -
      StateFlowGUI_B.sf_VelAsseAconv_a.vel_A_conv;

    /* Sum: '<S4>/Sum4' */
    StateFlowGUI_B.Sum4_n[0] = StateFlowGUI_B.sf_CinematicaInversa.theta1 -
      StateFlowGUI_B.Sum4;
    StateFlowGUI_B.Sum4_n[1] = StateFlowGUI_B.sf_CinematicaInversa.theta2 -
      StateFlowGUI_B.Sum7;

    /* Gain: '<S4>/Kd' */
    StateFlowGUI_B.Kd[0] = StateFlowGUI_P.Kd_Gain * StateFlowGUI_B.Sum7_j[0];

    /* Product: '<S4>/Product' */
    StateFlowGUI_B.Product[0] = StateFlowGUI_B.Kp_n * StateFlowGUI_B.Sum4_n[0];

    /* Gain: '<S4>/Kd' */
    StateFlowGUI_B.Kd[1] = StateFlowGUI_P.Kd_Gain * StateFlowGUI_B.Sum7_j[1];

    /* Product: '<S4>/Product' */
    StateFlowGUI_B.Product[1] = StateFlowGUI_B.Kp_n * StateFlowGUI_B.Sum4_n[1];

    /* Sum: '<S4>/Sum9' */
    StateFlowGUI_B.Sum9_a[0] = (StateFlowGUI_B.theta1_pp + StateFlowGUI_B.Kd[0])
      + StateFlowGUI_B.Product[0];
    StateFlowGUI_B.Sum9_a[1] = (StateFlowGUI_B.theta2_pp + StateFlowGUI_B.Kd[1])
      + StateFlowGUI_B.Product[1];

    /* Memory: '<S4>/Memory' */
    StateFlowGUI_B.Memory_d[0] = StateFlowGUI_DW.Memory_PreviousInput_h[0];
    StateFlowGUI_B.Memory_d[1] = StateFlowGUI_DW.Memory_PreviousInput_h[1];
    StateFlowGUI_B.Memory_d[2] = StateFlowGUI_DW.Memory_PreviousInput_h[2];
    StateFlowGUI_B.Memory_d[3] = StateFlowGUI_DW.Memory_PreviousInput_h[3];

    /* MATLAB Function: '<S4>/Dinamica Inversa1' */
    /* MATLAB Function 'Movimento/Dinamica Inversa1': '<S26>:1' */
    /* '<S26>:1:107' */
    /* '<S26>:1:96' */
    /* '<S26>:1:3' */
    /* '<S26>:1:15' */
    J_p_idx_1 = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    b_a = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    J_p_idx_3 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    x2 = b_a * b_a / 2.0 + J_p_idx_3 * J_p_idx_3 / 2.0;
    x4 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    D2p = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    g_a = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    A = atan((sqrt((J_p_idx_1 * J_p_idx_1 - x2 * x2) + x4 * x4) + (sin
               (StateFlowGUI_B.Sum7) - sin(StateFlowGUI_B.Sum4))) / (((D2p * D2p
                / 2.0 + (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4))) +
               g_a * g_a / 2.0) + 0.72)) * 2.0;

    /* '<S26>:1:19' */
    x5 = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    i_a = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    j_a = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    T5 = i_a * i_a / 2.0 + j_a * j_a / 2.0;
    N21 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    N22 = (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) + 0.72;
    x2 = sin(StateFlowGUI_B.Sum4) - sin(StateFlowGUI_B.Sum7);
    B = atan((sqrt((x5 * x5 - T5 * T5) + N21 * N21) + (sin(StateFlowGUI_B.Sum7)
               - sin(StateFlowGUI_B.Sum4))) / (((N22 * N22 / 2.0 + (cos
      (StateFlowGUI_B.Sum4) - cos(StateFlowGUI_B.Sum7))) + x2 * x2 / 2.0) - 0.72))
      * -2.0;

    /* '<S26>:1:23' */
    x4 = cos(B) / sin(B) * sin(StateFlowGUI_B.Sum4) - cos(StateFlowGUI_B.Sum4);

    /* '<S26>:1:24' */
    x5 = cos(StateFlowGUI_B.Sum7) - cos(B) / sin(B) * sin(StateFlowGUI_B.Sum7);

    /* '<S26>:1:25' */
    T5 = cos(A) - cos(B) / sin(B) * sin(A);

    /* '<S26>:1:27' */
    F = (StateFlowGUI_B.vel_B_conv_a * x4 + StateFlowGUI_B.vel_A_conv_b * x5) /
      T5;

    /* '<S26>:1:29' */
    N21 = ((cos(A) / sin(A) - cos(B) / sin(B)) * sin(StateFlowGUI_B.Sum4) + cos
           (B) / sin(B) * sin(StateFlowGUI_B.Sum4)) - cos(StateFlowGUI_B.Sum4);

    /* '<S26>:1:31' */
    N22 = ((cos(A) / sin(A) - cos(B) / sin(B)) * -sin(StateFlowGUI_B.Sum7) - cos
           (B) / sin(B) * sin(StateFlowGUI_B.Sum7)) + cos(StateFlowGUI_B.Sum7);

    /* '<S26>:1:33' */
    x2 = (cos(A) / sin(A) - cos(B) / sin(B)) * sin(B);

    /* '<S26>:1:35' */
    x3 = N21 / x2 * StateFlowGUI_B.vel_B_conv_a + N22 / x2 *
      StateFlowGUI_B.vel_A_conv_b;

    /* '<S26>:1:37' */
    J[0] = x4 / T5;
    J[2] = x5 / T5;
    J[1] = N21 / x2;
    J[3] = N22 / x2;

    /* '<S26>:1:44' */
    /* '<S26>:1:45' */
    /* '<S26>:1:46' */
    x5 = cos(A) - cos(B) / sin(B) * sin(A);

    /* '<S26>:1:48' */
    /* '<S26>:1:50' */
    /* '<S26>:1:52' */
    /* '<S26>:1:54' */
    x4 = sin(B);

    /* '<S26>:1:56' */
    T5 = sin(B);

    /* '<S26>:1:58' */
    N21 = sin(B);
    N21 = (-sin(A) * F - -1.0 / (N21 * N21) * x3 * sin(A)) - cos(B) / sin(B) *
      cos(A) * F;

    /* '<S26>:1:60' */
    N22 = sin(A);
    J_p_idx_1 = sin(B);
    b_a = sin(B);

    /* '<S26>:1:63' */
    J_p_idx_3 = sin(A);
    i_a = sin(B);
    j_a = sin(B);

    /* '<S26>:1:66' */
    D2p = sin(A);
    g_a = sin(B);
    D2p = (-1.0 / (D2p * D2p) * F + 1.0 / (g_a * g_a) * x3) * sin(B) + (cos(A) /
      sin(A) - cos(B) / sin(B)) * (cos(B) * x3);

    /* '<S26>:1:68' */
    J_p_idx_0 = (((-1.0 / (x4 * x4) * x3 * sin(StateFlowGUI_B.Sum4) + cos(B) /
                   sin(B) * cos(StateFlowGUI_B.Sum4) *
                   StateFlowGUI_B.vel_B_conv_a) + sin(StateFlowGUI_B.Sum4) *
                  StateFlowGUI_B.vel_B_conv_a) * x5 - (cos(B) / sin(B) * sin
      (StateFlowGUI_B.Sum4) - cos(StateFlowGUI_B.Sum4)) * N21) / (x5 * x5);
    x5 = (((1.0 / (T5 * T5) * x3 * sin(StateFlowGUI_B.Sum7) - cos(B) / sin(B) *
            cos(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv_b) - sin
           (StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv_b) * x5 - (cos
           (StateFlowGUI_B.Sum7) - cos(B) / sin(B) * sin(StateFlowGUI_B.Sum7)) *
          N21) / (x5 * x5);
    J_p_idx_1 = ((((((-1.0 / (N22 * N22) * F + 1.0 / (J_p_idx_1 * J_p_idx_1) *
                      x3) * sin(StateFlowGUI_B.Sum4) + (cos(A) / sin(A) - cos(B)
      / sin(B)) * (cos(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv_a)) +
                    -1.0 / (b_a * b_a) * x3 * sin(StateFlowGUI_B.Sum4)) + cos(B)
                   / sin(B) * cos(StateFlowGUI_B.Sum4) *
                   StateFlowGUI_B.vel_B_conv_a) + sin(StateFlowGUI_B.Sum4) *
                  StateFlowGUI_B.vel_B_conv_a) * x2 - (((cos(A) / sin(A) - cos(B)
      / sin(B)) * sin(StateFlowGUI_B.Sum4) + cos(B) / sin(B) * sin
      (StateFlowGUI_B.Sum4)) - cos(StateFlowGUI_B.Sum4)) * D2p) / (x2 * x2);
    J_p_idx_3 = ((((((cos(A) / sin(A) - cos(B) / sin(B)) * (-cos
      (StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv_b) - (-1.0 / (J_p_idx_3 *
      J_p_idx_3) * F + 1.0 / (i_a * i_a) * x3) * sin(StateFlowGUI_B.Sum7)) -
                    -1.0 / (j_a * j_a) * x3 * sin(StateFlowGUI_B.Sum7)) - cos(B)
                   / sin(B) * cos(StateFlowGUI_B.Sum7) *
                   StateFlowGUI_B.vel_A_conv_b) - sin(StateFlowGUI_B.Sum7) *
                  StateFlowGUI_B.vel_A_conv_b) * x2 - (((cos(A) / sin(A) - cos(B)
      / sin(B)) * -sin(StateFlowGUI_B.Sum7) - cos(B) / sin(B) * sin
      (StateFlowGUI_B.Sum7)) + cos(StateFlowGUI_B.Sum7)) * D2p) / (x2 * x2);

    /* '<S26>:1:70' */
    J1[0] = -0.125 * sin(StateFlowGUI_B.Sum4);
    J1[2] = 0.0;
    J1[1] = 0.125 * cos(StateFlowGUI_B.Sum4);
    J1[3] = 0.0;

    /* '<S26>:1:72' */
    /* '<S26>:1:75' */
    J2[0] = 0.0;
    J2[2] = -0.125 * sin(StateFlowGUI_B.Sum7);
    J2[1] = 0.0;
    J2[3] = 0.125 * cos(StateFlowGUI_B.Sum7);

    /* '<S26>:1:77' */
    /* '<S26>:1:80' */
    J3[0] = (0.5 * sin(A) * J[0] + sin(StateFlowGUI_B.Sum4)) * -0.25;
    J3[2] = 0.5 * sin(A) * J[2] * -0.25;
    J3[1] = (0.5 * cos(A) * J[0] + cos(StateFlowGUI_B.Sum4)) * 0.25;
    J3[3] = 0.5 * cos(A) * J[2] * 0.25;

    /* '<S26>:1:82' */
    /* '<S26>:1:85' */
    J4[0] = -0.125 * sin(B) * J[1];
    J4[2] = (0.5 * sin(B) * J[3] + sin(StateFlowGUI_B.Sum7)) * -0.25;
    J4[1] = 0.125 * cos(B) * J[1];
    J4[3] = (0.5 * cos(B) * J[3] + cos(StateFlowGUI_B.Sum7)) * 0.25;

    /* '<S26>:1:87' */
    /* '<S26>:1:90' */
    JE[0] = (sin(A) * J[0] + sin(StateFlowGUI_B.Sum4)) * -0.25;
    JE[2] = sin(A) * J[2] * -0.25;
    JE[1] = (cos(A) * J[0] + cos(StateFlowGUI_B.Sum4)) * 0.25;
    JE[3] = cos(A) * J[2] * 0.25;

    /* '<S26>:1:92' */
    /* '<S26>:1:96' */
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      x2 = J1[bitIdx << 1] * 2.9 * J1[0];
      x2 += J1[(bitIdx << 1) + 1] * 2.9 * J1[1];
      x4 = b_y[bitIdx] + x2;
      tmp[bitIdx] = 0.0;
      x2 = tmp[bitIdx];
      x2 += J2[bitIdx << 1] * 2.9 * 0.0;
      j_a = J[bitIdx << 1] * 0.0522 * J[0];
      tmp[bitIdx] = x2;
      x2 = tmp[bitIdx];
      x2 += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      j_a += J[(bitIdx << 1) + 1] * 0.0522 * J[1];
      tmp[bitIdx] = x2;
      x4 = (x4 + tmp[bitIdx]) + j_a;
      tmp_0[bitIdx] = 0.0;
      x2 = tmp_0[bitIdx];
      x2 += J3[bitIdx << 1] * 2.9 * J3[0];
      j_a = J4[bitIdx << 1] * 2.9 * J4[0];
      tmp_0[bitIdx] = x2;
      x2 = tmp_0[bitIdx];
      x2 += J3[(bitIdx << 1) + 1] * 2.9 * J3[1];
      j_a += J4[(bitIdx << 1) + 1] * 2.9 * J4[1];
      tmp_0[bitIdx] = x2;
      b_y_0[bitIdx] = (x4 + tmp_0[bitIdx]) + j_a;
      tmp_1[bitIdx] = 0.0;
      x2 = tmp_1[bitIdx];
      x2 += JE[bitIdx << 1] * 0.36 * JE[0];
      tmp_1[bitIdx] = x2;
      x2 = tmp_1[bitIdx];
      x2 += JE[(bitIdx << 1) + 1] * 0.36 * JE[1];
      tmp_1[bitIdx] = x2;
      x2 = J1[bitIdx << 1] * 2.9 * 0.0;
      x2 += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      x4 = b_y[bitIdx + 2] + x2;
      tmp[bitIdx + 2] = 0.0;
      x2 = tmp[bitIdx + 2];
      x2 += J2[bitIdx << 1] * 2.9 * J2[2];
      j_a = J[bitIdx << 1] * 0.0522 * J[2];
      tmp[bitIdx + 2] = x2;
      x2 = tmp[bitIdx + 2];
      x2 += J2[(bitIdx << 1) + 1] * 2.9 * J2[3];
      j_a += J[(bitIdx << 1) + 1] * 0.0522 * J[3];
      tmp[bitIdx + 2] = x2;
      x4 = (tmp[bitIdx + 2] + x4) + j_a;
      tmp_0[bitIdx + 2] = 0.0;
      x2 = tmp_0[bitIdx + 2];
      x2 += J3[bitIdx << 1] * 2.9 * J3[2];
      j_a = J4[bitIdx << 1] * 2.9 * J4[2];
      tmp_0[bitIdx + 2] = x2;
      x2 = tmp_0[bitIdx + 2];
      x2 += J3[(bitIdx << 1) + 1] * 2.9 * J3[3];
      j_a += J4[(bitIdx << 1) + 1] * 2.9 * J4[3];
      tmp_0[bitIdx + 2] = x2;
      b_y_0[bitIdx + 2] = (tmp_0[bitIdx + 2] + x4) + j_a;
      tmp_1[bitIdx + 2] = 0.0;
      x2 = tmp_1[bitIdx + 2];
      x2 += JE[bitIdx << 1] * 0.36 * JE[2];
      tmp_1[bitIdx + 2] = x2;
      x2 = tmp_1[bitIdx + 2];
      x2 += JE[(bitIdx << 1) + 1] * 0.36 * JE[3];
      tmp_1[bitIdx + 2] = x2;
    }

    /* '<S26>:1:97' */
    D2p = -0.125 * cos(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv_a;
    i_a = -0.125 * sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv_a;
    N21 = -0.125 * cos(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv_b;
    N22 = -0.125 * sin(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv_b;
    x4 = ((0.5 * cos(A) * F * J[0] + cos(StateFlowGUI_B.Sum4) *
           StateFlowGUI_B.vel_B_conv_a) + 0.5 * sin(A) * J_p_idx_0) * -0.25;
    b_a = (0.5 * cos(A) * F * J[2] + 0.5 * sin(A) * x5) * -0.25;
    T5 = ((-sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv_a - 0.5 * sin(A)
           * F * J[0]) + 0.5 * cos(A) * J_p_idx_0) * 0.25;
    g_a = (-0.5 * sin(A) * F * J[2] + 0.5 * cos(A) * x5) * 0.25;
    tmp_5 = (0.5 * cos(B) * x3 * J[1] + 0.5 * sin(B) * J_p_idx_1) * -0.25;
    tmp_6 = ((0.5 * cos(B) * x3 * J[3] + cos(StateFlowGUI_B.Sum7) *
              StateFlowGUI_B.vel_A_conv_b) + 0.5 * sin(B) * J_p_idx_3) * -0.25;
    tmp_7 = (-0.5 * sin(B) * x3 * J[1] + 0.5 * cos(B) * J_p_idx_1) * 0.25;
    x3 = ((-sin(StateFlowGUI_B.Sum7) * StateFlowGUI_B.vel_A_conv_b - 0.5 * sin(B)
           * x3 * J[3]) + 0.5 * cos(B) * J_p_idx_3) * 0.25;
    B = ((cos(A) * F * J[0] + cos(StateFlowGUI_B.Sum4) *
          StateFlowGUI_B.vel_B_conv_a) + sin(A) * J_p_idx_0) * -0.25;
    tmp_8 = (cos(A) * F * J[2] + sin(A) * x5) * -0.25;
    tmp_9 = ((-sin(StateFlowGUI_B.Sum4) * StateFlowGUI_B.vel_B_conv_a - sin(A) *
              F * J[0]) + cos(A) * J_p_idx_0) * 0.25;
    A = (-sin(A) * F * J[2] + cos(A) * x5) * 0.25;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      M[bitIdx << 1] = b_y_0[bitIdx << 1] + tmp_1[bitIdx << 1];
      tmp[bitIdx] = 0.0;
      tmp_0[bitIdx] = 0.0;
      x2 = tmp_0[bitIdx];
      j_a = tmp[bitIdx];
      j_a += J1[bitIdx << 1] * 2.9 * D2p;
      x2 += J2[bitIdx << 1] * 2.9 * 0.0;
      F = J[bitIdx << 1] * 0.0522 * J_p_idx_0;
      tmp[bitIdx] = j_a;
      tmp_0[bitIdx] = x2;
      x2 = tmp_0[bitIdx];
      j_a = tmp[bitIdx];
      j_a += J1[(bitIdx << 1) + 1] * 2.9 * i_a;
      x2 += J2[(bitIdx << 1) + 1] * 2.9 * 0.0;
      F += J[(bitIdx << 1) + 1] * 0.0522 * J_p_idx_1;
      tmp[bitIdx] = j_a;
      tmp_0[bitIdx] = x2;
      x2 = (tmp[bitIdx] + tmp_0[bitIdx]) + F;
      tmp_2[bitIdx] = 0.0;
      j_a = tmp_2[bitIdx];
      j_a += J3[bitIdx << 1] * 2.9 * x4;
      F = J4[bitIdx << 1] * 2.9 * tmp_5;
      tmp_2[bitIdx] = j_a;
      j_a = tmp_2[bitIdx];
      j_a += J3[(bitIdx << 1) + 1] * 2.9 * T5;
      F += J4[(bitIdx << 1) + 1] * 2.9 * tmp_7;
      tmp_2[bitIdx] = j_a;
      tmp_3[bitIdx] = (x2 + tmp_2[bitIdx]) + F;
      tmp_4[bitIdx] = 0.0;
      x2 = tmp_4[bitIdx];
      x2 += JE[bitIdx << 1] * 0.36 * B;
      tmp_4[bitIdx] = x2;
      x2 = tmp_4[bitIdx];
      x2 += JE[(bitIdx << 1) + 1] * 0.36 * tmp_9;
      tmp_4[bitIdx] = x2;
      M[1 + (bitIdx << 1)] = b_y_0[(bitIdx << 1) + 1] + tmp_1[(bitIdx << 1) + 1];
      tmp[bitIdx + 2] = 0.0;
      tmp_0[bitIdx + 2] = 0.0;
      x2 = tmp_0[bitIdx + 2];
      j_a = tmp[bitIdx + 2];
      j_a += J1[bitIdx << 1] * 2.9 * 0.0;
      x2 += J2[bitIdx << 1] * 2.9 * N21;
      F = J[bitIdx << 1] * 0.0522 * x5;
      tmp[bitIdx + 2] = j_a;
      tmp_0[bitIdx + 2] = x2;
      x2 = tmp_0[bitIdx + 2];
      j_a = tmp[bitIdx + 2];
      j_a += J1[(bitIdx << 1) + 1] * 2.9 * 0.0;
      x2 += J2[(bitIdx << 1) + 1] * 2.9 * N22;
      F += J[(bitIdx << 1) + 1] * 0.0522 * J_p_idx_3;
      tmp[bitIdx + 2] = j_a;
      tmp_0[bitIdx + 2] = x2;
      x2 = (tmp[bitIdx + 2] + tmp_0[bitIdx + 2]) + F;
      tmp_2[bitIdx + 2] = 0.0;
      j_a = tmp_2[bitIdx + 2];
      j_a += J3[bitIdx << 1] * 2.9 * b_a;
      F = J4[bitIdx << 1] * 2.9 * tmp_6;
      tmp_2[bitIdx + 2] = j_a;
      j_a = tmp_2[bitIdx + 2];
      j_a += J3[(bitIdx << 1) + 1] * 2.9 * g_a;
      F += J4[(bitIdx << 1) + 1] * 2.9 * x3;
      tmp_2[bitIdx + 2] = j_a;
      tmp_3[bitIdx + 2] = (tmp_2[bitIdx + 2] + x2) + F;
      tmp_4[bitIdx + 2] = 0.0;
      x2 = tmp_4[bitIdx + 2];
      x2 += JE[bitIdx << 1] * 0.36 * tmp_8;
      tmp_4[bitIdx + 2] = x2;
      x2 = tmp_4[bitIdx + 2];
      x2 += JE[(bitIdx << 1) + 1] * 0.36 * A;
      tmp_4[bitIdx + 2] = x2;
    }

    /* '<S26>:1:99' */
    D2p = StateFlowGUI_B.Sum9_a[0];
    i_a = StateFlowGUI_B.Sum9_a[1];
    x4 = StateFlowGUI_B.vel_B_conv_a;
    T5 = StateFlowGUI_B.vel_A_conv_b;
    StateFlowGUI_B.K[0] = tmp_3[0] + tmp_4[0];
    A = M[0] * D2p;
    M_0[0] = A;
    A = M_0[0];
    StateFlowGUI_B.K[1] = tmp_3[1] + tmp_4[1];
    A += M[2] * i_a;
    M_0[0] = A;
    StateFlowGUI_B.K[2] = tmp_3[2] + tmp_4[2];
    A = M[1] * D2p;
    M_0[1] = A;
    A = M_0[1];
    StateFlowGUI_B.K[3] = tmp_3[3] + tmp_4[3];
    A += M[3] * i_a;
    M_0[1] = A;

    /* '<S26>:1:101' */
    /*  Cm = Jtrasm*C + Jm*Thetam_pp; */
    /* '<S26>:1:107' */
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      x2 = StateFlowGUI_B.K[bitIdx] * x4;
      J[bitIdx] = 0.0;
      A = J[bitIdx];
      A += o_a[bitIdx] * M[0];
      J[bitIdx] = A;
      A = J[bitIdx];
      A += o_a[bitIdx + 2] * M[1];
      J[bitIdx] = A;
      x2 += StateFlowGUI_B.K[bitIdx + 2] * T5;
      J[bitIdx + 2] = 0.0;
      A = J[bitIdx + 2];
      A += o_a[bitIdx] * M[2];
      J[bitIdx + 2] = A;
      A = J[bitIdx + 2];
      A += o_a[bitIdx + 2] * M[3];
      J[bitIdx + 2] = A;
      Theta_pp[bitIdx] = M_0[bitIdx] + x2;
      x2 = J[bitIdx] * 0.015625;
      x2 += J[bitIdx + 2] * 0.0;
      StateFlowGUI_B.Mm[bitIdx] = x2 + Jm[bitIdx];
      x2 = J[bitIdx] * 0.0;
      x2 += J[bitIdx + 2] * 0.015625;
      StateFlowGUI_B.Mm[bitIdx + 2] = Jm[bitIdx + 2] + x2;
    }

    if (StateFlowGUI_B.Bool == 4.0) {
      /* '<S26>:1:108' */
      sf_internal_predicateOutput = true;
      bitIdx = 0;
      exitg1 = false;
      while ((!exitg1) && (bitIdx + 1 < 5)) {
        if (!(StateFlowGUI_B.Mm[bitIdx] < StateFlowGUI_B.Memory_d[bitIdx])) {
          sf_internal_predicateOutput = false;
          exitg1 = true;
        } else {
          bitIdx++;
        }
      }

      if (sf_internal_predicateOutput) {
        /* '<S26>:1:110' */
        StateFlowGUI_B.Mpi[0] = StateFlowGUI_B.Mm[0];
        StateFlowGUI_B.Mpi[1] = StateFlowGUI_B.Mm[1];
        StateFlowGUI_B.Mpi[2] = StateFlowGUI_B.Mm[2];
        StateFlowGUI_B.Mpi[3] = StateFlowGUI_B.Mm[3];
      } else {
        /* '<S26>:1:112' */
        StateFlowGUI_B.Mpi[0] = StateFlowGUI_B.Memory_d[0];
        StateFlowGUI_B.Mpi[1] = StateFlowGUI_B.Memory_d[1];
        StateFlowGUI_B.Mpi[2] = StateFlowGUI_B.Memory_d[2];
        StateFlowGUI_B.Mpi[3] = StateFlowGUI_B.Memory_d[3];
      }
    } else {
      /* '<S26>:1:115' */
      StateFlowGUI_B.Mpi[0] = 2.0;
      StateFlowGUI_B.Mpi[1] = 2.0;
      StateFlowGUI_B.Mpi[2] = 2.0;
      StateFlowGUI_B.Mpi[3] = 2.0;
    }

    /*  Km = (Jtrasm'*K*Jtrasm); */
    /*  Cm = Mm*Thetam_pp  +  Km*Thetam_p; */
    /*   */
    /*  Mm_ = Jm; */
    /*  DMm = Mm-Jm; */
    /*  D = DMm*Thetam_pp + Km*Thetam_p; */
    /*  Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)]; */
    /*  Bt = [zeros(2,2); Mm_^-1]; */
    /*  Acl = Aol - Bt*[Kp Kd]; */
    /* '<S26>:1:129' */
    StateFlowGUI_B.C1 = Theta_pp[0];

    /* '<S26>:1:130' */
    StateFlowGUI_B.C2 = Theta_pp[1];

    /* End of MATLAB Function: '<S4>/Dinamica Inversa1' */

    /* MATLAB Function: '<S4>/Coppia motrice' */
    /* MATLAB Function 'Movimento/Coppia motrice': '<S25>:1' */
    /* '<S25>:1:2' */
    /* '<S25>:1:4' */
    StateFlowGUI_B.Cm1 = (0.069632 * StateFlowGUI_B.Sum9_a[0] +
                          StateFlowGUI_B.C1) / 64.0;

    /* '<S25>:1:5' */
    StateFlowGUI_B.Cm2 = (0.069632 * StateFlowGUI_B.Sum9_a[1] +
                          StateFlowGUI_B.C2) / 64.0;

    /* Gain: '<S4>/Gain1' */
    StateFlowGUI_B.Gain1 = StateFlowGUI_P.Gain1_Gain * StateFlowGUI_B.Cm2;

    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S94>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    if (StateFlowGUI_B.Memory != 0.0) {
      StateFlowGUI_B.Switch1 = StateFlowGUI_P.Constant_Value;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch1_Threshold) {
        /* Switch: '<S6>/Switch1' */
        StateFlowGUI_B.Switch1_c = StateFlowGUI_B.Gain1;
      } else {
        /* Switch: '<S6>/Switch1' */
        StateFlowGUI_B.Switch1_c = StateFlowGUI_B.CoppiaA;
      }

      StateFlowGUI_B.Switch1 = StateFlowGUI_B.Switch1_c;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* Saturate: '<S6>/Coppia A braccia saturata' */
    A = StateFlowGUI_B.Switch1;
    F = StateFlowGUI_P.CoppiaAbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowGUI_P.CoppiaAbracciasaturata_UpperSat;
    if (A > J_p_idx_0) {
      StateFlowGUI_B.CoppiaAbracciasaturata = J_p_idx_0;
    } else if (A < F) {
      StateFlowGUI_B.CoppiaAbracciasaturata = F;
    } else {
      StateFlowGUI_B.CoppiaAbracciasaturata = A;
    }

    /* End of Saturate: '<S6>/Coppia A braccia saturata' */

    /* DataTypeConversion: '<S6>/Data Type Conversion3' */
    x2 = floor(StateFlowGUI_B.CoppiaAbracciasaturata);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 65536.0);
    }

    StateFlowGUI_B.DataTypeConversion3 = (int16_T)(x2 < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-x2 : (int32_T)(int16_T)(uint16_T)x2);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion3' */

    /* S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 1' */

    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[18];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S94>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S94>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[19];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S94>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14 = StateFlowGUI_B.EtherCATPDOReceive9;

    /* MATLAB Function: '<S94>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory,
      StateFlowGUI_B.DataTypeConversion14, &StateFlowGUI_B.sf_MATLABFunction_e);

    /* Memory: '<S98>/Memory' */
    StateFlowGUI_B.Memory_g = StateFlowGUI_DW.Memory_PreviousInput_o;

    /* Gain: '<S4>/Gain' */
    StateFlowGUI_B.Gain = StateFlowGUI_P.Gain_Gain_jp * StateFlowGUI_B.Cm1;

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S98>/Constant'
     *  Switch: '<S7>/Switch1'
     */
    if (StateFlowGUI_B.Memory_g != 0.0) {
      StateFlowGUI_B.Switch1_l = StateFlowGUI_P.Constant_Value_l;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch1_Threshold_f) {
        /* Switch: '<S7>/Switch1' */
        StateFlowGUI_B.Switch1_i = StateFlowGUI_B.Gain;
      } else {
        /* Switch: '<S7>/Switch1' */
        StateFlowGUI_B.Switch1_i = StateFlowGUI_B.CoppiaB;
      }

      StateFlowGUI_B.Switch1_l = StateFlowGUI_B.Switch1_i;
    }

    /* End of Switch: '<S98>/Switch1' */

    /* Saturate: '<S7>/Coppia B braccia saturata' */
    A = StateFlowGUI_B.Switch1_l;
    F = StateFlowGUI_P.CoppiaBbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowGUI_P.CoppiaBbracciasaturata_UpperSat;
    if (A > J_p_idx_0) {
      StateFlowGUI_B.CoppiaBbracciasaturata = J_p_idx_0;
    } else if (A < F) {
      StateFlowGUI_B.CoppiaBbracciasaturata = F;
    } else {
      StateFlowGUI_B.CoppiaBbracciasaturata = A;
    }

    /* End of Saturate: '<S7>/Coppia B braccia saturata' */

    /* DataTypeConversion: '<S7>/Data Type Conversion4' */
    x2 = floor(StateFlowGUI_B.CoppiaBbracciasaturata);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 65536.0);
    }

    StateFlowGUI_B.DataTypeConversion4 = (int16_T)(x2 < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-x2 : (int32_T)(int16_T)(uint16_T)x2);

    /* End of DataTypeConversion: '<S7>/Data Type Conversion4' */

    /* S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 7' */

    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[20];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S98>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S98>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[21];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S98>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14_g = StateFlowGUI_B.EtherCATPDOReceive9_h;

    /* MATLAB Function: '<S98>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory_g,
      StateFlowGUI_B.DataTypeConversion14_g, &StateFlowGUI_B.sf_MATLABFunction_a);

    /* Memory: '<S102>/Memory' */
    StateFlowGUI_B.Memory_n = StateFlowGUI_DW.Memory_PreviousInput_g;

    /* Sum: '<S116>/Sum' */
    StateFlowGUI_B.Sum_i = StateFlowGUI_B.convert - StateFlowGUI_B.OffA_vite;

    /* MATLAB Function: '<S125>/Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv': '<S126>:1' */
    /* '<S126>:1:2' */
    StateFlowGUI_B.pos_A_conv = StateFlowGUI_B.Sum_i * 0.02 / 6.2831853071795862
      * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S13>/Sum3' */
    StateFlowGUI_B.Sum3 = StateFlowGUI_B.convert10 - StateFlowGUI_B.OffB_vite;

    /* MATLAB Function: '<S125>/Asse B conv v' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v': '<S127>:1' */
    /* '<S127>:1:2' */
    StateFlowGUI_B.pos_B_conv_v = StateFlowGUI_B.Sum3 * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S125>/Sum5' */
    StateFlowGUI_B.Sum5 = StateFlowGUI_B.pos_A_conv +
      StateFlowGUI_B.pos_B_conv_v;

    /* Sum: '<S119>/Sum2' */
    StateFlowGUI_B.Sum2_b = StateFlowGUI_B.Clock - StateFlowGUI_B.OffT;

    /* MATLAB Function: '<S13>/Rifermento Asse A Vite' incorporates:
     *  Constant: '<Root>/Alzata A'
     *  Constant: '<Root>/Periodo A'
     */
    StateFlowGUI_AsseB(StateFlowGUI_B.Sum2_b, StateFlowGUI_P.AlzataA_Value,
                       StateFlowGUI_P.PeriodoA_Value,
                       &StateFlowGUI_B.sf_RifermentoAsseAVite);

    /* S-Function (xpcethercatpdorx): '<S123>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S123>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[22];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S123>/Velocity A' */
    StateFlowGUI_B.VelocityA_m = StateFlowGUI_B.EtherCATPDOReceive14_l;

    /* S-Function (xpcethercatpdorx): '<S123>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S123>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[23];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S123>/Velocity B' */
    StateFlowGUI_B.VelocityB_h = StateFlowGUI_B.EtherCATPDOReceive15_e;

    /* MATLAB Function: '<S123>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse A conv': '<S128>:1' */
    /* '<S128>:1:2' */
    StateFlowGUI_B.vel_A_conv = (StateFlowGUI_B.VelocityA_m +
      StateFlowGUI_B.VelocityB_h) * 0.02 / 6.2831853071795862 *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Switch: '<S102>/Switch1' incorporates:
     *  Constant: '<S102>/Constant'
     *  Switch: '<S8>/Switch'
     */
    if (StateFlowGUI_B.Memory_n != 0.0) {
      StateFlowGUI_B.Switch1_f = StateFlowGUI_P.Constant_Value_e;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch_Threshold) {
        /* Sum: '<S13>/Sum8' incorporates:
         *  Switch: '<S8>/Switch'
         */
        StateFlowGUI_B.Sum8_p = StateFlowGUI_B.sf_RifermentoAsseAVite.ldm_vel -
          StateFlowGUI_B.vel_A_conv;

        /* Gain: '<S120>/Gain6' incorporates:
         *  Switch: '<S8>/Switch'
         */
        StateFlowGUI_B.Gain6 = StateFlowGUI_P.Gain6_Gain * StateFlowGUI_B.Sum8_p;

        /* Sum: '<S13>/Sum1' incorporates:
         *  Switch: '<S8>/Switch'
         */
        StateFlowGUI_B.Sum1_o = StateFlowGUI_B.sf_RifermentoAsseAVite.ldm_pos -
          StateFlowGUI_B.Sum5;

        /* Gain: '<S120>/Gain' incorporates:
         *  Switch: '<S8>/Switch'
         */
        StateFlowGUI_B.Gain_h = StateFlowGUI_P.Gain_Gain * StateFlowGUI_B.Sum1_o;

        /* Sum: '<S120>/Sum9' incorporates:
         *  Switch: '<S8>/Switch'
         */
        StateFlowGUI_B.Sum9_d = StateFlowGUI_B.Gain_h + StateFlowGUI_B.Gain6;

        /* Gain: '<S8>/Gain' incorporates:
         *  Switch: '<S8>/Switch'
         */
        StateFlowGUI_B.Gain_a = StateFlowGUI_P.Gain_Gain_j *
          StateFlowGUI_B.Sum9_d;

        /* Switch: '<S8>/Switch' */
        StateFlowGUI_B.Switch = StateFlowGUI_B.Gain_a;
      } else {
        /* Switch: '<S8>/Switch' */
        StateFlowGUI_B.Switch = StateFlowGUI_B.CoppiaH;
      }

      StateFlowGUI_B.Switch1_f = StateFlowGUI_B.Switch;
    }

    /* End of Switch: '<S102>/Switch1' */

    /* Saturate: '<S8>/Coppia A vite saturata' */
    A = StateFlowGUI_B.Switch1_f;
    F = StateFlowGUI_P.CoppiaAvitesaturata_LowerSat;
    J_p_idx_0 = StateFlowGUI_P.CoppiaAvitesaturata_UpperSat;
    if (A > J_p_idx_0) {
      StateFlowGUI_B.CoppiaAvitesaturata = J_p_idx_0;
    } else if (A < F) {
      StateFlowGUI_B.CoppiaAvitesaturata = F;
    } else {
      StateFlowGUI_B.CoppiaAvitesaturata = A;
    }

    /* End of Saturate: '<S8>/Coppia A vite saturata' */
    /* DataTypeConversion: '<S8>/Convert A' */
    x2 = floor(StateFlowGUI_B.CoppiaAvitesaturata);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 65536.0);
    }

    StateFlowGUI_B.ConvertA = (int16_T)(x2 < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-x2 : (int32_T)(int16_T)(uint16_T)x2);

    /* End of DataTypeConversion: '<S8>/Convert A' */

    /* S-Function (xpcethercatpdotx): '<S8>/Torque send' */

    /* Level2 S-Function Block: '<S8>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[24];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S102>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S102>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[25];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S102>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14_k =
      StateFlowGUI_B.EtherCATPDOReceive9_hd;

    /* MATLAB Function: '<S102>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory_n,
      StateFlowGUI_B.DataTypeConversion14_k, &StateFlowGUI_B.sf_MATLABFunction_f);

    /* Memory: '<S104>/Memory' */
    StateFlowGUI_B.Memory_a = StateFlowGUI_DW.Memory_PreviousInput_hp;

    /* MATLAB Function: '<S13>/Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Asse B conv': '<S118>:1' */
    /* '<S118>:1:2' */
    StateFlowGUI_B.pos_B_conv = StateFlowGUI_B.Sum3 * 3.1415926535897931 /
      2048.0 / 40.0;

    /* MATLAB Function: '<S13>/Asse B' incorporates:
     *  Constant: '<Root>/Alzata B '
     *  Constant: '<Root>/Periodo B'
     */
    StateFlowGUI_AsseB(StateFlowGUI_B.Sum2_b, StateFlowGUI_P.AlzataB_Value,
                       StateFlowGUI_P.PeriodoB_Value, &StateFlowGUI_B.sf_AsseB);

    /* MATLAB Function: '<S123>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse B conv': '<S129>:1' */
    /* '<S129>:1:2' */
    StateFlowGUI_B.vel_B_conv = StateFlowGUI_B.VelocityB_h * 3.1415926535897931 /
      20480.0 / 40.0;

    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S104>/Constant'
     *  Switch: '<S9>/Switch2'
     */
    if (StateFlowGUI_B.Memory_a != 0.0) {
      StateFlowGUI_B.Switch1_k = StateFlowGUI_P.Constant_Value_o;
    } else {
      if (StateFlowGUI_B.Bool > StateFlowGUI_P.Switch2_Threshold) {
        /* Sum: '<S13>/Sum6' incorporates:
         *  Switch: '<S9>/Switch2'
         */
        StateFlowGUI_B.Sum6_f = StateFlowGUI_B.sf_AsseB.ldm_vel -
          StateFlowGUI_B.vel_B_conv;

        /* Gain: '<S13>/Gain4' incorporates:
         *  Switch: '<S9>/Switch2'
         */
        StateFlowGUI_B.Gain4 = StateFlowGUI_P.Gain4_Gain * StateFlowGUI_B.Sum6_f;

        /* Sum: '<S13>/Sum4' incorporates:
         *  Switch: '<S9>/Switch2'
         */
        StateFlowGUI_B.Sum4_i = StateFlowGUI_B.sf_AsseB.ldm_pos -
          StateFlowGUI_B.pos_B_conv;

        /* Gain: '<S13>/Gain2' incorporates:
         *  Switch: '<S9>/Switch2'
         */
        StateFlowGUI_B.Gain2 = StateFlowGUI_P.Gain2_Gain * StateFlowGUI_B.Sum4_i;

        /* Sum: '<S13>/Sum7' incorporates:
         *  Switch: '<S9>/Switch2'
         */
        StateFlowGUI_B.Sum7_i = StateFlowGUI_B.Gain2 + StateFlowGUI_B.Gain4;

        /* Switch: '<S9>/Switch2' */
        StateFlowGUI_B.Switch2 = StateFlowGUI_B.Sum7_i;
      } else {
        /* Switch: '<S9>/Switch2' incorporates:
         *  Constant: '<S9>/Constant1'
         */
        StateFlowGUI_B.Switch2 = StateFlowGUI_P.Constant1_Value_e;
      }

      StateFlowGUI_B.Switch1_k = StateFlowGUI_B.Switch2;
    }

    /* End of Switch: '<S104>/Switch1' */

    /* DataTypeConversion: '<S9>/Convert B' */
    x2 = floor(StateFlowGUI_B.Switch1_k);
    if (rtIsNaN(x2) || rtIsInf(x2)) {
      x2 = 0.0;
    } else {
      x2 = fmod(x2, 65536.0);
    }

    StateFlowGUI_B.ConvertB = (int16_T)(x2 < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-x2 : (int32_T)(int16_T)(uint16_T)x2);

    /* End of DataTypeConversion: '<S9>/Convert B' */

    /* S-Function (xpcethercatpdotx): '<S9>/EtherCAT PDO Transmit 2' */

    /* Level2 S-Function Block: '<S9>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[26];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S104>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S104>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[27];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S104>/Data Type Conversion14' */
    StateFlowGUI_B.DataTypeConversion14_e = StateFlowGUI_B.EtherCATPDOReceive9_d;

    /* MATLAB Function: '<S104>/MATLAB Function' */
    StateFlowGUI_MATLABFunction(StateFlowGUI_B.Memory_a,
      StateFlowGUI_B.DataTypeConversion14_e, &StateFlowGUI_B.sf_MATLABFunction_i);

    /* MATLAB Function: '<S4>/Cinematica diretta' */
    /* MATLAB Function 'Movimento/Cinematica diretta': '<S22>:1' */
    /* '<S22>:1:2' */
    /* '<S22>:1:3' */
    /* '<S22>:1:6' */
    J_p_idx_1 = sin(StateFlowGUI_B.Sum7) - sin(StateFlowGUI_B.Sum4);
    b_a = -0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) * 0.25;
    A = J_p_idx_1 * J_p_idx_1 * 0.0625 + b_a * b_a;

    /* '<S22>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) *
      0.25;
    B = ((-0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) * 0.25) *
         ((sin(StateFlowGUI_B.Sum7) - sin(StateFlowGUI_B.Sum4)) * 0.25) * (-0.18
          - 0.5 * cos(StateFlowGUI_B.Sum7)) + (sin(StateFlowGUI_B.Sum7) - sin
          (StateFlowGUI_B.Sum4)) * -0.01125 * (cos(StateFlowGUI_B.Sum7) + cos
          (StateFlowGUI_B.Sum4))) - 0.5 * sin(StateFlowGUI_B.Sum7) * (J_p_idx_3 *
      J_p_idx_3);

    /* '<S22>:1:10' */
    x2 = cos(StateFlowGUI_B.Sum7) + cos(StateFlowGUI_B.Sum4);
    x4 = -0.18 - (cos(StateFlowGUI_B.Sum7) - cos(StateFlowGUI_B.Sum4)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S22>:1:14' */
    A = (sqrt(B * B - ((x2 * x2 * 0.00050625 - (-0.18 - (cos(StateFlowGUI_B.Sum7)
              - cos(StateFlowGUI_B.Sum4)) * 0.25) * ((cos(StateFlowGUI_B.Sum7) +
              cos(StateFlowGUI_B.Sum4)) * 0.0225) * (-0.18 - 0.5 * cos
             (StateFlowGUI_B.Sum7))) + (0.045 * cos(StateFlowGUI_B.Sum7) +
            0.0081) * (x4 * x4)) * (4.0 * A)) + -B) / (2.0 * A);

    /*  Posizione X end-effector */
    /* '<S22>:1:16' */
    StateFlowGUI_B.x_n = (A * 0.25 * (sin(StateFlowGUI_B.Sum7) - sin
      (StateFlowGUI_B.Sum4)) - (cos(StateFlowGUI_B.Sum7) + cos
      (StateFlowGUI_B.Sum4)) * 0.0225) / (-0.18 - (cos(StateFlowGUI_B.Sum7) -
      cos(StateFlowGUI_B.Sum4)) * 0.25);
    StateFlowGUI_B.y_k = A;

    /* MATLAB Function: '<S4>/MATLAB Jin' */
    /* MATLAB Function 'Movimento/MATLAB Jin': '<S31>:1' */
    /* '<S31>:1:3' */
    /* '<S31>:1:4' */
    /* '<S31>:1:6' */
    /* '<S31>:1:8' */
    /* '<S31>:1:10' */
    x2 = (StateFlowGUI_B.Sum1 - 0.25 * sin
          (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) *
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2));

    /* '<S31>:1:12' */
    x4 = (((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (-0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta1)) + (StateFlowGUI_B.Sum1
           - 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (0.25 *
           cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) / x2;

    /* '<S31>:1:14' */
    x2 = ((StateFlowGUI_B.Sum1 - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (-0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * ((StateFlowGUI_B.Sum
            + 0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) /
          ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)) + ((StateFlowGUI_B.Sum
            + 0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1)) *
          (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2))) / x2;

    /* '<S31>:1:16' */
    /* '<S31>:1:18' */
    /* '<S31>:1:20' */
    StateFlowGUI_B.x_p = ((-(StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x2 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) +
                          (StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta2)) / ((StateFlowGUI_B.Sum -
      0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) * (0.25 *
      cos(StateFlowGUI_B.sf_CinematicaInversa.theta2))) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p + -(StateFlowGUI_B.Sum1 -
      0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
      ((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * x4 *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p;

    /* '<S31>:1:21' */
    StateFlowGUI_B.y_p = x4 * StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
      x2 * StateFlowGUI_B.sf_CinematicaInversavel.theta2_p;

    /* MATLAB Function: '<S4>/Cinematica diretta Acc' */
    /* MATLAB Function 'Movimento/Cinematica diretta Acc': '<S23>:1' */
    /* '<S23>:1:3' */
    /* '<S23>:1:4' */
    /* '<S23>:1:6' */
    J_p_idx_1 = 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p;
    b_a = 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta2_p;

    /* '<S23>:1:9' */
    J_p_idx_3 = 0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p;
    x2 = 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      StateFlowGUI_B.sf_CinematicaInversavel.theta1_p;
    B = ((((((0.5 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
              StateFlowGUI_B.MultiportSwitch[2] *
              StateFlowGUI_B.sf_CinematicaInversavel.theta1_p +
              StateFlowGUI_B.MultiportSwitch[2] *
              StateFlowGUI_B.MultiportSwitch[2]) + J_p_idx_3 * J_p_idx_3) +
            (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
             (StateFlowGUI_B.sf_CinematicaInversavel.theta1_p *
              StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + 0.25 * sin
             (StateFlowGUI_B.sf_CinematicaInversa.theta1) *
             StateFlowGUI_B.theta1_pp) * ((StateFlowGUI_B.Sum + 0.09) - 0.25 *
             cos(StateFlowGUI_B.sf_CinematicaInversa.theta1))) +
           StateFlowGUI_B.MultiportSwitch[3] * StateFlowGUI_B.MultiportSwitch[3])
          - 0.5 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
          StateFlowGUI_B.MultiportSwitch[3] *
          StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) + x2 * x2) + (0.25 *
      sin(StateFlowGUI_B.sf_CinematicaInversa.theta1) *
      (StateFlowGUI_B.sf_CinematicaInversavel.theta1_p *
       StateFlowGUI_B.sf_CinematicaInversavel.theta1_p) - 0.25 * cos
      (StateFlowGUI_B.sf_CinematicaInversa.theta1) * StateFlowGUI_B.theta1_pp) *
      (StateFlowGUI_B.Sum1 - 0.25 * sin
       (StateFlowGUI_B.sf_CinematicaInversa.theta1));

    /* '<S23>:1:12' */
    A = (((StateFlowGUI_B.Sum - 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta2)) * B /
         ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
          (StateFlowGUI_B.sf_CinematicaInversa.theta1)) - (((((((0.5 * sin
                (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
                StateFlowGUI_B.MultiportSwitch[2] *
                StateFlowGUI_B.sf_CinematicaInversavel.theta2_p +
                StateFlowGUI_B.MultiportSwitch[2] *
                StateFlowGUI_B.MultiportSwitch[2]) + J_p_idx_1 * J_p_idx_1) +
              (0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
               (StateFlowGUI_B.sf_CinematicaInversavel.theta2_p *
                StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) + 0.25 * sin
               (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
               StateFlowGUI_B.theta2_pp) * ((StateFlowGUI_B.Sum - 0.09) - 0.25 *
               cos(StateFlowGUI_B.sf_CinematicaInversa.theta2))) +
             StateFlowGUI_B.MultiportSwitch[3] * StateFlowGUI_B.MultiportSwitch
             [3]) - 0.5 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
            StateFlowGUI_B.MultiportSwitch[3] *
            StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) + b_a * b_a) +
          (0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta2) *
           (StateFlowGUI_B.sf_CinematicaInversavel.theta2_p *
            StateFlowGUI_B.sf_CinematicaInversavel.theta2_p) - 0.25 * cos
           (StateFlowGUI_B.sf_CinematicaInversa.theta2) *
           StateFlowGUI_B.theta2_pp) * (StateFlowGUI_B.Sum1 - 0.25 * sin
           (StateFlowGUI_B.sf_CinematicaInversa.theta2)))) /
      ((StateFlowGUI_B.Sum1 - 0.25 * sin
        (StateFlowGUI_B.sf_CinematicaInversa.theta2)) - ((StateFlowGUI_B.Sum -
         0.09) - 0.25 * cos(StateFlowGUI_B.sf_CinematicaInversa.theta2)) /
       ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
        (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * (StateFlowGUI_B.Sum1 -
        0.25 * sin(StateFlowGUI_B.sf_CinematicaInversa.theta1)));

    /* '<S23>:1:14' */
    StateFlowGUI_B.x_pp_f = ((StateFlowGUI_B.Sum1 - 0.25 * sin
      (StateFlowGUI_B.sf_CinematicaInversa.theta1)) * -A - B) /
      ((StateFlowGUI_B.Sum + 0.09) - 0.25 * cos
       (StateFlowGUI_B.sf_CinematicaInversa.theta1));
    StateFlowGUI_B.y_pp_l = A;

    /* Sum: '<S4>/Sum2' */
    StateFlowGUI_B.Sum2_d = StateFlowGUI_B.x_pp_f -
      StateFlowGUI_B.MultiportSwitch[4];

    /* Sum: '<S4>/Sum3' */
    StateFlowGUI_B.Sum3_b = StateFlowGUI_B.y_pp_l -
      StateFlowGUI_B.MultiportSwitch[5];

    /* MATLAB Function: '<S4>/MATLAB Function2' */
    /* MATLAB Function 'Movimento/MATLAB Function2': '<S30>:1' */
    if (StateFlowGUI_B.Bool == 4.0) {
      /* '<S30>:1:2' */
      /* '<S30>:1:3' */
      StateFlowGUI_B.xp = StateFlowGUI_B.x_n;

      /* '<S30>:1:4' */
      StateFlowGUI_B.yp = StateFlowGUI_B.y_k;
    } else {
      /* '<S30>:1:6' */
      StateFlowGUI_B.xp = 0.0;

      /* '<S30>:1:7' */
      StateFlowGUI_B.yp = 0.0;
    }

    /* End of MATLAB Function: '<S4>/MATLAB Function2' */

    /* SampleTimeMath: '<S49>/TSamp'
     *
     * About '<S49>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp = StateFlowGUI_B.Sum7 * StateFlowGUI_P.TSamp_WtEt;

    /* UnitDelay: '<S49>/UD' */
    StateFlowGUI_B.Uk1 = StateFlowGUI_DW.UD_DSTATE;

    /* Sum: '<S49>/Diff' */
    StateFlowGUI_B.Diff = StateFlowGUI_B.TSamp - StateFlowGUI_B.Uk1;

    /* Gain: '<S60>/D*u(k)' */
    StateFlowGUI_B.Duk = StateFlowGUI_P.Duk_Gain * StateFlowGUI_B.Sum7;

    /* UnitDelay: '<S60>/Delay_x1' */
    StateFlowGUI_B.x1k = StateFlowGUI_DW.Delay_x1_DSTATE;

    /* Gain: '<S63>/C11' */
    StateFlowGUI_B.C11 = StateFlowGUI_P.C11_Gain * StateFlowGUI_B.x1k;

    /* UnitDelay: '<S60>/Delay_x2' */
    StateFlowGUI_B.x2k = StateFlowGUI_DW.Delay_x2_DSTATE;

    /* Gain: '<S63>/C12' */
    StateFlowGUI_B.C12 = StateFlowGUI_P.C12_Gain * StateFlowGUI_B.x2k;

    /* Sum: '<S63>/sum2' */
    StateFlowGUI_B.sum2 = StateFlowGUI_B.C11 + StateFlowGUI_B.C12;

    /* Sum: '<S60>/C*X(k)+D*u(k)' */
    StateFlowGUI_B.yk = StateFlowGUI_B.Duk + StateFlowGUI_B.sum2;

    /* SampleTimeMath: '<S47>/TSamp'
     *
     * About '<S47>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_n = StateFlowGUI_B.yk * StateFlowGUI_P.TSamp_WtEt_e;

    /* UnitDelay: '<S47>/UD' */
    StateFlowGUI_B.Uk1_d = StateFlowGUI_DW.UD_DSTATE_a;

    /* Sum: '<S47>/Diff' */
    StateFlowGUI_B.Diff_i = StateFlowGUI_B.TSamp_n - StateFlowGUI_B.Uk1_d;

    /* Gain: '<S61>/A11' */
    StateFlowGUI_B.A11 = StateFlowGUI_P.A11_Gain * StateFlowGUI_B.x1k;

    /* Gain: '<S61>/A12' */
    StateFlowGUI_B.A12 = StateFlowGUI_P.A12_Gain * StateFlowGUI_B.x2k;

    /* Gain: '<S61>/A21' */
    StateFlowGUI_B.A21 = StateFlowGUI_P.A21_Gain * StateFlowGUI_B.x1k;

    /* Gain: '<S61>/A22' */
    StateFlowGUI_B.A22 = StateFlowGUI_P.A22_Gain * StateFlowGUI_B.x2k;

    /* Sum: '<S61>/sum2' */
    StateFlowGUI_B.sum2_n = StateFlowGUI_B.A11 + StateFlowGUI_B.A12;

    /* Sum: '<S61>/sum3' */
    StateFlowGUI_B.sum3 = StateFlowGUI_B.A21 + StateFlowGUI_B.A22;

    /* Gain: '<S62>/B11' */
    StateFlowGUI_B.B11 = StateFlowGUI_P.B11_Gain * StateFlowGUI_B.Sum7;

    /* Sum: '<S60>/A*x1(k) + B*u1(k) ' */
    StateFlowGUI_B.x1k1 = StateFlowGUI_B.sum2_n + StateFlowGUI_B.B11;

    /* Gain: '<S62>/B21' */
    StateFlowGUI_B.B21 = StateFlowGUI_P.B21_Gain * StateFlowGUI_B.Sum7;

    /* Sum: '<S60>/A*x2(k) + B*u2(k)' */
    StateFlowGUI_B.x2k1 = StateFlowGUI_B.sum3 + StateFlowGUI_B.B21;

    /* Gain: '<S56>/D*u(k)' */
    StateFlowGUI_B.Duk_h = StateFlowGUI_P.Duk_Gain_h * StateFlowGUI_B.Sum4;

    /* UnitDelay: '<S56>/Delay_x1' */
    StateFlowGUI_B.x1k_a = StateFlowGUI_DW.Delay_x1_DSTATE_g;

    /* Gain: '<S59>/C11' */
    StateFlowGUI_B.C11_h = StateFlowGUI_P.C11_Gain_n * StateFlowGUI_B.x1k_a;

    /* UnitDelay: '<S56>/Delay_x2' */
    StateFlowGUI_B.x2k_g = StateFlowGUI_DW.Delay_x2_DSTATE_m;

    /* Gain: '<S59>/C12' */
    StateFlowGUI_B.C12_e = StateFlowGUI_P.C12_Gain_d * StateFlowGUI_B.x2k_g;

    /* Sum: '<S59>/sum2' */
    StateFlowGUI_B.sum2_k = StateFlowGUI_B.C11_h + StateFlowGUI_B.C12_e;

    /* Sum: '<S56>/C*X(k)+D*u(k)' */
    StateFlowGUI_B.yk_i = StateFlowGUI_B.Duk_h + StateFlowGUI_B.sum2_k;

    /* SampleTimeMath: '<S48>/TSamp'
     *
     * About '<S48>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_h = StateFlowGUI_B.yk_i * StateFlowGUI_P.TSamp_WtEt_g;

    /* UnitDelay: '<S48>/UD' */
    StateFlowGUI_B.Uk1_b = StateFlowGUI_DW.UD_DSTATE_j;

    /* Sum: '<S48>/Diff' */
    StateFlowGUI_B.Diff_d = StateFlowGUI_B.TSamp_h - StateFlowGUI_B.Uk1_b;

    /* SampleTimeMath: '<S50>/TSamp'
     *
     * About '<S50>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_nd = StateFlowGUI_B.Sum4 * StateFlowGUI_P.TSamp_WtEt_gh;

    /* UnitDelay: '<S50>/UD' */
    StateFlowGUI_B.Uk1_l = StateFlowGUI_DW.UD_DSTATE_f;

    /* Sum: '<S50>/Diff' */
    StateFlowGUI_B.Diff_n = StateFlowGUI_B.TSamp_nd - StateFlowGUI_B.Uk1_l;

    /* Gain: '<S57>/A11' */
    StateFlowGUI_B.A11_p = StateFlowGUI_P.A11_Gain_e * StateFlowGUI_B.x1k_a;

    /* Gain: '<S57>/A12' */
    StateFlowGUI_B.A12_c = StateFlowGUI_P.A12_Gain_a * StateFlowGUI_B.x2k_g;

    /* Gain: '<S57>/A21' */
    StateFlowGUI_B.A21_h = StateFlowGUI_P.A21_Gain_m * StateFlowGUI_B.x1k_a;

    /* Gain: '<S57>/A22' */
    StateFlowGUI_B.A22_d = StateFlowGUI_P.A22_Gain_g * StateFlowGUI_B.x2k_g;

    /* Sum: '<S57>/sum2' */
    StateFlowGUI_B.sum2_nk = StateFlowGUI_B.A11_p + StateFlowGUI_B.A12_c;

    /* Sum: '<S57>/sum3' */
    StateFlowGUI_B.sum3_e = StateFlowGUI_B.A21_h + StateFlowGUI_B.A22_d;

    /* Gain: '<S58>/B11' */
    StateFlowGUI_B.B11_k = StateFlowGUI_P.B11_Gain_f * StateFlowGUI_B.Sum4;

    /* Sum: '<S56>/A*x1(k) + B*u1(k) ' */
    StateFlowGUI_B.x1k1_g = StateFlowGUI_B.sum2_nk + StateFlowGUI_B.B11_k;

    /* Gain: '<S58>/B21' */
    StateFlowGUI_B.B21_l = StateFlowGUI_P.B21_Gain_p * StateFlowGUI_B.Sum4;

    /* Sum: '<S56>/A*x2(k) + B*u2(k)' */
    StateFlowGUI_B.x2k1_n = StateFlowGUI_B.sum3_e + StateFlowGUI_B.B21_l;

    /* DigitalClock: '<S33>/Digital Clock' */
    StateFlowGUI_B.DigitalClock = StateFlowGUI_M->Timing.t[1];

    /* Gain: '<S64>/D*u(k)' */
    StateFlowGUI_B.Duk_n = StateFlowGUI_P.Duk_Gain_g *
      StateFlowGUI_B.DigitalClock;

    /* UnitDelay: '<S64>/Delay_x1' */
    StateFlowGUI_B.x1k_i = StateFlowGUI_DW.Delay_x1_DSTATE_k;

    /* Gain: '<S67>/C11' */
    StateFlowGUI_B.C11_e = StateFlowGUI_P.C11_Gain_g * StateFlowGUI_B.x1k_i;

    /* UnitDelay: '<S64>/Delay_x2' */
    StateFlowGUI_B.x2k_d = StateFlowGUI_DW.Delay_x2_DSTATE_k;

    /* Gain: '<S67>/C12' */
    StateFlowGUI_B.C12_m = StateFlowGUI_P.C12_Gain_d1 * StateFlowGUI_B.x2k_d;

    /* Sum: '<S67>/sum2' */
    StateFlowGUI_B.sum2_ka = StateFlowGUI_B.C11_e + StateFlowGUI_B.C12_m;

    /* Sum: '<S64>/C*X(k)+D*u(k)' */
    StateFlowGUI_B.yk_m = StateFlowGUI_B.Duk_n + StateFlowGUI_B.sum2_ka;

    /* SampleTimeMath: '<S51>/TSamp'
     *
     * About '<S51>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_f = StateFlowGUI_B.yk_m * StateFlowGUI_P.TSamp_WtEt_d;

    /* UnitDelay: '<S51>/UD' */
    StateFlowGUI_B.Uk1_j = StateFlowGUI_DW.UD_DSTATE_g;

    /* Sum: '<S51>/Diff' */
    StateFlowGUI_B.Diff_b = StateFlowGUI_B.TSamp_f - StateFlowGUI_B.Uk1_j;

    /* SampleTimeMath: '<S52>/TSamp'
     *
     * About '<S52>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_i = StateFlowGUI_B.DigitalClock *
      StateFlowGUI_P.TSamp_WtEt_p;

    /* UnitDelay: '<S52>/UD' */
    StateFlowGUI_B.Uk1_bl = StateFlowGUI_DW.UD_DSTATE_k;

    /* Sum: '<S52>/Diff' */
    StateFlowGUI_B.Diff_bt = StateFlowGUI_B.TSamp_i - StateFlowGUI_B.Uk1_bl;

    /* Gain: '<S65>/A11' */
    StateFlowGUI_B.A11_h = StateFlowGUI_P.A11_Gain_h * StateFlowGUI_B.x1k_i;

    /* Gain: '<S65>/A12' */
    StateFlowGUI_B.A12_g = StateFlowGUI_P.A12_Gain_a3 * StateFlowGUI_B.x2k_d;

    /* Gain: '<S65>/A21' */
    StateFlowGUI_B.A21_p = StateFlowGUI_P.A21_Gain_f * StateFlowGUI_B.x1k_i;

    /* Gain: '<S65>/A22' */
    StateFlowGUI_B.A22_j = StateFlowGUI_P.A22_Gain_d * StateFlowGUI_B.x2k_d;

    /* Sum: '<S65>/sum2' */
    StateFlowGUI_B.sum2_e = StateFlowGUI_B.A11_h + StateFlowGUI_B.A12_g;

    /* Sum: '<S65>/sum3' */
    StateFlowGUI_B.sum3_b = StateFlowGUI_B.A21_p + StateFlowGUI_B.A22_j;

    /* Gain: '<S66>/B11' */
    StateFlowGUI_B.B11_d = StateFlowGUI_P.B11_Gain_n *
      StateFlowGUI_B.DigitalClock;

    /* Sum: '<S64>/A*x1(k) + B*u1(k) ' */
    StateFlowGUI_B.x1k1_h = StateFlowGUI_B.sum2_e + StateFlowGUI_B.B11_d;

    /* Gain: '<S66>/B21' */
    StateFlowGUI_B.B21_h = StateFlowGUI_P.B21_Gain_l *
      StateFlowGUI_B.DigitalClock;

    /* Sum: '<S64>/A*x2(k) + B*u2(k)' */
    StateFlowGUI_B.x2k1_h = StateFlowGUI_B.sum3_b + StateFlowGUI_B.B21_h;

    /* Memory: '<S5>/Memory' */
    StateFlowGUI_B.Memory_h = StateFlowGUI_DW.Memory_PreviousInput_e;

    /* Memory: '<S5>/Memory1' */
    StateFlowGUI_B.Memory1 = StateFlowGUI_DW.Memory1_PreviousInput;

    /* Sum: '<S5>/Sum12' */
    StateFlowGUI_B.Sum12_a = StateFlowGUI_B.convert10_d - StateFlowGUI_B.OffB;

    /* MATLAB Function: '<S5>/Asse B conv brac1' */
    StateFlowGUI_AsseAconvbracc(StateFlowGUI_B.Sum12_a,
      &StateFlowGUI_B.sf_AsseBconvbrac1_f);

    /* Sum: '<S5>/Sum2' incorporates:
     *  Constant: '<S5>/Constant'
     */
    StateFlowGUI_B.Sum2_f = StateFlowGUI_P.Constant_Value_eg +
      StateFlowGUI_B.sf_AsseBconvbrac1_f.pos_B_conv;

    /* Sum: '<S5>/Sum4' */
    StateFlowGUI_B.Sum4_nw = StateFlowGUI_B.convert_g - StateFlowGUI_B.OffA;

    /* MATLAB Function: '<S5>/Asse A conv brac' */
    /* MATLAB Function 'Movimento Braccia/Asse A conv brac': '<S72>:1' */
    /* '<S72>:1:2' */
    StateFlowGUI_B.pos_A_conv_e = StateFlowGUI_B.Sum4_nw * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S5>/Sum3' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    StateFlowGUI_B.Sum3_l = StateFlowGUI_P.Constant1_Value_f +
      StateFlowGUI_B.pos_A_conv_e;

    /* Sum: '<S77>/Sum2' */
    StateFlowGUI_B.Sum2_bi = StateFlowGUI_B.Clock - StateFlowGUI_B.OffT;

    /* MATLAB Function: '<S5>/Cinematica Inversa1' */
    /* MATLAB Function 'Movimento Braccia/Cinematica Inversa1': '<S76>:1' */
    if (StateFlowGUI_B.Sum2_bi == 0.0) {
      /* '<S76>:1:3' */
      /* '<S76>:1:5' */
      /* '<S76>:1:6' */
      /* '<S76>:1:8' */
      J_p_idx_1 = sin(StateFlowGUI_B.Sum3_l) - sin(StateFlowGUI_B.Sum2_f);
      b_a = -0.18 - (cos(StateFlowGUI_B.Sum3_l) - cos(StateFlowGUI_B.Sum2_f)) *
        0.25;
      A = J_p_idx_1 * J_p_idx_1 * 0.0625 + b_a * b_a;

      /* '<S76>:1:9' */
      J_p_idx_3 = -0.18 - (cos(StateFlowGUI_B.Sum3_l) - cos
                           (StateFlowGUI_B.Sum2_f)) * 0.25;
      B = ((-0.18 - (cos(StateFlowGUI_B.Sum3_l) - cos(StateFlowGUI_B.Sum2_f)) *
            0.25) * ((sin(StateFlowGUI_B.Sum3_l) - sin(StateFlowGUI_B.Sum2_f)) *
                     0.25) * (-0.18 - 0.5 * cos(StateFlowGUI_B.Sum3_l)) + (sin
            (StateFlowGUI_B.Sum3_l) - sin(StateFlowGUI_B.Sum2_f)) * -0.01125 *
           (cos(StateFlowGUI_B.Sum3_l) + cos(StateFlowGUI_B.Sum2_f))) - 0.5 *
        sin(StateFlowGUI_B.Sum3_l) * (J_p_idx_3 * J_p_idx_3);

      /* '<S76>:1:12' */
      x2 = cos(StateFlowGUI_B.Sum3_l) + cos(StateFlowGUI_B.Sum2_f);
      x4 = -0.18 - (cos(StateFlowGUI_B.Sum3_l) - cos(StateFlowGUI_B.Sum2_f)) *
        0.25;

      /*  Posizione Y end-effector */
      /* '<S76>:1:16' */
      A = (sqrt(B * B - ((x2 * x2 * 0.00050625 - (-0.18 - (cos
                (StateFlowGUI_B.Sum3_l) - cos(StateFlowGUI_B.Sum2_f)) * 0.25) *
                          ((cos(StateFlowGUI_B.Sum3_l) + cos
                            (StateFlowGUI_B.Sum2_f)) * 0.0225) * (-0.18 - 0.5 *
               cos(StateFlowGUI_B.Sum3_l))) + (0.045 * cos(StateFlowGUI_B.Sum3_l)
              + 0.0081) * (x4 * x4)) * (4.0 * A)) + -B) / (2.0 * A);

      /*  Posizione X end-effector */
      /* '<S76>:1:18' */
      StateFlowGUI_B.x0 = (A * 0.25 * (sin(StateFlowGUI_B.Sum3_l) - sin
        (StateFlowGUI_B.Sum2_f)) - (cos(StateFlowGUI_B.Sum3_l) + cos
        (StateFlowGUI_B.Sum2_f)) * 0.0225) / (-0.18 - (cos(StateFlowGUI_B.Sum3_l)
        - cos(StateFlowGUI_B.Sum2_f)) * 0.25);
    } else {
      /* '<S76>:1:20' */
      StateFlowGUI_B.x0 = StateFlowGUI_B.Memory_h;

      /* '<S76>:1:21' */
      A = StateFlowGUI_B.Memory1;
    }

    StateFlowGUI_B.y0 = A;

    /* End of MATLAB Function: '<S5>/Cinematica Inversa1' */

    /* Sum: '<S5>/Sum' */
    StateFlowGUI_B.Sum_e = StateFlowGUI_B.x0;

    /* Sum: '<S5>/Sum1' */
    StateFlowGUI_B.Sum1_g = StateFlowGUI_B.y0;

    /* MATLAB Function: '<S5>/Cinematica Inversa' */
    StateFlowGUI_CinematicaInversa(StateFlowGUI_B.Sum_e, StateFlowGUI_B.Sum1_g,
      &StateFlowGUI_B.sf_CinematicaInversa_a);

    /* MATLAB Function: '<S5>/Cinematica Inversa vel' */
    StateFlowG_CinematicaInversavel(StateFlowGUI_B.sf_CinematicaInversa_a.theta1,
      StateFlowGUI_B.sf_CinematicaInversa_a.theta2, StateFlowGUI_B.Sum_e,
      StateFlowGUI_B.Sum1_g, 0.0, 0.0, &StateFlowGUI_B.sf_CinematicaInversavel_l);

    /* S-Function (xpcethercatpdorx): '<S84>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S84>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[28];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S84>/Velocity B' */
    StateFlowGUI_B.VelocityB_p = StateFlowGUI_B.EtherCATPDOReceive15_l;

    /* MATLAB Function: '<S84>/Vel Asse B conv' */
    StateFlowGUI_VelAsseBconv(StateFlowGUI_B.VelocityB_p,
      &StateFlowGUI_B.sf_VelAsseBconv_o);

    /* Sum: '<S5>/Sum6' */
    StateFlowGUI_B.Sum6 = StateFlowGUI_B.sf_VelAsseBconv_o.vel_B_conv -
      StateFlowGUI_B.sf_CinematicaInversavel_l.theta1_p;

    /* Gain: '<S5>/Coppia theta 1 vel' */
    StateFlowGUI_B.Coppiatheta1vel = StateFlowGUI_P.Coppiatheta1vel_Gain *
      StateFlowGUI_B.Sum6;

    /* S-Function (xpcethercatpdorx): '<S84>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S84>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[29];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S84>/Velocity A' */
    StateFlowGUI_B.VelocityA_a = StateFlowGUI_B.EtherCATPDOReceive14_c;

    /* MATLAB Function: '<S84>/Vel Asse A conv' */
    StateFlowGUI_VelAsseAconv(StateFlowGUI_B.VelocityA_a,
      &StateFlowGUI_B.sf_VelAsseAconv_o);

    /* Sum: '<S5>/Sum17' */
    StateFlowGUI_B.Sum17 = StateFlowGUI_B.sf_VelAsseAconv_o.vel_A_conv -
      StateFlowGUI_B.sf_CinematicaInversavel_l.theta2_p;

    /* Gain: '<S5>/Coppia theta 2 vel' */
    StateFlowGUI_B.Coppiatheta2vel = StateFlowGUI_P.Coppiatheta2vel_Gain *
      StateFlowGUI_B.Sum17;

    /* Sum: '<S5>/Sum5' */
    StateFlowGUI_B.Sum5_g = StateFlowGUI_B.sf_CinematicaInversa_a.theta2 -
      StateFlowGUI_B.Sum3_l;

    /* Gain: '<S80>/Derivative Gain' */
    StateFlowGUI_B.DerivativeGain = StateFlowGUI_P.PIDController1_D *
      StateFlowGUI_B.Sum5_g;

    /* DiscreteIntegrator: '<S80>/Filter' */
    StateFlowGUI_B.Filter = StateFlowGUI_DW.Filter_DSTATE;

    /* Sum: '<S80>/SumD' */
    StateFlowGUI_B.SumD = StateFlowGUI_B.DerivativeGain - StateFlowGUI_B.Filter;

    /* Gain: '<S80>/Filter Coefficient' */
    StateFlowGUI_B.FilterCoefficient = StateFlowGUI_P.PIDController1_N *
      StateFlowGUI_B.SumD;

    /* Gain: '<S80>/Integral Gain' */
    StateFlowGUI_B.IntegralGain = StateFlowGUI_P.PIDController1_I *
      StateFlowGUI_B.Sum5_g;

    /* DiscreteIntegrator: '<S80>/Integrator' */
    StateFlowGUI_B.Integrator = StateFlowGUI_DW.Integrator_DSTATE;

    /* Gain: '<S80>/Proportional Gain' */
    StateFlowGUI_B.ProportionalGain = StateFlowGUI_P.PIDController1_P *
      StateFlowGUI_B.Sum5_g;

    /* Sum: '<S80>/Sum' */
    StateFlowGUI_B.Sum_h = (StateFlowGUI_B.ProportionalGain +
      StateFlowGUI_B.Integrator) + StateFlowGUI_B.FilterCoefficient;

    /* Sum: '<S5>/Sum14' */
    StateFlowGUI_B.Sum14 = StateFlowGUI_B.sf_CinematicaInversa_a.theta1 -
      StateFlowGUI_B.Sum2_f;

    /* Gain: '<S81>/Derivative Gain' */
    StateFlowGUI_B.DerivativeGain_b = StateFlowGUI_P.PIDController2_D *
      StateFlowGUI_B.Sum14;

    /* DiscreteIntegrator: '<S81>/Filter' */
    StateFlowGUI_B.Filter_d = StateFlowGUI_DW.Filter_DSTATE_d;

    /* Sum: '<S81>/SumD' */
    StateFlowGUI_B.SumD_e = StateFlowGUI_B.DerivativeGain_b -
      StateFlowGUI_B.Filter_d;

    /* Gain: '<S81>/Filter Coefficient' */
    StateFlowGUI_B.FilterCoefficient_g = StateFlowGUI_P.PIDController2_N *
      StateFlowGUI_B.SumD_e;

    /* Gain: '<S81>/Integral Gain' */
    StateFlowGUI_B.IntegralGain_f = StateFlowGUI_P.PIDController2_I *
      StateFlowGUI_B.Sum14;

    /* DiscreteIntegrator: '<S81>/Integrator' */
    StateFlowGUI_B.Integrator_d = StateFlowGUI_DW.Integrator_DSTATE_a;

    /* Gain: '<S81>/Proportional Gain' */
    StateFlowGUI_B.ProportionalGain_p = StateFlowGUI_P.PIDController2_P *
      StateFlowGUI_B.Sum14;

    /* Sum: '<S81>/Sum' */
    StateFlowGUI_B.Sum_n = (StateFlowGUI_B.ProportionalGain_p +
      StateFlowGUI_B.Integrator_d) + StateFlowGUI_B.FilterCoefficient_g;

    /* Sum: '<S5>/Sum7' */
    StateFlowGUI_B.Sum7_l = StateFlowGUI_B.Sum_n +
      StateFlowGUI_B.Coppiatheta1vel;

    /* Sum: '<S5>/Sum8' */
    StateFlowGUI_B.Sum8 = StateFlowGUI_B.Sum_h + StateFlowGUI_B.Coppiatheta2vel;

    /* Constant: '<S5>/selettore' */
    StateFlowGUI_B.selettore = StateFlowGUI_P.selettore_Value_d;

    /* SampleTimeMath: '<S121>/TSamp'
     *
     * About '<S121>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_d = StateFlowGUI_B.pos_B_conv *
      StateFlowGUI_P.TSamp_WtEt_l;

    /* UnitDelay: '<S121>/UD' */
    StateFlowGUI_B.Uk1_h = StateFlowGUI_DW.UD_DSTATE_m;

    /* Sum: '<S121>/Diff' */
    StateFlowGUI_B.Diff_c = StateFlowGUI_B.TSamp_d - StateFlowGUI_B.Uk1_h;

    /* SampleTimeMath: '<S124>/TSamp'
     *
     * About '<S124>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowGUI_B.TSamp_c = StateFlowGUI_B.Sum5 * StateFlowGUI_P.TSamp_WtEt_n;

    /* UnitDelay: '<S124>/UD' */
    StateFlowGUI_B.Uk1_f = StateFlowGUI_DW.UD_DSTATE_fc;

    /* Sum: '<S124>/Diff' */
    StateFlowGUI_B.Diff_iq = StateFlowGUI_B.TSamp_c - StateFlowGUI_B.Uk1_f;

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
  /* Update for Memory: '<S94>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput = StateFlowGUI_B.sf_MATLABFunction_e.y;

  /* Update for Memory: '<S4>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_h[0] = StateFlowGUI_B.Mpi[0];
  StateFlowGUI_DW.Memory_PreviousInput_h[1] = StateFlowGUI_B.Mpi[1];
  StateFlowGUI_DW.Memory_PreviousInput_h[2] = StateFlowGUI_B.Mpi[2];
  StateFlowGUI_DW.Memory_PreviousInput_h[3] = StateFlowGUI_B.Mpi[3];

  /* Update for Memory: '<S98>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_o = StateFlowGUI_B.sf_MATLABFunction_a.y;

  /* Update for Memory: '<S102>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_g = StateFlowGUI_B.sf_MATLABFunction_f.y;

  /* Update for Memory: '<S104>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_hp = StateFlowGUI_B.sf_MATLABFunction_i.y;

  /* Update for UnitDelay: '<S49>/UD' */
  StateFlowGUI_DW.UD_DSTATE = StateFlowGUI_B.TSamp;

  /* Update for UnitDelay: '<S60>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE = StateFlowGUI_B.x1k1;

  /* Update for UnitDelay: '<S60>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE = StateFlowGUI_B.x2k1;

  /* Update for UnitDelay: '<S47>/UD' */
  StateFlowGUI_DW.UD_DSTATE_a = StateFlowGUI_B.TSamp_n;

  /* Update for UnitDelay: '<S56>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_g = StateFlowGUI_B.x1k1_g;

  /* Update for UnitDelay: '<S56>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_m = StateFlowGUI_B.x2k1_n;

  /* Update for UnitDelay: '<S48>/UD' */
  StateFlowGUI_DW.UD_DSTATE_j = StateFlowGUI_B.TSamp_h;

  /* Update for UnitDelay: '<S50>/UD' */
  StateFlowGUI_DW.UD_DSTATE_f = StateFlowGUI_B.TSamp_nd;

  /* Update for UnitDelay: '<S64>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_k = StateFlowGUI_B.x1k1_h;

  /* Update for UnitDelay: '<S64>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_k = StateFlowGUI_B.x2k1_h;

  /* Update for UnitDelay: '<S51>/UD' */
  StateFlowGUI_DW.UD_DSTATE_g = StateFlowGUI_B.TSamp_f;

  /* Update for UnitDelay: '<S52>/UD' */
  StateFlowGUI_DW.UD_DSTATE_k = StateFlowGUI_B.TSamp_i;

  /* Update for Memory: '<S5>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_e = StateFlowGUI_B.x0;

  /* Update for Memory: '<S5>/Memory1' */
  StateFlowGUI_DW.Memory1_PreviousInput = StateFlowGUI_B.y0;

  /* Update for DiscreteIntegrator: '<S80>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE += StateFlowGUI_P.Filter_gainval *
    StateFlowGUI_B.FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S80>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE += StateFlowGUI_P.Integrator_gainval *
    StateFlowGUI_B.IntegralGain;

  /* Update for DiscreteIntegrator: '<S81>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE_d += StateFlowGUI_P.Filter_gainval_m *
    StateFlowGUI_B.FilterCoefficient_g;

  /* Update for DiscreteIntegrator: '<S81>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE_a += StateFlowGUI_P.Integrator_gainval_o *
    StateFlowGUI_B.IntegralGain_f;

  /* Update for UnitDelay: '<S121>/UD' */
  StateFlowGUI_DW.UD_DSTATE_m = StateFlowGUI_B.TSamp_d;

  /* Update for UnitDelay: '<S124>/UD' */
  StateFlowGUI_DW.UD_DSTATE_fc = StateFlowGUI_B.TSamp_c;

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

    /* Start for S-Function (xpcethercatpdorx): '<S11>/Motore vite A' */
    /* Level2 S-Function Block: '<S11>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S11>/Motore vite B' */
    /* Level2 S-Function Block: '<S11>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S15>/Status Word' */
    /* Level2 S-Function Block: '<S15>/Status Word' (xpcethercatpdorx) */
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

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore braccia A' */
    /* Level2 S-Function Block: '<S10>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S10>/Motore braccia B' */
    /* Level2 S-Function Block: '<S10>/Motore braccia B' (xpcethercatpdorx) */
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

    /* Start for S-Function (xpcethercatpdorx): '<S35>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S35>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S35>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S35>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S34>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S34>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S34>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S34>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 1' */
    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S94>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S94>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 7' */
    /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S98>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S98>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S123>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S123>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S123>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S123>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S8>/Torque send' */
    /* Level2 S-Function Block: '<S8>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S102>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S102>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S9>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S9>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S104>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S104>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S84>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S84>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[28];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S84>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S84>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowGUI_M->childSfunctions[29];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* InitializeConditions for Memory: '<S94>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput = StateFlowGUI_P.Memory_X0;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_h[0] = StateFlowGUI_P.Memory_X0_f[0];
  StateFlowGUI_DW.Memory_PreviousInput_h[1] = StateFlowGUI_P.Memory_X0_f[1];
  StateFlowGUI_DW.Memory_PreviousInput_h[2] = StateFlowGUI_P.Memory_X0_f[2];
  StateFlowGUI_DW.Memory_PreviousInput_h[3] = StateFlowGUI_P.Memory_X0_f[3];

  /* InitializeConditions for Memory: '<S98>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_o = StateFlowGUI_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S102>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_g = StateFlowGUI_P.Memory_X0_o;

  /* InitializeConditions for Memory: '<S104>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_hp = StateFlowGUI_P.Memory_X0_e;

  /* InitializeConditions for UnitDelay: '<S49>/UD' */
  StateFlowGUI_DW.UD_DSTATE = StateFlowGUI_P.DiscreteDerivativeB2_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S60>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE = StateFlowGUI_P.Delay_x1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S60>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE = StateFlowGUI_P.Delay_x2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S47>/UD' */
  StateFlowGUI_DW.UD_DSTATE_a = StateFlowGUI_P.DiscreteDerivativeB_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S56>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_g = StateFlowGUI_P.Delay_x1_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S56>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_m = StateFlowGUI_P.Delay_x2_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S48>/UD' */
  StateFlowGUI_DW.UD_DSTATE_j = StateFlowGUI_P.DiscreteDerivativeB1_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S50>/UD' */
  StateFlowGUI_DW.UD_DSTATE_f = StateFlowGUI_P.DiscreteDerivativeB3_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S64>/Delay_x1' */
  StateFlowGUI_DW.Delay_x1_DSTATE_k = StateFlowGUI_P.Delay_x1_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S64>/Delay_x2' */
  StateFlowGUI_DW.Delay_x2_DSTATE_k = StateFlowGUI_P.Delay_x2_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S51>/UD' */
  StateFlowGUI_DW.UD_DSTATE_g = StateFlowGUI_P.DiscreteDerivativeB4_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S52>/UD' */
  StateFlowGUI_DW.UD_DSTATE_k = StateFlowGUI_P.DiscreteDerivativeB5_ICPrevScal;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  StateFlowGUI_DW.Memory_PreviousInput_e = StateFlowGUI_P.Memory_X0_d;

  /* InitializeConditions for Memory: '<S5>/Memory1' */
  StateFlowGUI_DW.Memory1_PreviousInput = StateFlowGUI_P.Memory1_X0;

  /* InitializeConditions for DiscreteIntegrator: '<S80>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE = StateFlowGUI_P.Filter_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S80>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE = StateFlowGUI_P.Integrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S81>/Filter' */
  StateFlowGUI_DW.Filter_DSTATE_d = StateFlowGUI_P.Filter_IC_b;

  /* InitializeConditions for DiscreteIntegrator: '<S81>/Integrator' */
  StateFlowGUI_DW.Integrator_DSTATE_a = StateFlowGUI_P.Integrator_IC_f;

  /* InitializeConditions for UnitDelay: '<S121>/UD' */
  StateFlowGUI_DW.UD_DSTATE_m = StateFlowGUI_P.DiscreteDerivativeB_ICPrevSca_f;

  /* InitializeConditions for UnitDelay: '<S124>/UD' */
  StateFlowGUI_DW.UD_DSTATE_fc = StateFlowGUI_P.DiscreteDerivativeA_ICPrevScale;
  StateFlowGUI_DW.sfEvent = -1;
  StateFlowGUI_DW.temporalCounter_i1 = 0U;
  StateFlowGUI_DW.is_active_c15_StateFlowGUI = 0U;
  StateFlowGUI_DW.is_c15_StateFlowGUI = StateFlowGUI_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S14>/Homing'
   */
  /* SystemInitialize for Outport: '<S130>/CA' */
  StateFlowGUI_B.CA = StateFlowGUI_P.CA_Y0;

  /* SystemInitialize for Outport: '<S130>/CB' */
  StateFlowGUI_B.CB = StateFlowGUI_P.CB_Y0;

  /* SystemInitialize for Outport: '<S130>/CH' */
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S11>/Motore vite A' */
  /* Level2 S-Function Block: '<S11>/Motore vite A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S11>/Motore vite B' */
  /* Level2 S-Function Block: '<S11>/Motore vite B' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S15>/Status Word' */
  /* Level2 S-Function Block: '<S15>/Status Word' (xpcethercatpdorx) */
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore braccia A' */
  /* Level2 S-Function Block: '<S10>/Motore braccia A' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S10>/Motore braccia B' */
  /* Level2 S-Function Block: '<S10>/Motore braccia B' (xpcethercatpdorx) */
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S35>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S35>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S35>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S35>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S34>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S34>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S34>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S34>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 1' */
  /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S94>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S94>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/EtherCAT PDO Transmit 7' */
  /* Level2 S-Function Block: '<S7>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S98>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S98>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S123>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S123>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S123>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S123>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S8>/Torque send' */
  /* Level2 S-Function Block: '<S8>/Torque send' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S102>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S102>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S9>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S9>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S104>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S104>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S84>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S84>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowGUI_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S84>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S84>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
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
          ssSetInputPortSignal(rts, 0, &StateFlowGUI_B.DataTypeConversion1);
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

    /* Level2 S-Function Block: StateFlowGUI/<S11>/Motore vite A (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S11>/Motore vite B (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S15>/Status Word (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S10>/Motore braccia A (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S10>/Motore braccia B (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S35>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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
                "StateFlowGUI/Movimento/Velocita braccia 1/EtherCAT PDO Receive15");
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

    /* Level2 S-Function Block: StateFlowGUI/<S35>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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
                "StateFlowGUI/Movimento/Velocita braccia 1/EtherCAT PDO Receive14");
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

    /* Level2 S-Function Block: StateFlowGUI/<S34>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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
      ssSetPath(rts, "StateFlowGUI/Movimento/Velocita /EtherCAT PDO Receive15");
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

    /* Level2 S-Function Block: StateFlowGUI/<S34>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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
      ssSetPath(rts, "StateFlowGUI/Movimento/Velocita /EtherCAT PDO Receive14");
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

    /* Level2 S-Function Block: StateFlowGUI/<S6>/EtherCAT PDO Transmit 1 (xpcethercatpdotx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S94>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S7>/EtherCAT PDO Transmit 7 (xpcethercatpdotx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S98>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S123>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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
            &StateFlowGUI_B.EtherCATPDOReceive14_l));
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
                       StateFlowGUI_P.EtherCATPDOReceive14_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P5_Size_d);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_j[0]);

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

    /* Level2 S-Function Block: StateFlowGUI/<S123>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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
            &StateFlowGUI_B.EtherCATPDOReceive15_e));
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
                       StateFlowGUI_P.EtherCATPDOReceive15_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P5_Size_l);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive15_P7_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_e[0]);

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
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive15_IWORK_e[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S8>/Torque send (xpcethercatpdotx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S102>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S9>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S104>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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
            &StateFlowGUI_B.EtherCATPDOReceive9_d));
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
                       StateFlowGUI_P.EtherCATPDOReceive9_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P5_Size_aa);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P6_Size_m);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive9_P7_Size_pq);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_l[0]);

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
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive9_IWORK_l[0]);
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

    /* Level2 S-Function Block: StateFlowGUI/<S84>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowGUI/<S84>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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
                       StateFlowGUI_P.EtherCATPDOReceive14_P4_Size_g0);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       StateFlowGUI_P.EtherCATPDOReceive14_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_jl[0]);

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
        ssSetDWork(rts, 0, &StateFlowGUI_DW.EtherCATPDOReceive14_IWORK_jl[0]);
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
  StateFlowGUI_M->Sizes.numBlocks = (406);/* Number of blocks */
  StateFlowGUI_M->Sizes.numBlockIO = (335);/* Number of block outputs */
  StateFlowGUI_M->Sizes.numBlockPrms = (1906);/* Sum of parameter "widths" */
  return StateFlowGUI_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/