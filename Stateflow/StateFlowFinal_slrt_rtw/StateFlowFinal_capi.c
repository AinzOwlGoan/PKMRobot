/*
 * StateFlowFinal_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowFinal".
 *
 * Model version              : 1.1099
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Dec 20 14:27:44 2021
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
  { 0, 49, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING("bool"), 0, 0, 0, 0, 0 },

  { 1, 49, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING("offC"), 1, 0, 0, 0, 0 },

  { 2, 49, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING("homeH"), 2, 0, 0, 0, 0 },

  { 3, 49, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING("offAv"), 3, 0, 0, 0, 0 },

  { 4, 49, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING("offBv"), 4, 0, 0, 0, 0 },

  { 5, 49, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING("offAb"), 5, 0, 0, 0, 0 },

  { 6, 49, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING("offBb"), 6, 0, 0, 0, 0 },

  { 7, 49, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING("homeA"), 7, 0, 0, 0, 0 },

  { 8, 49, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING("homeB"), 8, 0, 0, 0, 0 },

  { 9, 49, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING("luci"), 9, 0, 0, 0, 0 },

  { 10, 49, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING("Hv"), 10, 0, 0, 0, 0 },

  { 11, 49, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING("Hb"), 11, 0, 0, 0, 0 },

  { 12, 49, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING("Enable"), 12, 0, 0, 0, 0 },

  { 13, 49, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING("FineLav"), 13, 0, 0, 0, 0 },

  { 14, 49, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 49, TARGET_STRING("State flow robot/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 16, 49, TARGET_STRING("State flow robot/p17"),
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
    TARGET_STRING("xr"), 0, 0, 0, 0, 0 },

  { 83, 23, TARGET_STRING("Sistema_braccia/Cinematica diretta/p2"),
    TARGET_STRING("yr"), 1, 0, 0, 0, 0 },

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

  { 92, 32, TARGET_STRING("Sistema_braccia/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 32, TARGET_STRING("Sistema_braccia/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 94, 33, TARGET_STRING("Sistema_braccia/MATLAB Function3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4"),
    TARGET_STRING("Omega"), 0, 0, 4, 0, 1 },

  { 96, 35, TARGET_STRING("Sistema_braccia/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 35, TARGET_STRING("Sistema_braccia/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 0, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 101, 0, TARGET_STRING("Sistema_braccia/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 102, 0, TARGET_STRING("Sistema_braccia/Sum"),
    TARGET_STRING("Xmov"), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Sistema_braccia/Sum1"),
    TARGET_STRING("Ymov"), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Sistema_braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 0, TARGET_STRING("Sistema_braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 0, TARGET_STRING("Sistema_braccia/Sum4"),
    TARGET_STRING("q"), 0, 0, 4, 0, 1 },

  { 107, 0, TARGET_STRING("Sistema_braccia/Sum7"),
    TARGET_STRING("qdot"), 0, 0, 4, 0, 1 },

  { 108, 0, TARGET_STRING("Sistema_braccia/Sum9"),
    TARGET_STRING("Y"), 0, 0, 4, 0, 1 },

  { 109, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 111, 5, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 112, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 113, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 114, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 115, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 7, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 120, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 10, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 122, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 123, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 126, 12, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 127, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 131, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 132, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 133, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 134, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 135, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 136, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 138, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 139, 18, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 140, 19, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 142, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 143, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 144, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 145, 0, TARGET_STRING("Sistema_braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 146, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 147, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 148, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 149, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 150, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 151, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 152, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 154, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 155, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 156, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 157, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 158, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 159, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 160, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 161, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 162, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 163, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 164, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 165, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 166, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 167, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 168, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 169, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 170, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 171, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 172, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 173, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 174, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 175, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 176, 0, TARGET_STRING("Sistema_braccia/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 177, 0, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 178, 0, TARGET_STRING("Sistema_braccia/PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 179, 0, TARGET_STRING("Sistema_braccia/PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 180, 0, TARGET_STRING("Sistema_braccia/PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 181, 36, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 182, 36, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 183, 37, TARGET_STRING("Sistema_braccia/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 38, TARGET_STRING("Sistema_braccia/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 0, TARGET_STRING("Sistema_braccia/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 186, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 187, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 189, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 190, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 191, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 192, 39, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 40, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 194, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 197, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 198, 41, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 199, 42, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 200, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 203, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 204, 44, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 205, 44, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 206, 45, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 207, 45, TARGET_STRING("State flow robot/Posizionamento/MATLAB Function1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 208, 46, TARGET_STRING(
    "State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 209, 46, TARGET_STRING(
    "State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 210, 46, TARGET_STRING(
    "State flow robot/Posizionamento/Conversione in gradi "),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 211, 46, TARGET_STRING("State flow robot/Posizionamento/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 212, 46, TARGET_STRING("State flow robot/Posizionamento/Ki1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 213, 46, TARGET_STRING("State flow robot/Posizionamento/Ki2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 214, 46, TARGET_STRING("State flow robot/Posizionamento/Kp1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 215, 46, TARGET_STRING("State flow robot/Posizionamento/Kp2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 216, 46, TARGET_STRING("State flow robot/Posizionamento/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 217, 46, TARGET_STRING("State flow robot/Posizionamento/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 218, 46, TARGET_STRING("State flow robot/Posizionamento/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 219, 46, TARGET_STRING("State flow robot/Posizionamento/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 220, 46, TARGET_STRING("State flow robot/Posizionamento/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 221, 46, TARGET_STRING("State flow robot/Posizionamento/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 222, 46, TARGET_STRING("State flow robot/Posizionamento/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 223, 47, TARGET_STRING("State flow robot/Setting/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 224, 47, TARGET_STRING("State flow robot/Setting/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 225, 47, TARGET_STRING("State flow robot/Setting/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 226, 48, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 227, 48, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 228, 48, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 229, 48, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 230, 48, TARGET_STRING("State flow robot/Setting/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 231, 48, TARGET_STRING("State flow robot/Setting/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 232, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 233, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 234, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 235, 13, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 236, 14, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 237, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 238, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 239, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 240, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 241, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 242, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 243, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 245, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 247, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 248, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 250, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 257, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 258, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 261, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 282, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 283, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 294, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 297, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 303, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 304, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 305, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 306, 0, TARGET_STRING(
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
  { 307, TARGET_STRING("Abbassa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 308, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 309, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 310, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 311, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 312, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 313, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 314, TARGET_STRING("Discesa"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 315, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 316, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 317, TARGET_STRING("Reset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 318, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 319, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 320, TARGET_STRING("StartWork"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 321, TARGET_STRING("StartZero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 322, TARGET_STRING("Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 323, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 324, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 325, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 326, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 327, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 328, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 329, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 330, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 331, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 332, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 333, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 334, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 335, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 336, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 337, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 338, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 339, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 340, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 341, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 342, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 343, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 344, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 345, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 346, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 347, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 348, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 349, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 350, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 351, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 352, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 353, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 354, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 355, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 356, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 357, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 358, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 359, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 360, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 361, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 362, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 363, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 364, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 365, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 366, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 367, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 368, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 369, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 370, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 371, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 372, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 373, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 374, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 375, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 376, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 377, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 378, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 379, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 380, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 381, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 382, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 383, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 384, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 385, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 386, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 387, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 388, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 389, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 390, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 391, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 392, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 393, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 394, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 395, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 396, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 397, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 398, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 399, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 400, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 401, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 402, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 403, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 404, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 405, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 406, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 407, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 408, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 409, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 410, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 411, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 412, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 413, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 414, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 415, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 416, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 417, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 418, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 419, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 420, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 421, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 422, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 423, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 424, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 425, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 426, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 427, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 428, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 429, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 430, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 431, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 432, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 433, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 434, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 435, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 436, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 437, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 438, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 439, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 440, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 441, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 442, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 443, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 444, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 445, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 446, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 447, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 448, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 449, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 450, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 451, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 452, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 453, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 454, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 455, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 456, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 457, TARGET_STRING("Sistema_braccia/PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 458, TARGET_STRING("Sistema_braccia/PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 459, TARGET_STRING("Sistema_braccia/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 460, TARGET_STRING("Sistema_braccia/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 461, TARGET_STRING("Sistema_braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 462, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 463, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 464, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 465, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 466, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 467, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 468, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 469, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 470, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 471, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 472, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 473, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 474, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 475, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 476, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 477, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 478, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 479, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 480, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 481, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 482, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 483, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 484, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 485, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 486, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 487, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 488, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 489, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 490, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 491, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 492, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 493, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 494, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 495, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 496, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 497, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 498, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 499, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 500, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 501, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 502, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 503, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 504, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 505, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 506, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 507, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 508, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 509, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 510, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 511, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 512, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 513, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 514, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 515, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 516, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 517, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 518, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 519, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 520, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 521, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 522, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 523, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 524, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 525, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 526, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 527, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 528, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 529, TARGET_STRING("Sistema_braccia/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 530, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 531, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 532, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 533, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 534, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 535, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 536, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 537, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 538, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 539, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 540, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 541, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 542, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 543, TARGET_STRING("Sistema_braccia/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 544, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 545, TARGET_STRING("Sistema_braccia/PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 546, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 547, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 548, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 549, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 550, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 551, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 552, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 553, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 554, TARGET_STRING("Sistema_braccia/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 555, TARGET_STRING("Sistema_braccia/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 556, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 557, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 558, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 559, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 560, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 561, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 562, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 563, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 564, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 565, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 566, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 567, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 568, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 569, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 570, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 571, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 572, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 573, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 574, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 575, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 576, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 577, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 578, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 579, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 580, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 581, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 582, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 583, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 584, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 585, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 586, TARGET_STRING("State flow robot/Posizionamento/CoppiaA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 587, TARGET_STRING("State flow robot/Posizionamento/CoppiaB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 588, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 589, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 590, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 591, TARGET_STRING("State flow robot/Posizionamento/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 592, TARGET_STRING("State flow robot/Posizionamento/Conversione in gradi "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 593, TARGET_STRING("State flow robot/Posizionamento/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 594, TARGET_STRING("State flow robot/Posizionamento/Ki1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 595, TARGET_STRING("State flow robot/Posizionamento/Ki2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 596, TARGET_STRING("State flow robot/Posizionamento/Kp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 597, TARGET_STRING("State flow robot/Posizionamento/Kp2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 598, TARGET_STRING("State flow robot/Setting/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 599, TARGET_STRING("State flow robot/Setting/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 600, TARGET_STRING("State flow robot/Setting/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 601, TARGET_STRING("State flow robot/Setting/Ki"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 602, TARGET_STRING("State flow robot/Setting/Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 603, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 604, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 605, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 606, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 607, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 608, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 609, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 610, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 611, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 612, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 613, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 614, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 615, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 616, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 617, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 618, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 619, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 620, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 621, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 622, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 623, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 624, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 625, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 626, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 627, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 628, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 629, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 630, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 631, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 632, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 633, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 634, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 635, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 636, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 637, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 638, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 639, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 640, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 641, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 642, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 643, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 644, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 645, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 646, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 647, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 648, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
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
  &StateFlowFinal_B.theta1_p,          /* 80: Signal */
  &StateFlowFinal_B.theta2_p,          /* 81: Signal */
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
  &StateFlowFinal_B.y,                 /* 94: Signal */
  &StateFlowFinal_B.omega[0],          /* 95: Signal */
  &StateFlowFinal_B.x_p,               /* 96: Signal */
  &StateFlowFinal_B.y_p,               /* 97: Signal */
  &StateFlowFinal_B.Gain,              /* 98: Signal */
  &StateFlowFinal_B.Gain1,             /* 99: Signal */
  &StateFlowFinal_B.Kd[0],             /* 100: Signal */
  &StateFlowFinal_B.RateTransition,    /* 101: Signal */
  &StateFlowFinal_B.Xmov,              /* 102: Signal */
  &StateFlowFinal_B.Ymov,              /* 103: Signal */
  &StateFlowFinal_B.Sum2_d,            /* 104: Signal */
  &StateFlowFinal_B.Sum3_b,            /* 105: Signal */
  &StateFlowFinal_B.q[0],              /* 106: Signal */
  &StateFlowFinal_B.qdot[0],           /* 107: Signal */
  &StateFlowFinal_B.Y[0],              /* 108: Signal */
  &StateFlowFinal_B.DataTypeConversion6,/* 109: Signal */
  &StateFlowFinal_B.StatusWord,        /* 110: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_e.y,/* 111: Signal */
  &StateFlowFinal_B.DataTypeConversion14,/* 112: Signal */
  &StateFlowFinal_B.Memory,            /* 113: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9,/* 114: Signal */
  &StateFlowFinal_B.Switch1,           /* 115: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_a.y,/* 116: Signal */
  &StateFlowFinal_B.DataTypeConversion14_g,/* 117: Signal */
  &StateFlowFinal_B.Memory_g,          /* 118: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_h,/* 119: Signal */
  &StateFlowFinal_B.Switch1_l,         /* 120: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_f.y,/* 121: Signal */
  &StateFlowFinal_B.DataTypeConversion14_k,/* 122: Signal */
  &StateFlowFinal_B.Memory_n,          /* 123: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_hd,/* 124: Signal */
  &StateFlowFinal_B.Switch1_f,         /* 125: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_fb.y,/* 126: Signal */
  &StateFlowFinal_B.DataTypeConversion14_h,/* 127: Signal */
  &StateFlowFinal_B.Memory_d,          /* 128: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_m,/* 129: Signal */
  &StateFlowFinal_B.Switch1_h,         /* 130: Signal */
  &StateFlowFinal_B.Sum_p,             /* 131: Signal */
  &StateFlowFinal_B.Sum2_m,            /* 132: Signal */
  &StateFlowFinal_B.Gain_a,            /* 133: Signal */
  &StateFlowFinal_B.Gain6,             /* 134: Signal */
  &StateFlowFinal_B.Sum9_p,            /* 135: Signal */
  &StateFlowFinal_B.Diff,              /* 136: Signal */
  &StateFlowFinal_B.TSamp,             /* 137: Signal */
  &StateFlowFinal_B.Uk1,               /* 138: Signal */
  &StateFlowFinal_B.vel_A_conv_d,      /* 139: Signal */
  &StateFlowFinal_B.vel_B_conv_d,      /* 140: Signal */
  &StateFlowFinal_B.VelocityA_b,       /* 141: Signal */
  &StateFlowFinal_B.VelocityB_d,       /* 142: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_j,/* 143: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_k,/* 144: Signal */
  &StateFlowFinal_B.Sum2,              /* 145: Signal */
  &StateFlowFinal_B.xct,               /* 146: Signal */
  &StateFlowFinal_B.yct,               /* 147: Signal */
  &StateFlowFinal_B.xct_p,             /* 148: Signal */
  &StateFlowFinal_B.yct_p,             /* 149: Signal */
  &StateFlowFinal_B.xct_pp,            /* 150: Signal */
  &StateFlowFinal_B.yct_pp,            /* 151: Signal */
  &StateFlowFinal_B.xc,                /* 152: Signal */
  &StateFlowFinal_B.yc,                /* 153: Signal */
  &StateFlowFinal_B.xc_p,              /* 154: Signal */
  &StateFlowFinal_B.yc_p,              /* 155: Signal */
  &StateFlowFinal_B.xc_pp,             /* 156: Signal */
  &StateFlowFinal_B.yc_pp,             /* 157: Signal */
  &StateFlowFinal_B.xq,                /* 158: Signal */
  &StateFlowFinal_B.yq,                /* 159: Signal */
  &StateFlowFinal_B.xq_p,              /* 160: Signal */
  &StateFlowFinal_B.yq_p,              /* 161: Signal */
  &StateFlowFinal_B.xq_pp,             /* 162: Signal */
  &StateFlowFinal_B.yq_pp,             /* 163: Signal */
  &StateFlowFinal_B.x,                 /* 164: Signal */
  &StateFlowFinal_B.y_c,               /* 165: Signal */
  &StateFlowFinal_B.x_p_l,             /* 166: Signal */
  &StateFlowFinal_B.y_p_o,             /* 167: Signal */
  &StateFlowFinal_B.x_pp,              /* 168: Signal */
  &StateFlowFinal_B.y_pp,              /* 169: Signal */
  &StateFlowFinal_B.xs,                /* 170: Signal */
  &StateFlowFinal_B.ys,                /* 171: Signal */
  &StateFlowFinal_B.xs_p,              /* 172: Signal */
  &StateFlowFinal_B.ys_p,              /* 173: Signal */
  &StateFlowFinal_B.xs_pp,             /* 174: Signal */
  &StateFlowFinal_B.ys_pp,             /* 175: Signal */
  &StateFlowFinal_B.MultiportSwitch[0],/* 176: Signal */
  &StateFlowFinal_B.Integrator[0],     /* 177: Signal */
  &StateFlowFinal_B.IntegralGain[0],   /* 178: Signal */
  &StateFlowFinal_B.ProportionalGain[0],/* 179: Signal */
  &StateFlowFinal_B.Sum[0],            /* 180: Signal */
  &StateFlowFinal_B.x0,                /* 181: Signal */
  &StateFlowFinal_B.y0,                /* 182: Signal */
  &StateFlowFinal_B.pos_A_conv,        /* 183: Signal */
  &StateFlowFinal_B.pos_B_conv,        /* 184: Signal */
  &StateFlowFinal_B.DigitalClock,      /* 185: Signal */
  &StateFlowFinal_B.Sum12,             /* 186: Signal */
  &StateFlowFinal_B.Sum4,              /* 187: Signal */
  &StateFlowFinal_B.Sum7,              /* 188: Signal */
  &StateFlowFinal_B.Sum9,              /* 189: Signal */
  &StateFlowFinal_B.Gain_p,            /* 190: Signal */
  &StateFlowFinal_B.Gain_n,            /* 191: Signal */
  &StateFlowFinal_B.vel_A_conv_b,      /* 192: Signal */
  &StateFlowFinal_B.vel_B_conv_b,      /* 193: Signal */
  &StateFlowFinal_B.VelocityA_o,       /* 194: Signal */
  &StateFlowFinal_B.VelocityB_f,       /* 195: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_b,/* 196: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_d,/* 197: Signal */
  &StateFlowFinal_B.vel_A_conv,        /* 198: Signal */
  &StateFlowFinal_B.vel_B_conv,        /* 199: Signal */
  &StateFlowFinal_B.VelocityA,         /* 200: Signal */
  &StateFlowFinal_B.VelocityB,         /* 201: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14,/* 202: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15,/* 203: Signal */
  &StateFlowFinal_B.theta1,            /* 204: Signal */
  &StateFlowFinal_B.theta2,            /* 205: Signal */
  &StateFlowFinal_B.CA_o,              /* 206: Signal */
  &StateFlowFinal_B.CB_b,              /* 207: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator_i,/* 208: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator1_b,/* 209: Signal */
  &StateFlowFinal_B.Conversioneingradi,/* 210: Signal */
  &StateFlowFinal_B.Gain1_e,           /* 211: Signal */
  &StateFlowFinal_B.Ki1,               /* 212: Signal */
  &StateFlowFinal_B.Ki2,               /* 213: Signal */
  &StateFlowFinal_B.Kp1,               /* 214: Signal */
  &StateFlowFinal_B.Kp2,               /* 215: Signal */
  &StateFlowFinal_B.Sum_h,             /* 216: Signal */
  &StateFlowFinal_B.Sum1_e,            /* 217: Signal */
  &StateFlowFinal_B.Sum2_g,            /* 218: Signal */
  &StateFlowFinal_B.Sum3_a,            /* 219: Signal */
  &StateFlowFinal_B.Sum4_f,            /* 220: Signal */
  &StateFlowFinal_B.Sum5_p,            /* 221: Signal */
  &StateFlowFinal_B.Sum6_n,            /* 222: Signal */
  &StateFlowFinal_B.CA,                /* 223: Signal */
  &StateFlowFinal_B.CB,                /* 224: Signal */
  &StateFlowFinal_B.CH,                /* 225: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator,/* 226: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator1,/* 227: Signal */
  &StateFlowFinal_B.Gain_i,            /* 228: Signal */
  &StateFlowFinal_B.Gain1_f,           /* 229: Signal */
  &StateFlowFinal_B.Sum1_i,            /* 230: Signal */
  &StateFlowFinal_B.Sum2_b,            /* 231: Signal */
  &StateFlowFinal_B.Diff_l,            /* 232: Signal */
  &StateFlowFinal_B.TSamp_i,           /* 233: Signal */
  &StateFlowFinal_B.Uk1_p,             /* 234: Signal */
  &StateFlowFinal_B.pos_A_conv_c,      /* 235: Signal */
  &StateFlowFinal_B.pos_B_conv_v,      /* 236: Signal */
  &StateFlowFinal_B.Sum5,              /* 237: Signal */
  &StateFlowFinal_B.Diff_i,            /* 238: Signal */
  &StateFlowFinal_B.TSamp_n,           /* 239: Signal */
  &StateFlowFinal_B.Uk1_d,             /* 240: Signal */
  &StateFlowFinal_B.Diff_d,            /* 241: Signal */
  &StateFlowFinal_B.TSamp_h,           /* 242: Signal */
  &StateFlowFinal_B.Uk1_b,             /* 243: Signal */
  &StateFlowFinal_B.Diff_f,            /* 244: Signal */
  &StateFlowFinal_B.TSamp_e,           /* 245: Signal */
  &StateFlowFinal_B.Uk1_l,             /* 246: Signal */
  &StateFlowFinal_B.Diff_n,            /* 247: Signal */
  &StateFlowFinal_B.TSamp_nd,          /* 248: Signal */
  &StateFlowFinal_B.Uk1_ll,            /* 249: Signal */
  &StateFlowFinal_B.Diff_b,            /* 250: Signal */
  &StateFlowFinal_B.TSamp_f,           /* 251: Signal */
  &StateFlowFinal_B.Uk1_j,             /* 252: Signal */
  &StateFlowFinal_B.Diff_bt,           /* 253: Signal */
  &StateFlowFinal_B.TSamp_iq,          /* 254: Signal */
  &StateFlowFinal_B.Uk1_bl,            /* 255: Signal */
  &StateFlowFinal_B.Duk_h,             /* 256: Signal */
  &StateFlowFinal_B.x1k1_g,            /* 257: Signal */
  &StateFlowFinal_B.x2k1_n,            /* 258: Signal */
  &StateFlowFinal_B.yk_i,              /* 259: Signal */
  &StateFlowFinal_B.x1k_a,             /* 260: Signal */
  &StateFlowFinal_B.x2k_g,             /* 261: Signal */
  &StateFlowFinal_B.Duk,               /* 262: Signal */
  &StateFlowFinal_B.x1k1,              /* 263: Signal */
  &StateFlowFinal_B.x2k1,              /* 264: Signal */
  &StateFlowFinal_B.yk,                /* 265: Signal */
  &StateFlowFinal_B.x1k,               /* 266: Signal */
  &StateFlowFinal_B.x2k,               /* 267: Signal */
  &StateFlowFinal_B.Duk_n,             /* 268: Signal */
  &StateFlowFinal_B.x1k1_h,            /* 269: Signal */
  &StateFlowFinal_B.x2k1_h,            /* 270: Signal */
  &StateFlowFinal_B.yk_m,              /* 271: Signal */
  &StateFlowFinal_B.x1k_i,             /* 272: Signal */
  &StateFlowFinal_B.x2k_d,             /* 273: Signal */
  &StateFlowFinal_B.A11_p,             /* 274: Signal */
  &StateFlowFinal_B.A12_c,             /* 275: Signal */
  &StateFlowFinal_B.A21_h,             /* 276: Signal */
  &StateFlowFinal_B.A22_d,             /* 277: Signal */
  &StateFlowFinal_B.sum2_nk,           /* 278: Signal */
  &StateFlowFinal_B.sum3_e,            /* 279: Signal */
  &StateFlowFinal_B.B11_k,             /* 280: Signal */
  &StateFlowFinal_B.B21_l,             /* 281: Signal */
  &StateFlowFinal_B.C11_h,             /* 282: Signal */
  &StateFlowFinal_B.C12_e,             /* 283: Signal */
  &StateFlowFinal_B.sum2_k,            /* 284: Signal */
  &StateFlowFinal_B.A11,               /* 285: Signal */
  &StateFlowFinal_B.A12,               /* 286: Signal */
  &StateFlowFinal_B.A21,               /* 287: Signal */
  &StateFlowFinal_B.A22,               /* 288: Signal */
  &StateFlowFinal_B.sum2_n,            /* 289: Signal */
  &StateFlowFinal_B.sum3,              /* 290: Signal */
  &StateFlowFinal_B.B11,               /* 291: Signal */
  &StateFlowFinal_B.B21,               /* 292: Signal */
  &StateFlowFinal_B.C11,               /* 293: Signal */
  &StateFlowFinal_B.C12,               /* 294: Signal */
  &StateFlowFinal_B.sum2,              /* 295: Signal */
  &StateFlowFinal_B.A11_h,             /* 296: Signal */
  &StateFlowFinal_B.A12_g,             /* 297: Signal */
  &StateFlowFinal_B.A21_p,             /* 298: Signal */
  &StateFlowFinal_B.A22_j,             /* 299: Signal */
  &StateFlowFinal_B.sum2_e,            /* 300: Signal */
  &StateFlowFinal_B.sum3_b,            /* 301: Signal */
  &StateFlowFinal_B.B11_d,             /* 302: Signal */
  &StateFlowFinal_B.B21_h,             /* 303: Signal */
  &StateFlowFinal_B.C11_e,             /* 304: Signal */
  &StateFlowFinal_B.C12_m,             /* 305: Signal */
  &StateFlowFinal_B.sum2_ka,           /* 306: Signal */
  &StateFlowFinal_P.Abbassa_Value,     /* 307: Block Parameter */
  &StateFlowFinal_P.AlzataA_Value,     /* 308: Block Parameter */
  &StateFlowFinal_P.AlzataB_Value,     /* 309: Block Parameter */
  &StateFlowFinal_P.AsseAbraccia_Value,/* 310: Block Parameter */
  &StateFlowFinal_P.AsseAvite_Value,   /* 311: Block Parameter */
  &StateFlowFinal_P.AsseBbraccia_Value,/* 312: Block Parameter */
  &StateFlowFinal_P.AsseBvite_Value,   /* 313: Block Parameter */
  &StateFlowFinal_P.Discesa_Value,     /* 314: Block Parameter */
  &StateFlowFinal_P.PeriodoA_Value,    /* 315: Block Parameter */
  &StateFlowFinal_P.PeriodoB_Value,    /* 316: Block Parameter */
  &StateFlowFinal_P.Reset_Value,       /* 317: Block Parameter */
  &StateFlowFinal_P.StartHome_Value,   /* 318: Block Parameter */
  &StateFlowFinal_P.StartRobot_Value,  /* 319: Block Parameter */
  &StateFlowFinal_P.StartWork_Value,   /* 320: Block Parameter */
  &StateFlowFinal_P.StartZero_Value,   /* 321: Block Parameter */
  &StateFlowFinal_P.Stop_Value,        /* 322: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P1[0],/* 323: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P2,/* 324: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P3,/* 325: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P4,/* 326: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P5,/* 327: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P6,/* 328: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P7,/* 329: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P1[0],/* 330: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P2,/* 331: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P3,/* 332: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P4,/* 333: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P5,/* 334: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P6,/* 335: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P7,/* 336: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P1[0],/* 337: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P2,/* 338: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P3,/* 339: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P4,/* 340: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P5,/* 341: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P6,/* 342: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P7,/* 343: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P1[0],/* 344: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P2,/* 345: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P3,/* 346: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P4,/* 347: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P5,/* 348: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P6,/* 349: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P7,/* 350: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1[0],/* 351: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2,/* 352: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3,/* 353: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4,/* 354: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5,/* 355: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6,/* 356: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7,/* 357: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1_l[0],/* 358: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2_n,/* 359: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3_n,/* 360: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4_l,/* 361: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5_i,/* 362: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6_f,/* 363: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7_h,/* 364: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P1[0],  /* 365: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P2,     /* 366: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P3,     /* 367: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P4,     /* 368: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P5,     /* 369: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P6,     /* 370: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P7,     /* 371: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P1[0],   /* 372: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P2,      /* 373: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P3,      /* 374: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P4,      /* 375: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P5,      /* 376: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P6,      /* 377: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P7,      /* 378: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P1[0],   /* 379: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P2,      /* 380: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P3,      /* 381: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P4,      /* 382: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P5,      /* 383: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P6,      /* 384: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P7,      /* 385: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_UpperSat,/* 386: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_LowerSat,/* 387: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P1[0],/* 388: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P2,/* 389: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P3,/* 390: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P4,/* 391: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P5,/* 392: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P6,/* 393: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P7,/* 394: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold, /* 395: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_UpperSat,/* 396: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_LowerSat,/* 397: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P1[0],/* 398: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P2,/* 399: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P3,/* 400: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P4,/* 401: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P5,/* 402: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P6,/* 403: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P7,/* 404: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold_f,/* 405: Block Parameter */
  &StateFlowFinal_P.Gain_Gain,         /* 406: Block Parameter */
  &StateFlowFinal_P.Torquesend_P1[0],  /* 407: Block Parameter */
  &StateFlowFinal_P.Torquesend_P2,     /* 408: Block Parameter */
  &StateFlowFinal_P.Torquesend_P3,     /* 409: Block Parameter */
  &StateFlowFinal_P.Torquesend_P4,     /* 410: Block Parameter */
  &StateFlowFinal_P.Torquesend_P5,     /* 411: Block Parameter */
  &StateFlowFinal_P.Torquesend_P6,     /* 412: Block Parameter */
  &StateFlowFinal_P.Torquesend_P7,     /* 413: Block Parameter */
  &StateFlowFinal_P.Switch_Threshold,  /* 414: Block Parameter */
  &StateFlowFinal_P.Constant1_Value_ek,/* 415: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_UpperSat,/* 416: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_LowerSat,/* 417: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P1[0],/* 418: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P2,/* 419: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P3,/* 420: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P4,/* 421: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P5,/* 422: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P6,/* 423: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P7,/* 424: Block Parameter */
  &StateFlowFinal_P.Switch2_Threshold, /* 425: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P1[0],/* 426: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P2, /* 427: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P3, /* 428: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P4, /* 429: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P5, /* 430: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P6, /* 431: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P7, /* 432: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P1[0],/* 433: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P2, /* 434: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P3, /* 435: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P4, /* 436: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P5, /* 437: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P6, /* 438: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P7, /* 439: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P1[0], /* 440: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P2,    /* 441: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P3,    /* 442: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P4,    /* 443: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P5,    /* 444: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P6,    /* 445: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P7,    /* 446: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P1[0], /* 447: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P2,    /* 448: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P3,    /* 449: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P4,    /* 450: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P5,    /* 451: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P6,    /* 452: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P7,    /* 453: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevScale,/* 454: Mask Parameter */
  &StateFlowFinal_P.Gain2_Gain,        /* 455: Block Parameter */
  &StateFlowFinal_P.Gain4_Gain,        /* 456: Block Parameter */
  &StateFlowFinal_P.PIDController_P,   /* 457: Mask Parameter */
  &StateFlowFinal_P.PIDController_I,   /* 458: Mask Parameter */
  &StateFlowFinal_P.Constant_Value_a,  /* 459: Block Parameter */
  &StateFlowFinal_P.Constant1_Value_e, /* 460: Block Parameter */
  &StateFlowFinal_P.selettore_Value,   /* 461: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_j,       /* 462: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain_i,      /* 463: Block Parameter */
  &StateFlowFinal_P.Kd_Gain,           /* 464: Block Parameter */
  &StateFlowFinal_P.StatusWord_P1[0],  /* 465: Block Parameter */
  &StateFlowFinal_P.StatusWord_P2,     /* 466: Block Parameter */
  &StateFlowFinal_P.StatusWord_P3,     /* 467: Block Parameter */
  &StateFlowFinal_P.StatusWord_P4,     /* 468: Block Parameter */
  &StateFlowFinal_P.StatusWord_P5,     /* 469: Block Parameter */
  &StateFlowFinal_P.StatusWord_P6,     /* 470: Block Parameter */
  &StateFlowFinal_P.StatusWord_P7,     /* 471: Block Parameter */
  &StateFlowFinal_P.Constant_Value,    /* 472: Block Parameter */
  &StateFlowFinal_P.Memory_X0,         /* 473: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1[0],/* 474: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2,/* 475: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3,/* 476: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4,/* 477: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5,/* 478: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6,/* 479: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7,/* 480: Block Parameter */
  &StateFlowFinal_P.Constant_Value_l,  /* 481: Block Parameter */
  &StateFlowFinal_P.Memory_X0_m,       /* 482: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_g[0],/* 483: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_p,/* 484: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_f,/* 485: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_a,/* 486: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_d,/* 487: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_c,/* 488: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_a,/* 489: Block Parameter */
  &StateFlowFinal_P.Constant_Value_e,  /* 490: Block Parameter */
  &StateFlowFinal_P.Memory_X0_o,       /* 491: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_i[0],/* 492: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_m,/* 493: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_m,/* 494: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_l,/* 495: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_b,/* 496: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l,/* 497: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_b,/* 498: Block Parameter */
  &StateFlowFinal_P.Constant_Value_p,  /* 499: Block Parameter */
  &StateFlowFinal_P.Memory_X0_a,       /* 500: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_a[0],/* 501: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_d,/* 502: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_k,/* 503: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_f,/* 504: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_k,/* 505: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l4,/* 506: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_j,/* 507: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeA_ICPrevScale,/* 508: Mask Parameter */
  &StateFlowFinal_P.Gain_Gain_b,       /* 509: Block Parameter */
  &StateFlowFinal_P.Gain6_Gain,        /* 510: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt,        /* 511: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_m[0],/* 512: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_d,/* 513: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_d,/* 514: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_g,/* 515: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_h,/* 516: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_o,/* 517: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_g,/* 518: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_m[0],/* 519: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_d,/* 520: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_b,/* 521: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_i,/* 522: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_cp,/* 523: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_f,/* 524: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_o,/* 525: Block Parameter */
  &StateFlowFinal_P.AlzataC_Value,     /* 526: Block Parameter */
  &StateFlowFinal_P.AlzataC1_Value,    /* 527: Block Parameter */
  &StateFlowFinal_P.AlzataQ_Value,     /* 528: Block Parameter */
  &StateFlowFinal_P.Constant3_Value,   /* 529: Block Parameter */
  &StateFlowFinal_P.Ngiri_Value,       /* 530: Block Parameter */
  &StateFlowFinal_P.Ngiri1_Value,      /* 531: Block Parameter */
  &StateFlowFinal_P.Ngiri2_Value,      /* 532: Block Parameter */
  &StateFlowFinal_P.Periodo_Value,     /* 533: Block Parameter */
  &StateFlowFinal_P.PeriodoC_Value,    /* 534: Block Parameter */
  &StateFlowFinal_P.PeriodoC1_Value,   /* 535: Block Parameter */
  &StateFlowFinal_P.PeriodoQ_Value,    /* 536: Block Parameter */
  &StateFlowFinal_P.Rmax_Value,        /* 537: Block Parameter */
  &StateFlowFinal_P.Rmax1_Value,       /* 538: Block Parameter */
  &StateFlowFinal_P.Rmin_Value,        /* 539: Block Parameter */
  &StateFlowFinal_P.Rmin1_Value,       /* 540: Block Parameter */
  &StateFlowFinal_P.Rmin2_Value,       /* 541: Block Parameter */
  &StateFlowFinal_P.Rmin3_Value,       /* 542: Block Parameter */
  &StateFlowFinal_P.Tempospostiniziale_Value,/* 543: Block Parameter */
  &StateFlowFinal_P.Integrator_gainval,/* 544: Block Parameter */
  &StateFlowFinal_P.Integrator_IC,     /* 545: Block Parameter */
  &StateFlowFinal_P.Constant_Value_b,  /* 546: Block Parameter */
  &StateFlowFinal_P.Constant1_Value,   /* 547: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevSca_m,/* 548: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB1_ICPrevScal,/* 549: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB2_ICPrevScal,/* 550: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB3_ICPrevScal,/* 551: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB4_ICPrevScal,/* 552: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB5_ICPrevScal,/* 553: Mask Parameter */
  &StateFlowFinal_P.Constant4_Value,   /* 554: Block Parameter */
  &StateFlowFinal_P.Constant5_Value,   /* 555: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_c,       /* 556: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d4,      /* 557: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_k[0],/* 558: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_i,/* 559: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_a,/* 560: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_e,/* 561: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_j,/* 562: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_m,/* 563: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_m,/* 564: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_a[0],/* 565: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_l,/* 566: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_a,/* 567: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_f,/* 568: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_c,/* 569: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_g,/* 570: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_m,/* 571: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1[0],/* 572: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2,/* 573: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3,/* 574: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4,/* 575: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5,/* 576: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6,/* 577: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7,/* 578: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1[0],/* 579: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2,/* 580: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3,/* 581: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4,/* 582: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5,/* 583: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6,/* 584: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7,/* 585: Block Parameter */
  &StateFlowFinal_P.CoppiaA_Y0,        /* 586: Block Parameter */
  &StateFlowFinal_P.CoppiaB_Y0,        /* 587: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_gainval,/* 588: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_IC,/* 589: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_gainval,/* 590: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_IC,/* 591: Block Parameter */
  &StateFlowFinal_P.Conversioneingradi_Gain,/* 592: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain,        /* 593: Block Parameter */
  &StateFlowFinal_P.Ki1_Gain,          /* 594: Block Parameter */
  &StateFlowFinal_P.Ki2_Gain,          /* 595: Block Parameter */
  &StateFlowFinal_P.Kp1_Gain,          /* 596: Block Parameter */
  &StateFlowFinal_P.Kp2_Gain,          /* 597: Block Parameter */
  &StateFlowFinal_P.CA_Y0,             /* 598: Block Parameter */
  &StateFlowFinal_P.CB_Y0,             /* 599: Block Parameter */
  &StateFlowFinal_P.CH_Y0,             /* 600: Block Parameter */
  &StateFlowFinal_P.Ki_Value,          /* 601: Block Parameter */
  &StateFlowFinal_P.Kp_Value,          /* 602: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_gainva_l,/* 603: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_IC_e,/* 604: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_gainv_o,/* 605: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_IC_j,/* 606: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d,       /* 607: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain_e,      /* 608: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_g,      /* 609: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_e,      /* 610: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gz,     /* 611: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_m,      /* 612: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gh,     /* 613: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_d,      /* 614: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_p,      /* 615: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_h,        /* 616: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_l,/* 617: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_l,/* 618: Block Parameter */
  &StateFlowFinal_P.Duk_Gain,          /* 619: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition,/* 620: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition,/* 621: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_g,        /* 622: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_n,/* 623: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_e,/* 624: Block Parameter */
  &StateFlowFinal_P.A11_Gain_e,        /* 625: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a,        /* 626: Block Parameter */
  &StateFlowFinal_P.A21_Gain_m,        /* 627: Block Parameter */
  &StateFlowFinal_P.A22_Gain_g,        /* 628: Block Parameter */
  &StateFlowFinal_P.B11_Gain_f,        /* 629: Block Parameter */
  &StateFlowFinal_P.B21_Gain_p,        /* 630: Block Parameter */
  &StateFlowFinal_P.C11_Gain_n,        /* 631: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d,        /* 632: Block Parameter */
  &StateFlowFinal_P.A11_Gain,          /* 633: Block Parameter */
  &StateFlowFinal_P.A12_Gain,          /* 634: Block Parameter */
  &StateFlowFinal_P.A21_Gain,          /* 635: Block Parameter */
  &StateFlowFinal_P.A22_Gain,          /* 636: Block Parameter */
  &StateFlowFinal_P.B11_Gain,          /* 637: Block Parameter */
  &StateFlowFinal_P.B21_Gain,          /* 638: Block Parameter */
  &StateFlowFinal_P.C11_Gain,          /* 639: Block Parameter */
  &StateFlowFinal_P.C12_Gain,          /* 640: Block Parameter */
  &StateFlowFinal_P.A11_Gain_h,        /* 641: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a3,       /* 642: Block Parameter */
  &StateFlowFinal_P.A21_Gain_f,        /* 643: Block Parameter */
  &StateFlowFinal_P.A22_Gain_d,        /* 644: Block Parameter */
  &StateFlowFinal_P.B11_Gain_n,        /* 645: Block Parameter */
  &StateFlowFinal_P.B21_Gain_l,        /* 646: Block Parameter */
  &StateFlowFinal_P.C11_Gain_g,        /* 647: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d1,       /* 648: Block Parameter */
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

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 }
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

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 }
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
  2,                                   /* 8 */
  1,                                   /* 9 */
  1,                                   /* 10 */
  43,                                  /* 11 */
  1,                                   /* 12 */
  41,                                  /* 13 */
  1,                                   /* 14 */
  24,                                  /* 15 */
  1,                                   /* 16 */
  38,                                  /* 17 */
  1,                                   /* 18 */
  47,                                  /* 19 */
  1,                                   /* 20 */
  37,                                  /* 21 */
  1,                                   /* 22 */
  23                                   /* 23 */
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
  { rtBlockSignals, 307,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 342,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2368232819U,
    3997905126U,
    948539309U,
    1700326423U },
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
