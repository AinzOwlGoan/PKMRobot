/*
 * State_Flow_vel_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "State_Flow_vel_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "State_Flow_vel.h"
#include "State_Flow_vel_capi.h"
#include "State_Flow_vel_private.h"
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
  { 0, 36, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 36, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 36, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 36, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 36, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 36, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 36, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 36, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 36, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 36, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 10, 36, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 11, 36, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 0 },

  { 20, 0, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Finecorsa Vite/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Finecorsa Vite/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 25, 0, TARGET_STRING("Finecorsa braccia/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Finecorsa braccia/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 28, 1, TARGET_STRING("LED Status/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("LED Status/Data Type Conversion24"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 32, 0, TARGET_STRING("LED Status/Data Type Conversion25"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 33, 0, TARGET_STRING("LED Status/Data Type Conversion26"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 34, 4, TARGET_STRING("Movimento Braccia/Asse A conv brac"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 5, TARGET_STRING("Movimento Braccia/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 6, TARGET_STRING("Movimento Braccia/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 6, TARGET_STRING("Movimento Braccia/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 38, 7, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 7, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 40, 8, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 8, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 42, 9, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 43, 9, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 44, 10, TARGET_STRING("Movimento Braccia/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 10, TARGET_STRING("Movimento Braccia/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 46, 10, TARGET_STRING("Movimento Braccia/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 47, 10, TARGET_STRING("Movimento Braccia/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 48, 11, TARGET_STRING("Movimento Braccia/Selettore/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 11, TARGET_STRING("Movimento Braccia/Selettore/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 50, 17, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 14, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Movimento Braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Movimento Braccia/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Movimento Braccia/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 0, TARGET_STRING("Movimento Braccia/Sum14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Movimento Braccia/Sum17"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Movimento Braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Movimento Braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Movimento Braccia/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Movimento Braccia/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Movimento Braccia/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 62, 17, TARGET_STRING("Movimento Braccia/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 63, 14, TARGET_STRING("Movimento Braccia/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Out Asse A Braccia/Data Type Conversion3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Out Asse A Braccia/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 15, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Out Asse B Braccia/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 18, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 71, 20, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 74, 25, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING("PosAtest /Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 0, TARGET_STRING("PosBtest /Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Posizione Braccia /convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Posizione Braccia /convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 81, 0, TARGET_STRING("Posizione Vite/convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 82, 0, TARGET_STRING("Posizione Vite/convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 84, 0, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 85, 29, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 29, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 87, 30, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 88, 31, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 31, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 90, 24, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 24, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 20, TARGET_STRING("Sistema Vite/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 0, TARGET_STRING("Sistema Vite/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 94, 24, TARGET_STRING("Sistema Vite/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 24, TARGET_STRING("Sistema Vite/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 24, TARGET_STRING("Sistema Vite/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 20, TARGET_STRING("Sistema Vite/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 99, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 100, 37, TARGET_STRING("Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 101, 38, TARGET_STRING("Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 102, 0, TARGET_STRING("Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 103, 0, TARGET_STRING("Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 104, 0, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 105, 0, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 106, 0, TARGET_STRING("Movimento Braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 113, 14, TARGET_STRING("Movimento Braccia/PID Controller1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 114, 0, TARGET_STRING("Movimento Braccia/PID Controller1/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 115, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 116, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 118, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 17, TARGET_STRING("Movimento Braccia/PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 0, TARGET_STRING("Movimento Braccia/PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 12, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 13, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 127, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 128, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Movimento Braccia/theta1deg/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 130, 0, TARGET_STRING("Movimento Braccia/theta1err/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Movimento Braccia/theta2deg/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 132, 0, TARGET_STRING("Movimento Braccia/theta2err/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 133, 16, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 134, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 135, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 138, 19, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 139, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 140, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 142, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 143, 23, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 144, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 145, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 146, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 147, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 148, 26, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 150, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 151, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 152, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 154, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 155, 20, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 156, 20, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 157, 20, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 158, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 159, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 160, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 161, 32, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 162, 33, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 163, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 164, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 165, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 166, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 167, 34, TARGET_STRING("State flow robot/Homing/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 168, 34, TARGET_STRING("State flow robot/Homing/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 169, 34, TARGET_STRING("State flow robot/Homing/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 170, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 171, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 172, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 173, 27, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 174, 28, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 175, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 176, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 177, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 178, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 179, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 180, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 181, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 182, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 183, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 184, TARGET_STRING("Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 185, TARGET_STRING("Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 186, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 187, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 188, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 189, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 190, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 191, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 192, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 193, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 194, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 195, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 196, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 197, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 198, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 199, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 200, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 201, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 202, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 203, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 204, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 205, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 206, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 207, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 208, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 209, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 210, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 211, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 212, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 213, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 214, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 215, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 216, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 217, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 218, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 219, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 220, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 221, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 222, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 223, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 224, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 225, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 226, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 227, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 228, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 229, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 230, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 231, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 232, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 233, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 234, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 235, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 236, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 237, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 238, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 239, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 240, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 241, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 242, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 243, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 244, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 245, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 246, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 247, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 248, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 249, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 250, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 251, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 252, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 253, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 254, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 255, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 256, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 257, TARGET_STRING("Movimento Braccia/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 258, TARGET_STRING("Movimento Braccia/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 259, TARGET_STRING("Movimento Braccia/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 260, TARGET_STRING("Movimento Braccia/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 261, TARGET_STRING("Movimento Braccia/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 262, TARGET_STRING("Movimento Braccia/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 263, TARGET_STRING("Movimento Braccia/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 264, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 265, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 266, TARGET_STRING("Out Asse A Braccia/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 267, TARGET_STRING("Out Asse A Braccia/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 268, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 269, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 270, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 271, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 272, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 273, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 274, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 275, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 276, TARGET_STRING("Out Asse B Braccia/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 277, TARGET_STRING("Out Asse B Braccia/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 278, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 279, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 280, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 281, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 282, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 283, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 284, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 285, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 286, TARGET_STRING("Out asse A Vite/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 287, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 288, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 289, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 290, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 291, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 292, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 293, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 294, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 295, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 296, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 297, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 298, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 299, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 300, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 301, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 302, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 303, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 304, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 305, TARGET_STRING("PosAtest /Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 306, TARGET_STRING("PosBtest /Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 307, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 308, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 309, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 310, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 311, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 312, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 313, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 314, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 315, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 316, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 317, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 318, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 319, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 320, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 321, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 322, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 323, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 324, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 325, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 326, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 327, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 328, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 329, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 330, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 331, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 332, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 333, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 334, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 335, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 336, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 337, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 338, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 339, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 340, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 341, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 342, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 343, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 344, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 345, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 346, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 347, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 348, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 349, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 350, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 351, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 352, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 353, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 354, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 355, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 356, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 357, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 358, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 359, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 360, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 361, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 362, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 363, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 364, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 365, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 366, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 367, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 368, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 369, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 370, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 371, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 372, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 373, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 374, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 375, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 376, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 377, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 378, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 379, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 380, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 381, TARGET_STRING("Movimento Braccia/theta1deg/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 382, TARGET_STRING("Movimento Braccia/theta1err/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 383, TARGET_STRING("Movimento Braccia/theta2deg/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 384, TARGET_STRING("Movimento Braccia/theta2err/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 385, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 386, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 387, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 388, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 389, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 390, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 391, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 392, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 393, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 394, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 395, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 396, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 397, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 398, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 399, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 400, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 401, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 402, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 403, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 404, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 405, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 406, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 407, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 408, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 409, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 410, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 411, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 412, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 413, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 414, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 415, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 416, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 417, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 418, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 419, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 420, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 421, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 422, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 423, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 424, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 425, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 426, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 427, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 428, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 429, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 430, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 431, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 432, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 433, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 434, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 435, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 436, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 437, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 438, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 439, TARGET_STRING("State flow robot/Homing/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 440, TARGET_STRING("State flow robot/Homing/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 441, TARGET_STRING("State flow robot/Homing/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 442, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

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
  &State_Flow_vel_B.Bool,              /* 0: Signal */
  &State_Flow_vel_B.OffT,              /* 1: Signal */
  &State_Flow_vel_B.CoppiaH,           /* 2: Signal */
  &State_Flow_vel_B.OffA_vite,         /* 3: Signal */
  &State_Flow_vel_B.OffB_vite,         /* 4: Signal */
  &State_Flow_vel_B.OffA,              /* 5: Signal */
  &State_Flow_vel_B.OffB,              /* 6: Signal */
  &State_Flow_vel_B.CoppiaA,           /* 7: Signal */
  &State_Flow_vel_B.CoppiaB,           /* 8: Signal */
  &State_Flow_vel_B.Luci,              /* 9: Signal */
  &State_Flow_vel_B.OffA_0,            /* 10: Signal */
  &State_Flow_vel_B.OffB_0,            /* 11: Signal */
  &State_Flow_vel_B.Clock,             /* 12: Signal */
  &State_Flow_vel_B.DataTypeConversion1,/* 13: Signal */
  &State_Flow_vel_B.DataTypeConversion2,/* 14: Signal */
  &State_Flow_vel_B.DataTypeConversion5,/* 15: Signal */
  &State_Flow_vel_B.DataTypeConversion7,/* 16: Signal */
  &State_Flow_vel_B.Gain,              /* 17: Signal */
  &State_Flow_vel_B.Gain1,             /* 18: Signal */
  &State_Flow_vel_B.EtherCATInit[0],   /* 19: Signal */
  &State_Flow_vel_B.Sum,               /* 20: Signal */
  &State_Flow_vel_B.Sum1,              /* 21: Signal */
  &State_Flow_vel_B.DataTypeConversion8,/* 22: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive16,/* 23: Signal */
  &State_Flow_vel_B.IntegertoBitConverter[0],/* 24: Signal */
  &State_Flow_vel_B.DataTypeConversion8_f,/* 25: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive16_d,/* 26: Signal */
  &State_Flow_vel_B.IntegertoBitConverter_d[0],/* 27: Signal */
  &State_Flow_vel_B.y_i,               /* 28: Signal */
  &State_Flow_vel_B.y_b,               /* 29: Signal */
  &State_Flow_vel_B.y_f,               /* 30: Signal */
  &State_Flow_vel_B.DataTypeConversion24,/* 31: Signal */
  &State_Flow_vel_B.DataTypeConversion25,/* 32: Signal */
  &State_Flow_vel_B.DataTypeConversion26,/* 33: Signal */
  &State_Flow_vel_B.pos_A_conv_e,      /* 34: Signal */
  &State_Flow_vel_B.pos_B_conv_k,      /* 35: Signal */
  &State_Flow_vel_B.x_i,               /* 36: Signal */
  &State_Flow_vel_B.y_m,               /* 37: Signal */
  &State_Flow_vel_B.theta1,            /* 38: Signal */
  &State_Flow_vel_B.theta2,            /* 39: Signal */
  &State_Flow_vel_B.theta1_p,          /* 40: Signal */
  &State_Flow_vel_B.theta2_p,          /* 41: Signal */
  &State_Flow_vel_B.x0,                /* 42: Signal */
  &State_Flow_vel_B.y0,                /* 43: Signal */
  &State_Flow_vel_B.xq,                /* 44: Signal */
  &State_Flow_vel_B.yq,                /* 45: Signal */
  &State_Flow_vel_B.xq_p,              /* 46: Signal */
  &State_Flow_vel_B.yq_p,              /* 47: Signal */
  &State_Flow_vel_B.x,                 /* 48: Signal */
  &State_Flow_vel_B.y,                 /* 49: Signal */
  &State_Flow_vel_B.Coppiatheta1vel,   /* 50: Signal */
  &State_Flow_vel_B.Coppiatheta2vel,   /* 51: Signal */
  &State_Flow_vel_B.Sum_e,             /* 52: Signal */
  &State_Flow_vel_B.Sum1_g,            /* 53: Signal */
  &State_Flow_vel_B.Sum12,             /* 54: Signal */
  &State_Flow_vel_B.Sum14,             /* 55: Signal */
  &State_Flow_vel_B.Sum17,             /* 56: Signal */
  &State_Flow_vel_B.Sum2_f,            /* 57: Signal */
  &State_Flow_vel_B.Sum3,              /* 58: Signal */
  &State_Flow_vel_B.Sum4,              /* 59: Signal */
  &State_Flow_vel_B.Sum5,              /* 60: Signal */
  &State_Flow_vel_B.Sum6,              /* 61: Signal */
  &State_Flow_vel_B.Sum7_l,            /* 62: Signal */
  &State_Flow_vel_B.Sum8_f,            /* 63: Signal */
  &State_Flow_vel_B.DataTypeConversion3,/* 64: Signal */
  &State_Flow_vel_B.Saturation,        /* 65: Signal */
  &State_Flow_vel_B.Switch1_c,         /* 66: Signal */
  &State_Flow_vel_B.DataTypeConversion4,/* 67: Signal */
  &State_Flow_vel_B.Saturation_e,      /* 68: Signal */
  &State_Flow_vel_B.Switch1_i,         /* 69: Signal */
  &State_Flow_vel_B.ConvertA,          /* 70: Signal */
  &State_Flow_vel_B.Gain_a,            /* 71: Signal */
  &State_Flow_vel_B.Switch,            /* 72: Signal */
  &State_Flow_vel_B.ConvertB,          /* 73: Signal */
  &State_Flow_vel_B.Switch2,           /* 74: Signal */
  &State_Flow_vel_B.Gain_h,            /* 75: Signal */
  &State_Flow_vel_B.Gain_n,            /* 76: Signal */
  &State_Flow_vel_B.convert_g,         /* 77: Signal */
  &State_Flow_vel_B.convert10_d,       /* 78: Signal */
  &State_Flow_vel_B.MotorebracciaA,    /* 79: Signal */
  &State_Flow_vel_B.MotorebracciaB,    /* 80: Signal */
  &State_Flow_vel_B.convert,           /* 81: Signal */
  &State_Flow_vel_B.convert10,         /* 82: Signal */
  &State_Flow_vel_B.MotoreviteA,       /* 83: Signal */
  &State_Flow_vel_B.MotoreviteB,       /* 84: Signal */
  &State_Flow_vel_B.sf_AsseB.ldm_pos,  /* 85: Signal */
  &State_Flow_vel_B.sf_AsseB.ldm_vel,  /* 86: Signal */
  &State_Flow_vel_B.pos_B_conv,        /* 87: Signal */
  &State_Flow_vel_B.sf_RifermentoAsseAVite.ldm_pos,/* 88: Signal */
  &State_Flow_vel_B.sf_RifermentoAsseAVite.ldm_vel,/* 89: Signal */
  &State_Flow_vel_B.Gain2,             /* 90: Signal */
  &State_Flow_vel_B.Gain4,             /* 91: Signal */
  &State_Flow_vel_B.Sum1_o,            /* 92: Signal */
  &State_Flow_vel_B.Sum3_o,            /* 93: Signal */
  &State_Flow_vel_B.Sum4_i,            /* 94: Signal */
  &State_Flow_vel_B.Sum6_f,            /* 95: Signal */
  &State_Flow_vel_B.Sum7,              /* 96: Signal */
  &State_Flow_vel_B.Sum8,              /* 97: Signal */
  &State_Flow_vel_B.DataTypeConversion6,/* 98: Signal */
  &State_Flow_vel_B.StatusWord,        /* 99: Signal */
  &State_Flow_vel_B.sf_VelAsseAconv.vel_A_conv,/* 100: Signal */
  &State_Flow_vel_B.sf_VelAsseBconv.vel_B_conv,/* 101: Signal */
  &State_Flow_vel_B.VelocityA,         /* 102: Signal */
  &State_Flow_vel_B.VelocityB,         /* 103: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive14,/* 104: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive15,/* 105: Signal */
  &State_Flow_vel_B.Sum2,              /* 106: Signal */
  &State_Flow_vel_B.Filter,            /* 107: Signal */
  &State_Flow_vel_B.Integrator,        /* 108: Signal */
  &State_Flow_vel_B.DerivativeGain,    /* 109: Signal */
  &State_Flow_vel_B.FilterCoefficient, /* 110: Signal */
  &State_Flow_vel_B.IntegralGain,      /* 111: Signal */
  &State_Flow_vel_B.ProportionalGain,  /* 112: Signal */
  &State_Flow_vel_B.Sum_h,             /* 113: Signal */
  &State_Flow_vel_B.SumD,              /* 114: Signal */
  &State_Flow_vel_B.Filter_d,          /* 115: Signal */
  &State_Flow_vel_B.Integrator_d,      /* 116: Signal */
  &State_Flow_vel_B.DerivativeGain_b,  /* 117: Signal */
  &State_Flow_vel_B.FilterCoefficient_g,/* 118: Signal */
  &State_Flow_vel_B.IntegralGain_f,    /* 119: Signal */
  &State_Flow_vel_B.ProportionalGain_p,/* 120: Signal */
  &State_Flow_vel_B.Sum_n,             /* 121: Signal */
  &State_Flow_vel_B.SumD_e,            /* 122: Signal */
  &State_Flow_vel_B.sf_VelAsseAconv_o.vel_A_conv,/* 123: Signal */
  &State_Flow_vel_B.sf_VelAsseBconv_o.vel_B_conv,/* 124: Signal */
  &State_Flow_vel_B.VelocityA_a,       /* 125: Signal */
  &State_Flow_vel_B.VelocityB_p,       /* 126: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive14_c,/* 127: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive15_l,/* 128: Signal */
  &State_Flow_vel_B.Gain_k,            /* 129: Signal */
  &State_Flow_vel_B.Gain_p,            /* 130: Signal */
  &State_Flow_vel_B.Gain_b,            /* 131: Signal */
  &State_Flow_vel_B.Gain_g,            /* 132: Signal */
  &State_Flow_vel_B.sf_MATLABFunction_e.y,/* 133: Signal */
  &State_Flow_vel_B.DataTypeConversion14,/* 134: Signal */
  &State_Flow_vel_B.Memory,            /* 135: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive9,/* 136: Signal */
  &State_Flow_vel_B.Switch1,           /* 137: Signal */
  &State_Flow_vel_B.sf_MATLABFunction_a.y,/* 138: Signal */
  &State_Flow_vel_B.DataTypeConversion14_g,/* 139: Signal */
  &State_Flow_vel_B.Memory_g,          /* 140: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive9_h,/* 141: Signal */
  &State_Flow_vel_B.Switch1_l,         /* 142: Signal */
  &State_Flow_vel_B.sf_MATLABFunction_f.y,/* 143: Signal */
  &State_Flow_vel_B.DataTypeConversion14_k,/* 144: Signal */
  &State_Flow_vel_B.Memory_n,          /* 145: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive9_hd,/* 146: Signal */
  &State_Flow_vel_B.Switch1_f,         /* 147: Signal */
  &State_Flow_vel_B.sf_MATLABFunction_i.y,/* 148: Signal */
  &State_Flow_vel_B.DataTypeConversion14_e,/* 149: Signal */
  &State_Flow_vel_B.Memory_a,          /* 150: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive9_d,/* 151: Signal */
  &State_Flow_vel_B.Switch1_k,         /* 152: Signal */
  &State_Flow_vel_B.Sum_i,             /* 153: Signal */
  &State_Flow_vel_B.Sum2_b,            /* 154: Signal */
  &State_Flow_vel_B.Gain_hw,           /* 155: Signal */
  &State_Flow_vel_B.Gain6,             /* 156: Signal */
  &State_Flow_vel_B.Sum9,              /* 157: Signal */
  &State_Flow_vel_B.Diff,              /* 158: Signal */
  &State_Flow_vel_B.TSamp,             /* 159: Signal */
  &State_Flow_vel_B.Uk1,               /* 160: Signal */
  &State_Flow_vel_B.vel_A_conv,        /* 161: Signal */
  &State_Flow_vel_B.vel_B_conv,        /* 162: Signal */
  &State_Flow_vel_B.VelocityA_m,       /* 163: Signal */
  &State_Flow_vel_B.VelocityB_h,       /* 164: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive14_l,/* 165: Signal */
  &State_Flow_vel_B.EtherCATPDOReceive15_e,/* 166: Signal */
  &State_Flow_vel_B.CA,                /* 167: Signal */
  &State_Flow_vel_B.CB,                /* 168: Signal */
  &State_Flow_vel_B.CH,                /* 169: Signal */
  &State_Flow_vel_B.Diff_i,            /* 170: Signal */
  &State_Flow_vel_B.TSamp_c,           /* 171: Signal */
  &State_Flow_vel_B.Uk1_f,             /* 172: Signal */
  &State_Flow_vel_B.pos_A_conv,        /* 173: Signal */
  &State_Flow_vel_B.pos_B_conv_v,      /* 174: Signal */
  &State_Flow_vel_B.Sum5_h,            /* 175: Signal */
  &State_Flow_vel_P.AlzataA_Value,     /* 176: Block Parameter */
  &State_Flow_vel_P.AlzataB_Value,     /* 177: Block Parameter */
  &State_Flow_vel_P.AsseAbraccia_Value,/* 178: Block Parameter */
  &State_Flow_vel_P.AsseAvite_Value,   /* 179: Block Parameter */
  &State_Flow_vel_P.AsseBbraccia_Value,/* 180: Block Parameter */
  &State_Flow_vel_P.AsseBvite_Value,   /* 181: Block Parameter */
  &State_Flow_vel_P.PeriodoA_Value,    /* 182: Block Parameter */
  &State_Flow_vel_P.PeriodoB_Value,    /* 183: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_a,       /* 184: Block Parameter */
  &State_Flow_vel_P.Gain1_Gain,        /* 185: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P1[0],/* 186: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P2,/* 187: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P3,/* 188: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P4,/* 189: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P5,/* 190: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P6,/* 191: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit3_P7,/* 192: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P1[0],/* 193: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P2,/* 194: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P3,/* 195: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P4,/* 196: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P5,/* 197: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P6,/* 198: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit4_P7,/* 199: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P1[0],/* 200: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P2,/* 201: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P3,/* 202: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P4,/* 203: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P5,/* 204: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P6,/* 205: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit5_P7,/* 206: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P1[0],/* 207: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P2,/* 208: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P3,/* 209: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P4,/* 210: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P5,/* 211: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P6,/* 212: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit6_P7,/* 213: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P1[0],/* 214: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P2,/* 215: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P3,/* 216: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P4,/* 217: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P5,/* 218: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P6,/* 219: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P7,/* 220: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P1_l[0],/* 221: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P2_n,/* 222: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P3_n,/* 223: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P4_l,/* 224: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P5_i,/* 225: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P6_f,/* 226: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive16_P7_h,/* 227: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P1[0],  /* 228: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P2,     /* 229: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P3,     /* 230: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P4,     /* 231: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P5,     /* 232: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P6,     /* 233: Block Parameter */
  &State_Flow_vel_P.LuceBianca_P7,     /* 234: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P1[0],   /* 235: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P2,      /* 236: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P3,      /* 237: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P4,      /* 238: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P5,      /* 239: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P6,      /* 240: Block Parameter */
  &State_Flow_vel_P.LuceRossa_P7,      /* 241: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P1[0],   /* 242: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P2,      /* 243: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P3,      /* 244: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P4,      /* 245: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P5,      /* 246: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P6,      /* 247: Block Parameter */
  &State_Flow_vel_P.LuceVerde_P7,      /* 248: Block Parameter */
  &State_Flow_vel_P.PIDController1_P,  /* 249: Mask Parameter */
  &State_Flow_vel_P.PIDController1_I,  /* 250: Mask Parameter */
  &State_Flow_vel_P.PIDController1_D,  /* 251: Mask Parameter */
  &State_Flow_vel_P.PIDController1_N,  /* 252: Mask Parameter */
  &State_Flow_vel_P.PIDController2_P,  /* 253: Mask Parameter */
  &State_Flow_vel_P.PIDController2_I,  /* 254: Mask Parameter */
  &State_Flow_vel_P.PIDController2_D,  /* 255: Mask Parameter */
  &State_Flow_vel_P.PIDController2_N,  /* 256: Mask Parameter */
  &State_Flow_vel_P.AlzataC_Value,     /* 257: Block Parameter */
  &State_Flow_vel_P.AlzataQ_Value,     /* 258: Block Parameter */
  &State_Flow_vel_P.Constant_Value_eg, /* 259: Block Parameter */
  &State_Flow_vel_P.Constant1_Value,   /* 260: Block Parameter */
  &State_Flow_vel_P.Constant2_Value,   /* 261: Block Parameter */
  &State_Flow_vel_P.PeriodoC_Value,    /* 262: Block Parameter */
  &State_Flow_vel_P.PeriodoQ_Value,    /* 263: Block Parameter */
  &State_Flow_vel_P.Coppiatheta1vel_Gain,/* 264: Block Parameter */
  &State_Flow_vel_P.Coppiatheta2vel_Gain,/* 265: Block Parameter */
  &State_Flow_vel_P.Saturation_UpperSat,/* 266: Block Parameter */
  &State_Flow_vel_P.Saturation_LowerSat,/* 267: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P1[0],/* 268: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P2,/* 269: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P3,/* 270: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P4,/* 271: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P5,/* 272: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P6,/* 273: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit1_P7,/* 274: Block Parameter */
  &State_Flow_vel_P.Switch1_Threshold, /* 275: Block Parameter */
  &State_Flow_vel_P.Saturation_UpperSat_m,/* 276: Block Parameter */
  &State_Flow_vel_P.Saturation_LowerSat_g,/* 277: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P1[0],/* 278: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P2,/* 279: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P3,/* 280: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P4,/* 281: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P5,/* 282: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P6,/* 283: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit7_P7,/* 284: Block Parameter */
  &State_Flow_vel_P.Switch1_Threshold_f,/* 285: Block Parameter */
  &State_Flow_vel_P.Constant_Value,    /* 286: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_j,       /* 287: Block Parameter */
  &State_Flow_vel_P.Torquesend_P1[0],  /* 288: Block Parameter */
  &State_Flow_vel_P.Torquesend_P2,     /* 289: Block Parameter */
  &State_Flow_vel_P.Torquesend_P3,     /* 290: Block Parameter */
  &State_Flow_vel_P.Torquesend_P4,     /* 291: Block Parameter */
  &State_Flow_vel_P.Torquesend_P5,     /* 292: Block Parameter */
  &State_Flow_vel_P.Torquesend_P6,     /* 293: Block Parameter */
  &State_Flow_vel_P.Torquesend_P7,     /* 294: Block Parameter */
  &State_Flow_vel_P.Switch_Threshold,  /* 295: Block Parameter */
  &State_Flow_vel_P.Constant1_Value_e, /* 296: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P1[0],/* 297: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P2,/* 298: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P3,/* 299: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P4,/* 300: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P5,/* 301: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P6,/* 302: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOTransmit2_P7,/* 303: Block Parameter */
  &State_Flow_vel_P.Switch2_Threshold, /* 304: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_m,       /* 305: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_m0,      /* 306: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P1[0],/* 307: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P2, /* 308: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P3, /* 309: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P4, /* 310: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P5, /* 311: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P6, /* 312: Block Parameter */
  &State_Flow_vel_P.MotorebracciaA_P7, /* 313: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P1[0],/* 314: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P2, /* 315: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P3, /* 316: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P4, /* 317: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P5, /* 318: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P6, /* 319: Block Parameter */
  &State_Flow_vel_P.MotorebracciaB_P7, /* 320: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P1[0], /* 321: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P2,    /* 322: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P3,    /* 323: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P4,    /* 324: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P5,    /* 325: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P6,    /* 326: Block Parameter */
  &State_Flow_vel_P.MotoreviteA_P7,    /* 327: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P1[0], /* 328: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P2,    /* 329: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P3,    /* 330: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P4,    /* 331: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P5,    /* 332: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P6,    /* 333: Block Parameter */
  &State_Flow_vel_P.MotoreviteB_P7,    /* 334: Block Parameter */
  &State_Flow_vel_P.DiscreteDerivativeB_ICPrevScale,/* 335: Mask Parameter */
  &State_Flow_vel_P.Gain2_Gain,        /* 336: Block Parameter */
  &State_Flow_vel_P.Gain4_Gain,        /* 337: Block Parameter */
  &State_Flow_vel_P.StatusWord_P1[0],  /* 338: Block Parameter */
  &State_Flow_vel_P.StatusWord_P2,     /* 339: Block Parameter */
  &State_Flow_vel_P.StatusWord_P3,     /* 340: Block Parameter */
  &State_Flow_vel_P.StatusWord_P4,     /* 341: Block Parameter */
  &State_Flow_vel_P.StatusWord_P5,     /* 342: Block Parameter */
  &State_Flow_vel_P.StatusWord_P6,     /* 343: Block Parameter */
  &State_Flow_vel_P.StatusWord_P7,     /* 344: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P1[0],/* 345: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P2,/* 346: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P3,/* 347: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P4,/* 348: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P5,/* 349: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P6,/* 350: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P7,/* 351: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P1[0],/* 352: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P2,/* 353: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P3,/* 354: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P4,/* 355: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P5,/* 356: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P6,/* 357: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P7,/* 358: Block Parameter */
  &State_Flow_vel_P.Filter_gainval,    /* 359: Block Parameter */
  &State_Flow_vel_P.Filter_IC,         /* 360: Block Parameter */
  &State_Flow_vel_P.Integrator_gainval,/* 361: Block Parameter */
  &State_Flow_vel_P.Integrator_IC,     /* 362: Block Parameter */
  &State_Flow_vel_P.Filter_gainval_m,  /* 363: Block Parameter */
  &State_Flow_vel_P.Filter_IC_b,       /* 364: Block Parameter */
  &State_Flow_vel_P.Integrator_gainval_o,/* 365: Block Parameter */
  &State_Flow_vel_P.Integrator_IC_f,   /* 366: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P1_k[0],/* 367: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P2_k,/* 368: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P3_m,/* 369: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P4_p,/* 370: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P5_i,/* 371: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P6_d,/* 372: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P7_g,/* 373: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P1_f[0],/* 374: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P2_c,/* 375: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P3_p,/* 376: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P4_i,/* 377: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P5_h,/* 378: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P6_h,/* 379: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P7_l,/* 380: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_l,       /* 381: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_f,       /* 382: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_jq,      /* 383: Block Parameter */
  &State_Flow_vel_P.Gain_Gain_k,       /* 384: Block Parameter */
  &State_Flow_vel_P.Constant_Value_j,  /* 385: Block Parameter */
  &State_Flow_vel_P.Memory_X0,         /* 386: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P1[0],/* 387: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P2,/* 388: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P3,/* 389: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P4,/* 390: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P5,/* 391: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P6,/* 392: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P7,/* 393: Block Parameter */
  &State_Flow_vel_P.Constant_Value_l,  /* 394: Block Parameter */
  &State_Flow_vel_P.Memory_X0_m,       /* 395: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P1_g[0],/* 396: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P2_p,/* 397: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P3_f,/* 398: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P4_a,/* 399: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P5_d,/* 400: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P6_c,/* 401: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P7_a,/* 402: Block Parameter */
  &State_Flow_vel_P.Constant_Value_e,  /* 403: Block Parameter */
  &State_Flow_vel_P.Memory_X0_o,       /* 404: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P1_i[0],/* 405: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P2_m,/* 406: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P3_m,/* 407: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P4_l,/* 408: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P5_b,/* 409: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P6_l,/* 410: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P7_b,/* 411: Block Parameter */
  &State_Flow_vel_P.Constant_Value_o,  /* 412: Block Parameter */
  &State_Flow_vel_P.Memory_X0_e,       /* 413: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P1_n[0],/* 414: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P2_d,/* 415: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P3_fe,/* 416: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P4_ag,/* 417: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P5_h,/* 418: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P6_h,/* 419: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive9_P7_l,/* 420: Block Parameter */
  &State_Flow_vel_P.DiscreteDerivativeA_ICPrevScale,/* 421: Mask Parameter */
  &State_Flow_vel_P.Gain_Gain,         /* 422: Block Parameter */
  &State_Flow_vel_P.Gain6_Gain,        /* 423: Block Parameter */
  &State_Flow_vel_P.TSamp_WtEt,        /* 424: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P1_n[0],/* 425: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P2_g,/* 426: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P3_n,/* 427: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P4_pd,/* 428: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P5_k,/* 429: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P6_m,/* 430: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive14_P7_gp,/* 431: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P1_l[0],/* 432: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P2_n,/* 433: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P3_i,/* 434: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P4_j,/* 435: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P5_l,/* 436: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P6_f,/* 437: Block Parameter */
  &State_Flow_vel_P.EtherCATPDOReceive15_P7_l1,/* 438: Block Parameter */
  &State_Flow_vel_P.CA_Y0,             /* 439: Block Parameter */
  &State_Flow_vel_P.CB_Y0,             /* 440: Block Parameter */
  &State_Flow_vel_P.CH_Y0,             /* 441: Block Parameter */
  &State_Flow_vel_P.TSamp_WtEt_n,      /* 442: Block Parameter */
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

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  16,                                  /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  43,                                  /* 7 */
  1,                                   /* 8 */
  41,                                  /* 9 */
  1,                                   /* 10 */
  24,                                  /* 11 */
  1,                                   /* 12 */
  38,                                  /* 13 */
  1,                                   /* 14 */
  47,                                  /* 15 */
  1,                                   /* 16 */
  37,                                  /* 17 */
  1,                                   /* 18 */
  23                                   /* 19 */
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
  { rtBlockSignals, 176,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 267,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 72873909U,
    391650847U,
    2100448515U,
    2836017504U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  State_Flow_vel_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void State_Flow_vel_InitializeDataMapInfo(RT_MODEL_State_Flow_vel_T *const
  State_Flow_vel_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(State_Flow_vel_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(State_Flow_vel_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(State_Flow_vel_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(State_Flow_vel_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(State_Flow_vel_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  State_Flow_vel_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (State_Flow_vel_M);
  State_Flow_vel_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_State_Flow_vel_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(State_Flow_vel_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(State_Flow_vel_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(State_Flow_vel_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void State_Flow_vel_host_InitializeDataMapInfo
    (State_Flow_vel_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: State_Flow_vel_capi.c */
