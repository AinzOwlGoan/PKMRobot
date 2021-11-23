/*
 * StateFlowFinal.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowFinal".
 *
 * Model version              : 1.949
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Nov 23 16:10:22 2021
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
#define StateFlowFin_IN_FineLavorazione ((uint8_T)5U)
#define StateFlowFin_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define StateFlowFinal_IN_Attivazione  ((uint8_T)1U)
#define StateFlowFinal_IN_Controllo    ((uint8_T)2U)
#define StateFlowFinal_IN_Coppie       ((uint8_T)3U)
#define StateFlowFinal_IN_Discesa_Vite ((uint8_T)4U)
#define StateFlowFinal_IN_Home         ((uint8_T)6U)
#define StateFlowFinal_IN_OffSet       ((uint8_T)7U)
#define StateFlowFinal_IN_SetA         ((uint8_T)8U)
#define StateFlowFinal_IN_SetA1        ((uint8_T)9U)
#define StateFlowFinal_IN_SetB         ((uint8_T)10U)
#define StateFlowFinal_IN_SetB1        ((uint8_T)11U)
#define StateFlowFinal_IN_Step1        ((uint8_T)12U)
#define StateFlowFinal_IN_StopPhase    ((uint8_T)13U)

/* Block signals (auto storage) */
B_StateFlowFinal_T StateFlowFinal_B;

/* Block states (auto storage) */
DW_StateFlowFinal_T StateFlowFinal_DW;

/* Real-time model */
RT_MODEL_StateFlowFinal_T StateFlowFinal_M_;
RT_MODEL_StateFlowFinal_T *const StateFlowFinal_M = &StateFlowFinal_M_;

/* Forward declaration for local functions */
static void StateFlowFina_enter_atomic_Home(void);
static void StateFlowFinal_Home1(real_T FC, real_T fCA, real_T fCB, real_T
  posRifA, real_T posRifB, real_T PosA, real_T PosB, real_T Kpp, real_T *CA,
  real_T *CB, real_T *CH);
static real_T StateFlowFinal_mpower(real_T a);
static void StateFlowFinal_ldm7t_k(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowFinal_ldm7t(real_T x, real_T *G, real_T *F, real_T *f);
static void StateFlowFinal_ldm7t_m(real_T x, real_T *G, real_T *F, real_T *f);
static real_T StateFlowFinal_norm_n(const real_T x[4]);

/*
 * Output and update for atomic system:
 *    '<S23>/MATLAB Function'
 *    '<S27>/MATLAB Function'
 *    '<S31>/MATLAB Function'
 *    '<S33>/MATLAB Function'
 */
void StateFlowFinal_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_StateFlowFin_T *localB)
{
  /* MATLAB Function 'Out Asse A Braccia/Fungo/MATLAB Function': '<S26>:1' */
  if ((rtu_old == 0.0) && (rtu_now == 1.0)) {
    /* '<S26>:1:2' */
    /* '<S26>:1:3' */
    localB->y = 1.0;
  } else {
    /* '<S26>:1:5' */
    localB->y = rtu_old;
  }
}

/* Function for Chart: '<Root>/State flow robot' */
static void StateFlowFina_enter_atomic_Home(void)
{
  /* Entry 'Home': '<S13>:29' */
  StateFlowFinal_B.Bool = 1.0;
  StateFlowFinal_DW.conv = 5.9921124526782858E-6;
  StateFlowFinal_DW.conv_vite = 1.220703125E-7;
  StateFlowFinal_B.Luci = 1.0;
  StateFlowFinal_B.Kp_l = StateFlowFinal_B.Kp;
  StateFlowFinal_B.Hb = 0.0;
  StateFlowFinal_B.Hv = 0.0;
  StateFlowFinal_B.FineLavorazione = 0.0;
  StateFlowFinal_B.PosRifA = StateFlowFinal_DW.conv * 180.0 / 3.1415926535897931
    * StateFlowFinal_B.convert;

  /*  posA in gradi */
  StateFlowFinal_B.PosRifB = StateFlowFinal_DW.conv * 180.0 / 3.1415926535897931
    * StateFlowFinal_B.convert10;

  /*  posB in gradi */
  StateFlowFinal_B.CoppiaH = -600.0;
}

