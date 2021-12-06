/*
 * StateflowKalman_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "StateflowKalman_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "StateflowKalman.h"
#include "StateflowKalman_capi.h"
#include "StateflowKalman_private.h"
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
  { 0, 58, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING("bool"), 0, 0, 0, 0, 0 },

  { 1, 58, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING("offC"), 1, 0, 0, 0, 0 },

  { 2, 58, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING("homeH"), 2, 0, 0, 0, 0 },

  { 3, 58, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING("offAv"), 3, 0, 0, 0, 0 },

  { 4, 58, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING("offBv"), 4, 0, 0, 0, 0 },

  { 5, 58, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING("offAb"), 5, 0, 0, 0, 0 },

  { 6, 58, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING("offBb"), 6, 0, 0, 0, 0 },

  { 7, 58, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING("homeA"), 7, 0, 0, 0, 0 },

  { 8, 58, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING("homeB"), 8, 0, 0, 0, 0 },

  { 9, 58, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING("luci"), 9, 0, 0, 0, 0 },

  { 10, 58, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING("Hv"), 10, 0, 0, 0, 0 },

  { 11, 58, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING("Hb"), 11, 0, 0, 0, 0 },

  { 12, 58, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING("Enable"), 12, 0, 0, 0, 0 },

  { 13, 58, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING("FineLav"), 13, 0, 0, 0, 0 },

  { 14, 58, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 58, TARGET_STRING("State flow robot/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 16, 58, TARGET_STRING("State flow robot/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Abbassa"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Discesa"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Reset"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("StartHome"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("StartRobot"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("StartWork"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("StartZero"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Stop"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 30, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 0 },

  { 31, 0, TARGET_STRING("Finecorsa Vite/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Finecorsa Vite/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 34, 0, TARGET_STRING("Finecorsa braccia/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Finecorsa braccia/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 37, 1, TARGET_STRING("LED Status/MATLAB Function"),
    TARGET_STRING("rosso"), 0, 0, 0, 0, 0 },

  { 38, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING("bianco"), 0, 0, 0, 0, 0 },

  { 39, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING("verde"), 0, 0, 0, 0, 0 },

  { 40, 0, TARGET_STRING("LED Status/Data Type Conversion24"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 41, 0, TARGET_STRING("LED Status/Data Type Conversion25"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 42, 0, TARGET_STRING("LED Status/Data Type Conversion26"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 43, 0, TARGET_STRING("Out Asse A Braccia/Data Type Conversion3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 44, 0, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 5, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 8, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 50, 10, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 11, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 13, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Posizione Braccia /convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Posizione Braccia /convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Posizione Vite/convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Posizione Vite/convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 63, 17, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 17, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 65, 18, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 66, 19, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 19, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Sistema Vite/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Sistema Vite/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Sistema Vite/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Sistema Vite/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("Sistema Vite/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING("Sistema Vite/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 22, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p1"),
    TARGET_STRING("theta1"), 0, 0, 0, 0, 1 },

  { 77, 22, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p2"),
    TARGET_STRING("theta2"), 1, 0, 0, 0, 1 },

  { 78, 23, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 23, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 80, 24, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 24, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 82, 25, TARGET_STRING("Sistema_braccia/Cinematica diretta/p1"),
    TARGET_STRING("xr"), 0, 0, 0, 0, 0 },

  { 83, 25, TARGET_STRING("Sistema_braccia/Cinematica diretta/p2"),
    TARGET_STRING("yr"), 1, 0, 0, 0, 0 },

  { 84, 26, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 26, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 86, 27, TARGET_STRING("Sistema_braccia/Coppia motrice/p1"),
    TARGET_STRING("coppia1"), 0, 0, 0, 0, 1 },

  { 87, 27, TARGET_STRING("Sistema_braccia/Coppia motrice/p2"),
    TARGET_STRING("coppia2"), 1, 0, 0, 0, 1 },

  { 88, 28, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p1"),
    TARGET_STRING("c1"), 0, 0, 0, 0, 1 },

  { 89, 28, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p2"),
    TARGET_STRING("c2"), 1, 0, 0, 0, 1 },

  { 90, 28, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 1 },

  { 91, 28, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p4"),
    TARGET_STRING("ntilde"), 3, 0, 3, 0, 1 },

  { 92, 40, TARGET_STRING("Sistema_braccia/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 40, TARGET_STRING("Sistema_braccia/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 94, 41, TARGET_STRING("Sistema_braccia/MATLAB Function3"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 95, 42, TARGET_STRING("Sistema_braccia/MATLAB Function4/p1"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 96, 42, TARGET_STRING("Sistema_braccia/MATLAB Function4/p2"),
    TARGET_STRING(""), 1, 0, 4, 0, 1 },

  { 97, 42, TARGET_STRING("Sistema_braccia/MATLAB Function4/p3"),
    TARGET_STRING(""), 2, 0, 4, 0, 1 },

  { 98, 43, TARGET_STRING("Sistema_braccia/MATLAB Function5/p1"),
    TARGET_STRING("xhat"), 0, 0, 5, 0, 1 },

  { 99, 43, TARGET_STRING("Sistema_braccia/MATLAB Function5/p2"),
    TARGET_STRING("yhat"), 1, 0, 5, 0, 1 },

  { 100, 44, TARGET_STRING("Sistema_braccia/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 44, TARGET_STRING("Sistema_braccia/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 102, 7, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 4, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 105, 0, TARGET_STRING("Sistema_braccia/Memory"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 106, 0, TARGET_STRING("Sistema_braccia/Memory1"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 107, 0, TARGET_STRING("Sistema_braccia/Memory2"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 108, 0, TARGET_STRING("Sistema_braccia/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Sistema_braccia/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Sistema_braccia/Sum"),
    TARGET_STRING("Xmov"), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING("Sistema_braccia/Sum1"),
    TARGET_STRING("Ymov"), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Sistema_braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 113, 0, TARGET_STRING("Sistema_braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 114, 0, TARGET_STRING("Sistema_braccia/Sum4"),
    TARGET_STRING("q"), 0, 0, 6, 0, 1 },

  { 115, 0, TARGET_STRING("Sistema_braccia/Sum5"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 116, 0, TARGET_STRING("Sistema_braccia/Sum7"),
    TARGET_STRING("qdot"), 0, 0, 6, 0, 1 },

  { 117, 0, TARGET_STRING("Sistema_braccia/Sum9"),
    TARGET_STRING("Y"), 0, 0, 6, 0, 1 },

  { 118, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 120, 6, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 122, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 123, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 124, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 125, 9, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 127, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 130, 12, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 132, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 133, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 134, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 135, 14, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 138, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 139, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 140, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 143, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 144, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 145, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 146, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 147, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 148, 20, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 21, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 150, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 151, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 152, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 153, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 154, 0, TARGET_STRING("Sistema_braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 155, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionEnable"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 156, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/ReshapeX0"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 157, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapeu"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 158, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapexhat"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 159, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapey"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 160, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapeyhat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 161, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/ManualSwitchPZ"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 162, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/MemoryX"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 163, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionEnable"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 164, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/ReshapeX0"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 165, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapeu"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 166, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapexhat"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 167, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapey"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 168, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapeyhat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 169, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/ManualSwitchPZ"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 170, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/MemoryX"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 171, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 172, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 173, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 174, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 175, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 176, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 177, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 178, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 179, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 180, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 181, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 182, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 183, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 184, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 185, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 186, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 187, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 188, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 189, 38, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 190, 38, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 191, 38, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 192, 38, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 193, 38, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 194, 38, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 195, 39, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 196, 39, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 197, 39, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 198, 39, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 199, 39, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 200, 39, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 201, 0, TARGET_STRING("Sistema_braccia/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 202, 0, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 203, 0, TARGET_STRING("Sistema_braccia/PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 204, 0, TARGET_STRING("Sistema_braccia/PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 205, 0, TARGET_STRING("Sistema_braccia/PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 206, 45, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 45, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 208, 46, TARGET_STRING("Sistema_braccia/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 209, 47, TARGET_STRING("Sistema_braccia/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 0, TARGET_STRING("Sistema_braccia/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 213, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 216, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 217, 48, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 49, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 222, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 223, 50, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 51, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 225, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 227, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 228, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 229, 53, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 230, 53, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 231, 54, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 232, 54, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 233, 55, TARGET_STRING(
    "State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 234, 55, TARGET_STRING(
    "State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 235, 55, TARGET_STRING(
    "State flow robot/Posizionamento/Conversione in gradi "),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 236, 55, TARGET_STRING("State flow robot/Posizionamento/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 237, 55, TARGET_STRING("State flow robot/Posizionamento/Ki1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 238, 55, TARGET_STRING("State flow robot/Posizionamento/Ki2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 239, 55, TARGET_STRING("State flow robot/Posizionamento/Kp1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 240, 55, TARGET_STRING("State flow robot/Posizionamento/Kp2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 241, 55, TARGET_STRING("State flow robot/Posizionamento/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 242, 55, TARGET_STRING("State flow robot/Posizionamento/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 243, 55, TARGET_STRING("State flow robot/Posizionamento/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 244, 55, TARGET_STRING("State flow robot/Posizionamento/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 245, 55, TARGET_STRING("State flow robot/Posizionamento/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 246, 55, TARGET_STRING("State flow robot/Posizionamento/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 247, 55, TARGET_STRING("State flow robot/Posizionamento/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 248, 56, TARGET_STRING("State flow robot/Setting/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 249, 56, TARGET_STRING("State flow robot/Setting/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 250, 56, TARGET_STRING("State flow robot/Setting/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 251, 57, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 252, 57, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 253, 57, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 254, 57, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 255, 57, TARGET_STRING("State flow robot/Setting/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 256, 57, TARGET_STRING("State flow robot/Setting/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 257, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 258, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 260, 15, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 261, 16, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculateYhat/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculateYhat/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculateYhat/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionA/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 267, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionB/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionC/Conversion"),
    TARGET_STRING(""), 0, 0, 8, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionD/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionG/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionH/Conversion"),
    TARGET_STRING(""), 0, 0, 8, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionN/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 6, 3, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionP0/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionQ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionR/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionReset/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionX/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionX0/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/A[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 281, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/B[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 282, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/Reshape"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 283, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/Add"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 284, 31, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Add"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 285, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculateYhat/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculateYhat/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculateYhat/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionA/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionB/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionC/Conversion"),
    TARGET_STRING(""), 0, 0, 8, 0, 0 },

  { 291, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionD/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionG/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionH/Conversion"),
    TARGET_STRING(""), 0, 0, 8, 0, 0 },

  { 294, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionN/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 6, 3, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionP0/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 297, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionQ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionR/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionReset/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionX/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionX0/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/A[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 303, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/B[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 304, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/Reshape"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 305, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/Add"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 306, 34, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Add"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 307, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 308, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 309, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 310, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 311, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 312, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 313, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 314, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 315, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 316, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 317, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 318, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 319, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 320, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 321, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 322, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 323, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 324, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 325, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionL/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 326, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionM/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 327, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 328, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionZ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 329, 29, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/C[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 330, 29, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/D[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 331, 29, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Product3"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 332, 29, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Add1"),
    TARGET_STRING("yhat[k|k-1]"), 0, 0, 0, 0, 0 },

  { 333, 29, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 334, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 335, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 336, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product2"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 337, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 338, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionL/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 339, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionM/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 340, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 341, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionZ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 342, 32, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/C[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 343, 32, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/D[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 344, 32, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Product3"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 345, 32, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Add1"),
    TARGET_STRING("yhat[k|k-1]"), 0, 0, 0, 0, 0 },

  { 346, 32, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 347, 33, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 348, 33, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 349, 33, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product2"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 350, 33, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 351, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 352, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 353, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 354, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 355, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 356, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 357, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 358, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 359, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 360, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 361, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 362, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 363, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 364, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 365, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 366, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 367, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 368, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 369, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 370, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 371, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 372, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 373, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 374, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 375, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 376, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 377, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 378, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 379, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 380, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 381, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 382, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 383, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 384, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 385, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 386, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 387, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 388, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 389, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 390, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 391, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 392, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 393, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 394, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 395, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 396, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 397, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 398, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 399, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 400, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 401, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 402, TARGET_STRING("Abbassa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 403, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 404, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 405, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 406, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 407, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 408, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 409, TARGET_STRING("Discesa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 410, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 411, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 412, TARGET_STRING("Reset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 413, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 414, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 415, TARGET_STRING("StartWork"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 416, TARGET_STRING("StartZero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 417, TARGET_STRING("Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 418, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 419, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 420, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 421, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 422, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 423, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 424, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 425, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 426, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 427, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 428, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 429, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 430, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 431, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 432, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 433, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 434, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 435, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 436, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 437, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 438, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 439, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 440, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 441, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 442, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 443, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 444, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 445, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 446, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 447, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 448, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 449, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 450, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 451, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 452, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 453, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 454, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 455, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 456, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 457, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 458, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 459, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 460, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 461, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 462, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 463, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 464, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 465, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 466, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 467, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 468, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 469, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 470, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 471, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 472, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 473, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 474, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 475, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 476, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 477, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 478, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 479, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 480, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 481, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 482, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 483, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 484, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 485, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 486, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 487, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 488, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 489, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 490, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 491, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 492, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 493, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 494, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 495, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 496, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 497, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 498, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 499, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 500, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 501, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 502, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 503, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 504, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 505, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 506, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 507, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 508, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 509, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 510, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 511, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 512, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 513, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 514, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 515, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 516, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 517, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 518, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 519, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 520, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 521, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 522, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 523, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 524, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 525, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 526, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 527, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 528, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 529, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 530, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 531, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 532, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 533, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 534, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 535, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 536, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 537, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 538, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 539, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 540, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 541, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 542, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 543, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 544, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 545, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 546, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 547, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 548, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 549, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 550, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 551, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 552, TARGET_STRING("Sistema_braccia/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 553, TARGET_STRING("Sistema_braccia/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 554, TARGET_STRING("Sistema_braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 555, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 556, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 557, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 558, TARGET_STRING("Sistema_braccia/Memory"),
    TARGET_STRING("X0"), 0, 4, 0 },

  { 559, TARGET_STRING("Sistema_braccia/Memory1"),
    TARGET_STRING("X0"), 0, 5, 0 },

  { 560, TARGET_STRING("Sistema_braccia/Memory2"),
    TARGET_STRING("X0"), 0, 5, 0 },

  { 561, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 562, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 563, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 564, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 565, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 566, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 567, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 568, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 570, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 571, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 572, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 573, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 574, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 575, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 576, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 577, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 578, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 579, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 580, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 581, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 582, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 583, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 584, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 585, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 586, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 587, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 588, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 589, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 590, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 591, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 592, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 593, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 594, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 595, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 597, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 598, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 599, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 600, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 601, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 602, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 603, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 604, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 605, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 606, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 607, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 608, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 609, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 610, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 611, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 612, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 613, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 614, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 615, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 616, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 617, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 618, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 619, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 620, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 621, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 622, TARGET_STRING("Sistema_braccia/Kalman Filter1/A"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 623, TARGET_STRING("Sistema_braccia/Kalman Filter1/B"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 624, TARGET_STRING("Sistema_braccia/Kalman Filter1/C"),
    TARGET_STRING("Value"), 0, 16, 0 },

  { 625, TARGET_STRING("Sistema_braccia/Kalman Filter1/D"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 626, TARGET_STRING("Sistema_braccia/Kalman Filter1/Enable"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 627, TARGET_STRING("Sistema_braccia/Kalman Filter1/G"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 628, TARGET_STRING("Sistema_braccia/Kalman Filter1/H"),
    TARGET_STRING("Value"), 0, 16, 0 },

  { 629, TARGET_STRING("Sistema_braccia/Kalman Filter1/N"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 630, TARGET_STRING("Sistema_braccia/Kalman Filter1/P0"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 631, TARGET_STRING("Sistema_braccia/Kalman Filter1/Q"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 632, TARGET_STRING("Sistema_braccia/Kalman Filter1/R"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 633, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reset"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 634, TARGET_STRING("Sistema_braccia/Kalman Filter1/X0"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 635, TARGET_STRING("Sistema_braccia/Kalman Filter1/ManualSwitchPZ"),
    TARGET_STRING("CurrentSetting"), 7, 0, 0 },

  { 636, TARGET_STRING("Sistema_braccia/Kalman Filter1/MemoryX"),
    TARGET_STRING("DelayLength"), 8, 0, 0 },

  { 637, TARGET_STRING("Sistema_braccia/Kalman Filter2/A"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 638, TARGET_STRING("Sistema_braccia/Kalman Filter2/B"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 639, TARGET_STRING("Sistema_braccia/Kalman Filter2/C"),
    TARGET_STRING("Value"), 0, 16, 0 },

  { 640, TARGET_STRING("Sistema_braccia/Kalman Filter2/D"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 641, TARGET_STRING("Sistema_braccia/Kalman Filter2/Enable"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 642, TARGET_STRING("Sistema_braccia/Kalman Filter2/G"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 643, TARGET_STRING("Sistema_braccia/Kalman Filter2/H"),
    TARGET_STRING("Value"), 0, 16, 0 },

  { 644, TARGET_STRING("Sistema_braccia/Kalman Filter2/N"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 645, TARGET_STRING("Sistema_braccia/Kalman Filter2/P0"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 646, TARGET_STRING("Sistema_braccia/Kalman Filter2/Q"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 647, TARGET_STRING("Sistema_braccia/Kalman Filter2/R"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 648, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reset"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 649, TARGET_STRING("Sistema_braccia/Kalman Filter2/X0"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 650, TARGET_STRING("Sistema_braccia/Kalman Filter2/ManualSwitchPZ"),
    TARGET_STRING("CurrentSetting"), 7, 0, 0 },

  { 651, TARGET_STRING("Sistema_braccia/Kalman Filter2/MemoryX"),
    TARGET_STRING("DelayLength"), 8, 0, 0 },

  { 652, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 653, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 654, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 655, TARGET_STRING("Sistema_braccia/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 656, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 657, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 658, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 659, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 660, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 661, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 662, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 663, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 664, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 665, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 666, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 667, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 668, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 669, TARGET_STRING("Sistema_braccia/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 670, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 671, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 672, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 673, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 674, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 675, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 676, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 677, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 678, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 679, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 680, TARGET_STRING("Sistema_braccia/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 681, TARGET_STRING("Sistema_braccia/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 682, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 683, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 684, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 685, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 686, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 687, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 688, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 689, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 690, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 691, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 692, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 693, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 694, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 695, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 696, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 697, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 698, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 699, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 700, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 701, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 702, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 703, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 704, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 705, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 706, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 707, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 708, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 709, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 710, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 711, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 712, TARGET_STRING("State flow robot/Posizionamento/CoppiaA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 713, TARGET_STRING("State flow robot/Posizionamento/CoppiaB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 714, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 715, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 716, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 717, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 718, TARGET_STRING("State flow robot/Posizionamento/Conversione in gradi "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 719, TARGET_STRING("State flow robot/Posizionamento/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 720, TARGET_STRING("State flow robot/Posizionamento/Ki1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 721, TARGET_STRING("State flow robot/Posizionamento/Ki2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 722, TARGET_STRING("State flow robot/Posizionamento/Kp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 723, TARGET_STRING("State flow robot/Posizionamento/Kp2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 724, TARGET_STRING("State flow robot/Setting/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 725, TARGET_STRING("State flow robot/Setting/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 726, TARGET_STRING("State flow robot/Setting/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 727, TARGET_STRING("State flow robot/Setting/Ki"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 728, TARGET_STRING("State flow robot/Setting/Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 729, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 730, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 731, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 732, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 733, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 734, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 735, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 736, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculatePL/ConstantP"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 737, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculatePL/CovarianceZ"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 738, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculatePL/KalmanGainL"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 739, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculatePL/KalmanGainM"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 740, TARGET_STRING("Sistema_braccia/Kalman Filter1/ReducedQRN/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 741, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P1"), 3, 17, 0 },

  { 742, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 743, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P3"), 4, 0, 0 },

  { 744, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 745, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 746, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P6"), 2, 0, 0 },

  { 747, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P7"), 2, 0, 0 },

  { 748, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P8"), 2, 0, 0 },

  { 749, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P1"), 3, 17, 0 },

  { 750, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 751, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P3"), 4, 0, 0 },

  { 752, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 753, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 754, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P6"), 2, 0, 0 },

  { 755, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P7"), 2, 0, 0 },

  { 756, TARGET_STRING("Sistema_braccia/Kalman Filter1/checky/CheckSignalProperties"),
    TARGET_STRING("P8"), 2, 0, 0 },

  { 757, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculatePL/ConstantP"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 758, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculatePL/CovarianceZ"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 759, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculatePL/KalmanGainL"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 760, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculatePL/KalmanGainM"),
    TARGET_STRING("Value"), 0, 6, 0 },

  { 761, TARGET_STRING("Sistema_braccia/Kalman Filter2/ReducedQRN/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 762, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P1"), 3, 17, 0 },

  { 763, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 764, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P3"), 4, 0, 0 },

  { 765, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 766, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 767, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P6"), 2, 0, 0 },

  { 768, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P7"), 2, 0, 0 },

  { 769, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P8"), 2, 0, 0 },

  { 770, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P1"), 3, 17, 0 },

  { 771, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P2"), 3, 0, 0 },

  { 772, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P3"), 4, 0, 0 },

  { 773, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 774, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 775, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P6"), 2, 0, 0 },

  { 776, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P7"), 2, 0, 0 },

  { 777, TARGET_STRING("Sistema_braccia/Kalman Filter2/checky/CheckSignalProperties"),
    TARGET_STRING("P8"), 2, 0, 0 },

  { 778, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 779, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 780, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 781, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 782, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 783, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 784, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/L*(y[k]-yhat[k|k-1])"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 785, TARGET_STRING("Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/deltax"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 786, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/L*(y[k]-yhat[k|k-1])"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 787, TARGET_STRING("Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/deltax"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 788, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 789, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 790, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 791, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 792, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 793, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 794, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 795, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 796, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 797, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 798, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 799, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 800, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 801, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 802, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 803, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 804, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 805, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 806, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 807, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 808, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 809, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 810, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 811, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 812, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 813, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 814, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 815, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 816, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 817, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 818, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 819, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 820, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

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
  &StateflowKalman_B.Bool,             /* 0: Signal */
  &StateflowKalman_B.OffT,             /* 1: Signal */
  &StateflowKalman_B.CoppiaH,          /* 2: Signal */
  &StateflowKalman_B.OffA_vite,        /* 3: Signal */
  &StateflowKalman_B.OffB_vite,        /* 4: Signal */
  &StateflowKalman_B.OffA,             /* 5: Signal */
  &StateflowKalman_B.OffB,             /* 6: Signal */
  &StateflowKalman_B.CoppiaA,          /* 7: Signal */
  &StateflowKalman_B.CoppiaB,          /* 8: Signal */
  &StateflowKalman_B.Luci,             /* 9: Signal */
  &StateflowKalman_B.Hv,               /* 10: Signal */
  &StateflowKalman_B.Hb,               /* 11: Signal */
  &StateflowKalman_B.Enable,           /* 12: Signal */
  &StateflowKalman_B.FineLavorazione,  /* 13: Signal */
  &StateflowKalman_B.PosRifA,          /* 14: Signal */
  &StateflowKalman_B.PosRifB,          /* 15: Signal */
  &StateflowKalman_B.Stato,            /* 16: Signal */
  &StateflowKalman_B.Clock,            /* 17: Signal */
  &StateflowKalman_B.Abbassa,          /* 18: Signal */
  &StateflowKalman_B.Discesa,          /* 19: Signal */
  &StateflowKalman_B.Reset,            /* 20: Signal */
  &StateflowKalman_B.StartHome,        /* 21: Signal */
  &StateflowKalman_B.StartRobot,       /* 22: Signal */
  &StateflowKalman_B.StartWork,        /* 23: Signal */
  &StateflowKalman_B.StartZero,        /* 24: Signal */
  &StateflowKalman_B.Stop,             /* 25: Signal */
  &StateflowKalman_B.DataTypeConversion1_p,/* 26: Signal */
  &StateflowKalman_B.DataTypeConversion2,/* 27: Signal */
  &StateflowKalman_B.DataTypeConversion5,/* 28: Signal */
  &StateflowKalman_B.DataTypeConversion7,/* 29: Signal */
  &StateflowKalman_B.EtherCATInit[0],  /* 30: Signal */
  &StateflowKalman_B.DataTypeConversion8,/* 31: Signal */
  &StateflowKalman_B.EtherCATPDOReceive16,/* 32: Signal */
  &StateflowKalman_B.IntegertoBitConverter[0],/* 33: Signal */
  &StateflowKalman_B.DataTypeConversion8_f,/* 34: Signal */
  &StateflowKalman_B.EtherCATPDOReceive16_d,/* 35: Signal */
  &StateflowKalman_B.IntegertoBitConverter_d[0],/* 36: Signal */
  &StateflowKalman_B.y_i,              /* 37: Signal */
  &StateflowKalman_B.y_b,              /* 38: Signal */
  &StateflowKalman_B.y_f,              /* 39: Signal */
  &StateflowKalman_B.DataTypeConversion24,/* 40: Signal */
  &StateflowKalman_B.DataTypeConversion25,/* 41: Signal */
  &StateflowKalman_B.DataTypeConversion26,/* 42: Signal */
  &StateflowKalman_B.DataTypeConversion3,/* 43: Signal */
  &StateflowKalman_B.CoppiaAbracciasaturata,/* 44: Signal */
  &StateflowKalman_B.Switch1_c,        /* 45: Signal */
  &StateflowKalman_B.DataTypeConversion4,/* 46: Signal */
  &StateflowKalman_B.CoppiaBbracciasaturata,/* 47: Signal */
  &StateflowKalman_B.Switch1_i,        /* 48: Signal */
  &StateflowKalman_B.ConvertA,         /* 49: Signal */
  &StateflowKalman_B.Gain_m,           /* 50: Signal */
  &StateflowKalman_B.Switch,           /* 51: Signal */
  &StateflowKalman_B.ConvertB,         /* 52: Signal */
  &StateflowKalman_B.CoppiaAvitesaturata,/* 53: Signal */
  &StateflowKalman_B.Switch2,          /* 54: Signal */
  &StateflowKalman_B.convert,          /* 55: Signal */
  &StateflowKalman_B.convert10,        /* 56: Signal */
  &StateflowKalman_B.MotorebracciaA,   /* 57: Signal */
  &StateflowKalman_B.MotorebracciaB,   /* 58: Signal */
  &StateflowKalman_B.convert_k,        /* 59: Signal */
  &StateflowKalman_B.convert10_p,      /* 60: Signal */
  &StateflowKalman_B.MotoreviteA,      /* 61: Signal */
  &StateflowKalman_B.MotoreviteB,      /* 62: Signal */
  &StateflowKalman_B.ldm_pos_n,        /* 63: Signal */
  &StateflowKalman_B.ldm_vel_c,        /* 64: Signal */
  &StateflowKalman_B.pos_B_conv_p,     /* 65: Signal */
  &StateflowKalman_B.ldm_pos,          /* 66: Signal */
  &StateflowKalman_B.ldm_vel,          /* 67: Signal */
  &StateflowKalman_B.Gain2,            /* 68: Signal */
  &StateflowKalman_B.Gain4,            /* 69: Signal */
  &StateflowKalman_B.Sum1,             /* 70: Signal */
  &StateflowKalman_B.Sum3,             /* 71: Signal */
  &StateflowKalman_B.Sum4_l,           /* 72: Signal */
  &StateflowKalman_B.Sum6,             /* 73: Signal */
  &StateflowKalman_B.Sum7_n,           /* 74: Signal */
  &StateflowKalman_B.Sum8,             /* 75: Signal */
  &StateflowKalman_B.theta1_l,         /* 76: Signal */
  &StateflowKalman_B.theta2_j,         /* 77: Signal */
  &StateflowKalman_B.theta1_pp,        /* 78: Signal */
  &StateflowKalman_B.theta2_pp,        /* 79: Signal */
  &StateflowKalman_B.theta1_p,         /* 80: Signal */
  &StateflowKalman_B.theta2_p,         /* 81: Signal */
  &StateflowKalman_B.x_n,              /* 82: Signal */
  &StateflowKalman_B.y_k,              /* 83: Signal */
  &StateflowKalman_B.x_pp_f,           /* 84: Signal */
  &StateflowKalman_B.y_pp_l,           /* 85: Signal */
  &StateflowKalman_B.Cm1,              /* 86: Signal */
  &StateflowKalman_B.Cm2,              /* 87: Signal */
  &StateflowKalman_B.C1,               /* 88: Signal */
  &StateflowKalman_B.C2,               /* 89: Signal */
  &StateflowKalman_B.M[0],             /* 90: Signal */
  &StateflowKalman_B.K_f[0],           /* 91: Signal */
  &StateflowKalman_B.xp,               /* 92: Signal */
  &StateflowKalman_B.yp,               /* 93: Signal */
  &StateflowKalman_B.F[0],             /* 94: Signal */
  &StateflowKalman_B.K[0],             /* 95: Signal */
  &StateflowKalman_B.H[0],             /* 96: Signal */
  &StateflowKalman_B.Pt1[0],           /* 97: Signal */
  &StateflowKalman_B.xhatt1[0],        /* 98: Signal */
  &StateflowKalman_B.yhatt1[0],        /* 99: Signal */
  &StateflowKalman_B.x_p,              /* 100: Signal */
  &StateflowKalman_B.y_p,              /* 101: Signal */
  &StateflowKalman_B.Gain_na,          /* 102: Signal */
  &StateflowKalman_B.Gain1_i,          /* 103: Signal */
  &StateflowKalman_B.Kd[0],            /* 104: Signal */
  &StateflowKalman_B.Memory_dw[0],     /* 105: Signal */
  &StateflowKalman_B.Memory1[0],       /* 106: Signal */
  &StateflowKalman_B.Memory2[0],       /* 107: Signal */
  &StateflowKalman_B.RateTransition,   /* 108: Signal */
  &StateflowKalman_B.RateTransition1,  /* 109: Signal */
  &StateflowKalman_B.Xmov,             /* 110: Signal */
  &StateflowKalman_B.Ymov,             /* 111: Signal */
  &StateflowKalman_B.Sum2_d,           /* 112: Signal */
  &StateflowKalman_B.Sum3_b,           /* 113: Signal */
  &StateflowKalman_B.q[0],             /* 114: Signal */
  &StateflowKalman_B.Sum5_d[0],        /* 115: Signal */
  &StateflowKalman_B.qdot[0],          /* 116: Signal */
  &StateflowKalman_B.Y[0],             /* 117: Signal */
  &StateflowKalman_B.DataTypeConversion6,/* 118: Signal */
  &StateflowKalman_B.StatusWord,       /* 119: Signal */
  &StateflowKalman_B.sf_MATLABFunction_e.y,/* 120: Signal */
  &StateflowKalman_B.DataTypeConversion14,/* 121: Signal */
  &StateflowKalman_B.Memory,           /* 122: Signal */
  &StateflowKalman_B.EtherCATPDOReceive9,/* 123: Signal */
  &StateflowKalman_B.Switch1,          /* 124: Signal */
  &StateflowKalman_B.sf_MATLABFunction_a.y,/* 125: Signal */
  &StateflowKalman_B.DataTypeConversion14_g,/* 126: Signal */
  &StateflowKalman_B.Memory_g,         /* 127: Signal */
  &StateflowKalman_B.EtherCATPDOReceive9_h,/* 128: Signal */
  &StateflowKalman_B.Switch1_l,        /* 129: Signal */
  &StateflowKalman_B.sf_MATLABFunction_f.y,/* 130: Signal */
  &StateflowKalman_B.DataTypeConversion14_k,/* 131: Signal */
  &StateflowKalman_B.Memory_n,         /* 132: Signal */
  &StateflowKalman_B.EtherCATPDOReceive9_hd,/* 133: Signal */
  &StateflowKalman_B.Switch1_f,        /* 134: Signal */
  &StateflowKalman_B.sf_MATLABFunction_fb.y,/* 135: Signal */
  &StateflowKalman_B.DataTypeConversion14_h,/* 136: Signal */
  &StateflowKalman_B.Memory_d,         /* 137: Signal */
  &StateflowKalman_B.EtherCATPDOReceive9_m,/* 138: Signal */
  &StateflowKalman_B.Switch1_h,        /* 139: Signal */
  &StateflowKalman_B.Sum_p,            /* 140: Signal */
  &StateflowKalman_B.Sum2_m,           /* 141: Signal */
  &StateflowKalman_B.Gain,             /* 142: Signal */
  &StateflowKalman_B.Gain6,            /* 143: Signal */
  &StateflowKalman_B.Sum9_p,           /* 144: Signal */
  &StateflowKalman_B.Diff,             /* 145: Signal */
  &StateflowKalman_B.TSamp,            /* 146: Signal */
  &StateflowKalman_B.Uk1,              /* 147: Signal */
  &StateflowKalman_B.vel_A_conv_d,     /* 148: Signal */
  &StateflowKalman_B.vel_B_conv_d,     /* 149: Signal */
  &StateflowKalman_B.VelocityA_b,      /* 150: Signal */
  &StateflowKalman_B.VelocityB_d,      /* 151: Signal */
  &StateflowKalman_B.EtherCATPDOReceive14_j,/* 152: Signal */
  &StateflowKalman_B.EtherCATPDOReceive15_k,/* 153: Signal */
  &StateflowKalman_B.Sum2,             /* 154: Signal */
  &StateflowKalman_B.DataTypeConversionEnable_i,/* 155: Signal */
  &StateflowKalman_B.ReshapeX0_i[0],   /* 156: Signal */
  &StateflowKalman_B.Reshapeu_m,       /* 157: Signal */
  &StateflowKalman_B.Reshapexhat_m[0], /* 158: Signal */
  &StateflowKalman_B.Reshapey_e,       /* 159: Signal */
  &StateflowKalman_B.Reshapeyhat,      /* 160: Signal */
  &StateflowKalman_B.ManualSwitchPZ[0],/* 161: Signal */
  &StateflowKalman_B.MemoryX_m[0],     /* 162: Signal */
  &StateflowKalman_B.DataTypeConversionEnable,/* 163: Signal */
  &StateflowKalman_B.ReshapeX0[0],     /* 164: Signal */
  &StateflowKalman_B.Reshapeu,         /* 165: Signal */
  &StateflowKalman_B.Reshapexhat[0],   /* 166: Signal */
  &StateflowKalman_B.Reshapey,         /* 167: Signal */
  &StateflowKalman_B.Reshapeyhat_f,    /* 168: Signal */
  &StateflowKalman_B.ManualSwitchPZ_l[0],/* 169: Signal */
  &StateflowKalman_B.MemoryX[0],       /* 170: Signal */
  &StateflowKalman_B.xct,              /* 171: Signal */
  &StateflowKalman_B.yct,              /* 172: Signal */
  &StateflowKalman_B.xct_p,            /* 173: Signal */
  &StateflowKalman_B.yct_p,            /* 174: Signal */
  &StateflowKalman_B.xct_pp,           /* 175: Signal */
  &StateflowKalman_B.yct_pp,           /* 176: Signal */
  &StateflowKalman_B.xc,               /* 177: Signal */
  &StateflowKalman_B.yc,               /* 178: Signal */
  &StateflowKalman_B.xc_p,             /* 179: Signal */
  &StateflowKalman_B.yc_p,             /* 180: Signal */
  &StateflowKalman_B.xc_pp,            /* 181: Signal */
  &StateflowKalman_B.yc_pp,            /* 182: Signal */
  &StateflowKalman_B.xq,               /* 183: Signal */
  &StateflowKalman_B.yq,               /* 184: Signal */
  &StateflowKalman_B.xq_p,             /* 185: Signal */
  &StateflowKalman_B.yq_p,             /* 186: Signal */
  &StateflowKalman_B.xq_pp,            /* 187: Signal */
  &StateflowKalman_B.yq_pp,            /* 188: Signal */
  &StateflowKalman_B.x,                /* 189: Signal */
  &StateflowKalman_B.y,                /* 190: Signal */
  &StateflowKalman_B.x_p_l,            /* 191: Signal */
  &StateflowKalman_B.y_p_o,            /* 192: Signal */
  &StateflowKalman_B.x_pp,             /* 193: Signal */
  &StateflowKalman_B.y_pp,             /* 194: Signal */
  &StateflowKalman_B.xs,               /* 195: Signal */
  &StateflowKalman_B.ys,               /* 196: Signal */
  &StateflowKalman_B.xs_p,             /* 197: Signal */
  &StateflowKalman_B.ys_p,             /* 198: Signal */
  &StateflowKalman_B.xs_pp,            /* 199: Signal */
  &StateflowKalman_B.ys_pp,            /* 200: Signal */
  &StateflowKalman_B.MultiportSwitch[0],/* 201: Signal */
  &StateflowKalman_B.Integrator[0],    /* 202: Signal */
  &StateflowKalman_B.IntegralGain[0],  /* 203: Signal */
  &StateflowKalman_B.ProportionalGain[0],/* 204: Signal */
  &StateflowKalman_B.Sum[0],           /* 205: Signal */
  &StateflowKalman_B.x0,               /* 206: Signal */
  &StateflowKalman_B.y0,               /* 207: Signal */
  &StateflowKalman_B.pos_A_conv,       /* 208: Signal */
  &StateflowKalman_B.pos_B_conv,       /* 209: Signal */
  &StateflowKalman_B.DigitalClock,     /* 210: Signal */
  &StateflowKalman_B.Sum12,            /* 211: Signal */
  &StateflowKalman_B.Sum4,             /* 212: Signal */
  &StateflowKalman_B.Sum7,             /* 213: Signal */
  &StateflowKalman_B.Sum9,             /* 214: Signal */
  &StateflowKalman_B.Gain_p,           /* 215: Signal */
  &StateflowKalman_B.Gain_n,           /* 216: Signal */
  &StateflowKalman_B.vel_A_conv_b,     /* 217: Signal */
  &StateflowKalman_B.vel_B_conv_b,     /* 218: Signal */
  &StateflowKalman_B.VelocityA_o,      /* 219: Signal */
  &StateflowKalman_B.VelocityB_f,      /* 220: Signal */
  &StateflowKalman_B.EtherCATPDOReceive14_b,/* 221: Signal */
  &StateflowKalman_B.EtherCATPDOReceive15_d,/* 222: Signal */
  &StateflowKalman_B.vel_A_conv,       /* 223: Signal */
  &StateflowKalman_B.vel_B_conv,       /* 224: Signal */
  &StateflowKalman_B.VelocityA,        /* 225: Signal */
  &StateflowKalman_B.VelocityB,        /* 226: Signal */
  &StateflowKalman_B.EtherCATPDOReceive14,/* 227: Signal */
  &StateflowKalman_B.EtherCATPDOReceive15,/* 228: Signal */
  &StateflowKalman_B.theta1,           /* 229: Signal */
  &StateflowKalman_B.theta2,           /* 230: Signal */
  &StateflowKalman_B.CA_o,             /* 231: Signal */
  &StateflowKalman_B.CB_b,             /* 232: Signal */
  &StateflowKalman_B.DiscreteTimeIntegrator_i,/* 233: Signal */
  &StateflowKalman_B.DiscreteTimeIntegrator1_b,/* 234: Signal */
  &StateflowKalman_B.Conversioneingradi,/* 235: Signal */
  &StateflowKalman_B.Gain1_e,          /* 236: Signal */
  &StateflowKalman_B.Ki1,              /* 237: Signal */
  &StateflowKalman_B.Ki2,              /* 238: Signal */
  &StateflowKalman_B.Kp1,              /* 239: Signal */
  &StateflowKalman_B.Kp2,              /* 240: Signal */
  &StateflowKalman_B.Sum_h,            /* 241: Signal */
  &StateflowKalman_B.Sum1_e,           /* 242: Signal */
  &StateflowKalman_B.Sum2_g,           /* 243: Signal */
  &StateflowKalman_B.Sum3_a,           /* 244: Signal */
  &StateflowKalman_B.Sum4_f,           /* 245: Signal */
  &StateflowKalman_B.Sum5_p,           /* 246: Signal */
  &StateflowKalman_B.Sum6_n,           /* 247: Signal */
  &StateflowKalman_B.CA,               /* 248: Signal */
  &StateflowKalman_B.CB,               /* 249: Signal */
  &StateflowKalman_B.CH,               /* 250: Signal */
  &StateflowKalman_B.DiscreteTimeIntegrator,/* 251: Signal */
  &StateflowKalman_B.DiscreteTimeIntegrator1,/* 252: Signal */
  &StateflowKalman_B.Gain_i,           /* 253: Signal */
  &StateflowKalman_B.Gain1,            /* 254: Signal */
  &StateflowKalman_B.Sum1_i,           /* 255: Signal */
  &StateflowKalman_B.Sum2_b,           /* 256: Signal */
  &StateflowKalman_B.Diff_l,           /* 257: Signal */
  &StateflowKalman_B.TSamp_i,          /* 258: Signal */
  &StateflowKalman_B.Uk1_p,            /* 259: Signal */
  &StateflowKalman_B.pos_A_conv_c,     /* 260: Signal */
  &StateflowKalman_B.pos_B_conv_v,     /* 261: Signal */
  &StateflowKalman_B.Sum5,             /* 262: Signal */
  &StateflowKalman_B.Product,          /* 263: Signal */
  &StateflowKalman_B.Product1,         /* 264: Signal */
  &StateflowKalman_B.Add1,             /* 265: Signal */
  &StateflowKalman_B.Conversion_d[0],  /* 266: Signal */
  &StateflowKalman_B.Conversion_me[0], /* 267: Signal */
  &StateflowKalman_B.Conversion_g[0],  /* 268: Signal */
  &StateflowKalman_B.Conversion_n,     /* 269: Signal */
  &StateflowKalman_B.Conversion_l[0],  /* 270: Signal */
  &StateflowKalman_B.Conversion_pk[0], /* 271: Signal */
  &StateflowKalman_B.Conversion_cs[0], /* 272: Signal */
  &StateflowKalman_B.Conversion_ks[0], /* 273: Signal */
  &StateflowKalman_B.Conversion_kg[0], /* 274: Signal */
  &StateflowKalman_B.Conversion_px[0], /* 275: Signal */
  &StateflowKalman_B.Conversion_h,     /* 276: Signal */
  &StateflowKalman_B.Conversion_n2,    /* 277: Signal */
  &StateflowKalman_B.Conversion_i[0],  /* 278: Signal */
  &StateflowKalman_B.Conversion_m[0],  /* 279: Signal */
  &StateflowKalman_B.Akxhatkk1[0],     /* 280: Signal */
  &StateflowKalman_B.Bkuk[0],          /* 281: Signal */
  &StateflowKalman_B.Reshape[0],       /* 282: Signal */
  &StateflowKalman_B.Add[0],           /* 283: Signal */
  &StateflowKalman_B.UseCurrentEstimator_e.Add[0],/* 284: Signal */
  &StateflowKalman_B.Product_m,        /* 285: Signal */
  &StateflowKalman_B.Product1_l,       /* 286: Signal */
  &StateflowKalman_B.Add1_a,           /* 287: Signal */
  &StateflowKalman_B.Conversion_b[0],  /* 288: Signal */
  &StateflowKalman_B.Conversion_pt[0], /* 289: Signal */
  &StateflowKalman_B.Conversion_f[0],  /* 290: Signal */
  &StateflowKalman_B.Conversion_a,     /* 291: Signal */
  &StateflowKalman_B.Conversion_i1[0], /* 292: Signal */
  &StateflowKalman_B.Conversion_g3[0], /* 293: Signal */
  &StateflowKalman_B.Conversion_jd[0], /* 294: Signal */
  &StateflowKalman_B.Conversion_gp[0], /* 295: Signal */
  &StateflowKalman_B.Conversion_pv[0], /* 296: Signal */
  &StateflowKalman_B.Conversion_d0[0], /* 297: Signal */
  &StateflowKalman_B.Conversion_o,     /* 298: Signal */
  &StateflowKalman_B.Conversion_dw,    /* 299: Signal */
  &StateflowKalman_B.Conversion_pc[0], /* 300: Signal */
  &StateflowKalman_B.Conversion_p[0],  /* 301: Signal */
  &StateflowKalman_B.Akxhatkk1_b[0],   /* 302: Signal */
  &StateflowKalman_B.Bkuk_b[0],        /* 303: Signal */
  &StateflowKalman_B.Reshape_c[0],     /* 304: Signal */
  &StateflowKalman_B.Add_f[0],         /* 305: Signal */
  &StateflowKalman_B.UseCurrentEstimator.Add[0],/* 306: Signal */
  &StateflowKalman_B.Diff_i,           /* 307: Signal */
  &StateflowKalman_B.TSamp_n,          /* 308: Signal */
  &StateflowKalman_B.Uk1_d,            /* 309: Signal */
  &StateflowKalman_B.Diff_d,           /* 310: Signal */
  &StateflowKalman_B.TSamp_h,          /* 311: Signal */
  &StateflowKalman_B.Uk1_b,            /* 312: Signal */
  &StateflowKalman_B.Diff_f,           /* 313: Signal */
  &StateflowKalman_B.TSamp_e,          /* 314: Signal */
  &StateflowKalman_B.Uk1_l,            /* 315: Signal */
  &StateflowKalman_B.Diff_n,           /* 316: Signal */
  &StateflowKalman_B.TSamp_nd,         /* 317: Signal */
  &StateflowKalman_B.Uk1_ll,           /* 318: Signal */
  &StateflowKalman_B.Diff_b,           /* 319: Signal */
  &StateflowKalman_B.TSamp_f,          /* 320: Signal */
  &StateflowKalman_B.Uk1_j,            /* 321: Signal */
  &StateflowKalman_B.Diff_bt,          /* 322: Signal */
  &StateflowKalman_B.TSamp_iq,         /* 323: Signal */
  &StateflowKalman_B.Uk1_bl,           /* 324: Signal */
  &StateflowKalman_B.Conversion_c[0],  /* 325: Signal */
  &StateflowKalman_B.Conversion_j[0],  /* 326: Signal */
  &StateflowKalman_B.Conversion_j0,    /* 327: Signal */
  &StateflowKalman_B.Conversion_k[0],  /* 328: Signal */
  &StateflowKalman_B.MeasurementUpdate.Ckxhatkk1,/* 329: Signal */
  &StateflowKalman_B.MeasurementUpdate.Dkuk,/* 330: Signal */
  &StateflowKalman_B.MeasurementUpdate.Product3[0],/* 331: Signal */
  &StateflowKalman_B.MeasurementUpdate.yhatkk1,/* 332: Signal */
  &StateflowKalman_B.MeasurementUpdate.Sum,/* 333: Signal */
  &StateflowKalman_B.UseCurrentEstimator_e.Product,/* 334: Signal */
  &StateflowKalman_B.UseCurrentEstimator_e.Product1,/* 335: Signal */
  &StateflowKalman_B.UseCurrentEstimator_e.Product2[0],/* 336: Signal */
  &StateflowKalman_B.UseCurrentEstimator_e.Add1,/* 337: Signal */
  &StateflowKalman_B.Conversion_ky[0], /* 338: Signal */
  &StateflowKalman_B.Conversion[0],    /* 339: Signal */
  &StateflowKalman_B.Conversion_pq,    /* 340: Signal */
  &StateflowKalman_B.Conversion_f1[0], /* 341: Signal */
  &StateflowKalman_B.MeasurementUpdate_a.Ckxhatkk1,/* 342: Signal */
  &StateflowKalman_B.MeasurementUpdate_a.Dkuk,/* 343: Signal */
  &StateflowKalman_B.MeasurementUpdate_a.Product3[0],/* 344: Signal */
  &StateflowKalman_B.MeasurementUpdate_a.yhatkk1,/* 345: Signal */
  &StateflowKalman_B.MeasurementUpdate_a.Sum,/* 346: Signal */
  &StateflowKalman_B.UseCurrentEstimator.Product,/* 347: Signal */
  &StateflowKalman_B.UseCurrentEstimator.Product1,/* 348: Signal */
  &StateflowKalman_B.UseCurrentEstimator.Product2[0],/* 349: Signal */
  &StateflowKalman_B.UseCurrentEstimator.Add1,/* 350: Signal */
  &StateflowKalman_B.Duk_h,            /* 351: Signal */
  &StateflowKalman_B.x1k1_g,           /* 352: Signal */
  &StateflowKalman_B.x2k1_n,           /* 353: Signal */
  &StateflowKalman_B.yk_i,             /* 354: Signal */
  &StateflowKalman_B.x1k_a,            /* 355: Signal */
  &StateflowKalman_B.x2k_g,            /* 356: Signal */
  &StateflowKalman_B.Duk,              /* 357: Signal */
  &StateflowKalman_B.x1k1,             /* 358: Signal */
  &StateflowKalman_B.x2k1,             /* 359: Signal */
  &StateflowKalman_B.yk,               /* 360: Signal */
  &StateflowKalman_B.x1k,              /* 361: Signal */
  &StateflowKalman_B.x2k,              /* 362: Signal */
  &StateflowKalman_B.Duk_n,            /* 363: Signal */
  &StateflowKalman_B.x1k1_h,           /* 364: Signal */
  &StateflowKalman_B.x2k1_h,           /* 365: Signal */
  &StateflowKalman_B.yk_m,             /* 366: Signal */
  &StateflowKalman_B.x1k_i,            /* 367: Signal */
  &StateflowKalman_B.x2k_d,            /* 368: Signal */
  &StateflowKalman_B.A11_p,            /* 369: Signal */
  &StateflowKalman_B.A12_c,            /* 370: Signal */
  &StateflowKalman_B.A21_h,            /* 371: Signal */
  &StateflowKalman_B.A22_d,            /* 372: Signal */
  &StateflowKalman_B.sum2_nk,          /* 373: Signal */
  &StateflowKalman_B.sum3_e,           /* 374: Signal */
  &StateflowKalman_B.B11_k,            /* 375: Signal */
  &StateflowKalman_B.B21_l,            /* 376: Signal */
  &StateflowKalman_B.C11_h,            /* 377: Signal */
  &StateflowKalman_B.C12_e,            /* 378: Signal */
  &StateflowKalman_B.sum2_k,           /* 379: Signal */
  &StateflowKalman_B.A11,              /* 380: Signal */
  &StateflowKalman_B.A12,              /* 381: Signal */
  &StateflowKalman_B.A21,              /* 382: Signal */
  &StateflowKalman_B.A22,              /* 383: Signal */
  &StateflowKalman_B.sum2_n,           /* 384: Signal */
  &StateflowKalman_B.sum3,             /* 385: Signal */
  &StateflowKalman_B.B11,              /* 386: Signal */
  &StateflowKalman_B.B21,              /* 387: Signal */
  &StateflowKalman_B.C11,              /* 388: Signal */
  &StateflowKalman_B.C12,              /* 389: Signal */
  &StateflowKalman_B.sum2,             /* 390: Signal */
  &StateflowKalman_B.A11_h,            /* 391: Signal */
  &StateflowKalman_B.A12_g,            /* 392: Signal */
  &StateflowKalman_B.A21_p,            /* 393: Signal */
  &StateflowKalman_B.A22_j,            /* 394: Signal */
  &StateflowKalman_B.sum2_e,           /* 395: Signal */
  &StateflowKalman_B.sum3_b,           /* 396: Signal */
  &StateflowKalman_B.B11_d,            /* 397: Signal */
  &StateflowKalman_B.B21_h,            /* 398: Signal */
  &StateflowKalman_B.C11_e,            /* 399: Signal */
  &StateflowKalman_B.C12_m,            /* 400: Signal */
  &StateflowKalman_B.sum2_ka,          /* 401: Signal */
  &StateflowKalman_P.Abbassa_Value,    /* 402: Block Parameter */
  &StateflowKalman_P.AlzataA_Value,    /* 403: Block Parameter */
  &StateflowKalman_P.AlzataB_Value,    /* 404: Block Parameter */
  &StateflowKalman_P.AsseAbraccia_Value,/* 405: Block Parameter */
  &StateflowKalman_P.AsseAvite_Value,  /* 406: Block Parameter */
  &StateflowKalman_P.AsseBbraccia_Value,/* 407: Block Parameter */
  &StateflowKalman_P.AsseBvite_Value,  /* 408: Block Parameter */
  &StateflowKalman_P.Discesa_Value,    /* 409: Block Parameter */
  &StateflowKalman_P.PeriodoA_Value,   /* 410: Block Parameter */
  &StateflowKalman_P.PeriodoB_Value,   /* 411: Block Parameter */
  &StateflowKalman_P.Reset_Value,      /* 412: Block Parameter */
  &StateflowKalman_P.StartHome_Value,  /* 413: Block Parameter */
  &StateflowKalman_P.StartRobot_Value, /* 414: Block Parameter */
  &StateflowKalman_P.StartWork_Value,  /* 415: Block Parameter */
  &StateflowKalman_P.StartZero_Value,  /* 416: Block Parameter */
  &StateflowKalman_P.Stop_Value,       /* 417: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P1[0],/* 418: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P2,/* 419: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P3,/* 420: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P4,/* 421: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P5,/* 422: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P6,/* 423: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit3_P7,/* 424: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P1[0],/* 425: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P2,/* 426: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P3,/* 427: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P4,/* 428: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P5,/* 429: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P6,/* 430: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit4_P7,/* 431: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P1[0],/* 432: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P2,/* 433: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P3,/* 434: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P4,/* 435: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P5,/* 436: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P6,/* 437: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit5_P7,/* 438: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P1[0],/* 439: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P2,/* 440: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P3,/* 441: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P4,/* 442: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P5,/* 443: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P6,/* 444: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit6_P7,/* 445: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P1[0],/* 446: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P2,/* 447: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P3,/* 448: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P4,/* 449: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P5,/* 450: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P6,/* 451: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P7,/* 452: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P1_l[0],/* 453: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P2_n,/* 454: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P3_n,/* 455: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P4_l,/* 456: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P5_i,/* 457: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P6_f,/* 458: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive16_P7_h,/* 459: Block Parameter */
  &StateflowKalman_P.LuceBianca_P1[0], /* 460: Block Parameter */
  &StateflowKalman_P.LuceBianca_P2,    /* 461: Block Parameter */
  &StateflowKalman_P.LuceBianca_P3,    /* 462: Block Parameter */
  &StateflowKalman_P.LuceBianca_P4,    /* 463: Block Parameter */
  &StateflowKalman_P.LuceBianca_P5,    /* 464: Block Parameter */
  &StateflowKalman_P.LuceBianca_P6,    /* 465: Block Parameter */
  &StateflowKalman_P.LuceBianca_P7,    /* 466: Block Parameter */
  &StateflowKalman_P.LuceRossa_P1[0],  /* 467: Block Parameter */
  &StateflowKalman_P.LuceRossa_P2,     /* 468: Block Parameter */
  &StateflowKalman_P.LuceRossa_P3,     /* 469: Block Parameter */
  &StateflowKalman_P.LuceRossa_P4,     /* 470: Block Parameter */
  &StateflowKalman_P.LuceRossa_P5,     /* 471: Block Parameter */
  &StateflowKalman_P.LuceRossa_P6,     /* 472: Block Parameter */
  &StateflowKalman_P.LuceRossa_P7,     /* 473: Block Parameter */
  &StateflowKalman_P.LuceVerde_P1[0],  /* 474: Block Parameter */
  &StateflowKalman_P.LuceVerde_P2,     /* 475: Block Parameter */
  &StateflowKalman_P.LuceVerde_P3,     /* 476: Block Parameter */
  &StateflowKalman_P.LuceVerde_P4,     /* 477: Block Parameter */
  &StateflowKalman_P.LuceVerde_P5,     /* 478: Block Parameter */
  &StateflowKalman_P.LuceVerde_P6,     /* 479: Block Parameter */
  &StateflowKalman_P.LuceVerde_P7,     /* 480: Block Parameter */
  &StateflowKalman_P.CoppiaAbracciasaturata_UpperSat,/* 481: Block Parameter */
  &StateflowKalman_P.CoppiaAbracciasaturata_LowerSat,/* 482: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P1[0],/* 483: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P2,/* 484: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P3,/* 485: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P4,/* 486: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P5,/* 487: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P6,/* 488: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit1_P7,/* 489: Block Parameter */
  &StateflowKalman_P.Switch1_Threshold,/* 490: Block Parameter */
  &StateflowKalman_P.CoppiaBbracciasaturata_UpperSat,/* 491: Block Parameter */
  &StateflowKalman_P.CoppiaBbracciasaturata_LowerSat,/* 492: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P1[0],/* 493: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P2,/* 494: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P3,/* 495: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P4,/* 496: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P5,/* 497: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P6,/* 498: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit7_P7,/* 499: Block Parameter */
  &StateflowKalman_P.Switch1_Threshold_f,/* 500: Block Parameter */
  &StateflowKalman_P.Gain_Gain_l,      /* 501: Block Parameter */
  &StateflowKalman_P.Torquesend_P1[0], /* 502: Block Parameter */
  &StateflowKalman_P.Torquesend_P2,    /* 503: Block Parameter */
  &StateflowKalman_P.Torquesend_P3,    /* 504: Block Parameter */
  &StateflowKalman_P.Torquesend_P4,    /* 505: Block Parameter */
  &StateflowKalman_P.Torquesend_P5,    /* 506: Block Parameter */
  &StateflowKalman_P.Torquesend_P6,    /* 507: Block Parameter */
  &StateflowKalman_P.Torquesend_P7,    /* 508: Block Parameter */
  &StateflowKalman_P.Switch_Threshold, /* 509: Block Parameter */
  &StateflowKalman_P.Constant1_Value_e,/* 510: Block Parameter */
  &StateflowKalman_P.CoppiaAvitesaturata_UpperSat,/* 511: Block Parameter */
  &StateflowKalman_P.CoppiaAvitesaturata_LowerSat,/* 512: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P1[0],/* 513: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P2,/* 514: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P3,/* 515: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P4,/* 516: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P5,/* 517: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P6,/* 518: Block Parameter */
  &StateflowKalman_P.EtherCATPDOTransmit2_P7,/* 519: Block Parameter */
  &StateflowKalman_P.Switch2_Threshold,/* 520: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P1[0],/* 521: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P2,/* 522: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P3,/* 523: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P4,/* 524: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P5,/* 525: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P6,/* 526: Block Parameter */
  &StateflowKalman_P.MotorebracciaA_P7,/* 527: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P1[0],/* 528: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P2,/* 529: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P3,/* 530: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P4,/* 531: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P5,/* 532: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P6,/* 533: Block Parameter */
  &StateflowKalman_P.MotorebracciaB_P7,/* 534: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P1[0],/* 535: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P2,   /* 536: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P3,   /* 537: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P4,   /* 538: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P5,   /* 539: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P6,   /* 540: Block Parameter */
  &StateflowKalman_P.MotoreviteA_P7,   /* 541: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P1[0],/* 542: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P2,   /* 543: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P3,   /* 544: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P4,   /* 545: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P5,   /* 546: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P6,   /* 547: Block Parameter */
  &StateflowKalman_P.MotoreviteB_P7,   /* 548: Block Parameter */
  &StateflowKalman_P.DiscreteDerivativeB_ICPrevScale,/* 549: Mask Parameter */
  &StateflowKalman_P.Gain2_Gain,       /* 550: Block Parameter */
  &StateflowKalman_P.Gain4_Gain,       /* 551: Block Parameter */
  &StateflowKalman_P.PIDController_P,  /* 552: Mask Parameter */
  &StateflowKalman_P.PIDController_I,  /* 553: Mask Parameter */
  &StateflowKalman_P.selettore_Value,  /* 554: Block Parameter */
  &StateflowKalman_P.Gain_Gain,        /* 555: Block Parameter */
  &StateflowKalman_P.Gain1_Gain,       /* 556: Block Parameter */
  &StateflowKalman_P.Kd_Gain,          /* 557: Block Parameter */
  &StateflowKalman_P.Memory_X0_ap[0],  /* 558: Block Parameter */
  &StateflowKalman_P.Memory1_X0[0],    /* 559: Block Parameter */
  &StateflowKalman_P.Memory2_X0[0],    /* 560: Block Parameter */
  &StateflowKalman_P.StatusWord_P1[0], /* 561: Block Parameter */
  &StateflowKalman_P.StatusWord_P2,    /* 562: Block Parameter */
  &StateflowKalman_P.StatusWord_P3,    /* 563: Block Parameter */
  &StateflowKalman_P.StatusWord_P4,    /* 564: Block Parameter */
  &StateflowKalman_P.StatusWord_P5,    /* 565: Block Parameter */
  &StateflowKalman_P.StatusWord_P6,    /* 566: Block Parameter */
  &StateflowKalman_P.StatusWord_P7,    /* 567: Block Parameter */
  &StateflowKalman_P.Constant_Value,   /* 568: Block Parameter */
  &StateflowKalman_P.Memory_X0,        /* 569: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P1[0],/* 570: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P2,/* 571: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P3,/* 572: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P4,/* 573: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P5,/* 574: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P6,/* 575: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P7,/* 576: Block Parameter */
  &StateflowKalman_P.Constant_Value_l, /* 577: Block Parameter */
  &StateflowKalman_P.Memory_X0_m,      /* 578: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P1_g[0],/* 579: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P2_p,/* 580: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P3_f,/* 581: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P4_a,/* 582: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P5_d,/* 583: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P6_c,/* 584: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P7_a,/* 585: Block Parameter */
  &StateflowKalman_P.Constant_Value_e, /* 586: Block Parameter */
  &StateflowKalman_P.Memory_X0_o,      /* 587: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P1_i[0],/* 588: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P2_m,/* 589: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P3_m,/* 590: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P4_l,/* 591: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P5_b,/* 592: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P6_l,/* 593: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P7_b,/* 594: Block Parameter */
  &StateflowKalman_P.Constant_Value_p, /* 595: Block Parameter */
  &StateflowKalman_P.Memory_X0_a,      /* 596: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P1_a[0],/* 597: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P2_d,/* 598: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P3_k,/* 599: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P4_f,/* 600: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P5_k,/* 601: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P6_l4,/* 602: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive9_P7_j,/* 603: Block Parameter */
  &StateflowKalman_P.DiscreteDerivativeA_ICPrevScale,/* 604: Mask Parameter */
  &StateflowKalman_P.Gain_Gain_b,      /* 605: Block Parameter */
  &StateflowKalman_P.Gain6_Gain,       /* 606: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt,       /* 607: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P1_m[0],/* 608: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P2_d,/* 609: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P3_d,/* 610: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P4_g,/* 611: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P5_h,/* 612: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P6_o,/* 613: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P7_g,/* 614: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P1_m[0],/* 615: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P2_d,/* 616: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P3_b,/* 617: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P4_i,/* 618: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P5_cp,/* 619: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P6_f,/* 620: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P7_o,/* 621: Block Parameter */
  &StateflowKalman_P.A_Value[0],       /* 622: Block Parameter */
  &StateflowKalman_P.B_Value[0],       /* 623: Block Parameter */
  &StateflowKalman_P.C_Value_j[0],     /* 624: Block Parameter */
  &StateflowKalman_P.D_Value_e,        /* 625: Block Parameter */
  &StateflowKalman_P.Enable_Value_d,   /* 626: Block Parameter */
  &StateflowKalman_P.G_Value[0],       /* 627: Block Parameter */
  &StateflowKalman_P.H_Value[0],       /* 628: Block Parameter */
  &StateflowKalman_P.N_Value[0],       /* 629: Block Parameter */
  &StateflowKalman_P.P0_Value[0],      /* 630: Block Parameter */
  &StateflowKalman_P.Q_Value[0],       /* 631: Block Parameter */
  &StateflowKalman_P.R_Value,          /* 632: Block Parameter */
  &StateflowKalman_P.Reset_Value_f,    /* 633: Block Parameter */
  &StateflowKalman_P.X0_Value_o[0],    /* 634: Block Parameter */
  &StateflowKalman_P.ManualSwitchPZ_CurrentSetting,/* 635: Block Parameter */
  &StateflowKalman_P.MemoryX_DelayLength_a,/* 636: Block Parameter */
  &StateflowKalman_P.A_Value_j[0],     /* 637: Block Parameter */
  &StateflowKalman_P.B_Value_i[0],     /* 638: Block Parameter */
  &StateflowKalman_P.C_Value[0],       /* 639: Block Parameter */
  &StateflowKalman_P.D_Value,          /* 640: Block Parameter */
  &StateflowKalman_P.Enable_Value,     /* 641: Block Parameter */
  &StateflowKalman_P.G_Value_m[0],     /* 642: Block Parameter */
  &StateflowKalman_P.H_Value_h[0],     /* 643: Block Parameter */
  &StateflowKalman_P.N_Value_m[0],     /* 644: Block Parameter */
  &StateflowKalman_P.P0_Value_m[0],    /* 645: Block Parameter */
  &StateflowKalman_P.Q_Value_n[0],     /* 646: Block Parameter */
  &StateflowKalman_P.R_Value_o,        /* 647: Block Parameter */
  &StateflowKalman_P.Reset_Value_o,    /* 648: Block Parameter */
  &StateflowKalman_P.X0_Value[0],      /* 649: Block Parameter */
  &StateflowKalman_P.ManualSwitchPZ_CurrentSetting_p,/* 650: Block Parameter */
  &StateflowKalman_P.MemoryX_DelayLength,/* 651: Block Parameter */
  &StateflowKalman_P.AlzataC_Value,    /* 652: Block Parameter */
  &StateflowKalman_P.AlzataC1_Value,   /* 653: Block Parameter */
  &StateflowKalman_P.AlzataQ_Value,    /* 654: Block Parameter */
  &StateflowKalman_P.Constant3_Value,  /* 655: Block Parameter */
  &StateflowKalman_P.Ngiri_Value,      /* 656: Block Parameter */
  &StateflowKalman_P.Ngiri1_Value,     /* 657: Block Parameter */
  &StateflowKalman_P.Ngiri2_Value,     /* 658: Block Parameter */
  &StateflowKalman_P.Periodo_Value,    /* 659: Block Parameter */
  &StateflowKalman_P.PeriodoC_Value,   /* 660: Block Parameter */
  &StateflowKalman_P.PeriodoC1_Value,  /* 661: Block Parameter */
  &StateflowKalman_P.PeriodoQ_Value,   /* 662: Block Parameter */
  &StateflowKalman_P.Rmax_Value,       /* 663: Block Parameter */
  &StateflowKalman_P.Rmax1_Value,      /* 664: Block Parameter */
  &StateflowKalman_P.Rmin_Value,       /* 665: Block Parameter */
  &StateflowKalman_P.Rmin1_Value,      /* 666: Block Parameter */
  &StateflowKalman_P.Rmin2_Value,      /* 667: Block Parameter */
  &StateflowKalman_P.Rmin3_Value,      /* 668: Block Parameter */
  &StateflowKalman_P.Tempospostiniziale_Value,/* 669: Block Parameter */
  &StateflowKalman_P.Integrator_gainval,/* 670: Block Parameter */
  &StateflowKalman_P.Integrator_IC,    /* 671: Block Parameter */
  &StateflowKalman_P.Constant_Value_b, /* 672: Block Parameter */
  &StateflowKalman_P.Constant1_Value,  /* 673: Block Parameter */
  &StateflowKalman_P.DiscreteDerivativeB_ICPrevSca_m,/* 674: Mask Parameter */
  &StateflowKalman_P.DiscreteDerivativeB1_ICPrevScal,/* 675: Mask Parameter */
  &StateflowKalman_P.DiscreteDerivativeB2_ICPrevScal,/* 676: Mask Parameter */
  &StateflowKalman_P.DiscreteDerivativeB3_ICPrevScal,/* 677: Mask Parameter */
  &StateflowKalman_P.DiscreteDerivativeB4_ICPrevScal,/* 678: Mask Parameter */
  &StateflowKalman_P.DiscreteDerivativeB5_ICPrevScal,/* 679: Mask Parameter */
  &StateflowKalman_P.Constant4_Value,  /* 680: Block Parameter */
  &StateflowKalman_P.Constant5_Value,  /* 681: Block Parameter */
  &StateflowKalman_P.Gain_Gain_c,      /* 682: Block Parameter */
  &StateflowKalman_P.Gain_Gain_d4,     /* 683: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P1_k[0],/* 684: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P2_i,/* 685: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P3_a,/* 686: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P4_e,/* 687: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P5_j,/* 688: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P6_m,/* 689: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P7_m,/* 690: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P1_a[0],/* 691: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P2_l,/* 692: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P3_a,/* 693: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P4_f,/* 694: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P5_c,/* 695: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P6_g,/* 696: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P7_m,/* 697: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P1[0],/* 698: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P2,/* 699: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P3,/* 700: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P4,/* 701: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P5,/* 702: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P6,/* 703: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive14_P7,/* 704: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P1[0],/* 705: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P2,/* 706: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P3,/* 707: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P4,/* 708: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P5,/* 709: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P6,/* 710: Block Parameter */
  &StateflowKalman_P.EtherCATPDOReceive15_P7,/* 711: Block Parameter */
  &StateflowKalman_P.CoppiaA_Y0,       /* 712: Block Parameter */
  &StateflowKalman_P.CoppiaB_Y0,       /* 713: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator_gainval,/* 714: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator_IC,/* 715: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator1_gainval,/* 716: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator1_IC,/* 717: Block Parameter */
  &StateflowKalman_P.Conversioneingradi_Gain,/* 718: Block Parameter */
  &StateflowKalman_P.Gain1_Gain_d,     /* 719: Block Parameter */
  &StateflowKalman_P.Ki1_Gain,         /* 720: Block Parameter */
  &StateflowKalman_P.Ki2_Gain,         /* 721: Block Parameter */
  &StateflowKalman_P.Kp1_Gain,         /* 722: Block Parameter */
  &StateflowKalman_P.Kp2_Gain,         /* 723: Block Parameter */
  &StateflowKalman_P.CA_Y0,            /* 724: Block Parameter */
  &StateflowKalman_P.CB_Y0,            /* 725: Block Parameter */
  &StateflowKalman_P.CH_Y0,            /* 726: Block Parameter */
  &StateflowKalman_P.Ki_Value,         /* 727: Block Parameter */
  &StateflowKalman_P.Kp_Value,         /* 728: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator_gainva_l,/* 729: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator_IC_e,/* 730: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator1_gainv_o,/* 731: Block Parameter */
  &StateflowKalman_P.DiscreteTimeIntegrator1_IC_j,/* 732: Block Parameter */
  &StateflowKalman_P.Gain_Gain_d,      /* 733: Block Parameter */
  &StateflowKalman_P.Gain1_Gain_e,     /* 734: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_g,     /* 735: Block Parameter */
  &StateflowKalman_P.ConstantP_Value,  /* 736: Block Parameter */
  &StateflowKalman_P.CovarianceZ_Value[0],/* 737: Block Parameter */
  &StateflowKalman_P.KalmanGainL_Value[0],/* 738: Block Parameter */
  &StateflowKalman_P.KalmanGainM_Value_n[0],/* 739: Block Parameter */
  &StateflowKalman_P.Constant_Value_bx,/* 740: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P1[0],/* 741: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P2,/* 742: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P3,/* 743: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P4,/* 744: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P5,/* 745: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P6,/* 746: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P7,/* 747: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P8,/* 748: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P1_d[0],/* 749: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P2_l,/* 750: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P3_n,/* 751: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P4_n,/* 752: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P5_p,/* 753: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P6_g,/* 754: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P7_a,/* 755: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P8_j,/* 756: Block Parameter */
  &StateflowKalman_P.ConstantP_Value_c,/* 757: Block Parameter */
  &StateflowKalman_P.CovarianceZ_Value_m[0],/* 758: Block Parameter */
  &StateflowKalman_P.KalmanGainL_Value_m[0],/* 759: Block Parameter */
  &StateflowKalman_P.KalmanGainM_Value[0],/* 760: Block Parameter */
  &StateflowKalman_P.Constant_Value_l1,/* 761: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P1_i[0],/* 762: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P2_e,/* 763: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P3_b,/* 764: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P4_l,/* 765: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P5_h,/* 766: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P6_l,/* 767: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P7_d,/* 768: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P8_o,/* 769: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P1_m[0],/* 770: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P2_lv,/* 771: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P3_k,/* 772: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P4_b,/* 773: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P5_i,/* 774: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P6_e,/* 775: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P7_p,/* 776: Block Parameter */
  &StateflowKalman_P.CheckSignalProperties_P8_od,/* 777: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_e,     /* 778: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_gz,    /* 779: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_m,     /* 780: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_gh,    /* 781: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_d,     /* 782: Block Parameter */
  &StateflowKalman_P.TSamp_WtEt_p,     /* 783: Block Parameter */
  &StateflowKalman_P.MeasurementUpdate.Lykyhatkk1_Y0,/* 784: Block Parameter */
  &StateflowKalman_P.UseCurrentEstimator_e.deltax_Y0,/* 785: Block Parameter */
  &StateflowKalman_P.MeasurementUpdate_a.Lykyhatkk1_Y0,/* 786: Block Parameter */
  &StateflowKalman_P.UseCurrentEstimator.deltax_Y0,/* 787: Block Parameter */
  &StateflowKalman_P.Duk_Gain_h,       /* 788: Block Parameter */
  &StateflowKalman_P.Delay_x1_InitialCondition_l,/* 789: Block Parameter */
  &StateflowKalman_P.Delay_x2_InitialCondition_l,/* 790: Block Parameter */
  &StateflowKalman_P.Duk_Gain,         /* 791: Block Parameter */
  &StateflowKalman_P.Delay_x1_InitialCondition,/* 792: Block Parameter */
  &StateflowKalman_P.Delay_x2_InitialCondition,/* 793: Block Parameter */
  &StateflowKalman_P.Duk_Gain_g,       /* 794: Block Parameter */
  &StateflowKalman_P.Delay_x1_InitialCondition_n,/* 795: Block Parameter */
  &StateflowKalman_P.Delay_x2_InitialCondition_e,/* 796: Block Parameter */
  &StateflowKalman_P.A11_Gain_e,       /* 797: Block Parameter */
  &StateflowKalman_P.A12_Gain_a,       /* 798: Block Parameter */
  &StateflowKalman_P.A21_Gain_m,       /* 799: Block Parameter */
  &StateflowKalman_P.A22_Gain_g,       /* 800: Block Parameter */
  &StateflowKalman_P.B11_Gain_f,       /* 801: Block Parameter */
  &StateflowKalman_P.B21_Gain_p,       /* 802: Block Parameter */
  &StateflowKalman_P.C11_Gain_n,       /* 803: Block Parameter */
  &StateflowKalman_P.C12_Gain_d,       /* 804: Block Parameter */
  &StateflowKalman_P.A11_Gain,         /* 805: Block Parameter */
  &StateflowKalman_P.A12_Gain,         /* 806: Block Parameter */
  &StateflowKalman_P.A21_Gain,         /* 807: Block Parameter */
  &StateflowKalman_P.A22_Gain,         /* 808: Block Parameter */
  &StateflowKalman_P.B11_Gain,         /* 809: Block Parameter */
  &StateflowKalman_P.B21_Gain,         /* 810: Block Parameter */
  &StateflowKalman_P.C11_Gain,         /* 811: Block Parameter */
  &StateflowKalman_P.C12_Gain,         /* 812: Block Parameter */
  &StateflowKalman_P.A11_Gain_h,       /* 813: Block Parameter */
  &StateflowKalman_P.A12_Gain_a3,      /* 814: Block Parameter */
  &StateflowKalman_P.A21_Gain_f,       /* 815: Block Parameter */
  &StateflowKalman_P.A22_Gain_d,       /* 816: Block Parameter */
  &StateflowKalman_P.B11_Gain_n,       /* 817: Block Parameter */
  &StateflowKalman_P.B21_Gain_l,       /* 818: Block Parameter */
  &StateflowKalman_P.C11_Gain_g,       /* 819: Block Parameter */
  &StateflowKalman_P.C12_Gain_d1,      /* 820: Block Parameter */
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
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 }
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

  { rtwCAPI_MATRIX_COL_MAJOR, 6, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 30, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  16,                                  /* 4 */
  1,                                   /* 5 */
  2,                                   /* 6 */
  2,                                   /* 7 */
  4,                                   /* 8 */
  4,                                   /* 9 */
  4,                                   /* 10 */
  1,                                   /* 11 */
  2,                                   /* 12 */
  1,                                   /* 13 */
  1,                                   /* 14 */
  2,                                   /* 15 */
  1,                                   /* 16 */
  43,                                  /* 17 */
  1,                                   /* 18 */
  41,                                  /* 19 */
  1,                                   /* 20 */
  24,                                  /* 21 */
  1,                                   /* 22 */
  38,                                  /* 23 */
  1,                                   /* 24 */
  47,                                  /* 25 */
  1,                                   /* 26 */
  37,                                  /* 27 */
  1,                                   /* 28 */
  23,                                  /* 29 */
  1,                                   /* 30 */
  46                                   /* 31 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (NULL), (NULL), -1, 0 }
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
  { rtBlockSignals, 402,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 419,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 32236899U,
    4053205928U,
    1473689058U,
    1344280246U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  StateflowKalman_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void StateflowKalman_InitializeDataMapInfo(RT_MODEL_StateflowKalman_T *const
  StateflowKalman_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(StateflowKalman_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(StateflowKalman_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(StateflowKalman_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(StateflowKalman_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(StateflowKalman_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  StateflowKalman_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (StateflowKalman_M);
  StateflowKalman_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_StateflowKalman_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(StateflowKalman_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(StateflowKalman_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(StateflowKalman_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void StateflowKalman_host_InitializeDataMapInfo
    (StateflowKalman_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: StateflowKalman_capi.c */
