/*
 * StateFlowFinal_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowFinal".
 *
 * Model version              : 1.1054
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Nov 30 15:09:37 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "StateFlowFinal_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "StateFlowFinal.h"
#include "StateFlowFinal_capi.h"
#include "StateFlowFinal_private.h"
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
  { 0, 55, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING("bool"), 0, 0, 0, 0, 0 },

  { 1, 55, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING("offC"), 1, 0, 0, 0, 0 },

  { 2, 55, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING("homeH"), 2, 0, 0, 0, 0 },

  { 3, 55, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING("offAv"), 3, 0, 0, 0, 0 },

  { 4, 55, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING("offBv"), 4, 0, 0, 0, 0 },

  { 5, 55, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING("offAb"), 5, 0, 0, 0, 0 },

  { 6, 55, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING("offBb"), 6, 0, 0, 0, 0 },

  { 7, 55, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING("homeA"), 7, 0, 0, 0, 0 },

  { 8, 55, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING("homeB"), 8, 0, 0, 0, 0 },

  { 9, 55, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING("luci"), 9, 0, 0, 0, 0 },

  { 10, 55, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING("Hv"), 10, 0, 0, 0, 0 },

  { 11, 55, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING("Hb"), 11, 0, 0, 0, 0 },

  { 12, 55, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING("Enable"), 12, 0, 0, 0, 0 },

  { 13, 55, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING("FineLav"), 13, 0, 0, 0, 0 },

  { 14, 55, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 55, TARGET_STRING("State flow robot/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 16, 55, TARGET_STRING("State flow robot/p17"),
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

  { 45, 4, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 6, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 50, 8, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 9, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 11, TARGET_STRING("Out asse B Vite/Switch2"),
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

  { 63, 15, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 15, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 65, 16, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 66, 17, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 17, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
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

  { 76, 20, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p1"),
    TARGET_STRING("theta1"), 0, 0, 0, 0, 1 },

  { 77, 20, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p2"),
    TARGET_STRING("theta2"), 1, 0, 0, 0, 1 },

  { 78, 21, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 21, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 80, 22, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 22, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 82, 23, TARGET_STRING("Sistema_braccia/Cinematica diretta/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 23, TARGET_STRING("Sistema_braccia/Cinematica diretta/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 84, 24, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 24, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 86, 25, TARGET_STRING("Sistema_braccia/Coppia motrice/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 25, TARGET_STRING("Sistema_braccia/Coppia motrice/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 88, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 90, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 1 },

  { 91, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p4"),
    TARGET_STRING("ntilde"), 3, 0, 0, 0, 1 },

  { 92, 38, TARGET_STRING("Sistema_braccia/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 38, TARGET_STRING("Sistema_braccia/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 94, 39, TARGET_STRING("Sistema_braccia/MATLAB Function3/p1"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 95, 39, TARGET_STRING("Sistema_braccia/MATLAB Function3/p2"),
    TARGET_STRING("phi"), 1, 0, 0, 0, 1 },

  { 96, 40, TARGET_STRING("Sistema_braccia/MATLAB Function4/p1"),
    TARGET_STRING("Rho"), 0, 0, 0, 0, 1 },

  { 97, 40, TARGET_STRING("Sistema_braccia/MATLAB Function4/p2"),
    TARGET_STRING("Omega"), 1, 0, 5, 0, 1 },

  { 98, 40, TARGET_STRING("Sistema_braccia/MATLAB Function4/p3"),
    TARGET_STRING("zV"), 2, 0, 5, 0, 1 },

  { 99, 41, TARGET_STRING("Sistema_braccia/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 41, TARGET_STRING("Sistema_braccia/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 104, 0, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 105, 0, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 106, 0, TARGET_STRING("Sistema_braccia/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 107, 0, TARGET_STRING("Sistema_braccia/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Sistema_braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 0, TARGET_STRING("Sistema_braccia/Sum1"),
    TARGET_STRING("Ymov"), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Sistema_braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING("Sistema_braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Sistema_braccia/Sum4"),
    TARGET_STRING("q"), 0, 0, 5, 0, 1 },

  { 113, 0, TARGET_STRING("Sistema_braccia/Sum5"),
    TARGET_STRING("n-phi"), 0, 0, 0, 0, 1 },

  { 114, 0, TARGET_STRING("Sistema_braccia/Sum7"),
    TARGET_STRING("qdot"), 0, 0, 5, 0, 1 },

  { 115, 0, TARGET_STRING("Sistema_braccia/Sum8"),
    TARGET_STRING("YRobusto"), 0, 0, 5, 0, 1 },

  { 116, 0, TARGET_STRING("Sistema_braccia/Sum9"),
    TARGET_STRING("Y"), 0, 0, 5, 0, 1 },

  { 117, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 119, 5, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 122, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 123, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 124, 7, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 127, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 129, 10, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 132, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 133, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 134, 12, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 135, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 138, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 139, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 140, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 141, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 143, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 144, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 145, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 146, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 147, 18, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 148, 19, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 150, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 151, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 152, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 153, 0, TARGET_STRING("Sistema_braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 154, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionEnable"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 155, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/ReshapeX0"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 156, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapeu"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 157, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapexhat"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 158, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapey"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 159, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reshapeyhat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 160, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/ManualSwitchPZ"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 161, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/MemoryX"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 162, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionEnable"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 163, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/ReshapeX0"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 164, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapeu"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 165, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapexhat"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 166, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapey"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 167, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reshapeyhat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 168, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/ManualSwitchPZ"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 169, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/MemoryX"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 170, 33, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 171, 33, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 172, 33, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 173, 33, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 174, 33, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 175, 33, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 176, 34, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 177, 34, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 178, 34, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 179, 34, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 180, 34, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 181, 34, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 182, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 183, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 184, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 185, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 186, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 187, 35, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 188, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 189, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 190, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 191, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 192, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 193, 36, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 194, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 195, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 196, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 197, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 198, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 199, 37, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 200, 0, TARGET_STRING("Sistema_braccia/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 201, 0, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 202, 0, TARGET_STRING("Sistema_braccia/PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 203, 0, TARGET_STRING("Sistema_braccia/PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 204, 0, TARGET_STRING("Sistema_braccia/PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 205, 42, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 206, 42, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 207, 43, TARGET_STRING("Sistema_braccia/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 44, TARGET_STRING("Sistema_braccia/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 209, 0, TARGET_STRING("Sistema_braccia/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 213, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 215, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 216, 45, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 46, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 221, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 222, 47, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 223, 48, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 225, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 227, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 228, 50, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 229, 50, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 230, 50, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 231, 50, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 2 },

  { 232, 51, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 233, 51, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 234, 52, TARGET_STRING(
    "State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 235, 52, TARGET_STRING(
    "State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 236, 52, TARGET_STRING("State flow robot/Posizionamento/Conversione"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 237, 52, TARGET_STRING("State flow robot/Posizionamento/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 238, 52, TARGET_STRING("State flow robot/Posizionamento/Ki1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 239, 52, TARGET_STRING("State flow robot/Posizionamento/Ki2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 240, 52, TARGET_STRING("State flow robot/Posizionamento/Kp1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 241, 52, TARGET_STRING("State flow robot/Posizionamento/Kp2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 242, 52, TARGET_STRING("State flow robot/Posizionamento/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 243, 52, TARGET_STRING("State flow robot/Posizionamento/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 244, 52, TARGET_STRING("State flow robot/Posizionamento/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 245, 52, TARGET_STRING("State flow robot/Posizionamento/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 246, 52, TARGET_STRING("State flow robot/Posizionamento/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 247, 52, TARGET_STRING("State flow robot/Posizionamento/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 248, 52, TARGET_STRING("State flow robot/Posizionamento/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 249, 53, TARGET_STRING("State flow robot/Setting/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 250, 53, TARGET_STRING("State flow robot/Setting/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 251, 53, TARGET_STRING("State flow robot/Setting/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 252, 54, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 253, 54, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 254, 54, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 255, 54, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 256, 54, TARGET_STRING("State flow robot/Setting/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 257, 54, TARGET_STRING("State flow robot/Setting/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 258, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 261, 13, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 14, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculateYhat/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculateYhat/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculateYhat/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionA/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionB/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionC/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionD/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionG/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionH/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionN/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 6, 3, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionP0/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionQ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionR/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionReset/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionX/Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/DataTypeConversionX0/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 281, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/A[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 282, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/B[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 283, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/Reshape"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 284, 0, TARGET_STRING("Sistema_braccia/Kalman Filter1/Observer/Add"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 285, 29, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Add"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 286, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculateYhat/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculateYhat/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculateYhat/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionA/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionB/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 291, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionC/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionD/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionG/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 294, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionH/Conversion"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionN/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 6, 3, 0, 0 },

  { 297, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionP0/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionQ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionR/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionReset/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionX/Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/DataTypeConversionX0/Conversion"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 303, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/A[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 304, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/B[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 305, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/Reshape"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 306, 0, TARGET_STRING("Sistema_braccia/Kalman Filter2/Observer/Add"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 307, 32, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Add"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 308, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 309, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 310, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 311, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 312, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 313, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 314, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 315, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 316, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 317, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 318, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 319, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 320, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 321, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 322, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 323, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 324, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 325, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 326, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionL/Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 327, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionM/Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 328, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 329, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionZ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 330, 27, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/C[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 331, 27, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/D[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 332, 27, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Product3"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 333, 27, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Add1"),
    TARGET_STRING("yhat[k|k-1]"), 0, 0, 0, 0, 0 },

  { 334, 27, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 335, 28, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 336, 28, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 337, 28, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Product2"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 338, 28, TARGET_STRING(
    "Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 339, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionL/Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 340, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionM/Conversion"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 341, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionP/Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 342, 0, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionZ/Conversion"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 343, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/C[k]*xhat[k|k-1]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 344, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/D[k]*u[k]"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 345, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Product3"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 346, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Add1"),
    TARGET_STRING("yhat[k|k-1]"), 0, 0, 0, 0, 0 },

  { 347, 30, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 348, 31, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 349, 31, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 350, 31, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Product2"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 351, 31, TARGET_STRING(
    "Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 352, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 353, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 354, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 355, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 356, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 357, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 358, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 359, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 360, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 361, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 362, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 363, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 364, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 365, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 366, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 367, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 368, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 369, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 370, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 371, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 372, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 373, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 374, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 375, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 376, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 377, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 378, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 379, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 380, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 381, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 382, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 383, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 384, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 385, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 386, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 387, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 388, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 389, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 390, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 391, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 392, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 393, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 394, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 395, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 396, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 397, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 398, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 399, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 400, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 401, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 402, 0, TARGET_STRING(
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
  { 403, TARGET_STRING("Abbassa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 404, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 405, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 406, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 407, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 408, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 409, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 410, TARGET_STRING("Discesa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 411, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 412, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 413, TARGET_STRING("Reset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 414, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 415, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 416, TARGET_STRING("StartWork"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 417, TARGET_STRING("StartZero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 418, TARGET_STRING("Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 419, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 420, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 421, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 422, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 423, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 424, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 425, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 426, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 427, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 428, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 429, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 430, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 431, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 432, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 433, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 434, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 435, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 436, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 437, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 438, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 439, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 440, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 441, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 442, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 443, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 444, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 445, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 446, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 447, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 448, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 449, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 450, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 451, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 452, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 453, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 454, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 455, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 456, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 457, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 458, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 459, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 460, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 461, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 462, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 463, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 464, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 465, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 466, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 467, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 468, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 469, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 470, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 471, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 472, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 473, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 474, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 475, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 476, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 477, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 478, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 479, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 480, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 481, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 482, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 483, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 484, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 485, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 486, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 487, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 488, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 489, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 490, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 491, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 492, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 493, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 494, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 495, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 496, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 497, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 498, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 499, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 500, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 501, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 502, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 503, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 504, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 505, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 506, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 507, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 508, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 509, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 510, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 511, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 513, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 514, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 515, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 516, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 517, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 518, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 519, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 520, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 521, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 522, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 523, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 524, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 525, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 526, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 527, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 528, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 529, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 530, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 531, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 532, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 533, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 534, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 535, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 536, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 537, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 538, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 539, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 540, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 541, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 542, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 543, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 544, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 545, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 546, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 547, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 548, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 549, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 550, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 551, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 552, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 553, TARGET_STRING("Sistema_braccia/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 554, TARGET_STRING("Sistema_braccia/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 555, TARGET_STRING("Sistema_braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 556, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 557, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 558, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 559, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 560, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 561, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 13, 0 },

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
    TARGET_STRING("P1"), 0, 14, 0 },

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
    TARGET_STRING("P1"), 0, 14, 0 },

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
    TARGET_STRING("P1"), 0, 14, 0 },

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
    TARGET_STRING("P1"), 0, 14, 0 },

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
    TARGET_STRING("P1"), 0, 12, 0 },

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
    TARGET_STRING("P1"), 0, 12, 0 },

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
    TARGET_STRING("Value"), 0, 5, 0 },

  { 624, TARGET_STRING("Sistema_braccia/Kalman Filter1/C"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 625, TARGET_STRING("Sistema_braccia/Kalman Filter1/D"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 626, TARGET_STRING("Sistema_braccia/Kalman Filter1/Enable"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 627, TARGET_STRING("Sistema_braccia/Kalman Filter1/G"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 628, TARGET_STRING("Sistema_braccia/Kalman Filter1/H"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 629, TARGET_STRING("Sistema_braccia/Kalman Filter1/N"),
    TARGET_STRING("Value"), 0, 5, 0 },

  { 630, TARGET_STRING("Sistema_braccia/Kalman Filter1/P0"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 631, TARGET_STRING("Sistema_braccia/Kalman Filter1/Q"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 632, TARGET_STRING("Sistema_braccia/Kalman Filter1/R"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 633, TARGET_STRING("Sistema_braccia/Kalman Filter1/Reset"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 634, TARGET_STRING("Sistema_braccia/Kalman Filter1/X0"),
    TARGET_STRING("Value"), 0, 5, 0 },

  { 635, TARGET_STRING("Sistema_braccia/Kalman Filter1/ManualSwitchPZ"),
    TARGET_STRING("CurrentSetting"), 7, 0, 0 },

  { 636, TARGET_STRING("Sistema_braccia/Kalman Filter1/MemoryX"),
    TARGET_STRING("DelayLength"), 8, 0, 0 },

  { 637, TARGET_STRING("Sistema_braccia/Kalman Filter2/A"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 638, TARGET_STRING("Sistema_braccia/Kalman Filter2/B"),
    TARGET_STRING("Value"), 0, 5, 0 },

  { 639, TARGET_STRING("Sistema_braccia/Kalman Filter2/C"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 640, TARGET_STRING("Sistema_braccia/Kalman Filter2/D"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 641, TARGET_STRING("Sistema_braccia/Kalman Filter2/Enable"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 642, TARGET_STRING("Sistema_braccia/Kalman Filter2/G"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 643, TARGET_STRING("Sistema_braccia/Kalman Filter2/H"),
    TARGET_STRING("Value"), 0, 15, 0 },

  { 644, TARGET_STRING("Sistema_braccia/Kalman Filter2/N"),
    TARGET_STRING("Value"), 0, 5, 0 },

  { 645, TARGET_STRING("Sistema_braccia/Kalman Filter2/P0"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 646, TARGET_STRING("Sistema_braccia/Kalman Filter2/Q"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 647, TARGET_STRING("Sistema_braccia/Kalman Filter2/R"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 648, TARGET_STRING("Sistema_braccia/Kalman Filter2/Reset"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 649, TARGET_STRING("Sistema_braccia/Kalman Filter2/X0"),
    TARGET_STRING("Value"), 0, 5, 0 },

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
    TARGET_STRING("P1"), 0, 12, 0 },

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
    TARGET_STRING("P1"), 0, 12, 0 },

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
    TARGET_STRING("P1"), 0, 12, 0 },

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
    TARGET_STRING("P1"), 0, 12, 0 },

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

  { 718, TARGET_STRING("State flow robot/Posizionamento/Conversione"),
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
    TARGET_STRING("Value"), 0, 5, 0 },

  { 739, TARGET_STRING("Sistema_braccia/Kalman Filter1/CalculatePL/KalmanGainM"),
    TARGET_STRING("Value"), 0, 5, 0 },

  { 740, TARGET_STRING("Sistema_braccia/Kalman Filter1/ReducedQRN/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 741, TARGET_STRING("Sistema_braccia/Kalman Filter1/checku/CheckSignalProperties"),
    TARGET_STRING("P1"), 3, 16, 0 },

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
    TARGET_STRING("P1"), 3, 16, 0 },

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
    TARGET_STRING("Value"), 0, 5, 0 },

  { 760, TARGET_STRING("Sistema_braccia/Kalman Filter2/CalculatePL/KalmanGainM"),
    TARGET_STRING("Value"), 0, 5, 0 },

  { 761, TARGET_STRING("Sistema_braccia/Kalman Filter2/ReducedQRN/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 762, TARGET_STRING("Sistema_braccia/Kalman Filter2/checku/CheckSignalProperties"),
    TARGET_STRING("P1"), 3, 16, 0 },

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
    TARGET_STRING("P1"), 3, 16, 0 },

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
  &StateFlowFinal_B.Bool,              /* 0: Signal */
  &StateFlowFinal_B.OffT,              /* 1: Signal */
  &StateFlowFinal_B.CoppiaH,           /* 2: Signal */
  &StateFlowFinal_B.OffA_vite,         /* 3: Signal */
  &StateFlowFinal_B.OffB_vite,         /* 4: Signal */
  &StateFlowFinal_B.OffA,              /* 5: Signal */
  &StateFlowFinal_B.OffB,              /* 6: Signal */
  &StateFlowFinal_B.CoppiaA,           /* 7: Signal */
  &StateFlowFinal_B.CoppiaB,           /* 8: Signal */
  &StateFlowFinal_B.Luci,              /* 9: Signal */
  &StateFlowFinal_B.Hv,                /* 10: Signal */
  &StateFlowFinal_B.Hb,                /* 11: Signal */
  &StateFlowFinal_B.Enable,            /* 12: Signal */
  &StateFlowFinal_B.FineLavorazione,   /* 13: Signal */
  &StateFlowFinal_B.PosRifA,           /* 14: Signal */
  &StateFlowFinal_B.PosRifB,           /* 15: Signal */
  &StateFlowFinal_B.Stato,             /* 16: Signal */
  &StateFlowFinal_B.Clock,             /* 17: Signal */
  &StateFlowFinal_B.Abbassa,           /* 18: Signal */
  &StateFlowFinal_B.Discesa,           /* 19: Signal */
  &StateFlowFinal_B.Reset,             /* 20: Signal */
  &StateFlowFinal_B.StartHome,         /* 21: Signal */
  &StateFlowFinal_B.StartRobot,        /* 22: Signal */
  &StateFlowFinal_B.StartWork,         /* 23: Signal */
  &StateFlowFinal_B.StartZero,         /* 24: Signal */
  &StateFlowFinal_B.Stop,              /* 25: Signal */
  &StateFlowFinal_B.DataTypeConversion1_p,/* 26: Signal */
  &StateFlowFinal_B.DataTypeConversion2,/* 27: Signal */
  &StateFlowFinal_B.DataTypeConversion5,/* 28: Signal */
  &StateFlowFinal_B.DataTypeConversion7,/* 29: Signal */
  &StateFlowFinal_B.EtherCATInit[0],   /* 30: Signal */
  &StateFlowFinal_B.DataTypeConversion8,/* 31: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive16,/* 32: Signal */
  &StateFlowFinal_B.IntegertoBitConverter[0],/* 33: Signal */
  &StateFlowFinal_B.DataTypeConversion8_f,/* 34: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive16_d,/* 35: Signal */
  &StateFlowFinal_B.IntegertoBitConverter_d[0],/* 36: Signal */
  &StateFlowFinal_B.y_i,               /* 37: Signal */
  &StateFlowFinal_B.y_b,               /* 38: Signal */
  &StateFlowFinal_B.y_f,               /* 39: Signal */
  &StateFlowFinal_B.DataTypeConversion24,/* 40: Signal */
  &StateFlowFinal_B.DataTypeConversion25,/* 41: Signal */
  &StateFlowFinal_B.DataTypeConversion26,/* 42: Signal */
  &StateFlowFinal_B.DataTypeConversion3,/* 43: Signal */
  &StateFlowFinal_B.CoppiaAbracciasaturata,/* 44: Signal */
  &StateFlowFinal_B.Switch1_c,         /* 45: Signal */
  &StateFlowFinal_B.DataTypeConversion4,/* 46: Signal */
  &StateFlowFinal_B.CoppiaBbracciasaturata,/* 47: Signal */
  &StateFlowFinal_B.Switch1_i,         /* 48: Signal */
  &StateFlowFinal_B.ConvertA,          /* 49: Signal */
  &StateFlowFinal_B.Gain_m,            /* 50: Signal */
  &StateFlowFinal_B.Switch,            /* 51: Signal */
  &StateFlowFinal_B.ConvertB,          /* 52: Signal */
  &StateFlowFinal_B.CoppiaAvitesaturata,/* 53: Signal */
  &StateFlowFinal_B.Switch2,           /* 54: Signal */
  &StateFlowFinal_B.convert,           /* 55: Signal */
  &StateFlowFinal_B.convert10,         /* 56: Signal */
  &StateFlowFinal_B.MotorebracciaA,    /* 57: Signal */
  &StateFlowFinal_B.MotorebracciaB,    /* 58: Signal */
  &StateFlowFinal_B.convert_k,         /* 59: Signal */
  &StateFlowFinal_B.convert10_p,       /* 60: Signal */
  &StateFlowFinal_B.MotoreviteA,       /* 61: Signal */
  &StateFlowFinal_B.MotoreviteB,       /* 62: Signal */
  &StateFlowFinal_B.ldm_pos_n,         /* 63: Signal */
  &StateFlowFinal_B.ldm_vel_c,         /* 64: Signal */
  &StateFlowFinal_B.pos_B_conv_p,      /* 65: Signal */
  &StateFlowFinal_B.ldm_pos,           /* 66: Signal */
  &StateFlowFinal_B.ldm_vel,           /* 67: Signal */
  &StateFlowFinal_B.Gain2,             /* 68: Signal */
  &StateFlowFinal_B.Gain4,             /* 69: Signal */
  &StateFlowFinal_B.Sum1,              /* 70: Signal */
  &StateFlowFinal_B.Sum3,              /* 71: Signal */
  &StateFlowFinal_B.Sum4_l,            /* 72: Signal */
  &StateFlowFinal_B.Sum6,              /* 73: Signal */
  &StateFlowFinal_B.Sum7_n,            /* 74: Signal */
  &StateFlowFinal_B.Sum8,              /* 75: Signal */
  &StateFlowFinal_B.theta1_l,          /* 76: Signal */
  &StateFlowFinal_B.theta2_j,          /* 77: Signal */
  &StateFlowFinal_B.theta1_pp,         /* 78: Signal */
  &StateFlowFinal_B.theta2_pp,         /* 79: Signal */
  &StateFlowFinal_B.theta1_p_j,        /* 80: Signal */
  &StateFlowFinal_B.theta2_p_p,        /* 81: Signal */
  &StateFlowFinal_B.x_n,               /* 82: Signal */
  &StateFlowFinal_B.y_k,               /* 83: Signal */
  &StateFlowFinal_B.x_pp_f,            /* 84: Signal */
  &StateFlowFinal_B.y_pp_l,            /* 85: Signal */
  &StateFlowFinal_B.Cm1,               /* 86: Signal */
  &StateFlowFinal_B.Cm2,               /* 87: Signal */
  &StateFlowFinal_B.C1,                /* 88: Signal */
  &StateFlowFinal_B.C2,                /* 89: Signal */
  &StateFlowFinal_B.Mm[0],             /* 90: Signal */
  &StateFlowFinal_B.ntilde,            /* 91: Signal */
  &StateFlowFinal_B.xp,                /* 92: Signal */
  &StateFlowFinal_B.yp,                /* 93: Signal */
  &StateFlowFinal_B.csiH[0],           /* 94: Signal */
  &StateFlowFinal_B.phi,               /* 95: Signal */
  &StateFlowFinal_B.rho,               /* 96: Signal */
  &StateFlowFinal_B.omega[0],          /* 97: Signal */
  &StateFlowFinal_B.z[0],              /* 98: Signal */
  &StateFlowFinal_B.x_p,               /* 99: Signal */
  &StateFlowFinal_B.y_p,               /* 100: Signal */
  &StateFlowFinal_B.Gain,              /* 101: Signal */
  &StateFlowFinal_B.Gain1,             /* 102: Signal */
  &StateFlowFinal_B.Kd[0],             /* 103: Signal */
  &StateFlowFinal_B.Kd1[0],            /* 104: Signal */
  &StateFlowFinal_B.Kp1[0],            /* 105: Signal */
  &StateFlowFinal_B.RateTransition,    /* 106: Signal */
  &StateFlowFinal_B.RateTransition1,   /* 107: Signal */
  &StateFlowFinal_B.Sum,               /* 108: Signal */
  &StateFlowFinal_B.Ymov,              /* 109: Signal */
  &StateFlowFinal_B.Sum2_d,            /* 110: Signal */
  &StateFlowFinal_B.Sum3_b,            /* 111: Signal */
  &StateFlowFinal_B.q[0],              /* 112: Signal */
  &StateFlowFinal_B.nphi,              /* 113: Signal */
  &StateFlowFinal_B.qdot[0],           /* 114: Signal */
  &StateFlowFinal_B.YRobusto[0],       /* 115: Signal */
  &StateFlowFinal_B.Y[0],              /* 116: Signal */
  &StateFlowFinal_B.DataTypeConversion6,/* 117: Signal */
  &StateFlowFinal_B.StatusWord,        /* 118: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_e.y,/* 119: Signal */
  &StateFlowFinal_B.DataTypeConversion14,/* 120: Signal */
  &StateFlowFinal_B.Memory,            /* 121: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9,/* 122: Signal */
  &StateFlowFinal_B.Switch1,           /* 123: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_a.y,/* 124: Signal */
  &StateFlowFinal_B.DataTypeConversion14_g,/* 125: Signal */
  &StateFlowFinal_B.Memory_g,          /* 126: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_h,/* 127: Signal */
  &StateFlowFinal_B.Switch1_l,         /* 128: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_f.y,/* 129: Signal */
  &StateFlowFinal_B.DataTypeConversion14_k,/* 130: Signal */
  &StateFlowFinal_B.Memory_n,          /* 131: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_hd,/* 132: Signal */
  &StateFlowFinal_B.Switch1_f,         /* 133: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_fb.y,/* 134: Signal */
  &StateFlowFinal_B.DataTypeConversion14_h,/* 135: Signal */
  &StateFlowFinal_B.Memory_d,          /* 136: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_m,/* 137: Signal */
  &StateFlowFinal_B.Switch1_h,         /* 138: Signal */
  &StateFlowFinal_B.Sum_p,             /* 139: Signal */
  &StateFlowFinal_B.Sum2_m,            /* 140: Signal */
  &StateFlowFinal_B.Gain_a,            /* 141: Signal */
  &StateFlowFinal_B.Gain6,             /* 142: Signal */
  &StateFlowFinal_B.Sum9_p,            /* 143: Signal */
  &StateFlowFinal_B.Diff,              /* 144: Signal */
  &StateFlowFinal_B.TSamp,             /* 145: Signal */
  &StateFlowFinal_B.Uk1,               /* 146: Signal */
  &StateFlowFinal_B.vel_A_conv_d,      /* 147: Signal */
  &StateFlowFinal_B.vel_B_conv_d,      /* 148: Signal */
  &StateFlowFinal_B.VelocityA_b,       /* 149: Signal */
  &StateFlowFinal_B.VelocityB_d,       /* 150: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_j,/* 151: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_k,/* 152: Signal */
  &StateFlowFinal_B.Sum2,              /* 153: Signal */
  &StateFlowFinal_B.DataTypeConversionEnable_i,/* 154: Signal */
  &StateFlowFinal_B.ReshapeX0_i[0],    /* 155: Signal */
  &StateFlowFinal_B.Reshapeu_m,        /* 156: Signal */
  &StateFlowFinal_B.Reshapexhat_m[0],  /* 157: Signal */
  &StateFlowFinal_B.Reshapey_e,        /* 158: Signal */
  &StateFlowFinal_B.Reshapeyhat,       /* 159: Signal */
  &StateFlowFinal_B.ManualSwitchPZ[0], /* 160: Signal */
  &StateFlowFinal_B.MemoryX_m[0],      /* 161: Signal */
  &StateFlowFinal_B.DataTypeConversionEnable,/* 162: Signal */
  &StateFlowFinal_B.ReshapeX0[0],      /* 163: Signal */
  &StateFlowFinal_B.Reshapeu,          /* 164: Signal */
  &StateFlowFinal_B.Reshapexhat[0],    /* 165: Signal */
  &StateFlowFinal_B.Reshapey,          /* 166: Signal */
  &StateFlowFinal_B.Reshapeyhat_f,     /* 167: Signal */
  &StateFlowFinal_B.ManualSwitchPZ_l[0],/* 168: Signal */
  &StateFlowFinal_B.MemoryX[0],        /* 169: Signal */
  &StateFlowFinal_B.xct,               /* 170: Signal */
  &StateFlowFinal_B.yct,               /* 171: Signal */
  &StateFlowFinal_B.xct_p,             /* 172: Signal */
  &StateFlowFinal_B.yct_p,             /* 173: Signal */
  &StateFlowFinal_B.xct_pp,            /* 174: Signal */
  &StateFlowFinal_B.yct_pp,            /* 175: Signal */
  &StateFlowFinal_B.xc,                /* 176: Signal */
  &StateFlowFinal_B.yc,                /* 177: Signal */
  &StateFlowFinal_B.xc_p,              /* 178: Signal */
  &StateFlowFinal_B.yc_p,              /* 179: Signal */
  &StateFlowFinal_B.xc_pp,             /* 180: Signal */
  &StateFlowFinal_B.yc_pp,             /* 181: Signal */
  &StateFlowFinal_B.xq,                /* 182: Signal */
  &StateFlowFinal_B.yq,                /* 183: Signal */
  &StateFlowFinal_B.xq_p,              /* 184: Signal */
  &StateFlowFinal_B.yq_p,              /* 185: Signal */
  &StateFlowFinal_B.xq_pp,             /* 186: Signal */
  &StateFlowFinal_B.yq_pp,             /* 187: Signal */
  &StateFlowFinal_B.x,                 /* 188: Signal */
  &StateFlowFinal_B.y,                 /* 189: Signal */
  &StateFlowFinal_B.x_p_l,             /* 190: Signal */
  &StateFlowFinal_B.y_p_o,             /* 191: Signal */
  &StateFlowFinal_B.x_pp,              /* 192: Signal */
  &StateFlowFinal_B.y_pp,              /* 193: Signal */
  &StateFlowFinal_B.xs,                /* 194: Signal */
  &StateFlowFinal_B.ys,                /* 195: Signal */
  &StateFlowFinal_B.xs_p,              /* 196: Signal */
  &StateFlowFinal_B.ys_p,              /* 197: Signal */
  &StateFlowFinal_B.xs_pp,             /* 198: Signal */
  &StateFlowFinal_B.ys_pp,             /* 199: Signal */
  &StateFlowFinal_B.MultiportSwitch[0],/* 200: Signal */
  &StateFlowFinal_B.Integrator[0],     /* 201: Signal */
  &StateFlowFinal_B.IntegralGain[0],   /* 202: Signal */
  &StateFlowFinal_B.ProportionalGain[0],/* 203: Signal */
  &StateFlowFinal_B.Sum_f[0],          /* 204: Signal */
  &StateFlowFinal_B.x0,                /* 205: Signal */
  &StateFlowFinal_B.y0,                /* 206: Signal */
  &StateFlowFinal_B.pos_A_conv,        /* 207: Signal */
  &StateFlowFinal_B.pos_B_conv,        /* 208: Signal */
  &StateFlowFinal_B.DigitalClock,      /* 209: Signal */
  &StateFlowFinal_B.Sum12,             /* 210: Signal */
  &StateFlowFinal_B.Sum4,              /* 211: Signal */
  &StateFlowFinal_B.Sum7,              /* 212: Signal */
  &StateFlowFinal_B.Sum9,              /* 213: Signal */
  &StateFlowFinal_B.Gain_p,            /* 214: Signal */
  &StateFlowFinal_B.Gain_n,            /* 215: Signal */
  &StateFlowFinal_B.vel_A_conv_b,      /* 216: Signal */
  &StateFlowFinal_B.vel_B_conv_b,      /* 217: Signal */
  &StateFlowFinal_B.VelocityA_o,       /* 218: Signal */
  &StateFlowFinal_B.VelocityB_f,       /* 219: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_b,/* 220: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_d,/* 221: Signal */
  &StateFlowFinal_B.vel_A_conv,        /* 222: Signal */
  &StateFlowFinal_B.vel_B_conv,        /* 223: Signal */
  &StateFlowFinal_B.VelocityA,         /* 224: Signal */
  &StateFlowFinal_B.VelocityB,         /* 225: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14,/* 226: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15,/* 227: Signal */
  &StateFlowFinal_B.theta1,            /* 228: Signal */
  &StateFlowFinal_B.theta1_p,          /* 229: Signal */
  &StateFlowFinal_B.theta2,            /* 230: Signal */
  &StateFlowFinal_B.theta2_p,          /* 231: Signal */
  &StateFlowFinal_B.CA_o,              /* 232: Signal */
  &StateFlowFinal_B.CB_b,              /* 233: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator_i,/* 234: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator1_b,/* 235: Signal */
  &StateFlowFinal_B.Conversione,       /* 236: Signal */
  &StateFlowFinal_B.Gain1_e,           /* 237: Signal */
  &StateFlowFinal_B.Ki1,               /* 238: Signal */
  &StateFlowFinal_B.Ki2,               /* 239: Signal */
  &StateFlowFinal_B.Kp1_g,             /* 240: Signal */
  &StateFlowFinal_B.Kp2,               /* 241: Signal */
  &StateFlowFinal_B.Sum_h,             /* 242: Signal */
  &StateFlowFinal_B.Sum1_e,            /* 243: Signal */
  &StateFlowFinal_B.Sum2_g,            /* 244: Signal */
  &StateFlowFinal_B.Sum3_a,            /* 245: Signal */
  &StateFlowFinal_B.Sum4_f,            /* 246: Signal */
  &StateFlowFinal_B.Sum5_p,            /* 247: Signal */
  &StateFlowFinal_B.Sum6_n,            /* 248: Signal */
  &StateFlowFinal_B.CA,                /* 249: Signal */
  &StateFlowFinal_B.CB,                /* 250: Signal */
  &StateFlowFinal_B.CH,                /* 251: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator,/* 252: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator1,/* 253: Signal */
  &StateFlowFinal_B.Gain_i,            /* 254: Signal */
  &StateFlowFinal_B.Gain1_f,           /* 255: Signal */
  &StateFlowFinal_B.Sum1_i,            /* 256: Signal */
  &StateFlowFinal_B.Sum2_b,            /* 257: Signal */
  &StateFlowFinal_B.Diff_l,            /* 258: Signal */
  &StateFlowFinal_B.TSamp_i,           /* 259: Signal */
  &StateFlowFinal_B.Uk1_p,             /* 260: Signal */
  &StateFlowFinal_B.pos_A_conv_c,      /* 261: Signal */
  &StateFlowFinal_B.pos_B_conv_v,      /* 262: Signal */
  &StateFlowFinal_B.Sum5,              /* 263: Signal */
  &StateFlowFinal_B.Product,           /* 264: Signal */
  &StateFlowFinal_B.Product1,          /* 265: Signal */
  &StateFlowFinal_B.Add1,              /* 266: Signal */
  &StateFlowFinal_B.Conversion_d[0],   /* 267: Signal */
  &StateFlowFinal_B.Conversion_me[0],  /* 268: Signal */
  &StateFlowFinal_B.Conversion_g[0],   /* 269: Signal */
  &StateFlowFinal_B.Conversion_n,      /* 270: Signal */
  &StateFlowFinal_B.Conversion_l[0],   /* 271: Signal */
  &StateFlowFinal_B.Conversion_pk[0],  /* 272: Signal */
  &StateFlowFinal_B.Conversion_cs[0],  /* 273: Signal */
  &StateFlowFinal_B.Conversion_ks[0],  /* 274: Signal */
  &StateFlowFinal_B.Conversion_kg[0],  /* 275: Signal */
  &StateFlowFinal_B.Conversion_px[0],  /* 276: Signal */
  &StateFlowFinal_B.Conversion_h,      /* 277: Signal */
  &StateFlowFinal_B.Conversion_n2,     /* 278: Signal */
  &StateFlowFinal_B.Conversion_i[0],   /* 279: Signal */
  &StateFlowFinal_B.Conversion_m[0],   /* 280: Signal */
  &StateFlowFinal_B.Akxhatkk1[0],      /* 281: Signal */
  &StateFlowFinal_B.Bkuk[0],           /* 282: Signal */
  &StateFlowFinal_B.Reshape[0],        /* 283: Signal */
  &StateFlowFinal_B.Add[0],            /* 284: Signal */
  &StateFlowFinal_B.UseCurrentEstimator_e.Add[0],/* 285: Signal */
  &StateFlowFinal_B.Product_m,         /* 286: Signal */
  &StateFlowFinal_B.Product1_l,        /* 287: Signal */
  &StateFlowFinal_B.Add1_a,            /* 288: Signal */
  &StateFlowFinal_B.Conversion_b[0],   /* 289: Signal */
  &StateFlowFinal_B.Conversion_pt[0],  /* 290: Signal */
  &StateFlowFinal_B.Conversion_f[0],   /* 291: Signal */
  &StateFlowFinal_B.Conversion_a,      /* 292: Signal */
  &StateFlowFinal_B.Conversion_i1[0],  /* 293: Signal */
  &StateFlowFinal_B.Conversion_g3[0],  /* 294: Signal */
  &StateFlowFinal_B.Conversion_jd[0],  /* 295: Signal */
  &StateFlowFinal_B.Conversion_gp[0],  /* 296: Signal */
  &StateFlowFinal_B.Conversion_pv[0],  /* 297: Signal */
  &StateFlowFinal_B.Conversion_d0[0],  /* 298: Signal */
  &StateFlowFinal_B.Conversion_o,      /* 299: Signal */
  &StateFlowFinal_B.Conversion_dw,     /* 300: Signal */
  &StateFlowFinal_B.Conversion_pc[0],  /* 301: Signal */
  &StateFlowFinal_B.Conversion_p[0],   /* 302: Signal */
  &StateFlowFinal_B.Akxhatkk1_b[0],    /* 303: Signal */
  &StateFlowFinal_B.Bkuk_b[0],         /* 304: Signal */
  &StateFlowFinal_B.Reshape_c[0],      /* 305: Signal */
  &StateFlowFinal_B.Add_f[0],          /* 306: Signal */
  &StateFlowFinal_B.UseCurrentEstimator.Add[0],/* 307: Signal */
  &StateFlowFinal_B.Diff_i,            /* 308: Signal */
  &StateFlowFinal_B.TSamp_n,           /* 309: Signal */
  &StateFlowFinal_B.Uk1_d,             /* 310: Signal */
  &StateFlowFinal_B.Diff_d,            /* 311: Signal */
  &StateFlowFinal_B.TSamp_h,           /* 312: Signal */
  &StateFlowFinal_B.Uk1_b,             /* 313: Signal */
  &StateFlowFinal_B.Diff_f,            /* 314: Signal */
  &StateFlowFinal_B.TSamp_e,           /* 315: Signal */
  &StateFlowFinal_B.Uk1_l,             /* 316: Signal */
  &StateFlowFinal_B.Diff_n,            /* 317: Signal */
  &StateFlowFinal_B.TSamp_nd,          /* 318: Signal */
  &StateFlowFinal_B.Uk1_ll,            /* 319: Signal */
  &StateFlowFinal_B.Diff_b,            /* 320: Signal */
  &StateFlowFinal_B.TSamp_f,           /* 321: Signal */
  &StateFlowFinal_B.Uk1_j,             /* 322: Signal */
  &StateFlowFinal_B.Diff_bt,           /* 323: Signal */
  &StateFlowFinal_B.TSamp_iq,          /* 324: Signal */
  &StateFlowFinal_B.Uk1_bl,            /* 325: Signal */
  &StateFlowFinal_B.Conversion_c[0],   /* 326: Signal */
  &StateFlowFinal_B.Conversion_j[0],   /* 327: Signal */
  &StateFlowFinal_B.Conversion_j0,     /* 328: Signal */
  &StateFlowFinal_B.Conversion_k[0],   /* 329: Signal */
  &StateFlowFinal_B.MeasurementUpdate.Ckxhatkk1,/* 330: Signal */
  &StateFlowFinal_B.MeasurementUpdate.Dkuk,/* 331: Signal */
  &StateFlowFinal_B.MeasurementUpdate.Product3[0],/* 332: Signal */
  &StateFlowFinal_B.MeasurementUpdate.yhatkk1,/* 333: Signal */
  &StateFlowFinal_B.MeasurementUpdate.Sum,/* 334: Signal */
  &StateFlowFinal_B.UseCurrentEstimator_e.Product,/* 335: Signal */
  &StateFlowFinal_B.UseCurrentEstimator_e.Product1,/* 336: Signal */
  &StateFlowFinal_B.UseCurrentEstimator_e.Product2[0],/* 337: Signal */
  &StateFlowFinal_B.UseCurrentEstimator_e.Add1,/* 338: Signal */
  &StateFlowFinal_B.Conversion_ky[0],  /* 339: Signal */
  &StateFlowFinal_B.Conversion[0],     /* 340: Signal */
  &StateFlowFinal_B.Conversion_pq,     /* 341: Signal */
  &StateFlowFinal_B.Conversion_f1[0],  /* 342: Signal */
  &StateFlowFinal_B.MeasurementUpdate_a.Ckxhatkk1,/* 343: Signal */
  &StateFlowFinal_B.MeasurementUpdate_a.Dkuk,/* 344: Signal */
  &StateFlowFinal_B.MeasurementUpdate_a.Product3[0],/* 345: Signal */
  &StateFlowFinal_B.MeasurementUpdate_a.yhatkk1,/* 346: Signal */
  &StateFlowFinal_B.MeasurementUpdate_a.Sum,/* 347: Signal */
  &StateFlowFinal_B.UseCurrentEstimator.Product,/* 348: Signal */
  &StateFlowFinal_B.UseCurrentEstimator.Product1,/* 349: Signal */
  &StateFlowFinal_B.UseCurrentEstimator.Product2[0],/* 350: Signal */
  &StateFlowFinal_B.UseCurrentEstimator.Add1,/* 351: Signal */
  &StateFlowFinal_B.Duk_h,             /* 352: Signal */
  &StateFlowFinal_B.x1k1_g,            /* 353: Signal */
  &StateFlowFinal_B.x2k1_n,            /* 354: Signal */
  &StateFlowFinal_B.yk_i,              /* 355: Signal */
  &StateFlowFinal_B.x1k_a,             /* 356: Signal */
  &StateFlowFinal_B.x2k_g,             /* 357: Signal */
  &StateFlowFinal_B.Duk,               /* 358: Signal */
  &StateFlowFinal_B.x1k1,              /* 359: Signal */
  &StateFlowFinal_B.x2k1,              /* 360: Signal */
  &StateFlowFinal_B.yk,                /* 361: Signal */
  &StateFlowFinal_B.x1k,               /* 362: Signal */
  &StateFlowFinal_B.x2k,               /* 363: Signal */
  &StateFlowFinal_B.Duk_n,             /* 364: Signal */
  &StateFlowFinal_B.x1k1_h,            /* 365: Signal */
  &StateFlowFinal_B.x2k1_h,            /* 366: Signal */
  &StateFlowFinal_B.yk_m,              /* 367: Signal */
  &StateFlowFinal_B.x1k_i,             /* 368: Signal */
  &StateFlowFinal_B.x2k_d,             /* 369: Signal */
  &StateFlowFinal_B.A11_p,             /* 370: Signal */
  &StateFlowFinal_B.A12_c,             /* 371: Signal */
  &StateFlowFinal_B.A21_h,             /* 372: Signal */
  &StateFlowFinal_B.A22_d,             /* 373: Signal */
  &StateFlowFinal_B.sum2_nk,           /* 374: Signal */
  &StateFlowFinal_B.sum3_e,            /* 375: Signal */
  &StateFlowFinal_B.B11_k,             /* 376: Signal */
  &StateFlowFinal_B.B21_l,             /* 377: Signal */
  &StateFlowFinal_B.C11_h,             /* 378: Signal */
  &StateFlowFinal_B.C12_e,             /* 379: Signal */
  &StateFlowFinal_B.sum2_k,            /* 380: Signal */
  &StateFlowFinal_B.A11,               /* 381: Signal */
  &StateFlowFinal_B.A12,               /* 382: Signal */
  &StateFlowFinal_B.A21,               /* 383: Signal */
  &StateFlowFinal_B.A22,               /* 384: Signal */
  &StateFlowFinal_B.sum2_n,            /* 385: Signal */
  &StateFlowFinal_B.sum3,              /* 386: Signal */
  &StateFlowFinal_B.B11,               /* 387: Signal */
  &StateFlowFinal_B.B21,               /* 388: Signal */
  &StateFlowFinal_B.C11,               /* 389: Signal */
  &StateFlowFinal_B.C12,               /* 390: Signal */
  &StateFlowFinal_B.sum2,              /* 391: Signal */
  &StateFlowFinal_B.A11_h,             /* 392: Signal */
  &StateFlowFinal_B.A12_g,             /* 393: Signal */
  &StateFlowFinal_B.A21_p,             /* 394: Signal */
  &StateFlowFinal_B.A22_j,             /* 395: Signal */
  &StateFlowFinal_B.sum2_e,            /* 396: Signal */
  &StateFlowFinal_B.sum3_b,            /* 397: Signal */
  &StateFlowFinal_B.B11_d,             /* 398: Signal */
  &StateFlowFinal_B.B21_h,             /* 399: Signal */
  &StateFlowFinal_B.C11_e,             /* 400: Signal */
  &StateFlowFinal_B.C12_m,             /* 401: Signal */
  &StateFlowFinal_B.sum2_ka,           /* 402: Signal */
  &StateFlowFinal_P.Abbassa_Value,     /* 403: Block Parameter */
  &StateFlowFinal_P.AlzataA_Value,     /* 404: Block Parameter */
  &StateFlowFinal_P.AlzataB_Value,     /* 405: Block Parameter */
  &StateFlowFinal_P.AsseAbraccia_Value,/* 406: Block Parameter */
  &StateFlowFinal_P.AsseAvite_Value,   /* 407: Block Parameter */
  &StateFlowFinal_P.AsseBbraccia_Value,/* 408: Block Parameter */
  &StateFlowFinal_P.AsseBvite_Value,   /* 409: Block Parameter */
  &StateFlowFinal_P.Discesa_Value,     /* 410: Block Parameter */
  &StateFlowFinal_P.PeriodoA_Value,    /* 411: Block Parameter */
  &StateFlowFinal_P.PeriodoB_Value,    /* 412: Block Parameter */
  &StateFlowFinal_P.Reset_Value,       /* 413: Block Parameter */
  &StateFlowFinal_P.StartHome_Value,   /* 414: Block Parameter */
  &StateFlowFinal_P.StartRobot_Value,  /* 415: Block Parameter */
  &StateFlowFinal_P.StartWork_Value,   /* 416: Block Parameter */
  &StateFlowFinal_P.StartZero_Value,   /* 417: Block Parameter */
  &StateFlowFinal_P.Stop_Value,        /* 418: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P1[0],/* 419: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P2,/* 420: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P3,/* 421: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P4,/* 422: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P5,/* 423: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P6,/* 424: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P7,/* 425: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P1[0],/* 426: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P2,/* 427: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P3,/* 428: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P4,/* 429: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P5,/* 430: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P6,/* 431: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P7,/* 432: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P1[0],/* 433: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P2,/* 434: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P3,/* 435: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P4,/* 436: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P5,/* 437: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P6,/* 438: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P7,/* 439: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P1[0],/* 440: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P2,/* 441: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P3,/* 442: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P4,/* 443: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P5,/* 444: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P6,/* 445: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P7,/* 446: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1[0],/* 447: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2,/* 448: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3,/* 449: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4,/* 450: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5,/* 451: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6,/* 452: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7,/* 453: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1_l[0],/* 454: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2_n,/* 455: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3_n,/* 456: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4_l,/* 457: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5_i,/* 458: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6_f,/* 459: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7_h,/* 460: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P1[0],  /* 461: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P2,     /* 462: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P3,     /* 463: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P4,     /* 464: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P5,     /* 465: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P6,     /* 466: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P7,     /* 467: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P1[0],   /* 468: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P2,      /* 469: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P3,      /* 470: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P4,      /* 471: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P5,      /* 472: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P6,      /* 473: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P7,      /* 474: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P1[0],   /* 475: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P2,      /* 476: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P3,      /* 477: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P4,      /* 478: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P5,      /* 479: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P6,      /* 480: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P7,      /* 481: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_UpperSat,/* 482: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_LowerSat,/* 483: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P1[0],/* 484: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P2,/* 485: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P3,/* 486: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P4,/* 487: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P5,/* 488: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P6,/* 489: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P7,/* 490: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold, /* 491: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_UpperSat,/* 492: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_LowerSat,/* 493: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P1[0],/* 494: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P2,/* 495: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P3,/* 496: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P4,/* 497: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P5,/* 498: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P6,/* 499: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P7,/* 500: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold_f,/* 501: Block Parameter */
  &StateFlowFinal_P.Gain_Gain,         /* 502: Block Parameter */
  &StateFlowFinal_P.Torquesend_P1[0],  /* 503: Block Parameter */
  &StateFlowFinal_P.Torquesend_P2,     /* 504: Block Parameter */
  &StateFlowFinal_P.Torquesend_P3,     /* 505: Block Parameter */
  &StateFlowFinal_P.Torquesend_P4,     /* 506: Block Parameter */
  &StateFlowFinal_P.Torquesend_P5,     /* 507: Block Parameter */
  &StateFlowFinal_P.Torquesend_P6,     /* 508: Block Parameter */
  &StateFlowFinal_P.Torquesend_P7,     /* 509: Block Parameter */
  &StateFlowFinal_P.Switch_Threshold,  /* 510: Block Parameter */
  &StateFlowFinal_P.Constant1_Value_e, /* 511: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_UpperSat,/* 512: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_LowerSat,/* 513: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P1[0],/* 514: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P2,/* 515: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P3,/* 516: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P4,/* 517: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P5,/* 518: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P6,/* 519: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P7,/* 520: Block Parameter */
  &StateFlowFinal_P.Switch2_Threshold, /* 521: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P1[0],/* 522: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P2, /* 523: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P3, /* 524: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P4, /* 525: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P5, /* 526: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P6, /* 527: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P7, /* 528: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P1[0],/* 529: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P2, /* 530: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P3, /* 531: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P4, /* 532: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P5, /* 533: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P6, /* 534: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P7, /* 535: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P1[0], /* 536: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P2,    /* 537: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P3,    /* 538: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P4,    /* 539: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P5,    /* 540: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P6,    /* 541: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P7,    /* 542: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P1[0], /* 543: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P2,    /* 544: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P3,    /* 545: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P4,    /* 546: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P5,    /* 547: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P6,    /* 548: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P7,    /* 549: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevScale,/* 550: Mask Parameter */
  &StateFlowFinal_P.Gain2_Gain,        /* 551: Block Parameter */
  &StateFlowFinal_P.Gain4_Gain,        /* 552: Block Parameter */
  &StateFlowFinal_P.PIDController_P,   /* 553: Mask Parameter */
  &StateFlowFinal_P.PIDController_I,   /* 554: Mask Parameter */
  &StateFlowFinal_P.selettore_Value,   /* 555: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_j,       /* 556: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain_i,      /* 557: Block Parameter */
  &StateFlowFinal_P.Kd_Gain,           /* 558: Block Parameter */
  &StateFlowFinal_P.Kd1_Gain,          /* 559: Block Parameter */
  &StateFlowFinal_P.Kp1_Gain_c,        /* 560: Block Parameter */
  &StateFlowFinal_P.StatusWord_P1[0],  /* 561: Block Parameter */
  &StateFlowFinal_P.StatusWord_P2,     /* 562: Block Parameter */
  &StateFlowFinal_P.StatusWord_P3,     /* 563: Block Parameter */
  &StateFlowFinal_P.StatusWord_P4,     /* 564: Block Parameter */
  &StateFlowFinal_P.StatusWord_P5,     /* 565: Block Parameter */
  &StateFlowFinal_P.StatusWord_P6,     /* 566: Block Parameter */
  &StateFlowFinal_P.StatusWord_P7,     /* 567: Block Parameter */
  &StateFlowFinal_P.Constant_Value,    /* 568: Block Parameter */
  &StateFlowFinal_P.Memory_X0,         /* 569: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1[0],/* 570: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2,/* 571: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3,/* 572: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4,/* 573: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5,/* 574: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6,/* 575: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7,/* 576: Block Parameter */
  &StateFlowFinal_P.Constant_Value_l,  /* 577: Block Parameter */
  &StateFlowFinal_P.Memory_X0_m,       /* 578: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_g[0],/* 579: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_p,/* 580: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_f,/* 581: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_a,/* 582: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_d,/* 583: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_c,/* 584: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_a,/* 585: Block Parameter */
  &StateFlowFinal_P.Constant_Value_e,  /* 586: Block Parameter */
  &StateFlowFinal_P.Memory_X0_o,       /* 587: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_i[0],/* 588: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_m,/* 589: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_m,/* 590: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_l,/* 591: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_b,/* 592: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l,/* 593: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_b,/* 594: Block Parameter */
  &StateFlowFinal_P.Constant_Value_p,  /* 595: Block Parameter */
  &StateFlowFinal_P.Memory_X0_a,       /* 596: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_a[0],/* 597: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_d,/* 598: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_k,/* 599: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_f,/* 600: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_k,/* 601: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l4,/* 602: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_j,/* 603: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeA_ICPrevScale,/* 604: Mask Parameter */
  &StateFlowFinal_P.Gain_Gain_b,       /* 605: Block Parameter */
  &StateFlowFinal_P.Gain6_Gain,        /* 606: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt,        /* 607: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_m[0],/* 608: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_d,/* 609: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_d,/* 610: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_g,/* 611: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_h,/* 612: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_o,/* 613: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_g,/* 614: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_m[0],/* 615: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_d,/* 616: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_b,/* 617: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_i,/* 618: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_cp,/* 619: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_f,/* 620: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_o,/* 621: Block Parameter */
  &StateFlowFinal_P.A_Value[0],        /* 622: Block Parameter */
  &StateFlowFinal_P.B_Value[0],        /* 623: Block Parameter */
  &StateFlowFinal_P.C_Value_j[0],      /* 624: Block Parameter */
  &StateFlowFinal_P.D_Value_e,         /* 625: Block Parameter */
  &StateFlowFinal_P.Enable_Value_d,    /* 626: Block Parameter */
  &StateFlowFinal_P.G_Value[0],        /* 627: Block Parameter */
  &StateFlowFinal_P.H_Value[0],        /* 628: Block Parameter */
  &StateFlowFinal_P.N_Value[0],        /* 629: Block Parameter */
  &StateFlowFinal_P.P0_Value[0],       /* 630: Block Parameter */
  &StateFlowFinal_P.Q_Value[0],        /* 631: Block Parameter */
  &StateFlowFinal_P.R_Value,           /* 632: Block Parameter */
  &StateFlowFinal_P.Reset_Value_f,     /* 633: Block Parameter */
  &StateFlowFinal_P.X0_Value_o[0],     /* 634: Block Parameter */
  &StateFlowFinal_P.ManualSwitchPZ_CurrentSetting,/* 635: Block Parameter */
  &StateFlowFinal_P.MemoryX_DelayLength_a,/* 636: Block Parameter */
  &StateFlowFinal_P.A_Value_j[0],      /* 637: Block Parameter */
  &StateFlowFinal_P.B_Value_i[0],      /* 638: Block Parameter */
  &StateFlowFinal_P.C_Value[0],        /* 639: Block Parameter */
  &StateFlowFinal_P.D_Value,           /* 640: Block Parameter */
  &StateFlowFinal_P.Enable_Value,      /* 641: Block Parameter */
  &StateFlowFinal_P.G_Value_m[0],      /* 642: Block Parameter */
  &StateFlowFinal_P.H_Value_h[0],      /* 643: Block Parameter */
  &StateFlowFinal_P.N_Value_m[0],      /* 644: Block Parameter */
  &StateFlowFinal_P.P0_Value_m[0],     /* 645: Block Parameter */
  &StateFlowFinal_P.Q_Value_n[0],      /* 646: Block Parameter */
  &StateFlowFinal_P.R_Value_o,         /* 647: Block Parameter */
  &StateFlowFinal_P.Reset_Value_o,     /* 648: Block Parameter */
  &StateFlowFinal_P.X0_Value[0],       /* 649: Block Parameter */
  &StateFlowFinal_P.ManualSwitchPZ_CurrentSetting_p,/* 650: Block Parameter */
  &StateFlowFinal_P.MemoryX_DelayLength,/* 651: Block Parameter */
  &StateFlowFinal_P.AlzataC_Value,     /* 652: Block Parameter */
  &StateFlowFinal_P.AlzataC1_Value,    /* 653: Block Parameter */
  &StateFlowFinal_P.AlzataQ_Value,     /* 654: Block Parameter */
  &StateFlowFinal_P.Constant3_Value,   /* 655: Block Parameter */
  &StateFlowFinal_P.Ngiri_Value,       /* 656: Block Parameter */
  &StateFlowFinal_P.Ngiri1_Value,      /* 657: Block Parameter */
  &StateFlowFinal_P.Ngiri2_Value,      /* 658: Block Parameter */
  &StateFlowFinal_P.Periodo_Value,     /* 659: Block Parameter */
  &StateFlowFinal_P.PeriodoC_Value,    /* 660: Block Parameter */
  &StateFlowFinal_P.PeriodoC1_Value,   /* 661: Block Parameter */
  &StateFlowFinal_P.PeriodoQ_Value,    /* 662: Block Parameter */
  &StateFlowFinal_P.Rmax_Value,        /* 663: Block Parameter */
  &StateFlowFinal_P.Rmax1_Value,       /* 664: Block Parameter */
  &StateFlowFinal_P.Rmin_Value,        /* 665: Block Parameter */
  &StateFlowFinal_P.Rmin1_Value,       /* 666: Block Parameter */
  &StateFlowFinal_P.Rmin2_Value,       /* 667: Block Parameter */
  &StateFlowFinal_P.Rmin3_Value,       /* 668: Block Parameter */
  &StateFlowFinal_P.Tempospostiniziale_Value,/* 669: Block Parameter */
  &StateFlowFinal_P.Integrator_gainval,/* 670: Block Parameter */
  &StateFlowFinal_P.Integrator_IC,     /* 671: Block Parameter */
  &StateFlowFinal_P.Constant_Value_b,  /* 672: Block Parameter */
  &StateFlowFinal_P.Constant1_Value,   /* 673: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevSca_m,/* 674: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB1_ICPrevScal,/* 675: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB2_ICPrevScal,/* 676: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB3_ICPrevScal,/* 677: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB4_ICPrevScal,/* 678: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB5_ICPrevScal,/* 679: Mask Parameter */
  &StateFlowFinal_P.Constant4_Value,   /* 680: Block Parameter */
  &StateFlowFinal_P.Constant5_Value,   /* 681: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_c,       /* 682: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d4,      /* 683: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_k[0],/* 684: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_i,/* 685: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_a,/* 686: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_e,/* 687: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_j,/* 688: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_m,/* 689: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_m,/* 690: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_a[0],/* 691: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_l,/* 692: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_a,/* 693: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_f,/* 694: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_c,/* 695: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_g,/* 696: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_m,/* 697: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1[0],/* 698: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2,/* 699: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3,/* 700: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4,/* 701: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5,/* 702: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6,/* 703: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7,/* 704: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1[0],/* 705: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2,/* 706: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3,/* 707: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4,/* 708: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5,/* 709: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6,/* 710: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7,/* 711: Block Parameter */
  &StateFlowFinal_P.CoppiaA_Y0,        /* 712: Block Parameter */
  &StateFlowFinal_P.CoppiaB_Y0,        /* 713: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_gainval,/* 714: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_IC,/* 715: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_gainval,/* 716: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_IC,/* 717: Block Parameter */
  &StateFlowFinal_P.Conversione_Gain,  /* 718: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain,        /* 719: Block Parameter */
  &StateFlowFinal_P.Ki1_Gain,          /* 720: Block Parameter */
  &StateFlowFinal_P.Ki2_Gain,          /* 721: Block Parameter */
  &StateFlowFinal_P.Kp1_Gain,          /* 722: Block Parameter */
  &StateFlowFinal_P.Kp2_Gain,          /* 723: Block Parameter */
  &StateFlowFinal_P.CA_Y0,             /* 724: Block Parameter */
  &StateFlowFinal_P.CB_Y0,             /* 725: Block Parameter */
  &StateFlowFinal_P.CH_Y0,             /* 726: Block Parameter */
  &StateFlowFinal_P.Ki_Value,          /* 727: Block Parameter */
  &StateFlowFinal_P.Kp_Value,          /* 728: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_gainva_l,/* 729: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_IC_e,/* 730: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_gainv_o,/* 731: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_IC_j,/* 732: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d,       /* 733: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain_e,      /* 734: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_g,      /* 735: Block Parameter */
  &StateFlowFinal_P.ConstantP_Value,   /* 736: Block Parameter */
  &StateFlowFinal_P.CovarianceZ_Value[0],/* 737: Block Parameter */
  &StateFlowFinal_P.KalmanGainL_Value[0],/* 738: Block Parameter */
  &StateFlowFinal_P.KalmanGainM_Value_n[0],/* 739: Block Parameter */
  &StateFlowFinal_P.Constant_Value_bx, /* 740: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P1[0],/* 741: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P2,/* 742: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P3,/* 743: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P4,/* 744: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P5,/* 745: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P6,/* 746: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P7,/* 747: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P8,/* 748: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P1_d[0],/* 749: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P2_l,/* 750: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P3_n,/* 751: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P4_n,/* 752: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P5_p,/* 753: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P6_g,/* 754: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P7_a,/* 755: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P8_j,/* 756: Block Parameter */
  &StateFlowFinal_P.ConstantP_Value_c, /* 757: Block Parameter */
  &StateFlowFinal_P.CovarianceZ_Value_m[0],/* 758: Block Parameter */
  &StateFlowFinal_P.KalmanGainL_Value_m[0],/* 759: Block Parameter */
  &StateFlowFinal_P.KalmanGainM_Value[0],/* 760: Block Parameter */
  &StateFlowFinal_P.Constant_Value_l1, /* 761: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P1_i[0],/* 762: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P2_e,/* 763: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P3_b,/* 764: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P4_l,/* 765: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P5_h,/* 766: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P6_l,/* 767: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P7_d,/* 768: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P8_o,/* 769: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P1_m[0],/* 770: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P2_lv,/* 771: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P3_k,/* 772: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P4_b,/* 773: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P5_i,/* 774: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P6_e,/* 775: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P7_p,/* 776: Block Parameter */
  &StateFlowFinal_P.CheckSignalProperties_P8_od,/* 777: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_e,      /* 778: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gz,     /* 779: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_m,      /* 780: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gh,     /* 781: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_d,      /* 782: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_p,      /* 783: Block Parameter */
  &StateFlowFinal_P.MeasurementUpdate.Lykyhatkk1_Y0,/* 784: Block Parameter */
  &StateFlowFinal_P.UseCurrentEstimator_e.deltax_Y0,/* 785: Block Parameter */
  &StateFlowFinal_P.MeasurementUpdate_a.Lykyhatkk1_Y0,/* 786: Block Parameter */
  &StateFlowFinal_P.UseCurrentEstimator.deltax_Y0,/* 787: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_h,        /* 788: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_l,/* 789: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_l,/* 790: Block Parameter */
  &StateFlowFinal_P.Duk_Gain,          /* 791: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition,/* 792: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition,/* 793: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_g,        /* 794: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_n,/* 795: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_e,/* 796: Block Parameter */
  &StateFlowFinal_P.A11_Gain_e,        /* 797: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a,        /* 798: Block Parameter */
  &StateFlowFinal_P.A21_Gain_m,        /* 799: Block Parameter */
  &StateFlowFinal_P.A22_Gain_g,        /* 800: Block Parameter */
  &StateFlowFinal_P.B11_Gain_f,        /* 801: Block Parameter */
  &StateFlowFinal_P.B21_Gain_p,        /* 802: Block Parameter */
  &StateFlowFinal_P.C11_Gain_n,        /* 803: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d,        /* 804: Block Parameter */
  &StateFlowFinal_P.A11_Gain,          /* 805: Block Parameter */
  &StateFlowFinal_P.A12_Gain,          /* 806: Block Parameter */
  &StateFlowFinal_P.A21_Gain,          /* 807: Block Parameter */
  &StateFlowFinal_P.A22_Gain,          /* 808: Block Parameter */
  &StateFlowFinal_P.B11_Gain,          /* 809: Block Parameter */
  &StateFlowFinal_P.B21_Gain,          /* 810: Block Parameter */
  &StateFlowFinal_P.C11_Gain,          /* 811: Block Parameter */
  &StateFlowFinal_P.C12_Gain,          /* 812: Block Parameter */
  &StateFlowFinal_P.A11_Gain_h,        /* 813: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a3,       /* 814: Block Parameter */
  &StateFlowFinal_P.A21_Gain_f,        /* 815: Block Parameter */
  &StateFlowFinal_P.A22_Gain_d,        /* 816: Block Parameter */
  &StateFlowFinal_P.B11_Gain_n,        /* 817: Block Parameter */
  &StateFlowFinal_P.B21_Gain_l,        /* 818: Block Parameter */
  &StateFlowFinal_P.C11_Gain_g,        /* 819: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d1,       /* 820: Block Parameter */
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

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 10, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 }
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
  1,                                   /* 9 */
  2,                                   /* 10 */
  1,                                   /* 11 */
  1,                                   /* 12 */
  2,                                   /* 13 */
  1,                                   /* 14 */
  43,                                  /* 15 */
  1,                                   /* 16 */
  41,                                  /* 17 */
  1,                                   /* 18 */
  24,                                  /* 19 */
  1,                                   /* 20 */
  38,                                  /* 21 */
  1,                                   /* 22 */
  47,                                  /* 23 */
  1,                                   /* 24 */
  37,                                  /* 25 */
  1,                                   /* 26 */
  23,                                  /* 27 */
  1,                                   /* 28 */
  45                                   /* 29 */
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
  { rtBlockSignals, 403,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 418,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1510070447U,
    3729029722U,
    2072698155U,
    1257625366U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  StateFlowFinal_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void StateFlowFinal_InitializeDataMapInfo(RT_MODEL_StateFlowFinal_T *const
  StateFlowFinal_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(StateFlowFinal_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(StateFlowFinal_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(StateFlowFinal_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(StateFlowFinal_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(StateFlowFinal_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  StateFlowFinal_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (StateFlowFinal_M);
  StateFlowFinal_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_StateFlowFinal_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(StateFlowFinal_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(StateFlowFinal_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(StateFlowFinal_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void StateFlowFinal_host_InitializeDataMapInfo
    (StateFlowFinal_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: StateFlowFinal_capi.c */
