/*
 * State_Flow_vel.c
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

#include "rt_logging_mmi.h"
#include "State_Flow_vel_capi.h"
#include "State_Flow_vel.h"
#include "State_Flow_vel_private.h"

/* Named constants for Chart: '<Root>/State flow robot' */
#define State_Flow_v_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define State_Flow_vel_IN_Controllo    ((uint8_T)1U)
#define State_Flow_vel_IN_Coppie       ((uint8_T)2U)
#define State_Flow_vel_IN_Discesa_Vite ((uint8_T)3U)
#define State_Flow_vel_IN_Home         ((uint8_T)4U)
#define State_Flow_vel_IN_OffSet       ((uint8_T)5U)
#define State_Flow_vel_IN_SetA         ((uint8_T)6U)
#define State_Flow_vel_IN_SetA1        ((uint8_T)7U)
#define State_Flow_vel_IN_SetB         ((uint8_T)8U)
#define State_Flow_vel_IN_SetB1        ((uint8_T)9U)
#define State_Flow_vel_IN_Step1        ((uint8_T)10U)
#define State_Flow_vel_IN_Step2        ((uint8_T)11U)
#define State_Flow_vel_IN_Traiettoria  ((uint8_T)12U)

/* Block signals (auto storage) */
B_State_Flow_vel_T State_Flow_vel_B;

/* Block states (auto storage) */
DW_State_Flow_vel_T State_Flow_vel_DW;

/* Real-time model */
RT_MODEL_State_Flow_vel_T State_Flow_vel_M_;
RT_MODEL_State_Flow_vel_T *const State_Flow_vel_M = &State_Flow_vel_M_;

/* Forward declaration for local functions */
static real_T State_Flow_vel_mpower(real_T a);
static void State_Flow_vel_emxInit_real_T(emxArray_real_T_State_Flow_ve_T
  **pEmxArray, int32_T numDimensions);
static void State_Flow_ve_emxEnsureCapacity(emxArray__common_State_Flow_v_T
  *emxArray, int32_T oldNumel, uint32_T elementSize);
static void State_Flow_vel_emxFree_real_T(emxArray_real_T_State_Flow_ve_T
  **pEmxArray);

/*
 * Output and update for atomic system:
 *    '<S33>/Vel Asse A conv'
 *    '<S17>/Vel Asse A conv'
 */
