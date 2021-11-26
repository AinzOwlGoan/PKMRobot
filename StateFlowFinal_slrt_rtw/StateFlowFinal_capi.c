/*
 * StateFlowFinal_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowFinal".
 *
 * Model version              : 1.991
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Nov 26 12:14:27 2021
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
  { 0, 46, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 46, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 46, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 46, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 46, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 46, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 46, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 46, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 46, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 46, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 10, 46, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 11, 46, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 12, 46, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 13, 46, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 14, 46, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 46, TARGET_STRING("State flow robot/p16"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 16, 46, TARGET_STRING("State flow robot/p17"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 17, 46, TARGET_STRING("State flow robot/p18"),
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
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

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

  { 92, 32, TARGET_STRING("Sistema_braccia/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 32, TARGET_STRING("Sistema_braccia/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 94, 33, TARGET_STRING("Sistema_braccia/MATLAB Function3/p1"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 95, 33, TARGET_STRING("Sistema_braccia/MATLAB Function3/p2"),
    TARGET_STRING("phi"), 1, 0, 0, 0, 1 },

  { 96, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4/p1"),
    TARGET_STRING("Rho"), 0, 0, 0, 0, 1 },

  { 97, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4/p2"),
    TARGET_STRING("Omega"), 1, 0, 5, 0, 1 },

  { 98, 34, TARGET_STRING("Sistema_braccia/MATLAB Function4/p3"),
    TARGET_STRING("zV"), 2, 0, 5, 0, 1 },

  { 99, 35, TARGET_STRING("Sistema_braccia/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 35, TARGET_STRING("Sistema_braccia/MATLAB Jin/p2"),
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

  { 106, 0, TARGET_STRING("Sistema_braccia/Product"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 107, 0, TARGET_STRING("Sistema_braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 108, 0, TARGET_STRING("Sistema_braccia/Sum1"),
    TARGET_STRING("Ymov"), 0, 0, 0, 0, 1 },

  { 109, 0, TARGET_STRING("Sistema_braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Sistema_braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING("Sistema_braccia/Sum4"),
    TARGET_STRING("q"), 0, 0, 5, 0, 1 },

  { 112, 0, TARGET_STRING("Sistema_braccia/Sum5"),
    TARGET_STRING("n-phi"), 0, 0, 0, 0, 1 },

  { 113, 0, TARGET_STRING("Sistema_braccia/Sum7"),
    TARGET_STRING("qdot"), 0, 0, 5, 0, 1 },

  { 114, 0, TARGET_STRING("Sistema_braccia/Sum8"),
    TARGET_STRING("YRobusto"), 0, 0, 5, 0, 1 },

  { 115, 0, TARGET_STRING("Sistema_braccia/Sum9"),
    TARGET_STRING("Y"), 0, 0, 5, 0, 1 },

  { 116, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 118, 5, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 122, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 7, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 127, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 128, 10, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 132, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 133, 12, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 134, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 135, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 138, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 139, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 140, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 141, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 143, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 144, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 145, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 146, 18, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 147, 19, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 148, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 150, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 151, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 152, 0, TARGET_STRING("Sistema_braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 154, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 155, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 156, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 157, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 158, 27, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 159, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 160, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 161, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 162, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 163, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 164, 28, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 165, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 166, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 167, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 168, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 169, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 170, 29, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 171, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 172, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 173, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 174, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 175, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 176, 30, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 177, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 178, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 179, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 180, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 181, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 182, 31, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 183, 0, TARGET_STRING("Sistema_braccia/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 184, 36, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 36, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 186, 37, TARGET_STRING("Sistema_braccia/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 187, 38, TARGET_STRING("Sistema_braccia/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 0, TARGET_STRING("Sistema_braccia/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 189, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 190, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 191, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 192, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 194, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 195, 39, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 40, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 197, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 198, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 199, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 200, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 201, 41, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 42, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 205, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 206, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 207, 44, TARGET_STRING("State flow robot/Setting/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 208, 44, TARGET_STRING("State flow robot/Setting/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 2 },

  { 209, 44, TARGET_STRING("State flow robot/Setting/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 2 },

  { 210, 45, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 211, 45, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 212, 45, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 213, 45, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 214, 45, TARGET_STRING("State flow robot/Setting/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 215, 45, TARGET_STRING("State flow robot/Setting/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 216, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 219, 13, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 14, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 222, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 223, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 225, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 227, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 228, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 229, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 230, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 231, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 232, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 233, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 234, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 235, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 236, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 237, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 238, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 239, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 240, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 241, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 242, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 243, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 245, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 247, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 248, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 249, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 250, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 257, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 258, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 261, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 282, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 283, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING(
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
  { 291, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 292, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 293, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 294, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 295, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 296, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 297, TARGET_STRING("Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 298, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 299, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 300, TARGET_STRING("Reset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 301, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 302, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 303, TARGET_STRING("StartWork"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 304, TARGET_STRING("StartZero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 305, TARGET_STRING("Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 306, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 307, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 308, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 309, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 310, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 311, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 312, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 313, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 314, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 315, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 316, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 317, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 318, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 319, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 320, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 321, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 322, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 323, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 324, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 325, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 326, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 327, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 328, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 329, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 330, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 331, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 332, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 333, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 334, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 335, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 336, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 337, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 338, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 339, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 340, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 341, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 342, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 343, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 344, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 345, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 346, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 347, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 348, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 349, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 350, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 351, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 352, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 353, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 354, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 355, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 356, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 357, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 358, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 359, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 360, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 361, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 362, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 363, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 364, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 365, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 366, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 367, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 368, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 369, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 370, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 371, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 372, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 373, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 374, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 375, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 376, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 377, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 378, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 379, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 380, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 381, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 382, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 383, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 384, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 385, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 386, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 387, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 388, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 389, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 390, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 391, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 392, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 393, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 394, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 395, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 396, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 397, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 398, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 399, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 400, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 401, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 402, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 403, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 404, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 405, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 406, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 407, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 408, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 409, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 410, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 411, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 412, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 413, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 414, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 415, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 416, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 417, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 418, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 419, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 420, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 421, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 422, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 423, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 424, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 425, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 426, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 427, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 428, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 429, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 430, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 431, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 432, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 433, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 434, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 435, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 436, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 437, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 438, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 439, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 440, TARGET_STRING("Sistema_braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 441, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 442, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 443, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 444, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 445, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 446, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 447, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 448, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 449, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 450, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 451, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 452, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 453, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 454, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 455, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 456, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 457, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 458, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 459, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 460, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 461, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 462, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 463, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 464, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 465, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 466, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 467, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 468, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 469, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 470, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 471, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 472, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 473, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 474, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 475, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 476, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 477, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 478, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 479, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 480, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 481, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 482, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 483, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 484, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 485, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 486, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 487, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 488, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 489, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 490, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 491, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 492, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 493, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 494, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 495, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 496, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 497, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 498, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 499, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 500, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 501, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 502, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 503, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 504, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 505, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 506, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 507, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 508, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 509, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 510, TARGET_STRING("Sistema_braccia/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 511, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 514, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 515, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 516, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 517, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 518, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 519, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 520, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 521, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 522, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 523, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 524, TARGET_STRING("Sistema_braccia/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 525, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 526, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 527, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 528, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 529, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 530, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 531, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 532, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 533, TARGET_STRING("Sistema_braccia/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 534, TARGET_STRING("Sistema_braccia/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 535, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 536, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 537, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 538, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 539, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 540, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 541, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 542, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 543, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 544, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 545, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 546, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 547, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 548, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 549, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 550, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 551, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 552, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 553, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 554, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 555, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 556, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 557, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 558, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 559, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 560, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 561, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 562, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 563, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 564, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 565, TARGET_STRING("State flow robot/Setting/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 566, TARGET_STRING("State flow robot/Setting/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 567, TARGET_STRING("State flow robot/Setting/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 568, TARGET_STRING("State flow robot/Setting/Ki"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 570, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 571, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 572, TARGET_STRING("State flow robot/Setting/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 573, TARGET_STRING("State flow robot/Setting/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 574, TARGET_STRING("State flow robot/Setting/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 575, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 576, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 577, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 578, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 579, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 580, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 581, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 582, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 583, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 584, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 585, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 586, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 587, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 588, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 589, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 590, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 591, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 592, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 593, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 594, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 595, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 596, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 597, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 598, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 599, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 600, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 601, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 602, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 603, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 604, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 605, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 606, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 607, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 608, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 609, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 610, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 611, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 612, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 613, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 614, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
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
  &StateFlowFinal_B.theta1,            /* 76: Signal */
  &StateFlowFinal_B.theta2,            /* 77: Signal */
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
  &StateFlowFinal_B.Product[0],        /* 106: Signal */
  &StateFlowFinal_B.Sum,               /* 107: Signal */
  &StateFlowFinal_B.Ymov,              /* 108: Signal */
  &StateFlowFinal_B.Sum2_d,            /* 109: Signal */
  &StateFlowFinal_B.Sum3_b,            /* 110: Signal */
  &StateFlowFinal_B.q[0],              /* 111: Signal */
  &StateFlowFinal_B.nphi,              /* 112: Signal */
  &StateFlowFinal_B.qdot[0],           /* 113: Signal */
  &StateFlowFinal_B.YRobusto[0],       /* 114: Signal */
  &StateFlowFinal_B.Y[0],              /* 115: Signal */
  &StateFlowFinal_B.DataTypeConversion6,/* 116: Signal */
  &StateFlowFinal_B.StatusWord,        /* 117: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_e.y,/* 118: Signal */
  &StateFlowFinal_B.DataTypeConversion14,/* 119: Signal */
  &StateFlowFinal_B.Memory,            /* 120: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9,/* 121: Signal */
  &StateFlowFinal_B.Switch1,           /* 122: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_a.y,/* 123: Signal */
  &StateFlowFinal_B.DataTypeConversion14_g,/* 124: Signal */
  &StateFlowFinal_B.Memory_g,          /* 125: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_h,/* 126: Signal */
  &StateFlowFinal_B.Switch1_l,         /* 127: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_f.y,/* 128: Signal */
  &StateFlowFinal_B.DataTypeConversion14_k,/* 129: Signal */
  &StateFlowFinal_B.Memory_n,          /* 130: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_hd,/* 131: Signal */
  &StateFlowFinal_B.Switch1_f,         /* 132: Signal */
  &StateFlowFinal_B.sf_MATLABFunction_fb.y,/* 133: Signal */
  &StateFlowFinal_B.DataTypeConversion14_h,/* 134: Signal */
  &StateFlowFinal_B.Memory_d,          /* 135: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive9_m,/* 136: Signal */
  &StateFlowFinal_B.Switch1_h,         /* 137: Signal */
  &StateFlowFinal_B.Sum_p,             /* 138: Signal */
  &StateFlowFinal_B.Sum2_m,            /* 139: Signal */
  &StateFlowFinal_B.Gain_a,            /* 140: Signal */
  &StateFlowFinal_B.Gain6,             /* 141: Signal */
  &StateFlowFinal_B.Sum9_p,            /* 142: Signal */
  &StateFlowFinal_B.Diff,              /* 143: Signal */
  &StateFlowFinal_B.TSamp,             /* 144: Signal */
  &StateFlowFinal_B.Uk1,               /* 145: Signal */
  &StateFlowFinal_B.vel_A_conv_d,      /* 146: Signal */
  &StateFlowFinal_B.vel_B_conv_d,      /* 147: Signal */
  &StateFlowFinal_B.VelocityA_b,       /* 148: Signal */
  &StateFlowFinal_B.VelocityB_d,       /* 149: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_j,/* 150: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_k,/* 151: Signal */
  &StateFlowFinal_B.Sum2,              /* 152: Signal */
  &StateFlowFinal_B.xct,               /* 153: Signal */
  &StateFlowFinal_B.yct,               /* 154: Signal */
  &StateFlowFinal_B.xct_p,             /* 155: Signal */
  &StateFlowFinal_B.yct_p,             /* 156: Signal */
  &StateFlowFinal_B.xct_pp,            /* 157: Signal */
  &StateFlowFinal_B.yct_pp,            /* 158: Signal */
  &StateFlowFinal_B.xc,                /* 159: Signal */
  &StateFlowFinal_B.yc,                /* 160: Signal */
  &StateFlowFinal_B.xc_p,              /* 161: Signal */
  &StateFlowFinal_B.yc_p,              /* 162: Signal */
  &StateFlowFinal_B.xc_pp,             /* 163: Signal */
  &StateFlowFinal_B.yc_pp,             /* 164: Signal */
  &StateFlowFinal_B.xq,                /* 165: Signal */
  &StateFlowFinal_B.yq,                /* 166: Signal */
  &StateFlowFinal_B.xq_p,              /* 167: Signal */
  &StateFlowFinal_B.yq_p,              /* 168: Signal */
  &StateFlowFinal_B.xq_pp,             /* 169: Signal */
  &StateFlowFinal_B.yq_pp,             /* 170: Signal */
  &StateFlowFinal_B.x,                 /* 171: Signal */
  &StateFlowFinal_B.y,                 /* 172: Signal */
  &StateFlowFinal_B.x_p_l,             /* 173: Signal */
  &StateFlowFinal_B.y_p_o,             /* 174: Signal */
  &StateFlowFinal_B.x_pp,              /* 175: Signal */
  &StateFlowFinal_B.y_pp,              /* 176: Signal */
  &StateFlowFinal_B.xs,                /* 177: Signal */
  &StateFlowFinal_B.ys,                /* 178: Signal */
  &StateFlowFinal_B.xs_p,              /* 179: Signal */
  &StateFlowFinal_B.ys_p,              /* 180: Signal */
  &StateFlowFinal_B.xs_pp,             /* 181: Signal */
  &StateFlowFinal_B.ys_pp,             /* 182: Signal */
  &StateFlowFinal_B.MultiportSwitch[0],/* 183: Signal */
  &StateFlowFinal_B.x0,                /* 184: Signal */
  &StateFlowFinal_B.y0,                /* 185: Signal */
  &StateFlowFinal_B.pos_A_conv,        /* 186: Signal */
  &StateFlowFinal_B.pos_B_conv,        /* 187: Signal */
  &StateFlowFinal_B.DigitalClock,      /* 188: Signal */
  &StateFlowFinal_B.Sum12,             /* 189: Signal */
  &StateFlowFinal_B.Sum4,              /* 190: Signal */
  &StateFlowFinal_B.Sum7,              /* 191: Signal */
  &StateFlowFinal_B.Sum9,              /* 192: Signal */
  &StateFlowFinal_B.Gain_p,            /* 193: Signal */
  &StateFlowFinal_B.Gain_n,            /* 194: Signal */
  &StateFlowFinal_B.vel_A_conv_b,      /* 195: Signal */
  &StateFlowFinal_B.vel_B_conv_b,      /* 196: Signal */
  &StateFlowFinal_B.VelocityA_o,       /* 197: Signal */
  &StateFlowFinal_B.VelocityB_f,       /* 198: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14_b,/* 199: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15_d,/* 200: Signal */
  &StateFlowFinal_B.vel_A_conv,        /* 201: Signal */
  &StateFlowFinal_B.vel_B_conv,        /* 202: Signal */
  &StateFlowFinal_B.VelocityA,         /* 203: Signal */
  &StateFlowFinal_B.VelocityB,         /* 204: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive14,/* 205: Signal */
  &StateFlowFinal_B.EtherCATPDOReceive15,/* 206: Signal */
  &StateFlowFinal_B.CA,                /* 207: Signal */
  &StateFlowFinal_B.CB,                /* 208: Signal */
  &StateFlowFinal_B.CH,                /* 209: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator,/* 210: Signal */
  &StateFlowFinal_B.DiscreteTimeIntegrator1,/* 211: Signal */
  &StateFlowFinal_B.Gain_i,            /* 212: Signal */
  &StateFlowFinal_B.Gain1_f,           /* 213: Signal */
  &StateFlowFinal_B.Sum1_i,            /* 214: Signal */
  &StateFlowFinal_B.Sum2_b,            /* 215: Signal */
  &StateFlowFinal_B.Diff_l,            /* 216: Signal */
  &StateFlowFinal_B.TSamp_i,           /* 217: Signal */
  &StateFlowFinal_B.Uk1_p,             /* 218: Signal */
  &StateFlowFinal_B.pos_A_conv_c,      /* 219: Signal */
  &StateFlowFinal_B.pos_B_conv_v,      /* 220: Signal */
  &StateFlowFinal_B.Sum5,              /* 221: Signal */
  &StateFlowFinal_B.Diff_i,            /* 222: Signal */
  &StateFlowFinal_B.TSamp_n,           /* 223: Signal */
  &StateFlowFinal_B.Uk1_d,             /* 224: Signal */
  &StateFlowFinal_B.Diff_d,            /* 225: Signal */
  &StateFlowFinal_B.TSamp_h,           /* 226: Signal */
  &StateFlowFinal_B.Uk1_b,             /* 227: Signal */
  &StateFlowFinal_B.Diff_f,            /* 228: Signal */
  &StateFlowFinal_B.TSamp_e,           /* 229: Signal */
  &StateFlowFinal_B.Uk1_l,             /* 230: Signal */
  &StateFlowFinal_B.Diff_n,            /* 231: Signal */
  &StateFlowFinal_B.TSamp_nd,          /* 232: Signal */
  &StateFlowFinal_B.Uk1_ll,            /* 233: Signal */
  &StateFlowFinal_B.Diff_b,            /* 234: Signal */
  &StateFlowFinal_B.TSamp_f,           /* 235: Signal */
  &StateFlowFinal_B.Uk1_j,             /* 236: Signal */
  &StateFlowFinal_B.Diff_bt,           /* 237: Signal */
  &StateFlowFinal_B.TSamp_iq,          /* 238: Signal */
  &StateFlowFinal_B.Uk1_bl,            /* 239: Signal */
  &StateFlowFinal_B.Duk_h,             /* 240: Signal */
  &StateFlowFinal_B.x1k1_g,            /* 241: Signal */
  &StateFlowFinal_B.x2k1_n,            /* 242: Signal */
  &StateFlowFinal_B.yk_i,              /* 243: Signal */
  &StateFlowFinal_B.x1k_a,             /* 244: Signal */
  &StateFlowFinal_B.x2k_g,             /* 245: Signal */
  &StateFlowFinal_B.Duk,               /* 246: Signal */
  &StateFlowFinal_B.x1k1,              /* 247: Signal */
  &StateFlowFinal_B.x2k1,              /* 248: Signal */
  &StateFlowFinal_B.yk,                /* 249: Signal */
  &StateFlowFinal_B.x1k,               /* 250: Signal */
  &StateFlowFinal_B.x2k,               /* 251: Signal */
  &StateFlowFinal_B.Duk_n,             /* 252: Signal */
  &StateFlowFinal_B.x1k1_h,            /* 253: Signal */
  &StateFlowFinal_B.x2k1_h,            /* 254: Signal */
  &StateFlowFinal_B.yk_m,              /* 255: Signal */
  &StateFlowFinal_B.x1k_i,             /* 256: Signal */
  &StateFlowFinal_B.x2k_d,             /* 257: Signal */
  &StateFlowFinal_B.A11_p,             /* 258: Signal */
  &StateFlowFinal_B.A12_c,             /* 259: Signal */
  &StateFlowFinal_B.A21_h,             /* 260: Signal */
  &StateFlowFinal_B.A22_d,             /* 261: Signal */
  &StateFlowFinal_B.sum2_nk,           /* 262: Signal */
  &StateFlowFinal_B.sum3_e,            /* 263: Signal */
  &StateFlowFinal_B.B11_k,             /* 264: Signal */
  &StateFlowFinal_B.B21_l,             /* 265: Signal */
  &StateFlowFinal_B.C11_h,             /* 266: Signal */
  &StateFlowFinal_B.C12_e,             /* 267: Signal */
  &StateFlowFinal_B.sum2_k,            /* 268: Signal */
  &StateFlowFinal_B.A11,               /* 269: Signal */
  &StateFlowFinal_B.A12,               /* 270: Signal */
  &StateFlowFinal_B.A21,               /* 271: Signal */
  &StateFlowFinal_B.A22,               /* 272: Signal */
  &StateFlowFinal_B.sum2_n,            /* 273: Signal */
  &StateFlowFinal_B.sum3,              /* 274: Signal */
  &StateFlowFinal_B.B11,               /* 275: Signal */
  &StateFlowFinal_B.B21,               /* 276: Signal */
  &StateFlowFinal_B.C11,               /* 277: Signal */
  &StateFlowFinal_B.C12,               /* 278: Signal */
  &StateFlowFinal_B.sum2,              /* 279: Signal */
  &StateFlowFinal_B.A11_h,             /* 280: Signal */
  &StateFlowFinal_B.A12_g,             /* 281: Signal */
  &StateFlowFinal_B.A21_p,             /* 282: Signal */
  &StateFlowFinal_B.A22_j,             /* 283: Signal */
  &StateFlowFinal_B.sum2_e,            /* 284: Signal */
  &StateFlowFinal_B.sum3_b,            /* 285: Signal */
  &StateFlowFinal_B.B11_d,             /* 286: Signal */
  &StateFlowFinal_B.B21_h,             /* 287: Signal */
  &StateFlowFinal_B.C11_e,             /* 288: Signal */
  &StateFlowFinal_B.C12_m,             /* 289: Signal */
  &StateFlowFinal_B.sum2_ka,           /* 290: Signal */
  &StateFlowFinal_P.AlzataA_Value,     /* 291: Block Parameter */
  &StateFlowFinal_P.AlzataB_Value,     /* 292: Block Parameter */
  &StateFlowFinal_P.AsseAbraccia_Value,/* 293: Block Parameter */
  &StateFlowFinal_P.AsseAvite_Value,   /* 294: Block Parameter */
  &StateFlowFinal_P.AsseBbraccia_Value,/* 295: Block Parameter */
  &StateFlowFinal_P.AsseBvite_Value,   /* 296: Block Parameter */
  &StateFlowFinal_P.Kp_Value,          /* 297: Block Parameter */
  &StateFlowFinal_P.PeriodoA_Value,    /* 298: Block Parameter */
  &StateFlowFinal_P.PeriodoB_Value,    /* 299: Block Parameter */
  &StateFlowFinal_P.Reset_Value,       /* 300: Block Parameter */
  &StateFlowFinal_P.StartHome_Value,   /* 301: Block Parameter */
  &StateFlowFinal_P.StartRobot_Value,  /* 302: Block Parameter */
  &StateFlowFinal_P.StartWork_Value,   /* 303: Block Parameter */
  &StateFlowFinal_P.StartZero_Value,   /* 304: Block Parameter */
  &StateFlowFinal_P.Stop_Value,        /* 305: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P1[0],/* 306: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P2,/* 307: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P3,/* 308: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P4,/* 309: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P5,/* 310: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P6,/* 311: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit3_P7,/* 312: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P1[0],/* 313: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P2,/* 314: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P3,/* 315: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P4,/* 316: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P5,/* 317: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P6,/* 318: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit4_P7,/* 319: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P1[0],/* 320: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P2,/* 321: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P3,/* 322: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P4,/* 323: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P5,/* 324: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P6,/* 325: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit5_P7,/* 326: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P1[0],/* 327: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P2,/* 328: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P3,/* 329: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P4,/* 330: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P5,/* 331: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P6,/* 332: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit6_P7,/* 333: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1[0],/* 334: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2,/* 335: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3,/* 336: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4,/* 337: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5,/* 338: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6,/* 339: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7,/* 340: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P1_l[0],/* 341: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P2_n,/* 342: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P3_n,/* 343: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P4_l,/* 344: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P5_i,/* 345: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P6_f,/* 346: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive16_P7_h,/* 347: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P1[0],  /* 348: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P2,     /* 349: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P3,     /* 350: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P4,     /* 351: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P5,     /* 352: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P6,     /* 353: Block Parameter */
  &StateFlowFinal_P.LuceBianca_P7,     /* 354: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P1[0],   /* 355: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P2,      /* 356: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P3,      /* 357: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P4,      /* 358: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P5,      /* 359: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P6,      /* 360: Block Parameter */
  &StateFlowFinal_P.LuceRossa_P7,      /* 361: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P1[0],   /* 362: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P2,      /* 363: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P3,      /* 364: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P4,      /* 365: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P5,      /* 366: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P6,      /* 367: Block Parameter */
  &StateFlowFinal_P.LuceVerde_P7,      /* 368: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_UpperSat,/* 369: Block Parameter */
  &StateFlowFinal_P.CoppiaAbracciasaturata_LowerSat,/* 370: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P1[0],/* 371: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P2,/* 372: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P3,/* 373: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P4,/* 374: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P5,/* 375: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P6,/* 376: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit1_P7,/* 377: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold, /* 378: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_UpperSat,/* 379: Block Parameter */
  &StateFlowFinal_P.CoppiaBbracciasaturata_LowerSat,/* 380: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P1[0],/* 381: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P2,/* 382: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P3,/* 383: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P4,/* 384: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P5,/* 385: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P6,/* 386: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit7_P7,/* 387: Block Parameter */
  &StateFlowFinal_P.Switch1_Threshold_f,/* 388: Block Parameter */
  &StateFlowFinal_P.Gain_Gain,         /* 389: Block Parameter */
  &StateFlowFinal_P.Torquesend_P1[0],  /* 390: Block Parameter */
  &StateFlowFinal_P.Torquesend_P2,     /* 391: Block Parameter */
  &StateFlowFinal_P.Torquesend_P3,     /* 392: Block Parameter */
  &StateFlowFinal_P.Torquesend_P4,     /* 393: Block Parameter */
  &StateFlowFinal_P.Torquesend_P5,     /* 394: Block Parameter */
  &StateFlowFinal_P.Torquesend_P6,     /* 395: Block Parameter */
  &StateFlowFinal_P.Torquesend_P7,     /* 396: Block Parameter */
  &StateFlowFinal_P.Switch_Threshold,  /* 397: Block Parameter */
  &StateFlowFinal_P.Constant1_Value_e, /* 398: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_UpperSat,/* 399: Block Parameter */
  &StateFlowFinal_P.CoppiaAvitesaturata_LowerSat,/* 400: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P1[0],/* 401: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P2,/* 402: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P3,/* 403: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P4,/* 404: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P5,/* 405: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P6,/* 406: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOTransmit2_P7,/* 407: Block Parameter */
  &StateFlowFinal_P.Switch2_Threshold, /* 408: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P1[0],/* 409: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P2, /* 410: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P3, /* 411: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P4, /* 412: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P5, /* 413: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P6, /* 414: Block Parameter */
  &StateFlowFinal_P.MotorebracciaA_P7, /* 415: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P1[0],/* 416: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P2, /* 417: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P3, /* 418: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P4, /* 419: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P5, /* 420: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P6, /* 421: Block Parameter */
  &StateFlowFinal_P.MotorebracciaB_P7, /* 422: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P1[0], /* 423: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P2,    /* 424: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P3,    /* 425: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P4,    /* 426: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P5,    /* 427: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P6,    /* 428: Block Parameter */
  &StateFlowFinal_P.MotoreviteA_P7,    /* 429: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P1[0], /* 430: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P2,    /* 431: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P3,    /* 432: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P4,    /* 433: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P5,    /* 434: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P6,    /* 435: Block Parameter */
  &StateFlowFinal_P.MotoreviteB_P7,    /* 436: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevScale,/* 437: Mask Parameter */
  &StateFlowFinal_P.Gain2_Gain,        /* 438: Block Parameter */
  &StateFlowFinal_P.Gain4_Gain,        /* 439: Block Parameter */
  &StateFlowFinal_P.selettore_Value,   /* 440: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_j,       /* 441: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain_i,      /* 442: Block Parameter */
  &StateFlowFinal_P.Kd_Gain,           /* 443: Block Parameter */
  &StateFlowFinal_P.Kd1_Gain,          /* 444: Block Parameter */
  &StateFlowFinal_P.Kp1_Gain,          /* 445: Block Parameter */
  &StateFlowFinal_P.StatusWord_P1[0],  /* 446: Block Parameter */
  &StateFlowFinal_P.StatusWord_P2,     /* 447: Block Parameter */
  &StateFlowFinal_P.StatusWord_P3,     /* 448: Block Parameter */
  &StateFlowFinal_P.StatusWord_P4,     /* 449: Block Parameter */
  &StateFlowFinal_P.StatusWord_P5,     /* 450: Block Parameter */
  &StateFlowFinal_P.StatusWord_P6,     /* 451: Block Parameter */
  &StateFlowFinal_P.StatusWord_P7,     /* 452: Block Parameter */
  &StateFlowFinal_P.Constant_Value,    /* 453: Block Parameter */
  &StateFlowFinal_P.Memory_X0,         /* 454: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1[0],/* 455: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2,/* 456: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3,/* 457: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4,/* 458: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5,/* 459: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6,/* 460: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7,/* 461: Block Parameter */
  &StateFlowFinal_P.Constant_Value_l,  /* 462: Block Parameter */
  &StateFlowFinal_P.Memory_X0_m,       /* 463: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_g[0],/* 464: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_p,/* 465: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_f,/* 466: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_a,/* 467: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_d,/* 468: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_c,/* 469: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_a,/* 470: Block Parameter */
  &StateFlowFinal_P.Constant_Value_e,  /* 471: Block Parameter */
  &StateFlowFinal_P.Memory_X0_o,       /* 472: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_i[0],/* 473: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_m,/* 474: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_m,/* 475: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_l,/* 476: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_b,/* 477: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l,/* 478: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_b,/* 479: Block Parameter */
  &StateFlowFinal_P.Constant_Value_p,  /* 480: Block Parameter */
  &StateFlowFinal_P.Memory_X0_a,       /* 481: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P1_a[0],/* 482: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P2_d,/* 483: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P3_k,/* 484: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P4_f,/* 485: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P5_k,/* 486: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P6_l4,/* 487: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive9_P7_j,/* 488: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeA_ICPrevScale,/* 489: Mask Parameter */
  &StateFlowFinal_P.Gain_Gain_b,       /* 490: Block Parameter */
  &StateFlowFinal_P.Gain6_Gain,        /* 491: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt,        /* 492: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_m[0],/* 493: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_d,/* 494: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_d,/* 495: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_g,/* 496: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_h,/* 497: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_o,/* 498: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_g,/* 499: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_m[0],/* 500: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_d,/* 501: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_b,/* 502: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_i,/* 503: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_cp,/* 504: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_f,/* 505: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_o,/* 506: Block Parameter */
  &StateFlowFinal_P.AlzataC_Value,     /* 507: Block Parameter */
  &StateFlowFinal_P.AlzataC1_Value,    /* 508: Block Parameter */
  &StateFlowFinal_P.AlzataQ_Value,     /* 509: Block Parameter */
  &StateFlowFinal_P.Constant3_Value,   /* 510: Block Parameter */
  &StateFlowFinal_P.Ngiri_Value,       /* 511: Block Parameter */
  &StateFlowFinal_P.Ngiri1_Value,      /* 512: Block Parameter */
  &StateFlowFinal_P.Ngiri2_Value,      /* 513: Block Parameter */
  &StateFlowFinal_P.Periodo_Value,     /* 514: Block Parameter */
  &StateFlowFinal_P.PeriodoC_Value,    /* 515: Block Parameter */
  &StateFlowFinal_P.PeriodoC1_Value,   /* 516: Block Parameter */
  &StateFlowFinal_P.PeriodoQ_Value,    /* 517: Block Parameter */
  &StateFlowFinal_P.Rmax_Value,        /* 518: Block Parameter */
  &StateFlowFinal_P.Rmax1_Value,       /* 519: Block Parameter */
  &StateFlowFinal_P.Rmin_Value,        /* 520: Block Parameter */
  &StateFlowFinal_P.Rmin1_Value,       /* 521: Block Parameter */
  &StateFlowFinal_P.Rmin2_Value,       /* 522: Block Parameter */
  &StateFlowFinal_P.Rmin3_Value,       /* 523: Block Parameter */
  &StateFlowFinal_P.Tempospostiniziale_Value,/* 524: Block Parameter */
  &StateFlowFinal_P.Constant_Value_b,  /* 525: Block Parameter */
  &StateFlowFinal_P.Constant1_Value,   /* 526: Block Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB_ICPrevSca_m,/* 527: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB1_ICPrevScal,/* 528: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB2_ICPrevScal,/* 529: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB3_ICPrevScal,/* 530: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB4_ICPrevScal,/* 531: Mask Parameter */
  &StateFlowFinal_P.DiscreteDerivativeB5_ICPrevScal,/* 532: Mask Parameter */
  &StateFlowFinal_P.Constant4_Value,   /* 533: Block Parameter */
  &StateFlowFinal_P.Constant5_Value,   /* 534: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_c,       /* 535: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d4,      /* 536: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1_k[0],/* 537: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2_i,/* 538: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3_a,/* 539: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4_e,/* 540: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5_j,/* 541: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6_m,/* 542: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7_m,/* 543: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1_a[0],/* 544: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2_l,/* 545: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3_a,/* 546: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4_f,/* 547: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5_c,/* 548: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6_g,/* 549: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7_m,/* 550: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P1[0],/* 551: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P2,/* 552: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P3,/* 553: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P4,/* 554: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P5,/* 555: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P6,/* 556: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive14_P7,/* 557: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P1[0],/* 558: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P2,/* 559: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P3,/* 560: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P4,/* 561: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P5,/* 562: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P6,/* 563: Block Parameter */
  &StateFlowFinal_P.EtherCATPDOReceive15_P7,/* 564: Block Parameter */
  &StateFlowFinal_P.CA_Y0,             /* 565: Block Parameter */
  &StateFlowFinal_P.CB_Y0,             /* 566: Block Parameter */
  &StateFlowFinal_P.CH_Y0,             /* 567: Block Parameter */
  &StateFlowFinal_P.Ki_Value,          /* 568: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_gainval,/* 569: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator_IC,/* 570: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_gainval,/* 571: Block Parameter */
  &StateFlowFinal_P.DiscreteTimeIntegrator1_IC,/* 572: Block Parameter */
  &StateFlowFinal_P.Gain_Gain_d,       /* 573: Block Parameter */
  &StateFlowFinal_P.Gain1_Gain,        /* 574: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_g,      /* 575: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_e,      /* 576: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gz,     /* 577: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_m,      /* 578: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_gh,     /* 579: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_d,      /* 580: Block Parameter */
  &StateFlowFinal_P.TSamp_WtEt_p,      /* 581: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_h,        /* 582: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_l,/* 583: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_l,/* 584: Block Parameter */
  &StateFlowFinal_P.Duk_Gain,          /* 585: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition,/* 586: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition,/* 587: Block Parameter */
  &StateFlowFinal_P.Duk_Gain_g,        /* 588: Block Parameter */
  &StateFlowFinal_P.Delay_x1_InitialCondition_n,/* 589: Block Parameter */
  &StateFlowFinal_P.Delay_x2_InitialCondition_e,/* 590: Block Parameter */
  &StateFlowFinal_P.A11_Gain_e,        /* 591: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a,        /* 592: Block Parameter */
  &StateFlowFinal_P.A21_Gain_m,        /* 593: Block Parameter */
  &StateFlowFinal_P.A22_Gain_g,        /* 594: Block Parameter */
  &StateFlowFinal_P.B11_Gain_f,        /* 595: Block Parameter */
  &StateFlowFinal_P.B21_Gain_p,        /* 596: Block Parameter */
  &StateFlowFinal_P.C11_Gain_n,        /* 597: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d,        /* 598: Block Parameter */
  &StateFlowFinal_P.A11_Gain,          /* 599: Block Parameter */
  &StateFlowFinal_P.A12_Gain,          /* 600: Block Parameter */
  &StateFlowFinal_P.A21_Gain,          /* 601: Block Parameter */
  &StateFlowFinal_P.A22_Gain,          /* 602: Block Parameter */
  &StateFlowFinal_P.B11_Gain,          /* 603: Block Parameter */
  &StateFlowFinal_P.B21_Gain,          /* 604: Block Parameter */
  &StateFlowFinal_P.C11_Gain,          /* 605: Block Parameter */
  &StateFlowFinal_P.C12_Gain,          /* 606: Block Parameter */
  &StateFlowFinal_P.A11_Gain_h,        /* 607: Block Parameter */
  &StateFlowFinal_P.A12_Gain_a3,       /* 608: Block Parameter */
  &StateFlowFinal_P.A21_Gain_f,        /* 609: Block Parameter */
  &StateFlowFinal_P.A22_Gain_d,        /* 610: Block Parameter */
  &StateFlowFinal_P.B11_Gain_n,        /* 611: Block Parameter */
  &StateFlowFinal_P.B21_Gain_l,        /* 612: Block Parameter */
  &StateFlowFinal_P.C11_Gain_g,        /* 613: Block Parameter */
  &StateFlowFinal_P.C12_Gain_d1,       /* 614: Block Parameter */
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
  { rtBlockSignals, 291,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 324,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 159176713U,
    3334351772U,
    419521840U,
    2102884017U },
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
