/*
 * StateFlowFinal_capi.c
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
  { 0, 44, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 44, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 44, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 44, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 44, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 44, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 44, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 44, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 44, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 44, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 10, 44, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 11, 44, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 12, 44, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 13, 44, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 14, 44, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 44, TARGET_STRING("State flow robot/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 16, 44, TARGET_STRING("State flow robot/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 17, 44, TARGET_STRING("State flow robot/p18"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 0, TARGET_STRING("Kp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Reset"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("StartHome"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("StartRobot"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("StartWork"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Stop"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 29, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 0 },

  { 30, 0, TARGET_STRING("Finecorsa Vite/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Finecorsa Vite/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 33, 0, TARGET_STRING("Finecorsa braccia/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Finecorsa braccia/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 36, 1, TARGET_STRING("LED Status/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING("LED Status/Data Type Conversion24"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 40, 0, TARGET_STRING("LED Status/Data Type Conversion25"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 41, 0, TARGET_STRING("LED Status/Data Type Conversion26"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 42, 0, TARGET_STRING("Out Asse A Braccia/Data Type Conversion3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 4, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 6, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 49, 8, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 9, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 11, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Posizione Braccia /convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 0, TARGET_STRING("Posizione Braccia /convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Posizione Vite/convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Posizione Vite/convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 62, 15, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 63, 15, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 64, 16, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 17, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 17, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Sistema Vite/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Sistema Vite/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 0, TARGET_STRING("Sistema Vite/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Sistema Vite/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Sistema Vite/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("Sistema Vite/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 20, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p1"),
    TARGET_STRING("theta1"), 0, 0, 0, 0, 1 },

  { 76, 20, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p2"),
    TARGET_STRING("theta2"), 1, 0, 0, 0, 1 },

  { 77, 21, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 21, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 79, 22, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 80, 22, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 81, 23, TARGET_STRING("Sistema_braccia/Cinematica diretta/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 82, 23, TARGET_STRING("Sistema_braccia/Cinematica diretta/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 83, 24, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 24, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 85, 25, TARGET_STRING("Sistema_braccia/Coppia motrice/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 25, TARGET_STRING("Sistema_braccia/Coppia motrice/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 87, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 89, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 1 },

  { 90, 26, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p4"),
    TARGET_STRING("ntilde"), 3, 0, 0, 0, 1 },

  { 91, 32, TARGET_STRING("Sistema_braccia/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 32, TARGET_STRING("Sistema_braccia/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 93, 33, TARGET_STRING("Sistema_braccia/MATLAB Function3/p1"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 94, 33, TARGET_STRING("Sistema_braccia/MATLAB Function3/p2"),
    TARGET_STRING("phi"), 1, 0, 0, 0, 1 },

  { 95, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4/p1"),
    TARGET_STRING("Rho"), 0, 0, 0, 0, 1 },

  { 96, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4/p2"),
    TARGET_STRING("Omega"), 1, 0, 5, 0, 1 },

  { 97, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4/p3"),
    TARGET_STRING("zV"), 2, 0, 5, 0, 1 },

  { 98, 35, TARGET_STRING("Sistema_braccia/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 35, TARGET_STRING("Sistema_braccia/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 103, 0, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 104, 0, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 105, 0, TARGET_STRING("Sistema_braccia/Product"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 106, 0, TARGET_STRING("Sistema_braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Sistema_braccia/Sum1"),
    TARGET_STRING("Ymov"), 0, 0, 0, 0, 1 },

  { 108, 0, TARGET_STRING("Sistema_braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 0, TARGET_STRING("Sistema_braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Sistema_braccia/Sum4"),
    TARGET_STRING("q"), 0, 0, 5, 0, 1 },

  { 111, 0, TARGET_STRING("Sistema_braccia/Sum5"),
    TARGET_STRING("n-phi"), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Sistema_braccia/Sum7"),
    TARGET_STRING("qdot"), 0, 0, 5, 0, 1 },

  { 113, 0, TARGET_STRING("Sistema_braccia/Sum8"),
    TARGET_STRING("YRobusto"), 0, 0, 5, 0, 1 },

  { 114, 0, TARGET_STRING("Sistema_braccia/Sum9"),
    TARGET_STRING("Y"), 0, 0, 5, 0, 1 },

  { 115, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 116, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 117, 5, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 121, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 7, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 123, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 127, 10, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 132, 12, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 133, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 134, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 135, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 137, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 138, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 139, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 140, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 141, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 143, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 144, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 145, 18, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 146, 19, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 147, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 148, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 150, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 151, 0, TARGET_STRING("Sistema_braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 152, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 154, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 155, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 156, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 157, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 158, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 159, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 160, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 161, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 162, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 163, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 164, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 165, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 166, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 167, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 168, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 169, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 170, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 171, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 172, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 173, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 174, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 175, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 176, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 177, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 178, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 179, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 180, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 181, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 182, 0, TARGET_STRING("Sistema_braccia/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 183, 36, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 36, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 185, 37, TARGET_STRING("Sistema_braccia/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 186, 38, TARGET_STRING("Sistema_braccia/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 187, 0, TARGET_STRING("Sistema_braccia/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 189, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 190, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 191, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 192, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 193, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 194, 39, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 40, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 197, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 198, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 199, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 200, 41, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 42, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 205, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 206, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 209, 13, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 14, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 213, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 215, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 216, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 218, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 221, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 222, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 223, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 224, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 225, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 227, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 228, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 229, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 230, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 231, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 232, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 233, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 234, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 235, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 236, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 237, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 238, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 239, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 240, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 241, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 242, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 243, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 245, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 247, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 248, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 250, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 257, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 258, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 261, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING(
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
  { 281, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 282, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 283, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 284, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 285, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 286, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 287, TARGET_STRING("Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 288, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 289, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 290, TARGET_STRING("Reset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 291, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 292, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 293, TARGET_STRING("StartWork"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 294, TARGET_STRING("Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 295, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 296, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 297, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 298, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 299, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 300, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 301, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 302, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 303, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 304, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 305, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 306, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 307, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 308, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 309, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 310, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 311, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 312, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 313, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 314, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 315, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 316, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 317, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 318, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 319, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 320, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 321, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 322, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 323, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 324, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 325, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 326, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 327, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 328, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 329, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 330, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 331, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 332, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 333, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 334, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 335, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 336, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 337, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 338, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 339, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 340, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 341, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 342, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 343, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 344, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 345, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 346, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 347, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 348, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 349, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 350, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 351, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 352, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 353, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 354, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 355, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 356, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 357, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 358, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 359, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 360, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 361, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 362, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 363, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 364, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 365, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 366, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 367, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 368, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 369, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 370, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 371, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 372, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 373, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 374, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 375, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 376, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 377, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 378, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 379, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 380, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 381, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 382, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 383, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 384, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 385, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 386, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 387, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 388, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 389, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 390, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 391, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 392, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 393, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 394, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 395, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 396, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 397, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 398, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 399, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 400, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 401, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 402, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 403, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 404, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 405, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 406, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 407, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 408, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 409, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 410, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 411, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 412, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 413, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 414, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 415, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 416, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 417, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 418, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 419, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 420, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 421, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 422, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 423, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 424, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 425, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 426, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 427, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 428, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 429, TARGET_STRING("Sistema_braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 430, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 431, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 432, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 433, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 434, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 435, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 436, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 437, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 438, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 439, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 440, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 441, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 442, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 443, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 444, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 445, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 446, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 447, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 448, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 449, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 450, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 451, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 452, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 453, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 454, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 455, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 456, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 457, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 458, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 459, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 460, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 461, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 462, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 463, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 464, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 465, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 466, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 467, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 468, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 469, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 470, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 471, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 472, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 473, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 474, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 475, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 476, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 477, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 478, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 479, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 480, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 481, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 482, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 483, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 484, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 485, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 486, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 487, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 488, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 489, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 490, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 491, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 492, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 493, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 494, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 495, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 496, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 497, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 498, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 499, TARGET_STRING("Sistema_braccia/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 500, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 501, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 502, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 503, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 504, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 505, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 506, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 507, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 508, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 509, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 510, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 511, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("Sistema_braccia/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 514, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 515, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 516, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 517, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 518, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 519, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 520, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 521, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 522, TARGET_STRING("Sistema_braccia/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 523, TARGET_STRING("Sistema_braccia/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 524, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 525, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 526, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 527, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 528, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 529, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 530, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 531, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 532, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 533, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 534, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 535, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 536, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 537, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 538, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 539, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 540, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 541, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 542, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 543, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 544, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 545, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 546, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 547, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 548, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 549, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 550, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 551, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 552, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 553, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 554, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 555, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 556, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 557, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 558, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 559, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 560, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 561, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 562, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 563, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 564, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 565, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 566, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 567, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 568, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 569, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 570, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 571, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 572, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 573, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 574, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 575, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 576, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 577, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 578, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 579, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 580, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 581, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 582, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 583, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 584, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 585, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 586, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 587, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 588, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 589, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 590, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 591, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 592, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 593, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
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
  &StateFlowFinal_B.Kp_l,              /* 10: Signal */
  &StateFlowFinal_B.Hv,                /* 11: Signal */
  &StateFlowFinal_B.Hb,                /* 12: Signal */
  &StateFlowFinal_B.Enable,            /* 13: Signal */
  &StateFlowFinal_B.FineLavorazione,   /* 14: Signal */
  &StateFlowFinal_B.PosRifA,           /* 15: Signal */
  &StateFlowFinal_B.PosRifB,           /* 16: Signal */
  &StateFlowFinal_B.Stato,             /* 17: Signal */
  &StateFlowFinal_B.Clock,             /* 18: Signal */
  &StateFlowFinal_B.Kp,                /* 19: Signal */
  &StateFlowFinal_B.Reset,             /* 20: Signal */
  &StateFlowFinal_B.StartHome,         /* 21: Signal */
  &StateFlowFinal_B.StartRobot,        /* 22: Signal */
  &StateFlowFinal_B.StartWork,         /* 23: Signal */
  &StateFlowFinal_B.Stop,              /* 24: Signal */
  &StateFlowFinal_B.DataTypeConversion1_p,/* 25: Signal */
  &StateFlowFinal_B.DataTypeConversion2,/* 26: Signal */
  &StateFlowFinal_B.DataTypeConversion5,/* 27: Signal */
  &StateFlowFinal_B.DataTypeConversion7,/* 28: Signal */
  &StateFlowFinal_B.EtherCATInit[0],   /* 29: Signal */
  &StateFlowFinal_B.DataTypeConversion8,/* 30: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive16,/* 31: Signal */
  &StateFlowFinal_B.IntegertoBitConverter[0],/* 32: Signal */
  &StateFlowFinal_B.DataTypeConversion8_f,/* 33: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive16_d,/* 34: Signal */
  &StateFlowFinal_B.IntegertoBitConverter_d[0],/* 35: Signal */
  &StateFlowFinal_B.y_i,               /* 36: Signal */
  &StateFlowFinal_B.y_b,               /* 37: Signal */
  &StateFlowFinal_B.y_f,               /* 38: Signal */
  &StateFlowFinal_B.DataTypeConversion24,/* 39: Signal */
  &StateFlowFinal_B.DataTypeConversion25,/* 40: Signal */
  &StateFlowFinal_B.DataTypeConversion26,/* 41: Signal */
  &StateFlowFinal_B.DataTypeConversion3,/* 42: Signal */
  &StateFlowFinal_B.CoppiaAbracciasaturata,/* 43: Signal */
  &StateFlowFinal_B.Switch1_c,         /* 44: Signal */
  &StateFlowFinal_B.DataTypeConversion4,/* 45: Signal */
  &StateFlowFinal_B.CoppiaBbracciasaturata,/* 46: Signal */
  &StateFlowFinal_B.Switch1_i,         /* 47: Signal */
  &StateFlowFinal_B.ConvertA,          /* 48: Signal */
  &StateFlowFinal_B.Gain_m,            /* 49: Signal */
  &StateFlowFinal_B.Switch,            /* 50: Signal */
  &StateFlowFinal_B.ConvertB,          /* 51: Signal */
  &StateFlowFinal_B.CoppiaAvitesaturata,/* 52: Signal */
  &StateFlowFinal_B.Switch2,           /* 53: Signal */
  &StateFlowFinal_B.convert,           /* 54: Signal */
  &StateFlowFinal_B.convert10,         /* 55: Signal */
  &StateFlowFinal_B.MotorebracciaA,    /* 56: Signal */
  &StateFlowFinal_B.MotorebracciaB,    /* 57: Signal */
  &StateFlowFinal_B.convert_k,         /* 58: Signal */
  &StateFlowFinal_B.convert10_p,       /* 59: Signal */
  &StateFlowFinal_B.MotoreviteA,       /* 60: Signal */
  &StateFlowFinal_B.MotoreviteB,       /* 61: Signal */
  &StateFlowFinal_B.ldm_pos_n,         /* 62: Signal */
  &StateFlowFinal_B.ldm_vel_c,         /* 63: Signal */
  &StateFlowFinal_B.pos_B_conv_p,      /* 64: Signal */
  &StateFlowFinal_B.ldm_pos,           /* 65: Signal */
  &StateFlowFinal_B.ldm_vel,           /* 66: Signal */
  &StateFlowFinal_B.Gain2,             /* 67: Signal */
  &StateFlowFinal_B.Gain4,             /* 68: Signal */
  &StateFlowFinal_B.Sum1,              /* 69: Signal */
  &StateFlowFinal_B.Sum3,              /* 70: Signal */
  &StateFlowFinal_B.Sum4_l,            /* 71: Signal */
  &StateFlowFinal_B.Sum6,              /* 72: Signal */
  &StateFlowFinal_B.Sum7_n,            /* 73: Signal */
  &StateFlowFinal_B.Sum8,              /* 74: Signal */
  &StateFlowFinal_B.theta1,            /* 75: Signal */
  &StateFlowFinal_B.theta2,            /* 76: Signal */
  &StateFlowFinal_B.theta1_pp,         /* 77: Signal */
  &StateFlowFinal_B.theta2_pp,         /* 78: Signal */
  &StateFlowFinal_B.theta1_p,          /* 79: Signal */
  &StateFlowFinal_B.theta2_p,          /* 80: Signal */
  &StateFlowFinal_B.x_n,               /* 81: Signal */
  &StateFlowFinal_B.y_k,               /* 82: Signal */
  &StateFlowFinal_B.x_pp_f,            /* 83: Signal */
  &StateFlowFinal_B.y_pp_l,            /* 84: Signal */
  &StateFlowFinal_B.Cm1,               /* 85: Signal */
  &StateFlowFinal_B.Cm2,               /* 86: Signal */
  &StateFlowFinal_B.C1,                /* 87: Signal */
  &StateFlowFinal_B.C2,                /* 88: Signal */
  &StateFlowFinal_B.Mm[0],             /* 89: Signal */
  &StateFlowFinal_B.ntilde,            /* 90: Signal */
  &StateFlowFinal_B.xp,                /* 91: Signal */
  &StateFlowFinal_B.yp,                /* 92: Signal */
  &StateFlowFinal_B.csiH[0],           /* 93: Signal */
  &StateFlowFinal_B.phi,               /* 94: Signal */
  &StateFlowFinal_B.rho,               /* 95: Signal */
  &StateFlowFinal_B.omega[0],          /* 96: Signal */
  &StateFlowFinal_B.z[0],              /* 97: Signal */
  &StateFlowFinal_B.x_p,               /* 98: Signal */
  &StateFlowFinal_B.y_p,               /* 99: Signal */
  &StateFlowFinal_B.Gain,              /* 100: Signal */
  &StateFlowFinal_B.Gain1,             /* 101: Signal */
  &StateFlowFinal_B.Kd[0],             /* 102: Signal */
  &StateFlowFinal_B.Kd1[0],            /* 103: Signal */
  &StateFlowFinal_B.Kp1[0],            /* 104: Signal */
  &StateFlowFinal_B.Product[0],        /* 105: Signal */
  &StateFlowFinal_B.Sum,               /* 106: Signal */
  &StateFlowFinal_B.Ymov,              /* 107: Signal */
  &StateFlowFinal_B.Sum2_d,            /* 108: Signal */
  &StateFlowFinal_B.Sum3_b,            /* 109: Signal */
  &StateFlowFinal_B.q[0],              /* 110: Signal */
  &StateFlowFinal_B.nphi,              /* 111: Signal */
  &StateFlowFinal_B.qdot[0],           /* 112: Signal */
  &StateFlowFinal_B.YRobusto[0],       /* 113: Signal */
  &StateFlowFinal_B.Y[0],              /* 114: Signal */
  &StateFlowFinal_B.DataTypeConversion6,/* 115: Signal */
  &StateFlowFinal_B.StatusWord,        /* 116: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_e.y,/* 117: Signal */
  &StateFlowFinal_B.DataTypeConversion14,/* 118: Signal */
  &StateFlowFinal_B.Memory,            /* 119: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9,/* 120: Signal */
  &StateFlowFinal_B.Switch1,           /* 121: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_a.y,/* 122: Signal */
  &StateFlowFinal_B.DataTypeConversion14_g,/* 123: Signal */
  &StateFlowFinal_B.Memory_g,          /* 124: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_h,/* 125: Signal */
  &StateFlowFinal_B.Switch1_l,         /* 126: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_f.y,/* 127: Signal */
  &StateFlowFinal_B.DataTypeConversion14_k,/* 128: Signal */
  &StateFlowFinal_B.Memory_n,          /* 129: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_hd,/* 130: Signal */
  &StateFlowFinal_B.Switch1_f,         /* 131: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_fb.y,/* 132: Signal */
  &StateFlowFinal_B.DataTypeConversion14_h,/* 133: Signal */
  &StateFlowFinal_B.Memory_d,          /* 134: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_m,/* 135: Signal */
  &StateFlowFinal_B.Switch1_h,         /* 136: Signal */
  &StateFlowFinal_B.Sum_p,             /* 137: Signal */
  &StateFlowFinal_B.Sum2_m,            /* 138: Signal */
  &StateFlowFinal_B.Gain_a,            /* 139: Signal */
  &StateFlowFinal_B.Gain6,             /* 140: Signal */
  &StateFlowFinal_B.Sum9_p,            /* 141: Signal */
  &StateFlowFinal_B.Diff,              /* 142: Signal */
  &StateFlowFinal_B.TSamp,             /* 143: Signal */
  &StateFlowFinal_B.Uk1,               /* 144: Signal */
  &StateFlowFinal_B.vel_A_conv_d,      /* 145: Signal */
  &StateFlowFinal_B.vel_B_conv_d,      /* 146: Signal */
  &StateFlowFinal_B.VelocityA_b,       /* 147: Signal */
  &StateFlowFinal_B.VelocityB_d,       /* 148: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_j,/* 149: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_k,/* 150: Signal */
  &StateFlowFinal_B.Sum2,              /* 151: Signal */
  &StateFlowFinal_B.xct,               /* 152: Signal */
  &StateFlowFinal_B.yct,               /* 153: Signal */
  &StateFlowFinal_B.xct_p,             /* 154: Signal */
  &StateFlowFinal_B.yct_p,             /* 155: Signal */
  &StateFlowFinal_B.xct_pp,            /* 156: Signal */
  &StateFlowFinal_B.yct_pp,            /* 157: Signal */
  &StateFlowFinal_B.xc,                /* 158: Signal */
  &StateFlowFinal_B.yc,                /* 159: Signal */
  &StateFlowFinal_B.xc_p,              /* 160: Signal */
  &StateFlowFinal_B.yc_p,              /* 161: Signal */
  &StateFlowFinal_B.xc_pp,             /* 162: Signal */
  &StateFlowFinal_B.yc_pp,             /* 163: Signal */
  &StateFlowFinal_B.xq,                /* 164: Signal */
  &StateFlowFinal_B.yq,                /* 165: Signal */
  &StateFlowFinal_B.xq_p,              /* 166: Signal */
  &StateFlowFinal_B.yq_p,              /* 167: Signal */
  &StateFlowFinal_B.xq_pp,             /* 168: Signal */
  &StateFlowFinal_B.yq_pp,             /* 169: Signal */
  &StateFlowFinal_B.x,                 /* 170: Signal */
  &StateFlowFinal_B.y,                 /* 171: Signal */
  &StateFlowFinal_B.x_p_l,             /* 172: Signal */
  &StateFlowFinal_B.y_p_o,             /* 173: Signal */
  &StateFlowFinal_B.x_pp,              /* 174: Signal */
  &StateFlowFinal_B.y_pp,              /* 175: Signal */
  &StateFlowFinal_B.xs,                /* 176: Signal */
  &StateFlowFinal_B.ys,                /* 177: Signal */
  &StateFlowFinal_B.xs_p,              /* 178: Signal */
  &StateFlowFinal_B.ys_p,              /* 179: Signal */
  &StateFlowFinal_B.xs_pp,             /* 180: Signal */
  &StateFlowFinal_B.ys_pp,             /* 181: Signal */
  &StateFlowFinal_B.MultiportSwitch[0],/* 182: Signal */
  &StateFlowFinal_B.x0,                /* 183: Signal */
  &StateFlowFinal_B.y0,                /* 184: Signal */
  &StateFlowFinal_B.pos_A_conv,        /* 185: Signal */
  &StateFlowFinal_B.pos_B_conv,        /* 186: Signal */
  &StateFlowFinal_B.DigitalClock,      /* 187: Signal */
  &StateFlowFinal_B.Sum12,             /* 188: Signal */
  &StateFlowFinal_B.Sum4,              /* 189: Signal */
  &StateFlowFinal_B.Sum7,              /* 190: Signal */
  &StateFlowFinal_B.Sum9,              /* 191: Signal */
  &StateFlowFinal_B.Gain_p,            /* 192: Signal */
  &StateFlowFinal_B.Gain_n,            /* 193: Signal */
  &StateFlowFinal_B.vel_A_conv_b,      /* 194: Signal */
  &StateFlowFinal_B.vel_B_conv_b,      /* 195: Signal */
  &StateFlowFinal_B.VelocityA_o,       /* 196: Signal */
  &StateFlowFinal_B.VelocityB_f,       /* 197: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_b,/* 198: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_d,/* 199: Signal */
  &StateFlowFinal_B.vel_A_conv,        /* 200: Signal */
  &StateFlowFinal_B.vel_B_conv,        /* 201: Signal */
  &StateFlowFinal_B.VelocityA,         /* 202: Signal */
  &StateFlowFinal_B.VelocityB,         /* 203: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14,/* 204: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15,/* 205: Signal */
  &StateFlowFinal_B.Diff_l,            /* 206: Signal */
  &StateFlowFinal_B.TSamp_i,           /* 207: Signal */
  &StateFlowFinal_B.Uk1_p,             /* 208: Signal */
  &StateFlowFinal_B.pos_A_conv_c,      /* 209: Signal */
  &StateFlowFinal_B.pos_B_conv_v,      /* 210: Signal */
  &StateFlowFinal_B.Sum5,              /* 211: Signal */
  &StateFlowFinal_B.Diff_i,            /* 212: Signal */
  &StateFlowFinal_B.TSamp_n,           /* 213: Signal */
  &StateFlowFinal_B.Uk1_d,             /* 214: Signal */
  &StateFlowFinal_B.Diff_d,            /* 215: Signal */
  &StateFlowFinal_B.TSamp_h,           /* 216: Signal */
  &StateFlowFinal_B.Uk1_b,             /* 217: Signal */
  &StateFlowFinal_B.Diff_f,            /* 218: Signal */
  &StateFlowFinal_B.TSamp_e,           /* 219: Signal */
  &StateFlowFinal_B.Uk1_l,             /* 220: Signal */
  &StateFlowFinal_B.Diff_n,            /* 221: Signal */
  &StateFlowFinal_B.TSamp_nd,          /* 222: Signal */
  &StateFlowFinal_B.Uk1_ll,            /* 223: Signal */
  &StateFlowFinal_B.Diff_b,            /* 224: Signal */
  &StateFlowFinal_B.TSamp_f,           /* 225: Signal */
  &StateFlowFinal_B.Uk1_j,             /* 226: Signal */
  &StateFlowFinal_B.Diff_bt,           /* 227: Signal */
  &StateFlowFinal_B.TSamp_iq,          /* 228: Signal */
  &StateFlowFinal_B.Uk1_bl,            /* 229: Signal */
  &StateFlowFinal_B.Duk_h,             /* 230: Signal */
  &StateFlowFinal_B.x1k1_g,            /* 231: Signal */
  &StateFlowFinal_B.x2k1_n,            /* 232: Signal */
  &StateFlowFinal_B.yk_i,              /* 233: Signal */
  &StateFlowFinal_B.x1k_a,             /* 234: Signal */
  &StateFlowFinal_B.x2k_g,             /* 235: Signal */
  &StateFlowFinal_B.Duk,               /* 236: Signal */
  &StateFlowFinal_B.x1k1,              /* 237: Signal */
  &StateFlowFinal_B.x2k1,              /* 238: Signal */
  &StateFlowFinal_B.yk,                /* 239: Signal */
  &StateFlowFinal_B.x1k,               /* 240: Signal */
  &StateFlowFinal_B.x2k,               /* 241: Signal */
  &StateFlowFinal_B.Duk_n,             /* 242: Signal */
  &StateFlowFinal_B.x1k1_h,            /* 243: Signal */
  &StateFlowFinal_B.x2k1_h,            /* 244: Signal */
  &StateFlowFinal_B.yk_m,              /* 245: Signal */
  &StateFlowFinal_B.x1k_i,             /* 246: Signal */
  &StateFlowFinal_B.x2k_d,             /* 247: Signal */
  &StateFlowFinal_B.A11_p,             /* 248: Signal */
  &StateFlowFinal_B.A12_c,             /* 249: Signal */
  &StateFlowFinal_B.A21_h,             /* 250: Signal */
  &StateFlowFinal_B.A22_d,             /* 251: Signal */
  &StateFlowFinal_B.sum2_nk,           /* 252: Signal */
  &StateFlowFinal_B.sum3_e,            /* 253: Signal */
  &StateFlowFinal_B.B11_k,             /* 254: Signal */
  &StateFlowFinal_B.B21_l,             /* 255: Signal */
  &StateFlowFinal_B.C11_h,             /* 256: Signal */
  &StateFlowFinal_B.C12_e,             /* 257: Signal */
  &StateFlowFinal_B.sum2_k,            /* 258: Signal */
  &StateFlowFinal_B.A11,               /* 259: Signal */
  &StateFlowFinal_B.A12,               /* 260: Signal */
  &StateFlowFinal_B.A21,               /* 261: Signal */
  &StateFlowFinal_B.A22,               /* 262: Signal */
  &StateFlowFinal_B.sum2_n,            /* 263: Signal */
  &StateFlowFinal_B.sum3,              /* 264: Signal */
  &StateFlowFinal_B.B11,               /* 265: Signal */
  &StateFlowFinal_B.B21,               /* 266: Signal */
  &StateFlowFinal_B.C11,               /* 267: Signal */
  &StateFlowFinal_B.C12,               /* 268: Signal */
  &StateFlowFinal_B.sum2,              /* 269: Signal */
  &StateFlowFinal_B.A11_h,             /* 270: Signal */
  &StateFlowFinal_B.A12_g,             /* 271: Signal */
  &StateFlowFinal_B.A21_p,             /* 272: Signal */
  &StateFlowFinal_B.A22_j,             /* 273: Signal */
  &StateFlowFinal_B.sum2_e,            /* 274: Signal */
  &StateFlowFinal_B.sum3_b,            /* 275: Signal */
  &StateFlowFinal_B.B11_d,             /* 276: Signal */
  &StateFlowFinal_B.B21_h,             /* 277: Signal */
  &StateFlowFinal_B.C11_e,             /* 278: Signal */
  &StateFlowFinal_B.C12_m,             /* 279: Signal */
  &StateFlowFinal_B.sum2_ka,           /* 280: Signal */
  &StateFlowFinal_P.AlzataA_Value,     /* 281: Block Parameter */
  &StateFlowFinal_P.AlzataB_Value,     /* 282: Block Parameter */
  &StateFlowFinal_P.AsseAbraccia_Value,/* 283: Block Parameter */
  &StateFlowFinal_P.AsseAvite_Value,   /* 284: Block Parameter */
  &StateFlowFinal_P.AsseBbraccia_Value,/* 285: Block Parameter */
  &StateFlowFinal_P.AsseBvite_Value,   /* 286: Block Parameter */
  &StateFlowFinal_P.Kp_Value,          /* 287: Block Parameter */
  &StateFlowFinal_P.PeriodoA_Value,    /* 288: Block Parameter */
  &StateFlowFinal_P.PeriodoB_Value,    /* 289: Block Parameter */
  &StateFlowFinal_P.Reset_Value,       /* 290: Block Parameter */
  &StateFlowFinal_P.StartHome_Value,   /* 291: Block Parameter */
  &StateFlowFinal_P.StartRobot_Value,  /* 292: Block Parameter */
  &StateFlowFinal_P.StartWork_Value,   /* 293: Block Parameter */
  &StateFlowFinal_P.Stop_Value,        /* 294: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P1[0],/* 295: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P2,/* 296: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P3,/* 297: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P4,/* 298: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P5,/* 299: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P6,/* 300: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P7,/* 301: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P1[0],/* 302: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P2,/* 303: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P3,/* 304: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P4,/* 305: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P5,/* 306: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P6,/* 307: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P7,/* 308: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P1[0],/* 309: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P2,/* 310: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P3,/* 311: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P4,/* 312: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P5,/* 313: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P6,/* 314: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P7,/* 315: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P1[0],/* 316: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P2,/* 317: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P3,/* 318: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P4,/* 319: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P5,/* 320: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P6,/* 321: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P7,/* 322: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1[0],/* 323: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2,/* 324: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3,/* 325: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4,/* 326: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5,/* 327: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6,/* 328: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7,/* 329: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1_l[0],/* 330: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2_n,/* 331: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3_n,/* 332: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4_l,/* 333: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5_i,/* 334: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6_f,/* 335: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7_h,/* 336: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P1[0],  /* 337: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P2,     /* 338: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P3,     /* 339: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P4,     /* 340: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P5,     /* 341: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P6,     /* 342: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P7,     /* 343: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P1[0],   /* 344: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P2,      /* 345: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P3,      /* 346: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P4,      /* 347: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P5,      /* 348: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P6,      /* 349: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P7,      /* 350: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P1[0],   /* 351: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P2,      /* 352: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P3,      /* 353: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P4,      /* 354: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P5,      /* 355: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P6,      /* 356: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P7,      /* 357: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_UpperSat,/* 358: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_LowerSat,/* 359: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P1[0],/* 360: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P2,/* 361: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P3,/* 362: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P4,/* 363: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P5,/* 364: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P6,/* 365: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P7,/* 366: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold, /* 367: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_UpperSat,/* 368: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_LowerSat,/* 369: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P1[0],/* 370: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P2,/* 371: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P3,/* 372: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P4,/* 373: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P5,/* 374: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P6,/* 375: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P7,/* 376: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold_f,/* 377: Block Parameter */
  &StateFlowFinal_P.Gain_Gain,         /* 378: Block Parameter */
  &StateFlowFinal_P.Torquesend_P1[0],  /* 379: Block Parameter */
  &StateFlowFinal_P.Torquesend_P2,     /* 380: Block Parameter */
  &StateFlowFinal_P.Torquesend_P3,     /* 381: Block Parameter */
  &StateFlowFinal_P.Torquesend_P4,     /* 382: Block Parameter */
  &StateFlowFinal_P.Torquesend_P5,     /* 383: Block Parameter */
  &StateFlowFinal_P.Torquesend_P6,     /* 384: Block Parameter */
  &StateFlowFinal_P.Torquesend_P7,     /* 385: Block Parameter */
  &StateFlowFinal_P.Switch_Threshold,  /* 386: Block Parameter */
  &StateFlowFinal_P.Constant1_Value_e, /* 387: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_UpperSat,/* 388: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_LowerSat,/* 389: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P1[0],/* 390: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P2,/* 391: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P3,/* 392: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P4,/* 393: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P5,/* 394: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P6,/* 395: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P7,/* 396: Block Parameter */
  &StateFlowFinal_P.Switch2_Threshold, /* 397: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P1[0],/* 398: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P2, /* 399: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P3, /* 400: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P4, /* 401: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P5, /* 402: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P6, /* 403: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P7, /* 404: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P1[0],/* 405: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P2, /* 406: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P3, /* 407: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P4, /* 408: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P5, /* 409: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P6, /* 410: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P7, /* 411: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P1[0], /* 412: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P2,    /* 413: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P3,    /* 414: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P4,    /* 415: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P5,    /* 416: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P6,    /* 417: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P7,    /* 418: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P1[0], /* 419: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P2,    /* 420: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P3,    /* 421: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P4,    /* 422: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P5,    /* 423: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P6,    /* 424: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P7,    /* 425: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevScale,/* 426: Mask Parameter */
  &StateFlowFinal_P.Gain2_Gain,        /* 427: Block Parameter */
  &StateFlowFinal_P.Gain4_Gain,        /* 428: Block Parameter */
  &StateFlowFinal_P.selettore_Value,   /* 429: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_j,       /* 430: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain,        /* 431: Block Parameter */
  &StateFlowFinal_P.Kd_Gain,           /* 432: Block Parameter */
  &StateFlowFinal_P.Kd1_Gain,          /* 433: Block Parameter */
  &StateFlowFinal_P.Kp1_Gain,          /* 434: Block Parameter */
  &StateFlowFinal_P.StatusWord_P1[0],  /* 435: Block Parameter */
  &StateFlowFinal_P.StatusWord_P2,     /* 436: Block Parameter */
  &StateFlowFinal_P.StatusWord_P3,     /* 437: Block Parameter */
  &StateFlowFinal_P.StatusWord_P4,     /* 438: Block Parameter */
  &StateFlowFinal_P.StatusWord_P5,     /* 439: Block Parameter */
  &StateFlowFinal_P.StatusWord_P6,     /* 440: Block Parameter */
  &StateFlowFinal_P.StatusWord_P7,     /* 441: Block Parameter */
  &StateFlowFinal_P.Constant_Value,    /* 442: Block Parameter */
  &StateFlowFinal_P.Memory_X0,         /* 443: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1[0],/* 444: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2,/* 445: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3,/* 446: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4,/* 447: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5,/* 448: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6,/* 449: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7,/* 450: Block Parameter */
  &StateFlowFinal_P.Constant_Value_l,  /* 451: Block Parameter */
  &StateFlowFinal_P.Memory_X0_m,       /* 452: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_g[0],/* 453: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_p,/* 454: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_f,/* 455: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_a,/* 456: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_d,/* 457: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_c,/* 458: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_a,/* 459: Block Parameter */
  &StateFlowFinal_P.Constant_Value_e,  /* 460: Block Parameter */
  &StateFlowFinal_P.Memory_X0_o,       /* 461: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_i[0],/* 462: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_m,/* 463: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_m,/* 464: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_l,/* 465: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_b,/* 466: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l,/* 467: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_b,/* 468: Block Parameter */
  &StateFlowFinal_P.Constant_Value_p,  /* 469: Block Parameter */
  &StateFlowFinal_P.Memory_X0_a,       /* 470: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_a[0],/* 471: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_d,/* 472: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_k,/* 473: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_f,/* 474: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_k,/* 475: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l4,/* 476: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_j,/* 477: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeA_ICPrevScale,/* 478: Mask Parameter */
  &StateFlowFinal_P.Gain_Gain_b,       /* 479: Block Parameter */
  &StateFlowFinal_P.Gain6_Gain,        /* 480: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt,        /* 481: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_m[0],/* 482: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_d,/* 483: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_d,/* 484: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_g,/* 485: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_h,/* 486: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_o,/* 487: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_g,/* 488: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_m[0],/* 489: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_d,/* 490: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_b,/* 491: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_i,/* 492: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_cp,/* 493: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_f,/* 494: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_o,/* 495: Block Parameter */
  &StateFlowFinal_P.AlzataC_Value,     /* 496: Block Parameter */
  &StateFlowFinal_P.AlzataC1_Value,    /* 497: Block Parameter */
  &StateFlowFinal_P.AlzataQ_Value,     /* 498: Block Parameter */
  &StateFlowFinal_P.Constant3_Value,   /* 499: Block Parameter */
  &StateFlowFinal_P.Ngiri_Value,       /* 500: Block Parameter */
  &StateFlowFinal_P.Ngiri1_Value,      /* 501: Block Parameter */
  &StateFlowFinal_P.Ngiri2_Value,      /* 502: Block Parameter */
  &StateFlowFinal_P.Periodo_Value,     /* 503: Block Parameter */
  &StateFlowFinal_P.PeriodoC_Value,    /* 504: Block Parameter */
  &StateFlowFinal_P.PeriodoC1_Value,   /* 505: Block Parameter */
  &StateFlowFinal_P.PeriodoQ_Value,    /* 506: Block Parameter */
  &StateFlowFinal_P.Rmax_Value,        /* 507: Block Parameter */
  &StateFlowFinal_P.Rmax1_Value,       /* 508: Block Parameter */
  &StateFlowFinal_P.Rmin_Value,        /* 509: Block Parameter */
  &StateFlowFinal_P.Rmin1_Value,       /* 510: Block Parameter */
  &StateFlowFinal_P.Rmin2_Value,       /* 511: Block Parameter */
  &StateFlowFinal_P.Rmin3_Value,       /* 512: Block Parameter */
  &StateFlowFinal_P.Tempospostiniziale_Value,/* 513: Block Parameter */
  &StateFlowFinal_P.Constant_Value_b,  /* 514: Block Parameter */
  &StateFlowFinal_P.Constant1_Value,   /* 515: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevSca_m,/* 516: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB1_ICPrevScal,/* 517: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB2_ICPrevScal,/* 518: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB3_ICPrevScal,/* 519: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB4_ICPrevScal,/* 520: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB5_ICPrevScal,/* 521: Mask Parameter */
  &StateFlowFinal_P.Constant4_Value,   /* 522: Block Parameter */
  &StateFlowFinal_P.Constant5_Value,   /* 523: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_c,       /* 524: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d,       /* 525: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_k[0],/* 526: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_i,/* 527: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_a,/* 528: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_e,/* 529: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_j,/* 530: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_m,/* 531: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_m,/* 532: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_a[0],/* 533: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_l,/* 534: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_a,/* 535: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_f,/* 536: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_c,/* 537: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_g,/* 538: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_m,/* 539: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1[0],/* 540: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2,/* 541: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3,/* 542: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4,/* 543: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5,/* 544: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6,/* 545: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7,/* 546: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1[0],/* 547: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2,/* 548: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3,/* 549: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4,/* 550: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5,/* 551: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6,/* 552: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7,/* 553: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_g,      /* 554: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_e,      /* 555: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gz,     /* 556: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_m,      /* 557: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gh,     /* 558: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_d,      /* 559: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_p,      /* 560: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_h,        /* 561: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_l,/* 562: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_l,/* 563: Block Parameter */
  &StateFlowFinal_P.Duk_Gain,          /* 564: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition,/* 565: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition,/* 566: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_g,        /* 567: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_n,/* 568: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_e,/* 569: Block Parameter */
  &StateFlowFinal_P.A11_Gain_e,        /* 570: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a,        /* 571: Block Parameter */
  &StateFlowFinal_P.A21_Gain_m,        /* 572: Block Parameter */
  &StateFlowFinal_P.A22_Gain_g,        /* 573: Block Parameter */
  &StateFlowFinal_P.B11_Gain_f,        /* 574: Block Parameter */
  &StateFlowFinal_P.B21_Gain_p,        /* 575: Block Parameter */
  &StateFlowFinal_P.C11_Gain_n,        /* 576: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d,        /* 577: Block Parameter */
  &StateFlowFinal_P.A11_Gain,          /* 578: Block Parameter */
  &StateFlowFinal_P.A12_Gain,          /* 579: Block Parameter */
  &StateFlowFinal_P.A21_Gain,          /* 580: Block Parameter */
  &StateFlowFinal_P.A22_Gain,          /* 581: Block Parameter */
  &StateFlowFinal_P.B11_Gain,          /* 582: Block Parameter */
  &StateFlowFinal_P.B21_Gain,          /* 583: Block Parameter */
  &StateFlowFinal_P.C11_Gain,          /* 584: Block Parameter */
  &StateFlowFinal_P.C12_Gain,          /* 585: Block Parameter */
  &StateFlowFinal_P.A11_Gain_h,        /* 586: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a3,       /* 587: Block Parameter */
  &StateFlowFinal_P.A21_Gain_f,        /* 588: Block Parameter */
  &StateFlowFinal_P.A22_Gain_d,        /* 589: Block Parameter */
  &StateFlowFinal_P.B11_Gain_n,        /* 590: Block Parameter */
  &StateFlowFinal_P.B21_Gain_l,        /* 591: Block Parameter */
  &StateFlowFinal_P.C11_Gain_g,        /* 592: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d1,       /* 593: Block Parameter */
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

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 }
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
  43,                                  /* 13 */
  1,                                   /* 14 */
  41,                                  /* 15 */
  1,                                   /* 16 */
  24,                                  /* 17 */
  1,                                   /* 18 */
  38,                                  /* 19 */
  1,                                   /* 20 */
  47,                                  /* 21 */
  1,                                   /* 22 */
  37,                                  /* 23 */
  1,                                   /* 24 */
  23                                   /* 25 */
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
    0, 0 }
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
  { rtBlockSignals, 281,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 313,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2162038990U,
    482456532U,
    3096283811U,
    20893577U },
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