/* Function for Chart: '<Root>/State flow robot' */
static void StateFlowFinal_Home1(real_T FC, real_T fCA, real_T fCB, real_T
  posRifA, real_T posRifB, real_T PosA, real_T PosB, real_T Kpp, real_T *CA,
  real_T *CB, real_T *CH)
{
  /* MATLAB Function 'Home1': '<S13>:292' */
  if (FC < 1.0) {
    /* '<S13>:292:4' */
    /* '<S13>:292:5' */
    *CH = 0.0;
  } else {
    /* '<S13>:292:7' */
    *CH = -600.0;
  }

  if (fCA == 1.0) {
    /* '<S13>:292:9' */
    /* '<S13>:292:10' */
    *CA = 0.0;
  } else {
    /* '<S13>:292:12' */
    *CA = (posRifA - StateFlowFinal_DW.conv * 180.0 / 3.1415926535897931 * PosA)
      * Kpp;
  }

  if (fCB == 1.0) {
    /* '<S13>:292:14' */
    /* '<S13>:292:15' */
    *CB = 0.0;
  } else {
    /* '<S13>:292:17' */
    *CB = (posRifB - StateFlowFinal_DW.conv * 180.0 / 3.1415926535897931 * PosB)
      * Kpp;
  }
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

/* Function for MATLAB Function: '<S57>/Quadrato' */
static real_T StateFlowFinal_mpower(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

/* Function for MATLAB Function: '<S57>/g' */
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

/* Function for MATLAB Function: '<S57>/Cerchi Tangenti' */
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

/* Function for MATLAB Function: '<S57>/spirale' */
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
  uint32_T u;
  boolean_T sf_internal_predicateOutput;
  real_T A;
  real_T B;
  real_T x3;
  real_T x4;
  real_T x5;
  real_T f;
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
      memcpy(&StateFlowFinal_B.EtherCATInit[0], data,6*sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

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
      u = (uint32_T)StateFlowFinal_B.DataTypeConversion8;
      for (i = 0; i < 16; i++) {
        StateFlowFinal_B.IntegertoBitConverter[bitIdx] = (int32_T)u & 1;
        u >>= 1;
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
      u = (uint32_T)StateFlowFinal_B.DataTypeConversion8_f;
      for (i = 0; i < 16; i++) {
        StateFlowFinal_B.IntegertoBitConverter_d[bitIdx] = (int32_T)u & 1;
        u >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S2>/Integer to Bit Converter' */

    /* Constant: '<Root>/Kp' */
    StateFlowFinal_B.Kp = StateFlowFinal_P.Kp_Value;

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
        StateFlowFinal_B.Bool = 0.0;
        StateFlowFinal_B.Enable = 1.0;

        /* During 'Attivazione': '<S13>:231' */
        if (StateFlowFinal_B.StartHome == 1.0) {
          /* Transition: '<S13>:232' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Home;
          StateFlowFina_enter_atomic_Home();
        }
        break;

       case StateFlowFinal_IN_Controllo:
        StateFlowFinal_B.Luci = 4.0;
        StateFlowFinal_B.Bool = 4.0;

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

       case StateFlowFinal_IN_Coppie:
        StateFlowFinal_B.Luci = 2.0;

        /* During 'Coppie': '<S13>:95' */
        if (StateFlowFinal_B.convert - StateFlowFinal_DW.OffA_0 >=
            1.9198621771937625 / StateFlowFinal_DW.conv) {
          /* Transition: '<S13>:131' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_SetA;

          /* Entry 'SetA': '<S13>:129' */
          StateFlowFinal_B.CoppiaA = 0.0;
        } else {
          if (StateFlowFinal_B.convert10 - StateFlowFinal_DW.OffB_0 >=
              0.69813170079773179 / StateFlowFinal_DW.conv) {
            /* Transition: '<S13>:132' */
            StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_SetB;

            /* Entry 'SetB': '<S13>:130' */
            StateFlowFinal_B.CoppiaB = 0.0;
          }
        }
        break;

       case StateFlowFinal_IN_Discesa_Vite:
        StateFlowFinal_B.Hb = 1.0;

        /* During 'Discesa_Vite': '<S13>:176' */
        /* Transition: '<S13>:256' */
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
        StateFlowFinal_B.Hb = 0.0;
        StateFlowFinal_B.FineLavorazione = 1.0;
        StateFlowFinal_B.Luci = 5.0;
        StateFlowFinal_B.Bool = 5.0;
        StateFlowFinal_B.Hv = 0.0;

        /* During 'FineLavorazione': '<S13>:69' */
        sf_internal_predicateOutput = (((StateFlowFinal_DW.temporalCounter_i1 >=
          10000U) && (StateFlowFinal_B.StartHome == 1.0)) ||
          (StateFlowFinal_B.Reset == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:243' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Home;
          StateFlowFina_enter_atomic_Home();
        }
        break;

       case StateFlowFinal_IN_Home:
        StateFlowFinal_B.Hb = 0.0;
        StateFlowFinal_B.FineLavorazione = 0.0;
        StateFlowFinal_B.Luci = 1.0;
        StateFlowFinal_B.Bool = 1.0;
        StateFlowFinal_B.Hv = 0.0;

        /* During 'Home': '<S13>:29' */
        sf_internal_predicateOutput = ((StateFlowFinal_B.IntegertoBitConverter
          [14] == 0.0) && (StateFlowFinal_B.IntegertoBitConverter_d[7] == 1.0) &&
          (StateFlowFinal_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:277' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Coppie;

          /* Entry 'Coppie': '<S13>:95' */
          StateFlowFinal_DW.OffA_0 = StateFlowFinal_B.convert;
          StateFlowFinal_DW.OffB_0 = StateFlowFinal_B.convert10;
          StateFlowFinal_B.CoppiaA = 250.0;
          StateFlowFinal_B.CoppiaB = 250.0;
          StateFlowFinal_B.CoppiaH = 0.0;
          StateFlowFinal_B.Luci = 2.0;
        } else {
          StateFlowFinal_B.PosRifA -= 0.01;
          StateFlowFinal_B.PosRifB -= 0.01;
          StateFlowFinal_B.Stato = 0.0;
          StateFlowFinal_Home1(StateFlowFinal_B.IntegertoBitConverter[14],
                               StateFlowFinal_B.IntegertoBitConverter_d[7],
                               StateFlowFinal_B.IntegertoBitConverter_d[14],
                               StateFlowFinal_B.PosRifA,
                               StateFlowFinal_B.PosRifB,
                               StateFlowFinal_B.convert,
                               StateFlowFinal_B.convert10, StateFlowFinal_B.Kp_l,
                               &A, &f, &B);
          StateFlowFinal_B.CoppiaA = A;
          StateFlowFinal_B.CoppiaB = f;
          StateFlowFinal_B.CoppiaH = B;
        }
        break;

       case StateFlowFinal_IN_OffSet:
        StateFlowFinal_B.Luci = 3.0;
        StateFlowFinal_B.Bool = 2.0;
        StateFlowFinal_B.Hv = 1.0;

        /* During 'OffSet': '<S13>:87' */
        if (StateFlowFinal_B.StartWork == 1.0) {
          /* Transition: '<S13>:90' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_Controllo;
          StateFlowFinal_DW.temporalCounter_i1 = 0U;

          /* Entry 'Controllo': '<S13>:147' */
          StateFlowFinal_B.OffT = StateFlowFinal_B.Clock;
          StateFlowFinal_B.Luci = 4.0;
          StateFlowFinal_B.Bool = 4.0;
        }
        break;

       case StateFlowFinal_IN_SetA:
        /* During 'SetA': '<S13>:129' */
        if (StateFlowFinal_B.convert10 - StateFlowFinal_DW.OffB_0 >=
            0.69813170079773179 / StateFlowFinal_DW.conv) {
          /* Transition: '<S13>:133' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_SetB1;

          /* Entry 'SetB1': '<S13>:145' */
          StateFlowFinal_B.CoppiaB = 0.0;
        }
        break;

       case StateFlowFinal_IN_SetA1:
        /* During 'SetA1': '<S13>:146' */
        if (StateFlowFinal_B.CoppiaB == 0.0) {
          /* Transition: '<S13>:136' */
          StateFlowFinal_DW.is_c15_StateFlowFinal =
            StateFlowFinal_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S13>:176' */
          StateFlowFinal_B.OffA_vite = StateFlowFinal_B.convert_k;
          StateFlowFinal_B.CoppiaH = 0.0;
          StateFlowFinal_B.Hb = 1.0;
        }
        break;

       case StateFlowFinal_IN_SetB:
        /* During 'SetB': '<S13>:130' */
        if (StateFlowFinal_B.convert - StateFlowFinal_DW.OffA_0 >=
            1.9198621771937625 / StateFlowFinal_DW.conv) {
          /* Transition: '<S13>:134' */
          StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFinal_IN_SetA1;

          /* Entry 'SetA1': '<S13>:146' */
          StateFlowFinal_B.CoppiaA = 0.0;
        }
        break;

       case StateFlowFinal_IN_SetB1:
        /* During 'SetB1': '<S13>:145' */
        if (StateFlowFinal_B.CoppiaA == 0.0) {
          /* Transition: '<S13>:135' */
          StateFlowFinal_DW.is_c15_StateFlowFinal =
            StateFlowFinal_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S13>:176' */
          StateFlowFinal_B.OffA_vite = StateFlowFinal_B.convert_k;
          StateFlowFinal_B.CoppiaH = 0.0;
          StateFlowFinal_B.Hb = 1.0;
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

    /* Sum: '<S65>/Sum12' */
    StateFlowFinal_B.Sum12 = StateFlowFinal_B.convert10 - StateFlowFinal_B.OffB;

    /* MATLAB Function: '<S65>/Asse B conv brac1' */
    /* MATLAB Function 'Sistema_braccia/Posizioni/Asse B conv brac1': '<S80>:1' */
    /* '<S80>:1:2' */
    StateFlowFinal_B.pos_B_conv = StateFlowFinal_B.Sum12 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S65>/Sum4' incorporates:
     *  Constant: '<S65>/Constant4'
     */
    StateFlowFinal_B.Sum4 = StateFlowFinal_B.pos_B_conv +
      StateFlowFinal_P.Constant4_Value;

    /* Sum: '<S65>/Sum9' */
    StateFlowFinal_B.Sum9 = StateFlowFinal_B.convert - StateFlowFinal_B.OffA;

    /* MATLAB Function: '<S65>/Asse A conv bracc' */
    /* MATLAB Function 'Sistema_braccia/Posizioni/Asse A conv bracc': '<S79>:1' */
    /* '<S79>:1:2' */
    StateFlowFinal_B.pos_A_conv = StateFlowFinal_B.Sum9 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S65>/Sum7' incorporates:
     *  Constant: '<S65>/Constant5'
     */
    StateFlowFinal_B.Sum7 = StateFlowFinal_B.pos_A_conv +
      StateFlowFinal_P.Constant5_Value;

    /* S-Function (xpcethercatpdorx): '<S69>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S69>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S69>/Velocity B' */
    StateFlowFinal_B.VelocityB = StateFlowFinal_B.EtherCATPDOReceive15;

    /* MATLAB Function: '<S69>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse B conv': '<S105>:1' */
    /* '<S105>:1:2' */
    StateFlowFinal_B.vel_B_conv = StateFlowFinal_B.VelocityB *
      6.2831853071795862 / 163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S69>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S69>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S69>/Velocity A' */
    StateFlowFinal_B.VelocityA = StateFlowFinal_B.EtherCATPDOReceive14;

    /* MATLAB Function: '<S69>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita braccia 1/Vel Asse A conv': '<S104>:1' */
    /* '<S104>:1:2' */
    StateFlowFinal_B.vel_A_conv = StateFlowFinal_B.VelocityA *
      6.2831853071795862 / 163840.0 / 64.0;

    /* MATLAB Function: '<S64>/Cinematica Inversa2' incorporates:
     *  Constant: '<S64>/Constant'
     *  Constant: '<S64>/Constant1'
     */
    /* MATLAB Function 'Sistema_braccia/Pos iniziali/Cinematica Inversa2': '<S78>:1' */
    /* '<S78>:1:3' */
    /* '<S78>:1:4' */
    /* '<S78>:1:6' */
    A = sin(StateFlowFinal_P.Constant1_Value) - sin
      (StateFlowFinal_P.Constant_Value_b);
    J_p_idx_1 = -0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                         (StateFlowFinal_P.Constant_Value_b)) * 0.25;
    A = A * A * 0.0625 + J_p_idx_1 * J_p_idx_1;

    /* '<S78>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                         (StateFlowFinal_P.Constant_Value_b)) * 0.25;
    B = ((-0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                   (StateFlowFinal_P.Constant_Value_b)) * 0.25) * ((sin
           (StateFlowFinal_P.Constant1_Value) - sin
           (StateFlowFinal_P.Constant_Value_b)) * 0.25) * (-0.18 - 0.5 * cos
          (StateFlowFinal_P.Constant1_Value)) + (sin
          (StateFlowFinal_P.Constant1_Value) - sin
          (StateFlowFinal_P.Constant_Value_b)) * -0.01125 * (cos
          (StateFlowFinal_P.Constant1_Value) + cos
          (StateFlowFinal_P.Constant_Value_b))) - 0.5 * sin
      (StateFlowFinal_P.Constant1_Value) * (J_p_idx_3 * J_p_idx_3);

    /* '<S78>:1:10' */
    x4 = cos(StateFlowFinal_P.Constant1_Value) + cos
      (StateFlowFinal_P.Constant_Value_b);
    x5 = -0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
                  (StateFlowFinal_P.Constant_Value_b)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S78>:1:14' */
    A = (sqrt(B * B - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
              (StateFlowFinal_P.Constant1_Value) - cos
              (StateFlowFinal_P.Constant_Value_b)) * 0.25) * ((cos
              (StateFlowFinal_P.Constant1_Value) + cos
              (StateFlowFinal_P.Constant_Value_b)) * 0.0225) * (-0.18 - 0.5 *
             cos(StateFlowFinal_P.Constant1_Value))) + (0.045 * cos
            (StateFlowFinal_P.Constant1_Value) + 0.0081) * (x5 * x5)) * (4.0 * A))
         + -B) / (2.0 * A);

    /*  Posizione X end-effector */
    /* '<S78>:1:16' */
    StateFlowFinal_B.x0 = (A * 0.25 * (sin(StateFlowFinal_P.Constant1_Value) -
      sin(StateFlowFinal_P.Constant_Value_b)) - (cos
      (StateFlowFinal_P.Constant1_Value) + cos(StateFlowFinal_P.Constant_Value_b))
      * 0.0225) / (-0.18 - (cos(StateFlowFinal_P.Constant1_Value) - cos
      (StateFlowFinal_P.Constant_Value_b)) * 0.25);
    StateFlowFinal_B.y0 = A;

    /* Sum: '<S54>/Sum2' */
    StateFlowFinal_B.Sum2 = StateFlowFinal_B.Clock - StateFlowFinal_B.OffT;

    /* MATLAB Function: '<S57>/Quadrato' incorporates:
     *  Constant: '<S57>/Alzata Q'
     *  Constant: '<S57>/Periodo Q'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Quadrato': '<S75>:1' */
    /* '<S75>:1:2' */
    /* '<S75>:1:3' */
    /* '<S75>:1:4' */
    A = StateFlowFinal_B.Sum2 / (0.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S75>:1:5' */
    B = (StateFlowFinal_B.Sum2 - 0.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S75>:1:6' */
    x3 = (StateFlowFinal_B.Sum2 - 1.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S75>:1:7' */
    x4 = (StateFlowFinal_B.Sum2 - 2.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S75>:1:8' */
    x5 = (StateFlowFinal_B.Sum2 - 3.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0) /
      (0.5 * StateFlowFinal_P.PeriodoQ_Value / 4.0);

    /* '<S75>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((StateFlowFinal_B.Sum2 > 0.0) && (StateFlowFinal_B.Sum2 <= 0.5 *
         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S75>:1:14' */
      if ((A >= 0.0) && (A < 0.1)) {
        /* '<S75>:1:16' */
        /* acc crescente positiva */
        /* '<S75>:1:17' */
        f = 55.555555555555543 * A;

        /* '<S75>:1:18' */
        F = A * A * 27.777777777777771;

        /* '<S75>:1:19' */
        B = 9.259259259259256 * StateFlowFinal_mpower(A);
      } else if ((A >= 0.1) && (A < 0.30000000000000004)) {
        /* '<S75>:1:22' */
        /* acc costante positiva */
        /* '<S75>:1:23' */
        f = 5.5555555555555545;

        /* '<S75>:1:24' */
        F = 5.5555555555555545 * A - 0.27777777777777773;

        /* '<S75>:1:25' */
        B = (A * A * 2.7777777777777772 - 0.27777777777777773 * A) +
          0.0092592592592592587;
      } else if ((A >= 0.30000000000000004) && (A < 0.4)) {
        /* '<S75>:1:28' */
        /* acc decrescente positiva */
        /* '<S75>:1:29' */
        f = -55.555555555555543 * A + 22.222222222222218;

        /* '<S75>:1:30' */
        F = (A * A * -27.777777777777771 + 22.222222222222218 * A) -
          2.7777777777777777;

        /* '<S75>:1:31' */
        B = ((((A * A * 11.111111111111109 + -9.259259259259256 *
                StateFlowFinal_mpower(A)) - 2.7777777777777777 * A) -
              0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
             (0.4)) + 0.1111111111111111;
      } else if ((A >= 0.4) && (A < 0.6)) {
        /* '<S75>:1:35' */
        /* acc costante nulla */
        /* '<S75>:1:36' */
        f = 0.0;

        /* '<S75>:1:37' */
        F = 1.6666666666666665;

        /* '<S75>:1:38' */
        B = (1.6666666666666665 * A - 0.44444444444444442) + 0.1111111111111111;
      } else if ((A >= 0.6) && (A < 0.7)) {
        /* '<S75>:1:41' */
        /* acc decrescente negativa */
        /* '<S75>:1:42' */
        f = -55.555555555555543 * A + 33.333333333333321;

        /* '<S75>:1:43' */
        F = ((A * A * -27.777777777777771 + 33.333333333333321 * A) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S75>:1:44' */
        B = (((((A * A * 16.666666666666661 + -9.259259259259256 *
                 StateFlowFinal_mpower(A)) + 1.6666666666666665 * A) -
               9.9999999999999982 * A) - 0.44444444444444442) +
             0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower(0.6);
      } else if ((A >= 0.7) && (A < 0.9)) {
        /* '<S75>:1:48' */
        /* acc costante negativa */
        /* '<S75>:1:49' */
        f = -5.5555555555555545;

        /* '<S75>:1:50' */
        F = (-5.5555555555555545 * A + 5.5555555555555545) - 0.27777777777777773;

        /* '<S75>:1:51' */
        B = (((A * A * -2.7777777777777772 + 5.5555555555555545 * A) -
              0.27777777777777773 * A) + 1.0) - 2.5092592592592586;
      } else if ((A >= 0.9) && (A <= 1.0)) {
        /* '<S75>:1:54' */
        /* acc crescente negativa */
        /* '<S75>:1:55' */
        f = (A - 1.0) * 55.555555555555543;

        /* '<S75>:1:56' */
        F = (A * A * 27.777777777777771 - 55.555555555555543 * A) +
          27.777777777777771;

        /* '<S75>:1:57' */
        B = (((9.259259259259256 * StateFlowFinal_mpower(A) - A * A *
               27.777777777777771) + 27.777777777777771 * A) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S75>:1:61' */
        f = 0.0;

        /* '<S75>:1:62' */
        F = 0.0;

        /* '<S75>:1:63' */
        B = 1.0;
      }

      /* '<S75>:1:66' */
      StateFlowFinal_B.xq = B * StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S75>:1:67' */
      StateFlowFinal_B.xq_p = StateFlowFinal_P.AlzataQ_Value / 2.0 * F /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S75>:1:68' */
      StateFlowFinal_B.yq = 0.0;

      /* '<S75>:1:69' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S75>:1:70' */
      A = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.xq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * f / (A * A);

      /* '<S75>:1:71' */
      StateFlowFinal_B.yq_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 0.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 1.5 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S75>:1:73' */
      /* '<S75>:1:74' */
      /*  Cj = Ca/xj; */
      if ((B >= 0.0) && (B < 0.1)) {
        /* '<S75>:1:77' */
        /* acc crescente positiva */
        /* '<S75>:1:78' */
        f = 55.555555555555543 * B;

        /* '<S75>:1:79' */
        F = B * B * 27.777777777777771;

        /* '<S75>:1:80' */
        B = 9.259259259259256 * StateFlowFinal_mpower(B);
      } else if ((B >= 0.1) && (B < 0.30000000000000004)) {
        /* '<S75>:1:83' */
        /* acc costante positiva */
        /* '<S75>:1:84' */
        f = 5.5555555555555545;

        /* '<S75>:1:85' */
        F = 5.5555555555555545 * B - 0.27777777777777773;

        /* '<S75>:1:86' */
        B = (B * B * 2.7777777777777772 - 0.27777777777777773 * B) +
          0.0092592592592592587;
      } else if ((B >= 0.30000000000000004) && (B < 0.4)) {
        /* '<S75>:1:89' */
        /* acc decrescente positiva */
        /* '<S75>:1:90' */
        f = -55.555555555555543 * B + 22.222222222222218;

        /* '<S75>:1:91' */
        F = (B * B * -27.777777777777771 + 22.222222222222218 * B) -
          2.7777777777777777;

        /* '<S75>:1:92' */
        B = ((((B * B * 11.111111111111109 + -9.259259259259256 *
                StateFlowFinal_mpower(B)) - 2.7777777777777777 * B) -
              0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
             (0.4)) + 0.1111111111111111;
      } else if ((B >= 0.4) && (B < 0.6)) {
        /* '<S75>:1:96' */
        /* acc costante nulla */
        /* '<S75>:1:97' */
        f = 0.0;

        /* '<S75>:1:98' */
        F = 1.6666666666666665;

        /* '<S75>:1:99' */
        B = (1.6666666666666665 * B - 0.44444444444444442) + 0.1111111111111111;
      } else if ((B >= 0.6) && (B < 0.7)) {
        /* '<S75>:1:102' */
        /* acc decrescente negativa */
        /* '<S75>:1:103' */
        f = -55.555555555555543 * B + 33.333333333333321;

        /* '<S75>:1:104' */
        F = ((B * B * -27.777777777777771 + 33.333333333333321 * B) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S75>:1:105' */
        B = (((((B * B * 16.666666666666661 + -9.259259259259256 *
                 StateFlowFinal_mpower(B)) + 1.6666666666666665 * B) -
               9.9999999999999982 * B) - 0.44444444444444442) +
             0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower(0.6);
      } else if ((B >= 0.7) && (B < 0.9)) {
        /* '<S75>:1:109' */
        /* acc costante negativa */
        /* '<S75>:1:110' */
        f = -5.5555555555555545;

        /* '<S75>:1:111' */
        F = (-5.5555555555555545 * B + 5.5555555555555545) - 0.27777777777777773;

        /* '<S75>:1:112' */
        B = (((B * B * -2.7777777777777772 + 5.5555555555555545 * B) -
              0.27777777777777773 * B) + 1.0) - 2.5092592592592586;
      } else if ((B >= 0.9) && (B <= 1.0)) {
        /* '<S75>:1:115' */
        /* acc crescente negativa */
        /* '<S75>:1:116' */
        f = (B - 1.0) * 55.555555555555543;

        /* '<S75>:1:117' */
        F = (B * B * 27.777777777777771 - 55.555555555555543 * B) +
          27.777777777777771;

        /* '<S75>:1:118' */
        B = (((9.259259259259256 * StateFlowFinal_mpower(B) - B * B *
               27.777777777777771) + 27.777777777777771 * B) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S75>:1:122' */
        f = 0.0;

        /* '<S75>:1:123' */
        F = 0.0;

        /* '<S75>:1:124' */
        B = 1.0;
      }

      /* '<S75>:1:127' */
      StateFlowFinal_B.xq = StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S75>:1:128' */
      StateFlowFinal_B.xq_p = 0.0;

      /* '<S75>:1:129' */
      StateFlowFinal_B.yq = -B * StateFlowFinal_P.AlzataQ_Value;

      /* '<S75>:1:130' */
      StateFlowFinal_B.yq_p = -F * StateFlowFinal_P.AlzataQ_Value /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S75>:1:131' */
      StateFlowFinal_B.xq_pp = 0.0;

      /* '<S75>:1:132' */
      A = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.yq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * -f / (A *
        A);
    } else if ((StateFlowFinal_B.Sum2 > 1.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 2.5 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S75>:1:134' */
      /* '<S75>:1:135' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S75>:1:138' */
        /* acc crescente positiva */
        /* '<S75>:1:139' */
        f = 55.555555555555543 * x3;

        /* '<S75>:1:140' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S75>:1:141' */
        B = 9.259259259259256 * StateFlowFinal_mpower(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S75>:1:144' */
        /* acc costante positiva */
        /* '<S75>:1:145' */
        f = 5.5555555555555545;

        /* '<S75>:1:146' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S75>:1:147' */
        B = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S75>:1:150' */
        /* acc decrescente positiva */
        /* '<S75>:1:151' */
        f = -55.555555555555543 * x3 + 22.222222222222218;

        /* '<S75>:1:152' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S75>:1:153' */
        B = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                StateFlowFinal_mpower(x3)) - 2.7777777777777777 * x3) -
              0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
             (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S75>:1:157' */
        /* acc costante nulla */
        /* '<S75>:1:158' */
        f = 0.0;

        /* '<S75>:1:159' */
        F = 1.6666666666666665;

        /* '<S75>:1:160' */
        B = (1.6666666666666665 * x3 - 0.44444444444444442) + 0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S75>:1:163' */
        /* acc decrescente negativa */
        /* '<S75>:1:164' */
        f = -55.555555555555543 * x3 + 33.333333333333321;

        /* '<S75>:1:165' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S75>:1:166' */
        B = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                 StateFlowFinal_mpower(x3)) + 1.6666666666666665 * x3) -
               9.9999999999999982 * x3) - 0.44444444444444442) +
             0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower(0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S75>:1:170' */
        /* acc costante negativa */
        /* '<S75>:1:171' */
        f = -5.5555555555555545;

        /* '<S75>:1:172' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S75>:1:173' */
        B = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
              0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S75>:1:176' */
        /* acc crescente negativa */
        /* '<S75>:1:177' */
        f = (x3 - 1.0) * 55.555555555555543;

        /* '<S75>:1:178' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S75>:1:179' */
        B = (((9.259259259259256 * StateFlowFinal_mpower(x3) - x3 * x3 *
               27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S75>:1:183' */
        f = 0.0;

        /* '<S75>:1:184' */
        F = 0.0;

        /* '<S75>:1:185' */
        B = 1.0;
      }

      /* '<S75>:1:188' */
      StateFlowFinal_B.xq = StateFlowFinal_P.AlzataQ_Value / 2.0 - B *
        StateFlowFinal_P.AlzataQ_Value;

      /* '<S75>:1:189' */
      StateFlowFinal_B.xq_p = -F * StateFlowFinal_P.AlzataQ_Value /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S75>:1:190' */
      StateFlowFinal_B.yq = -StateFlowFinal_P.AlzataQ_Value;

      /* '<S75>:1:191' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S75>:1:192' */
      A = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.xq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * -f / (A *
        A);

      /* '<S75>:1:193' */
      StateFlowFinal_B.yq_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 2.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 3.5 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S75>:1:195' */
      /* '<S75>:1:196' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S75>:1:199' */
        /* acc crescente positiva */
        /* '<S75>:1:200' */
        f = 55.555555555555543 * x4;

        /* '<S75>:1:201' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S75>:1:202' */
        B = 9.259259259259256 * StateFlowFinal_mpower(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S75>:1:205' */
        /* acc costante positiva */
        /* '<S75>:1:206' */
        f = 5.5555555555555545;

        /* '<S75>:1:207' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S75>:1:208' */
        B = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S75>:1:211' */
        /* acc decrescente positiva */
        /* '<S75>:1:212' */
        f = -55.555555555555543 * x4 + 22.222222222222218;

        /* '<S75>:1:213' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S75>:1:214' */
        B = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                StateFlowFinal_mpower(x4)) - 2.7777777777777777 * x4) -
              0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
             (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S75>:1:218' */
        /* acc costante nulla */
        /* '<S75>:1:219' */
        f = 0.0;

        /* '<S75>:1:220' */
        F = 1.6666666666666665;

        /* '<S75>:1:221' */
        B = (1.6666666666666665 * x4 - 0.44444444444444442) + 0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S75>:1:224' */
        /* acc decrescente negativa */
        /* '<S75>:1:225' */
        f = -55.555555555555543 * x4 + 33.333333333333321;

        /* '<S75>:1:226' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S75>:1:227' */
        B = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                 StateFlowFinal_mpower(x4)) + 1.6666666666666665 * x4) -
               9.9999999999999982 * x4) - 0.44444444444444442) +
             0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower(0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S75>:1:231' */
        /* acc costante negativa */
        /* '<S75>:1:232' */
        f = -5.5555555555555545;

        /* '<S75>:1:233' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S75>:1:234' */
        B = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
              0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S75>:1:237' */
        /* acc crescente negativa */
        /* '<S75>:1:238' */
        f = (x4 - 1.0) * 55.555555555555543;

        /* '<S75>:1:239' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S75>:1:240' */
        B = (((9.259259259259256 * StateFlowFinal_mpower(x4) - x4 * x4 *
               27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S75>:1:244' */
        f = 0.0;

        /* '<S75>:1:245' */
        F = 0.0;

        /* '<S75>:1:246' */
        B = 1.0;
      }

      /* '<S75>:1:249' */
      StateFlowFinal_B.xq = -StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S75>:1:250' */
      StateFlowFinal_B.xq_p = 0.0;

      /* '<S75>:1:251' */
      StateFlowFinal_B.yq = B * StateFlowFinal_P.AlzataQ_Value +
        -StateFlowFinal_P.AlzataQ_Value;

      /* '<S75>:1:252' */
      StateFlowFinal_B.yq_p = F * StateFlowFinal_P.AlzataQ_Value /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S75>:1:253' */
      StateFlowFinal_B.xq_pp = 0.0;

      /* '<S75>:1:254' */
      A = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.yq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * f / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 3.5 * StateFlowFinal_P.PeriodoQ_Value /
                4.0) && (StateFlowFinal_B.Sum2 <= 4.0 *
                         StateFlowFinal_P.PeriodoQ_Value / 4.0)) {
      /* '<S75>:1:256' */
      /* '<S75>:1:257' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S75>:1:260' */
        /* acc crescente positiva */
        /* '<S75>:1:261' */
        f = 55.555555555555543 * x5;

        /* '<S75>:1:262' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S75>:1:263' */
        B = 9.259259259259256 * StateFlowFinal_mpower(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S75>:1:266' */
        /* acc costante positiva */
        /* '<S75>:1:267' */
        f = 5.5555555555555545;

        /* '<S75>:1:268' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S75>:1:269' */
        B = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S75>:1:272' */
        /* acc decrescente positiva */
        /* '<S75>:1:273' */
        f = -55.555555555555543 * x5 + 22.222222222222218;

        /* '<S75>:1:274' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S75>:1:275' */
        B = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                StateFlowFinal_mpower(x5)) - 2.7777777777777777 * x5) -
              0.44444444444444442) + 9.259259259259256 * StateFlowFinal_mpower
             (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S75>:1:279' */
        /* acc costante nulla */
        /* '<S75>:1:280' */
        f = 0.0;

        /* '<S75>:1:281' */
        F = 1.6666666666666665;

        /* '<S75>:1:282' */
        B = (1.6666666666666665 * x5 - 0.44444444444444442) + 0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S75>:1:285' */
        /* acc decrescente negativa */
        /* '<S75>:1:286' */
        f = -55.555555555555543 * x5 + 33.333333333333321;

        /* '<S75>:1:287' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S75>:1:288' */
        B = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                 StateFlowFinal_mpower(x5)) + 1.6666666666666665 * x5) -
               9.9999999999999982 * x5) - 0.44444444444444442) +
             0.1111111111111111) + 9.259259259259256 * StateFlowFinal_mpower(0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S75>:1:292' */
        /* acc costante negativa */
        /* '<S75>:1:293' */
        f = -5.5555555555555545;

        /* '<S75>:1:294' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S75>:1:295' */
        B = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
              0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S75>:1:298' */
        /* acc crescente negativa */
        /* '<S75>:1:299' */
        f = (x5 - 1.0) * 55.555555555555543;

        /* '<S75>:1:300' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S75>:1:301' */
        B = (((9.259259259259256 * StateFlowFinal_mpower(x5) - x5 * x5 *
               27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S75>:1:305' */
        f = 0.0;

        /* '<S75>:1:306' */
        F = 0.0;

        /* '<S75>:1:307' */
        B = 1.0;
      }

      /* '<S75>:1:310' */
      StateFlowFinal_B.xq = B * StateFlowFinal_P.AlzataQ_Value / 2.0 +
        -StateFlowFinal_P.AlzataQ_Value / 2.0;

      /* '<S75>:1:311' */
      StateFlowFinal_B.xq_p = F * StateFlowFinal_P.AlzataQ_Value / 2.0 /
        (StateFlowFinal_P.PeriodoQ_Value / 4.0);

      /* '<S75>:1:312' */
      StateFlowFinal_B.yq = 0.0;

      /* '<S75>:1:313' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S75>:1:314' */
      B = StateFlowFinal_P.PeriodoQ_Value / 4.0;
      StateFlowFinal_B.xq_pp = StateFlowFinal_P.AlzataQ_Value / 2.0 * f / (B * B);

      /* '<S75>:1:315' */
      StateFlowFinal_B.yq_pp = 0.0;
    } else {
      /* '<S75>:1:317' */
      StateFlowFinal_B.xq = 0.0;

      /* '<S75>:1:318' */
      StateFlowFinal_B.yq = 0.0;

      /* '<S75>:1:319' */
      StateFlowFinal_B.xq_p = 0.0;

      /* '<S75>:1:320' */
      StateFlowFinal_B.yq_p = 0.0;

      /* '<S75>:1:321' */
      StateFlowFinal_B.xq_pp = 0.0;

      /* '<S75>:1:322' */
      StateFlowFinal_B.yq_pp = 0.0;
    }

    /* End of MATLAB Function: '<S57>/Quadrato' */

    /* MATLAB Function: '<S57>/Cerchio' incorporates:
     *  Constant: '<S57>/Alzata C'
     *  Constant: '<S57>/Periodo C'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchio': '<S74>:1' */
    /* '<S74>:1:3' */
    x4 = StateFlowFinal_B.Sum2 / StateFlowFinal_P.PeriodoC_Value;

    /* '<S74>:1:4' */
    if ((x4 >= 0.0) && (x4 < 0.1)) {
      /* acc crescente positiva */
      F = x4 * x4 * 27.777777777777771;
      B = 9.259259259259256 * rt_powd_snf(x4, 3.0);
      f = 55.555555555555543 * x4;
    } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
      /* acc costante positiva */
      F = 5.5555555555555545 * x4 - 0.27777777777777773;
      B = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
        0.0092592592592592587;
      f = 5.5555555555555545;
    } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
      /* acc decrescente positiva */
      F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
        2.7777777777777777;
      B = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 * rt_powd_snf(x4,
               3.0)) - 2.7777777777777777 * x4) - 0.44444444444444442) +
           0.59259259259259256) + 0.1111111111111111;
      f = -55.555555555555543 * x4 + 22.222222222222218;
    } else if ((x4 >= 0.4) && (x4 < 0.6)) {
      /* acc costante nulla */
      F = 1.6666666666666665;
      B = (1.6666666666666665 * x4 - 0.44444444444444442) + 0.1111111111111111;
      f = 0.0;
    } else if ((x4 >= 0.6) && (x4 < 0.7)) {
      /* acc decrescente negativa */
      F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
           1.6666666666666665) - 9.9999999999999982;
      B = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 * rt_powd_snf
               (x4, 3.0)) + 1.6666666666666665 * x4) - 9.9999999999999982 * x4)
            - 0.44444444444444442) + 0.1111111111111111) + 1.9999999999999991;
      f = -55.555555555555543 * x4 + 33.333333333333321;
    } else if ((x4 >= 0.7) && (x4 < 0.9)) {
      /* acc costante negativa */
      F = (-5.5555555555555545 * x4 + 5.5555555555555545) - 0.27777777777777773;
      B = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
            0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      f = -5.5555555555555545;
    } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
      /* acc crescente negativa */
      F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
        27.777777777777771;
      B = (((9.259259259259256 * rt_powd_snf(x4, 3.0) - x4 * x4 *
             27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
        9.259259259259256;
      f = (x4 - 1.0) * 55.555555555555543;
    } else {
      /* acc costante nulla */
      F = 0.0;
      B = 1.0;
      f = 0.0;
    }

    /* '<S74>:1:6' */
    B = B * 2.0 * 3.1415926535897931;

    /* '<S74>:1:7' */
    F = F * 2.0 * 3.1415926535897931 / StateFlowFinal_P.PeriodoC_Value;

    /* '<S74>:1:8' */
    x3 = f * 2.0 * 3.1415926535897931 / (StateFlowFinal_P.PeriodoC_Value *
      StateFlowFinal_P.PeriodoC_Value);

    /* '<S74>:1:9' */
    StateFlowFinal_B.xc = cos(1.5707963267948966 - B) *
      StateFlowFinal_P.AlzataC_Value;

    /* '<S74>:1:10' */
    StateFlowFinal_B.yc = sin(1.5707963267948966 - B) *
      StateFlowFinal_P.AlzataC_Value - StateFlowFinal_P.AlzataC_Value;

    /* '<S74>:1:11' */
    StateFlowFinal_B.xc_p = sin(1.5707963267948966 - B) *
      StateFlowFinal_P.AlzataC_Value * F;

    /* '<S74>:1:12' */
    StateFlowFinal_B.yc_p = cos(1.5707963267948966 - B) *
      -StateFlowFinal_P.AlzataC_Value * F;

    /* '<S74>:1:13' */
    StateFlowFinal_B.xc_pp = cos(1.5707963267948966 - B) *
      -StateFlowFinal_P.AlzataC_Value * (F * F) + sin(1.5707963267948966 - B) *
      StateFlowFinal_P.AlzataC_Value * x3;

    /* '<S74>:1:14' */
    StateFlowFinal_B.yc_pp = sin(1.5707963267948966 - B) *
      -StateFlowFinal_P.AlzataC_Value * (F * F) - cos(1.5707963267948966 - B) *
      StateFlowFinal_P.AlzataC_Value * x3;

    /* End of MATLAB Function: '<S57>/Cerchio' */

    /* MATLAB Function: '<S57>/g' incorporates:
     *  Constant: '<S57>/Alzata C1'
     *  Constant: '<S57>/Periodo C1'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/g': '<S76>:1' */
    /* '<S76>:1:2' */
    A = StateFlowFinal_P.PeriodoC1_Value / 32.0;

    /* '<S76>:1:3' */
    /* '<S76>:1:4' */
    /* '<S76>:1:5' */
    /* '<S76>:1:6' */
    /* '<S76>:1:7' */
    /* '<S76>:1:8' */
    /* '<S76>:1:9' */
    /* '<S76>:1:10' */
    /* '<S76>:1:11' */
    /* '<S76>:1:12' */
    /* '<S76>:1:13' */
    /* '<S76>:1:14' */
    /* '<S76>:1:15' */
    /* '<S76>:1:16' */
    /* '<S76>:1:17' */
    /* '<S76>:1:18' */
    /* '<S76>:1:19' */
    /* '<S76>:1:20' */
    /* '<S76>:1:21' */
    /* '<S76>:1:22' */
    /* '<S76>:1:23' */
    /* '<S76>:1:24' */
    /* '<S76>:1:25' */
    /* '<S76>:1:26' */
    /* '<S76>:1:27' */
    /* '<S76>:1:28' */
    /* '<S76>:1:29' */
    /* '<S76>:1:30' */
    /* '<S76>:1:31' */
    /* '<S76>:1:32' */
    /* '<S76>:1:33' */
    /* '<S76>:1:34' */
    /* '<S76>:1:35' */
    /* '<S76>:1:36' */
    /* '<S76>:1:37' */
    /* '<S76>:1:38' */
    /* '<S76>:1:39' */
    /* '<S76>:1:40' */
    /* '<S76>:1:41' */
    /* '<S76>:1:42' */
    /* '<S76>:1:43' */
    /* '<S76>:1:44' */
    /* '<S76>:1:45' */
    /* '<S76>:1:46' */
    if ((StateFlowFinal_B.Sum2 > 0.0) && (StateFlowFinal_B.Sum2 <= A / 2.0)) {
      /* '<S76>:1:48' */
      /*  1 */
      /* '<S76>:1:49' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 0.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:50' */
      StateFlowFinal_B.x = 0.0;

      /* '<S76>:1:51' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:52' */
      StateFlowFinal_B.y = -B * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:53' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:54' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:55' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > A / 2.0) && (StateFlowFinal_B.Sum2 <=
                3.0 * A / 2.0)) {
      /* '<S76>:1:57' */
      /*  2 */
      /* '<S76>:1:58' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - A / 2.0) / A, &B, &F, &x3);

      /* '<S76>:1:59' */
      StateFlowFinal_B.x = B * 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:60' */
      StateFlowFinal_B.x_p_l = F * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:61' */
      StateFlowFinal_B.y = -StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:62' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:63' */
      StateFlowFinal_B.x_pp = x3 * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:64' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 3.0 * A / 2.0) && (StateFlowFinal_B.Sum2
                <= 4.0 * A / 2.0)) {
      /* '<S76>:1:66' */
      /*  3 */
      /* '<S76>:1:67' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 3.0 * A / 2.0) / (A / 2.0),
        &B, &F, &x4);

      /* '<S76>:1:68' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:69' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:70' */
      StateFlowFinal_B.y = B * StateFlowFinal_P.AlzataC1_Value +
        -StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:71' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:72' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:73' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = x4 * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 4.0 * A / 2.0) && (StateFlowFinal_B.Sum2
                <= 5.0 * A / 2.0)) {
      /* '<S76>:1:75' */
      /*  4 */
      /* '<S76>:1:76' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 4.0 * A / 2.0) / (A / 2.0),
        &B, &F, &x5);

      /* '<S76>:1:77' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:78' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:79' */
      StateFlowFinal_B.y = 0.0;

      /* '<S76>:1:80' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:81' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = -x5 * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:82' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 5.0 * A / 2.0) && (StateFlowFinal_B.Sum2
                <= 7.0 * A / 2.0)) {
      /* '<S76>:1:84' */
      /*  5 */
      /* '<S76>:1:85' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 5.0 * A / 2.0) / A, &B, &F,
        &x5);

      /* '<S76>:1:86' */
      StateFlowFinal_B.x = 2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:87' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:88' */
      StateFlowFinal_B.y = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:89' */
      StateFlowFinal_B.y_p_o = -F * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:90' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:91' */
      StateFlowFinal_B.y_pp = -x5 * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 7.0 * A / 2.0) && (StateFlowFinal_B.Sum2
                <= 9.0 * A / 2.0)) {
      /* '<S76>:1:93' */
      /*  6 */
      /* '<S76>:1:94' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 7.0 * A / 2.0) / A, &f, &B,
        &F);

      /* '<S76>:1:95' */
      StateFlowFinal_B.x = f * 3.0 * StateFlowFinal_P.AlzataC1_Value + 2.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:96' */
      StateFlowFinal_B.x_p_l = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:97' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:98' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:99' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:100' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 9.0 * A / 2.0) && (StateFlowFinal_B.Sum2
                <= 11.0 * A / 2.0)) {
      /* '<S76>:1:102' */
      /*  7 */
      /* '<S76>:1:103' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 9.0 * A / 2.0) / A, &f, &B,
        &F);

      /* '<S76>:1:104' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:105' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:106' */
      StateFlowFinal_B.y = f * 3.0 * StateFlowFinal_P.AlzataC1_Value + -3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:107' */
      StateFlowFinal_B.y_p_o = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:108' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:109' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 11.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 12.0 * A / 2.0)) {
      /* '<S76>:1:111' */
      /*  8 */
      /* '<S76>:1:112' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 11.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:113' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:114' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:115' */
      StateFlowFinal_B.y = 0.0;

      /* '<S76>:1:116' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:117' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:118' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 12.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 13.0 * A / 2.0)) {
      /* '<S76>:1:120' */
      /*  9 */
      /* '<S76>:1:121' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 12.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:122' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:123' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:124' */
      StateFlowFinal_B.y = -B * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:125' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:126' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:127' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 13.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 15.0 * A / 2.0)) {
      /* '<S76>:1:129' */
      /*  10 */
      /* '<S76>:1:130' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 13.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:131' */
      StateFlowFinal_B.x = f * 3.0 * StateFlowFinal_P.AlzataC1_Value + 4.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:132' */
      StateFlowFinal_B.x_p_l = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:133' */
      StateFlowFinal_B.y = -StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:134' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:135' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:136' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 15.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 16.0 * A / 2.0)) {
      /* '<S76>:1:138' */
      /*  11 */
      /* '<S76>:1:139' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 15.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:140' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:141' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:142' */
      StateFlowFinal_B.y = B * StateFlowFinal_P.AlzataC1_Value +
        -StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:143' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:144' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:145' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 16.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 17.0 * A / 2.0)) {
      /* '<S76>:1:147' */
      /*  12 */
      /* '<S76>:1:148' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 16.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:149' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:150' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:151' */
      StateFlowFinal_B.y = 0.0;

      /* '<S76>:1:152' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:153' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:154' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 17.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 19.0 * A / 2.0)) {
      /* '<S76>:1:156' */
      /*  13 */
      /* '<S76>:1:157' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 17.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:158' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:159' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:160' */
      StateFlowFinal_B.y = -f * 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:161' */
      StateFlowFinal_B.y_p_o = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:162' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:163' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 19.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 20.0 * A / 2.0)) {
      /* '<S76>:1:165' */
      /*  14 */
      /* '<S76>:1:166' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 19.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:167' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:168' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:169' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:170' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:171' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:172' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 20.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 21.0 * A / 2.0)) {
      /* '<S76>:1:174' */
      /*  15 */
      /* '<S76>:1:175' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 20.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:176' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:177' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:178' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:179' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:180' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:181' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 21.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 23.0 * A / 2.0)) {
      /* '<S76>:1:183' */
      /*  16 */
      /* '<S76>:1:184' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 21.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:185' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - f * 3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:186' */
      StateFlowFinal_B.x_p_l = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:187' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:188' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:189' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:190' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 23.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 25.0 * A / 2.0)) {
      /* '<S76>:1:192' */
      /*  17 */
      /* '<S76>:1:193' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 23.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:194' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:195' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:196' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * f *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:197' */
      StateFlowFinal_B.y_p_o = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:198' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:199' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 25.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 27.0 * A / 2.0)) {
      /* '<S76>:1:201' */
      /*  18 */
      /* '<S76>:1:202' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 25.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:203' */
      StateFlowFinal_B.x = 3.0 * f * StateFlowFinal_P.AlzataC1_Value + 4.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:204' */
      StateFlowFinal_B.x_p_l = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:205' */
      StateFlowFinal_B.y = -5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:206' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:207' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:208' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 27.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 28.0 * A / 2.0)) {
      /* '<S76>:1:210' */
      /*  19 */
      /* '<S76>:1:211' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 27.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:212' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:213' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:214' */
      StateFlowFinal_B.y = -5.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:215' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:216' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:217' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 28.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 29.0 * A / 2.0)) {
      /* '<S76>:1:219' */
      /*  20 */
      /* '<S76>:1:220' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 28.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:221' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:222' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:223' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:224' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:225' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:226' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 29.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 31.0 * A / 2.0)) {
      /* '<S76>:1:228' */
      /*  21 */
      /* '<S76>:1:229' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 29.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:230' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:231' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:232' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * f *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:233' */
      StateFlowFinal_B.y_p_o = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:234' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:235' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 31.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 32.0 * A / 2.0)) {
      /* '<S76>:1:237' */
      /*  22 */
      /* '<S76>:1:238' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 31.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:239' */
      StateFlowFinal_B.x = 6.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:240' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:241' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:242' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:243' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:244' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 32.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 33.0 * A / 2.0)) {
      /* '<S76>:1:246' */
      /*  23 */
      /* '<S76>:1:247' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 32.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:248' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:249' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:250' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:251' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:252' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:253' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 33.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 35.0 * A / 2.0)) {
      /* '<S76>:1:255' */
      /*  24 */
      /* '<S76>:1:256' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 33.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:257' */
      StateFlowFinal_B.x = 7.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * f *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:258' */
      StateFlowFinal_B.x_p_l = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:259' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:260' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:261' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:262' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 35.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 36.0 * A / 2.0)) {
      /* '<S76>:1:264' */
      /*  25 */
      /* '<S76>:1:265' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 35.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:266' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:267' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:268' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:269' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:270' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:271' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 36.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 37.0 * A / 2.0)) {
      /* '<S76>:1:273' */
      /*  26 */
      /* '<S76>:1:274' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 36.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:275' */
      StateFlowFinal_B.x = 4.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:276' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:277' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:278' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:279' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:280' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 37.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 39.0 * A / 2.0)) {
      /* '<S76>:1:282' */
      /*  27 */
      /* '<S76>:1:283' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 37.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:284' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:285' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:286' */
      StateFlowFinal_B.y = 3.0 * f * StateFlowFinal_P.AlzataC1_Value + -7.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:287' */
      StateFlowFinal_B.y_p_o = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:288' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:289' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 39.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 41.0 * A / 2.0)) {
      /* '<S76>:1:291' */
      /*  28 */
      /* '<S76>:1:292' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 39.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:293' */
      StateFlowFinal_B.x = 5.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * f *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:294' */
      StateFlowFinal_B.x_p_l = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:295' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:296' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:297' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:298' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 41.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 43.0 * A / 2.0)) {
      /* '<S76>:1:300' */
      /*  29 */
      /* '<S76>:1:301' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 41.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:302' */
      StateFlowFinal_B.x = 2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:303' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:304' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value - f * 3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:305' */
      StateFlowFinal_B.y_p_o = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:306' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:307' */
      StateFlowFinal_B.y_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 43.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 44.0 * A / 2.0)) {
      /* '<S76>:1:309' */
      /*  30 */
      /* '<S76>:1:310' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 43.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:311' */
      StateFlowFinal_B.x = 2.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:312' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:313' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:314' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:315' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:316' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 44.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 45.0 * A / 2.0)) {
      /* '<S76>:1:318' */
      /*  31 */
      /* '<S76>:1:319' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 44.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:320' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:321' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:322' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value + B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:323' */
      StateFlowFinal_B.y_p_o = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:324' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:325' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 45.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 47.0 * A / 2.0)) {
      /* '<S76>:1:327' */
      /*  32 */
      /* '<S76>:1:328' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 45.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:329' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value - 3.0 * f *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:330' */
      StateFlowFinal_B.x_p_l = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:331' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:332' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:333' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:334' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 47.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 48.0 * A / 2.0)) {
      /* '<S76>:1:336' */
      /*  33 */
      /* '<S76>:1:337' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 47.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:338' */
      StateFlowFinal_B.x = 0.0;

      /* '<S76>:1:339' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:340' */
      StateFlowFinal_B.y = -6.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:341' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:342' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:343' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 48.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 49.0 * A / 2.0)) {
      /* '<S76>:1:345' */
      /*  34 */
      /* '<S76>:1:346' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 48.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:347' */
      StateFlowFinal_B.x = B * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:348' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:349' */
      StateFlowFinal_B.y = -7.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:350' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:351' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:352' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 49.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 51.0 * A / 2.0)) {
      /* '<S76>:1:354' */
      /*  35 */
      /* '<S76>:1:355' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 49.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:356' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:357' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:358' */
      StateFlowFinal_B.y = 3.0 * f * StateFlowFinal_P.AlzataC1_Value + -7.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:359' */
      StateFlowFinal_B.y_p_o = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:360' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:361' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 51.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 52.0 * A / 2.0)) {
      /* '<S76>:1:363' */
      /*  36 */
      /* '<S76>:1:364' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 51.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:365' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:366' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:367' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:368' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:369' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:370' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 52.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 53.0 * A / 2.0)) {
      /* '<S76>:1:372' */
      /*  37 */
      /* '<S76>:1:373' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 52.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:374' */
      StateFlowFinal_B.x = 0.0;

      /* '<S76>:1:375' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:376' */
      StateFlowFinal_B.y = -4.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:377' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:378' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:379' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 53.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 55.0 * A / 2.0)) {
      /* '<S76>:1:381' */
      /*  38 */
      /* '<S76>:1:382' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 53.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:383' */
      StateFlowFinal_B.x = 3.0 * f * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:384' */
      StateFlowFinal_B.x_p_l = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:385' */
      StateFlowFinal_B.y = -5.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:386' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:387' */
      StateFlowFinal_B.x_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:388' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 55.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 57.0 * A / 2.0)) {
      /* '<S76>:1:390' */
      /*  39 */
      /* '<S76>:1:391' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 55.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:392' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:393' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:394' */
      StateFlowFinal_B.y = f * 3.0 * StateFlowFinal_P.AlzataC1_Value + -5.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:395' */
      StateFlowFinal_B.y_p_o = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:396' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:397' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 57.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 59.0 * A / 2.0)) {
      /* '<S76>:1:399' */
      /*  40 */
      /* '<S76>:1:400' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 57.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:401' */
      StateFlowFinal_B.x = 3.0 * StateFlowFinal_P.AlzataC1_Value - f * 3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:402' */
      StateFlowFinal_B.x_p_l = -B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:403' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:404' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:405' */
      StateFlowFinal_B.x_pp = -F * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:406' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 59.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 60.0 * A / 2.0)) {
      /* '<S76>:1:408' */
      /*  41 */
      /* '<S76>:1:409' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 59.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:410' */
      StateFlowFinal_B.x = 0.0;

      /* '<S76>:1:411' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:412' */
      StateFlowFinal_B.y = -2.0 * StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:413' */
      StateFlowFinal_B.y_p_o = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:414' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:415' */
      A /= 2.0;
      StateFlowFinal_B.y_pp = -f * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 60.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 61.0 * A / 2.0)) {
      /* '<S76>:1:417' */
      /*  42 */
      /* '<S76>:1:418' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 60.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:419' */
      StateFlowFinal_B.x = B * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:420' */
      StateFlowFinal_B.x_p_l = F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:421' */
      StateFlowFinal_B.y = -3.0 * StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:422' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:423' */
      A /= 2.0;
      StateFlowFinal_B.x_pp = f * StateFlowFinal_P.AlzataC1_Value / (A * A);

      /* '<S76>:1:424' */
      StateFlowFinal_B.y_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 > 61.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 63.0 * A / 2.0)) {
      /* '<S76>:1:426' */
      /*  43 */
      /* '<S76>:1:427' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 61.0 * A / 2.0) / A, &f,
        &B, &F);

      /* '<S76>:1:428' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:429' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:430' */
      StateFlowFinal_B.y = 3.0 * f * StateFlowFinal_P.AlzataC1_Value + -3.0 *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:431' */
      StateFlowFinal_B.y_p_o = B * 3.0 * StateFlowFinal_P.AlzataC1_Value / A;

      /* '<S76>:1:432' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:433' */
      StateFlowFinal_B.y_pp = F * StateFlowFinal_P.AlzataC1_Value / (A * A);
    } else if ((StateFlowFinal_B.Sum2 > 63.0 * A / 2.0) &&
               (StateFlowFinal_B.Sum2 <= 64.0 * A / 2.0)) {
      /* '<S76>:1:435' */
      /*  44 */
      /* '<S76>:1:436' */
      StateFlowFinal_ldm7t_k((StateFlowFinal_B.Sum2 - 63.0 * A / 2.0) / (A / 2.0),
        &B, &F, &f);

      /* '<S76>:1:437' */
      StateFlowFinal_B.x = StateFlowFinal_P.AlzataC1_Value - B *
        StateFlowFinal_P.AlzataC1_Value;

      /* '<S76>:1:438' */
      StateFlowFinal_B.x_p_l = -F * StateFlowFinal_P.AlzataC1_Value / (A / 2.0);

      /* '<S76>:1:439' */
      StateFlowFinal_B.y = 0.0;

      /* '<S76>:1:440' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:441' */
      B = A / 2.0;
      StateFlowFinal_B.x_pp = -f * StateFlowFinal_P.AlzataC1_Value / (B * B);

      /* '<S76>:1:442' */
      StateFlowFinal_B.y_pp = 0.0;
    } else {
      /* '<S76>:1:445' */
      StateFlowFinal_B.x = 0.0;

      /* '<S76>:1:446' */
      StateFlowFinal_B.x_p_l = 0.0;

      /* '<S76>:1:447' */
      StateFlowFinal_B.y = 0.0;

      /* '<S76>:1:448' */
      StateFlowFinal_B.y_p_o = 0.0;

      /* '<S76>:1:449' */
      StateFlowFinal_B.x_pp = 0.0;

      /* '<S76>:1:450' */
      StateFlowFinal_B.y_pp = 0.0;
    }

    /* End of MATLAB Function: '<S57>/g' */

    /* MATLAB Function: '<S57>/Cerchi Tangenti' incorporates:
     *  Constant: '<S57>/Constant3'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/Cerchi Tangenti': '<S73>:1' */
    /* '<S73>:1:4' */
    A = 100.0 * StateFlowFinal_P.Constant3_Value / 2.0;

    /* '<S73>:1:5' */
    /* '<S73>:1:6' */
    f = (StateFlowFinal_P.Constant3_Value - 0.025) * 100.0 / 2.0;

    /* '<S73>:1:7' */
    /* '<S73>:1:8' */
    x3 = ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) * 100.0 / 2.0;

    /* '<S73>:1:9' */
    /* '<S73>:1:10' */
    x4 = (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) * 100.0 /
      2.0;

    /* '<S73>:1:11' */
    /* '<S73>:1:12' */
    T5 = ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
      * 100.0 / 2.0;

    /* '<S73>:1:14' */
    /* '<S73>:1:15' */
    /* '<S73>:1:16' */
    /* '<S73>:1:17' */
    /* '<S73>:1:18' */
    if ((StateFlowFinal_B.Sum2 > 0.0) && (StateFlowFinal_B.Sum2 <= A)) {
      /* '<S73>:1:20' */
      /*  1 */
      /* '<S73>:1:21' */
      StateFlowFinal_ldm7t(StateFlowFinal_B.Sum2 / A, &B, &F, &f);

      /* '<S73>:1:22' */
      B = B * 2.0 * 3.1415926535897931;

      /* '<S73>:1:23' */
      F = F * 2.0 * 3.1415926535897931 / A;

      /* '<S73>:1:24' */
      x3 = f * 2.0 * 3.1415926535897931 / (A * A);

      /* '<S73>:1:25' */
      StateFlowFinal_B.xct = StateFlowFinal_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - B);

      /* '<S73>:1:26' */
      StateFlowFinal_B.yct = StateFlowFinal_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - B) - StateFlowFinal_P.Constant3_Value / 2.0;

      /* '<S73>:1:27' */
      StateFlowFinal_B.xct_p = StateFlowFinal_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - B) * F;

      /* '<S73>:1:28' */
      StateFlowFinal_B.yct_p = -StateFlowFinal_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - B) * F;

      /* '<S73>:1:29' */
      StateFlowFinal_B.xct_pp = -StateFlowFinal_P.Constant3_Value / 2.0 * cos
        (1.5707963267948966 - B) * (F * F) + StateFlowFinal_P.Constant3_Value /
        2.0 * sin(1.5707963267948966 - B) * x3;

      /* '<S73>:1:30' */
      StateFlowFinal_B.yct_pp = -StateFlowFinal_P.Constant3_Value / 2.0 * sin
        (1.5707963267948966 - B) * (F * F) - StateFlowFinal_P.Constant3_Value /
        2.0 * cos(1.5707963267948966 - B) * x3;
    } else if ((StateFlowFinal_B.Sum2 > A) && (StateFlowFinal_B.Sum2 <= A + f))
    {
      /* '<S73>:1:32' */
      /*  2 */
      /* '<S73>:1:33' */
      StateFlowFinal_ldm7t((StateFlowFinal_B.Sum2 - A) / f, &B, &F, &x3);

      /* '<S73>:1:34' */
      B = B * 2.0 * 3.1415926535897931;

      /* '<S73>:1:35' */
      F = F * 2.0 * 3.1415926535897931 / f;

      /* '<S73>:1:36' */
      x3 = x3 * 2.0 * 3.1415926535897931 / (f * f);

      /* '<S73>:1:37' */
      StateFlowFinal_B.xct = (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 *
        cos(1.5707963267948966 - B);

      /* '<S73>:1:38' */
      StateFlowFinal_B.yct = (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - B) - (StateFlowFinal_P.Constant3_Value - 0.025)
        / 2.0;

      /* '<S73>:1:39' */
      StateFlowFinal_B.xct_p = (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 *
        sin(1.5707963267948966 - B) * F;

      /* '<S73>:1:40' */
      StateFlowFinal_B.yct_p = -(StateFlowFinal_P.Constant3_Value - 0.025) / 2.0
        * cos(1.5707963267948966 - B) * F;

      /* '<S73>:1:41' */
      StateFlowFinal_B.xct_pp = -(StateFlowFinal_P.Constant3_Value - 0.025) /
        2.0 * cos(1.5707963267948966 - B) * (F * F) +
        (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 * sin
        (1.5707963267948966 - B) * x3;

      /* '<S73>:1:42' */
      StateFlowFinal_B.yct_pp = -(StateFlowFinal_P.Constant3_Value - 0.025) /
        2.0 * sin(1.5707963267948966 - B) * (F * F) -
        (StateFlowFinal_P.Constant3_Value - 0.025) / 2.0 * cos
        (1.5707963267948966 - B) * x3;
    } else if ((StateFlowFinal_B.Sum2 > A + f) && (StateFlowFinal_B.Sum2 <= (A +
      f) + x3)) {
      /* '<S73>:1:44' */
      /*  3 */
      /* '<S73>:1:45' */
      StateFlowFinal_ldm7t(((StateFlowFinal_B.Sum2 - A) - f) / x3, &B, &F, &x4);

      /* '<S73>:1:46' */
      B = B * 2.0 * 3.1415926535897931;

      /* '<S73>:1:47' */
      F = F * 2.0 * 3.1415926535897931 / x3;

      /* '<S73>:1:48' */
      x3 = x4 * 2.0 * 3.1415926535897931 / (x3 * x3);

      /* '<S73>:1:49' */
      StateFlowFinal_B.xct = ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - B);

      /* '<S73>:1:50' */
      StateFlowFinal_B.yct = ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - B) - ((StateFlowFinal_P.Constant3_Value
        - 0.025) - 0.025) / 2.0;

      /* '<S73>:1:51' */
      StateFlowFinal_B.xct_p = ((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - B) * F;

      /* '<S73>:1:52' */
      StateFlowFinal_B.yct_p = -((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - B) * F;

      /* '<S73>:1:53' */
      StateFlowFinal_B.xct_pp = -((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * cos(1.5707963267948966 - B) * (F * F) +
        ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) / 2.0 * sin
        (1.5707963267948966 - B) * x3;

      /* '<S73>:1:54' */
      StateFlowFinal_B.yct_pp = -((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) / 2.0 * sin(1.5707963267948966 - B) * (F * F) -
        ((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) / 2.0 * cos
        (1.5707963267948966 - B) * x3;
    } else if ((StateFlowFinal_B.Sum2 > (A + f) + x3) && (StateFlowFinal_B.Sum2 <=
                ((A + f) + x3) + x4)) {
      /* '<S73>:1:56' */
      /*  4 */
      /* '<S73>:1:57' */
      StateFlowFinal_ldm7t((((StateFlowFinal_B.Sum2 - A) - f) - x3) / x4, &B, &F,
                           &x5);

      /* '<S73>:1:58' */
      B = B * 2.0 * 3.1415926535897931;

      /* '<S73>:1:59' */
      F = F * 2.0 * 3.1415926535897931 / x4;

      /* '<S73>:1:60' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (x4 * x4);

      /* '<S73>:1:61' */
      StateFlowFinal_B.xct = (((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - B);

      /* '<S73>:1:62' */
      StateFlowFinal_B.yct = (((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - B) -
        (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0;

      /* '<S73>:1:63' */
      StateFlowFinal_B.xct_p = (((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - B) * F;

      /* '<S73>:1:64' */
      StateFlowFinal_B.yct_p = -(((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - B) * F;

      /* '<S73>:1:65' */
      StateFlowFinal_B.xct_pp = -(((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - B) * (F * F) +
        (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 *
        sin(1.5707963267948966 - B) * x3;

      /* '<S73>:1:66' */
      StateFlowFinal_B.yct_pp = -(((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - B) * (F * F) -
        (((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) / 2.0 *
        cos(1.5707963267948966 - B) * x3;
    } else if ((StateFlowFinal_B.Sum2 > ((A + f) + x3) + x4) &&
               (StateFlowFinal_B.Sum2 <= (((A + f) + x3) + x4) + T5)) {
      /* '<S73>:1:68' */
      /*  5 */
      /* '<S73>:1:69' */
      StateFlowFinal_ldm7t(((((StateFlowFinal_B.Sum2 - A) - f) - x3) - x4) / T5,
                           &B, &F, &x5);

      /* '<S73>:1:70' */
      B = B * 2.0 * 3.1415926535897931;

      /* '<S73>:1:71' */
      F = F * 2.0 * 3.1415926535897931 / T5;

      /* '<S73>:1:72' */
      x3 = x5 * 2.0 * 3.1415926535897931 / (T5 * T5);

      /* '<S73>:1:73' */
      StateFlowFinal_B.xct = ((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - B);

      /* '<S73>:1:74' */
      StateFlowFinal_B.yct = ((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - B) -
        ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0;

      /* '<S73>:1:75' */
      StateFlowFinal_B.xct_p = ((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - B) * F;

      /* '<S73>:1:76' */
      StateFlowFinal_B.yct_p = -((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - B) * F;

      /* '<S73>:1:77' */
      StateFlowFinal_B.xct_pp = -((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * cos(1.5707963267948966 - B) * (F * F) +
        ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0 * sin(1.5707963267948966 - B) * x3;

      /* '<S73>:1:78' */
      StateFlowFinal_B.yct_pp = -((((StateFlowFinal_P.Constant3_Value - 0.025) -
        0.025) - 0.025) - 0.025) / 2.0 * sin(1.5707963267948966 - B) * (F * F) -
        ((((StateFlowFinal_P.Constant3_Value - 0.025) - 0.025) - 0.025) - 0.025)
        / 2.0 * cos(1.5707963267948966 - B) * x3;
    } else {
      /* '<S73>:1:80' */
      StateFlowFinal_B.xct = 0.0;

      /* '<S73>:1:81' */
      StateFlowFinal_B.xct_p = 0.0;

      /* '<S73>:1:82' */
      StateFlowFinal_B.yct = 0.0;

      /* '<S73>:1:83' */
      StateFlowFinal_B.yct_p = 0.0;

      /* '<S73>:1:84' */
      StateFlowFinal_B.xct_pp = 0.0;

      /* '<S73>:1:85' */
      StateFlowFinal_B.yct_pp = 0.0;
    }

    /* End of MATLAB Function: '<S57>/Cerchi Tangenti' */

    /* MATLAB Function: '<S57>/spirale' incorporates:
     *  Constant: '<S57>/N giri'
     *  Constant: '<S57>/Periodo'
     *  Constant: '<S57>/Rmax'
     *  Constant: '<S57>/Rmin'
     *  Constant: '<S57>/Tempo spost. iniziale'
     */
    /* MATLAB Function 'Sistema_braccia/Leggi di moto/spirale': '<S77>:1' */
    /* '<S77>:1:3' */
    /* '<S77>:1:4' */
    if ((StateFlowFinal_B.Sum2 >= 0.0) && (StateFlowFinal_B.Sum2 <=
         StateFlowFinal_P.Tempospostiniziale_Value)) {
      /* '<S77>:1:5' */
      /* '<S77>:1:6' */
      StateFlowFinal_ldm7t_m(StateFlowFinal_B.Sum2 /
        StateFlowFinal_P.Tempospostiniziale_Value, &B, &F, &f);

      /* '<S77>:1:7' */
      StateFlowFinal_B.xs = B * StateFlowFinal_P.Rmin_Value;

      /* '<S77>:1:8' */
      StateFlowFinal_B.xs_p = F * StateFlowFinal_P.Rmin_Value /
        StateFlowFinal_P.Tempospostiniziale_Value;

      /* '<S77>:1:9' */
      StateFlowFinal_B.xs_pp = f * StateFlowFinal_P.Rmin_Value /
        (StateFlowFinal_P.Tempospostiniziale_Value *
         StateFlowFinal_P.Tempospostiniziale_Value);

      /* '<S77>:1:10' */
      StateFlowFinal_B.ys = 0.0;

      /* '<S77>:1:11' */
      StateFlowFinal_B.ys_p = 0.0;

      /* '<S77>:1:12' */
      StateFlowFinal_B.ys_pp = 0.0;
    } else if ((StateFlowFinal_B.Sum2 >
                StateFlowFinal_P.Tempospostiniziale_Value) &&
               (StateFlowFinal_B.Sum2 <=
                StateFlowFinal_P.Tempospostiniziale_Value +
                StateFlowFinal_P.Periodo_Value)) {
      /* '<S77>:1:13' */
      /* '<S77>:1:14' */
      StateFlowFinal_ldm7t_m((StateFlowFinal_B.Sum2 -
        StateFlowFinal_P.Tempospostiniziale_Value) /
        StateFlowFinal_P.Periodo_Value, &B, &F, &x3);

      /* '<S77>:1:15' */
      A = B * StateFlowFinal_P.Rmax_Value + StateFlowFinal_P.Rmin_Value;

      /* '<S77>:1:16' */
      f = F * StateFlowFinal_P.Rmax_Value / StateFlowFinal_P.Periodo_Value;

      /* '<S77>:1:17' */
      x4 = x3 * StateFlowFinal_P.Rmax_Value / (StateFlowFinal_P.Periodo_Value *
        StateFlowFinal_P.Periodo_Value);

      /* '<S77>:1:18' */
      B = B * StateFlowFinal_P.Ngiri_Value * 2.0 * 3.1415926535897931;

      /* '<S77>:1:19' */
      F = F * StateFlowFinal_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        StateFlowFinal_P.Periodo_Value;

      /* '<S77>:1:20' */
      x3 = x3 * StateFlowFinal_P.Ngiri_Value * 2.0 * 3.1415926535897931 /
        (StateFlowFinal_P.Periodo_Value * StateFlowFinal_P.Periodo_Value);

      /* '<S77>:1:21' */
      StateFlowFinal_B.xs = A * cos(B);

      /* '<S77>:1:22' */
      StateFlowFinal_B.ys = A * sin(B);

      /* '<S77>:1:23' */
      StateFlowFinal_B.xs_p = -A * sin(B) * F + f * cos(B);

      /* '<S77>:1:24' */
      StateFlowFinal_B.ys_p = A * cos(B) * F + f * sin(B);

      /* '<S77>:1:25' */
      StateFlowFinal_B.xs_pp = ((-f * sin(B) * F - (F * F * cos(B) + sin(B) * x3)
        * A) + x4 * cos(B)) - f * sin(B) * F;

      /* '<S77>:1:26' */
      StateFlowFinal_B.ys_pp = (((F * F * -sin(B) + cos(B) * x3) * A + f * cos(B)
        * F) + x4 * sin(B)) + f * cos(B) * F;
    } else {
      /* '<S77>:1:28' */
      StateFlowFinal_B.xs = cos(StateFlowFinal_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowFinal_P.Rmin_Value +
        StateFlowFinal_P.Rmax_Value);

      /* '<S77>:1:29' */
      StateFlowFinal_B.xs_p = 0.0;

      /* '<S77>:1:30' */
      StateFlowFinal_B.ys = sin(StateFlowFinal_P.Ngiri_Value * 2.0 *
        3.1415926535897931) * (StateFlowFinal_P.Rmin_Value +
        StateFlowFinal_P.Rmax_Value);

      /* '<S77>:1:31' */
      StateFlowFinal_B.ys_p = 0.0;

      /* '<S77>:1:32' */
      StateFlowFinal_B.xs_pp = 0.0;

      /* '<S77>:1:33' */
      StateFlowFinal_B.ys_pp = 0.0;
    }

    /* End of MATLAB Function: '<S57>/spirale' */

    /* MultiPortSwitch: '<S57>/Multiport Switch' incorporates:
     *  Constant: '<S12>/selettore'
     *  Constant: '<S57>/N giri1'
     *  Constant: '<S57>/N giri2'
     *  Constant: '<S57>/Rmax1'
     *  Constant: '<S57>/Rmin1'
     *  Constant: '<S57>/Rmin2'
     *  Constant: '<S57>/Rmin3'
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

    /* End of MultiPortSwitch: '<S57>/Multiport Switch' */

    /* Sum: '<S12>/Sum' */
    StateFlowFinal_B.Sum = StateFlowFinal_B.x0 +
      StateFlowFinal_B.MultiportSwitch[0];

    /* Sum: '<S12>/Sum1' */
    StateFlowFinal_B.Ymov = StateFlowFinal_B.MultiportSwitch[1] +
      StateFlowFinal_B.y0;

    /* MATLAB Function: '<S12>/Cinematica Inversa' */
    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa': '<S49>:1' */
    /* '<S49>:1:3' */
    /* '<S49>:1:4' */
    /* '<S49>:1:6' */
    B = 2.0 * StateFlowFinal_B.Sum * 0.25 + 0.045;

    /* '<S49>:1:7' */
    F = 2.0 * StateFlowFinal_B.Ymov * 0.25;

    /* '<S49>:1:8' */
    f = ((StateFlowFinal_B.Sum * StateFlowFinal_B.Sum + 0.0081) +
         StateFlowFinal_B.Ymov * StateFlowFinal_B.Ymov) + 2.0 *
      StateFlowFinal_B.Sum * 0.09;

    /* '<S49>:1:9' */
    A = 2.0 * StateFlowFinal_B.Sum * 0.25 + -0.045;

    /* '<S49>:1:10' */
    x3 = 2.0 * StateFlowFinal_B.Ymov * 0.25;

    /* '<S49>:1:11' */
    x4 = ((StateFlowFinal_B.Sum * StateFlowFinal_B.Sum + 0.0081) +
          StateFlowFinal_B.Ymov * StateFlowFinal_B.Ymov) - 2.0 *
      StateFlowFinal_B.Sum * 0.09;

    /* '<S49>:1:15' */
    StateFlowFinal_B.theta1 = rt_atan2d_snf(sqrt((B * B + F * F) - f * f) + F, B
      + f) * 2.0;

    /* '<S49>:1:18' */
    A = rt_atan2d_snf(x3 - sqrt((A * A + x3 * x3) - x4 * x4), A + x4) * 2.0;
    if (A < -3.4906585039886591) {
      /* '<S49>:1:19' */
      /* '<S49>:1:20' */
      A += 6.2831853071795862;
    }

    StateFlowFinal_B.theta2 = A;

    /* End of MATLAB Function: '<S12>/Cinematica Inversa' */

    /* MATLAB Function: '<S12>/Cinematica Inversa vel' */
    f = StateFlowFinal_B.MultiportSwitch[2];
    B = StateFlowFinal_B.MultiportSwitch[3];

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa vel': '<S51>:1' */
    /* '<S51>:1:3' */
    /* '<S51>:1:4' */
    /* '<S51>:1:6' */
    /* '<S51>:1:8' */
    /* '<S51>:1:10' */
    A = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1)) -
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
      ((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2));

    /* '<S51>:1:12' */
    x4 = (((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1)) *
          (-0.25 * sin(StateFlowFinal_B.theta1)) + (StateFlowFinal_B.Ymov - 0.25
           * sin(StateFlowFinal_B.theta1)) * (0.25 * cos(StateFlowFinal_B.theta1)))
      / A;

    /* '<S51>:1:14' */
    A = ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * (-0.25 *
          cos(StateFlowFinal_B.theta2)) * ((StateFlowFinal_B.Sum + 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta1)) / ((StateFlowFinal_B.Sum - 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta2)) + ((StateFlowFinal_B.Sum + 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta2)))
      / A;

    /* '<S51>:1:16' */
    /* '<S51>:1:18' */
    /* '<S51>:1:20' */
    J[0] = -(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2)) * x4;
    J[2] = (-(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
            ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2))
            * A - 0.25 * sin(StateFlowFinal_B.theta2)) + (StateFlowFinal_B.Ymov
      - 0.25 * sin(StateFlowFinal_B.theta2)) / ((StateFlowFinal_B.Sum - 0.09) -
      0.25 * cos(StateFlowFinal_B.theta2)) * (0.25 * cos(StateFlowFinal_B.theta2));
    J[1] = x4;
    J[3] = A;

    /* '<S51>:1:22' */
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

    F = J_p_idx_0 * f;
    theta_p[0] = F;
    F = theta_p[0];
    F += x5 * B;
    theta_p[0] = F;
    F = J_p_idx_1 * f;
    theta_p[1] = F;
    F = theta_p[1];
    F += J_p_idx_3 * B;
    theta_p[1] = F;

    /* '<S51>:1:23' */
    /* '<S51>:1:24' */
    StateFlowFinal_B.theta1_p = theta_p[0];
    StateFlowFinal_B.theta2_p = theta_p[1];

    /* End of MATLAB Function: '<S12>/Cinematica Inversa vel' */

    /* MATLAB Function: '<S12>/Cinematica Inversa Acc' */
    B = StateFlowFinal_B.MultiportSwitch[4];
    f = StateFlowFinal_B.MultiportSwitch[5];
    F = StateFlowFinal_B.theta1_p;
    x3 = StateFlowFinal_B.theta2_p;

    /* MATLAB Function 'Sistema_braccia/Cinematica Inversa Acc': '<S50>:1' */
    /* '<S50>:1:3' */
    /* '<S50>:1:4' */
    /* '<S50>:1:6' */
    /* '<S50>:1:8' */
    /* '<S50>:1:10' */
    A = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1)) -
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
      ((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2));

    /* '<S50>:1:12' */
    x4 = (((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1)) *
          (-0.25 * sin(StateFlowFinal_B.theta1)) + (StateFlowFinal_B.Ymov - 0.25
           * sin(StateFlowFinal_B.theta1)) * (0.25 * cos(StateFlowFinal_B.theta1)))
      / A;

    /* '<S50>:1:14' */
    A = ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * (-0.25 *
          cos(StateFlowFinal_B.theta2)) * ((StateFlowFinal_B.Sum + 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta1)) / ((StateFlowFinal_B.Sum - 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta2)) + ((StateFlowFinal_B.Sum + 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta2)))
      / A;

    /* '<S50>:1:16' */
    /* '<S50>:1:18' */
    /* '<S50>:1:20' */
    J[0] = -(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2)) * x4;
    J[2] = (-(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
            ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2))
            * A - 0.25 * sin(StateFlowFinal_B.theta2)) + (StateFlowFinal_B.Ymov
      - 0.25 * sin(StateFlowFinal_B.theta2)) / ((StateFlowFinal_B.Sum - 0.09) -
      0.25 * cos(StateFlowFinal_B.theta2)) * (0.25 * cos(StateFlowFinal_B.theta2));
    J[1] = x4;
    J[3] = A;

    /* '<S50>:1:22' */
    A = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    J_p_idx_1 = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2);
    J_p_idx_3 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
      ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) /
      ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1));

    /* '<S50>:1:25' */
    x4 = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    x5 = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    D2p = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    g_a = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    T5 = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * ((0.09
      + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 -
      StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1));

    /* '<S50>:1:28' */
    i_a = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    j_a = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * ((0.09
      + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 -
      StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1));

    /* '<S50>:1:31' */
    N21 = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    N22 = (0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2);
    m_a = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * ((0.09
      + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 -
      StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1));

    /* '<S50>:1:34' */
    J_p_idx_0 = ((((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1))
                   * (0.25 * cos(StateFlowFinal_B.theta1)) - ((0.09 +
      StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) * (0.25 * sin
      (StateFlowFinal_B.theta1))) * (StateFlowFinal_B.MultiportSwitch[3] - 0.25 *
      cos(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p) /
                  (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2))
                    * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
                       (StateFlowFinal_B.theta1)) / ((0.09 -
      StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
                    (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1)))
                   * ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
                      (StateFlowFinal_B.theta2))) - ((((0.25 * sin
      (StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * sin(StateFlowFinal_B.theta1))
      - (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
         (StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p) * (0.25 * cos
      (StateFlowFinal_B.theta1))) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta1)) *
      StateFlowFinal_B.theta1_p) + 0.25 * cos(StateFlowFinal_B.theta1) *
      StateFlowFinal_B.theta1_p * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1))) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) / (((StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1))) * ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2)))) + (0.25 * sin(StateFlowFinal_B.theta2) *
      StateFlowFinal_B.theta2_p + StateFlowFinal_B.MultiportSwitch[2]) *
                 (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
                 ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1)) *
                  (0.25 * cos(StateFlowFinal_B.theta1)) - ((0.09 +
      StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) * (0.25 * sin
      (StateFlowFinal_B.theta1))) / (((StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1))) * (A * A))) - (((((0.25 * sin
      (StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2)) + StateFlowFinal_B.MultiportSwitch[3]) +
      (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos(StateFlowFinal_B.theta2)
       * StateFlowFinal_B.theta2_p) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 *
      cos(StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 *
      cos(StateFlowFinal_B.theta2))) - 0.25 * cos(StateFlowFinal_B.theta1) *
      StateFlowFinal_B.theta1_p) + (0.25 * sin(StateFlowFinal_B.theta2) *
      StateFlowFinal_B.theta2_p + StateFlowFinal_B.MultiportSwitch[2]) *
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * ((0.09 +
      StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / (J_p_idx_1 *
      J_p_idx_1)) * (((StateFlowFinal_B.Ymov - 0.25 * sin
                       (StateFlowFinal_B.theta1)) * (0.25 * cos
      (StateFlowFinal_B.theta1)) - ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta1))) *
                     (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)))
      / (((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) *
         (J_p_idx_3 * J_p_idx_3));
    x5 = (((((((((((0.25 * sin(StateFlowFinal_B.theta1) *
                    StateFlowFinal_B.theta1_p +
                    StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowFinal_B.theta2)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2)) + ((0.25 * sin(StateFlowFinal_B.theta1) *
      StateFlowFinal_B.theta1_p + StateFlowFinal_B.MultiportSwitch[2]) * (0.25 *
      sin(StateFlowFinal_B.theta2)) + 0.25 * cos(StateFlowFinal_B.theta2) *
      StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)))) + (StateFlowFinal_B.MultiportSwitch[3] - 0.25
      * cos(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p) * (0.25 * cos
      (StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2))) - (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) * (0.25 * sin(StateFlowFinal_B.theta2)) *
                 StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Sum) -
      0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) +
      0.25 * cos(StateFlowFinal_B.theta2))) + (0.25 * sin
      (StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos(StateFlowFinal_B.theta2))
                * (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
                ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
                 (StateFlowFinal_B.theta1)) / (x4 * x4)) *
               (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
               (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
                 ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
                  (StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) +
      0.25 * cos(StateFlowFinal_B.theta2)) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1))) * ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2))) - 0.25 * cos(StateFlowFinal_B.theta2) *
               StateFlowFinal_B.theta2_p) - (StateFlowFinal_B.MultiportSwitch[3]
               - 0.25 * cos(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p)
              * (0.25 * cos(StateFlowFinal_B.theta2)) / ((0.09 -
                StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2))) +
             ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
              (0.25 * cos(StateFlowFinal_B.theta2)) * ((0.09 +
                StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) /
              ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
               (StateFlowFinal_B.theta2)) + ((0.09 + StateFlowFinal_B.Sum) -
               0.25 * cos(StateFlowFinal_B.theta1)) * (0.25 * sin
               (StateFlowFinal_B.theta2))) * (StateFlowFinal_B.MultiportSwitch[3]
              - 0.25 * cos(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p)
             / (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
                 ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
                  (StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) +
                0.25 * cos(StateFlowFinal_B.theta2)) + (StateFlowFinal_B.Ymov -
                0.25 * sin(StateFlowFinal_B.theta1))) * ((0.09 -
                StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)))) -
            (0.25 * sin(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
             StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
             (StateFlowFinal_B.theta2)) * (StateFlowFinal_B.Ymov - 0.25 * sin
             (StateFlowFinal_B.theta2)) / (x5 * x5)) + ((StateFlowFinal_B.Ymov -
             0.25 * sin(StateFlowFinal_B.theta2)) * (0.25 * cos
             (StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 *
             cos(StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) +
             0.25 * cos(StateFlowFinal_B.theta2)) + ((0.09 +
              StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) *
            (0.25 * sin(StateFlowFinal_B.theta2))) * (0.25 * sin
            (StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
            StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25
            * sin(StateFlowFinal_B.theta2)) / (((StateFlowFinal_B.Ymov - 0.25 *
              sin(StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) -
              0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 -
               StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
             (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1))) *
            (D2p * D2p))) - (((((0.25 * sin(StateFlowFinal_B.theta1) *
               StateFlowFinal_B.theta1_p + StateFlowFinal_B.MultiportSwitch[2]) *
              (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
              ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
               (StateFlowFinal_B.theta2)) + StateFlowFinal_B.MultiportSwitch[3])
             + (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
                (StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p) * ((0.09
               + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) /
             ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)))
            - 0.25 * cos(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p) +
           (0.25 * sin(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
            StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25
            * sin(StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) -
            0.25 * cos(StateFlowFinal_B.theta1)) / (g_a * g_a)) *
          (((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
            (0.25 * cos(StateFlowFinal_B.theta2)) * ((0.09 +
              StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) /
            ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2))
            + ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
               (StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta2)))
           * (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2))) /
          (((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2))
           * (T5 * T5))) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) * (0.25 * sin(StateFlowFinal_B.theta2)) *
      StateFlowFinal_B.theta2_p / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2));
    J_p_idx_1 = -((((0.25 * sin(StateFlowFinal_B.theta1) *
                     StateFlowFinal_B.theta1_p +
                     StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * sin
      (StateFlowFinal_B.theta1)) - (StateFlowFinal_B.MultiportSwitch[3] - 0.25 *
      cos(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p) * (0.25 * cos
      (StateFlowFinal_B.theta1))) + (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta1)) *
                   StateFlowFinal_B.theta1_p) + 0.25 * cos
                  (StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p * ((0.09
      + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1))) /
      ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * ((0.09 +
         StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 -
         StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
       (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1))) -
      (((((0.25 * sin(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p +
           StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 *
           sin(StateFlowFinal_B.theta2)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25
           * cos(StateFlowFinal_B.theta2)) + StateFlowFinal_B.MultiportSwitch[3])
         + (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
            (StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p) * ((0.09 +
           StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09
           - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2))) -
        0.25 * cos(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p) + (0.25
        * sin(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
        StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 *
        sin(StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 *
        cos(StateFlowFinal_B.theta1)) / (i_a * i_a)) * ((StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta1)) * (0.25 * cos(StateFlowFinal_B.theta1))
      - ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) *
      (0.25 * sin(StateFlowFinal_B.theta1))) / (j_a * j_a);
    J_p_idx_3 = (((((0.25 * sin(StateFlowFinal_B.theta1) *
                     StateFlowFinal_B.theta1_p +
                     StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos
      (StateFlowFinal_B.theta2)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2)) + ((0.25 * sin(StateFlowFinal_B.theta1) *
      StateFlowFinal_B.theta1_p + StateFlowFinal_B.MultiportSwitch[2]) * (0.25 *
      sin(StateFlowFinal_B.theta2)) + 0.25 * cos(StateFlowFinal_B.theta2) *
      StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)))) + (StateFlowFinal_B.MultiportSwitch[3] - 0.25
      * cos(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p) * (0.25 * cos
      (StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
      (StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos
      (StateFlowFinal_B.theta2))) - (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) * (0.25 * sin(StateFlowFinal_B.theta2)) *
                  StateFlowFinal_B.theta2_p * ((0.09 + StateFlowFinal_B.Sum) -
      0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 - StateFlowFinal_B.Sum) +
      0.25 * cos(StateFlowFinal_B.theta2))) + (0.25 * sin
      (StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
      StateFlowFinal_B.MultiportSwitch[2]) * (0.25 * cos(StateFlowFinal_B.theta2))
                 * (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2))
                 * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos
                    (StateFlowFinal_B.theta1)) / (N21 * N21)) /
      ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * ((0.09 +
         StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09 -
         StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
       (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1))) -
      (((((0.25 * sin(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p +
           StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 *
           sin(StateFlowFinal_B.theta2)) / ((0.09 - StateFlowFinal_B.Sum) + 0.25
           * cos(StateFlowFinal_B.theta2)) + StateFlowFinal_B.MultiportSwitch[3])
         + (StateFlowFinal_B.MultiportSwitch[3] - 0.25 * cos
            (StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p) * ((0.09 +
           StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) / ((0.09
           - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2))) -
        0.25 * cos(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p) + (0.25
        * sin(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p +
        StateFlowFinal_B.MultiportSwitch[2]) * (StateFlowFinal_B.Ymov - 0.25 *
        sin(StateFlowFinal_B.theta2)) * ((0.09 + StateFlowFinal_B.Sum) - 0.25 *
        cos(StateFlowFinal_B.theta1)) / (N22 * N22)) * ((StateFlowFinal_B.Ymov -
      0.25 * sin(StateFlowFinal_B.theta2)) * (0.25 * cos(StateFlowFinal_B.theta2))
      * ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) /
      ((0.09 - StateFlowFinal_B.Sum) + 0.25 * cos(StateFlowFinal_B.theta2)) +
      ((0.09 + StateFlowFinal_B.Sum) - 0.25 * cos(StateFlowFinal_B.theta1)) *
      (0.25 * sin(StateFlowFinal_B.theta2))) / (m_a * m_a);

    /* '<S50>:1:37' */
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
    f -= J_p_idx_0;
    F = J1[0] * x5;
    theta_p[0] = F;
    F = theta_p[0];
    F += J1[2] * f;
    theta_p[0] = F;
    F = J1[1] * x5;
    theta_p[1] = F;
    F = theta_p[1];
    F += J1[3] * f;
    theta_p[1] = F;

    /* '<S50>:1:39' */
    /* '<S50>:1:40' */
    StateFlowFinal_B.theta1_pp = theta_p[0];
    StateFlowFinal_B.theta2_pp = theta_p[1];

    /* End of MATLAB Function: '<S12>/Cinematica Inversa Acc' */

    /* S-Function (xpcethercatpdorx): '<S68>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S68>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S68>/Velocity B' */
    StateFlowFinal_B.VelocityB_f = StateFlowFinal_B.EtherCATPDOReceive15_d;

    /* MATLAB Function: '<S68>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita /Vel Asse B conv': '<S103>:1' */
    /* '<S103>:1:2' */
    StateFlowFinal_B.vel_B_conv_b = StateFlowFinal_B.VelocityB_f *
      6.2831853071795862 / 163840.0 / 64.0;

    /* S-Function (xpcethercatpdorx): '<S68>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S68>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[17];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S68>/Velocity A' */
    StateFlowFinal_B.VelocityA_o = StateFlowFinal_B.EtherCATPDOReceive14_b;

    /* MATLAB Function: '<S68>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema_braccia/Velocita /Vel Asse A conv': '<S102>:1' */
    /* '<S102>:1:2' */
    StateFlowFinal_B.vel_A_conv_b = StateFlowFinal_B.VelocityA_o *
      6.2831853071795862 / 163840.0 / 64.0;

    /* Sum: '<S12>/Sum7' */
    StateFlowFinal_B.qdot[0] = StateFlowFinal_B.theta1_p -
      StateFlowFinal_B.vel_B_conv_b;
    StateFlowFinal_B.qdot[1] = StateFlowFinal_B.theta2_p -
      StateFlowFinal_B.vel_A_conv_b;

    /* Sum: '<S12>/Sum4' */
    StateFlowFinal_B.q[0] = StateFlowFinal_B.theta1 - StateFlowFinal_B.Sum4;
    StateFlowFinal_B.q[1] = StateFlowFinal_B.theta2 - StateFlowFinal_B.Sum7;

    /* Gain: '<S12>/Kd' */
    StateFlowFinal_B.Kd[0] = StateFlowFinal_P.Kd_Gain * StateFlowFinal_B.qdot[0];

    /* Product: '<S12>/Product' */
    StateFlowFinal_B.Product[0] = StateFlowFinal_B.Kp_l * StateFlowFinal_B.q[0];

    /* Gain: '<S12>/Kd' */
    StateFlowFinal_B.Kd[1] = StateFlowFinal_P.Kd_Gain * StateFlowFinal_B.qdot[1];

    /* Product: '<S12>/Product' */
    StateFlowFinal_B.Product[1] = StateFlowFinal_B.Kp_l * StateFlowFinal_B.q[1];

    /* Sum: '<S12>/Sum9' */
    StateFlowFinal_B.Y[0] = (StateFlowFinal_B.theta1_pp + StateFlowFinal_B.Kd[0])
      + StateFlowFinal_B.Product[0];
    StateFlowFinal_B.Y[1] = (StateFlowFinal_B.theta2_pp + StateFlowFinal_B.Kd[1])
      + StateFlowFinal_B.Product[1];

    /* MATLAB Function: '<S12>/Dinamica Inversa1' */
    /* MATLAB Function 'Sistema_braccia/Dinamica Inversa1': '<S56>:1' */
    /* '<S56>:1:112' */
    /* '<S56>:1:108' */
    /* '<S56>:1:104' */
    /* '<S56>:1:96' */
    /* '<S56>:1:3' */
    /* '<S56>:1:15' */
    A = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    J_p_idx_1 = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    J_p_idx_3 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    x4 = J_p_idx_1 * J_p_idx_1 / 2.0 + J_p_idx_3 * J_p_idx_3 / 2.0;
    x5 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    D2p = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    g_a = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    f = atan((sqrt((A * A - x4 * x4) + x5 * x5) + (sin(StateFlowFinal_B.Sum7) -
               sin(StateFlowFinal_B.Sum4))) / (((D2p * D2p / 2.0 + (cos
      (StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4))) + g_a * g_a / 2.0)
              + 0.72)) * 2.0;

    /* '<S56>:1:19' */
    T5 = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    i_a = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    j_a = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    N21 = i_a * i_a / 2.0 + j_a * j_a / 2.0;
    N22 = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    m_a = (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) + 0.72;
    A = sin(StateFlowFinal_B.Sum4) - sin(StateFlowFinal_B.Sum7);
    B = atan((sqrt((T5 * T5 - N21 * N21) + N22 * N22) + (sin
               (StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4))) / (((m_a *
                m_a / 2.0 + (cos(StateFlowFinal_B.Sum4) - cos
      (StateFlowFinal_B.Sum7))) + A * A / 2.0) - 0.72)) * -2.0;

    /* '<S56>:1:23' */
    x4 = cos(B) / sin(B) * sin(StateFlowFinal_B.Sum4) - cos
      (StateFlowFinal_B.Sum4);

    /* '<S56>:1:24' */
    x5 = cos(StateFlowFinal_B.Sum7) - cos(B) / sin(B) * sin
      (StateFlowFinal_B.Sum7);

    /* '<S56>:1:25' */
    T5 = cos(f) - cos(B) / sin(B) * sin(f);

    /* '<S56>:1:27' */
    F = (StateFlowFinal_B.vel_B_conv * x4 + StateFlowFinal_B.vel_A_conv * x5) /
      T5;

    /* '<S56>:1:29' */
    N21 = ((cos(f) / sin(f) - cos(B) / sin(B)) * sin(StateFlowFinal_B.Sum4) +
           cos(B) / sin(B) * sin(StateFlowFinal_B.Sum4)) - cos
      (StateFlowFinal_B.Sum4);

    /* '<S56>:1:31' */
    N22 = ((cos(f) / sin(f) - cos(B) / sin(B)) * -sin(StateFlowFinal_B.Sum7) -
           cos(B) / sin(B) * sin(StateFlowFinal_B.Sum7)) + cos
      (StateFlowFinal_B.Sum7);

    /* '<S56>:1:33' */
    A = (cos(f) / sin(f) - cos(B) / sin(B)) * sin(B);

    /* '<S56>:1:35' */
    x3 = N21 / A * StateFlowFinal_B.vel_B_conv + N22 / A *
      StateFlowFinal_B.vel_A_conv;

    /* '<S56>:1:37' */
    J[0] = x4 / T5;
    J[2] = x5 / T5;
    J[1] = N21 / A;
    J[3] = N22 / A;

    /* '<S56>:1:44' */
    /* '<S56>:1:45' */
    /* '<S56>:1:46' */
    x5 = cos(f) - cos(B) / sin(B) * sin(f);

    /* '<S56>:1:48' */
    /* '<S56>:1:50' */
    /* '<S56>:1:52' */
    /* '<S56>:1:54' */
    x4 = sin(B);

    /* '<S56>:1:56' */
    T5 = sin(B);

    /* '<S56>:1:58' */
    N21 = sin(B);
    N21 = (-sin(f) * F - -1.0 / (N21 * N21) * x3 * sin(f)) - cos(B) / sin(B) *
      cos(f) * F;

    /* '<S56>:1:60' */
    N22 = sin(f);
    m_a = sin(B);
    J_p_idx_1 = sin(B);

    /* '<S56>:1:63' */
    J_p_idx_3 = sin(f);
    i_a = sin(B);
    j_a = sin(B);

    /* '<S56>:1:66' */
    D2p = sin(f);
    g_a = sin(B);
    D2p = (-1.0 / (D2p * D2p) * F + 1.0 / (g_a * g_a) * x3) * sin(B) + (cos(f) /
      sin(f) - cos(B) / sin(B)) * (cos(B) * x3);

    /* '<S56>:1:68' */
    J_p_idx_0 = (((-1.0 / (x4 * x4) * x3 * sin(StateFlowFinal_B.Sum4) + cos(B) /
                   sin(B) * cos(StateFlowFinal_B.Sum4) *
                   StateFlowFinal_B.vel_B_conv) + sin(StateFlowFinal_B.Sum4) *
                  StateFlowFinal_B.vel_B_conv) * x5 - (cos(B) / sin(B) * sin
      (StateFlowFinal_B.Sum4) - cos(StateFlowFinal_B.Sum4)) * N21) / (x5 * x5);
    x5 = (((1.0 / (T5 * T5) * x3 * sin(StateFlowFinal_B.Sum7) - cos(B) / sin(B) *
            cos(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) - sin
           (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) * x5 - (cos
           (StateFlowFinal_B.Sum7) - cos(B) / sin(B) * sin(StateFlowFinal_B.Sum7))
          * N21) / (x5 * x5);
    J_p_idx_1 = ((((((-1.0 / (N22 * N22) * F + 1.0 / (m_a * m_a) * x3) * sin
                     (StateFlowFinal_B.Sum4) + (cos(f) / sin(f) - cos(B) / sin(B))
                     * (cos(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv))
                    + -1.0 / (J_p_idx_1 * J_p_idx_1) * x3 * sin
                    (StateFlowFinal_B.Sum4)) + cos(B) / sin(B) * cos
                   (StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv) + sin
                  (StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv) * A -
                 (((cos(f) / sin(f) - cos(B) / sin(B)) * sin
                   (StateFlowFinal_B.Sum4) + cos(B) / sin(B) * sin
                   (StateFlowFinal_B.Sum4)) - cos(StateFlowFinal_B.Sum4)) * D2p)
      / (A * A);
    J_p_idx_3 = ((((((cos(f) / sin(f) - cos(B) / sin(B)) * (-cos
      (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) - (-1.0 /
      (J_p_idx_3 * J_p_idx_3) * F + 1.0 / (i_a * i_a) * x3) * sin
                     (StateFlowFinal_B.Sum7)) - -1.0 / (j_a * j_a) * x3 * sin
                    (StateFlowFinal_B.Sum7)) - cos(B) / sin(B) * cos
                   (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) - sin
                  (StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv) * A -
                 (((cos(f) / sin(f) - cos(B) / sin(B)) * -sin
                   (StateFlowFinal_B.Sum7) - cos(B) / sin(B) * sin
                   (StateFlowFinal_B.Sum7)) + cos(StateFlowFinal_B.Sum7)) * D2p)
      / (A * A);

    /* '<S56>:1:70' */
    J1[0] = -0.125 * sin(StateFlowFinal_B.Sum4);
    J1[2] = 0.0;
    J1[1] = 0.125 * cos(StateFlowFinal_B.Sum4);
    J1[3] = 0.0;

    /* '<S56>:1:72' */
    /* '<S56>:1:75' */
    J2[0] = 0.0;
    J2[2] = -0.125 * sin(StateFlowFinal_B.Sum7);
    J2[1] = 0.0;
    J2[3] = 0.125 * cos(StateFlowFinal_B.Sum7);

    /* '<S56>:1:77' */
    /* '<S56>:1:80' */
    J3[0] = (0.5 * sin(f) * J[0] + sin(StateFlowFinal_B.Sum4)) * -0.25;
    J3[2] = 0.5 * sin(f) * J[2] * -0.25;
    J3[1] = (0.5 * cos(f) * J[0] + cos(StateFlowFinal_B.Sum4)) * 0.25;
    J3[3] = 0.5 * cos(f) * J[2] * 0.25;

    /* '<S56>:1:82' */
    /* '<S56>:1:85' */
    J4[0] = -0.125 * sin(B) * J[1];
    J4[2] = (0.5 * sin(B) * J[3] + sin(StateFlowFinal_B.Sum7)) * -0.25;
    J4[1] = 0.125 * cos(B) * J[1];
    J4[3] = (0.5 * cos(B) * J[3] + cos(StateFlowFinal_B.Sum7)) * 0.25;

    /* '<S56>:1:87' */
    /* '<S56>:1:90' */
    JE[0] = (sin(f) * J[0] + sin(StateFlowFinal_B.Sum4)) * -0.25;
    JE[2] = sin(f) * J[2] * -0.25;
    JE[1] = (cos(f) * J[0] + cos(StateFlowFinal_B.Sum4)) * 0.25;
    JE[3] = cos(f) * J[2] * 0.25;

    /* '<S56>:1:92' */
    /* '<S56>:1:96' */
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

    /* '<S56>:1:97' */
    A = -0.125 * cos(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv;
    x4 = -0.125 * sin(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv;
    N22 = -0.125 * cos(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv;
    m_a = -0.125 * sin(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv;
    D2p = ((0.5 * cos(f) * F * J[0] + cos(StateFlowFinal_B.Sum4) *
            StateFlowFinal_B.vel_B_conv) + 0.5 * sin(f) * J_p_idx_0) * -0.25;
    T5 = (0.5 * cos(f) * F * J[2] + 0.5 * sin(f) * x5) * -0.25;
    i_a = ((-sin(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv - 0.5 *
            sin(f) * F * J[0]) + 0.5 * cos(f) * J_p_idx_0) * 0.25;
    g_a = (-0.5 * sin(f) * F * J[2] + 0.5 * cos(f) * x5) * 0.25;
    tmp_5 = (0.5 * cos(B) * x3 * J[1] + 0.5 * sin(B) * J_p_idx_1) * -0.25;
    tmp_6 = ((0.5 * cos(B) * x3 * J[3] + cos(StateFlowFinal_B.Sum7) *
              StateFlowFinal_B.vel_A_conv) + 0.5 * sin(B) * J_p_idx_3) * -0.25;
    tmp_7 = (-0.5 * sin(B) * x3 * J[1] + 0.5 * cos(B) * J_p_idx_1) * 0.25;
    B = ((-sin(StateFlowFinal_B.Sum7) * StateFlowFinal_B.vel_A_conv - 0.5 * sin
          (B) * x3 * J[3]) + 0.5 * cos(B) * J_p_idx_3) * 0.25;
    x3 = ((cos(f) * F * J[0] + cos(StateFlowFinal_B.Sum4) *
           StateFlowFinal_B.vel_B_conv) + sin(f) * J_p_idx_0) * -0.25;
    tmp_8 = (cos(f) * F * J[2] + sin(f) * x5) * -0.25;
    tmp_9 = ((-sin(StateFlowFinal_B.Sum4) * StateFlowFinal_B.vel_B_conv - sin(f)
              * F * J[0]) + cos(f) * J_p_idx_0) * 0.25;
    f = (-sin(f) * F * J[2] + cos(f) * x5) * 0.25;
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
      j_a += JE[(bitIdx << 1) + 1] * 0.36 * f;
      tmp_4[bitIdx + 2] = j_a;
    }

    /* '<S56>:1:99' */
    A = StateFlowFinal_B.Y[0];
    x4 = StateFlowFinal_B.Y[1];
    D2p = StateFlowFinal_B.vel_B_conv;
    i_a = StateFlowFinal_B.vel_A_conv;
    K[0] = tmp_3[0] + tmp_4[0];
    f = M[0] * A;
    M_0[0] = f;
    f = M_0[0];
    K[1] = tmp_3[1] + tmp_4[1];
    f += M[2] * x4;
    M_0[0] = f;
    K[2] = tmp_3[2] + tmp_4[2];
    f = M[1] * A;
    M_0[1] = f;
    f = M_0[1];
    K[3] = tmp_3[3] + tmp_4[3];
    f += M[3] * x4;
    M_0[1] = f;

    /* '<S56>:1:101' */
    /* '<S56>:1:104' */
    /*  Cm = Jtrasm*C + Jm*Thetam_pp; */
    /* '<S56>:1:108' */
    /* '<S56>:1:111' */
    /* '<S56>:1:112' */
    /* '<S56>:1:113' */
    /* '<S56>:1:114' */
    A = StateFlowFinal_B.vel_B_conv;
    x4 = StateFlowFinal_B.vel_A_conv;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      F = K[bitIdx] * D2p;
      J[bitIdx] = 0.0;
      f = J[bitIdx];
      f += o_a[bitIdx] * M[0];
      J[bitIdx] = f;
      f = J[bitIdx];
      f += o_a[bitIdx + 2] * M[1];
      J[bitIdx] = f;
      F += K[bitIdx + 2] * i_a;
      J[bitIdx + 2] = 0.0;
      f = J[bitIdx + 2];
      f += o_a[bitIdx] * M[2];
      J[bitIdx + 2] = f;
      f = J[bitIdx + 2];
      f += o_a[bitIdx + 2] * M[3];
      J[bitIdx + 2] = f;
      theta_p[bitIdx] = M_0[bitIdx] + F;
      j_a = J[bitIdx] * 0.015625;
      j_a += J[bitIdx + 2] * 0.0;
      StateFlowFinal_B.Mm[bitIdx] = j_a + Jm[bitIdx];
      J1[bitIdx] = 0.0;
      f = J1[bitIdx];
      f += o_a[bitIdx] * K[0];
      J1[bitIdx] = f;
      f = J1[bitIdx];
      f += o_a[bitIdx + 2] * K[1];
      J1[bitIdx] = f;
      j_a = J[bitIdx] * 0.0;
      j_a += J[bitIdx + 2] * 0.015625;
      StateFlowFinal_B.Mm[bitIdx + 2] = Jm[bitIdx + 2] + j_a;
      J1[bitIdx + 2] = 0.0;
      f = J1[bitIdx + 2];
      f += o_a[bitIdx] * K[2];
      J1[bitIdx + 2] = f;
      f = J1[bitIdx + 2];
      f += o_a[bitIdx + 2] * K[3];
      J1[bitIdx + 2] = f;
      J2[bitIdx] = 0.0;
      f = J2[bitIdx];
      f += J1[bitIdx] * 0.015625;
      J2[bitIdx] = f;
      f = J2[bitIdx];
      f += J1[bitIdx + 2] * 0.0;
      J2[bitIdx] = f;
      F = (real_T)p_a[bitIdx] * A;
      J2[bitIdx + 2] = 0.0;
      f = J2[bitIdx + 2];
      f += J1[bitIdx] * 0.0;
      J2[bitIdx + 2] = f;
      f = J2[bitIdx + 2];
      f += J1[bitIdx + 2] * 0.015625;
      J2[bitIdx + 2] = f;
      F += (real_T)p_a[bitIdx + 2] * x4;
      p_a_0[bitIdx] = F;
    }

    A = 2.2250738585072014E-308;
    j_a = J2[0] * p_a_0[0];
    j_a += J2[2] * p_a_0[1];
    f = 0.0002485 - j_a;
    f = fabs(f);
    if (f > 2.2250738585072014E-308) {
      B = 1.0;
      A = f;
    } else {
      x4 = f / 2.2250738585072014E-308;
      B = x4 * x4;
    }

    j_a = J2[1] * p_a_0[0];
    j_a += J2[3] * p_a_0[1];
    f = -0.0002483 - j_a;
    f = fabs(f);
    if (f > A) {
      x4 = A / f;
      B = B * x4 * x4 + 1.0;
      A = f;
    } else {
      x4 = f / A;
      B += x4 * x4;
    }

    B = A * sqrt(B);

    /*   */
    /*  Mm_ = Jm; */
    /*  DMm = Mm-Jm; */
    /*  D = DMm*Thetam_pp + Km*Thetam_p; */
    /*  Aol = [zeros(2,2) eye(2,2); zeros(2,2), zeros(2,2)]; */
    /*  Bt = [zeros(2,2); Mm_^-1]; */
    /*  Acl = Aol - Bt*[Kp Kd]; */
    /* '<S56>:1:125' */
    StateFlowFinal_B.C1 = theta_p[0];

    /* '<S56>:1:126' */
    StateFlowFinal_B.C2 = theta_p[1];
    StateFlowFinal_B.ntilde = B;

    /* End of MATLAB Function: '<S12>/Dinamica Inversa1' */

    /* MATLAB Function: '<S12>/Coppia motrice' */
    /* MATLAB Function 'Sistema_braccia/Coppia motrice': '<S55>:1' */
    /* '<S55>:1:2' */
    /* '<S55>:1:4' */
    StateFlowFinal_B.Cm1 = (0.069632 * StateFlowFinal_B.Y[0] +
      StateFlowFinal_B.C1) / 64.0;

    /* '<S55>:1:5' */
    StateFlowFinal_B.Cm2 = (0.069632 * StateFlowFinal_B.Y[1] +
      StateFlowFinal_B.C2) / 64.0;

    /* Gain: '<S12>/Gain1' */
    StateFlowFinal_B.Gain1 = StateFlowFinal_P.Gain1_Gain * StateFlowFinal_B.Cm2;

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
    f = StateFlowFinal_B.Switch1;
    F = StateFlowFinal_P.CoppiaAbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowFinal_P.CoppiaAbracciasaturata_UpperSat;
    if (f > J_p_idx_0) {
      StateFlowFinal_B.CoppiaAbracciasaturata = J_p_idx_0;
    } else if (f < F) {
      StateFlowFinal_B.CoppiaAbracciasaturata = F;
    } else {
      StateFlowFinal_B.CoppiaAbracciasaturata = f;
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

    /* Memory: '<S27>/Memory' */
    StateFlowFinal_B.Memory_g = StateFlowFinal_DW.Memory_PreviousInput_o;

    /* Gain: '<S12>/Gain' */
    StateFlowFinal_B.Gain = StateFlowFinal_P.Gain_Gain_j * StateFlowFinal_B.Cm1;

    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S27>/Constant'
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

    /* End of Switch: '<S27>/Switch1' */

    /* Saturate: '<S6>/Coppia B braccia saturata' */
    f = StateFlowFinal_B.Switch1_l;
    F = StateFlowFinal_P.CoppiaBbracciasaturata_LowerSat;
    J_p_idx_0 = StateFlowFinal_P.CoppiaBbracciasaturata_UpperSat;
    if (f > J_p_idx_0) {
      StateFlowFinal_B.CoppiaBbracciasaturata = J_p_idx_0;
    } else if (f < F) {
      StateFlowFinal_B.CoppiaBbracciasaturata = F;
    } else {
      StateFlowFinal_B.CoppiaBbracciasaturata = f;
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

    /* S-Function (xpcethercatpdorx): '<S27>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S27>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[21];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S27>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14_g =
      StateFlowFinal_B.EtherCATPDOReceive9_h;

    /* MATLAB Function: '<S27>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory_g,
      StateFlowFinal_B.DataTypeConversion14_g,
      &StateFlowFinal_B.sf_MATLABFunction_a);

    /* Memory: '<S31>/Memory' */
    StateFlowFinal_B.Memory_n = StateFlowFinal_DW.Memory_PreviousInput_g;

    /* Sum: '<S35>/Sum' */
    StateFlowFinal_B.Sum_p = StateFlowFinal_B.convert_k -
      StateFlowFinal_B.OffA_vite;

    /* MATLAB Function: '<S44>/Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv': '<S45>:1' */
    /* '<S45>:1:2' */
    StateFlowFinal_B.pos_A_conv_c = StateFlowFinal_B.Sum_p * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S11>/Sum3' */
    StateFlowFinal_B.Sum3 = StateFlowFinal_B.convert10_p -
      StateFlowFinal_B.OffB_vite;

    /* MATLAB Function: '<S44>/Asse B conv v' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v': '<S46>:1' */
    /* '<S46>:1:2' */
    StateFlowFinal_B.pos_B_conv_v = StateFlowFinal_B.Sum3 * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S44>/Sum5' */
    StateFlowFinal_B.Sum5 = StateFlowFinal_B.pos_A_conv_c +
      StateFlowFinal_B.pos_B_conv_v;

    /* Sum: '<S38>/Sum2' */
    StateFlowFinal_B.Sum2_m = StateFlowFinal_B.Clock - StateFlowFinal_B.OffT;

    /* MATLAB Function: '<S11>/Rifermento Asse A Vite' incorporates:
     *  Constant: '<Root>/Alzata A'
     *  Constant: '<Root>/Periodo A'
     */
    /* MATLAB Function 'Sistema Vite/Rifermento Asse A Vite': '<S41>:1' */
    /* '<S41>:1:3' */
    /* '<S41>:1:4' */
    x4 = StateFlowFinal_B.Sum2_m / StateFlowFinal_P.PeriodoA_Value;

    /* '<S41>:1:5' */
    /* '<S41>:1:6' */
    if ((x4 >= 0.0) && (x4 < 0.3)) {
      /* '<S41>:1:8' */
      /* '<S41>:1:10' */
      F = 4.7619047619047619 * x4;

      /* '<S41>:1:11' */
      B = x4 * x4 * 4.7619047619047619 / 2.0;
    } else if ((x4 >= 0.3) && (x4 < 0.7)) {
      /* '<S41>:1:12' */
      /* '<S41>:1:14' */
      F = 1.4285714285714286;

      /* '<S41>:1:15' */
      B = (x4 - 0.3) * 1.4285714285714286 + 0.21428571428571427;
    } else if ((x4 >= 0.7) && (x4 <= 1.0)) {
      /* '<S41>:1:16' */
      /* '<S41>:1:18' */
      /* '<S41>:1:19' */
      F = 1.4285714285714286 - (x4 - 0.7) * 4.7619047619047619;

      /* '<S41>:1:20' */
      B = ((x4 - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x4 - 0.7) *
        (x4 - 0.7) * 4.7619047619047619 / 2.0;
    } else {
      /* '<S41>:1:23' */
      F = 0.0;

      /* '<S41>:1:24' */
      B = 1.0000000000000002;
    }

    /* '<S41>:1:27' */
    StateFlowFinal_B.ldm_pos = B * StateFlowFinal_P.AlzataA_Value;

    /* '<S41>:1:28' */
    StateFlowFinal_B.ldm_vel = F * StateFlowFinal_P.AlzataA_Value /
      StateFlowFinal_P.PeriodoA_Value;

    /* End of MATLAB Function: '<S11>/Rifermento Asse A Vite' */

    /* Sum: '<S11>/Sum1' */
    StateFlowFinal_B.Sum1 = StateFlowFinal_B.ldm_pos - StateFlowFinal_B.Sum5;

    /* Gain: '<S39>/Gain' */
    StateFlowFinal_B.Gain_a = StateFlowFinal_P.Gain_Gain_b *
      StateFlowFinal_B.Sum1;

    /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[22];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S42>/Velocity A' */
    StateFlowFinal_B.VelocityA_b = StateFlowFinal_B.EtherCATPDOReceive14_j;

    /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[23];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S42>/Velocity B' */
    StateFlowFinal_B.VelocityB_d = StateFlowFinal_B.EtherCATPDOReceive15_k;

    /* MATLAB Function: '<S42>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse A conv': '<S47>:1' */
    /* '<S47>:1:2' */
    StateFlowFinal_B.vel_A_conv_d = (StateFlowFinal_B.VelocityA_b +
      StateFlowFinal_B.VelocityB_d) * 0.02 / 6.2831853071795862 *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum8' */
    StateFlowFinal_B.Sum8 = StateFlowFinal_B.ldm_vel -
      StateFlowFinal_B.vel_A_conv_d;

    /* Gain: '<S39>/Gain6' */
    StateFlowFinal_B.Gain6 = StateFlowFinal_P.Gain6_Gain * StateFlowFinal_B.Sum8;

    /* Sum: '<S39>/Sum9' */
    StateFlowFinal_B.Sum9_p = StateFlowFinal_B.Gain_a + StateFlowFinal_B.Gain6;

    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S31>/Constant'
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

    /* End of Switch: '<S31>/Switch1' */

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

    /* S-Function (xpcethercatpdorx): '<S31>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S31>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[25];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S31>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14_k =
      StateFlowFinal_B.EtherCATPDOReceive9_hd;

    /* MATLAB Function: '<S31>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory_n,
      StateFlowFinal_B.DataTypeConversion14_k,
      &StateFlowFinal_B.sf_MATLABFunction_f);

    /* Memory: '<S33>/Memory' */
    StateFlowFinal_B.Memory_d = StateFlowFinal_DW.Memory_PreviousInput_a;

    /* MATLAB Function: '<S11>/Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Asse B conv': '<S37>:1' */
    /* '<S37>:1:2' */
    StateFlowFinal_B.pos_B_conv_p = StateFlowFinal_B.Sum3 * 3.1415926535897931 /
      2048.0 / 40.0;

    /* MATLAB Function: '<S11>/Asse B' incorporates:
     *  Constant: '<Root>/Alzata B '
     *  Constant: '<Root>/Periodo B'
     */
    /* MATLAB Function 'Sistema Vite/Asse B': '<S36>:1' */
    /* '<S36>:1:3' */
    /* '<S36>:1:4' */
    x4 = StateFlowFinal_B.Sum2_m / StateFlowFinal_P.PeriodoB_Value;

    /* '<S36>:1:5' */
    /* '<S36>:1:6' */
    if ((x4 >= 0.0) && (x4 < 0.3)) {
      /* '<S36>:1:8' */
      /* '<S36>:1:10' */
      F = 4.7619047619047619 * x4;

      /* '<S36>:1:11' */
      B = x4 * x4 * 4.7619047619047619 / 2.0;
    } else if ((x4 >= 0.3) && (x4 < 0.7)) {
      /* '<S36>:1:12' */
      /* '<S36>:1:14' */
      F = 1.4285714285714286;

      /* '<S36>:1:15' */
      B = (x4 - 0.3) * 1.4285714285714286 + 0.21428571428571427;
    } else if ((x4 >= 0.7) && (x4 <= 1.0)) {
      /* '<S36>:1:16' */
      /* '<S36>:1:18' */
      /* '<S36>:1:19' */
      F = 1.4285714285714286 - (x4 - 0.7) * 4.7619047619047619;

      /* '<S36>:1:20' */
      B = ((x4 - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x4 - 0.7) *
        (x4 - 0.7) * 4.7619047619047619 / 2.0;
    } else {
      /* '<S36>:1:23' */
      F = 0.0;

      /* '<S36>:1:24' */
      B = 1.0000000000000002;
    }

    /* '<S36>:1:27' */
    StateFlowFinal_B.ldm_pos_n = B * StateFlowFinal_P.AlzataB_Value;

    /* '<S36>:1:28' */
    StateFlowFinal_B.ldm_vel_c = F * StateFlowFinal_P.AlzataB_Value /
      StateFlowFinal_P.PeriodoB_Value;

    /* End of MATLAB Function: '<S11>/Asse B' */

    /* Sum: '<S11>/Sum4' */
    StateFlowFinal_B.Sum4_l = StateFlowFinal_B.ldm_pos_n -
      StateFlowFinal_B.pos_B_conv_p;

    /* Gain: '<S11>/Gain2' */
    StateFlowFinal_B.Gain2 = StateFlowFinal_P.Gain2_Gain *
      StateFlowFinal_B.Sum4_l;

    /* MATLAB Function: '<S42>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse B conv': '<S48>:1' */
    /* '<S48>:1:2' */
    StateFlowFinal_B.vel_B_conv_d = StateFlowFinal_B.VelocityB_d *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Sum: '<S11>/Sum6' */
    StateFlowFinal_B.Sum6 = StateFlowFinal_B.ldm_vel_c -
      StateFlowFinal_B.vel_B_conv_d;

    /* Gain: '<S11>/Gain4' */
    StateFlowFinal_B.Gain4 = StateFlowFinal_P.Gain4_Gain * StateFlowFinal_B.Sum6;

    /* Sum: '<S11>/Sum7' */
    StateFlowFinal_B.Sum7_n = StateFlowFinal_B.Gain2 + StateFlowFinal_B.Gain4;

    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S33>/Constant'
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

    /* End of Switch: '<S33>/Switch1' */

    /* Saturate: '<S8>/Coppia A vite saturata' */
    f = StateFlowFinal_B.Switch1_h;
    F = StateFlowFinal_P.CoppiaAvitesaturata_LowerSat;
    J_p_idx_0 = StateFlowFinal_P.CoppiaAvitesaturata_UpperSat;
    if (f > J_p_idx_0) {
      StateFlowFinal_B.CoppiaAvitesaturata = J_p_idx_0;
    } else if (f < F) {
      StateFlowFinal_B.CoppiaAvitesaturata = F;
    } else {
      StateFlowFinal_B.CoppiaAvitesaturata = f;
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

    /* S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[27];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S33>/Data Type Conversion14' */
    StateFlowFinal_B.DataTypeConversion14_h =
      StateFlowFinal_B.EtherCATPDOReceive9_m;

    /* MATLAB Function: '<S33>/MATLAB Function' */
    StateFlowFinal_MATLABFunction(StateFlowFinal_B.Memory_d,
      StateFlowFinal_B.DataTypeConversion14_h,
      &StateFlowFinal_B.sf_MATLABFunction_fb);

    /* SampleTimeMath: '<S40>/TSamp'
     *
     * About '<S40>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp = StateFlowFinal_B.pos_B_conv_p *
      StateFlowFinal_P.TSamp_WtEt;

    /* UnitDelay: '<S40>/UD' */
    StateFlowFinal_B.Uk1 = StateFlowFinal_DW.UD_DSTATE;

    /* Sum: '<S40>/Diff' */
    StateFlowFinal_B.Diff = StateFlowFinal_B.TSamp - StateFlowFinal_B.Uk1;

    /* SampleTimeMath: '<S43>/TSamp'
     *
     * About '<S43>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_i = StateFlowFinal_B.Sum5 *
      StateFlowFinal_P.TSamp_WtEt_g;

    /* UnitDelay: '<S43>/UD' */
    StateFlowFinal_B.Uk1_p = StateFlowFinal_DW.UD_DSTATE_a;

    /* Sum: '<S43>/Diff' */
    StateFlowFinal_B.Diff_l = StateFlowFinal_B.TSamp_i - StateFlowFinal_B.Uk1_p;

    /* MATLAB Function: '<S12>/Cinematica diretta' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta': '<S52>:1' */
    /* '<S52>:1:2' */
    /* '<S52>:1:3' */
    /* '<S52>:1:6' */
    A = sin(StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4);
    J_p_idx_1 = -0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4))
      * 0.25;
    A = A * A * 0.0625 + J_p_idx_1 * J_p_idx_1;

    /* '<S52>:1:7' */
    J_p_idx_3 = -0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4))
      * 0.25;
    B = ((-0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) *
          0.25) * ((sin(StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4)) *
                   0.25) * (-0.18 - 0.5 * cos(StateFlowFinal_B.Sum7)) + (sin
          (StateFlowFinal_B.Sum7) - sin(StateFlowFinal_B.Sum4)) * -0.01125 *
         (cos(StateFlowFinal_B.Sum7) + cos(StateFlowFinal_B.Sum4))) - 0.5 * sin
      (StateFlowFinal_B.Sum7) * (J_p_idx_3 * J_p_idx_3);

    /* '<S52>:1:10' */
    x4 = cos(StateFlowFinal_B.Sum7) + cos(StateFlowFinal_B.Sum4);
    x5 = -0.18 - (cos(StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) *
      0.25;

    /*  Posizione Y end-effector */
    /* '<S52>:1:14' */
    B = (sqrt(B * B - ((x4 * x4 * 0.00050625 - (-0.18 - (cos
              (StateFlowFinal_B.Sum7) - cos(StateFlowFinal_B.Sum4)) * 0.25) *
                        ((cos(StateFlowFinal_B.Sum7) + cos(StateFlowFinal_B.Sum4))
                         * 0.0225) * (-0.18 - 0.5 * cos(StateFlowFinal_B.Sum7)))
                       + (0.045 * cos(StateFlowFinal_B.Sum7) + 0.0081) * (x5 *
            x5)) * (4.0 * A)) + -B) / (2.0 * A);

    /*  Posizione X end-effector */
    /* '<S52>:1:16' */
    StateFlowFinal_B.x_n = (B * 0.25 * (sin(StateFlowFinal_B.Sum7) - sin
      (StateFlowFinal_B.Sum4)) - (cos(StateFlowFinal_B.Sum7) + cos
      (StateFlowFinal_B.Sum4)) * 0.0225) / (-0.18 - (cos(StateFlowFinal_B.Sum7)
      - cos(StateFlowFinal_B.Sum4)) * 0.25);
    StateFlowFinal_B.y_k = B;

    /* MATLAB Function: '<S12>/Cinematica diretta Acc' */
    /* MATLAB Function 'Sistema_braccia/Cinematica diretta Acc': '<S53>:1' */
    /* '<S53>:1:3' */
    /* '<S53>:1:4' */
    /* '<S53>:1:6' */
    A = 0.25 * sin(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p;
    J_p_idx_1 = 0.25 * cos(StateFlowFinal_B.theta2) * StateFlowFinal_B.theta2_p;

    /* '<S53>:1:9' */
    J_p_idx_3 = 0.25 * sin(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p;
    x4 = 0.25 * cos(StateFlowFinal_B.theta1) * StateFlowFinal_B.theta1_p;
    B = ((((((0.5 * sin(StateFlowFinal_B.theta1) *
              StateFlowFinal_B.MultiportSwitch[2] * StateFlowFinal_B.theta1_p +
              StateFlowFinal_B.MultiportSwitch[2] *
              StateFlowFinal_B.MultiportSwitch[2]) + J_p_idx_3 * J_p_idx_3) +
            (0.25 * cos(StateFlowFinal_B.theta1) * (StateFlowFinal_B.theta1_p *
              StateFlowFinal_B.theta1_p) + 0.25 * sin(StateFlowFinal_B.theta1) *
             StateFlowFinal_B.theta1_pp) * ((StateFlowFinal_B.Sum + 0.09) - 0.25
             * cos(StateFlowFinal_B.theta1))) +
           StateFlowFinal_B.MultiportSwitch[3] *
           StateFlowFinal_B.MultiportSwitch[3]) - 0.5 * cos
          (StateFlowFinal_B.theta1) * StateFlowFinal_B.MultiportSwitch[3] *
          StateFlowFinal_B.theta1_p) + x4 * x4) + (0.25 * sin
      (StateFlowFinal_B.theta1) * (StateFlowFinal_B.theta1_p *
      StateFlowFinal_B.theta1_p) - 0.25 * cos(StateFlowFinal_B.theta1) *
      StateFlowFinal_B.theta1_pp) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1));

    /* '<S53>:1:12' */
    f = (((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2)) *
         B / ((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1))
         - (((((((0.5 * sin(StateFlowFinal_B.theta2) *
                  StateFlowFinal_B.MultiportSwitch[2] *
                  StateFlowFinal_B.theta2_p + StateFlowFinal_B.MultiportSwitch[2]
                  * StateFlowFinal_B.MultiportSwitch[2]) + A * A) + (0.25 * cos
               (StateFlowFinal_B.theta2) * (StateFlowFinal_B.theta2_p *
                StateFlowFinal_B.theta2_p) + 0.25 * sin(StateFlowFinal_B.theta2)
               * StateFlowFinal_B.theta2_pp) * ((StateFlowFinal_B.Sum - 0.09) -
               0.25 * cos(StateFlowFinal_B.theta2))) +
               StateFlowFinal_B.MultiportSwitch[3] *
               StateFlowFinal_B.MultiportSwitch[3]) - 0.5 * cos
              (StateFlowFinal_B.theta2) * StateFlowFinal_B.MultiportSwitch[3] *
              StateFlowFinal_B.theta2_p) + J_p_idx_1 * J_p_idx_1) + (0.25 * sin
           (StateFlowFinal_B.theta2) * (StateFlowFinal_B.theta2_p *
            StateFlowFinal_B.theta2_p) - 0.25 * cos(StateFlowFinal_B.theta2) *
           StateFlowFinal_B.theta2_pp) * (StateFlowFinal_B.Ymov - 0.25 * sin
           (StateFlowFinal_B.theta2)))) / ((StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) - ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos
      (StateFlowFinal_B.theta2)) / ((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos
      (StateFlowFinal_B.theta1)) * (StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1)));

    /* '<S53>:1:14' */
    StateFlowFinal_B.x_pp_f = ((StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta1)) * -f - B) / ((StateFlowFinal_B.Sum + 0.09) -
      0.25 * cos(StateFlowFinal_B.theta1));
    StateFlowFinal_B.y_pp_l = f;

    /* Sum: '<S12>/Sum2' */
    StateFlowFinal_B.Sum2_d = StateFlowFinal_B.x_pp_f -
      StateFlowFinal_B.MultiportSwitch[4];

    /* Sum: '<S12>/Sum3' */
    StateFlowFinal_B.Sum3_b = StateFlowFinal_B.y_pp_l -
      StateFlowFinal_B.MultiportSwitch[5];

    /* MATLAB Function: '<S12>/MATLAB Function2' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function2': '<S60>:1' */
    if (StateFlowFinal_B.Bool == 4.0) {
      /* '<S60>:1:2' */
      /* '<S60>:1:3' */
      StateFlowFinal_B.xp = StateFlowFinal_B.x_n;

      /* '<S60>:1:4' */
      StateFlowFinal_B.yp = StateFlowFinal_B.y_k;
    } else {
      /* '<S60>:1:6' */
      StateFlowFinal_B.xp = 0.0;

      /* '<S60>:1:7' */
      StateFlowFinal_B.yp = 0.0;
    }

    /* End of MATLAB Function: '<S12>/MATLAB Function2' */

    /* Gain: '<S12>/Kd1' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function3': '<S61>:1' */
    /* '<S61>:1:2' */
    /* '<S61>:1:3' */
    /* '<S61>:1:4' */
    /* '<S61>:1:5' */
    StateFlowFinal_B.Kd1[0] = StateFlowFinal_P.Kd1_Gain * StateFlowFinal_B.qdot
      [0];

    /* Gain: '<S12>/Kp1' */
    StateFlowFinal_B.Kp1[0] = StateFlowFinal_P.Kp1_Gain * StateFlowFinal_B.q[0];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    StateFlowFinal_B.csiH[0] = StateFlowFinal_B.q[0];
    StateFlowFinal_B.csiH[2] = StateFlowFinal_B.qdot[0];

    /* Gain: '<S12>/Kd1' */
    StateFlowFinal_B.Kd1[1] = StateFlowFinal_P.Kd1_Gain * StateFlowFinal_B.qdot
      [1];

    /* Gain: '<S12>/Kp1' */
    StateFlowFinal_B.Kp1[1] = StateFlowFinal_P.Kp1_Gain * StateFlowFinal_B.q[1];

    /* MATLAB Function: '<S12>/MATLAB Function3' */
    StateFlowFinal_B.csiH[1] = StateFlowFinal_B.q[1];
    StateFlowFinal_B.csiH[3] = StateFlowFinal_B.qdot[1];

    /* '<S61>:1:6' */
    A = 2.2250738585072014E-308;
    f = fabs(StateFlowFinal_B.csiH[0]);
    if (f > 2.2250738585072014E-308) {
      B = 1.0;
      A = f;
    } else {
      x4 = f / 2.2250738585072014E-308;
      B = x4 * x4;
    }

    f = fabs(StateFlowFinal_B.csiH[1]);
    if (f > A) {
      x4 = A / f;
      B = B * x4 * x4 + 1.0;
      A = f;
    } else {
      x4 = f / A;
      B += x4 * x4;
    }

    f = fabs(StateFlowFinal_B.csiH[2]);
    if (f > A) {
      x4 = A / f;
      B = B * x4 * x4 + 1.0;
      A = f;
    } else {
      x4 = f / A;
      B += x4 * x4;
    }

    f = fabs(StateFlowFinal_B.csiH[3]);
    if (f > A) {
      x4 = A / f;
      B = B * x4 * x4 + 1.0;
      A = f;
    } else {
      x4 = f / A;
      B += x4 * x4;
    }

    B = A * sqrt(B);

    /* '<S61>:1:7' */
    StateFlowFinal_B.phi = (0.002 * B + 0.0005) + B * B * -1.5E-6;

    /* MATLAB Function: '<S12>/MATLAB Function4' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Function4': '<S62>:1' */
    /* '<S62>:1:27' */
    /* '<S62>:1:13' */
    /* '<S62>:1:27' */
    /*  Il risultato &#xE8; una 2x1 [2x4][4x4][4x1] */
    /* '<S62>:1:28' */
    B = 0.0;
    A = 2.2250738585072014E-308;
    for (bitIdx = 0; bitIdx < 2; bitIdx++) {
      StateFlowFinal_B.z[bitIdx] = 0.0;
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx] * StateFlowFinal_B.csiH[0];
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx + 2] * StateFlowFinal_B.csiH[1];
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx + 4] * StateFlowFinal_B.csiH[2];
      StateFlowFinal_B.z[bitIdx] += b_a[bitIdx + 6] * StateFlowFinal_B.csiH[3];
      f = fabs(StateFlowFinal_B.z[bitIdx]);
      if (f > A) {
        x4 = A / f;
        B = B * x4 * x4 + 1.0;
        A = f;
      } else {
        x4 = f / A;
        B += x4 * x4;
      }
    }

    B = A * sqrt(B);

    /* y = theta_pp + K*csiH+omega; */
    /* eta = (eye(2)-M^-1*Mhat)*y-M^-1*ntilde; */
    /* '<S62>:1:36' */
    /* '<S62>:1:37' */
    /* '<S62>:1:38' */
    /* '<S62>:1:39' */
    A = StateFlowFinal_norm_n(StateFlowFinal_B.csiH);
    A = (39.619574132744681 * StateFlowFinal_norm_n(StateFlowFinal_B.csiH) +
         9.6405136097991448) + A * A * -0.27679543903127646;

    /* '<S62>:1:41' */
    StateFlowFinal_B.rho = A;
    StateFlowFinal_B.omega[0] = StateFlowFinal_B.z[0] / B * A;
    StateFlowFinal_B.omega[1] = StateFlowFinal_B.z[1] / B * A;

    /* End of MATLAB Function: '<S12>/MATLAB Function4' */

    /* MATLAB Function: '<S12>/MATLAB Jin' */
    /* MATLAB Function 'Sistema_braccia/MATLAB Jin': '<S63>:1' */
    /* '<S63>:1:3' */
    /* '<S63>:1:4' */
    /* '<S63>:1:6' */
    /* '<S63>:1:8' */
    /* '<S63>:1:10' */
    A = (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta1)) -
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) *
      ((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2));

    /* '<S63>:1:12' */
    x4 = (((StateFlowFinal_B.Sum + 0.09) - 0.25 * cos(StateFlowFinal_B.theta1)) *
          (-0.25 * sin(StateFlowFinal_B.theta1)) + (StateFlowFinal_B.Ymov - 0.25
           * sin(StateFlowFinal_B.theta1)) * (0.25 * cos(StateFlowFinal_B.theta1)))
      / A;

    /* '<S63>:1:14' */
    A = ((StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) * (-0.25 *
          cos(StateFlowFinal_B.theta2)) * ((StateFlowFinal_B.Sum + 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta1)) / ((StateFlowFinal_B.Sum - 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta2)) + ((StateFlowFinal_B.Sum + 0.09) - 0.25 *
          cos(StateFlowFinal_B.theta1)) * (0.25 * sin(StateFlowFinal_B.theta2)))
      / A;

    /* '<S63>:1:16' */
    /* '<S63>:1:18' */
    /* '<S63>:1:20' */
    StateFlowFinal_B.x_p = ((-(StateFlowFinal_B.Ymov - 0.25 * sin
      (StateFlowFinal_B.theta2)) / ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos
      (StateFlowFinal_B.theta2)) * A - 0.25 * sin(StateFlowFinal_B.theta2)) +
      (StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2)) *
      (0.25 * cos(StateFlowFinal_B.theta2))) * StateFlowFinal_B.theta2_p +
      -(StateFlowFinal_B.Ymov - 0.25 * sin(StateFlowFinal_B.theta2)) /
      ((StateFlowFinal_B.Sum - 0.09) - 0.25 * cos(StateFlowFinal_B.theta2)) * x4
      * StateFlowFinal_B.theta1_p;

    /* '<S63>:1:21' */
    StateFlowFinal_B.y_p = x4 * StateFlowFinal_B.theta1_p + A *
      StateFlowFinal_B.theta2_p;

    /* SampleTimeMath: '<S83>/TSamp'
     *
     * About '<S83>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_e = StateFlowFinal_B.Sum7 *
      StateFlowFinal_P.TSamp_WtEt_m;

    /* UnitDelay: '<S83>/UD' */
    StateFlowFinal_B.Uk1_l = StateFlowFinal_DW.UD_DSTATE_g;

    /* Sum: '<S83>/Diff' */
    StateFlowFinal_B.Diff_f = StateFlowFinal_B.TSamp_e - StateFlowFinal_B.Uk1_l;

    /* Gain: '<S94>/D*u(k)' */
    StateFlowFinal_B.Duk = StateFlowFinal_P.Duk_Gain * StateFlowFinal_B.Sum7;

    /* UnitDelay: '<S94>/Delay_x1' */
    StateFlowFinal_B.x1k = StateFlowFinal_DW.Delay_x1_DSTATE;

    /* Gain: '<S97>/C11' */
    StateFlowFinal_B.C11 = StateFlowFinal_P.C11_Gain * StateFlowFinal_B.x1k;

    /* UnitDelay: '<S94>/Delay_x2' */
    StateFlowFinal_B.x2k = StateFlowFinal_DW.Delay_x2_DSTATE;

    /* Gain: '<S97>/C12' */
    StateFlowFinal_B.C12 = StateFlowFinal_P.C12_Gain * StateFlowFinal_B.x2k;

    /* Sum: '<S97>/sum2' */
    StateFlowFinal_B.sum2 = StateFlowFinal_B.C11 + StateFlowFinal_B.C12;

    /* Sum: '<S94>/C*X(k)+D*u(k)' */
    StateFlowFinal_B.yk = StateFlowFinal_B.Duk + StateFlowFinal_B.sum2;

    /* SampleTimeMath: '<S81>/TSamp'
     *
     * About '<S81>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_n = StateFlowFinal_B.yk *
      StateFlowFinal_P.TSamp_WtEt_e;

    /* UnitDelay: '<S81>/UD' */
    StateFlowFinal_B.Uk1_d = StateFlowFinal_DW.UD_DSTATE_a3;

    /* Sum: '<S81>/Diff' */
    StateFlowFinal_B.Diff_i = StateFlowFinal_B.TSamp_n - StateFlowFinal_B.Uk1_d;

    /* Gain: '<S95>/A11' */
    StateFlowFinal_B.A11 = StateFlowFinal_P.A11_Gain * StateFlowFinal_B.x1k;

    /* Gain: '<S95>/A12' */
    StateFlowFinal_B.A12 = StateFlowFinal_P.A12_Gain * StateFlowFinal_B.x2k;

    /* Gain: '<S95>/A21' */
    StateFlowFinal_B.A21 = StateFlowFinal_P.A21_Gain * StateFlowFinal_B.x1k;

    /* Gain: '<S95>/A22' */
    StateFlowFinal_B.A22 = StateFlowFinal_P.A22_Gain * StateFlowFinal_B.x2k;

    /* Sum: '<S95>/sum2' */
    StateFlowFinal_B.sum2_n = StateFlowFinal_B.A11 + StateFlowFinal_B.A12;

    /* Sum: '<S95>/sum3' */
    StateFlowFinal_B.sum3 = StateFlowFinal_B.A21 + StateFlowFinal_B.A22;

    /* Gain: '<S96>/B11' */
    StateFlowFinal_B.B11 = StateFlowFinal_P.B11_Gain * StateFlowFinal_B.Sum7;

    /* Sum: '<S94>/A*x1(k) + B*u1(k) ' */
    StateFlowFinal_B.x1k1 = StateFlowFinal_B.sum2_n + StateFlowFinal_B.B11;

    /* Gain: '<S96>/B21' */
    StateFlowFinal_B.B21 = StateFlowFinal_P.B21_Gain * StateFlowFinal_B.Sum7;

    /* Sum: '<S94>/A*x2(k) + B*u2(k)' */
    StateFlowFinal_B.x2k1 = StateFlowFinal_B.sum3 + StateFlowFinal_B.B21;

    /* Gain: '<S90>/D*u(k)' */
    StateFlowFinal_B.Duk_h = StateFlowFinal_P.Duk_Gain_h * StateFlowFinal_B.Sum4;

    /* UnitDelay: '<S90>/Delay_x1' */
    StateFlowFinal_B.x1k_a = StateFlowFinal_DW.Delay_x1_DSTATE_g;

    /* Gain: '<S93>/C11' */
    StateFlowFinal_B.C11_h = StateFlowFinal_P.C11_Gain_n *
      StateFlowFinal_B.x1k_a;

    /* UnitDelay: '<S90>/Delay_x2' */
    StateFlowFinal_B.x2k_g = StateFlowFinal_DW.Delay_x2_DSTATE_m;

    /* Gain: '<S93>/C12' */
    StateFlowFinal_B.C12_e = StateFlowFinal_P.C12_Gain_d *
      StateFlowFinal_B.x2k_g;

    /* Sum: '<S93>/sum2' */
    StateFlowFinal_B.sum2_k = StateFlowFinal_B.C11_h + StateFlowFinal_B.C12_e;

    /* Sum: '<S90>/C*X(k)+D*u(k)' */
    StateFlowFinal_B.yk_i = StateFlowFinal_B.Duk_h + StateFlowFinal_B.sum2_k;

    /* SampleTimeMath: '<S82>/TSamp'
     *
     * About '<S82>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_h = StateFlowFinal_B.yk_i *
      StateFlowFinal_P.TSamp_WtEt_gz;

    /* UnitDelay: '<S82>/UD' */
    StateFlowFinal_B.Uk1_b = StateFlowFinal_DW.UD_DSTATE_j;

    /* Sum: '<S82>/Diff' */
    StateFlowFinal_B.Diff_d = StateFlowFinal_B.TSamp_h - StateFlowFinal_B.Uk1_b;

    /* SampleTimeMath: '<S84>/TSamp'
     *
     * About '<S84>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_nd = StateFlowFinal_B.Sum4 *
      StateFlowFinal_P.TSamp_WtEt_gh;

    /* UnitDelay: '<S84>/UD' */
    StateFlowFinal_B.Uk1_ll = StateFlowFinal_DW.UD_DSTATE_f;

    /* Sum: '<S84>/Diff' */
    StateFlowFinal_B.Diff_n = StateFlowFinal_B.TSamp_nd -
      StateFlowFinal_B.Uk1_ll;

    /* Gain: '<S91>/A11' */
    StateFlowFinal_B.A11_p = StateFlowFinal_P.A11_Gain_e *
      StateFlowFinal_B.x1k_a;

    /* Gain: '<S91>/A12' */
    StateFlowFinal_B.A12_c = StateFlowFinal_P.A12_Gain_a *
      StateFlowFinal_B.x2k_g;

    /* Gain: '<S91>/A21' */
    StateFlowFinal_B.A21_h = StateFlowFinal_P.A21_Gain_m *
      StateFlowFinal_B.x1k_a;

    /* Gain: '<S91>/A22' */
    StateFlowFinal_B.A22_d = StateFlowFinal_P.A22_Gain_g *
      StateFlowFinal_B.x2k_g;

    /* Sum: '<S91>/sum2' */
    StateFlowFinal_B.sum2_nk = StateFlowFinal_B.A11_p + StateFlowFinal_B.A12_c;

    /* Sum: '<S91>/sum3' */
    StateFlowFinal_B.sum3_e = StateFlowFinal_B.A21_h + StateFlowFinal_B.A22_d;

    /* Gain: '<S92>/B11' */
    StateFlowFinal_B.B11_k = StateFlowFinal_P.B11_Gain_f * StateFlowFinal_B.Sum4;

    /* Sum: '<S90>/A*x1(k) + B*u1(k) ' */
    StateFlowFinal_B.x1k1_g = StateFlowFinal_B.sum2_nk + StateFlowFinal_B.B11_k;

    /* Gain: '<S92>/B21' */
    StateFlowFinal_B.B21_l = StateFlowFinal_P.B21_Gain_p * StateFlowFinal_B.Sum4;

    /* Sum: '<S90>/A*x2(k) + B*u2(k)' */
    StateFlowFinal_B.x2k1_n = StateFlowFinal_B.sum3_e + StateFlowFinal_B.B21_l;

    /* DigitalClock: '<S65>/Digital Clock' */
    StateFlowFinal_B.DigitalClock = StateFlowFinal_M->Timing.t[1];

    /* Gain: '<S98>/D*u(k)' */
    StateFlowFinal_B.Duk_n = StateFlowFinal_P.Duk_Gain_g *
      StateFlowFinal_B.DigitalClock;

    /* UnitDelay: '<S98>/Delay_x1' */
    StateFlowFinal_B.x1k_i = StateFlowFinal_DW.Delay_x1_DSTATE_k;

    /* Gain: '<S101>/C11' */
    StateFlowFinal_B.C11_e = StateFlowFinal_P.C11_Gain_g *
      StateFlowFinal_B.x1k_i;

    /* UnitDelay: '<S98>/Delay_x2' */
    StateFlowFinal_B.x2k_d = StateFlowFinal_DW.Delay_x2_DSTATE_k;

    /* Gain: '<S101>/C12' */
    StateFlowFinal_B.C12_m = StateFlowFinal_P.C12_Gain_d1 *
      StateFlowFinal_B.x2k_d;

    /* Sum: '<S101>/sum2' */
    StateFlowFinal_B.sum2_ka = StateFlowFinal_B.C11_e + StateFlowFinal_B.C12_m;

    /* Sum: '<S98>/C*X(k)+D*u(k)' */
    StateFlowFinal_B.yk_m = StateFlowFinal_B.Duk_n + StateFlowFinal_B.sum2_ka;

    /* SampleTimeMath: '<S85>/TSamp'
     *
     * About '<S85>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_f = StateFlowFinal_B.yk_m *
      StateFlowFinal_P.TSamp_WtEt_d;

    /* UnitDelay: '<S85>/UD' */
    StateFlowFinal_B.Uk1_j = StateFlowFinal_DW.UD_DSTATE_g0;

    /* Sum: '<S85>/Diff' */
    StateFlowFinal_B.Diff_b = StateFlowFinal_B.TSamp_f - StateFlowFinal_B.Uk1_j;

    /* SampleTimeMath: '<S86>/TSamp'
     *
     * About '<S86>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    StateFlowFinal_B.TSamp_iq = StateFlowFinal_B.DigitalClock *
      StateFlowFinal_P.TSamp_WtEt_p;

    /* UnitDelay: '<S86>/UD' */
    StateFlowFinal_B.Uk1_bl = StateFlowFinal_DW.UD_DSTATE_k;

    /* Sum: '<S86>/Diff' */
    StateFlowFinal_B.Diff_bt = StateFlowFinal_B.TSamp_iq -
      StateFlowFinal_B.Uk1_bl;

    /* Gain: '<S99>/A11' */
    StateFlowFinal_B.A11_h = StateFlowFinal_P.A11_Gain_h *
      StateFlowFinal_B.x1k_i;

    /* Gain: '<S99>/A12' */
    StateFlowFinal_B.A12_g = StateFlowFinal_P.A12_Gain_a3 *
      StateFlowFinal_B.x2k_d;

    /* Gain: '<S99>/A21' */
    StateFlowFinal_B.A21_p = StateFlowFinal_P.A21_Gain_f *
      StateFlowFinal_B.x1k_i;

    /* Gain: '<S99>/A22' */
    StateFlowFinal_B.A22_j = StateFlowFinal_P.A22_Gain_d *
      StateFlowFinal_B.x2k_d;

    /* Sum: '<S99>/sum2' */
    StateFlowFinal_B.sum2_e = StateFlowFinal_B.A11_h + StateFlowFinal_B.A12_g;

    /* Sum: '<S99>/sum3' */
    StateFlowFinal_B.sum3_b = StateFlowFinal_B.A21_p + StateFlowFinal_B.A22_j;

    /* Gain: '<S100>/B11' */
    StateFlowFinal_B.B11_d = StateFlowFinal_P.B11_Gain_n *
      StateFlowFinal_B.DigitalClock;

    /* Sum: '<S98>/A*x1(k) + B*u1(k) ' */
    StateFlowFinal_B.x1k1_h = StateFlowFinal_B.sum2_e + StateFlowFinal_B.B11_d;

    /* Gain: '<S100>/B21' */
    StateFlowFinal_B.B21_h = StateFlowFinal_P.B21_Gain_l *
      StateFlowFinal_B.DigitalClock;

    /* Sum: '<S98>/A*x2(k) + B*u2(k)' */
    StateFlowFinal_B.x2k1_h = StateFlowFinal_B.sum3_b + StateFlowFinal_B.B21_h;

    /* Gain: '<S66>/Gain' */
    StateFlowFinal_B.Gain_p = StateFlowFinal_P.Gain_Gain_c *
      StateFlowFinal_B.theta1;

    /* Gain: '<S67>/Gain' */
    StateFlowFinal_B.Gain_n = StateFlowFinal_P.Gain_Gain_d *
      StateFlowFinal_B.theta2;

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

  /* Update for Memory: '<S27>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_o =
    StateFlowFinal_B.sf_MATLABFunction_a.y;

  /* Update for Memory: '<S31>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_g =
    StateFlowFinal_B.sf_MATLABFunction_f.y;

  /* Update for Memory: '<S33>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_a =
    StateFlowFinal_B.sf_MATLABFunction_fb.y;

  /* Update for UnitDelay: '<S40>/UD' */
  StateFlowFinal_DW.UD_DSTATE = StateFlowFinal_B.TSamp;

  /* Update for UnitDelay: '<S43>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a = StateFlowFinal_B.TSamp_i;

  /* Update for UnitDelay: '<S83>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g = StateFlowFinal_B.TSamp_e;

  /* Update for UnitDelay: '<S94>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE = StateFlowFinal_B.x1k1;

  /* Update for UnitDelay: '<S94>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE = StateFlowFinal_B.x2k1;

  /* Update for UnitDelay: '<S81>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a3 = StateFlowFinal_B.TSamp_n;

  /* Update for UnitDelay: '<S90>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_g = StateFlowFinal_B.x1k1_g;

  /* Update for UnitDelay: '<S90>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_m = StateFlowFinal_B.x2k1_n;

  /* Update for UnitDelay: '<S82>/UD' */
  StateFlowFinal_DW.UD_DSTATE_j = StateFlowFinal_B.TSamp_h;

  /* Update for UnitDelay: '<S84>/UD' */
  StateFlowFinal_DW.UD_DSTATE_f = StateFlowFinal_B.TSamp_nd;

  /* Update for UnitDelay: '<S98>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_k = StateFlowFinal_B.x1k1_h;

  /* Update for UnitDelay: '<S98>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_k = StateFlowFinal_B.x2k1_h;

  /* Update for UnitDelay: '<S85>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g0 = StateFlowFinal_B.TSamp_f;

  /* Update for UnitDelay: '<S86>/UD' */
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

    /* Start for Constant: '<Root>/Kp' */
    StateFlowFinal_B.Kp = StateFlowFinal_P.Kp_Value;

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

    /* Start for S-Function (xpcethercatpdorx): '<S69>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S69>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S69>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S69>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S68>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S68>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S68>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S68>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
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

    /* Start for S-Function (xpcethercatpdorx): '<S27>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S27>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
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

    /* Start for S-Function (xpcethercatpdorx): '<S31>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S31>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
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

    /* Start for S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = StateFlowFinal_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* InitializeConditions for Memory: '<S23>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput = StateFlowFinal_P.Memory_X0;

  /* InitializeConditions for Memory: '<S27>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_o = StateFlowFinal_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S31>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_g = StateFlowFinal_P.Memory_X0_o;

  /* InitializeConditions for Memory: '<S33>/Memory' */
  StateFlowFinal_DW.Memory_PreviousInput_a = StateFlowFinal_P.Memory_X0_a;

  /* InitializeConditions for UnitDelay: '<S40>/UD' */
  StateFlowFinal_DW.UD_DSTATE = StateFlowFinal_P.DiscreteDerivativeB_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S43>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a =
    StateFlowFinal_P.DiscreteDerivativeA_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S83>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g =
    StateFlowFinal_P.DiscreteDerivativeB2_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S94>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE = StateFlowFinal_P.Delay_x1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S94>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE = StateFlowFinal_P.Delay_x2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S81>/UD' */
  StateFlowFinal_DW.UD_DSTATE_a3 =
    StateFlowFinal_P.DiscreteDerivativeB_ICPrevSca_m;

  /* InitializeConditions for UnitDelay: '<S90>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_g =
    StateFlowFinal_P.Delay_x1_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S90>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_m =
    StateFlowFinal_P.Delay_x2_InitialCondition_l;

  /* InitializeConditions for UnitDelay: '<S82>/UD' */
  StateFlowFinal_DW.UD_DSTATE_j =
    StateFlowFinal_P.DiscreteDerivativeB1_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S84>/UD' */
  StateFlowFinal_DW.UD_DSTATE_f =
    StateFlowFinal_P.DiscreteDerivativeB3_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S98>/Delay_x1' */
  StateFlowFinal_DW.Delay_x1_DSTATE_k =
    StateFlowFinal_P.Delay_x1_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S98>/Delay_x2' */
  StateFlowFinal_DW.Delay_x2_DSTATE_k =
    StateFlowFinal_P.Delay_x2_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S85>/UD' */
  StateFlowFinal_DW.UD_DSTATE_g0 =
    StateFlowFinal_P.DiscreteDerivativeB4_ICPrevScal;

  /* InitializeConditions for UnitDelay: '<S86>/UD' */
  StateFlowFinal_DW.UD_DSTATE_k =
    StateFlowFinal_P.DiscreteDerivativeB5_ICPrevScal;

  /* SystemInitialize for Chart: '<Root>/State flow robot' */
  StateFlowFinal_DW.sfEvent = -1;
  StateFlowFinal_DW.temporalCounter_i1 = 0U;
  StateFlowFinal_DW.is_active_c15_StateFlowFinal = 0U;
  StateFlowFinal_DW.is_c15_StateFlowFinal = StateFlowFin_IN_NO_ACTIVE_CHILD;
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S69>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S69>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S69>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S69>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S68>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S68>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S68>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S68>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S27>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S27>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = StateFlowFinal_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S31>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S31>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
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

  /* Terminate for S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S69>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S69>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S68>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S68>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S27>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S42>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S42>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S31>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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

    /* Level2 S-Function Block: StateFlowFinal/<S33>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
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
  StateFlowFinal_M->Sizes.numBlocks = (382);/* Number of blocks */
  StateFlowFinal_M->Sizes.numBlockIO = (284);/* Number of block outputs */
  StateFlowFinal_M->Sizes.numBlockPrms = (1754);/* Sum of parameter "widths" */
  return StateFlowFinal_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
