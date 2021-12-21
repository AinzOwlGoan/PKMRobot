/*
 * StateFlowGUI_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.884
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Dec 14 15:00:01 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "StateFlowGUI_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "StateFlowGUI.h"
#include "StateFlowGUI_capi.h"
#include "StateFlowGUI_private.h"
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
  { 0, 60, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 60, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 60, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 60, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 60, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 60, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 60, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 60, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 60, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 60, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 10, 60, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 11, 60, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 12, 60, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 13, 60, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 14, 60, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Kp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Reset"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("StartHome"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("StartRobot"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("StartWork"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Stop"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 26, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 0 },

  { 27, 0, TARGET_STRING("Finecorsa Vite/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Finecorsa Vite/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 30, 0, TARGET_STRING("Finecorsa braccia/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Finecorsa braccia/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 33, 1, TARGET_STRING("LED Status/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("LED Status/Data Type Conversion24"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 37, 0, TARGET_STRING("LED Status/Data Type Conversion25"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 38, 0, TARGET_STRING("LED Status/Data Type Conversion26"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 39, 4, TARGET_STRING("Movimento Braccia/Asse A conv brac"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 40, 5, TARGET_STRING("Movimento Braccia/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 6, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 6, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 43, 7, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 7, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 45, 8, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 8, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 47, 19, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 16, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Movimento Braccia/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 0, TARGET_STRING("Movimento Braccia/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 51, 0, TARGET_STRING("Movimento Braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Movimento Braccia/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Movimento Braccia/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Movimento Braccia/Sum14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 16, TARGET_STRING("Movimento Braccia/Sum17"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Movimento Braccia/Sum2"),
    TARGET_STRING("Theta1Reale"), 0, 0, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Movimento Braccia/Sum3"),
    TARGET_STRING("theta2Reale"), 0, 0, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Movimento Braccia/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Movimento Braccia/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 60, 19, TARGET_STRING("Movimento Braccia/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 61, 19, TARGET_STRING("Movimento Braccia/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 62, 16, TARGET_STRING("Movimento Braccia/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Out Asse A Braccia/Data Type Conversion3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 65, 17, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 20, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 70, 22, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 23, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 25, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING("Posizione Braccia /convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Posizione Braccia /convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Posizione Vite/convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Posizione Vite/convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 0, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 82, 0, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 83, 29, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 29, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 85, 30, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 31, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 31, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 88, 0, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 0, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 0, TARGET_STRING("Sistema Vite/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 0, TARGET_STRING("Sistema Vite/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 0, TARGET_STRING("Sistema Vite/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 0, TARGET_STRING("Sistema Vite/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING("Sistema Vite/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Sistema Vite/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 34, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p1"),
    TARGET_STRING("theta1"), 0, 0, 0, 0, 1 },

  { 97, 34, TARGET_STRING("Sistema_braccia/Cinematica Inversa/p2"),
    TARGET_STRING("theta2"), 1, 0, 0, 0, 1 },

  { 98, 35, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 35, TARGET_STRING("Sistema_braccia/Cinematica Inversa Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 100, 36, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 36, TARGET_STRING("Sistema_braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 102, 37, TARGET_STRING("Sistema_braccia/Cinematica diretta/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 103, 37, TARGET_STRING("Sistema_braccia/Cinematica diretta/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 104, 38, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 38, TARGET_STRING("Sistema_braccia/Cinematica diretta Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 106, 39, TARGET_STRING("Sistema_braccia/Coppia motrice/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 39, TARGET_STRING("Sistema_braccia/Coppia motrice/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 108, 40, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 40, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 110, 40, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 1 },

  { 111, 40, TARGET_STRING("Sistema_braccia/Dinamica Inversa1/p4"),
    TARGET_STRING("ntilde"), 3, 0, 0, 0, 1 },

  { 112, 46, TARGET_STRING("Sistema_braccia/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 113, 46, TARGET_STRING("Sistema_braccia/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 114, 47, TARGET_STRING("Sistema_braccia/MATLAB Function3/p1"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 115, 47, TARGET_STRING("Sistema_braccia/MATLAB Function3/p2"),
    TARGET_STRING("phi"), 1, 0, 0, 0, 1 },

  { 116, 48, TARGET_STRING("Sistema_braccia/MATLAB Function4/p1"),
    TARGET_STRING("Rho"), 0, 0, 0, 0, 1 },

  { 117, 48, TARGET_STRING("Sistema_braccia/MATLAB Function4/p2"),
    TARGET_STRING("Omega"), 1, 0, 5, 0, 1 },

  { 118, 48, TARGET_STRING("Sistema_braccia/MATLAB Function4/p3"),
    TARGET_STRING("zV"), 2, 0, 5, 0, 1 },

  { 119, 49, TARGET_STRING("Sistema_braccia/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 49, TARGET_STRING("Sistema_braccia/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 121, 0, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 0, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 0, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 124, 0, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 125, 0, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 126, 0, TARGET_STRING("Sistema_braccia/Product"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 127, 0, TARGET_STRING("Sistema_braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 128, 0, TARGET_STRING("Sistema_braccia/Sum1"),
    TARGET_STRING("Ymov"), 0, 0, 0, 0, 1 },

  { 129, 0, TARGET_STRING("Sistema_braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 130, 0, TARGET_STRING("Sistema_braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 131, 0, TARGET_STRING("Sistema_braccia/Sum4"),
    TARGET_STRING("q"), 0, 0, 5, 0, 1 },

  { 132, 0, TARGET_STRING("Sistema_braccia/Sum5"),
    TARGET_STRING("n-phi"), 0, 0, 0, 0, 1 },

  { 133, 0, TARGET_STRING("Sistema_braccia/Sum7"),
    TARGET_STRING("qdot"), 0, 0, 5, 0, 1 },

  { 134, 0, TARGET_STRING("Sistema_braccia/Sum8"),
    TARGET_STRING("YRobusto"), 0, 0, 5, 0, 1 },

  { 135, 0, TARGET_STRING("Sistema_braccia/Sum9"),
    TARGET_STRING("Y"), 0, 0, 5, 0, 1 },

  { 136, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 138, 0, TARGET_STRING("Movimento Braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 139, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 140, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 143, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 144, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 145, 16, TARGET_STRING("Movimento Braccia/PID Controller1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 146, 0, TARGET_STRING("Movimento Braccia/PID Controller1/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 147, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 148, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 150, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 151, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 152, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 19, TARGET_STRING("Movimento Braccia/PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 154, 0, TARGET_STRING("Movimento Braccia/PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 155, 9, TARGET_STRING("Movimento Braccia/Subsystem/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 156, 9, TARGET_STRING("Movimento Braccia/Subsystem/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 157, 9, TARGET_STRING("Movimento Braccia/Subsystem/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 158, 9, TARGET_STRING("Movimento Braccia/Subsystem/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 159, 10, TARGET_STRING("Movimento Braccia/Subsystem/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 160, 10, TARGET_STRING("Movimento Braccia/Subsystem/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 161, 10, TARGET_STRING("Movimento Braccia/Subsystem/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 162, 10, TARGET_STRING("Movimento Braccia/Subsystem/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 163, 11, TARGET_STRING("Movimento Braccia/Subsystem/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 164, 11, TARGET_STRING("Movimento Braccia/Subsystem/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 165, 11, TARGET_STRING("Movimento Braccia/Subsystem/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 166, 11, TARGET_STRING("Movimento Braccia/Subsystem/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 167, 12, TARGET_STRING("Movimento Braccia/Subsystem/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 168, 12, TARGET_STRING("Movimento Braccia/Subsystem/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 169, 12, TARGET_STRING("Movimento Braccia/Subsystem/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 170, 12, TARGET_STRING("Movimento Braccia/Subsystem/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 171, 13, TARGET_STRING("Movimento Braccia/Subsystem/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 172, 13, TARGET_STRING("Movimento Braccia/Subsystem/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 173, 13, TARGET_STRING("Movimento Braccia/Subsystem/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 174, 13, TARGET_STRING("Movimento Braccia/Subsystem/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 175, 0, TARGET_STRING("Movimento Braccia/Subsystem/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 176, 14, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 177, 15, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 178, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 179, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 181, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 182, 18, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 186, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 187, 21, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 189, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 190, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 191, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 192, 24, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 194, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 196, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 197, 26, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 198, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 199, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 200, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 201, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 202, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 204, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 205, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 206, 0, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 207, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 209, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 210, 32, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 33, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 213, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 215, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 216, 0, TARGET_STRING("Sistema_braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 217, 41, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 218, 41, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 219, 41, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 220, 41, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 221, 41, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 222, 41, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 223, 42, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 224, 42, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 225, 42, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 226, 42, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 227, 42, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 228, 42, TARGET_STRING("Sistema_braccia/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 229, 43, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 230, 43, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 231, 43, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 232, 43, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 233, 43, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 234, 43, TARGET_STRING("Sistema_braccia/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 235, 44, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 236, 44, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 237, 44, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 238, 44, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 239, 44, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 240, 44, TARGET_STRING("Sistema_braccia/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 241, 45, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 242, 45, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 243, 45, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 244, 45, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 245, 45, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 246, 45, TARGET_STRING("Sistema_braccia/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 247, 0, TARGET_STRING("Sistema_braccia/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 248, 50, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 50, TARGET_STRING("Sistema_braccia/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 250, 51, TARGET_STRING("Sistema_braccia/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 52, TARGET_STRING("Sistema_braccia/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING("Sistema_braccia/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING("Sistema_braccia/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 257, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 258, 0, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 259, 53, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 54, TARGET_STRING("Sistema_braccia/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 261, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING("Sistema_braccia/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 264, 0, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 265, 55, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 56, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 0, TARGET_STRING("Sistema_braccia/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 271, 58, TARGET_STRING("State flow robot/Homing/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 272, 58, TARGET_STRING("State flow robot/Homing/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 273, 58, TARGET_STRING("State flow robot/Homing/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 277, 27, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 28, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 282, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 283, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 294, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 297, 0, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 303, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 304, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 305, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 306, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 307, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 308, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 309, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 310, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 311, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 312, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 313, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 314, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 315, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 316, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 317, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 318, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 319, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 320, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 321, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 322, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 323, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 324, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 325, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 326, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 327, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 328, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 329, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 330, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 331, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 332, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 333, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 334, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 335, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 336, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 337, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 338, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 339, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 340, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 341, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 342, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 343, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 344, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 345, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 346, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 347, 0, TARGET_STRING(
    "Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 348, 0, TARGET_STRING(
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
  { 349, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 350, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 351, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 352, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 353, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 354, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 355, TARGET_STRING("Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 356, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 357, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 358, TARGET_STRING("Reset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 359, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 360, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 361, TARGET_STRING("StartWork"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 362, TARGET_STRING("Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 363, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 364, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 365, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 366, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 367, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 368, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 369, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 370, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 371, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 372, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 373, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 374, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 375, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 376, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 377, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 378, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 379, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 380, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 381, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 382, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 383, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 384, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 385, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 386, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 387, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 388, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 389, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 390, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 391, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 392, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 393, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 394, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 395, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 396, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 397, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 398, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 399, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 400, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 401, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 402, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 403, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 404, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 405, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 406, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 407, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 408, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 409, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 410, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 411, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 412, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 413, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 414, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 415, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 416, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 417, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 418, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 419, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 420, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 421, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 422, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 423, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 424, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 425, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 426, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 427, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 428, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 429, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 430, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 431, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 432, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 433, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 434, TARGET_STRING("Movimento Braccia/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 435, TARGET_STRING("Movimento Braccia/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 436, TARGET_STRING("Movimento Braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 437, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 438, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 439, TARGET_STRING("Movimento Braccia/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 440, TARGET_STRING("Movimento Braccia/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 441, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 442, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 443, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 444, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 445, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 446, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 447, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 448, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 449, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 450, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 451, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 452, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 453, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 454, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 455, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 456, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 457, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 458, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 459, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 460, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 461, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 462, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 463, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 464, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 465, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 466, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 467, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 468, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 469, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 470, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 471, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 472, TARGET_STRING("Out asse B Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 473, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 474, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 475, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 476, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 477, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 478, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 479, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 480, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 481, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 482, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 483, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 484, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 485, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 486, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 487, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 488, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 489, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 490, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 491, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 492, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 493, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 494, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 495, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 496, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 497, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 498, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 499, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 500, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 501, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 502, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 503, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 504, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 505, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 506, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 507, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 508, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 509, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 510, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 511, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 512, TARGET_STRING("Sistema_braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("Sistema_braccia/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 514, TARGET_STRING("Sistema_braccia/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 515, TARGET_STRING("Sistema_braccia/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 516, TARGET_STRING("Sistema_braccia/Kd1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 517, TARGET_STRING("Sistema_braccia/Kp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 518, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 519, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 520, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 521, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 522, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 523, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 524, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 525, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 526, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 527, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 528, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 529, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 530, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 531, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 532, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 533, TARGET_STRING("Movimento Braccia/Subsystem/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 534, TARGET_STRING("Movimento Braccia/Subsystem/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 535, TARGET_STRING("Movimento Braccia/Subsystem/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 536, TARGET_STRING("Movimento Braccia/Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 537, TARGET_STRING("Movimento Braccia/Subsystem/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 538, TARGET_STRING("Movimento Braccia/Subsystem/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 539, TARGET_STRING("Movimento Braccia/Subsystem/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 540, TARGET_STRING("Movimento Braccia/Subsystem/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 541, TARGET_STRING("Movimento Braccia/Subsystem/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 542, TARGET_STRING("Movimento Braccia/Subsystem/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 543, TARGET_STRING("Movimento Braccia/Subsystem/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 544, TARGET_STRING("Movimento Braccia/Subsystem/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 545, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 546, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 547, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 548, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 549, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 550, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 551, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 552, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 553, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 554, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 555, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 556, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 557, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 558, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 559, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 560, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 561, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 562, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 563, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 564, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 565, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 566, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 567, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 568, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 570, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 571, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 572, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 573, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 574, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 575, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 576, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 577, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 578, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 579, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 580, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 581, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 582, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 583, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 584, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 585, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 586, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 587, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 588, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 589, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 590, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 591, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 592, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 593, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 594, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 595, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 596, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 597, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 598, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 599, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 600, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 601, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 602, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 603, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 604, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 605, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 606, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 607, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 608, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 609, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 610, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 611, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 612, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 613, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 614, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 615, TARGET_STRING("Sistema_braccia/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 616, TARGET_STRING("Sistema_braccia/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 617, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 618, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 619, TARGET_STRING("Sistema_braccia/Leggi di moto/N giri2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 620, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 621, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 622, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 623, TARGET_STRING("Sistema_braccia/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 624, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 625, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmax1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 626, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 627, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 628, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 629, TARGET_STRING("Sistema_braccia/Leggi di moto/Rmin3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 630, TARGET_STRING("Sistema_braccia/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 631, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 632, TARGET_STRING("Sistema_braccia/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 633, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 634, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 635, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 636, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 637, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 638, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 639, TARGET_STRING("Sistema_braccia/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 640, TARGET_STRING("Sistema_braccia/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 641, TARGET_STRING("Sistema_braccia/Radians to Degrees/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 642, TARGET_STRING("Sistema_braccia/Radians to Degrees1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 643, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 644, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 645, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 646, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 647, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 648, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 649, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 650, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 651, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 652, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 653, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 654, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 655, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 656, TARGET_STRING("Sistema_braccia/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 657, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 658, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 659, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 660, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 661, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 662, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 663, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 664, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 665, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 666, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 667, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 668, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 669, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 670, TARGET_STRING("Sistema_braccia/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 671, TARGET_STRING("State flow robot/Homing/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 672, TARGET_STRING("State flow robot/Homing/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 673, TARGET_STRING("State flow robot/Homing/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 674, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 675, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 676, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 677, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 678, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 679, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 680, TARGET_STRING("Sistema_braccia/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 681, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 682, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 683, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 684, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 685, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 686, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 687, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 688, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 689, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 690, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 691, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 692, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 693, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 694, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 695, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 696, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 697, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 698, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 699, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 700, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 701, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 702, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 703, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 704, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 705, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 706, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 707, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 708, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 709, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 710, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 711, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 712, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 713, TARGET_STRING("Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
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
  &StateFlowGUI_B.Bool,                /* 0: Signal */
  &StateFlowGUI_B.OffT,                /* 1: Signal */
  &StateFlowGUI_B.CoppiaH,             /* 2: Signal */
  &StateFlowGUI_B.OffA_vite,           /* 3: Signal */
  &StateFlowGUI_B.OffB_vite,           /* 4: Signal */
  &StateFlowGUI_B.OffA,                /* 5: Signal */
  &StateFlowGUI_B.OffB,                /* 6: Signal */
  &StateFlowGUI_B.CoppiaA,             /* 7: Signal */
  &StateFlowGUI_B.CoppiaB,             /* 8: Signal */
  &StateFlowGUI_B.Luci,                /* 9: Signal */
  &StateFlowGUI_B.Kp_l,                /* 10: Signal */
  &StateFlowGUI_B.Hv,                  /* 11: Signal */
  &StateFlowGUI_B.Hb,                  /* 12: Signal */
  &StateFlowGUI_B.Enable,              /* 13: Signal */
  &StateFlowGUI_B.FineLavorazione,     /* 14: Signal */
  &StateFlowGUI_B.Clock,               /* 15: Signal */
  &StateFlowGUI_B.Kp,                  /* 16: Signal */
  &StateFlowGUI_B.Reset,               /* 17: Signal */
  &StateFlowGUI_B.StartHome,           /* 18: Signal */
  &StateFlowGUI_B.StartRobot,          /* 19: Signal */
  &StateFlowGUI_B.StartWork,           /* 20: Signal */
  &StateFlowGUI_B.Stop,                /* 21: Signal */
  &StateFlowGUI_B.DataTypeConversion1_p,/* 22: Signal */
  &StateFlowGUI_B.DataTypeConversion2, /* 23: Signal */
  &StateFlowGUI_B.DataTypeConversion5, /* 24: Signal */
  &StateFlowGUI_B.DataTypeConversion7, /* 25: Signal */
  &StateFlowGUI_B.EtherCATInit[0],     /* 26: Signal */
  &StateFlowGUI_B.DataTypeConversion8, /* 27: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive16,/* 28: Signal */
  &StateFlowGUI_B.IntegertoBitConverter[0],/* 29: Signal */
  &StateFlowGUI_B.DataTypeConversion8_f,/* 30: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive16_d,/* 31: Signal */
  &StateFlowGUI_B.IntegertoBitConverter_d[0],/* 32: Signal */
  &StateFlowGUI_B.y_i,                 /* 33: Signal */
  &StateFlowGUI_B.y_b,                 /* 34: Signal */
  &StateFlowGUI_B.y_f,                 /* 35: Signal */
  &StateFlowGUI_B.DataTypeConversion24,/* 36: Signal */
  &StateFlowGUI_B.DataTypeConversion25,/* 37: Signal */
  &StateFlowGUI_B.DataTypeConversion26,/* 38: Signal */
  &StateFlowGUI_B.sf_AsseAconvbrac.pos_A_conv,/* 39: Signal */
  &StateFlowGUI_B.sf_AsseBconvbrac1.pos_B_conv,/* 40: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa.theta1,/* 41: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa.theta2,/* 42: Signal */
  &StateFlowGUI_B.theta1_p_i,          /* 43: Signal */
  &StateFlowGUI_B.theta2_p_p,          /* 44: Signal */
  &StateFlowGUI_B.x0_o,                /* 45: Signal */
  &StateFlowGUI_B.y0_e,                /* 46: Signal */
  &StateFlowGUI_B.Coppiatheta1vel,     /* 47: Signal */
  &StateFlowGUI_B.Coppiatheta2vel,     /* 48: Signal */
  &StateFlowGUI_B.Memory_h,            /* 49: Signal */
  &StateFlowGUI_B.Memory1,             /* 50: Signal */
  &StateFlowGUI_B.Sum,                 /* 51: Signal */
  &StateFlowGUI_B.Sum1,                /* 52: Signal */
  &StateFlowGUI_B.Sum12,               /* 53: Signal */
  &StateFlowGUI_B.Sum14,               /* 54: Signal */
  &StateFlowGUI_B.Sum17,               /* 55: Signal */
  &StateFlowGUI_B.Theta1Reale,         /* 56: Signal */
  &StateFlowGUI_B.theta2Reale,         /* 57: Signal */
  &StateFlowGUI_B.Sum4,                /* 58: Signal */
  &StateFlowGUI_B.Sum5,                /* 59: Signal */
  &StateFlowGUI_B.Sum6_n,              /* 60: Signal */
  &StateFlowGUI_B.Sum7_l,              /* 61: Signal */
  &StateFlowGUI_B.Sum8_f,              /* 62: Signal */
  &StateFlowGUI_B.DataTypeConversion3, /* 63: Signal */
  &StateFlowGUI_B.CoppiaAbracciasaturata,/* 64: Signal */
  &StateFlowGUI_B.Switch1_c,           /* 65: Signal */
  &StateFlowGUI_B.DataTypeConversion4, /* 66: Signal */
  &StateFlowGUI_B.CoppiaBbracciasaturata,/* 67: Signal */
  &StateFlowGUI_B.Switch1_i,           /* 68: Signal */
  &StateFlowGUI_B.ConvertA,            /* 69: Signal */
  &StateFlowGUI_B.Gain_m,              /* 70: Signal */
  &StateFlowGUI_B.Switch,              /* 71: Signal */
  &StateFlowGUI_B.ConvertB,            /* 72: Signal */
  &StateFlowGUI_B.CoppiaAvitesaturata, /* 73: Signal */
  &StateFlowGUI_B.Switch2,             /* 74: Signal */
  &StateFlowGUI_B.convert_g,           /* 75: Signal */
  &StateFlowGUI_B.convert10_d,         /* 76: Signal */
  &StateFlowGUI_B.MotorebracciaA,      /* 77: Signal */
  &StateFlowGUI_B.MotorebracciaB,      /* 78: Signal */
  &StateFlowGUI_B.convert,             /* 79: Signal */
  &StateFlowGUI_B.convert10,           /* 80: Signal */
  &StateFlowGUI_B.MotoreviteA,         /* 81: Signal */
  &StateFlowGUI_B.MotoreviteB,         /* 82: Signal */
  &StateFlowGUI_B.ldm_pos_n,           /* 83: Signal */
  &StateFlowGUI_B.ldm_vel_c,           /* 84: Signal */
  &StateFlowGUI_B.pos_B_conv,          /* 85: Signal */
  &StateFlowGUI_B.ldm_pos,             /* 86: Signal */
  &StateFlowGUI_B.ldm_vel,             /* 87: Signal */
  &StateFlowGUI_B.Gain2,               /* 88: Signal */
  &StateFlowGUI_B.Gain4,               /* 89: Signal */
  &StateFlowGUI_B.Sum1_m,              /* 90: Signal */
  &StateFlowGUI_B.Sum3,                /* 91: Signal */
  &StateFlowGUI_B.Sum4_l,              /* 92: Signal */
  &StateFlowGUI_B.Sum6,                /* 93: Signal */
  &StateFlowGUI_B.Sum7,                /* 94: Signal */
  &StateFlowGUI_B.Sum8,                /* 95: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa_k.theta1,/* 96: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa_k.theta2,/* 97: Signal */
  &StateFlowGUI_B.theta1_pp,           /* 98: Signal */
  &StateFlowGUI_B.theta2_pp,           /* 99: Signal */
  &StateFlowGUI_B.theta1_p,            /* 100: Signal */
  &StateFlowGUI_B.theta2_p,            /* 101: Signal */
  &StateFlowGUI_B.x_n,                 /* 102: Signal */
  &StateFlowGUI_B.y_k,                 /* 103: Signal */
  &StateFlowGUI_B.x_pp_f,              /* 104: Signal */
  &StateFlowGUI_B.y_pp_l,              /* 105: Signal */
  &StateFlowGUI_B.Cm1,                 /* 106: Signal */
  &StateFlowGUI_B.Cm2,                 /* 107: Signal */
  &StateFlowGUI_B.C1,                  /* 108: Signal */
  &StateFlowGUI_B.C2,                  /* 109: Signal */
  &StateFlowGUI_B.Mm[0],               /* 110: Signal */
  &StateFlowGUI_B.ntilde,              /* 111: Signal */
  &StateFlowGUI_B.xp,                  /* 112: Signal */
  &StateFlowGUI_B.yp,                  /* 113: Signal */
  &StateFlowGUI_B.csiH[0],             /* 114: Signal */
  &StateFlowGUI_B.phi,                 /* 115: Signal */
  &StateFlowGUI_B.rho,                 /* 116: Signal */
  &StateFlowGUI_B.omega[0],            /* 117: Signal */
  &StateFlowGUI_B.z[0],                /* 118: Signal */
  &StateFlowGUI_B.x_p,                 /* 119: Signal */
  &StateFlowGUI_B.y_p,                 /* 120: Signal */
  &StateFlowGUI_B.Gain_n,              /* 121: Signal */
  &StateFlowGUI_B.Gain1,               /* 122: Signal */
  &StateFlowGUI_B.Kd[0],               /* 123: Signal */
  &StateFlowGUI_B.Kd1[0],              /* 124: Signal */
  &StateFlowGUI_B.Kp1[0],              /* 125: Signal */
  &StateFlowGUI_B.Product[0],          /* 126: Signal */
  &StateFlowGUI_B.Sum_e,               /* 127: Signal */
  &StateFlowGUI_B.Ymov,                /* 128: Signal */
  &StateFlowGUI_B.Sum2_dc,             /* 129: Signal */
  &StateFlowGUI_B.Sum3_b,              /* 130: Signal */
  &StateFlowGUI_B.q[0],                /* 131: Signal */
  &StateFlowGUI_B.nphi,                /* 132: Signal */
  &StateFlowGUI_B.qdot[0],             /* 133: Signal */
  &StateFlowGUI_B.YRobusto[0],         /* 134: Signal */
  &StateFlowGUI_B.Y[0],                /* 135: Signal */
  &StateFlowGUI_B.DataTypeConversion6, /* 136: Signal */
  &StateFlowGUI_B.StatusWord,          /* 137: Signal */
  &StateFlowGUI_B.Sum2,                /* 138: Signal */
  &StateFlowGUI_B.Filter,              /* 139: Signal */
  &StateFlowGUI_B.Integrator,          /* 140: Signal */
  &StateFlowGUI_B.DerivativeGain,      /* 141: Signal */
  &StateFlowGUI_B.FilterCoefficient,   /* 142: Signal */
  &StateFlowGUI_B.IntegralGain,        /* 143: Signal */
  &StateFlowGUI_B.ProportionalGain,    /* 144: Signal */
  &StateFlowGUI_B.Sum_h,               /* 145: Signal */
  &StateFlowGUI_B.SumD,                /* 146: Signal */
  &StateFlowGUI_B.Filter_d,            /* 147: Signal */
  &StateFlowGUI_B.Integrator_d,        /* 148: Signal */
  &StateFlowGUI_B.DerivativeGain_b,    /* 149: Signal */
  &StateFlowGUI_B.FilterCoefficient_g, /* 150: Signal */
  &StateFlowGUI_B.IntegralGain_f,      /* 151: Signal */
  &StateFlowGUI_B.ProportionalGain_p,  /* 152: Signal */
  &StateFlowGUI_B.Sum_n,               /* 153: Signal */
  &StateFlowGUI_B.SumD_e,              /* 154: Signal */
  &StateFlowGUI_B.xct_a,               /* 155: Signal */
  &StateFlowGUI_B.yct_g,               /* 156: Signal */
  &StateFlowGUI_B.xct_p_l,             /* 157: Signal */
  &StateFlowGUI_B.yct_p_i,             /* 158: Signal */
  &StateFlowGUI_B.xc_k,                /* 159: Signal */
  &StateFlowGUI_B.yc_g,                /* 160: Signal */
  &StateFlowGUI_B.xc_p_c,              /* 161: Signal */
  &StateFlowGUI_B.yc_p_f,              /* 162: Signal */
  &StateFlowGUI_B.xq_pg,               /* 163: Signal */
  &StateFlowGUI_B.yq_o,                /* 164: Signal */
  &StateFlowGUI_B.xq_p_h,              /* 165: Signal */
  &StateFlowGUI_B.yq_p_e,              /* 166: Signal */
  &StateFlowGUI_B.x_o,                 /* 167: Signal */
  &StateFlowGUI_B.y_j,                 /* 168: Signal */
  &StateFlowGUI_B.x_p_n,               /* 169: Signal */
  &StateFlowGUI_B.y_p_h,               /* 170: Signal */
  &StateFlowGUI_B.xs_pl,               /* 171: Signal */
  &StateFlowGUI_B.ys_j,                /* 172: Signal */
  &StateFlowGUI_B.xs_p_e,              /* 173: Signal */
  &StateFlowGUI_B.ys_p_e,              /* 174: Signal */
  &StateFlowGUI_B.MultiportSwitch[0],  /* 175: Signal */
  &StateFlowGUI_B.sf_VelAsseAconv.vel_A_conv,/* 176: Signal */
  &StateFlowGUI_B.sf_VelAsseBconv.vel_B_conv,/* 177: Signal */
  &StateFlowGUI_B.VelocityA,           /* 178: Signal */
  &StateFlowGUI_B.VelocityB,           /* 179: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14,/* 180: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15,/* 181: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_e.y,/* 182: Signal */
  &StateFlowGUI_B.DataTypeConversion14,/* 183: Signal */
  &StateFlowGUI_B.Memory,              /* 184: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9, /* 185: Signal */
  &StateFlowGUI_B.Switch1,             /* 186: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_a.y,/* 187: Signal */
  &StateFlowGUI_B.DataTypeConversion14_g,/* 188: Signal */
  &StateFlowGUI_B.Memory_g,            /* 189: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9_h,/* 190: Signal */
  &StateFlowGUI_B.Switch1_l,           /* 191: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_f.y,/* 192: Signal */
  &StateFlowGUI_B.DataTypeConversion14_k,/* 193: Signal */
  &StateFlowGUI_B.Memory_n,            /* 194: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9_hd,/* 195: Signal */
  &StateFlowGUI_B.Switch1_f,           /* 196: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_fb.y,/* 197: Signal */
  &StateFlowGUI_B.DataTypeConversion14_h,/* 198: Signal */
  &StateFlowGUI_B.Memory_d,            /* 199: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9_m,/* 200: Signal */
  &StateFlowGUI_B.Switch1_h,           /* 201: Signal */
  &StateFlowGUI_B.Sum_p,               /* 202: Signal */
  &StateFlowGUI_B.Sum2_m,              /* 203: Signal */
  &StateFlowGUI_B.Gain,                /* 204: Signal */
  &StateFlowGUI_B.Gain6,               /* 205: Signal */
  &StateFlowGUI_B.Sum9,                /* 206: Signal */
  &StateFlowGUI_B.Diff,                /* 207: Signal */
  &StateFlowGUI_B.TSamp,               /* 208: Signal */
  &StateFlowGUI_B.Uk1,                 /* 209: Signal */
  &StateFlowGUI_B.vel_A_conv_d,        /* 210: Signal */
  &StateFlowGUI_B.vel_B_conv_d,        /* 211: Signal */
  &StateFlowGUI_B.VelocityA_b,         /* 212: Signal */
  &StateFlowGUI_B.VelocityB_d,         /* 213: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14_j,/* 214: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15_k,/* 215: Signal */
  &StateFlowGUI_B.Sum2_d,              /* 216: Signal */
  &StateFlowGUI_B.xct,                 /* 217: Signal */
  &StateFlowGUI_B.yct,                 /* 218: Signal */
  &StateFlowGUI_B.xct_p,               /* 219: Signal */
  &StateFlowGUI_B.yct_p,               /* 220: Signal */
  &StateFlowGUI_B.xct_pp,              /* 221: Signal */
  &StateFlowGUI_B.yct_pp,              /* 222: Signal */
  &StateFlowGUI_B.xc,                  /* 223: Signal */
  &StateFlowGUI_B.yc,                  /* 224: Signal */
  &StateFlowGUI_B.xc_p,                /* 225: Signal */
  &StateFlowGUI_B.yc_p,                /* 226: Signal */
  &StateFlowGUI_B.xc_pp,               /* 227: Signal */
  &StateFlowGUI_B.yc_pp,               /* 228: Signal */
  &StateFlowGUI_B.xq,                  /* 229: Signal */
  &StateFlowGUI_B.yq,                  /* 230: Signal */
  &StateFlowGUI_B.xq_p,                /* 231: Signal */
  &StateFlowGUI_B.yq_p,                /* 232: Signal */
  &StateFlowGUI_B.xq_pp,               /* 233: Signal */
  &StateFlowGUI_B.yq_pp,               /* 234: Signal */
  &StateFlowGUI_B.x,                   /* 235: Signal */
  &StateFlowGUI_B.y,                   /* 236: Signal */
  &StateFlowGUI_B.x_p_l,               /* 237: Signal */
  &StateFlowGUI_B.y_p_o,               /* 238: Signal */
  &StateFlowGUI_B.x_pp,                /* 239: Signal */
  &StateFlowGUI_B.y_pp,                /* 240: Signal */
  &StateFlowGUI_B.xs,                  /* 241: Signal */
  &StateFlowGUI_B.ys,                  /* 242: Signal */
  &StateFlowGUI_B.xs_p,                /* 243: Signal */
  &StateFlowGUI_B.ys_p,                /* 244: Signal */
  &StateFlowGUI_B.xs_pp,               /* 245: Signal */
  &StateFlowGUI_B.ys_pp,               /* 246: Signal */
  &StateFlowGUI_B.MultiportSwitch_i[0],/* 247: Signal */
  &StateFlowGUI_B.x0,                  /* 248: Signal */
  &StateFlowGUI_B.y0,                  /* 249: Signal */
  &StateFlowGUI_B.sf_AsseAconvbracc.pos_A_conv,/* 250: Signal */
  &StateFlowGUI_B.sf_AsseBconvbrac1_i.pos_B_conv,/* 251: Signal */
  &StateFlowGUI_B.DigitalClock,        /* 252: Signal */
  &StateFlowGUI_B.Sum12_i,             /* 253: Signal */
  &StateFlowGUI_B.Sum4_d,              /* 254: Signal */
  &StateFlowGUI_B.Sum7_n,              /* 255: Signal */
  &StateFlowGUI_B.Sum9_n,              /* 256: Signal */
  &StateFlowGUI_B.Gain_p,              /* 257: Signal */
  &StateFlowGUI_B.Gain_np,             /* 258: Signal */
  &StateFlowGUI_B.sf_VelAsseAconv_a.vel_A_conv,/* 259: Signal */
  &StateFlowGUI_B.sf_VelAsseBconv_d.vel_B_conv,/* 260: Signal */
  &StateFlowGUI_B.VelocityA_o,         /* 261: Signal */
  &StateFlowGUI_B.VelocityB_f,         /* 262: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14_b,/* 263: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15_d,/* 264: Signal */
  &StateFlowGUI_B.vel_A_conv,          /* 265: Signal */
  &StateFlowGUI_B.vel_B_conv,          /* 266: Signal */
  &StateFlowGUI_B.VelocityA_g,         /* 267: Signal */
  &StateFlowGUI_B.VelocityB_c,         /* 268: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14_k,/* 269: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15_i,/* 270: Signal */
  &StateFlowGUI_B.CA,                  /* 271: Signal */
  &StateFlowGUI_B.CB,                  /* 272: Signal */
  &StateFlowGUI_B.CH,                  /* 273: Signal */
  &StateFlowGUI_B.Diff_l,              /* 274: Signal */
  &StateFlowGUI_B.TSamp_i,             /* 275: Signal */
  &StateFlowGUI_B.Uk1_p,               /* 276: Signal */
  &StateFlowGUI_B.pos_A_conv,          /* 277: Signal */
  &StateFlowGUI_B.pos_B_conv_v,        /* 278: Signal */
  &StateFlowGUI_B.Sum5_j,              /* 279: Signal */
  &StateFlowGUI_B.Diff_i,              /* 280: Signal */
  &StateFlowGUI_B.TSamp_n,             /* 281: Signal */
  &StateFlowGUI_B.Uk1_d,               /* 282: Signal */
  &StateFlowGUI_B.Diff_d,              /* 283: Signal */
  &StateFlowGUI_B.TSamp_h,             /* 284: Signal */
  &StateFlowGUI_B.Uk1_b,               /* 285: Signal */
  &StateFlowGUI_B.Diff_f,              /* 286: Signal */
  &StateFlowGUI_B.TSamp_e,             /* 287: Signal */
  &StateFlowGUI_B.Uk1_l,               /* 288: Signal */
  &StateFlowGUI_B.Diff_n,              /* 289: Signal */
  &StateFlowGUI_B.TSamp_nd,            /* 290: Signal */
  &StateFlowGUI_B.Uk1_ll,              /* 291: Signal */
  &StateFlowGUI_B.Diff_b,              /* 292: Signal */
  &StateFlowGUI_B.TSamp_f,             /* 293: Signal */
  &StateFlowGUI_B.Uk1_j,               /* 294: Signal */
  &StateFlowGUI_B.Diff_bt,             /* 295: Signal */
  &StateFlowGUI_B.TSamp_iq,            /* 296: Signal */
  &StateFlowGUI_B.Uk1_bl,              /* 297: Signal */
  &StateFlowGUI_B.Duk_h,               /* 298: Signal */
  &StateFlowGUI_B.x1k1_g,              /* 299: Signal */
  &StateFlowGUI_B.x2k1_n,              /* 300: Signal */
  &StateFlowGUI_B.yk_i,                /* 301: Signal */
  &StateFlowGUI_B.x1k_a,               /* 302: Signal */
  &StateFlowGUI_B.x2k_g,               /* 303: Signal */
  &StateFlowGUI_B.Duk,                 /* 304: Signal */
  &StateFlowGUI_B.x1k1,                /* 305: Signal */
  &StateFlowGUI_B.x2k1,                /* 306: Signal */
  &StateFlowGUI_B.yk,                  /* 307: Signal */
  &StateFlowGUI_B.x1k,                 /* 308: Signal */
  &StateFlowGUI_B.x2k,                 /* 309: Signal */
  &StateFlowGUI_B.Duk_n,               /* 310: Signal */
  &StateFlowGUI_B.x1k1_h,              /* 311: Signal */
  &StateFlowGUI_B.x2k1_h,              /* 312: Signal */
  &StateFlowGUI_B.yk_m,                /* 313: Signal */
  &StateFlowGUI_B.x1k_i,               /* 314: Signal */
  &StateFlowGUI_B.x2k_d,               /* 315: Signal */
  &StateFlowGUI_B.A11_p,               /* 316: Signal */
  &StateFlowGUI_B.A12_c,               /* 317: Signal */
  &StateFlowGUI_B.A21_h,               /* 318: Signal */
  &StateFlowGUI_B.A22_d,               /* 319: Signal */
  &StateFlowGUI_B.sum2_nk,             /* 320: Signal */
  &StateFlowGUI_B.sum3_e,              /* 321: Signal */
  &StateFlowGUI_B.B11_k,               /* 322: Signal */
  &StateFlowGUI_B.B21_l,               /* 323: Signal */
  &StateFlowGUI_B.C11_h,               /* 324: Signal */
  &StateFlowGUI_B.C12_e,               /* 325: Signal */
  &StateFlowGUI_B.sum2_k,              /* 326: Signal */
  &StateFlowGUI_B.A11,                 /* 327: Signal */
  &StateFlowGUI_B.A12,                 /* 328: Signal */
  &StateFlowGUI_B.A21,                 /* 329: Signal */
  &StateFlowGUI_B.A22,                 /* 330: Signal */
  &StateFlowGUI_B.sum2_n,              /* 331: Signal */
  &StateFlowGUI_B.sum3,                /* 332: Signal */
  &StateFlowGUI_B.B11,                 /* 333: Signal */
  &StateFlowGUI_B.B21,                 /* 334: Signal */
  &StateFlowGUI_B.C11,                 /* 335: Signal */
  &StateFlowGUI_B.C12,                 /* 336: Signal */
  &StateFlowGUI_B.sum2,                /* 337: Signal */
  &StateFlowGUI_B.A11_h,               /* 338: Signal */
  &StateFlowGUI_B.A12_g,               /* 339: Signal */
  &StateFlowGUI_B.A21_p,               /* 340: Signal */
  &StateFlowGUI_B.A22_j,               /* 341: Signal */
  &StateFlowGUI_B.sum2_e,              /* 342: Signal */
  &StateFlowGUI_B.sum3_b,              /* 343: Signal */
  &StateFlowGUI_B.B11_d,               /* 344: Signal */
  &StateFlowGUI_B.B21_h,               /* 345: Signal */
  &StateFlowGUI_B.C11_e,               /* 346: Signal */
  &StateFlowGUI_B.C12_m,               /* 347: Signal */
  &StateFlowGUI_B.sum2_ka,             /* 348: Signal */
  &StateFlowGUI_P.AlzataA_Value,       /* 349: Block Parameter */
  &StateFlowGUI_P.AlzataB_Value,       /* 350: Block Parameter */
  &StateFlowGUI_P.AsseAbraccia_Value,  /* 351: Block Parameter */
  &StateFlowGUI_P.AsseAvite_Value,     /* 352: Block Parameter */
  &StateFlowGUI_P.AsseBbraccia_Value,  /* 353: Block Parameter */
  &StateFlowGUI_P.AsseBvite_Value,     /* 354: Block Parameter */
  &StateFlowGUI_P.Kp_Value,            /* 355: Block Parameter */
  &StateFlowGUI_P.PeriodoA_Value,      /* 356: Block Parameter */
  &StateFlowGUI_P.PeriodoB_Value,      /* 357: Block Parameter */
  &StateFlowGUI_P.Reset_Value,         /* 358: Block Parameter */
  &StateFlowGUI_P.StartHome_Value,     /* 359: Block Parameter */
  &StateFlowGUI_P.StartRobot_Value,    /* 360: Block Parameter */
  &StateFlowGUI_P.StartWork_Value,     /* 361: Block Parameter */
  &StateFlowGUI_P.Stop_Value,          /* 362: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P1[0],/* 363: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P2,/* 364: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P3,/* 365: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P4,/* 366: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P5,/* 367: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P6,/* 368: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P7,/* 369: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P1[0],/* 370: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P2,/* 371: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P3,/* 372: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P4,/* 373: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P5,/* 374: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P6,/* 375: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P7,/* 376: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P1[0],/* 377: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P2,/* 378: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P3,/* 379: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P4,/* 380: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P5,/* 381: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P6,/* 382: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P7,/* 383: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P1[0],/* 384: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P2,/* 385: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P3,/* 386: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P4,/* 387: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P5,/* 388: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P6,/* 389: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P7,/* 390: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P1[0],/* 391: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P2,/* 392: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P3,/* 393: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P4,/* 394: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P5,/* 395: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P6,/* 396: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P7,/* 397: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P1_l[0],/* 398: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P2_n,/* 399: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P3_n,/* 400: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P4_l,/* 401: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P5_i,/* 402: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P6_f,/* 403: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P7_h,/* 404: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P1[0],    /* 405: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P2,       /* 406: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P3,       /* 407: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P4,       /* 408: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P5,       /* 409: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P6,       /* 410: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P7,       /* 411: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P1[0],     /* 412: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P2,        /* 413: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P3,        /* 414: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P4,        /* 415: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P5,        /* 416: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P6,        /* 417: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P7,        /* 418: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P1[0],     /* 419: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P2,        /* 420: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P3,        /* 421: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P4,        /* 422: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P5,        /* 423: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P6,        /* 424: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P7,        /* 425: Block Parameter */
  &StateFlowGUI_P.PIDController1_P,    /* 426: Mask Parameter */
  &StateFlowGUI_P.PIDController1_I,    /* 427: Mask Parameter */
  &StateFlowGUI_P.PIDController1_D,    /* 428: Mask Parameter */
  &StateFlowGUI_P.PIDController1_N,    /* 429: Mask Parameter */
  &StateFlowGUI_P.PIDController2_P,    /* 430: Mask Parameter */
  &StateFlowGUI_P.PIDController2_I,    /* 431: Mask Parameter */
  &StateFlowGUI_P.PIDController2_D,    /* 432: Mask Parameter */
  &StateFlowGUI_P.PIDController2_N,    /* 433: Mask Parameter */
  &StateFlowGUI_P.Constant_Value_e,    /* 434: Block Parameter */
  &StateFlowGUI_P.Constant1_Value,     /* 435: Block Parameter */
  &StateFlowGUI_P.selettore_Value,     /* 436: Block Parameter */
  &StateFlowGUI_P.Coppiatheta1vel_Gain,/* 437: Block Parameter */
  &StateFlowGUI_P.Coppiatheta2vel_Gain,/* 438: Block Parameter */
  &StateFlowGUI_P.Memory_X0_d,         /* 439: Block Parameter */
  &StateFlowGUI_P.Memory1_X0,          /* 440: Block Parameter */
  &StateFlowGUI_P.CoppiaAbracciasaturata_UpperSat,/* 441: Block Parameter */
  &StateFlowGUI_P.CoppiaAbracciasaturata_LowerSat,/* 442: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P1[0],/* 443: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P2,/* 444: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P3,/* 445: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P4,/* 446: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P5,/* 447: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P6,/* 448: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P7,/* 449: Block Parameter */
  &StateFlowGUI_P.Switch1_Threshold,   /* 450: Block Parameter */
  &StateFlowGUI_P.CoppiaBbracciasaturata_UpperSat,/* 451: Block Parameter */
  &StateFlowGUI_P.CoppiaBbracciasaturata_LowerSat,/* 452: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P1[0],/* 453: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P2,/* 454: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P3,/* 455: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P4,/* 456: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P5,/* 457: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P6,/* 458: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P7,/* 459: Block Parameter */
  &StateFlowGUI_P.Switch1_Threshold_f, /* 460: Block Parameter */
  &StateFlowGUI_P.Gain_Gain,           /* 461: Block Parameter */
  &StateFlowGUI_P.Torquesend_P1[0],    /* 462: Block Parameter */
  &StateFlowGUI_P.Torquesend_P2,       /* 463: Block Parameter */
  &StateFlowGUI_P.Torquesend_P3,       /* 464: Block Parameter */
  &StateFlowGUI_P.Torquesend_P4,       /* 465: Block Parameter */
  &StateFlowGUI_P.Torquesend_P5,       /* 466: Block Parameter */
  &StateFlowGUI_P.Torquesend_P6,       /* 467: Block Parameter */
  &StateFlowGUI_P.Torquesend_P7,       /* 468: Block Parameter */
  &StateFlowGUI_P.Switch_Threshold,    /* 469: Block Parameter */
  &StateFlowGUI_P.Constant1_Value_e,   /* 470: Block Parameter */
  &StateFlowGUI_P.CoppiaAvitesaturata_UpperSat,/* 471: Block Parameter */
  &StateFlowGUI_P.CoppiaAvitesaturata_LowerSat,/* 472: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P1[0],/* 473: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P2,/* 474: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P3,/* 475: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P4,/* 476: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P5,/* 477: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P6,/* 478: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P7,/* 479: Block Parameter */
  &StateFlowGUI_P.Switch2_Threshold,   /* 480: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P1[0],/* 481: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P2,   /* 482: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P3,   /* 483: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P4,   /* 484: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P5,   /* 485: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P6,   /* 486: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P7,   /* 487: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P1[0],/* 488: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P2,   /* 489: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P3,   /* 490: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P4,   /* 491: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P5,   /* 492: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P6,   /* 493: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P7,   /* 494: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P1[0],   /* 495: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P2,      /* 496: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P3,      /* 497: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P4,      /* 498: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P5,      /* 499: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P6,      /* 500: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P7,      /* 501: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P1[0],   /* 502: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P2,      /* 503: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P3,      /* 504: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P4,      /* 505: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P5,      /* 506: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P6,      /* 507: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P7,      /* 508: Block Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB_ICPrevScale,/* 509: Mask Parameter */
  &StateFlowGUI_P.Gain2_Gain,          /* 510: Block Parameter */
  &StateFlowGUI_P.Gain4_Gain,          /* 511: Block Parameter */
  &StateFlowGUI_P.selettore_Value_p,   /* 512: Block Parameter */
  &StateFlowGUI_P.Gain_Gain_j,         /* 513: Block Parameter */
  &StateFlowGUI_P.Gain1_Gain,          /* 514: Block Parameter */
  &StateFlowGUI_P.Kd_Gain,             /* 515: Block Parameter */
  &StateFlowGUI_P.Kd1_Gain,            /* 516: Block Parameter */
  &StateFlowGUI_P.Kp1_Gain,            /* 517: Block Parameter */
  &StateFlowGUI_P.StatusWord_P1[0],    /* 518: Block Parameter */
  &StateFlowGUI_P.StatusWord_P2,       /* 519: Block Parameter */
  &StateFlowGUI_P.StatusWord_P3,       /* 520: Block Parameter */
  &StateFlowGUI_P.StatusWord_P4,       /* 521: Block Parameter */
  &StateFlowGUI_P.StatusWord_P5,       /* 522: Block Parameter */
  &StateFlowGUI_P.StatusWord_P6,       /* 523: Block Parameter */
  &StateFlowGUI_P.StatusWord_P7,       /* 524: Block Parameter */
  &StateFlowGUI_P.Filter_gainval,      /* 525: Block Parameter */
  &StateFlowGUI_P.Filter_IC,           /* 526: Block Parameter */
  &StateFlowGUI_P.Integrator_gainval,  /* 527: Block Parameter */
  &StateFlowGUI_P.Integrator_IC,       /* 528: Block Parameter */
  &StateFlowGUI_P.Filter_gainval_m,    /* 529: Block Parameter */
  &StateFlowGUI_P.Filter_IC_b,         /* 530: Block Parameter */
  &StateFlowGUI_P.Integrator_gainval_o,/* 531: Block Parameter */
  &StateFlowGUI_P.Integrator_IC_f,     /* 532: Block Parameter */
  &StateFlowGUI_P.AlzataC_Value,       /* 533: Block Parameter */
  &StateFlowGUI_P.AlzataC1_Value,      /* 534: Block Parameter */
  &StateFlowGUI_P.AlzataQ_Value,       /* 535: Block Parameter */
  &StateFlowGUI_P.Constant3_Value,     /* 536: Block Parameter */
  &StateFlowGUI_P.Ngiri_Value,         /* 537: Block Parameter */
  &StateFlowGUI_P.Periodo_Value,       /* 538: Block Parameter */
  &StateFlowGUI_P.PeriodoC_Value,      /* 539: Block Parameter */
  &StateFlowGUI_P.PeriodoC1_Value,     /* 540: Block Parameter */
  &StateFlowGUI_P.PeriodoQ_Value,      /* 541: Block Parameter */
  &StateFlowGUI_P.Rmax_Value,          /* 542: Block Parameter */
  &StateFlowGUI_P.Rmin_Value,          /* 543: Block Parameter */
  &StateFlowGUI_P.Tempospostiniziale_Value,/* 544: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1[0],/* 545: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2,/* 546: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3,/* 547: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4,/* 548: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5,/* 549: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6,/* 550: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7,/* 551: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1[0],/* 552: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2,/* 553: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3,/* 554: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4,/* 555: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5,/* 556: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6,/* 557: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7,/* 558: Block Parameter */
  &StateFlowGUI_P.Constant_Value,      /* 559: Block Parameter */
  &StateFlowGUI_P.Memory_X0,           /* 560: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1[0],/* 561: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2,/* 562: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3,/* 563: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4,/* 564: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5,/* 565: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6,/* 566: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7,/* 567: Block Parameter */
  &StateFlowGUI_P.Constant_Value_l,    /* 568: Block Parameter */
  &StateFlowGUI_P.Memory_X0_m,         /* 569: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1_g[0],/* 570: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2_p,/* 571: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3_f,/* 572: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4_a,/* 573: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5_d,/* 574: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6_c,/* 575: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7_a,/* 576: Block Parameter */
  &StateFlowGUI_P.Constant_Value_eg,   /* 577: Block Parameter */
  &StateFlowGUI_P.Memory_X0_o,         /* 578: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1_i[0],/* 579: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2_m,/* 580: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3_m,/* 581: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4_l,/* 582: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5_b,/* 583: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6_l,/* 584: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7_b,/* 585: Block Parameter */
  &StateFlowGUI_P.Constant_Value_p,    /* 586: Block Parameter */
  &StateFlowGUI_P.Memory_X0_a,         /* 587: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1_a[0],/* 588: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2_d,/* 589: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3_k,/* 590: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4_f,/* 591: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5_k,/* 592: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6_l4,/* 593: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7_j,/* 594: Block Parameter */
  &StateFlowGUI_P.DiscreteDerivativeA_ICPrevScale,/* 595: Mask Parameter */
  &StateFlowGUI_P.Gain_Gain_b,         /* 596: Block Parameter */
  &StateFlowGUI_P.Gain6_Gain,          /* 597: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt,          /* 598: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1_m[0],/* 599: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2_d,/* 600: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3_d,/* 601: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4_g,/* 602: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5_h,/* 603: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6_o,/* 604: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7_g,/* 605: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1_m[0],/* 606: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2_d,/* 607: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3_b,/* 608: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4_i,/* 609: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5_c,/* 610: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6_f,/* 611: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7_o,/* 612: Block Parameter */
  &StateFlowGUI_P.AlzataC_Value_p,     /* 613: Block Parameter */
  &StateFlowGUI_P.AlzataC1_Value_b,    /* 614: Block Parameter */
  &StateFlowGUI_P.AlzataQ_Value_p,     /* 615: Block Parameter */
  &StateFlowGUI_P.Constant3_Value_o,   /* 616: Block Parameter */
  &StateFlowGUI_P.Ngiri_Value_a,       /* 617: Block Parameter */
  &StateFlowGUI_P.Ngiri1_Value,        /* 618: Block Parameter */
  &StateFlowGUI_P.Ngiri2_Value,        /* 619: Block Parameter */
  &StateFlowGUI_P.Periodo_Value_e,     /* 620: Block Parameter */
  &StateFlowGUI_P.PeriodoC_Value_p,    /* 621: Block Parameter */
  &StateFlowGUI_P.PeriodoC1_Value_m,   /* 622: Block Parameter */
  &StateFlowGUI_P.PeriodoQ_Value_m,    /* 623: Block Parameter */
  &StateFlowGUI_P.Rmax_Value_n,        /* 624: Block Parameter */
  &StateFlowGUI_P.Rmax1_Value,         /* 625: Block Parameter */
  &StateFlowGUI_P.Rmin_Value_g,        /* 626: Block Parameter */
  &StateFlowGUI_P.Rmin1_Value,         /* 627: Block Parameter */
  &StateFlowGUI_P.Rmin2_Value,         /* 628: Block Parameter */
  &StateFlowGUI_P.Rmin3_Value,         /* 629: Block Parameter */
  &StateFlowGUI_P.Tempospostiniziale_Value_e,/* 630: Block Parameter */
  &StateFlowGUI_P.Constant_Value_b,    /* 631: Block Parameter */
  &StateFlowGUI_P.Constant1_Value_k,   /* 632: Block Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB_ICPrevSca_m,/* 633: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB1_ICPrevScal,/* 634: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB2_ICPrevScal,/* 635: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB3_ICPrevScal,/* 636: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB4_ICPrevScal,/* 637: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB5_ICPrevScal,/* 638: Mask Parameter */
  &StateFlowGUI_P.Constant4_Value,     /* 639: Block Parameter */
  &StateFlowGUI_P.Constant5_Value,     /* 640: Block Parameter */
  &StateFlowGUI_P.Gain_Gain_c,         /* 641: Block Parameter */
  &StateFlowGUI_P.Gain_Gain_d,         /* 642: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1_k[0],/* 643: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2_i,/* 644: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3_a,/* 645: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4_e,/* 646: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5_j,/* 647: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6_m,/* 648: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7_m,/* 649: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1_a[0],/* 650: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2_l,/* 651: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3_a,/* 652: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4_f,/* 653: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5_c5,/* 654: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6_g,/* 655: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7_m,/* 656: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1_md[0],/* 657: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2_g,/* 658: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3_d0,/* 659: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4_a,/* 660: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5_g,/* 661: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6_a,/* 662: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7_i,/* 663: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1_n[0],/* 664: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2_p,/* 665: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3_m,/* 666: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4_o,/* 667: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5_k,/* 668: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6_i,/* 669: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7_e,/* 670: Block Parameter */
  &StateFlowGUI_P.CA_Y0,               /* 671: Block Parameter */
  &StateFlowGUI_P.CB_Y0,               /* 672: Block Parameter */
  &StateFlowGUI_P.CH_Y0,               /* 673: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_g,        /* 674: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_e,        /* 675: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_gz,       /* 676: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_m,        /* 677: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_gh,       /* 678: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_d,        /* 679: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_p,        /* 680: Block Parameter */
  &StateFlowGUI_P.Duk_Gain_h,          /* 681: Block Parameter */
  &StateFlowGUI_P.Delay_x1_InitialCondition_l,/* 682: Block Parameter */
  &StateFlowGUI_P.Delay_x2_InitialCondition_l,/* 683: Block Parameter */
  &StateFlowGUI_P.Duk_Gain,            /* 684: Block Parameter */
  &StateFlowGUI_P.Delay_x1_InitialCondition,/* 685: Block Parameter */
  &StateFlowGUI_P.Delay_x2_InitialCondition,/* 686: Block Parameter */
  &StateFlowGUI_P.Duk_Gain_g,          /* 687: Block Parameter */
  &StateFlowGUI_P.Delay_x1_InitialCondition_n,/* 688: Block Parameter */
  &StateFlowGUI_P.Delay_x2_InitialCondition_e,/* 689: Block Parameter */
  &StateFlowGUI_P.A11_Gain_e,          /* 690: Block Parameter */
  &StateFlowGUI_P.A12_Gain_a,          /* 691: Block Parameter */
  &StateFlowGUI_P.A21_Gain_m,          /* 692: Block Parameter */
  &StateFlowGUI_P.A22_Gain_g,          /* 693: Block Parameter */
  &StateFlowGUI_P.B11_Gain_f,          /* 694: Block Parameter */
  &StateFlowGUI_P.B21_Gain_p,          /* 695: Block Parameter */
  &StateFlowGUI_P.C11_Gain_n,          /* 696: Block Parameter */
  &StateFlowGUI_P.C12_Gain_d,          /* 697: Block Parameter */
  &StateFlowGUI_P.A11_Gain,            /* 698: Block Parameter */
  &StateFlowGUI_P.A12_Gain,            /* 699: Block Parameter */
  &StateFlowGUI_P.A21_Gain,            /* 700: Block Parameter */
  &StateFlowGUI_P.A22_Gain,            /* 701: Block Parameter */
  &StateFlowGUI_P.B11_Gain,            /* 702: Block Parameter */
  &StateFlowGUI_P.B21_Gain,            /* 703: Block Parameter */
  &StateFlowGUI_P.C11_Gain,            /* 704: Block Parameter */
  &StateFlowGUI_P.C12_Gain,            /* 705: Block Parameter */
  &StateFlowGUI_P.A11_Gain_h,          /* 706: Block Parameter */
  &StateFlowGUI_P.A12_Gain_a3,         /* 707: Block Parameter */
  &StateFlowGUI_P.A21_Gain_f,          /* 708: Block Parameter */
  &StateFlowGUI_P.A22_Gain_d,          /* 709: Block Parameter */
  &StateFlowGUI_P.B11_Gain_n,          /* 710: Block Parameter */
  &StateFlowGUI_P.B21_Gain_l,          /* 711: Block Parameter */
  &StateFlowGUI_P.C11_Gain_g,          /* 712: Block Parameter */
  &StateFlowGUI_P.C12_Gain_d1,         /* 713: Block Parameter */
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
  { rtBlockSignals, 349,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 365,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1332903147U,
    3538053029U,
    1715916811U,
    2089516399U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  StateFlowGUI_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void StateFlowGUI_InitializeDataMapInfo(RT_MODEL_StateFlowGUI_T *const
  StateFlowGUI_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(StateFlowGUI_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(StateFlowGUI_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(StateFlowGUI_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(StateFlowGUI_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(StateFlowGUI_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  StateFlowGUI_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (StateFlowGUI_M);
  StateFlowGUI_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_StateFlowGUI_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(StateFlowGUI_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(StateFlowGUI_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(StateFlowGUI_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void StateFlowGUI_host_InitializeDataMapInfo(StateFlowGUI_host_DataMapInfo_T
    *dataMap, const char *path)
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

/* EOF: StateFlowGUI_capi.c */
