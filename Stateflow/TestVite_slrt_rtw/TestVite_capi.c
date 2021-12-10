/*
 * TestVite_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TestVite".
 *
 * Model version              : 1.2
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Dec 10 10:39:23 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "TestVite_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "TestVite.h"
#include "TestVite_capi.h"
#include "TestVite_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Convert B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 2, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 3, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 1 },

  { 4, 0, TARGET_STRING("Ramp/Clock"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Ramp/Product"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Ramp/Step"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Ramp/Output"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Ramp/Sum"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 9, TARGET_STRING("Ramp"),
    TARGET_STRING("slope"), 3, 0, 0 },

  { 10, TARGET_STRING("Ramp"),
    TARGET_STRING("start"), 3, 0, 0 },

  { 11, TARGET_STRING("Ramp"),
    TARGET_STRING("X0"), 3, 0, 0 },

  { 12, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 13, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 14, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 3, 2, 0 },

  { 15, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 16, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 3, 0, 0 },

  { 17, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 3, 0, 0 },

  { 18, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 3, 0, 0 },

  { 19, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 3, 0, 0 },

  { 20, TARGET_STRING("EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 3, 0, 0 },

  { 21, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 3, 3, 0 },

  { 22, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 23, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 3, 0, 0 },

  { 24, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 3, 0, 0 },

  { 25, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 3, 0, 0 },

  { 26, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 3, 0, 0 },

  { 27, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 3, 0, 0 },

  { 28, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 3, 3, 0 },

  { 29, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 30, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 3, 0, 0 },

  { 31, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 3, 0, 0 },

  { 32, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 3, 0, 0 },

  { 33, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 3, 0, 0 },

  { 34, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 3, 0, 0 },

  { 35, TARGET_STRING("Ramp/Step"),
    TARGET_STRING("Before"), 3, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &TestVite_B.ConvertB,                /* 0: Signal */
  &TestVite_B.DataTypeConversion1,     /* 1: Signal */
  &TestVite_B.DataTypeConversion2,     /* 2: Signal */
  &TestVite_B.EtherCATInit[0],         /* 3: Signal */
  &TestVite_B.Clock,                   /* 4: Signal */
  &TestVite_B.Product,                 /* 5: Signal */
  &TestVite_B.Step,                    /* 6: Signal */
  &TestVite_B.Output,                  /* 7: Signal */
  &TestVite_B.Sum,                     /* 8: Signal */
  &TestVite_P.Ramp_slope,              /* 9: Mask Parameter */
  &TestVite_P.Ramp_start,              /* 10: Mask Parameter */
  &TestVite_P.Ramp_X0,                 /* 11: Mask Parameter */
  &TestVite_P.AsseAvite_Value,         /* 12: Block Parameter */
  &TestVite_P.AsseBvite_Value,         /* 13: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P1[0],/* 14: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P2, /* 15: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P3, /* 16: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P4, /* 17: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P5, /* 18: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P6, /* 19: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit2_P7, /* 20: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P1[0],/* 21: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P2, /* 22: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P3, /* 23: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P4, /* 24: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P5, /* 25: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P6, /* 26: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit4_P7, /* 27: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P1[0],/* 28: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P2, /* 29: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P3, /* 30: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P4, /* 31: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P5, /* 32: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P6, /* 33: Block Parameter */
  &TestVite_P.EtherCATPDOTransmit6_P7, /* 34: Block Parameter */
  &TestVite_P.Step_Y0,                 /* 35: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  38,                                  /* 5 */
  1,                                   /* 6 */
  43                                   /* 7 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.001
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    1, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 9,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 27,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 613220126U,
    366401385U,
    2131869397U,
    3536766454U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  TestVite_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void TestVite_InitializeDataMapInfo(RT_MODEL_TestVite_T *const TestVite_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(TestVite_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(TestVite_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(TestVite_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(TestVite_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(TestVite_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  TestVite_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (TestVite_M);
  TestVite_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_TestVite_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(TestVite_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(TestVite_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(TestVite_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void TestVite_host_InitializeDataMapInfo(TestVite_host_DataMapInfo_T *dataMap,
    const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: TestVite_capi.c */