void State_Flow_vel_VelAsseAconv(real_T rtu_vA, B_VelAsseAconv_State_Flow_vel_T *
  localB)
{
  /* MATLAB Function 'Movimento Braccia/Velocita vite /Vel Asse A conv': '<S38>:1' */
  /* '<S38>:1:2' */
  localB->vel_A_conv = rtu_vA * 6.2831853071795862 / 163840.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S33>/Vel Asse B conv'
 *    '<S17>/Vel Asse B conv'
 */
void State_Flow_vel_VelAsseBconv(real_T rtu_p, B_VelAsseBconv_State_Flow_vel_T
  *localB)
{
  /* MATLAB Function 'Movimento Braccia/Velocita vite /Vel Asse B conv': '<S39>:1' */
  /* '<S39>:1:2' */
  localB->vel_B_conv = rtu_p * 6.2831853071795862 / 163840.0 / 64.0;
}

/*
 * Output and update for atomic system:
 *    '<S40>/MATLAB Function'
 *    '<S42>/MATLAB Function'
 *    '<S44>/MATLAB Function'
 *    '<S46>/MATLAB Function'
 */
void State_Flow_vel_MATLABFunction(real_T rtu_now, real_T rtu_old,
  B_MATLABFunction_State_Flow_v_T *localB)
{
  /* MATLAB Function 'Out Asse A Braccia/Fungo/MATLAB Function': '<S41>:1' */
  if ((rtu_old == 0.0) && (rtu_now == 1.0)) {
    /* '<S41>:1:2' */
    /* '<S41>:1:3' */
    localB->y = 1.0;
  } else {
    /* '<S41>:1:5' */
    localB->y = rtu_old;
  }
}

/*
 * Output and update for atomic system:
 *    '<S14>/Asse B'
 *    '<S14>/Rifermento Asse A Vite'
 */
void State_Flow_vel_AsseB(real_T rtu_t, real_T rtu_h, real_T rtu_T,
  B_AsseB_State_Flow_vel_T *localB)
{
  real_T x;
  real_T F;

  /* MATLAB Function 'Sistema Vite/Asse B': '<S59>:1' */
  /* '<S59>:1:3' */
  /* '<S59>:1:4' */
  x = rtu_t / rtu_T;

  /* '<S59>:1:5' */
  /* '<S59>:1:6' */
  if ((x >= 0.0) && (x < 0.3)) {
    /* '<S59>:1:8' */
    /* '<S59>:1:10' */
    F = 4.7619047619047619 * x;

    /* '<S59>:1:11' */
    x = x * x * 4.7619047619047619 / 2.0;
  } else if ((x >= 0.3) && (x < 0.7)) {
    /* '<S59>:1:12' */
    /* '<S59>:1:14' */
    F = 1.4285714285714286;

    /* '<S59>:1:15' */
    x = (x - 0.3) * 1.4285714285714286 + 0.21428571428571427;
  } else if ((x >= 0.7) && (x <= 1.0)) {
    /* '<S59>:1:16' */
    /* '<S59>:1:18' */
    /* '<S59>:1:19' */
    F = 1.4285714285714286 - (x - 0.7) * 4.7619047619047619;

    /* '<S59>:1:20' */
    x = ((x - 0.7) * 1.4285714285714286 + 0.78571428571428581) - (x - 0.7) * (x
      - 0.7) * 4.7619047619047619 / 2.0;
  } else {
    /* '<S59>:1:23' */
    F = 0.0;

    /* '<S59>:1:24' */
    x = 1.0000000000000002;
  }

  /* '<S59>:1:27' */
  localB->ldm_pos = x * rtu_h;

  /* '<S59>:1:28' */
  localB->ldm_vel = F * rtu_h / rtu_T;
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

/* Function for MATLAB Function: '<S4>/Quadrato' */
static real_T State_Flow_vel_mpower(real_T a)
{
  real_T c;
  c = rt_powd_snf(a, 3.0);
  return c;
}

static void State_Flow_vel_emxInit_real_T(emxArray_real_T_State_Flow_ve_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_State_Flow_ve_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_State_Flow_ve_T *)malloc(sizeof
    (emxArray_real_T_State_Flow_ve_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc((uint32_T)(sizeof(int32_T) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void State_Flow_ve_emxEnsureCapacity(emxArray__common_State_Flow_v_T
  *emxArray, int32_T oldNumel, uint32_T elementSize)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, elementSize * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void State_Flow_vel_emxFree_real_T(emxArray_real_T_State_Flow_ve_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_State_Flow_ve_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T_State_Flow_ve_T *)NULL;
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

/* Model output function */
static void State_Flow_vel_output(void)
{
  int32_T bitIdx;
  int32_T i;
  uint32_T u;
  boolean_T sf_internal_predicateOutput;
  real_T x1;
  real_T x2;
  real_T x3;
  real_T x4;
  real_T x5;
  real_T F;
  emxArray_real_T_State_Flow_ve_T *Y1;
  emxArray_real_T_State_Flow_ve_T *Y2;
  real_T J_idx_2;
  real_T J_idx_1;
  real_T c_idx_0;

  {
    /* user code (Output function Header) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init  Process Received Frames ------------*/
      int32_T data[6]= { 0 };

      int32_T msdata[4] = { 0 };

      xpcEtherCATReadProcessData(0,NULL);
      mwErrorGet((int_T)0,
                 &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
      memcpy(&State_Flow_vel_B.EtherCATInit[0], data,6*sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    /* Reset subsysRan breadcrumbs */
    srClearBC(State_Flow_vel_DW.Homing_SubsysRanBC);

    /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/Asse A braccia'
     */
    x1 = floor(State_Flow_vel_P.AsseAbraccia_Value);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 256.0);
    }

    State_Flow_vel_B.DataTypeConversion7 = (int8_T)(x1 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x1 : (int32_T)(int8_T)(uint8_T)x1);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion7' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Asse A vite'
     */
    x1 = floor(State_Flow_vel_P.AsseAvite_Value);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 256.0);
    }

    State_Flow_vel_B.DataTypeConversion2 = (int8_T)(x1 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x1 : (int32_T)(int8_T)(uint8_T)x1);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/Asse B braccia'
     */
    x1 = floor(State_Flow_vel_P.AsseBbraccia_Value);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 256.0);
    }

    State_Flow_vel_B.DataTypeConversion5 = (int8_T)(x1 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x1 : (int32_T)(int8_T)(uint8_T)x1);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion5' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/Asse B vite'
     */
    x1 = floor(State_Flow_vel_P.AsseBvite_Value);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 256.0);
    }

    State_Flow_vel_B.DataTypeConversion1 = (int8_T)(x1 < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-x1 : (int32_T)(int8_T)(uint8_T)x1);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

    /* S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */

    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    /* Clock: '<Root>/Clock' */
    State_Flow_vel_B.Clock = State_Flow_vel_M->Timing.t[0];

    /* S-Function (xpcethercatpdorx): '<S12>/Motore vite A' */

    /* Level2 S-Function Block: '<S12>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S12>/convert' */
    State_Flow_vel_B.convert = State_Flow_vel_B.MotoreviteA;

    /* S-Function (xpcethercatpdorx): '<S12>/Motore vite B' */

    /* Level2 S-Function Block: '<S12>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S12>/convert 10 ' */
    State_Flow_vel_B.convert10 = State_Flow_vel_B.MotoreviteB;

    /* S-Function (xpcethercatpdorx): '<S16>/Status Word' */

    /* Level2 S-Function Block: '<S16>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S16>/Data Type Conversion6' */
    State_Flow_vel_B.DataTypeConversion6 = State_Flow_vel_B.StatusWord;

    /* S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[7];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion8' */
    State_Flow_vel_B.DataTypeConversion8 = State_Flow_vel_B.EtherCATPDOReceive16;

    /* S-Function (scominttobit): '<S1>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      u = (uint32_T)State_Flow_vel_B.DataTypeConversion8;
      for (i = 0; i < 16; i++) {
        State_Flow_vel_B.IntegertoBitConverter[bitIdx] = (int32_T)u & 1;
        u >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S1>/Integer to Bit Converter' */

    /* S-Function (xpcethercatpdorx): '<S11>/Motore braccia A' */

    /* Level2 S-Function Block: '<S11>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S11>/convert' */
    State_Flow_vel_B.convert_g = State_Flow_vel_B.MotorebracciaA;

    /* S-Function (xpcethercatpdorx): '<S11>/Motore braccia B' */

    /* Level2 S-Function Block: '<S11>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S11>/convert 10 ' */
    State_Flow_vel_B.convert10_d = State_Flow_vel_B.MotorebracciaB;

    /* S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */

    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[10];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S2>/Data Type Conversion8' */
    State_Flow_vel_B.DataTypeConversion8_f =
      State_Flow_vel_B.EtherCATPDOReceive16_d;

    /* S-Function (scominttobit): '<S2>/Integer to Bit Converter' */
    /* Integer to Bit Conversion */
    bitIdx = 0;
    i = 0;
    while (i < 1) {
      u = (uint32_T)State_Flow_vel_B.DataTypeConversion8_f;
      for (i = 0; i < 16; i++) {
        State_Flow_vel_B.IntegertoBitConverter_d[bitIdx] = (int32_T)u & 1;
        u >>= 1;
        bitIdx++;
      }

      i = 1;
    }

    /* End of S-Function (scominttobit): '<S2>/Integer to Bit Converter' */

    /* S-Function (xpcethercatpdorx): '<S17>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S17>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[11];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S17>/Velocity A' */
    State_Flow_vel_B.VelocityA = State_Flow_vel_B.EtherCATPDOReceive14;

    /* MATLAB Function: '<S17>/Vel Asse A conv' */
    State_Flow_vel_VelAsseAconv(State_Flow_vel_B.VelocityA,
      &State_Flow_vel_B.sf_VelAsseAconv);

    /* S-Function (xpcethercatpdorx): '<S17>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S17>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[12];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S17>/Velocity B' */
    State_Flow_vel_B.VelocityB = State_Flow_vel_B.EtherCATPDOReceive15;

    /* MATLAB Function: '<S17>/Vel Asse B conv' */
    State_Flow_vel_VelAsseBconv(State_Flow_vel_B.VelocityB,
      &State_Flow_vel_B.sf_VelAsseBconv);

    /* Chart: '<Root>/State flow robot' */
    if (State_Flow_vel_DW.temporalCounter_i1 < 16383U) {
      State_Flow_vel_DW.temporalCounter_i1++;
    }

    /* Gateway: State flow robot */
    State_Flow_vel_DW.sfEvent = -1;

    /* During: State flow robot */
    if (State_Flow_vel_DW.is_active_c15_State_Flow_vel == 0U) {
      /* Entry: State flow robot */
      State_Flow_vel_DW.is_active_c15_State_Flow_vel = 1U;

      /* Entry Internal: State flow robot */
      /* Transition: '<S15>:36' */
      State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Step1;

      /* Entry 'Step1': '<S15>:28' */
      State_Flow_vel_B.Bool = 0.0;
    } else {
      switch (State_Flow_vel_DW.is_c15_State_Flow_vel) {
       case State_Flow_vel_IN_Controllo:
        State_Flow_vel_B.Luci = 5.0;
        State_Flow_vel_B.Bool = 5.0;

        /* During 'Controllo': '<S15>:69' */
        break;

       case State_Flow_vel_IN_Coppie:
        State_Flow_vel_B.Luci = 2.0;

        /* During 'Coppie': '<S15>:95' */
        if (State_Flow_vel_B.convert_g - State_Flow_vel_B.OffA_0 >=
            1.7453292519943295 / State_Flow_vel_DW.conv) {
          /* Transition: '<S15>:131' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_SetA;

          /* Entry 'SetA': '<S15>:129' */
          State_Flow_vel_B.CoppiaA = 0.0;
          State_Flow_vel_DW.C1 = 0.0;
        } else {
          if (State_Flow_vel_B.convert10_d - State_Flow_vel_B.OffB_0 >=
              0.87266462599716477 / State_Flow_vel_DW.conv) {
            /* Transition: '<S15>:132' */
            State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_SetB;

            /* Entry 'SetB': '<S15>:130' */
            State_Flow_vel_B.CoppiaB = 0.0;
            State_Flow_vel_DW.C2 = 0.0;
          }
        }
        break;

       case State_Flow_vel_IN_Discesa_Vite:
        /* During 'Discesa_Vite': '<S15>:176' */
        /* Transition: '<S15>:224' */
        State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_OffSet;

        /* Entry 'OffSet': '<S15>:87' */
        State_Flow_vel_B.CoppiaH = 0.0;
        State_Flow_vel_B.CoppiaA = 0.0;
        State_Flow_vel_B.CoppiaB = 0.0;
        State_Flow_vel_B.OffA = State_Flow_vel_B.convert_g;
        State_Flow_vel_B.OffB = State_Flow_vel_B.convert10_d;
        State_Flow_vel_B.OffA_0 = State_Flow_vel_B.convert_g;
        State_Flow_vel_B.OffB_0 = State_Flow_vel_B.convert10_d;
        State_Flow_vel_B.Bool = 2.0;
        State_Flow_vel_B.Luci = 3.0;
        break;

       case State_Flow_vel_IN_Home:
        State_Flow_vel_B.Luci = 1.0;
        State_Flow_vel_B.Bool = 1.0;

        /* During 'Home': '<S15>:29' */
        sf_internal_predicateOutput =
          ((State_Flow_vel_B.IntegertoBitConverter_d[7] == 1.0) &&
           (State_Flow_vel_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:37' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Coppie;

          /* Entry 'Coppie': '<S15>:95' */
          State_Flow_vel_B.OffA_0 = State_Flow_vel_B.convert_g;
          State_Flow_vel_B.OffB_0 = State_Flow_vel_B.convert10_d;
          State_Flow_vel_B.CoppiaA = 1200.0;
          State_Flow_vel_B.CoppiaB = 1100.0;
          State_Flow_vel_B.CoppiaH = 0.0;
          State_Flow_vel_B.Luci = 2.0;
        } else {
          if (State_Flow_vel_B.IntegertoBitConverter[14] == 0.0) {
            /* Transition: '<S15>:127' */
            State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Step2;

            /* Entry 'Step2': '<S15>:126' */
            State_Flow_vel_B.CoppiaH = 0.0;
          }
        }
        break;

       case State_Flow_vel_IN_OffSet:
        /* During 'OffSet': '<S15>:87' */
        /* Transition: '<S15>:90' */
        State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Traiettoria;
        State_Flow_vel_DW.temporalCounter_i1 = 0U;

        /* Entry 'Traiettoria': '<S15>:147' */
        State_Flow_vel_B.OffT = State_Flow_vel_B.Clock;
        State_Flow_vel_B.Luci = 4.0;
        State_Flow_vel_B.Bool = 4.0;
        break;

       case State_Flow_vel_IN_SetA:
        /* During 'SetA': '<S15>:129' */
        if (State_Flow_vel_B.convert10_d - State_Flow_vel_B.OffB_0 >=
            0.87266462599716477 / State_Flow_vel_DW.conv) {
          /* Transition: '<S15>:133' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_SetB1;

          /* Entry 'SetB1': '<S15>:145' */
          State_Flow_vel_B.CoppiaB = 0.0;
          State_Flow_vel_DW.C2 = 0.0;
        }
        break;

       case State_Flow_vel_IN_SetA1:
        /* During 'SetA1': '<S15>:146' */
        if (State_Flow_vel_DW.C1 == 0.0) {
          /* Transition: '<S15>:136' */
          State_Flow_vel_DW.is_c15_State_Flow_vel =
            State_Flow_vel_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S15>:176' */
          State_Flow_vel_B.OffA_vite = State_Flow_vel_B.convert;
          State_Flow_vel_B.CoppiaH = 700.0;
        }
        break;

       case State_Flow_vel_IN_SetB:
        /* During 'SetB': '<S15>:130' */
        if (State_Flow_vel_B.convert_g - State_Flow_vel_B.OffA_0 >=
            1.7453292519943295 / State_Flow_vel_DW.conv) {
          /* Transition: '<S15>:134' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_SetA1;

          /* Entry 'SetA1': '<S15>:146' */
          State_Flow_vel_B.CoppiaA = 0.0;
          State_Flow_vel_DW.C1 = 0.0;
        }
        break;

       case State_Flow_vel_IN_SetB1:
        /* During 'SetB1': '<S15>:145' */
        if (State_Flow_vel_DW.C2 == 0.0) {
          /* Transition: '<S15>:135' */
          State_Flow_vel_DW.is_c15_State_Flow_vel =
            State_Flow_vel_IN_Discesa_Vite;

          /* Entry 'Discesa_Vite': '<S15>:176' */
          State_Flow_vel_B.OffA_vite = State_Flow_vel_B.convert;
          State_Flow_vel_B.CoppiaH = 700.0;
        }
        break;

       case State_Flow_vel_IN_Step1:
        State_Flow_vel_B.Bool = 0.0;

        /* During 'Step1': '<S15>:28' */
        if (State_Flow_vel_B.DataTypeConversion6 == 1079.0) {
          /* Transition: '<S15>:35' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Home;

          /* Entry 'Home': '<S15>:29' */
          /* Simulink Function 'Homing': '<S15>:31' */
          State_Flow_vel_B.fc = State_Flow_vel_B.IntegertoBitConverter[14];
          State_Flow_vel_B.fcA = State_Flow_vel_B.IntegertoBitConverter_d[7];
          State_Flow_vel_B.fcB = State_Flow_vel_B.IntegertoBitConverter_d[14];

          /* Outputs for Function Call SubSystem: '<S15>/Homing' */
          /* MATLAB Function: '<S72>/MATLAB Function' */
          /* MATLAB Function 'State flow robot/Homing/MATLAB Function': '<S75>:1' */
          /* '<S75>:1:3' */
          State_Flow_vel_B.CA = -1300.0;

          /* '<S75>:1:4' */
          State_Flow_vel_B.CB = -1300.0;

          /* '<S75>:1:5' */
          State_Flow_vel_B.CH = -700.0;
          if (State_Flow_vel_B.fc < 1.0) {
            /* '<S75>:1:7' */
            /* '<S75>:1:8' */
            State_Flow_vel_B.CH = 0.0;
          }

          if (State_Flow_vel_B.fcA == 1.0) {
            /* '<S75>:1:10' */
            /* '<S75>:1:11' */
            State_Flow_vel_B.CA = 0.0;
          }

          if (State_Flow_vel_B.fcB == 1.0) {
            /* '<S75>:1:13' */
            /* '<S75>:1:14' */
            State_Flow_vel_B.CB = 0.0;
          }

          /* End of MATLAB Function: '<S72>/MATLAB Function' */
          State_Flow_vel_DW.Homing_SubsysRanBC = 4;

          /* End of Outputs for SubSystem: '<S15>/Homing' */
          State_Flow_vel_B.CoppiaA = State_Flow_vel_B.CA;
          State_Flow_vel_B.CoppiaB = State_Flow_vel_B.CB;
          State_Flow_vel_B.CoppiaH = State_Flow_vel_B.CH;
          State_Flow_vel_B.Bool = 1.0;
          State_Flow_vel_DW.conv = 5.9921124526782858E-6;
          State_Flow_vel_DW.conv_vite = 1.220703125E-7;
          State_Flow_vel_B.Luci = 1.0;
          State_Flow_vel_DW.C1 = 1.0;
          State_Flow_vel_DW.C2 = 1.0;
          State_Flow_vel_B.OffA_0 = 0.0;
          State_Flow_vel_B.OffB_0 = 0.0;
        }
        break;

       case State_Flow_vel_IN_Step2:
        /* During 'Step2': '<S15>:126' */
        sf_internal_predicateOutput =
          ((State_Flow_vel_B.IntegertoBitConverter_d[7] == 1.0) &&
           (State_Flow_vel_B.IntegertoBitConverter_d[14] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:128' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Coppie;

          /* Entry 'Coppie': '<S15>:95' */
          State_Flow_vel_B.OffA_0 = State_Flow_vel_B.convert_g;
          State_Flow_vel_B.OffB_0 = State_Flow_vel_B.convert10_d;
          State_Flow_vel_B.CoppiaA = 1200.0;
          State_Flow_vel_B.CoppiaB = 1100.0;
          State_Flow_vel_B.CoppiaH = 0.0;
          State_Flow_vel_B.Luci = 2.0;
        }
        break;

       default:
        State_Flow_vel_B.Luci = 4.0;
        State_Flow_vel_B.Bool = 4.0;

        /* During 'Traiettoria': '<S15>:147' */
        if (State_Flow_vel_DW.temporalCounter_i1 >= 10000U) {
          /* Transition: '<S15>:148' */
          State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_vel_IN_Controllo;

          /* Entry 'Controllo': '<S15>:69' */
          State_Flow_vel_B.OffA_vite = State_Flow_vel_B.convert;
          State_Flow_vel_B.OffB_vite = State_Flow_vel_B.convert10;
          State_Flow_vel_B.Bool = 5.0;
          State_Flow_vel_B.Luci = 5.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/State flow robot' */

    /* Sum: '<Root>/Sum' */
    State_Flow_vel_B.Sum = State_Flow_vel_B.convert_g - State_Flow_vel_B.OffA_0;

    /* Gain: '<Root>/Gain' */
    State_Flow_vel_B.Gain = State_Flow_vel_P.Gain_Gain_a * State_Flow_vel_B.Sum;

    /* Gain: '<S9>/Gain' */
    State_Flow_vel_B.Gain_h = State_Flow_vel_P.Gain_Gain_m *
      State_Flow_vel_B.Gain;

    /* Sum: '<Root>/Sum1' */
    State_Flow_vel_B.Sum1 = State_Flow_vel_B.convert10_d -
      State_Flow_vel_B.OffB_0;

    /* Gain: '<Root>/Gain1' */
    State_Flow_vel_B.Gain1 = State_Flow_vel_P.Gain1_Gain * State_Flow_vel_B.Sum1;

    /* Gain: '<S10>/Gain' */
    State_Flow_vel_B.Gain_n = State_Flow_vel_P.Gain_Gain_m0 *
      State_Flow_vel_B.Gain1;

    /* MATLAB Function: '<S3>/MATLAB Function1' */
    /* MATLAB Function 'LED Status/MATLAB Function1': '<S19>:1' */
    if ((State_Flow_vel_B.Luci == 1.0) || (State_Flow_vel_B.Luci == 2.0) ||
        (State_Flow_vel_B.Luci == 4.0)) {
      /* '<S19>:1:2' */
      /* '<S19>:1:3' */
      State_Flow_vel_B.y_b = 1.0;
    } else {
      /* '<S19>:1:5' */
      State_Flow_vel_B.y_b = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function1' */

    /* DataTypeConversion: '<S3>/Data Type Conversion25' */
    State_Flow_vel_B.DataTypeConversion25 = (State_Flow_vel_B.y_b != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */

    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[13];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function' */
    /* MATLAB Function 'LED Status/MATLAB Function': '<S18>:1' */
    if ((State_Flow_vel_B.Luci == 2.0) || (State_Flow_vel_B.Luci == 3.0)) {
      /* '<S18>:1:2' */
      /* '<S18>:1:3' */
      State_Flow_vel_B.y_i = 1.0;
    } else {
      /* '<S18>:1:5' */
      State_Flow_vel_B.y_i = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function' */

    /* DataTypeConversion: '<S3>/Data Type Conversion24' */
    State_Flow_vel_B.DataTypeConversion24 = (State_Flow_vel_B.y_i != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */

    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[14];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S3>/MATLAB Function2' */
    /* MATLAB Function 'LED Status/MATLAB Function2': '<S20>:1' */
    if ((State_Flow_vel_B.Luci == 4.0) || (State_Flow_vel_B.Luci == 5.0)) {
      /* '<S20>:1:2' */
      /* '<S20>:1:3' */
      State_Flow_vel_B.y_f = 1.0;
    } else {
      /* '<S20>:1:5' */
      State_Flow_vel_B.y_f = 0.0;
    }

    /* End of MATLAB Function: '<S3>/MATLAB Function2' */

    /* DataTypeConversion: '<S3>/Data Type Conversion26' */
    State_Flow_vel_B.DataTypeConversion26 = (State_Flow_vel_B.y_f != 0.0);

    /* S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */

    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[15];
      sfcnOutputs(rts,1);
    }

    /* Memory: '<S40>/Memory' */
    State_Flow_vel_B.Memory = State_Flow_vel_DW.Memory_PreviousInput;

    /* Sum: '<S27>/Sum2' */
    State_Flow_vel_B.Sum2 = State_Flow_vel_B.Clock - State_Flow_vel_B.OffT;

    /* MATLAB Function: '<S4>/Quadrato' incorporates:
     *  Constant: '<S4>/Alzata Q'
     *  Constant: '<S4>/Periodo Q'
     */
    /* MATLAB Function 'Movimento Braccia/Quadrato': '<S30>:1' */
    /* '<S30>:1:2' */
    /* '<S30>:1:3' */
    /* '<S30>:1:4' */
    x1 = State_Flow_vel_B.Sum2 / (0.5 * State_Flow_vel_P.PeriodoQ_Value / 4.0);

    /* '<S30>:1:5' */
    x2 = (State_Flow_vel_B.Sum2 - 0.5 * State_Flow_vel_P.PeriodoQ_Value / 4.0) /
      (State_Flow_vel_P.PeriodoQ_Value / 4.0);

    /* '<S30>:1:6' */
    x3 = (State_Flow_vel_B.Sum2 - 1.5 * State_Flow_vel_P.PeriodoQ_Value / 4.0) /
      (State_Flow_vel_P.PeriodoQ_Value / 4.0);

    /* '<S30>:1:7' */
    x4 = (State_Flow_vel_B.Sum2 - 2.5 * State_Flow_vel_P.PeriodoQ_Value / 4.0) /
      (State_Flow_vel_P.PeriodoQ_Value / 4.0);

    /* '<S30>:1:8' */
    x5 = (State_Flow_vel_B.Sum2 - 3.5 * State_Flow_vel_P.PeriodoQ_Value / 4.0) /
      (0.5 * State_Flow_vel_P.PeriodoQ_Value / 4.0);

    /* '<S30>:1:9' */
    /*  Ca = 1/(xv*(1-xv)); */
    /*  Cv = 1/(1-xv); */
    if ((State_Flow_vel_B.Sum2 > 0.0) && (State_Flow_vel_B.Sum2 <= 0.5 *
         State_Flow_vel_P.PeriodoQ_Value / 4.0)) {
      /* '<S30>:1:14' */
      if ((x1 >= 0.0) && (x1 < 0.1)) {
        /* '<S30>:1:16' */
        /* acc crescente positiva */
        /* '<S30>:1:18' */
        F = x1 * x1 * 27.777777777777771;

        /* '<S30>:1:19' */
        x1 = 9.259259259259256 * State_Flow_vel_mpower(x1);
      } else if ((x1 >= 0.1) && (x1 < 0.30000000000000004)) {
        /* '<S30>:1:22' */
        /* acc costante positiva */
        /* '<S30>:1:24' */
        F = 5.5555555555555545 * x1 - 0.27777777777777773;

        /* '<S30>:1:25' */
        x1 = (x1 * x1 * 2.7777777777777772 - 0.27777777777777773 * x1) +
          0.0092592592592592587;
      } else if ((x1 >= 0.30000000000000004) && (x1 < 0.4)) {
        /* '<S30>:1:28' */
        /* acc decrescente positiva */
        /* '<S30>:1:30' */
        F = (x1 * x1 * -27.777777777777771 + 22.222222222222218 * x1) -
          2.7777777777777777;

        /* '<S30>:1:31' */
        x1 = ((((x1 * x1 * 11.111111111111109 + -9.259259259259256 *
                 State_Flow_vel_mpower(x1)) - 2.7777777777777777 * x1) -
               0.44444444444444442) + 9.259259259259256 * State_Flow_vel_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x1 >= 0.4) && (x1 < 0.6)) {
        /* '<S30>:1:35' */
        /* acc costante nulla */
        /* '<S30>:1:37' */
        F = 1.6666666666666665;

        /* '<S30>:1:38' */
        x1 = (1.6666666666666665 * x1 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x1 >= 0.6) && (x1 < 0.7)) {
        /* '<S30>:1:41' */
        /* acc decrescente negativa */
        /* '<S30>:1:43' */
        F = ((x1 * x1 * -27.777777777777771 + 33.333333333333321 * x1) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S30>:1:44' */
        x1 = (((((x1 * x1 * 16.666666666666661 + -9.259259259259256 *
                  State_Flow_vel_mpower(x1)) + 1.6666666666666665 * x1) -
                9.9999999999999982 * x1) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * State_Flow_vel_mpower
          (0.6);
      } else if ((x1 >= 0.7) && (x1 < 0.9)) {
        /* '<S30>:1:48' */
        /* acc costante negativa */
        /* '<S30>:1:50' */
        F = (-5.5555555555555545 * x1 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S30>:1:51' */
        x1 = (((x1 * x1 * -2.7777777777777772 + 5.5555555555555545 * x1) -
               0.27777777777777773 * x1) + 1.0) - 2.5092592592592586;
      } else if ((x1 >= 0.9) && (x1 <= 1.0)) {
        /* '<S30>:1:54' */
        /* acc crescente negativa */
        /* '<S30>:1:56' */
        F = (x1 * x1 * 27.777777777777771 - 55.555555555555543 * x1) +
          27.777777777777771;

        /* '<S30>:1:57' */
        x1 = (((9.259259259259256 * State_Flow_vel_mpower(x1) - x1 * x1 *
                27.777777777777771) + 27.777777777777771 * x1) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S30>:1:62' */
        F = 0.0;

        /* '<S30>:1:63' */
        x1 = 1.0;
      }

      /* '<S30>:1:66' */
      State_Flow_vel_B.xq = x1 * State_Flow_vel_P.AlzataQ_Value / 2.0;

      /* '<S30>:1:67' */
      State_Flow_vel_B.xq_p = State_Flow_vel_P.AlzataQ_Value / 2.0 * F /
        (State_Flow_vel_P.PeriodoQ_Value / 4.0);

      /* '<S30>:1:68' */
      State_Flow_vel_B.yq = 0.0;

      /* '<S30>:1:69' */
      State_Flow_vel_B.yq_p = 0.0;
    } else if ((State_Flow_vel_B.Sum2 > 0.5 * State_Flow_vel_P.PeriodoQ_Value /
                4.0) && (State_Flow_vel_B.Sum2 <= 1.5 *
                         State_Flow_vel_P.PeriodoQ_Value / 4.0)) {
      /* '<S30>:1:71' */
      /* '<S30>:1:72' */
      /*  Cj = Ca/xj; */
      if ((x2 >= 0.0) && (x2 < 0.1)) {
        /* '<S30>:1:75' */
        /* acc crescente positiva */
        /* '<S30>:1:77' */
        F = x2 * x2 * 27.777777777777771;

        /* '<S30>:1:78' */
        x1 = 9.259259259259256 * State_Flow_vel_mpower(x2);
      } else if ((x2 >= 0.1) && (x2 < 0.30000000000000004)) {
        /* '<S30>:1:81' */
        /* acc costante positiva */
        /* '<S30>:1:83' */
        F = 5.5555555555555545 * x2 - 0.27777777777777773;

        /* '<S30>:1:84' */
        x1 = (x2 * x2 * 2.7777777777777772 - 0.27777777777777773 * x2) +
          0.0092592592592592587;
      } else if ((x2 >= 0.30000000000000004) && (x2 < 0.4)) {
        /* '<S30>:1:87' */
        /* acc decrescente positiva */
        /* '<S30>:1:89' */
        F = (x2 * x2 * -27.777777777777771 + 22.222222222222218 * x2) -
          2.7777777777777777;

        /* '<S30>:1:90' */
        x1 = ((((x2 * x2 * 11.111111111111109 + -9.259259259259256 *
                 State_Flow_vel_mpower(x2)) - 2.7777777777777777 * x2) -
               0.44444444444444442) + 9.259259259259256 * State_Flow_vel_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x2 >= 0.4) && (x2 < 0.6)) {
        /* '<S30>:1:94' */
        /* acc costante nulla */
        /* '<S30>:1:96' */
        F = 1.6666666666666665;

        /* '<S30>:1:97' */
        x1 = (1.6666666666666665 * x2 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x2 >= 0.6) && (x2 < 0.7)) {
        /* '<S30>:1:100' */
        /* acc decrescente negativa */
        /* '<S30>:1:102' */
        F = ((x2 * x2 * -27.777777777777771 + 33.333333333333321 * x2) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S30>:1:103' */
        x1 = (((((x2 * x2 * 16.666666666666661 + -9.259259259259256 *
                  State_Flow_vel_mpower(x2)) + 1.6666666666666665 * x2) -
                9.9999999999999982 * x2) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * State_Flow_vel_mpower
          (0.6);
      } else if ((x2 >= 0.7) && (x2 < 0.9)) {
        /* '<S30>:1:107' */
        /* acc costante negativa */
        /* '<S30>:1:109' */
        F = (-5.5555555555555545 * x2 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S30>:1:110' */
        x1 = (((x2 * x2 * -2.7777777777777772 + 5.5555555555555545 * x2) -
               0.27777777777777773 * x2) + 1.0) - 2.5092592592592586;
      } else if ((x2 >= 0.9) && (x2 <= 1.0)) {
        /* '<S30>:1:113' */
        /* acc crescente negativa */
        /* '<S30>:1:115' */
        F = (x2 * x2 * 27.777777777777771 - 55.555555555555543 * x2) +
          27.777777777777771;

        /* '<S30>:1:116' */
        x1 = (((9.259259259259256 * State_Flow_vel_mpower(x2) - x2 * x2 *
                27.777777777777771) + 27.777777777777771 * x2) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S30>:1:121' */
        F = 0.0;

        /* '<S30>:1:122' */
        x1 = 1.0;
      }

      /* '<S30>:1:125' */
      State_Flow_vel_B.xq = State_Flow_vel_P.AlzataQ_Value / 2.0;

      /* '<S30>:1:126' */
      State_Flow_vel_B.xq_p = 0.0;

      /* '<S30>:1:127' */
      State_Flow_vel_B.yq = -x1 * State_Flow_vel_P.AlzataQ_Value;

      /* '<S30>:1:128' */
      State_Flow_vel_B.yq_p = -F * State_Flow_vel_P.AlzataQ_Value /
        (State_Flow_vel_P.PeriodoQ_Value / 4.0);
    } else if ((State_Flow_vel_B.Sum2 > 1.5 * State_Flow_vel_P.PeriodoQ_Value /
                4.0) && (State_Flow_vel_B.Sum2 <= 2.5 *
                         State_Flow_vel_P.PeriodoQ_Value / 4.0)) {
      /* '<S30>:1:130' */
      /* '<S30>:1:131' */
      /*  Cj = Ca/xj; */
      if ((x3 >= 0.0) && (x3 < 0.1)) {
        /* '<S30>:1:134' */
        /* acc crescente positiva */
        /* '<S30>:1:136' */
        F = x3 * x3 * 27.777777777777771;

        /* '<S30>:1:137' */
        x1 = 9.259259259259256 * State_Flow_vel_mpower(x3);
      } else if ((x3 >= 0.1) && (x3 < 0.30000000000000004)) {
        /* '<S30>:1:140' */
        /* acc costante positiva */
        /* '<S30>:1:142' */
        F = 5.5555555555555545 * x3 - 0.27777777777777773;

        /* '<S30>:1:143' */
        x1 = (x3 * x3 * 2.7777777777777772 - 0.27777777777777773 * x3) +
          0.0092592592592592587;
      } else if ((x3 >= 0.30000000000000004) && (x3 < 0.4)) {
        /* '<S30>:1:146' */
        /* acc decrescente positiva */
        /* '<S30>:1:148' */
        F = (x3 * x3 * -27.777777777777771 + 22.222222222222218 * x3) -
          2.7777777777777777;

        /* '<S30>:1:149' */
        x1 = ((((x3 * x3 * 11.111111111111109 + -9.259259259259256 *
                 State_Flow_vel_mpower(x3)) - 2.7777777777777777 * x3) -
               0.44444444444444442) + 9.259259259259256 * State_Flow_vel_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x3 >= 0.4) && (x3 < 0.6)) {
        /* '<S30>:1:153' */
        /* acc costante nulla */
        /* '<S30>:1:155' */
        F = 1.6666666666666665;

        /* '<S30>:1:156' */
        x1 = (1.6666666666666665 * x3 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x3 >= 0.6) && (x3 < 0.7)) {
        /* '<S30>:1:159' */
        /* acc decrescente negativa */
        /* '<S30>:1:161' */
        F = ((x3 * x3 * -27.777777777777771 + 33.333333333333321 * x3) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S30>:1:162' */
        x1 = (((((x3 * x3 * 16.666666666666661 + -9.259259259259256 *
                  State_Flow_vel_mpower(x3)) + 1.6666666666666665 * x3) -
                9.9999999999999982 * x3) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * State_Flow_vel_mpower
          (0.6);
      } else if ((x3 >= 0.7) && (x3 < 0.9)) {
        /* '<S30>:1:166' */
        /* acc costante negativa */
        /* '<S30>:1:168' */
        F = (-5.5555555555555545 * x3 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S30>:1:169' */
        x1 = (((x3 * x3 * -2.7777777777777772 + 5.5555555555555545 * x3) -
               0.27777777777777773 * x3) + 1.0) - 2.5092592592592586;
      } else if ((x3 >= 0.9) && (x3 <= 1.0)) {
        /* '<S30>:1:172' */
        /* acc crescente negativa */
        /* '<S30>:1:174' */
        F = (x3 * x3 * 27.777777777777771 - 55.555555555555543 * x3) +
          27.777777777777771;

        /* '<S30>:1:175' */
        x1 = (((9.259259259259256 * State_Flow_vel_mpower(x3) - x3 * x3 *
                27.777777777777771) + 27.777777777777771 * x3) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S30>:1:180' */
        F = 0.0;

        /* '<S30>:1:181' */
        x1 = 1.0;
      }

      /* '<S30>:1:184' */
      State_Flow_vel_B.xq = State_Flow_vel_P.AlzataQ_Value / 2.0 - x1 *
        State_Flow_vel_P.AlzataQ_Value;

      /* '<S30>:1:185' */
      State_Flow_vel_B.xq_p = -F * State_Flow_vel_P.AlzataQ_Value /
        (State_Flow_vel_P.PeriodoQ_Value / 4.0);

      /* '<S30>:1:186' */
      State_Flow_vel_B.yq = -State_Flow_vel_P.AlzataQ_Value;

      /* '<S30>:1:187' */
      State_Flow_vel_B.yq_p = 0.0;
    } else if ((State_Flow_vel_B.Sum2 > 2.5 * State_Flow_vel_P.PeriodoQ_Value /
                4.0) && (State_Flow_vel_B.Sum2 <= 3.5 *
                         State_Flow_vel_P.PeriodoQ_Value / 4.0)) {
      /* '<S30>:1:189' */
      /* '<S30>:1:190' */
      /*  Cj = Ca/xj; */
      if ((x4 >= 0.0) && (x4 < 0.1)) {
        /* '<S30>:1:193' */
        /* acc crescente positiva */
        /* '<S30>:1:195' */
        F = x4 * x4 * 27.777777777777771;

        /* '<S30>:1:196' */
        x1 = 9.259259259259256 * State_Flow_vel_mpower(x4);
      } else if ((x4 >= 0.1) && (x4 < 0.30000000000000004)) {
        /* '<S30>:1:199' */
        /* acc costante positiva */
        /* '<S30>:1:201' */
        F = 5.5555555555555545 * x4 - 0.27777777777777773;

        /* '<S30>:1:202' */
        x1 = (x4 * x4 * 2.7777777777777772 - 0.27777777777777773 * x4) +
          0.0092592592592592587;
      } else if ((x4 >= 0.30000000000000004) && (x4 < 0.4)) {
        /* '<S30>:1:205' */
        /* acc decrescente positiva */
        /* '<S30>:1:207' */
        F = (x4 * x4 * -27.777777777777771 + 22.222222222222218 * x4) -
          2.7777777777777777;

        /* '<S30>:1:208' */
        x1 = ((((x4 * x4 * 11.111111111111109 + -9.259259259259256 *
                 State_Flow_vel_mpower(x4)) - 2.7777777777777777 * x4) -
               0.44444444444444442) + 9.259259259259256 * State_Flow_vel_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x4 >= 0.4) && (x4 < 0.6)) {
        /* '<S30>:1:212' */
        /* acc costante nulla */
        /* '<S30>:1:214' */
        F = 1.6666666666666665;

        /* '<S30>:1:215' */
        x1 = (1.6666666666666665 * x4 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x4 >= 0.6) && (x4 < 0.7)) {
        /* '<S30>:1:218' */
        /* acc decrescente negativa */
        /* '<S30>:1:220' */
        F = ((x4 * x4 * -27.777777777777771 + 33.333333333333321 * x4) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S30>:1:221' */
        x1 = (((((x4 * x4 * 16.666666666666661 + -9.259259259259256 *
                  State_Flow_vel_mpower(x4)) + 1.6666666666666665 * x4) -
                9.9999999999999982 * x4) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * State_Flow_vel_mpower
          (0.6);
      } else if ((x4 >= 0.7) && (x4 < 0.9)) {
        /* '<S30>:1:225' */
        /* acc costante negativa */
        /* '<S30>:1:227' */
        F = (-5.5555555555555545 * x4 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S30>:1:228' */
        x1 = (((x4 * x4 * -2.7777777777777772 + 5.5555555555555545 * x4) -
               0.27777777777777773 * x4) + 1.0) - 2.5092592592592586;
      } else if ((x4 >= 0.9) && (x4 <= 1.0)) {
        /* '<S30>:1:231' */
        /* acc crescente negativa */
        /* '<S30>:1:233' */
        F = (x4 * x4 * 27.777777777777771 - 55.555555555555543 * x4) +
          27.777777777777771;

        /* '<S30>:1:234' */
        x1 = (((9.259259259259256 * State_Flow_vel_mpower(x4) - x4 * x4 *
                27.777777777777771) + 27.777777777777771 * x4) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S30>:1:239' */
        F = 0.0;

        /* '<S30>:1:240' */
        x1 = 1.0;
      }

      /* '<S30>:1:243' */
      State_Flow_vel_B.xq = -State_Flow_vel_P.AlzataQ_Value / 2.0;

      /* '<S30>:1:244' */
      State_Flow_vel_B.xq_p = 0.0;

      /* '<S30>:1:245' */
      State_Flow_vel_B.yq = x1 * State_Flow_vel_P.AlzataQ_Value +
        -State_Flow_vel_P.AlzataQ_Value;

      /* '<S30>:1:246' */
      State_Flow_vel_B.yq_p = F * State_Flow_vel_P.AlzataQ_Value /
        (State_Flow_vel_P.PeriodoQ_Value / 4.0);
    } else if ((State_Flow_vel_B.Sum2 > 3.5 * State_Flow_vel_P.PeriodoQ_Value /
                4.0) && (State_Flow_vel_B.Sum2 <= 4.0 *
                         State_Flow_vel_P.PeriodoQ_Value / 4.0)) {
      /* '<S30>:1:248' */
      /* '<S30>:1:249' */
      /*  Cj = Ca/xj; */
      if ((x5 >= 0.0) && (x5 < 0.1)) {
        /* '<S30>:1:252' */
        /* acc crescente positiva */
        /* '<S30>:1:254' */
        F = x5 * x5 * 27.777777777777771;

        /* '<S30>:1:255' */
        x1 = 9.259259259259256 * State_Flow_vel_mpower(x5);
      } else if ((x5 >= 0.1) && (x5 < 0.30000000000000004)) {
        /* '<S30>:1:258' */
        /* acc costante positiva */
        /* '<S30>:1:260' */
        F = 5.5555555555555545 * x5 - 0.27777777777777773;

        /* '<S30>:1:261' */
        x1 = (x5 * x5 * 2.7777777777777772 - 0.27777777777777773 * x5) +
          0.0092592592592592587;
      } else if ((x5 >= 0.30000000000000004) && (x5 < 0.4)) {
        /* '<S30>:1:264' */
        /* acc decrescente positiva */
        /* '<S30>:1:266' */
        F = (x5 * x5 * -27.777777777777771 + 22.222222222222218 * x5) -
          2.7777777777777777;

        /* '<S30>:1:267' */
        x1 = ((((x5 * x5 * 11.111111111111109 + -9.259259259259256 *
                 State_Flow_vel_mpower(x5)) - 2.7777777777777777 * x5) -
               0.44444444444444442) + 9.259259259259256 * State_Flow_vel_mpower
              (0.4)) + 0.1111111111111111;
      } else if ((x5 >= 0.4) && (x5 < 0.6)) {
        /* '<S30>:1:271' */
        /* acc costante nulla */
        /* '<S30>:1:273' */
        F = 1.6666666666666665;

        /* '<S30>:1:274' */
        x1 = (1.6666666666666665 * x5 - 0.44444444444444442) +
          0.1111111111111111;
      } else if ((x5 >= 0.6) && (x5 < 0.7)) {
        /* '<S30>:1:277' */
        /* acc decrescente negativa */
        /* '<S30>:1:279' */
        F = ((x5 * x5 * -27.777777777777771 + 33.333333333333321 * x5) +
             1.6666666666666665) - 9.9999999999999982;

        /* '<S30>:1:280' */
        x1 = (((((x5 * x5 * 16.666666666666661 + -9.259259259259256 *
                  State_Flow_vel_mpower(x5)) + 1.6666666666666665 * x5) -
                9.9999999999999982 * x5) - 0.44444444444444442) +
              0.1111111111111111) + 9.259259259259256 * State_Flow_vel_mpower
          (0.6);
      } else if ((x5 >= 0.7) && (x5 < 0.9)) {
        /* '<S30>:1:284' */
        /* acc costante negativa */
        /* '<S30>:1:286' */
        F = (-5.5555555555555545 * x5 + 5.5555555555555545) -
          0.27777777777777773;

        /* '<S30>:1:287' */
        x1 = (((x5 * x5 * -2.7777777777777772 + 5.5555555555555545 * x5) -
               0.27777777777777773 * x5) + 1.0) - 2.5092592592592586;
      } else if ((x5 >= 0.9) && (x5 <= 1.0)) {
        /* '<S30>:1:290' */
        /* acc crescente negativa */
        /* '<S30>:1:292' */
        F = (x5 * x5 * 27.777777777777771 - 55.555555555555543 * x5) +
          27.777777777777771;

        /* '<S30>:1:293' */
        x1 = (((9.259259259259256 * rt_powd_snf(x5, 3.0) - x5 * x5 *
                27.777777777777771) + 27.777777777777771 * x5) + 1.0) -
          9.259259259259256;
      } else {
        /* acc costante nulla */
        /* '<S30>:1:298' */
        F = 0.0;

        /* '<S30>:1:299' */
        x1 = 1.0;
      }

      /* '<S30>:1:302' */
      State_Flow_vel_B.xq = x1 * State_Flow_vel_P.AlzataQ_Value / 2.0 +
        -State_Flow_vel_P.AlzataQ_Value / 2.0;

      /* '<S30>:1:303' */
      State_Flow_vel_B.xq_p = F * State_Flow_vel_P.AlzataQ_Value / 2.0 /
        (State_Flow_vel_P.PeriodoQ_Value / 4.0);

      /* '<S30>:1:304' */
      State_Flow_vel_B.yq = 0.0;

      /* '<S30>:1:305' */
      State_Flow_vel_B.yq_p = 0.0;
    } else {
      /* '<S30>:1:307' */
      State_Flow_vel_B.xq = 0.0;

      /* '<S30>:1:308' */
      State_Flow_vel_B.yq = 0.0;

      /* '<S30>:1:309' */
      State_Flow_vel_B.xq_p = 0.0;

      /* '<S30>:1:310' */
      State_Flow_vel_B.yq_p = 0.0;
    }

    /* End of MATLAB Function: '<S4>/Quadrato' */

    /* MATLAB Function: '<S4>/Cerchio' incorporates:
     *  Constant: '<S4>/Periodo C'
     */
    /* MATLAB Function 'Movimento Braccia/Cerchio': '<S23>:1' */
    /* '<S23>:1:2' */
    F = 1000.0 * State_Flow_vel_P.PeriodoC_Value / 2.0;
    if (F < 0.0) {
      F = 0.0;
    }

    State_Flow_vel_emxInit_real_T(&Y1, 2);

    /* MATLAB Function: '<S4>/Cerchio' incorporates:
     *  Constant: '<S4>/Alzata C'
     *  Constant: '<S4>/Periodo C'
     */
    x1 = floor(F);
    bitIdx = Y1->size[0] * Y1->size[1];
    Y1->size[0] = 1;
    Y1->size[1] = (int32_T)x1;
    State_Flow_ve_emxEnsureCapacity((emxArray__common_State_Flow_v_T *)Y1,
      bitIdx, sizeof(real_T));
    if (Y1->size[1] >= 1) {
      Y1->data[Y1->size[1] - 1] = -State_Flow_vel_P.AlzataC_Value;
      if (Y1->size[1] >= 2) {
        Y1->data[0] = 0.0;
        if (Y1->size[1] >= 3) {
          if ((-State_Flow_vel_P.AlzataC_Value < 0.0) && (fabs
               (-State_Flow_vel_P.AlzataC_Value) > 8.9884656743115785E+307)) {
            F = -State_Flow_vel_P.AlzataC_Value / ((real_T)Y1->size[1] - 1.0);
            i = Y1->size[1];
            for (bitIdx = 0; bitIdx <= i - 3; bitIdx++) {
              Y1->data[bitIdx + 1] = (1.0 + (real_T)bitIdx) * F;
            }
          } else {
            F = -State_Flow_vel_P.AlzataC_Value / ((real_T)Y1->size[1] - 1.0);
            i = Y1->size[1];
            for (bitIdx = 0; bitIdx <= i - 3; bitIdx++) {
              Y1->data[bitIdx + 1] = (1.0 + (real_T)bitIdx) * F;
            }
          }
        }
      }
    }

    /* '<S23>:1:3' */
    F = 1000.0 * State_Flow_vel_P.PeriodoC_Value / 2.0;
    if (F < 0.0) {
      F = 0.0;
    }

    State_Flow_vel_emxInit_real_T(&Y2, 2);

    /* MATLAB Function: '<S4>/Cerchio' incorporates:
     *  Constant: '<S4>/Alzata C'
     *  Constant: '<S4>/Periodo C'
     */
    x1 = floor(F);
    bitIdx = Y2->size[0] * Y2->size[1];
    Y2->size[0] = 1;
    Y2->size[1] = (int32_T)x1;
    State_Flow_ve_emxEnsureCapacity((emxArray__common_State_Flow_v_T *)Y2,
      bitIdx, sizeof(real_T));
    if (Y2->size[1] >= 1) {
      Y2->data[Y2->size[1] - 1] = 0.0;
      if (Y2->size[1] >= 2) {
        Y2->data[0] = -State_Flow_vel_P.AlzataC_Value;
        if (Y2->size[1] >= 3) {
          if ((-State_Flow_vel_P.AlzataC_Value < 0.0) && (fabs
               (-State_Flow_vel_P.AlzataC_Value) > 8.9884656743115785E+307)) {
            F = -State_Flow_vel_P.AlzataC_Value / ((real_T)Y2->size[1] - 1.0);
            i = Y2->size[1];
            for (bitIdx = 0; bitIdx <= i - 3; bitIdx++) {
              Y2->data[bitIdx + 1] = -State_Flow_vel_P.AlzataC_Value - (1.0 +
                (real_T)bitIdx) * F;
            }
          } else {
            F = (0.0 - (-State_Flow_vel_P.AlzataC_Value)) / ((real_T)Y2->size[1]
              - 1.0);
            i = Y2->size[1];
            for (bitIdx = 0; bitIdx <= i - 3; bitIdx++) {
              Y2->data[bitIdx + 1] = (1.0 + (real_T)bitIdx) * F +
                -State_Flow_vel_P.AlzataC_Value;
            }
          }
        }
      }
    }

    if ((State_Flow_vel_B.Sum2 > 0.0) && (State_Flow_vel_B.Sum2 <=
         State_Flow_vel_P.PeriodoC_Value / 2.0)) {
      /* '<S23>:1:4' */
      /* '<S23>:1:5' */
      x1 = Y1->data[(int32_T)(State_Flow_vel_B.Sum2 * 1000.0) - 1];

      /* '<S23>:1:6' */
      F = sqrt(State_Flow_vel_P.AlzataC_Value * State_Flow_vel_P.AlzataC_Value -
               Y1->data[(int32_T)(State_Flow_vel_B.Sum2 * 1000.0) - 1] *
               Y1->data[(int32_T)(State_Flow_vel_B.Sum2 * 1000.0) - 1]);
    } else if ((State_Flow_vel_B.Sum2 > State_Flow_vel_P.PeriodoC_Value / 2.0) &&
               (State_Flow_vel_B.Sum2 <= State_Flow_vel_P.PeriodoC_Value)) {
      /* '<S23>:1:7' */
      /* '<S23>:1:8' */
      x1 = Y2->data[(int32_T)((State_Flow_vel_B.Sum2 -
        State_Flow_vel_P.PeriodoC_Value / 2.0) * 1000.0) - 1];

      /* '<S23>:1:9' */
      F = -sqrt(State_Flow_vel_P.AlzataC_Value * State_Flow_vel_P.AlzataC_Value
                - Y2->data[(int32_T)((State_Flow_vel_B.Sum2 -
                  State_Flow_vel_P.PeriodoC_Value / 2.0) * 1000.0) - 1] *
                Y2->data[(int32_T)((State_Flow_vel_B.Sum2 -
                  State_Flow_vel_P.PeriodoC_Value / 2.0) * 1000.0) - 1]);
    } else {
      /* '<S23>:1:11' */
      F = 0.0;

      /* '<S23>:1:12' */
      x1 = 0.0;
    }

    State_Flow_vel_emxFree_real_T(&Y2);
    State_Flow_vel_emxFree_real_T(&Y1);

    /* MATLAB Function: '<S4>/Cerchio' */
    State_Flow_vel_B.x_i = F;
    State_Flow_vel_B.y_m = x1;

    /* MATLAB Function: '<S4>/Selettore' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    /* MATLAB Function 'Movimento Braccia/Selettore': '<S32>:1' */
    if (State_Flow_vel_P.Constant2_Value == 1.0) {
      /* '<S32>:1:2' */
      /* '<S32>:1:3' */
      State_Flow_vel_B.x = State_Flow_vel_B.xq;

      /* '<S32>:1:4' */
      State_Flow_vel_B.y = State_Flow_vel_B.yq;
    } else if (State_Flow_vel_P.Constant2_Value == 2.0) {
      /* '<S32>:1:5' */
      /* '<S32>:1:6' */
      State_Flow_vel_B.x = State_Flow_vel_B.x_i;

      /* '<S32>:1:7' */
      State_Flow_vel_B.y = State_Flow_vel_B.y_m;
    } else {
      /* '<S32>:1:9' */
      State_Flow_vel_B.x = 0.0;

      /* '<S32>:1:10' */
      State_Flow_vel_B.y = 0.0;
    }

    /* End of MATLAB Function: '<S4>/Selettore' */

    /* MATLAB Function: '<S4>/Cinematica Inversa1' incorporates:
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant1'
     */
    /* MATLAB Function 'Movimento Braccia/Cinematica Inversa1': '<S26>:1' */
    /* '<S26>:1:3' */
    /* '<S26>:1:4' */
    /* '<S26>:1:6' */
    F = sin(State_Flow_vel_P.Constant1_Value) - sin
      (State_Flow_vel_P.Constant_Value_eg);
    x1 = -0.18 - (cos(State_Flow_vel_P.Constant1_Value) - cos
                  (State_Flow_vel_P.Constant_Value_eg)) * 0.25;
    F = F * F * 0.0625 + x1 * x1;

    /* '<S26>:1:7' */
    x1 = -0.18 - (cos(State_Flow_vel_P.Constant1_Value) - cos
                  (State_Flow_vel_P.Constant_Value_eg)) * 0.25;
    x1 = ((-0.18 - (cos(State_Flow_vel_P.Constant1_Value) - cos
                    (State_Flow_vel_P.Constant_Value_eg)) * 0.25) * ((sin
            (State_Flow_vel_P.Constant1_Value) - sin
            (State_Flow_vel_P.Constant_Value_eg)) * 0.25) * (-0.18 - 0.5 * cos
           (State_Flow_vel_P.Constant1_Value)) + (sin
           (State_Flow_vel_P.Constant1_Value) - sin
           (State_Flow_vel_P.Constant_Value_eg)) * -0.01125 * (cos
           (State_Flow_vel_P.Constant1_Value) + cos
           (State_Flow_vel_P.Constant_Value_eg))) - 0.5 * sin
      (State_Flow_vel_P.Constant1_Value) * (x1 * x1);

    /* '<S26>:1:10' */
    x2 = cos(State_Flow_vel_P.Constant1_Value) + cos
      (State_Flow_vel_P.Constant_Value_eg);
    x3 = -0.18 - (cos(State_Flow_vel_P.Constant1_Value) - cos
                  (State_Flow_vel_P.Constant_Value_eg)) * 0.25;

    /*  Posizione Y end-effector */
    /* '<S26>:1:14' */
    F = (sqrt(x1 * x1 - ((x2 * x2 * 0.00050625 - (-0.18 - (cos
              (State_Flow_vel_P.Constant1_Value) - cos
              (State_Flow_vel_P.Constant_Value_eg)) * 0.25) * ((cos
              (State_Flow_vel_P.Constant1_Value) + cos
              (State_Flow_vel_P.Constant_Value_eg)) * 0.0225) * (-0.18 - 0.5 *
             cos(State_Flow_vel_P.Constant1_Value))) + (0.045 * cos
            (State_Flow_vel_P.Constant1_Value) + 0.0081) * (x3 * x3)) * (4.0 * F))
         + -x1) / (2.0 * F);

    /*  Posizione X end-effector */
    /* '<S26>:1:16' */
    State_Flow_vel_B.x0 = (F * 0.25 * (sin(State_Flow_vel_P.Constant1_Value) -
      sin(State_Flow_vel_P.Constant_Value_eg)) - (cos
      (State_Flow_vel_P.Constant1_Value) + cos
      (State_Flow_vel_P.Constant_Value_eg)) * 0.0225) / (-0.18 - (cos
      (State_Flow_vel_P.Constant1_Value) - cos
      (State_Flow_vel_P.Constant_Value_eg)) * 0.25);
    State_Flow_vel_B.y0 = F;

    /* Sum: '<S4>/Sum' */
    State_Flow_vel_B.Sum_e = State_Flow_vel_B.x + State_Flow_vel_B.x0;

    /* Sum: '<S4>/Sum1' */
    State_Flow_vel_B.Sum1_g = State_Flow_vel_B.y + State_Flow_vel_B.y0;

    /* MATLAB Function: '<S4>/Cinematica Inversa' */
    /* MATLAB Function 'Movimento Braccia/Cinematica Inversa': '<S24>:1' */
    /* '<S24>:1:3' */
    /* '<S24>:1:4' */
    /* '<S24>:1:6' */
    x1 = 2.0 * State_Flow_vel_B.Sum_e * 0.25 + 0.045;

    /* '<S24>:1:7' */
    x2 = 2.0 * State_Flow_vel_B.Sum1_g * 0.25;

    /* '<S24>:1:8' */
    x3 = ((State_Flow_vel_B.Sum_e * State_Flow_vel_B.Sum_e + 0.0081) +
          State_Flow_vel_B.Sum1_g * State_Flow_vel_B.Sum1_g) + 2.0 *
      State_Flow_vel_B.Sum_e * 0.09;

    /* '<S24>:1:9' */
    F = 2.0 * State_Flow_vel_B.Sum_e * 0.25 + -0.045;

    /* '<S24>:1:10' */
    x4 = 2.0 * State_Flow_vel_B.Sum1_g * 0.25;

    /* '<S24>:1:11' */
    x5 = ((State_Flow_vel_B.Sum_e * State_Flow_vel_B.Sum_e + 0.0081) +
          State_Flow_vel_B.Sum1_g * State_Flow_vel_B.Sum1_g) - 2.0 *
      State_Flow_vel_B.Sum_e * 0.09;

    /* '<S24>:1:15' */
    State_Flow_vel_B.theta1 = rt_atan2d_snf(sqrt((x1 * x1 + x2 * x2) - x3 * x3)
      + x2, x1 + x3) * 2.0;

    /* '<S24>:1:18' */
    F = rt_atan2d_snf(x4 - sqrt((F * F + x4 * x4) - x5 * x5), F + x5) * 2.0;
    if (F < -3.4906585039886591) {
      /* '<S24>:1:19' */
      /* '<S24>:1:20' */
      F += 6.2831853071795862;
    }

    State_Flow_vel_B.theta2 = F;

    /* End of MATLAB Function: '<S4>/Cinematica Inversa' */

    /* Sum: '<S4>/Sum4' */
    State_Flow_vel_B.Sum4 = State_Flow_vel_B.convert_g - State_Flow_vel_B.OffA;

    /* MATLAB Function: '<S4>/Asse A conv brac' */
    /* MATLAB Function 'Movimento Braccia/Asse A conv brac': '<S21>:1' */
    /* '<S21>:1:2' */
    State_Flow_vel_B.pos_A_conv_e = State_Flow_vel_B.Sum4 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S4>/Sum3' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    State_Flow_vel_B.Sum3 = State_Flow_vel_P.Constant1_Value +
      State_Flow_vel_B.pos_A_conv_e;

    /* Sum: '<S4>/Sum5' */
    State_Flow_vel_B.Sum5 = State_Flow_vel_B.theta2 - State_Flow_vel_B.Sum3;

    /* Gain: '<S28>/Proportional Gain' */
    State_Flow_vel_B.ProportionalGain = State_Flow_vel_P.PIDController1_P *
      State_Flow_vel_B.Sum5;

    /* DiscreteIntegrator: '<S28>/Integrator' */
    State_Flow_vel_B.Integrator = State_Flow_vel_DW.Integrator_DSTATE;

    /* Gain: '<S28>/Derivative Gain' */
    State_Flow_vel_B.DerivativeGain = State_Flow_vel_P.PIDController1_D *
      State_Flow_vel_B.Sum5;

    /* DiscreteIntegrator: '<S28>/Filter' */
    State_Flow_vel_B.Filter = State_Flow_vel_DW.Filter_DSTATE;

    /* Sum: '<S28>/SumD' */
    State_Flow_vel_B.SumD = State_Flow_vel_B.DerivativeGain -
      State_Flow_vel_B.Filter;

    /* Gain: '<S28>/Filter Coefficient' */
    State_Flow_vel_B.FilterCoefficient = State_Flow_vel_P.PIDController1_N *
      State_Flow_vel_B.SumD;

    /* MATLAB Function: '<S4>/Cinematica Inversa vel' */
    F = State_Flow_vel_B.xq_p;
    x1 = State_Flow_vel_B.yq_p;

    /* MATLAB Function 'Movimento Braccia/Cinematica Inversa vel': '<S25>:1' */
    /* '<S25>:1:3' */
    /* '<S25>:1:4' */
    /* '<S25>:1:6' */
    /* '<S25>:1:8' */
    /* '<S25>:1:10' */
    x3 = (State_Flow_vel_B.Sum1_g - 0.25 * sin(State_Flow_vel_B.theta1)) -
      (State_Flow_vel_B.Sum1_g - 0.25 * sin(State_Flow_vel_B.theta2)) *
      ((State_Flow_vel_B.Sum_e + 0.09) - 0.25 * cos(State_Flow_vel_B.theta1)) /
      ((State_Flow_vel_B.Sum_e - 0.09) - 0.25 * cos(State_Flow_vel_B.theta2));

    /* '<S25>:1:12' */
    x2 = (((State_Flow_vel_B.Sum_e + 0.09) - 0.25 * cos(State_Flow_vel_B.theta1))
          * (-0.25 * sin(State_Flow_vel_B.theta1)) + (State_Flow_vel_B.Sum1_g -
           0.25 * sin(State_Flow_vel_B.theta1)) * (0.25 * cos
           (State_Flow_vel_B.theta1))) / x3;

    /* '<S25>:1:14' */
    x3 = ((State_Flow_vel_B.Sum1_g - 0.25 * sin(State_Flow_vel_B.theta2)) *
          (-0.25 * cos(State_Flow_vel_B.theta2)) * ((State_Flow_vel_B.Sum_e +
            0.09) - 0.25 * cos(State_Flow_vel_B.theta1)) /
          ((State_Flow_vel_B.Sum_e - 0.09) - 0.25 * cos(State_Flow_vel_B.theta2))
          + ((State_Flow_vel_B.Sum_e + 0.09) - 0.25 * cos
             (State_Flow_vel_B.theta1)) * (0.25 * sin(State_Flow_vel_B.theta2)))
      / x3;

    /* '<S25>:1:16' */
    /* '<S25>:1:18' */
    /* '<S25>:1:20' */
    x5 = -(State_Flow_vel_B.Sum1_g - 0.25 * sin(State_Flow_vel_B.theta2)) /
      ((State_Flow_vel_B.Sum_e - 0.09) - 0.25 * cos(State_Flow_vel_B.theta2)) *
      x2;
    J_idx_2 = (-(State_Flow_vel_B.Sum1_g - 0.25 * sin(State_Flow_vel_B.theta2)) /
               ((State_Flow_vel_B.Sum_e - 0.09) - 0.25 * cos
                (State_Flow_vel_B.theta2)) * x3 - 0.25 * sin
               (State_Flow_vel_B.theta2)) + (State_Flow_vel_B.Sum1_g - 0.25 *
      sin(State_Flow_vel_B.theta2)) / ((State_Flow_vel_B.Sum_e - 0.09) - 0.25 *
      cos(State_Flow_vel_B.theta2)) * (0.25 * cos(State_Flow_vel_B.theta2));
    J_idx_1 = x2;
    x4 = x3;

    /* '<S25>:1:22' */
    if (fabs(J_idx_1) > fabs(x5)) {
      x2 = x5 / J_idx_1;
      x3 = 1.0 / (x2 * x4 - J_idx_2);
      c_idx_0 = x4 / J_idx_1 * x3;
      x4 = -x3;
      x5 = -J_idx_2 / J_idx_1 * x3;
      x3 *= x2;
    } else {
      x2 = J_idx_1 / x5;
      x3 = 1.0 / (x4 - x2 * J_idx_2);
      c_idx_0 = x4 / x5 * x3;
      x4 = -x2 * x3;
      x5 = -J_idx_2 / x5 * x3;
    }

    J_idx_2 = c_idx_0 * F;
    J_idx_2 += x5 * x1;
    x2 = J_idx_2;
    J_idx_2 = x4 * F;
    J_idx_2 += x3 * x1;

    /* '<S25>:1:23' */
    /* '<S25>:1:24' */
    State_Flow_vel_B.theta1_p = x2;
    State_Flow_vel_B.theta2_p = J_idx_2;

    /* End of MATLAB Function: '<S4>/Cinematica Inversa vel' */

    /* S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[16];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S33>/Velocity A' */
    State_Flow_vel_B.VelocityA_a = State_Flow_vel_B.EtherCATPDOReceive14_c;

    /* MATLAB Function: '<S33>/Vel Asse A conv' */
    State_Flow_vel_VelAsseAconv(State_Flow_vel_B.VelocityA_a,
      &State_Flow_vel_B.sf_VelAsseAconv_o);

    /* Sum: '<S4>/Sum17' */
    State_Flow_vel_B.Sum17 = State_Flow_vel_B.sf_VelAsseAconv_o.vel_A_conv -
      State_Flow_vel_B.theta2_p;

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S40>/Constant'
     *  Switch: '<S5>/Switch1'
     */
    if (State_Flow_vel_B.Memory != 0.0) {
      State_Flow_vel_B.Switch1 = State_Flow_vel_P.Constant_Value_j;
    } else {
      if (State_Flow_vel_B.Bool > State_Flow_vel_P.Switch1_Threshold) {
        /* Gain: '<S4>/Coppia theta 2 vel' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        State_Flow_vel_B.Coppiatheta2vel = State_Flow_vel_P.Coppiatheta2vel_Gain
          * State_Flow_vel_B.Sum17;

        /* Sum: '<S28>/Sum' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        State_Flow_vel_B.Sum_h = (State_Flow_vel_B.ProportionalGain +
          State_Flow_vel_B.Integrator) + State_Flow_vel_B.FilterCoefficient;

        /* Sum: '<S4>/Sum8' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        State_Flow_vel_B.Sum8_f = State_Flow_vel_B.Sum_h +
          State_Flow_vel_B.Coppiatheta2vel;

        /* Switch: '<S5>/Switch1' */
        State_Flow_vel_B.Switch1_c = State_Flow_vel_B.Sum8_f;
      } else {
        /* Switch: '<S5>/Switch1' */
        State_Flow_vel_B.Switch1_c = State_Flow_vel_B.CoppiaA;
      }

      State_Flow_vel_B.Switch1 = State_Flow_vel_B.Switch1_c;
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Saturate: '<S5>/Saturation' */
    x1 = State_Flow_vel_B.Switch1;
    x3 = State_Flow_vel_P.Saturation_LowerSat;
    F = State_Flow_vel_P.Saturation_UpperSat;
    if (x1 > F) {
      State_Flow_vel_B.Saturation = F;
    } else if (x1 < x3) {
      State_Flow_vel_B.Saturation = x3;
    } else {
      State_Flow_vel_B.Saturation = x1;
    }

    /* End of Saturate: '<S5>/Saturation' */

    /* DataTypeConversion: '<S5>/Data Type Conversion3' */
    x1 = floor(State_Flow_vel_B.Saturation);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 65536.0);
    }

    State_Flow_vel_B.DataTypeConversion3 = (int16_T)(x1 < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-x1 : (int32_T)(int16_T)(uint16_T)x1);

    /* End of DataTypeConversion: '<S5>/Data Type Conversion3' */

    /* S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */

    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[17];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S40>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S40>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[18];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S40>/Data Type Conversion14' */
    State_Flow_vel_B.DataTypeConversion14 = State_Flow_vel_B.EtherCATPDOReceive9;

    /* MATLAB Function: '<S40>/MATLAB Function' */
    State_Flow_vel_MATLABFunction(State_Flow_vel_B.Memory,
      State_Flow_vel_B.DataTypeConversion14,
      &State_Flow_vel_B.sf_MATLABFunction_e);

    /* Memory: '<S42>/Memory' */
    State_Flow_vel_B.Memory_g = State_Flow_vel_DW.Memory_PreviousInput_o;

    /* Sum: '<S4>/Sum12' */
    State_Flow_vel_B.Sum12 = State_Flow_vel_B.convert10_d -
      State_Flow_vel_B.OffB;

    /* MATLAB Function: '<S4>/Asse B conv brac1' */
    /* MATLAB Function 'Movimento Braccia/Asse B conv brac1': '<S22>:1' */
    /* '<S22>:1:2' */
    State_Flow_vel_B.pos_B_conv_k = State_Flow_vel_B.Sum12 * 6.2831853071795862 /
      16384.0 / 64.0;

    /* Sum: '<S4>/Sum2' incorporates:
     *  Constant: '<S4>/Constant'
     */
    State_Flow_vel_B.Sum2_f = State_Flow_vel_B.pos_B_conv_k +
      State_Flow_vel_P.Constant_Value_eg;

    /* Sum: '<S4>/Sum14' */
    State_Flow_vel_B.Sum14 = State_Flow_vel_B.theta1 - State_Flow_vel_B.Sum2_f;

    /* Gain: '<S29>/Proportional Gain' */
    State_Flow_vel_B.ProportionalGain_p = State_Flow_vel_P.PIDController2_P *
      State_Flow_vel_B.Sum14;

    /* DiscreteIntegrator: '<S29>/Integrator' */
    State_Flow_vel_B.Integrator_d = State_Flow_vel_DW.Integrator_DSTATE_a;

    /* Gain: '<S29>/Derivative Gain' */
    State_Flow_vel_B.DerivativeGain_b = State_Flow_vel_P.PIDController2_D *
      State_Flow_vel_B.Sum14;

    /* DiscreteIntegrator: '<S29>/Filter' */
    State_Flow_vel_B.Filter_d = State_Flow_vel_DW.Filter_DSTATE_d;

    /* Sum: '<S29>/SumD' */
    State_Flow_vel_B.SumD_e = State_Flow_vel_B.DerivativeGain_b -
      State_Flow_vel_B.Filter_d;

    /* Gain: '<S29>/Filter Coefficient' */
    State_Flow_vel_B.FilterCoefficient_g = State_Flow_vel_P.PIDController2_N *
      State_Flow_vel_B.SumD_e;

    /* S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[19];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S33>/Velocity B' */
    State_Flow_vel_B.VelocityB_p = State_Flow_vel_B.EtherCATPDOReceive15_l;

    /* MATLAB Function: '<S33>/Vel Asse B conv' */
    State_Flow_vel_VelAsseBconv(State_Flow_vel_B.VelocityB_p,
      &State_Flow_vel_B.sf_VelAsseBconv_o);

    /* Sum: '<S4>/Sum6' */
    State_Flow_vel_B.Sum6 = State_Flow_vel_B.sf_VelAsseBconv_o.vel_B_conv -
      State_Flow_vel_B.theta1_p;

    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Switch: '<S6>/Switch1'
     */
    if (State_Flow_vel_B.Memory_g != 0.0) {
      State_Flow_vel_B.Switch1_l = State_Flow_vel_P.Constant_Value_l;
    } else {
      if (State_Flow_vel_B.Bool > State_Flow_vel_P.Switch1_Threshold_f) {
        /* Gain: '<S4>/Coppia theta 1 vel' incorporates:
         *  Switch: '<S6>/Switch1'
         */
        State_Flow_vel_B.Coppiatheta1vel = State_Flow_vel_P.Coppiatheta1vel_Gain
          * State_Flow_vel_B.Sum6;

        /* Sum: '<S29>/Sum' incorporates:
         *  Switch: '<S6>/Switch1'
         */
        State_Flow_vel_B.Sum_n = (State_Flow_vel_B.ProportionalGain_p +
          State_Flow_vel_B.Integrator_d) + State_Flow_vel_B.FilterCoefficient_g;

        /* Sum: '<S4>/Sum7' incorporates:
         *  Switch: '<S6>/Switch1'
         */
        State_Flow_vel_B.Sum7_l = State_Flow_vel_B.Sum_n +
          State_Flow_vel_B.Coppiatheta1vel;

        /* Switch: '<S6>/Switch1' */
        State_Flow_vel_B.Switch1_i = State_Flow_vel_B.Sum7_l;
      } else {
        /* Switch: '<S6>/Switch1' */
        State_Flow_vel_B.Switch1_i = State_Flow_vel_B.CoppiaB;
      }

      State_Flow_vel_B.Switch1_l = State_Flow_vel_B.Switch1_i;
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Saturate: '<S6>/Saturation' */
    x1 = State_Flow_vel_B.Switch1_l;
    x3 = State_Flow_vel_P.Saturation_LowerSat_g;
    F = State_Flow_vel_P.Saturation_UpperSat_m;
    if (x1 > F) {
      State_Flow_vel_B.Saturation_e = F;
    } else if (x1 < x3) {
      State_Flow_vel_B.Saturation_e = x3;
    } else {
      State_Flow_vel_B.Saturation_e = x1;
    }

    /* End of Saturate: '<S6>/Saturation' */

    /* DataTypeConversion: '<S6>/Data Type Conversion4' */
    x1 = floor(State_Flow_vel_B.Saturation_e);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 65536.0);
    }

    State_Flow_vel_B.DataTypeConversion4 = (int16_T)(x1 < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-x1 : (int32_T)(int16_T)(uint16_T)x1);

    /* End of DataTypeConversion: '<S6>/Data Type Conversion4' */

    /* S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */

    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[20];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[21];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S42>/Data Type Conversion14' */
    State_Flow_vel_B.DataTypeConversion14_g =
      State_Flow_vel_B.EtherCATPDOReceive9_h;

    /* MATLAB Function: '<S42>/MATLAB Function' */
    State_Flow_vel_MATLABFunction(State_Flow_vel_B.Memory_g,
      State_Flow_vel_B.DataTypeConversion14_g,
      &State_Flow_vel_B.sf_MATLABFunction_a);

    /* Memory: '<S44>/Memory' */
    State_Flow_vel_B.Memory_n = State_Flow_vel_DW.Memory_PreviousInput_g;

    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S44>/Constant'
     *  Constant: '<S7>/Constant'
     */
    if (State_Flow_vel_B.Memory_n != 0.0) {
      State_Flow_vel_B.Switch1_f = State_Flow_vel_P.Constant_Value_e;
    } else {
      State_Flow_vel_B.Switch1_f = State_Flow_vel_P.Constant_Value;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* DataTypeConversion: '<S7>/Convert A' */
    x1 = floor(State_Flow_vel_B.Switch1_f);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 65536.0);
    }

    State_Flow_vel_B.ConvertA = (int16_T)(x1 < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-x1 : (int32_T)(int16_T)(uint16_T)x1);

    /* End of DataTypeConversion: '<S7>/Convert A' */

    /* S-Function (xpcethercatpdotx): '<S7>/Torque send' */

    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[22];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S44>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S44>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[23];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S44>/Data Type Conversion14' */
    State_Flow_vel_B.DataTypeConversion14_k =
      State_Flow_vel_B.EtherCATPDOReceive9_hd;

    /* MATLAB Function: '<S44>/MATLAB Function' */
    State_Flow_vel_MATLABFunction(State_Flow_vel_B.Memory_n,
      State_Flow_vel_B.DataTypeConversion14_k,
      &State_Flow_vel_B.sf_MATLABFunction_f);

    /* Sum: '<S58>/Sum' */
    State_Flow_vel_B.Sum_i = State_Flow_vel_B.convert -
      State_Flow_vel_B.OffA_vite;

    /* MATLAB Function: '<S67>/Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv': '<S68>:1' */
    /* '<S68>:1:2' */
    State_Flow_vel_B.pos_A_conv = State_Flow_vel_B.Sum_i * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S14>/Sum3' */
    State_Flow_vel_B.Sum3_o = State_Flow_vel_B.convert10 -
      State_Flow_vel_B.OffB_vite;

    /* MATLAB Function: '<S67>/Asse B conv v' */
    /* MATLAB Function 'Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v': '<S69>:1' */
    /* '<S69>:1:2' */
    State_Flow_vel_B.pos_B_conv_v = State_Flow_vel_B.Sum3_o * 0.02 /
      6.2831853071795862 * 3.1415926535897931 / 2048.0 / 40.0;

    /* Sum: '<S67>/Sum5' */
    State_Flow_vel_B.Sum5_h = State_Flow_vel_B.pos_A_conv +
      State_Flow_vel_B.pos_B_conv_v;

    /* Sum: '<S61>/Sum2' */
    State_Flow_vel_B.Sum2_b = State_Flow_vel_B.Clock - State_Flow_vel_B.OffT;

    /* MATLAB Function: '<S14>/Rifermento Asse A Vite' incorporates:
     *  Constant: '<Root>/Alzata A'
     *  Constant: '<Root>/Periodo A'
     */
    State_Flow_vel_AsseB(State_Flow_vel_B.Sum2_b, State_Flow_vel_P.AlzataA_Value,
                         State_Flow_vel_P.PeriodoA_Value,
                         &State_Flow_vel_B.sf_RifermentoAsseAVite);

    /* S-Function (xpcethercatpdorx): '<S65>/EtherCAT PDO Receive14' */

    /* Level2 S-Function Block: '<S65>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[24];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S65>/Velocity A' */
    State_Flow_vel_B.VelocityA_m = State_Flow_vel_B.EtherCATPDOReceive14_l;

    /* S-Function (xpcethercatpdorx): '<S65>/EtherCAT PDO Receive15' */

    /* Level2 S-Function Block: '<S65>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[25];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S65>/Velocity B' */
    State_Flow_vel_B.VelocityB_h = State_Flow_vel_B.EtherCATPDOReceive15_e;

    /* MATLAB Function: '<S65>/Vel Asse A conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse A conv': '<S70>:1' */
    /* '<S70>:1:2' */
    State_Flow_vel_B.vel_A_conv = (State_Flow_vel_B.VelocityA_m +
      State_Flow_vel_B.VelocityB_h) * 0.02 / 6.2831853071795862 *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Switch: '<S7>/Switch' */
    if (State_Flow_vel_B.Bool > State_Flow_vel_P.Switch_Threshold) {
      /* Sum: '<S14>/Sum8' */
      State_Flow_vel_B.Sum8 = State_Flow_vel_B.sf_RifermentoAsseAVite.ldm_vel -
        State_Flow_vel_B.vel_A_conv;

      /* Gain: '<S62>/Gain6' */
      State_Flow_vel_B.Gain6 = State_Flow_vel_P.Gain6_Gain *
        State_Flow_vel_B.Sum8;

      /* Sum: '<S14>/Sum1' */
      State_Flow_vel_B.Sum1_o = State_Flow_vel_B.sf_RifermentoAsseAVite.ldm_pos
        - State_Flow_vel_B.Sum5_h;

      /* Gain: '<S62>/Gain' */
      State_Flow_vel_B.Gain_hw = State_Flow_vel_P.Gain_Gain *
        State_Flow_vel_B.Sum1_o;

      /* Sum: '<S62>/Sum9' */
      State_Flow_vel_B.Sum9 = State_Flow_vel_B.Gain_hw + State_Flow_vel_B.Gain6;

      /* Gain: '<S7>/Gain' */
      State_Flow_vel_B.Gain_a = State_Flow_vel_P.Gain_Gain_j *
        State_Flow_vel_B.Sum9;
      State_Flow_vel_B.Switch = State_Flow_vel_B.Gain_a;
    } else {
      State_Flow_vel_B.Switch = State_Flow_vel_B.CoppiaH;
    }

    /* End of Switch: '<S7>/Switch' */
    /* Memory: '<S46>/Memory' */
    State_Flow_vel_B.Memory_a = State_Flow_vel_DW.Memory_PreviousInput_h;

    /* MATLAB Function: '<S14>/Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Asse B conv': '<S60>:1' */
    /* '<S60>:1:2' */
    State_Flow_vel_B.pos_B_conv = State_Flow_vel_B.Sum3_o * 3.1415926535897931 /
      2048.0 / 40.0;

    /* MATLAB Function: '<S14>/Asse B' incorporates:
     *  Constant: '<Root>/Alzata B '
     *  Constant: '<Root>/Periodo B'
     */
    State_Flow_vel_AsseB(State_Flow_vel_B.Sum2_b, State_Flow_vel_P.AlzataB_Value,
                         State_Flow_vel_P.PeriodoB_Value,
                         &State_Flow_vel_B.sf_AsseB);

    /* MATLAB Function: '<S65>/Vel Asse B conv' */
    /* MATLAB Function 'Sistema Vite/Velocita vite /Vel Asse B conv': '<S71>:1' */
    /* '<S71>:1:2' */
    State_Flow_vel_B.vel_B_conv = State_Flow_vel_B.VelocityB_h *
      3.1415926535897931 / 20480.0 / 40.0;

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S46>/Constant'
     *  Switch: '<S8>/Switch2'
     */
    if (State_Flow_vel_B.Memory_a != 0.0) {
      State_Flow_vel_B.Switch1_k = State_Flow_vel_P.Constant_Value_o;
    } else {
      if (State_Flow_vel_B.Bool > State_Flow_vel_P.Switch2_Threshold) {
        /* Sum: '<S14>/Sum6' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        State_Flow_vel_B.Sum6_f = State_Flow_vel_B.sf_AsseB.ldm_vel -
          State_Flow_vel_B.vel_B_conv;

        /* Gain: '<S14>/Gain4' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        State_Flow_vel_B.Gain4 = State_Flow_vel_P.Gain4_Gain *
          State_Flow_vel_B.Sum6_f;

        /* Sum: '<S14>/Sum4' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        State_Flow_vel_B.Sum4_i = State_Flow_vel_B.sf_AsseB.ldm_pos -
          State_Flow_vel_B.pos_B_conv;

        /* Gain: '<S14>/Gain2' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        State_Flow_vel_B.Gain2 = State_Flow_vel_P.Gain2_Gain *
          State_Flow_vel_B.Sum4_i;

        /* Sum: '<S14>/Sum7' incorporates:
         *  Switch: '<S8>/Switch2'
         */
        State_Flow_vel_B.Sum7 = State_Flow_vel_B.Gain2 + State_Flow_vel_B.Gain4;

        /* Switch: '<S8>/Switch2' */
        State_Flow_vel_B.Switch2 = State_Flow_vel_B.Sum7;
      } else {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S8>/Constant1'
         */
        State_Flow_vel_B.Switch2 = State_Flow_vel_P.Constant1_Value_e;
      }

      State_Flow_vel_B.Switch1_k = State_Flow_vel_B.Switch2;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* DataTypeConversion: '<S8>/Convert B' */
    x1 = floor(State_Flow_vel_B.Switch1_k);
    if (rtIsNaN(x1) || rtIsInf(x1)) {
      x1 = 0.0;
    } else {
      x1 = fmod(x1, 65536.0);
    }

    State_Flow_vel_B.ConvertB = (int16_T)(x1 < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-x1 : (int32_T)(int16_T)(uint16_T)x1);

    /* End of DataTypeConversion: '<S8>/Convert B' */

    /* S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */

    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[26];
      sfcnOutputs(rts,1);
    }

    /* S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive9' */

    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[27];
      sfcnOutputs(rts,1);
    }

    /* DataTypeConversion: '<S46>/Data Type Conversion14' */
    State_Flow_vel_B.DataTypeConversion14_e =
      State_Flow_vel_B.EtherCATPDOReceive9_d;

    /* MATLAB Function: '<S46>/MATLAB Function' */
    State_Flow_vel_MATLABFunction(State_Flow_vel_B.Memory_a,
      State_Flow_vel_B.DataTypeConversion14_e,
      &State_Flow_vel_B.sf_MATLABFunction_i);

    /* Gain: '<S34>/Gain' */
    State_Flow_vel_B.Gain_k = State_Flow_vel_P.Gain_Gain_l *
      State_Flow_vel_B.theta1;

    /* Gain: '<S35>/Gain' */
    State_Flow_vel_B.Gain_p = State_Flow_vel_P.Gain_Gain_f *
      State_Flow_vel_B.Sum2_f;

    /* Gain: '<S36>/Gain' */
    State_Flow_vel_B.Gain_b = State_Flow_vel_P.Gain_Gain_jq *
      State_Flow_vel_B.theta2;

    /* Gain: '<S37>/Gain' */
    State_Flow_vel_B.Gain_g = State_Flow_vel_P.Gain_Gain_k *
      State_Flow_vel_B.Sum3;

    /* Gain: '<S28>/Integral Gain' */
    State_Flow_vel_B.IntegralGain = State_Flow_vel_P.PIDController1_I *
      State_Flow_vel_B.Sum5;

    /* Gain: '<S29>/Integral Gain' */
    State_Flow_vel_B.IntegralGain_f = State_Flow_vel_P.PIDController2_I *
      State_Flow_vel_B.Sum14;

    /* SampleTimeMath: '<S63>/TSamp'
     *
     * About '<S63>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    State_Flow_vel_B.TSamp = State_Flow_vel_B.pos_B_conv *
      State_Flow_vel_P.TSamp_WtEt;

    /* UnitDelay: '<S63>/UD' */
    State_Flow_vel_B.Uk1 = State_Flow_vel_DW.UD_DSTATE;

    /* Sum: '<S63>/Diff' */
    State_Flow_vel_B.Diff = State_Flow_vel_B.TSamp - State_Flow_vel_B.Uk1;

    /* SampleTimeMath: '<S66>/TSamp'
     *
     * About '<S66>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    State_Flow_vel_B.TSamp_c = State_Flow_vel_B.Sum5_h *
      State_Flow_vel_P.TSamp_WtEt_n;

    /* UnitDelay: '<S66>/UD' */
    State_Flow_vel_B.Uk1_f = State_Flow_vel_DW.UD_DSTATE_f;

    /* Sum: '<S66>/Diff' */
    State_Flow_vel_B.Diff_i = State_Flow_vel_B.TSamp_c - State_Flow_vel_B.Uk1_f;

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
static void State_Flow_vel_update(void)
{
  /* Update for Memory: '<S40>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput =
    State_Flow_vel_B.sf_MATLABFunction_e.y;

  /* Update for DiscreteIntegrator: '<S28>/Integrator' */
  State_Flow_vel_DW.Integrator_DSTATE += State_Flow_vel_P.Integrator_gainval *
    State_Flow_vel_B.IntegralGain;

  /* Update for DiscreteIntegrator: '<S28>/Filter' */
  State_Flow_vel_DW.Filter_DSTATE += State_Flow_vel_P.Filter_gainval *
    State_Flow_vel_B.FilterCoefficient;

  /* Update for Memory: '<S42>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput_o =
    State_Flow_vel_B.sf_MATLABFunction_a.y;

  /* Update for DiscreteIntegrator: '<S29>/Integrator' */
  State_Flow_vel_DW.Integrator_DSTATE_a += State_Flow_vel_P.Integrator_gainval_o
    * State_Flow_vel_B.IntegralGain_f;

  /* Update for DiscreteIntegrator: '<S29>/Filter' */
  State_Flow_vel_DW.Filter_DSTATE_d += State_Flow_vel_P.Filter_gainval_m *
    State_Flow_vel_B.FilterCoefficient_g;

  /* Update for Memory: '<S44>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput_g =
    State_Flow_vel_B.sf_MATLABFunction_f.y;

  /* Update for Memory: '<S46>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput_h =
    State_Flow_vel_B.sf_MATLABFunction_i.y;

  /* Update for UnitDelay: '<S63>/UD' */
  State_Flow_vel_DW.UD_DSTATE = State_Flow_vel_B.TSamp;

  /* Update for UnitDelay: '<S66>/UD' */
  State_Flow_vel_DW.UD_DSTATE_f = State_Flow_vel_B.TSamp_c;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++State_Flow_vel_M->Timing.clockTick0)) {
    ++State_Flow_vel_M->Timing.clockTickH0;
  }

  State_Flow_vel_M->Timing.t[0] = State_Flow_vel_M->Timing.clockTick0 *
    State_Flow_vel_M->Timing.stepSize0 + State_Flow_vel_M->Timing.clockTickH0 *
    State_Flow_vel_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++State_Flow_vel_M->Timing.clockTick1)) {
      ++State_Flow_vel_M->Timing.clockTickH1;
    }

    State_Flow_vel_M->Timing.t[1] = State_Flow_vel_M->Timing.clockTick1 *
      State_Flow_vel_M->Timing.stepSize1 + State_Flow_vel_M->Timing.clockTickH1 *
      State_Flow_vel_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void State_Flow_vel_initialize(void)
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
        State_Flow_vel_DW.EtherCATInit_RWORK.EXECRATIO = 0.001 /
          slrteGetCurrentStepSize();
        status = xpcGetPciConfigAtSlot( 4, 1, &pciInfo);
        if (status ) {
          rtmSetErrorStatus(State_Flow_vel_M,
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
          rtmSetErrorStatus(State_Flow_vel_M,
                            "No valid Ethernet board found at bus 4 slot 1");
        } else {
          char *logfile = "c:\\dbglog.txt";
          mwStateClear( 0 );
          status = xpcEtherCATinitialize(0, DeviceType, 4, 1, 0, 1,
            xmlecatArr_0, xmlecatArr_0_count,0,
            1, logfile, 0.001, 0 );
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(State_Flow_vel_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
        }
      }
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
    /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S12>/Motore vite A' */
    /* Level2 S-Function Block: '<S12>/Motore vite A' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S12>/Motore vite B' */
    /* Level2 S-Function Block: '<S12>/Motore vite B' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S16>/Status Word' */
    /* Level2 S-Function Block: '<S16>/Status Word' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[7];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S11>/Motore braccia A' */
    /* Level2 S-Function Block: '<S11>/Motore braccia A' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[8];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S11>/Motore braccia B' */
    /* Level2 S-Function Block: '<S11>/Motore braccia B' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[9];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
    /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[10];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S17>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S17>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[11];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S17>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S17>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[12];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
    /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[13];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
    /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[14];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
    /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[15];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[16];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
    /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[17];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S40>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S40>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[18];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[19];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
    /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[20];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[21];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
    /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[22];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S44>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S44>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[23];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S65>/EtherCAT PDO Receive14' */
    /* Level2 S-Function Block: '<S65>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[24];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S65>/EtherCAT PDO Receive15' */
    /* Level2 S-Function Block: '<S65>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[25];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
    /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[26];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive9' */
    /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[27];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  /* InitializeConditions for Memory: '<S40>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput = State_Flow_vel_P.Memory_X0;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Integrator' */
  State_Flow_vel_DW.Integrator_DSTATE = State_Flow_vel_P.Integrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Filter' */
  State_Flow_vel_DW.Filter_DSTATE = State_Flow_vel_P.Filter_IC;

  /* InitializeConditions for Memory: '<S42>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput_o = State_Flow_vel_P.Memory_X0_m;

  /* InitializeConditions for DiscreteIntegrator: '<S29>/Integrator' */
  State_Flow_vel_DW.Integrator_DSTATE_a = State_Flow_vel_P.Integrator_IC_f;

  /* InitializeConditions for DiscreteIntegrator: '<S29>/Filter' */
  State_Flow_vel_DW.Filter_DSTATE_d = State_Flow_vel_P.Filter_IC_b;

  /* InitializeConditions for Memory: '<S44>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput_g = State_Flow_vel_P.Memory_X0_o;

  /* InitializeConditions for Memory: '<S46>/Memory' */
  State_Flow_vel_DW.Memory_PreviousInput_h = State_Flow_vel_P.Memory_X0_e;

  /* InitializeConditions for UnitDelay: '<S63>/UD' */
  State_Flow_vel_DW.UD_DSTATE = State_Flow_vel_P.DiscreteDerivativeB_ICPrevScale;

  /* InitializeConditions for UnitDelay: '<S66>/UD' */
  State_Flow_vel_DW.UD_DSTATE_f =
    State_Flow_vel_P.DiscreteDerivativeA_ICPrevScale;
  State_Flow_vel_DW.sfEvent = -1;
  State_Flow_vel_DW.temporalCounter_i1 = 0U;
  State_Flow_vel_DW.is_active_c15_State_Flow_vel = 0U;
  State_Flow_vel_DW.is_c15_State_Flow_vel = State_Flow_v_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<Root>/State flow robot' incorporates:
   *  SystemInitialize for SubSystem: '<S15>/Homing'
   */
  /* SystemInitialize for Outport: '<S72>/CA' */
  State_Flow_vel_B.CA = State_Flow_vel_P.CA_Y0;

  /* SystemInitialize for Outport: '<S72>/CB' */
  State_Flow_vel_B.CB = State_Flow_vel_P.CB_Y0;

  /* SystemInitialize for Outport: '<S72>/CH' */
  State_Flow_vel_B.CH = State_Flow_vel_P.CH_Y0;
}

/* Model terminate function */
static void State_Flow_vel_terminate(void)
{
  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 5' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 5' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 6' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 6' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 3' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 3' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<Root>/EtherCAT PDO Transmit 4' */
  /* Level2 S-Function Block: '<Root>/EtherCAT PDO Transmit 4' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S12>/Motore vite A' */
  /* Level2 S-Function Block: '<S12>/Motore vite A' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S12>/Motore vite B' */
  /* Level2 S-Function Block: '<S12>/Motore vite B' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S16>/Status Word' */
  /* Level2 S-Function Block: '<S16>/Status Word' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S1>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S1>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S11>/Motore braccia A' */
  /* Level2 S-Function Block: '<S11>/Motore braccia A' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S11>/Motore braccia B' */
  /* Level2 S-Function Block: '<S11>/Motore braccia B' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S2>/EtherCAT PDO Receive16' */
  /* Level2 S-Function Block: '<S2>/EtherCAT PDO Receive16' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S17>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S17>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S17>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S17>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Bianca' */
  /* Level2 S-Function Block: '<S3>/Luce Bianca' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Rossa ' */
  /* Level2 S-Function Block: '<S3>/Luce Rossa ' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S3>/Luce Verde' */
  /* Level2 S-Function Block: '<S3>/Luce Verde' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S5>/EtherCAT PDO Transmit 1' */
  /* Level2 S-Function Block: '<S5>/EtherCAT PDO Transmit 1' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S40>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S40>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S33>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S33>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S6>/EtherCAT PDO Transmit 7' */
  /* Level2 S-Function Block: '<S6>/EtherCAT PDO Transmit 7' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S42>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S42>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S7>/Torque send' */
  /* Level2 S-Function Block: '<S7>/Torque send' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S44>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S44>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S65>/EtherCAT PDO Receive14' */
  /* Level2 S-Function Block: '<S65>/EtherCAT PDO Receive14' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S65>/EtherCAT PDO Receive15' */
  /* Level2 S-Function Block: '<S65>/EtherCAT PDO Receive15' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdotx): '<S8>/EtherCAT PDO Transmit 2' */
  /* Level2 S-Function Block: '<S8>/EtherCAT PDO Transmit 2' (xpcethercatpdotx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcethercatpdorx): '<S46>/EtherCAT PDO Receive9' */
  /* Level2 S-Function Block: '<S46>/EtherCAT PDO Receive9' (xpcethercatpdorx) */
  {
    SimStruct *rts = State_Flow_vel_M->childSfunctions[27];
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
  State_Flow_vel_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  State_Flow_vel_update();
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
  State_Flow_vel_initialize();
}

void MdlTerminate(void)
{
  State_Flow_vel_terminate();
}

/* Registration function */
RT_MODEL_State_Flow_vel_T *State_Flow_vel(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)State_Flow_vel_M, 0,
                sizeof(RT_MODEL_State_Flow_vel_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&State_Flow_vel_M->solverInfo,
                          &State_Flow_vel_M->Timing.simTimeStep);
    rtsiSetTPtr(&State_Flow_vel_M->solverInfo, &rtmGetTPtr(State_Flow_vel_M));
    rtsiSetStepSizePtr(&State_Flow_vel_M->solverInfo,
                       &State_Flow_vel_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&State_Flow_vel_M->solverInfo, (&rtmGetErrorStatus
      (State_Flow_vel_M)));
    rtsiSetRTModelPtr(&State_Flow_vel_M->solverInfo, State_Flow_vel_M);
  }

  rtsiSetSimTimeStep(&State_Flow_vel_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&State_Flow_vel_M->solverInfo,"FixedStepDiscrete");
  State_Flow_vel_M->solverInfoPtr = (&State_Flow_vel_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = State_Flow_vel_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    State_Flow_vel_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    State_Flow_vel_M->Timing.sampleTimes =
      (&State_Flow_vel_M->Timing.sampleTimesArray[0]);
    State_Flow_vel_M->Timing.offsetTimes =
      (&State_Flow_vel_M->Timing.offsetTimesArray[0]);

    /* task periods */
    State_Flow_vel_M->Timing.sampleTimes[0] = (0.0);
    State_Flow_vel_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    State_Flow_vel_M->Timing.offsetTimes[0] = (0.0);
    State_Flow_vel_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(State_Flow_vel_M, &State_Flow_vel_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = State_Flow_vel_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    State_Flow_vel_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(State_Flow_vel_M, -1);
  State_Flow_vel_M->Timing.stepSize0 = 0.001;
  State_Flow_vel_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    State_Flow_vel_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(State_Flow_vel_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(State_Flow_vel_M->rtwLogInfo, (NULL));
    rtliSetLogT(State_Flow_vel_M->rtwLogInfo, "tout");
    rtliSetLogX(State_Flow_vel_M->rtwLogInfo, "");
    rtliSetLogXFinal(State_Flow_vel_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(State_Flow_vel_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(State_Flow_vel_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(State_Flow_vel_M->rtwLogInfo, 0);
    rtliSetLogDecimation(State_Flow_vel_M->rtwLogInfo, 1);
    rtliSetLogY(State_Flow_vel_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(State_Flow_vel_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(State_Flow_vel_M->rtwLogInfo, (NULL));
  }

  State_Flow_vel_M->solverInfoPtr = (&State_Flow_vel_M->solverInfo);
  State_Flow_vel_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&State_Flow_vel_M->solverInfo, 0.001);
  rtsiSetSolverMode(&State_Flow_vel_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  State_Flow_vel_M->blockIO = ((void *) &State_Flow_vel_B);
  (void) memset(((void *) &State_Flow_vel_B), 0,
                sizeof(B_State_Flow_vel_T));

  /* parameters */
  State_Flow_vel_M->defaultParam = ((real_T *)&State_Flow_vel_P);

  /* states (dwork) */
  State_Flow_vel_M->dwork = ((void *) &State_Flow_vel_DW);
  (void) memset((void *)&State_Flow_vel_DW, 0,
                sizeof(DW_State_Flow_vel_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  State_Flow_vel_InitializeDataMapInfo(State_Flow_vel_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &State_Flow_vel_M->NonInlinedSFcns.sfcnInfo;
    State_Flow_vel_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(State_Flow_vel_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &State_Flow_vel_M->Sizes.numSampTimes);
    State_Flow_vel_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (State_Flow_vel_M)[0]);
    State_Flow_vel_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (State_Flow_vel_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,State_Flow_vel_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(State_Flow_vel_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(State_Flow_vel_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (State_Flow_vel_M));
    rtssSetStepSizePtr(sfcnInfo, &State_Flow_vel_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(State_Flow_vel_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &State_Flow_vel_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &State_Flow_vel_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &State_Flow_vel_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &State_Flow_vel_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &State_Flow_vel_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &State_Flow_vel_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &State_Flow_vel_M->solverInfoPtr);
  }

  State_Flow_vel_M->Sizes.numSFcns = (28);

  /* register each child */
  {
    (void) memset((void *)&State_Flow_vel_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  28*sizeof(SimStruct));
    State_Flow_vel_M->childSfunctions =
      (&State_Flow_vel_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 28; i++) {
        State_Flow_vel_M->childSfunctions[i] =
          (&State_Flow_vel_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: State_Flow_vel/<Root>/EtherCAT PDO Transmit 5 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion7);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 5");
      ssSetPath(rts, "State_Flow_vel/EtherCAT PDO Transmit 5");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit5_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit5_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit5_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<Root>/EtherCAT PDO Transmit 6 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 6");
      ssSetPath(rts, "State_Flow_vel/EtherCAT PDO Transmit 6");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit6_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit6_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit6_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<Root>/EtherCAT PDO Transmit 3 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion5);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 3");
      ssSetPath(rts, "State_Flow_vel/EtherCAT PDO Transmit 3");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit3_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit3_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<Root>/EtherCAT PDO Transmit 4 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 4");
      ssSetPath(rts, "State_Flow_vel/EtherCAT PDO Transmit 4");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit4_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit4_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S12>/Motore vite A (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.MotoreviteA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite A");
      ssSetPath(rts, "State_Flow_vel/Posizione Vite/Motore vite A");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.MotoreviteA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.MotoreviteA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.MotoreviteA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.MotoreviteA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.MotoreviteA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.MotoreviteA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.MotoreviteA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.MotoreviteA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.MotoreviteA_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S12>/Motore vite B (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.MotoreviteB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore vite B");
      ssSetPath(rts, "State_Flow_vel/Posizione Vite/Motore vite B");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.MotoreviteB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.MotoreviteB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.MotoreviteB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.MotoreviteB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.MotoreviteB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.MotoreviteB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.MotoreviteB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.MotoreviteB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.MotoreviteB_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S16>/Status Word (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &State_Flow_vel_B.StatusWord));
        }
      }

      /* path info */
      ssSetModelName(rts, "Status Word");
      ssSetPath(rts, "State_Flow_vel/Status/Status Word");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.StatusWord_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.StatusWord_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.StatusWord_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.StatusWord_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.StatusWord_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.StatusWord_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.StatusWord_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.StatusWord_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.StatusWord_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S1>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &State_Flow_vel_B.EtherCATPDOReceive16));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "State_Flow_vel/Finecorsa Vite/EtherCAT PDO Receive16");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive16_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive16_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S11>/Motore braccia A (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.MotorebracciaA));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia A");
      ssSetPath(rts, "State_Flow_vel/Posizione Braccia /Motore braccia A");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.MotorebracciaA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.MotorebracciaA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.MotorebracciaA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.MotorebracciaA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.MotorebracciaA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.MotorebracciaA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.MotorebracciaA_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.MotorebracciaA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.MotorebracciaA_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S11>/Motore braccia B (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.MotorebracciaB));
        }
      }

      /* path info */
      ssSetModelName(rts, "Motore braccia B");
      ssSetPath(rts, "State_Flow_vel/Posizione Braccia /Motore braccia B");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.MotorebracciaB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.MotorebracciaB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.MotorebracciaB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.MotorebracciaB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.MotorebracciaB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.MotorebracciaB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.MotorebracciaB_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.MotorebracciaB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.MotorebracciaB_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S2>/EtherCAT PDO Receive16 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &State_Flow_vel_B.EtherCATPDOReceive16_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive16");
      ssSetPath(rts, "State_Flow_vel/Finecorsa braccia/EtherCAT PDO Receive16");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P4_Size_b);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P5_Size_c);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive16_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive16_IWORK_l
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive16_IWORK_l[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S17>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.EtherCATPDOReceive14));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts, "State_Flow_vel/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive14_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive14_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S17>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.EtherCATPDOReceive15));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts, "State_Flow_vel/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive15_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive15_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S3>/Luce Bianca (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion25);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Bianca");
      ssSetPath(rts, "State_Flow_vel/LED Status/Luce Bianca");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.LuceBianca_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.LuceBianca_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.LuceBianca_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.LuceBianca_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.LuceBianca_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.LuceBianca_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.LuceBianca_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.LuceBianca_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.LuceBianca_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S3>/Luce Rossa  (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion24);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Rossa ");
      ssSetPath(rts, "State_Flow_vel/LED Status/Luce Rossa ");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.LuceRossa_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.LuceRossa_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.LuceRossa_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.LuceRossa_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.LuceRossa_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.LuceRossa_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.LuceRossa_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.LuceRossa_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.LuceRossa_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S3>/Luce Verde (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion26);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Luce Verde");
      ssSetPath(rts, "State_Flow_vel/LED Status/Luce Verde");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.LuceVerde_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.LuceVerde_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.LuceVerde_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.LuceVerde_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.LuceVerde_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.LuceVerde_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.LuceVerde_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.LuceVerde_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.LuceVerde_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S33>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.EtherCATPDOReceive14_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "State_Flow_vel/Movimento Braccia/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P3_Size_e);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive14_IWORK_j
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive14_IWORK_j[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S5>/EtherCAT PDO Transmit 1 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 1");
      ssSetPath(rts, "State_Flow_vel/Out Asse A Braccia/EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit1_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S40>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &State_Flow_vel_B.EtherCATPDOReceive9));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "State_Flow_vel/Out Asse A Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S33>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.EtherCATPDOReceive15_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "State_Flow_vel/Movimento Braccia/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P3_Size_o);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P7_Size_n);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive15_IWORK_m
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive15_IWORK_m[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S6>/EtherCAT PDO Transmit 7 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.DataTypeConversion4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 7");
      ssSetPath(rts, "State_Flow_vel/Out Asse B Braccia/EtherCAT PDO Transmit 7");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit7_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit7_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S42>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &State_Flow_vel_B.EtherCATPDOReceive9_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "State_Flow_vel/Out Asse B Braccia/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P6_Size_e);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P7_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK_n[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S7>/Torque send (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.ConvertA);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Torque send");
      ssSetPath(rts, "State_Flow_vel/Out asse A Vite/Torque send");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)State_Flow_vel_P.Torquesend_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)State_Flow_vel_P.Torquesend_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)State_Flow_vel_P.Torquesend_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)State_Flow_vel_P.Torquesend_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)State_Flow_vel_P.Torquesend_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)State_Flow_vel_P.Torquesend_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)State_Flow_vel_P.Torquesend_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.Torquesend_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.Torquesend_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S44>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &State_Flow_vel_B.EtherCATPDOReceive9_hd));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "State_Flow_vel/Out asse A Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P2_Size_a);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P5_Size_a);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P7_Size_p);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK_g[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S65>/EtherCAT PDO Receive14 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.EtherCATPDOReceive14_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive14");
      ssSetPath(rts,
                "State_Flow_vel/Sistema Vite/Velocita vite /EtherCAT PDO Receive14");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P4_Size_gq);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P5_Size_d);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive14_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &State_Flow_vel_DW.EtherCATPDOReceive14_IWORK_je[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive14_IWORK_je[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S65>/EtherCAT PDO Receive15 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &State_Flow_vel_B.EtherCATPDOReceive15_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive15");
      ssSetPath(rts,
                "State_Flow_vel/Sistema Vite/Velocita vite /EtherCAT PDO Receive15");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P5_Size_l);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive15_P7_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive15_IWORK_e
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive15_IWORK_e[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S8>/EtherCAT PDO Transmit 2 (xpcethercatpdotx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &State_Flow_vel_B.ConvertB);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Transmit 2");
      ssSetPath(rts, "State_Flow_vel/Out asse B Vite/EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOTransmit2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOTransmit2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOTransmit2_IWORK[0]);
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

    /* Level2 S-Function Block: State_Flow_vel/<S46>/EtherCAT PDO Receive9 (xpcethercatpdorx) */
    {
      SimStruct *rts = State_Flow_vel_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = State_Flow_vel_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = State_Flow_vel_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = State_Flow_vel_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &State_Flow_vel_M->NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, State_Flow_vel_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &State_Flow_vel_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &State_Flow_vel_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &State_Flow_vel_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &State_Flow_vel_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &State_Flow_vel_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &State_Flow_vel_B.EtherCATPDOReceive9_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "EtherCAT PDO Receive9");
      ssSetPath(rts,
                "State_Flow_vel/Out asse B Vite/Fungo/EtherCAT PDO Receive9");
      ssSetRTModel(rts,State_Flow_vel_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P5_Size_aa);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P6_Size_m);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       State_Flow_vel_P.EtherCATPDOReceive9_P7_Size_pq);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &State_Flow_vel_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &State_Flow_vel_DW.EtherCATPDOReceive9_IWORK_l[0]);
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
  State_Flow_vel_M->Sizes.numContStates = (0);/* Number of continuous states */
  State_Flow_vel_M->Sizes.numY = (0);  /* Number of model outputs */
  State_Flow_vel_M->Sizes.numU = (0);  /* Number of model inputs */
  State_Flow_vel_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  State_Flow_vel_M->Sizes.numSampTimes = (2);/* Number of sample times */
  State_Flow_vel_M->Sizes.numBlocks = (269);/* Number of blocks */
  State_Flow_vel_M->Sizes.numBlockIO = (193);/* Number of block outputs */
  State_Flow_vel_M->Sizes.numBlockPrms = (1708);/* Sum of parameter "widths" */
  return State_Flow_vel_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
