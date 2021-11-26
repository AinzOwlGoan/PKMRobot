/*
 * State_Flow_Test_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "State_Flow_Test".
 *
 * Model version              : 1.627
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Oct 25 12:48:35 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "State_Flow_Test_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "State_Flow_Test.h"
#include "State_Flow_Test_capi.h"
#include "State_Flow_Test_private.h"
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
  { 0, 54, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 54, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 54, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 54, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 54, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 54, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 54, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 54, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 54, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 54, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 10, 54, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Kp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 17, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 0 },

  { 18, 0, TARGET_STRING("Finecorsa Vite/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Finecorsa Vite/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 21, 0, TARGET_STRING("Finecorsa braccia/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Finecorsa braccia/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 24, 1, TARGET_STRING("LED Status/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("LED Status/Data Type Conversion24"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 28, 0, TARGET_STRING("LED Status/Data Type Conversion25"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 29, 0, TARGET_STRING("LED Status/Data Type Conversion26"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 30, 4, TARGET_STRING("Movimento/Cinematica Inversa/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 4, TARGET_STRING("Movimento/Cinematica Inversa/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 32, 5, TARGET_STRING("Movimento/Cinematica Inversa Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 5, TARGET_STRING("Movimento/Cinematica Inversa Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 34, 6, TARGET_STRING("Movimento/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 6, TARGET_STRING("Movimento/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 36, 7, TARGET_STRING("Movimento/Cinematica diretta/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 7, TARGET_STRING("Movimento/Cinematica diretta/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 38, 8, TARGET_STRING("Movimento/Cinematica diretta Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 8, TARGET_STRING("Movimento/Cinematica diretta Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 40, 9, TARGET_STRING("Movimento/Coppia motrice/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 9, TARGET_STRING("Movimento/Coppia motrice/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 42, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 44, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 1 },

  { 45, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p4"),
    TARGET_STRING(""), 3, 0, 3, 0, 1 },

  { 46, 16, TARGET_STRING("Movimento/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 16, TARGET_STRING("Movimento/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 48, 17, TARGET_STRING("Movimento/MATLAB Function1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 17, TARGET_STRING("Movimento/MATLAB Function1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 50, 18, TARGET_STRING("Movimento/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 51, 18, TARGET_STRING("Movimento/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 52, 19, TARGET_STRING("Movimento/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 19, TARGET_STRING("Movimento/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 54, 27, TARGET_STRING("Movimento/checkM"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 55, 0, TARGET_STRING("Movimento/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Movimento/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Movimento/Kd"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 58, 0, TARGET_STRING("Movimento/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 59, 0, TARGET_STRING("Movimento/Product"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 60, 0, TARGET_STRING("Movimento/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Movimento/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING("Movimento/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Movimento/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Movimento/Sum4"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 65, 0, TARGET_STRING("Movimento/Sum7"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 66, 0, TARGET_STRING("Movimento/Sum9"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 67, 28, TARGET_STRING("Movimento Braccia/Asse A conv brac"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 68, 29, TARGET_STRING("Movimento Braccia/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 69, 30, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 30, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 71, 31, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 31, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 73, 32, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 32, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING("Movimento Braccia/selettore"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING("Movimento Braccia/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Movimento Braccia/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Movimento Braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING("Movimento Braccia/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 0, TARGET_STRING("Movimento Braccia/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Movimento Braccia/Sum14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING("Movimento Braccia/Sum17"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 0, TARGET_STRING("Movimento Braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 0, TARGET_STRING("Movimento Braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING("Movimento Braccia/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 88, 0, TARGET_STRING("Movimento Braccia/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 0, TARGET_STRING("Movimento Braccia/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 0, TARGET_STRING("Movimento Braccia/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 0, TARGET_STRING("Movimento Braccia/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 0, TARGET_STRING("Out Asse A Braccia/Data Type Conversion3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 93, 0, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 35, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 96, 0, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 37, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 99, 39, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Out asse A Vite/Coppia A vite saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 40, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 103, 43, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Posizione Braccia /convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 105, 0, TARGET_STRING("Posizione Braccia /convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 106, 0, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 107, 0, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Posizione Vite/convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Posizione Vite/convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 111, 0, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 112, 47, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 113, 47, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 114, 48, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 115, 49, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 49, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 117, 42, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 118, 42, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 39, TARGET_STRING("Sistema Vite/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 0, TARGET_STRING("Sistema Vite/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 42, TARGET_STRING("Sistema Vite/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 42, TARGET_STRING("Sistema Vite/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 42, TARGET_STRING("Sistema Vite/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 124, 39, TARGET_STRING("Sistema Vite/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 125, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 127, 55, TARGET_STRING("Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 56, TARGET_STRING("Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 132, 0, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 133, 0, TARGET_STRING("Movimento/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 134, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 135, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 136, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 137, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 138, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 139, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 140, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 141, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 142, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 143, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 144, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 145, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 146, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 147, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 148, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 149, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 150, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 151, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 152, 14, TARGET_STRING("Movimento/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 153, 14, TARGET_STRING("Movimento/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 154, 14, TARGET_STRING("Movimento/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 155, 14, TARGET_STRING("Movimento/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 156, 14, TARGET_STRING("Movimento/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 157, 14, TARGET_STRING("Movimento/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 158, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 159, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 160, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 161, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 162, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 163, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 164, 0, TARGET_STRING("Movimento/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 165, 20, TARGET_STRING("Movimento/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 166, 20, TARGET_STRING("Movimento/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 167, 21, TARGET_STRING("Movimento/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 168, 22, TARGET_STRING("Movimento/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 169, 0, TARGET_STRING("Movimento/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 170, 0, TARGET_STRING("Movimento/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 171, 0, TARGET_STRING("Movimento/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 172, 0, TARGET_STRING("Movimento/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 173, 0, TARGET_STRING("Movimento/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 174, 23, TARGET_STRING("Movimento/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 175, 24, TARGET_STRING("Movimento/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 176, 0, TARGET_STRING("Movimento/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 177, 0, TARGET_STRING("Movimento/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 178, 0, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 179, 0, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 180, 25, TARGET_STRING("Movimento/Velocita vite 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 181, 26, TARGET_STRING("Movimento/Velocita vite 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 182, 0, TARGET_STRING("Movimento/Velocita vite 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 0, TARGET_STRING("Movimento/Velocita vite 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 0, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 185, 0, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 186, 0, TARGET_STRING("Movimento Braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 187, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 189, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 190, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 191, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 192, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 193, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 194, 0, TARGET_STRING("Movimento Braccia/PID Controller1/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 195, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 197, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 198, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 199, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 200, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 201, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 202, 0, TARGET_STRING("Movimento Braccia/PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 203, 33, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 34, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 205, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 206, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 208, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 209, 36, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 213, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 214, 38, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 216, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 218, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 219, 41, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 222, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 223, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 224, 44, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 225, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 227, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 228, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 229, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 230, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 231, 39, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 232, 39, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 233, 39, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 234, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 235, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 236, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 237, 50, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 238, 51, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 239, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 240, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 241, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 242, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 243, 52, TARGET_STRING("State flow robot/Homing/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 52, TARGET_STRING("State flow robot/Homing/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 245, 52, TARGET_STRING("State flow robot/Homing/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 247, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 248, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 249, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 250, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 257, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 258, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 261, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 264, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 267, 45, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 46, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 281, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 282, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 283, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 284, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 294, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 297, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 303, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 304, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 305, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 306, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 307, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 308, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 309, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 310, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 311, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 312, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 313, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 314, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 315, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 316, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 317, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 318, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 319, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 320, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 321, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 322, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 323, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 324, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 325, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 326, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 327, TARGET_STRING("Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 328, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 329, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 330, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 331, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 332, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 333, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 334, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 335, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 336, TARGET_STRING("EtherCAT PDO Transmit 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 337, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 338, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 339, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 340, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 341, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 342, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 343, TARGET_STRING("EtherCAT PDO Transmit 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 344, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 345, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 346, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 347, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 348, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 349, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 350, TARGET_STRING("EtherCAT PDO Transmit 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 351, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 352, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 353, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 354, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 355, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 356, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 357, TARGET_STRING("EtherCAT PDO Transmit 6"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 358, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 359, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 360, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 361, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 362, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 363, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 364, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 365, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P1"), 0, 6, 0 },

  { 366, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 367, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 368, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 369, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 370, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 371, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 372, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 373, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 374, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 375, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 376, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 377, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 378, TARGET_STRING("LED Status/Luce Bianca"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 379, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 380, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 381, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 382, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 383, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 384, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 385, TARGET_STRING("LED Status/Luce Rossa "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 386, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P1"), 0, 7, 0 },

  { 387, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 388, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 389, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 390, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 391, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 392, TARGET_STRING("LED Status/Luce Verde"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 393, TARGET_STRING("Movimento/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 394, TARGET_STRING("Movimento/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 395, TARGET_STRING("Movimento/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 396, TARGET_STRING("Movimento/Kd"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 397, TARGET_STRING("Movimento/Memory"),
    TARGET_STRING("X0"), 0, 3, 0 },

  { 398, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 399, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 400, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 401, TARGET_STRING("Movimento Braccia/PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 402, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 403, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 404, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 405, TARGET_STRING("Movimento Braccia/PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 406, TARGET_STRING("Movimento Braccia/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 407, TARGET_STRING("Movimento Braccia/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 408, TARGET_STRING("Movimento Braccia/selettore"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 409, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 410, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 411, TARGET_STRING("Movimento Braccia/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 412, TARGET_STRING("Movimento Braccia/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 413, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 414, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 415, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 416, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 417, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 418, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 419, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 420, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 421, TARGET_STRING("Out Asse A Braccia/EtherCAT PDO Transmit 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 422, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 423, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 424, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 425, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 426, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 427, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 428, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 429, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 430, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 431, TARGET_STRING("Out Asse B Braccia/EtherCAT PDO Transmit 7"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 432, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 433, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 434, TARGET_STRING("Out asse A Vite/Coppia A vite saturata"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 435, TARGET_STRING("Out asse A Vite/Coppia A vite saturata"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 436, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 437, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 438, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 439, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 440, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 441, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 442, TARGET_STRING("Out asse A Vite/Torque send"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 443, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 444, TARGET_STRING("Out asse B Vite/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 445, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 446, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 447, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 448, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 449, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 450, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 451, TARGET_STRING("Out asse B Vite/EtherCAT PDO Transmit 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 452, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 453, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 454, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 455, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 456, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 457, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 458, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 459, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 460, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 461, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 462, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 463, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 464, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 465, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 466, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 467, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 468, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 469, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 470, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 471, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 472, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 473, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 474, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 475, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 476, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 477, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 478, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 479, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 480, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 481, TARGET_STRING("Sistema Vite/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 482, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 483, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 484, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 485, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 486, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 487, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 488, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 489, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 490, TARGET_STRING("Status/Status Word"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 491, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 492, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 493, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 494, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 495, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 496, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 497, TARGET_STRING("Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 498, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 499, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 500, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 501, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 502, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 503, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 504, TARGET_STRING("Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 505, TARGET_STRING("Movimento/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 506, TARGET_STRING("Movimento/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 507, TARGET_STRING("Movimento/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 508, TARGET_STRING("Movimento/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 509, TARGET_STRING("Movimento/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 510, TARGET_STRING("Movimento/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 511, TARGET_STRING("Movimento/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Movimento/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("Movimento/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 514, TARGET_STRING("Movimento/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 515, TARGET_STRING("Movimento/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 516, TARGET_STRING("Movimento/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 517, TARGET_STRING("Movimento/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 518, TARGET_STRING("Movimento/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 519, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 520, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 521, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 522, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 523, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 524, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 525, TARGET_STRING("Movimento/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 526, TARGET_STRING("Movimento/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 527, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 528, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 529, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 530, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 531, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 532, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 533, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 534, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 535, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 536, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 537, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 538, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 539, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 540, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 541, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 542, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 543, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 544, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 545, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 546, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 547, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 548, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 549, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 550, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 551, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 552, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 553, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 554, TARGET_STRING("Movimento/Velocita vite 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 555, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 556, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 557, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 558, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 559, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 560, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 561, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 562, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 563, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 564, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 565, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 566, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 567, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 568, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 569, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 570, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 571, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 572, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 573, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 574, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 575, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 576, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 577, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 578, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 579, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 580, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 581, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 582, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 583, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 584, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 585, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 586, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 587, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 588, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 589, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 590, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 591, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 592, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 593, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 594, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 595, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 597, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 598, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 599, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 600, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 601, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 602, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 603, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 604, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 605, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 606, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 607, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 608, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 609, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 610, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 611, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 612, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 613, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 614, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 615, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 616, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 617, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 618, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 619, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 620, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 621, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 622, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 623, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 624, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 625, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 626, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 627, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 628, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 629, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 630, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 631, TARGET_STRING("State flow robot/Homing/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 632, TARGET_STRING("State flow robot/Homing/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 633, TARGET_STRING("State flow robot/Homing/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 634, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 635, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 636, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 637, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 638, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 639, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 640, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 641, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 642, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 643, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 644, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 645, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 646, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 647, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 648, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 649, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 650, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 651, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 652, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 653, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 654, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 655, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 656, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 657, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 658, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 659, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 660, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 661, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 662, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 663, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 664, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 665, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 666, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 667, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 668, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 669, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 670, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 671, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 672, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 673, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
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
  &State_Flow_Test_B.Bool,             /* 0: Signal */
  &State_Flow_Test_B.OffT,             /* 1: Signal */
  &State_Flow_Test_B.CoppiaH,          /* 2: Signal */
  &State_Flow_Test_B.OffA_vite,        /* 3: Signal */
  &State_Flow_Test_B.OffB_vite,        /* 4: Signal */
  &State_Flow_Test_B.OffA,             /* 5: Signal */
  &State_Flow_Test_B.OffB,             /* 6: Signal */
  &State_Flow_Test_B.CoppiaA,          /* 7: Signal */
  &State_Flow_Test_B.CoppiaB,          /* 8: Signal */
  &State_Flow_Test_B.Luci,             /* 9: Signal */
  &State_Flow_Test_B.Kp_a,             /* 10: Signal */
  &State_Flow_Test_B.Clock,            /* 11: Signal */
  &State_Flow_Test_B.Kp,               /* 12: Signal */
  &State_Flow_Test_B.DataTypeConversion1,/* 13: Signal */
  &State_Flow_Test_B.DataTypeConversion2,/* 14: Signal */
  &State_Flow_Test_B.DataTypeConversion5,/* 15: Signal */
  &State_Flow_Test_B.DataTypeConversion7,/* 16: Signal */
  &State_Flow_Test_B.EtherCATInit[0],  /* 17: Signal */
  &State_Flow_Test_B.DataTypeConversion8,/* 18: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive16,/* 19: Signal */
  &State_Flow_Test_B.IntegertoBitConverter[0],/* 20: Signal */
  &State_Flow_Test_B.DataTypeConversion8_f,/* 21: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive16_d,/* 22: Signal */
  &State_Flow_Test_B.IntegertoBitConverter_d[0],/* 23: Signal */
  &State_Flow_Test_B.y_i,              /* 24: Signal */
  &State_Flow_Test_B.y_b,              /* 25: Signal */
  &State_Flow_Test_B.y_f,              /* 26: Signal */
  &State_Flow_Test_B.DataTypeConversion24,/* 27: Signal */
  &State_Flow_Test_B.DataTypeConversion25,/* 28: Signal */
  &State_Flow_Test_B.DataTypeConversion26,/* 29: Signal */
  &State_Flow_Test_B.sf_CinematicaInversa.theta1,/* 30: Signal */
  &State_Flow_Test_B.sf_CinematicaInversa.theta2,/* 31: Signal */
  &State_Flow_Test_B.theta1_pp,        /* 32: Signal */
  &State_Flow_Test_B.theta2_pp,        /* 33: Signal */
  &State_Flow_Test_B.sf_CinematicaInversavel.theta1_p,/* 34: Signal */
  &State_Flow_Test_B.sf_CinematicaInversavel.theta2_p,/* 35: Signal */
  &State_Flow_Test_B.x_n,              /* 36: Signal */
  &State_Flow_Test_B.y_k,              /* 37: Signal */
  &State_Flow_Test_B.x_pp_f,           /* 38: Signal */
  &State_Flow_Test_B.y_pp_l,           /* 39: Signal */
  &State_Flow_Test_B.Cm1,              /* 40: Signal */
  &State_Flow_Test_B.Cm2,              /* 41: Signal */
  &State_Flow_Test_B.C1,               /* 42: Signal */
  &State_Flow_Test_B.C2,               /* 43: Signal */
  &State_Flow_Test_B.Mm[0],            /* 44: Signal */
  &State_Flow_Test_B.K[0],             /* 45: Signal */
  &State_Flow_Test_B.sf_MATLABFunction_p.xp,/* 46: Signal */
  &State_Flow_Test_B.sf_MATLABFunction_p.yp,/* 47: Signal */
  &State_Flow_Test_B.xp,               /* 48: Signal */
  &State_Flow_Test_B.zp,               /* 49: Signal */
  &State_Flow_Test_B.sf_MATLABFunction2_i.xp,/* 50: Signal */
  &State_Flow_Test_B.sf_MATLABFunction2_i.yp,/* 51: Signal */
  &State_Flow_Test_B.x_p,              /* 52: Signal */
  &State_Flow_Test_B.y_p,              /* 53: Signal */
  &State_Flow_Test_B.mMin[0],          /* 54: Signal */
  &State_Flow_Test_B.Gain,             /* 55: Signal */
  &State_Flow_Test_B.Gain1,            /* 56: Signal */
  &State_Flow_Test_B.Kd[0],            /* 57: Signal */
  &State_Flow_Test_B.Memory_d[0],      /* 58: Signal */
  &State_Flow_Test_B.Product[0],       /* 59: Signal */
  &State_Flow_Test_B.Sum,              /* 60: Signal */
  &State_Flow_Test_B.Sum1,             /* 61: Signal */
  &State_Flow_Test_B.Sum2_d,           /* 62: Signal */
  &State_Flow_Test_B.Sum3_b,           /* 63: Signal */
  &State_Flow_Test_B.Sum4_n[0],        /* 64: Signal */
  &State_Flow_Test_B.Sum7_j[0],        /* 65: Signal */
  &State_Flow_Test_B.Sum9_a[0],        /* 66: Signal */
  &State_Flow_Test_B.pos_A_conv_e,     /* 67: Signal */
  &State_Flow_Test_B.sf_AsseBconvbrac1_f.pos_B_conv,/* 68: Signal */
  &State_Flow_Test_B.sf_CinematicaInversa_a.theta1,/* 69: Signal */
  &State_Flow_Test_B.sf_CinematicaInversa_a.theta2,/* 70: Signal */
  &State_Flow_Test_B.sf_CinematicaInversavel_l.theta1_p,/* 71: Signal */
  &State_Flow_Test_B.sf_CinematicaInversavel_l.theta2_p,/* 72: Signal */
  &State_Flow_Test_B.x0,               /* 73: Signal */
  &State_Flow_Test_B.y0,               /* 74: Signal */
  &State_Flow_Test_B.selettore,        /* 75: Signal */
  &State_Flow_Test_B.Coppiatheta1vel,  /* 76: Signal */
  &State_Flow_Test_B.Coppiatheta2vel,  /* 77: Signal */
  &State_Flow_Test_B.Memory_h,         /* 78: Signal */
  &State_Flow_Test_B.Memory1,          /* 79: Signal */
  &State_Flow_Test_B.Sum_e,            /* 80: Signal */
  &State_Flow_Test_B.Sum1_g,           /* 81: Signal */
  &State_Flow_Test_B.Sum12_a,          /* 82: Signal */
  &State_Flow_Test_B.Sum14,            /* 83: Signal */
  &State_Flow_Test_B.Sum17,            /* 84: Signal */
  &State_Flow_Test_B.Sum2_f,           /* 85: Signal */
  &State_Flow_Test_B.Sum3_l,           /* 86: Signal */
  &State_Flow_Test_B.Sum4_nw,          /* 87: Signal */
  &State_Flow_Test_B.Sum5_g,           /* 88: Signal */
  &State_Flow_Test_B.Sum6,             /* 89: Signal */
  &State_Flow_Test_B.Sum7_l,           /* 90: Signal */
  &State_Flow_Test_B.Sum8,             /* 91: Signal */
  &State_Flow_Test_B.DataTypeConversion3,/* 92: Signal */
  &State_Flow_Test_B.CoppiaAbracciasaturata,/* 93: Signal */
  &State_Flow_Test_B.Switch1_c,        /* 94: Signal */
  &State_Flow_Test_B.DataTypeConversion4,/* 95: Signal */
  &State_Flow_Test_B.CoppiaBbracciasaturata,/* 96: Signal */
  &State_Flow_Test_B.Switch1_i,        /* 97: Signal */
  &State_Flow_Test_B.ConvertA,         /* 98: Signal */
  &State_Flow_Test_B.Gain_a,           /* 99: Signal */
  &State_Flow_Test_B.CoppiaAvitesaturata,/* 100: Signal */
  &State_Flow_Test_B.Switch,           /* 101: Signal */
  &State_Flow_Test_B.ConvertB,         /* 102: Signal */
  &State_Flow_Test_B.Switch2,          /* 103: Signal */
  &State_Flow_Test_B.convert,          /* 104: Signal */
  &State_Flow_Test_B.convert10,        /* 105: Signal */
  &State_Flow_Test_B.MotorebracciaA,   /* 106: Signal */
  &State_Flow_Test_B.MotorebracciaB,   /* 107: Signal */
  &State_Flow_Test_B.convert_k,        /* 108: Signal */
  &State_Flow_Test_B.convert10_p,      /* 109: Signal */
  &State_Flow_Test_B.MotoreviteA,      /* 110: Signal */
  &State_Flow_Test_B.MotoreviteB,      /* 111: Signal */
  &State_Flow_Test_B.sf_AsseB.ldm_pos, /* 112: Signal */
  &State_Flow_Test_B.sf_AsseB.ldm_vel, /* 113: Signal */
  &State_Flow_Test_B.pos_B_conv,       /* 114: Signal */
  &State_Flow_Test_B.sf_RifermentoAsseAVite.ldm_pos,/* 115: Signal */
  &State_Flow_Test_B.sf_RifermentoAsseAVite.ldm_vel,/* 116: Signal */
  &State_Flow_Test_B.Gain2,            /* 117: Signal */
  &State_Flow_Test_B.Gain4,            /* 118: Signal */
  &State_Flow_Test_B.Sum1_o,           /* 119: Signal */
  &State_Flow_Test_B.Sum3,             /* 120: Signal */
  &State_Flow_Test_B.Sum4_i,           /* 121: Signal */
  &State_Flow_Test_B.Sum6_f,           /* 122: Signal */
  &State_Flow_Test_B.Sum7_i,           /* 123: Signal */
  &State_Flow_Test_B.Sum8_p,           /* 124: Signal */
  &State_Flow_Test_B.DataTypeConversion6,/* 125: Signal */
  &State_Flow_Test_B.StatusWord,       /* 126: Signal */
  &State_Flow_Test_B.sf_VelAsseAconv.vel_A_conv,/* 127: Signal */
  &State_Flow_Test_B.sf_VelAsseBconv.vel_B_conv,/* 128: Signal */
  &State_Flow_Test_B.VelocityA,        /* 129: Signal */
  &State_Flow_Test_B.VelocityB,        /* 130: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive14,/* 131: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive15,/* 132: Signal */
  &State_Flow_Test_B.Sum2,             /* 133: Signal */
  &State_Flow_Test_B.xct,              /* 134: Signal */
  &State_Flow_Test_B.yct,              /* 135: Signal */
  &State_Flow_Test_B.xct_p,            /* 136: Signal */
  &State_Flow_Test_B.yct_p,            /* 137: Signal */
  &State_Flow_Test_B.xct_pp,           /* 138: Signal */
  &State_Flow_Test_B.yct_pp,           /* 139: Signal */
  &State_Flow_Test_B.xc,               /* 140: Signal */
  &State_Flow_Test_B.yc,               /* 141: Signal */
  &State_Flow_Test_B.xc_p,             /* 142: Signal */
  &State_Flow_Test_B.yc_p,             /* 143: Signal */
  &State_Flow_Test_B.xc_pp,            /* 144: Signal */
  &State_Flow_Test_B.yc_pp,            /* 145: Signal */
  &State_Flow_Test_B.xq,               /* 146: Signal */
  &State_Flow_Test_B.yq,               /* 147: Signal */
  &State_Flow_Test_B.xq_p,             /* 148: Signal */
  &State_Flow_Test_B.yq_p,             /* 149: Signal */
  &State_Flow_Test_B.xq_pp,            /* 150: Signal */
  &State_Flow_Test_B.yq_pp,            /* 151: Signal */
  &State_Flow_Test_B.x,                /* 152: Signal */
  &State_Flow_Test_B.y,                /* 153: Signal */
  &State_Flow_Test_B.x_p_l,            /* 154: Signal */
  &State_Flow_Test_B.y_p_o,            /* 155: Signal */
  &State_Flow_Test_B.x_pp,             /* 156: Signal */
  &State_Flow_Test_B.y_pp,             /* 157: Signal */
  &State_Flow_Test_B.xs,               /* 158: Signal */
  &State_Flow_Test_B.ys,               /* 159: Signal */
  &State_Flow_Test_B.xs_p,             /* 160: Signal */
  &State_Flow_Test_B.ys_p,             /* 161: Signal */
  &State_Flow_Test_B.xs_pp,            /* 162: Signal */
  &State_Flow_Test_B.ys_pp,            /* 163: Signal */
  &State_Flow_Test_B.MultiportSwitch[0],/* 164: Signal */
  &State_Flow_Test_B.x0_l,             /* 165: Signal */
  &State_Flow_Test_B.y0_p,             /* 166: Signal */
  &State_Flow_Test_B.sf_AsseAconvbracc.pos_B_conv,/* 167: Signal */
  &State_Flow_Test_B.sf_AsseBconvbrac1.pos_B_conv,/* 168: Signal */
  &State_Flow_Test_B.DigitalClock,     /* 169: Signal */
  &State_Flow_Test_B.Sum12,            /* 170: Signal */
  &State_Flow_Test_B.Sum4,             /* 171: Signal */
  &State_Flow_Test_B.Sum7,             /* 172: Signal */
  &State_Flow_Test_B.Sum9,             /* 173: Signal */
  &State_Flow_Test_B.sf_VelAsseAconv_a.vel_A_conv,/* 174: Signal */
  &State_Flow_Test_B.sf_VelAsseBconv_d.vel_B_conv,/* 175: Signal */
  &State_Flow_Test_B.VelocityA_o,      /* 176: Signal */
  &State_Flow_Test_B.VelocityB_f,      /* 177: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive14_b,/* 178: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive15_d,/* 179: Signal */
  &State_Flow_Test_B.vel_A_conv_b,     /* 180: Signal */
  &State_Flow_Test_B.vel_B_conv_a,     /* 181: Signal */
  &State_Flow_Test_B.VelocityA_g,      /* 182: Signal */
  &State_Flow_Test_B.VelocityB_c,      /* 183: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive14_k,/* 184: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive15_i,/* 185: Signal */
  &State_Flow_Test_B.Sum2_bi,          /* 186: Signal */
  &State_Flow_Test_B.Filter,           /* 187: Signal */
  &State_Flow_Test_B.Integrator,       /* 188: Signal */
  &State_Flow_Test_B.DerivativeGain,   /* 189: Signal */
  &State_Flow_Test_B.FilterCoefficient,/* 190: Signal */
  &State_Flow_Test_B.IntegralGain,     /* 191: Signal */
  &State_Flow_Test_B.ProportionalGain, /* 192: Signal */
  &State_Flow_Test_B.Sum_h,            /* 193: Signal */
  &State_Flow_Test_B.SumD,             /* 194: Signal */
  &State_Flow_Test_B.Filter_d,         /* 195: Signal */
  &State_Flow_Test_B.Integrator_d,     /* 196: Signal */
  &State_Flow_Test_B.DerivativeGain_b, /* 197: Signal */
  &State_Flow_Test_B.FilterCoefficient_g,/* 198: Signal */
  &State_Flow_Test_B.IntegralGain_f,   /* 199: Signal */
  &State_Flow_Test_B.ProportionalGain_p,/* 200: Signal */
  &State_Flow_Test_B.Sum_n,            /* 201: Signal */
  &State_Flow_Test_B.SumD_e,           /* 202: Signal */
  &State_Flow_Test_B.sf_VelAsseAconv_o.vel_A_conv,/* 203: Signal */
  &State_Flow_Test_B.sf_VelAsseBconv_o.vel_B_conv,/* 204: Signal */
  &State_Flow_Test_B.VelocityA_a,      /* 205: Signal */
  &State_Flow_Test_B.VelocityB_p,      /* 206: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive14_c,/* 207: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive15_l,/* 208: Signal */
  &State_Flow_Test_B.sf_MATLABFunction_e.y,/* 209: Signal */
  &State_Flow_Test_B.DataTypeConversion14,/* 210: Signal */
  &State_Flow_Test_B.Memory,           /* 211: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive9,/* 212: Signal */
  &State_Flow_Test_B.Switch1,          /* 213: Signal */
  &State_Flow_Test_B.sf_MATLABFunction_a.y,/* 214: Signal */
  &State_Flow_Test_B.DataTypeConversion14_g,/* 215: Signal */
  &State_Flow_Test_B.Memory_g,         /* 216: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive9_h,/* 217: Signal */
  &State_Flow_Test_B.Switch1_l,        /* 218: Signal */
  &State_Flow_Test_B.sf_MATLABFunction_f.y,/* 219: Signal */
  &State_Flow_Test_B.DataTypeConversion14_k,/* 220: Signal */
  &State_Flow_Test_B.Memory_n,         /* 221: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive9_hd,/* 222: Signal */
  &State_Flow_Test_B.Switch1_f,        /* 223: Signal */
  &State_Flow_Test_B.sf_MATLABFunction_i.y,/* 224: Signal */
  &State_Flow_Test_B.DataTypeConversion14_e,/* 225: Signal */
  &State_Flow_Test_B.Memory_a,         /* 226: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive9_d,/* 227: Signal */
  &State_Flow_Test_B.Switch1_k,        /* 228: Signal */
  &State_Flow_Test_B.Sum_i,            /* 229: Signal */
  &State_Flow_Test_B.Sum2_b,           /* 230: Signal */
  &State_Flow_Test_B.Gain_h,           /* 231: Signal */
  &State_Flow_Test_B.Gain6,            /* 232: Signal */
  &State_Flow_Test_B.Sum9_d,           /* 233: Signal */
  &State_Flow_Test_B.Diff_c,           /* 234: Signal */
  &State_Flow_Test_B.TSamp_d,          /* 235: Signal */
  &State_Flow_Test_B.Uk1_h,            /* 236: Signal */
  &State_Flow_Test_B.vel_A_conv,       /* 237: Signal */
  &State_Flow_Test_B.vel_B_conv,       /* 238: Signal */
  &State_Flow_Test_B.VelocityA_m,      /* 239: Signal */
  &State_Flow_Test_B.VelocityB_h,      /* 240: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive14_l,/* 241: Signal */
  &State_Flow_Test_B.EtherCATPDOReceive15_e,/* 242: Signal */
  &State_Flow_Test_B.CA,               /* 243: Signal */
  &State_Flow_Test_B.CB,               /* 244: Signal */
  &State_Flow_Test_B.CH,               /* 245: Signal */
  &State_Flow_Test_B.Diff_i,           /* 246: Signal */
  &State_Flow_Test_B.TSamp_n,          /* 247: Signal */
  &State_Flow_Test_B.Uk1_d,            /* 248: Signal */
  &State_Flow_Test_B.Diff_d,           /* 249: Signal */
  &State_Flow_Test_B.TSamp_h,          /* 250: Signal */
  &State_Flow_Test_B.Uk1_b,            /* 251: Signal */
  &State_Flow_Test_B.Diff,             /* 252: Signal */
  &State_Flow_Test_B.TSamp,            /* 253: Signal */
  &State_Flow_Test_B.Uk1,              /* 254: Signal */
  &State_Flow_Test_B.Diff_n,           /* 255: Signal */
  &State_Flow_Test_B.TSamp_nd,         /* 256: Signal */
  &State_Flow_Test_B.Uk1_l,            /* 257: Signal */
  &State_Flow_Test_B.Diff_b,           /* 258: Signal */
  &State_Flow_Test_B.TSamp_f,          /* 259: Signal */
  &State_Flow_Test_B.Uk1_j,            /* 260: Signal */
  &State_Flow_Test_B.Diff_bt,          /* 261: Signal */
  &State_Flow_Test_B.TSamp_i,          /* 262: Signal */
  &State_Flow_Test_B.Uk1_bl,           /* 263: Signal */
  &State_Flow_Test_B.Diff_iq,          /* 264: Signal */
  &State_Flow_Test_B.TSamp_c,          /* 265: Signal */
  &State_Flow_Test_B.Uk1_f,            /* 266: Signal */
  &State_Flow_Test_B.pos_A_conv,       /* 267: Signal */
  &State_Flow_Test_B.pos_B_conv_v,     /* 268: Signal */
  &State_Flow_Test_B.Sum5,             /* 269: Signal */
  &State_Flow_Test_B.Duk_h,            /* 270: Signal */
  &State_Flow_Test_B.x1k1_g,           /* 271: Signal */
  &State_Flow_Test_B.x2k1_n,           /* 272: Signal */
  &State_Flow_Test_B.yk_i,             /* 273: Signal */
  &State_Flow_Test_B.x1k_a,            /* 274: Signal */
  &State_Flow_Test_B.x2k_g,            /* 275: Signal */
  &State_Flow_Test_B.Duk,              /* 276: Signal */
  &State_Flow_Test_B.x1k1,             /* 277: Signal */
  &State_Flow_Test_B.x2k1,             /* 278: Signal */
  &State_Flow_Test_B.yk,               /* 279: Signal */
  &State_Flow_Test_B.x1k,              /* 280: Signal */
  &State_Flow_Test_B.x2k,              /* 281: Signal */
  &State_Flow_Test_B.Duk_n,            /* 282: Signal */
  &State_Flow_Test_B.x1k1_h,           /* 283: Signal */
  &State_Flow_Test_B.x2k1_h,           /* 284: Signal */
  &State_Flow_Test_B.yk_m,             /* 285: Signal */
  &State_Flow_Test_B.x1k_i,            /* 286: Signal */
  &State_Flow_Test_B.x2k_d,            /* 287: Signal */
  &State_Flow_Test_B.A11_p,            /* 288: Signal */
  &State_Flow_Test_B.A12_c,            /* 289: Signal */
  &State_Flow_Test_B.A21_h,            /* 290: Signal */
  &State_Flow_Test_B.A22_d,            /* 291: Signal */
  &State_Flow_Test_B.sum2_nk,          /* 292: Signal */
  &State_Flow_Test_B.sum3_e,           /* 293: Signal */
  &State_Flow_Test_B.B11_k,            /* 294: Signal */
  &State_Flow_Test_B.B21_l,            /* 295: Signal */
  &State_Flow_Test_B.C11_h,            /* 296: Signal */
  &State_Flow_Test_B.C12_e,            /* 297: Signal */
  &State_Flow_Test_B.sum2_k,           /* 298: Signal */
  &State_Flow_Test_B.A11,              /* 299: Signal */
  &State_Flow_Test_B.A12,              /* 300: Signal */
  &State_Flow_Test_B.A21,              /* 301: Signal */
  &State_Flow_Test_B.A22,              /* 302: Signal */
  &State_Flow_Test_B.sum2_n,           /* 303: Signal */
  &State_Flow_Test_B.sum3,             /* 304: Signal */
  &State_Flow_Test_B.B11,              /* 305: Signal */
  &State_Flow_Test_B.B21,              /* 306: Signal */
  &State_Flow_Test_B.C11,              /* 307: Signal */
  &State_Flow_Test_B.C12,              /* 308: Signal */
  &State_Flow_Test_B.sum2,             /* 309: Signal */
  &State_Flow_Test_B.A11_h,            /* 310: Signal */
  &State_Flow_Test_B.A12_g,            /* 311: Signal */
  &State_Flow_Test_B.A21_p,            /* 312: Signal */
  &State_Flow_Test_B.A22_j,            /* 313: Signal */
  &State_Flow_Test_B.sum2_e,           /* 314: Signal */
  &State_Flow_Test_B.sum3_b,           /* 315: Signal */
  &State_Flow_Test_B.B11_d,            /* 316: Signal */
  &State_Flow_Test_B.B21_h,            /* 317: Signal */
  &State_Flow_Test_B.C11_e,            /* 318: Signal */
  &State_Flow_Test_B.C12_m,            /* 319: Signal */
  &State_Flow_Test_B.sum2_ka,          /* 320: Signal */
  &State_Flow_Test_P.AlzataA_Value,    /* 321: Block Parameter */
  &State_Flow_Test_P.AlzataB_Value,    /* 322: Block Parameter */
  &State_Flow_Test_P.AsseAbraccia_Value,/* 323: Block Parameter */
  &State_Flow_Test_P.AsseAvite_Value,  /* 324: Block Parameter */
  &State_Flow_Test_P.AsseBbraccia_Value,/* 325: Block Parameter */
  &State_Flow_Test_P.AsseBvite_Value,  /* 326: Block Parameter */
  &State_Flow_Test_P.Kp_Value,         /* 327: Block Parameter */
  &State_Flow_Test_P.PeriodoA_Value,   /* 328: Block Parameter */
  &State_Flow_Test_P.PeriodoB_Value,   /* 329: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P1[0],/* 330: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P2,/* 331: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P3,/* 332: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P4,/* 333: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P5,/* 334: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P6,/* 335: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit3_P7,/* 336: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P1[0],/* 337: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P2,/* 338: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P3,/* 339: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P4,/* 340: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P5,/* 341: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P6,/* 342: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit4_P7,/* 343: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P1[0],/* 344: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P2,/* 345: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P3,/* 346: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P4,/* 347: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P5,/* 348: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P6,/* 349: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit5_P7,/* 350: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P1[0],/* 351: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P2,/* 352: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P3,/* 353: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P4,/* 354: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P5,/* 355: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P6,/* 356: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit6_P7,/* 357: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P1[0],/* 358: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P2,/* 359: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P3,/* 360: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P4,/* 361: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P5,/* 362: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P6,/* 363: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P7,/* 364: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P1_l[0],/* 365: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P2_n,/* 366: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P3_n,/* 367: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P4_l,/* 368: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P5_i,/* 369: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P6_f,/* 370: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive16_P7_h,/* 371: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P1[0], /* 372: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P2,    /* 373: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P3,    /* 374: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P4,    /* 375: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P5,    /* 376: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P6,    /* 377: Block Parameter */
  &State_Flow_Test_P.LuceBianca_P7,    /* 378: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P1[0],  /* 379: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P2,     /* 380: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P3,     /* 381: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P4,     /* 382: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P5,     /* 383: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P6,     /* 384: Block Parameter */
  &State_Flow_Test_P.LuceRossa_P7,     /* 385: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P1[0],  /* 386: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P2,     /* 387: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P3,     /* 388: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P4,     /* 389: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P5,     /* 390: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P6,     /* 391: Block Parameter */
  &State_Flow_Test_P.LuceVerde_P7,     /* 392: Block Parameter */
  &State_Flow_Test_P.selettore_Value,  /* 393: Block Parameter */
  &State_Flow_Test_P.Gain_Gain_jp,     /* 394: Block Parameter */
  &State_Flow_Test_P.Gain1_Gain,       /* 395: Block Parameter */
  &State_Flow_Test_P.Kd_Gain,          /* 396: Block Parameter */
  &State_Flow_Test_P.Memory_X0_f[0],   /* 397: Block Parameter */
  &State_Flow_Test_P.PIDController1_P, /* 398: Mask Parameter */
  &State_Flow_Test_P.PIDController1_I, /* 399: Mask Parameter */
  &State_Flow_Test_P.PIDController1_D, /* 400: Mask Parameter */
  &State_Flow_Test_P.PIDController1_N, /* 401: Mask Parameter */
  &State_Flow_Test_P.PIDController2_P, /* 402: Mask Parameter */
  &State_Flow_Test_P.PIDController2_I, /* 403: Mask Parameter */
  &State_Flow_Test_P.PIDController2_D, /* 404: Mask Parameter */
  &State_Flow_Test_P.PIDController2_N, /* 405: Mask Parameter */
  &State_Flow_Test_P.Constant_Value_eg,/* 406: Block Parameter */
  &State_Flow_Test_P.Constant1_Value_f,/* 407: Block Parameter */
  &State_Flow_Test_P.selettore_Value_d,/* 408: Block Parameter */
  &State_Flow_Test_P.Coppiatheta1vel_Gain,/* 409: Block Parameter */
  &State_Flow_Test_P.Coppiatheta2vel_Gain,/* 410: Block Parameter */
  &State_Flow_Test_P.Memory_X0_d,      /* 411: Block Parameter */
  &State_Flow_Test_P.Memory1_X0,       /* 412: Block Parameter */
  &State_Flow_Test_P.CoppiaAbracciasaturata_UpperSat,/* 413: Block Parameter */
  &State_Flow_Test_P.CoppiaAbracciasaturata_LowerSat,/* 414: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P1[0],/* 415: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P2,/* 416: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P3,/* 417: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P4,/* 418: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P5,/* 419: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P6,/* 420: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit1_P7,/* 421: Block Parameter */
  &State_Flow_Test_P.Switch1_Threshold,/* 422: Block Parameter */
  &State_Flow_Test_P.CoppiaBbracciasaturata_UpperSat,/* 423: Block Parameter */
  &State_Flow_Test_P.CoppiaBbracciasaturata_LowerSat,/* 424: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P1[0],/* 425: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P2,/* 426: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P3,/* 427: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P4,/* 428: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P5,/* 429: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P6,/* 430: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit7_P7,/* 431: Block Parameter */
  &State_Flow_Test_P.Switch1_Threshold_f,/* 432: Block Parameter */
  &State_Flow_Test_P.Gain_Gain_j,      /* 433: Block Parameter */
  &State_Flow_Test_P.CoppiaAvitesaturata_UpperSat,/* 434: Block Parameter */
  &State_Flow_Test_P.CoppiaAvitesaturata_LowerSat,/* 435: Block Parameter */
  &State_Flow_Test_P.Torquesend_P1[0], /* 436: Block Parameter */
  &State_Flow_Test_P.Torquesend_P2,    /* 437: Block Parameter */
  &State_Flow_Test_P.Torquesend_P3,    /* 438: Block Parameter */
  &State_Flow_Test_P.Torquesend_P4,    /* 439: Block Parameter */
  &State_Flow_Test_P.Torquesend_P5,    /* 440: Block Parameter */
  &State_Flow_Test_P.Torquesend_P6,    /* 441: Block Parameter */
  &State_Flow_Test_P.Torquesend_P7,    /* 442: Block Parameter */
  &State_Flow_Test_P.Switch_Threshold, /* 443: Block Parameter */
  &State_Flow_Test_P.Constant1_Value_e,/* 444: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P1[0],/* 445: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P2,/* 446: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P3,/* 447: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P4,/* 448: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P5,/* 449: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P6,/* 450: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOTransmit2_P7,/* 451: Block Parameter */
  &State_Flow_Test_P.Switch2_Threshold,/* 452: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P1[0],/* 453: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P2,/* 454: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P3,/* 455: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P4,/* 456: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P5,/* 457: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P6,/* 458: Block Parameter */
  &State_Flow_Test_P.MotorebracciaA_P7,/* 459: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P1[0],/* 460: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P2,/* 461: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P3,/* 462: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P4,/* 463: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P5,/* 464: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P6,/* 465: Block Parameter */
  &State_Flow_Test_P.MotorebracciaB_P7,/* 466: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P1[0],/* 467: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P2,   /* 468: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P3,   /* 469: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P4,   /* 470: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P5,   /* 471: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P6,   /* 472: Block Parameter */
  &State_Flow_Test_P.MotoreviteA_P7,   /* 473: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P1[0],/* 474: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P2,   /* 475: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P3,   /* 476: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P4,   /* 477: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P5,   /* 478: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P6,   /* 479: Block Parameter */
  &State_Flow_Test_P.MotoreviteB_P7,   /* 480: Block Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB_ICPrevSca_f,/* 481: Mask Parameter */
  &State_Flow_Test_P.Gain2_Gain,       /* 482: Block Parameter */
  &State_Flow_Test_P.Gain4_Gain,       /* 483: Block Parameter */
  &State_Flow_Test_P.StatusWord_P1[0], /* 484: Block Parameter */
  &State_Flow_Test_P.StatusWord_P2,    /* 485: Block Parameter */
  &State_Flow_Test_P.StatusWord_P3,    /* 486: Block Parameter */
  &State_Flow_Test_P.StatusWord_P4,    /* 487: Block Parameter */
  &State_Flow_Test_P.StatusWord_P5,    /* 488: Block Parameter */
  &State_Flow_Test_P.StatusWord_P6,    /* 489: Block Parameter */
  &State_Flow_Test_P.StatusWord_P7,    /* 490: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P1[0],/* 491: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P2,/* 492: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P3,/* 493: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P4,/* 494: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P5,/* 495: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P6,/* 496: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P7,/* 497: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P1[0],/* 498: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P2,/* 499: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P3,/* 500: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P4,/* 501: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P5,/* 502: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P6,/* 503: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P7,/* 504: Block Parameter */
  &State_Flow_Test_P.AlzataC_Value,    /* 505: Block Parameter */
  &State_Flow_Test_P.AlzataC1_Value,   /* 506: Block Parameter */
  &State_Flow_Test_P.AlzataQ_Value,    /* 507: Block Parameter */
  &State_Flow_Test_P.Constant3_Value,  /* 508: Block Parameter */
  &State_Flow_Test_P.Ngiri_Value,      /* 509: Block Parameter */
  &State_Flow_Test_P.Periodo_Value,    /* 510: Block Parameter */
  &State_Flow_Test_P.PeriodoC_Value,   /* 511: Block Parameter */
  &State_Flow_Test_P.PeriodoC1_Value,  /* 512: Block Parameter */
  &State_Flow_Test_P.PeriodoQ_Value,   /* 513: Block Parameter */
  &State_Flow_Test_P.Rmax_Value,       /* 514: Block Parameter */
  &State_Flow_Test_P.Rmin_Value,       /* 515: Block Parameter */
  &State_Flow_Test_P.Tempospostiniziale_Value,/* 516: Block Parameter */
  &State_Flow_Test_P.Constant_Value_b, /* 517: Block Parameter */
  &State_Flow_Test_P.Constant1_Value,  /* 518: Block Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB_ICPrevScale,/* 519: Mask Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB1_ICPrevScal,/* 520: Mask Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB2_ICPrevScal,/* 521: Mask Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB3_ICPrevScal,/* 522: Mask Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB4_ICPrevScal,/* 523: Mask Parameter */
  &State_Flow_Test_P.DiscreteDerivativeB5_ICPrevScal,/* 524: Mask Parameter */
  &State_Flow_Test_P.Constant4_Value,  /* 525: Block Parameter */
  &State_Flow_Test_P.Constant5_Value,  /* 526: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P1_k[0],/* 527: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P2_i,/* 528: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P3_a,/* 529: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P4_e,/* 530: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P5_j,/* 531: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P6_m,/* 532: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P7_m,/* 533: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P1_a[0],/* 534: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P2_l,/* 535: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P3_a,/* 536: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P4_f,/* 537: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P5_c,/* 538: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P6_g,/* 539: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P7_m,/* 540: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P1_m[0],/* 541: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P2_g,/* 542: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P3_d,/* 543: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P4_a,/* 544: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P5_g,/* 545: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P6_a,/* 546: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P7_i,/* 547: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P1_n[0],/* 548: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P2_p,/* 549: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P3_m,/* 550: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P4_o,/* 551: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P5_k,/* 552: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P6_i,/* 553: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P7_e,/* 554: Block Parameter */
  &State_Flow_Test_P.Filter_gainval,   /* 555: Block Parameter */
  &State_Flow_Test_P.Filter_IC,        /* 556: Block Parameter */
  &State_Flow_Test_P.Integrator_gainval,/* 557: Block Parameter */
  &State_Flow_Test_P.Integrator_IC,    /* 558: Block Parameter */
  &State_Flow_Test_P.Filter_gainval_m, /* 559: Block Parameter */
  &State_Flow_Test_P.Filter_IC_b,      /* 560: Block Parameter */
  &State_Flow_Test_P.Integrator_gainval_o,/* 561: Block Parameter */
  &State_Flow_Test_P.Integrator_IC_f,  /* 562: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P1_kn[0],/* 563: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P2_k,/* 564: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P3_m,/* 565: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P4_p1,/* 566: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P5_i,/* 567: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P6_d,/* 568: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P7_gg,/* 569: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P1_f[0],/* 570: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P2_c,/* 571: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P3_p,/* 572: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P4_i,/* 573: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P5_h,/* 574: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P6_h,/* 575: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P7_lo,/* 576: Block Parameter */
  &State_Flow_Test_P.Constant_Value,   /* 577: Block Parameter */
  &State_Flow_Test_P.Memory_X0,        /* 578: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P1[0],/* 579: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P2,/* 580: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P3,/* 581: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P4,/* 582: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P5,/* 583: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P6,/* 584: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P7,/* 585: Block Parameter */
  &State_Flow_Test_P.Constant_Value_l, /* 586: Block Parameter */
  &State_Flow_Test_P.Memory_X0_m,      /* 587: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P1_g[0],/* 588: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P2_p,/* 589: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P3_f,/* 590: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P4_a,/* 591: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P5_d,/* 592: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P6_c,/* 593: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P7_a,/* 594: Block Parameter */
  &State_Flow_Test_P.Constant_Value_e, /* 595: Block Parameter */
  &State_Flow_Test_P.Memory_X0_o,      /* 596: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P1_i[0],/* 597: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P2_m,/* 598: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P3_m,/* 599: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P4_l,/* 600: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P5_b,/* 601: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P6_l,/* 602: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P7_b,/* 603: Block Parameter */
  &State_Flow_Test_P.Constant_Value_o, /* 604: Block Parameter */
  &State_Flow_Test_P.Memory_X0_e,      /* 605: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P1_n[0],/* 606: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P2_d,/* 607: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P3_fe,/* 608: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P4_ag,/* 609: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P5_h,/* 610: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P6_h,/* 611: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive9_P7_l,/* 612: Block Parameter */
  &State_Flow_Test_P.DiscreteDerivativeA_ICPrevScale,/* 613: Mask Parameter */
  &State_Flow_Test_P.Gain_Gain,        /* 614: Block Parameter */
  &State_Flow_Test_P.Gain6_Gain,       /* 615: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_l,     /* 616: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P1_n[0],/* 617: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P2_gr,/* 618: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P3_n,/* 619: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P4_p,/* 620: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P5_k,/* 621: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P6_mb,/* 622: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive14_P7_g,/* 623: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P1_l[0],/* 624: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P2_n,/* 625: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P3_i,/* 626: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P4_j,/* 627: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P5_l,/* 628: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P6_f,/* 629: Block Parameter */
  &State_Flow_Test_P.EtherCATPDOReceive15_P7_l,/* 630: Block Parameter */
  &State_Flow_Test_P.CA_Y0,            /* 631: Block Parameter */
  &State_Flow_Test_P.CB_Y0,            /* 632: Block Parameter */
  &State_Flow_Test_P.CH_Y0,            /* 633: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_e,     /* 634: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_g,     /* 635: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt,       /* 636: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_gh,    /* 637: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_d,     /* 638: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_p,     /* 639: Block Parameter */
  &State_Flow_Test_P.TSamp_WtEt_n,     /* 640: Block Parameter */
  &State_Flow_Test_P.Duk_Gain_h,       /* 641: Block Parameter */
  &State_Flow_Test_P.Delay_x1_InitialCondition_l,/* 642: Block Parameter */
  &State_Flow_Test_P.Delay_x2_InitialCondition_l,/* 643: Block Parameter */
  &State_Flow_Test_P.Duk_Gain,         /* 644: Block Parameter */
  &State_Flow_Test_P.Delay_x1_InitialCondition,/* 645: Block Parameter */
  &State_Flow_Test_P.Delay_x2_InitialCondition,/* 646: Block Parameter */
  &State_Flow_Test_P.Duk_Gain_g,       /* 647: Block Parameter */
  &State_Flow_Test_P.Delay_x1_InitialCondition_n,/* 648: Block Parameter */
  &State_Flow_Test_P.Delay_x2_InitialCondition_e,/* 649: Block Parameter */
  &State_Flow_Test_P.A11_Gain_e,       /* 650: Block Parameter */
  &State_Flow_Test_P.A12_Gain_a,       /* 651: Block Parameter */
  &State_Flow_Test_P.A21_Gain_m,       /* 652: Block Parameter */
  &State_Flow_Test_P.A22_Gain_g,       /* 653: Block Parameter */
  &State_Flow_Test_P.B11_Gain_f,       /* 654: Block Parameter */
  &State_Flow_Test_P.B21_Gain_p,       /* 655: Block Parameter */
  &State_Flow_Test_P.C11_Gain_n,       /* 656: Block Parameter */
  &State_Flow_Test_P.C12_Gain_d,       /* 657: Block Parameter */
  &State_Flow_Test_P.A11_Gain,         /* 658: Block Parameter */
  &State_Flow_Test_P.A12_Gain,         /* 659: Block Parameter */
  &State_Flow_Test_P.A21_Gain,         /* 660: Block Parameter */
  &State_Flow_Test_P.A22_Gain,         /* 661: Block Parameter */
  &State_Flow_Test_P.B11_Gain,         /* 662: Block Parameter */
  &State_Flow_Test_P.B21_Gain,         /* 663: Block Parameter */
  &State_Flow_Test_P.C11_Gain,         /* 664: Block Parameter */
  &State_Flow_Test_P.C12_Gain,         /* 665: Block Parameter */
  &State_Flow_Test_P.A11_Gain_h,       /* 666: Block Parameter */
  &State_Flow_Test_P.A12_Gain_a3,      /* 667: Block Parameter */
  &State_Flow_Test_P.A21_Gain_f,       /* 668: Block Parameter */
  &State_Flow_Test_P.A22_Gain_d,       /* 669: Block Parameter */
  &State_Flow_Test_P.B11_Gain_n,       /* 670: Block Parameter */
  &State_Flow_Test_P.B21_Gain_l,       /* 671: Block Parameter */
  &State_Flow_Test_P.C11_Gain_g,       /* 672: Block Parameter */
  &State_Flow_Test_P.C12_Gain_d1,      /* 673: Block Parameter */
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
  { rtBlockSignals, 321,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 353,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 207039027U,
    3333833521U,
    2351903190U,
    2220790646U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  State_Flow_Test_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void State_Flow_Test_InitializeDataMapInfo(RT_MODEL_State_Flow_Test_T *const
  State_Flow_Test_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(State_Flow_Test_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(State_Flow_Test_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(State_Flow_Test_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(State_Flow_Test_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(State_Flow_Test_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  State_Flow_Test_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (State_Flow_Test_M);
  State_Flow_Test_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_State_Flow_Test_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(State_Flow_Test_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(State_Flow_Test_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(State_Flow_Test_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void State_Flow_Test_host_InitializeDataMapInfo
    (State_Flow_Test_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: State_Flow_Test_capi.c */
