/*
 * StateFlowGUI_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.703
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Oct 29 15:13:07 2021
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
  { 0, 51, TARGET_STRING("State flow robot/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 51, TARGET_STRING("State flow robot/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 51, TARGET_STRING("State flow robot/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 51, TARGET_STRING("State flow robot/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 4, 51, TARGET_STRING("State flow robot/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 5, 51, TARGET_STRING("State flow robot/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 6, 51, TARGET_STRING("State flow robot/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 7, 51, TARGET_STRING("State flow robot/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 8, 51, TARGET_STRING("State flow robot/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 9, 51, TARGET_STRING("State flow robot/p10"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 10, 51, TARGET_STRING("State flow robot/p11"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 11, 51, TARGET_STRING("State flow robot/p12"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 12, 51, TARGET_STRING("State flow robot/p13"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 13, 51, TARGET_STRING("State flow robot/p14"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 14, 51, TARGET_STRING("State flow robot/p15"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Kp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("StartHome"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("StartRobot"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("StartWork"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Data Type Conversion5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Data Type Conversion7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 24, 0, TARGET_STRING("EtherCAT Init "),
    TARGET_STRING(""), 0, 2, 1, 0, 0 },

  { 25, 0, TARGET_STRING("Finecorsa Vite/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Finecorsa Vite/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Finecorsa Vite/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 28, 0, TARGET_STRING("Finecorsa braccia/Data Type Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Finecorsa braccia/EtherCAT PDO Receive16"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Finecorsa braccia/Integer to Bit Converter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 31, 1, TARGET_STRING("LED Status/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 2, TARGET_STRING("LED Status/MATLAB Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 3, TARGET_STRING("LED Status/MATLAB Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("LED Status/Data Type Conversion24"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 35, 0, TARGET_STRING("LED Status/Data Type Conversion25"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 36, 0, TARGET_STRING("LED Status/Data Type Conversion26"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 37, 4, TARGET_STRING("Movimento/Cinematica Inversa/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 4, TARGET_STRING("Movimento/Cinematica Inversa/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 39, 5, TARGET_STRING("Movimento/Cinematica Inversa Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 5, TARGET_STRING("Movimento/Cinematica Inversa Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 41, 6, TARGET_STRING("Movimento/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 6, TARGET_STRING("Movimento/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 43, 7, TARGET_STRING("Movimento/Cinematica diretta/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 7, TARGET_STRING("Movimento/Cinematica diretta/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 45, 8, TARGET_STRING("Movimento/Cinematica diretta Acc/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 8, TARGET_STRING("Movimento/Cinematica diretta Acc/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 47, 9, TARGET_STRING("Movimento/Coppia motrice/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 9, TARGET_STRING("Movimento/Coppia motrice/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 49, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 51, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 1 },

  { 52, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p4"),
    TARGET_STRING(""), 3, 0, 3, 0, 1 },

  { 53, 10, TARGET_STRING("Movimento/Dinamica Inversa1/p5"),
    TARGET_STRING(""), 4, 0, 3, 0, 1 },

  { 54, 16, TARGET_STRING("Movimento/MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 16, TARGET_STRING("Movimento/MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 56, 17, TARGET_STRING("Movimento/MATLAB Jin/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 17, TARGET_STRING("Movimento/MATLAB Jin/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Movimento/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Movimento/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING("Movimento/Kd"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 61, 0, TARGET_STRING("Movimento/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 62, 0, TARGET_STRING("Movimento/Product"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 63, 0, TARGET_STRING("Movimento/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Movimento/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Movimento/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Movimento/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Movimento/Sum4"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 68, 0, TARGET_STRING("Movimento/Sum7"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 69, 0, TARGET_STRING("Movimento/Sum9"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 70, 25, TARGET_STRING("Movimento Braccia/Asse A conv brac"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 26, TARGET_STRING("Movimento Braccia/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 27, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 27, TARGET_STRING("Movimento Braccia/Cinematica Inversa/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 74, 28, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 28, TARGET_STRING("Movimento Braccia/Cinematica Inversa vel/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 76, 29, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 29, TARGET_STRING("Movimento Braccia/Cinematica Inversa1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING("Movimento Braccia/selettore"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Movimento Braccia/Coppia theta 1 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 80, 0, TARGET_STRING("Movimento Braccia/Coppia theta 2 vel"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING("Movimento Braccia/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 82, 0, TARGET_STRING("Movimento Braccia/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Movimento Braccia/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING("Movimento Braccia/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 0, TARGET_STRING("Movimento Braccia/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 0, TARGET_STRING("Movimento Braccia/Sum14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 0, TARGET_STRING("Movimento Braccia/Sum17"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 0, TARGET_STRING("Movimento Braccia/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 89, 0, TARGET_STRING("Movimento Braccia/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 90, 0, TARGET_STRING("Movimento Braccia/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 91, 0, TARGET_STRING("Movimento Braccia/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 0, TARGET_STRING("Movimento Braccia/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 0, TARGET_STRING("Movimento Braccia/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING("Movimento Braccia/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Out Asse A Braccia/Data Type Conversion3"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 96, 0, TARGET_STRING("Out Asse A Braccia/Coppia A braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 32, TARGET_STRING("Out Asse A Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Out Asse B Braccia/Data Type Conversion4"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 99, 0, TARGET_STRING("Out Asse B Braccia/Coppia B braccia saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 34, TARGET_STRING("Out Asse B Braccia/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING("Out asse A Vite/Convert A"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 102, 36, TARGET_STRING("Out asse A Vite/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Out asse A Vite/Coppia A vite saturata"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 37, TARGET_STRING("Out asse A Vite/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 0, TARGET_STRING("Out asse B Vite/Convert B"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 106, 40, TARGET_STRING("Out asse B Vite/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Posizione Braccia /convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Posizione Braccia /convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 0, TARGET_STRING("Posizione Braccia /Motore braccia A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 110, 0, TARGET_STRING("Posizione Braccia /Motore braccia B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 111, 0, TARGET_STRING("Posizione Vite/convert"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 112, 0, TARGET_STRING("Posizione Vite/convert 10 "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 113, 0, TARGET_STRING("Posizione Vite/Motore vite A"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 114, 0, TARGET_STRING("Posizione Vite/Motore vite B"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 115, 44, TARGET_STRING("Sistema Vite/Asse B/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 44, TARGET_STRING("Sistema Vite/Asse B/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 117, 45, TARGET_STRING("Sistema Vite/Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 46, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 46, TARGET_STRING("Sistema Vite/Rifermento Asse A Vite/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 120, 39, TARGET_STRING("Sistema Vite/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 39, TARGET_STRING("Sistema Vite/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 36, TARGET_STRING("Sistema Vite/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 0, TARGET_STRING("Sistema Vite/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 39, TARGET_STRING("Sistema Vite/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 125, 39, TARGET_STRING("Sistema Vite/Sum6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 126, 39, TARGET_STRING("Sistema Vite/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 127, 36, TARGET_STRING("Sistema Vite/Sum8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 128, 0, TARGET_STRING("Status/Data Type Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Status/Status Word"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Movimento/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 131, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 132, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 133, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 134, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 135, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 136, 11, TARGET_STRING("Movimento/Leggi di moto/Cerchi Tangenti/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 137, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 138, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 139, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 140, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 141, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 142, 12, TARGET_STRING("Movimento/Leggi di moto/Cerchio/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 143, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 144, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 145, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 146, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 147, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 148, 13, TARGET_STRING("Movimento/Leggi di moto/Quadrato/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 149, 14, TARGET_STRING("Movimento/Leggi di moto/g/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 150, 14, TARGET_STRING("Movimento/Leggi di moto/g/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 151, 14, TARGET_STRING("Movimento/Leggi di moto/g/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 152, 14, TARGET_STRING("Movimento/Leggi di moto/g/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 153, 14, TARGET_STRING("Movimento/Leggi di moto/g/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 154, 14, TARGET_STRING("Movimento/Leggi di moto/g/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 155, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 156, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 157, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 158, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 159, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 160, 15, TARGET_STRING("Movimento/Leggi di moto/spirale/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 161, 0, TARGET_STRING("Movimento/Leggi di moto/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 162, 18, TARGET_STRING("Movimento/Pos iniziali/Cinematica Inversa2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 163, 18, TARGET_STRING("Movimento/Pos iniziali/Cinematica Inversa2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 164, 19, TARGET_STRING("Movimento/Posizioni/Asse A conv bracc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 165, 20, TARGET_STRING("Movimento/Posizioni/Asse B conv brac1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 166, 0, TARGET_STRING("Movimento/Posizioni/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 167, 0, TARGET_STRING("Movimento/Posizioni/Sum12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 168, 0, TARGET_STRING("Movimento/Posizioni/Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 169, 0, TARGET_STRING("Movimento/Posizioni/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 170, 0, TARGET_STRING("Movimento/Posizioni/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 171, 21, TARGET_STRING("Movimento/Velocita /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 172, 22, TARGET_STRING("Movimento/Velocita /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 173, 0, TARGET_STRING("Movimento/Velocita /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 174, 0, TARGET_STRING("Movimento/Velocita /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 175, 0, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 176, 0, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 177, 23, TARGET_STRING("Movimento/Velocita braccia 1/Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 178, 24, TARGET_STRING("Movimento/Velocita braccia 1/Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 179, 0, TARGET_STRING("Movimento/Velocita braccia 1/Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 180, 0, TARGET_STRING("Movimento/Velocita braccia 1/Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 181, 0, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 182, 0, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 183, 0, TARGET_STRING("Movimento Braccia/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 184, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 186, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 187, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 188, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 189, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 190, 0, TARGET_STRING("Movimento Braccia/PID Controller1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 191, 0, TARGET_STRING("Movimento Braccia/PID Controller1/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 192, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 194, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 195, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 196, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 197, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 198, 0, TARGET_STRING("Movimento Braccia/PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 199, 0, TARGET_STRING("Movimento Braccia/PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 200, 30, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 31, TARGET_STRING("Movimento Braccia/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 0, TARGET_STRING("Movimento Braccia/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 205, 0, TARGET_STRING(
    "Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 206, 33, TARGET_STRING("Out Asse A Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 209, 0, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 210, 0, TARGET_STRING("Out Asse A Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 211, 35, TARGET_STRING("Out Asse B Braccia/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 213, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 0, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 215, 0, TARGET_STRING("Out Asse B Braccia/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 216, 38, TARGET_STRING("Out asse A Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 0, TARGET_STRING("Out asse A Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 0, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 0, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 220, 0, TARGET_STRING("Out asse A Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 221, 41, TARGET_STRING("Out asse B Vite/Fungo/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 222, 0, TARGET_STRING("Out asse B Vite/Fungo/Data Type Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 223, 0, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 0, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 225, 0, TARGET_STRING("Out asse B Vite/Fungo/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 226, 0, TARGET_STRING("Sistema Vite/Actual A/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 227, 0, TARGET_STRING("Sistema Vite/Clock reale/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 228, 36, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 229, 36, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 230, 36, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Sum9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 231, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 232, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 233, 0, TARGET_STRING("Sistema Vite/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 234, 47, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 235, 48, TARGET_STRING("Sistema Vite/Velocita vite /Vel Asse B conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 236, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity A"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 237, 0, TARGET_STRING("Sistema Vite/Velocita vite /Velocity B"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 238, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 239, 0, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 240, 49, TARGET_STRING("State flow robot/Homing/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 241, 49, TARGET_STRING("State flow robot/Homing/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 242, 49, TARGET_STRING("State flow robot/Homing/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 243, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 245, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 246, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 247, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 248, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 249, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 250, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 252, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 255, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 256, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 257, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 258, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 259, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 260, 0, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 261, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 0, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 264, 42, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 265, 43, TARGET_STRING(
    "Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 0, TARGET_STRING("Sistema Vite/Actual A/Posizione attuale Vite A/Sum5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 267, 0, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 269, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 270, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 271, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 272, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 273, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 274, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 275, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 276, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 277, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 278, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 279, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*x1(k) + B*u1(k) "),
    TARGET_STRING("x1(k+1)"), 0, 0, 0, 0, 0 },

  { 281, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*x2(k) + B*u2(k)"),
    TARGET_STRING("x2(k+1)"), 0, 0, 0, 0, 0 },

  { 282, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*X(k)+D*u(k)"),
    TARGET_STRING("y(k)"), 0, 0, 0, 0, 0 },

  { 283, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("x1(k)"), 0, 0, 0, 0, 0 },

  { 284, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("x2(k)"), 0, 0, 0, 0, 0 },

  { 285, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 287, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 292, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 294, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 295, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 296, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 297, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 298, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 299, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 302, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 303, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 304, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 305, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 306, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 307, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 308, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 309, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 310, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 311, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 312, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 313, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 314, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 315, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 316, 0, TARGET_STRING(
    "Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 317, 0, TARGET_STRING(
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
  { 318, TARGET_STRING("Alzata A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 319, TARGET_STRING("Alzata B "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 320, TARGET_STRING("Asse A braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 321, TARGET_STRING("Asse A vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 322, TARGET_STRING("Asse B braccia"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 323, TARGET_STRING("Asse B vite"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 324, TARGET_STRING("Kp"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 325, TARGET_STRING("Periodo A"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 326, TARGET_STRING("Periodo B"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 327, TARGET_STRING("StartHome"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 328, TARGET_STRING("StartRobot"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 329, TARGET_STRING("StartWork"),
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

  { 491, TARGET_STRING("Movimento/Leggi di moto/Alzata C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 492, TARGET_STRING("Movimento/Leggi di moto/Alzata C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 493, TARGET_STRING("Movimento/Leggi di moto/Alzata Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 494, TARGET_STRING("Movimento/Leggi di moto/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 495, TARGET_STRING("Movimento/Leggi di moto/N giri"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 496, TARGET_STRING("Movimento/Leggi di moto/Periodo"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 497, TARGET_STRING("Movimento/Leggi di moto/Periodo C"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 498, TARGET_STRING("Movimento/Leggi di moto/Periodo C1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 499, TARGET_STRING("Movimento/Leggi di moto/Periodo Q"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 500, TARGET_STRING("Movimento/Leggi di moto/Rmax"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 501, TARGET_STRING("Movimento/Leggi di moto/Rmin"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 502, TARGET_STRING("Movimento/Leggi di moto/Tempo spost. iniziale"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 503, TARGET_STRING("Movimento/Pos iniziali/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 504, TARGET_STRING("Movimento/Pos iniziali/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 505, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 506, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 507, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 508, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 509, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 510, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 511, TARGET_STRING("Movimento/Posizioni/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Movimento/Posizioni/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 514, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 515, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 516, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 517, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 518, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 519, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 520, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 521, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 522, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 523, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 524, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 525, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 526, TARGET_STRING("Movimento/Velocita /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 527, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 528, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 529, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 530, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 531, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 532, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 533, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 534, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 535, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 536, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 537, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 538, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 539, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 540, TARGET_STRING("Movimento/Velocita braccia 1/EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 541, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 542, TARGET_STRING("Movimento Braccia/PID Controller1/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 543, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 544, TARGET_STRING("Movimento Braccia/PID Controller1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 545, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 546, TARGET_STRING("Movimento Braccia/PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 547, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 548, TARGET_STRING("Movimento Braccia/PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 549, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 550, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 551, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 552, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 553, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 554, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 555, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 556, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 557, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 558, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 559, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 560, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 561, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 562, TARGET_STRING("Movimento Braccia/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 563, TARGET_STRING("Out Asse A Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 564, TARGET_STRING("Out Asse A Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 565, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 566, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 567, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 568, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 569, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 570, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 571, TARGET_STRING("Out Asse A Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 572, TARGET_STRING("Out Asse B Braccia/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 573, TARGET_STRING("Out Asse B Braccia/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 574, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 575, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 576, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 577, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 578, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 579, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 580, TARGET_STRING("Out Asse B Braccia/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 581, TARGET_STRING("Out asse A Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 582, TARGET_STRING("Out asse A Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 583, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 584, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 585, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 586, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 587, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 588, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 589, TARGET_STRING("Out asse A Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 590, TARGET_STRING("Out asse B Vite/Fungo/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 591, TARGET_STRING("Out asse B Vite/Fungo/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 592, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 593, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 594, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 595, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 596, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 597, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 598, TARGET_STRING("Out asse B Vite/Fungo/EtherCAT PDO Receive9"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 599, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 600, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 601, TARGET_STRING("Sistema Vite/Coppia VIte A finale/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 602, TARGET_STRING("Sistema Vite/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 603, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 604, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 605, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 606, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 607, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 608, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 609, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive14"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 610, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 611, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 612, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 613, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 614, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 615, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 616, TARGET_STRING("Sistema Vite/Velocita vite /EtherCAT PDO Receive15"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 617, TARGET_STRING("State flow robot/Homing/CA"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 618, TARGET_STRING("State flow robot/Homing/CB"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 619, TARGET_STRING("State flow robot/Homing/CH"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 620, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 621, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 622, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B2/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 623, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B3/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 624, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B4/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 625, TARGET_STRING("Movimento/Posizioni/Discrete Derivative B5/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 626, TARGET_STRING("Sistema Vite/Actual A/Discrete Derivative A/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 627, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 628, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 629, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 630, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 631, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 632, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 633, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/D*u(k)"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 634, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/Delay_x1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 635, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/Delay_x2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 636, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 637, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 638, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 639, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 640, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 641, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 642, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 643, TARGET_STRING("Movimento/Posizioni/Second-Order Filter/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 644, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 645, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 646, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 647, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 648, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 649, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 650, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 651, TARGET_STRING("Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)/C12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 652, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 653, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A12"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 654, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 655, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)/A22"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 656, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 657, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))/B21"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 658, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C11"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 659, TARGET_STRING("Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)/C12"),
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
  &StateFlowGUI_B.Kp_n,                /* 10: Signal */
  &StateFlowGUI_B.Hv,                  /* 11: Signal */
  &StateFlowGUI_B.Hb,                  /* 12: Signal */
  &StateFlowGUI_B.Enable,              /* 13: Signal */
  &StateFlowGUI_B.FineLavorazione,     /* 14: Signal */
  &StateFlowGUI_B.Clock,               /* 15: Signal */
  &StateFlowGUI_B.Kp,                  /* 16: Signal */
  &StateFlowGUI_B.StartHome,           /* 17: Signal */
  &StateFlowGUI_B.StartRobot,          /* 18: Signal */
  &StateFlowGUI_B.StartWork,           /* 19: Signal */
  &StateFlowGUI_B.DataTypeConversion1, /* 20: Signal */
  &StateFlowGUI_B.DataTypeConversion2, /* 21: Signal */
  &StateFlowGUI_B.DataTypeConversion5, /* 22: Signal */
  &StateFlowGUI_B.DataTypeConversion7, /* 23: Signal */
  &StateFlowGUI_B.EtherCATInit[0],     /* 24: Signal */
  &StateFlowGUI_B.DataTypeConversion8, /* 25: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive16,/* 26: Signal */
  &StateFlowGUI_B.IntegertoBitConverter[0],/* 27: Signal */
  &StateFlowGUI_B.DataTypeConversion8_f,/* 28: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive16_d,/* 29: Signal */
  &StateFlowGUI_B.IntegertoBitConverter_d[0],/* 30: Signal */
  &StateFlowGUI_B.y_i,                 /* 31: Signal */
  &StateFlowGUI_B.y_b,                 /* 32: Signal */
  &StateFlowGUI_B.y_f,                 /* 33: Signal */
  &StateFlowGUI_B.DataTypeConversion24,/* 34: Signal */
  &StateFlowGUI_B.DataTypeConversion25,/* 35: Signal */
  &StateFlowGUI_B.DataTypeConversion26,/* 36: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa.theta1,/* 37: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa.theta2,/* 38: Signal */
  &StateFlowGUI_B.theta1_pp,           /* 39: Signal */
  &StateFlowGUI_B.theta2_pp,           /* 40: Signal */
  &StateFlowGUI_B.sf_CinematicaInversavel.theta1_p,/* 41: Signal */
  &StateFlowGUI_B.sf_CinematicaInversavel.theta2_p,/* 42: Signal */
  &StateFlowGUI_B.x_n,                 /* 43: Signal */
  &StateFlowGUI_B.y_k,                 /* 44: Signal */
  &StateFlowGUI_B.x_pp_f,              /* 45: Signal */
  &StateFlowGUI_B.y_pp_l,              /* 46: Signal */
  &StateFlowGUI_B.Cm1,                 /* 47: Signal */
  &StateFlowGUI_B.Cm2,                 /* 48: Signal */
  &StateFlowGUI_B.C1,                  /* 49: Signal */
  &StateFlowGUI_B.C2,                  /* 50: Signal */
  &StateFlowGUI_B.Mm[0],               /* 51: Signal */
  &StateFlowGUI_B.K[0],                /* 52: Signal */
  &StateFlowGUI_B.Mpi[0],              /* 53: Signal */
  &StateFlowGUI_B.xp,                  /* 54: Signal */
  &StateFlowGUI_B.yp,                  /* 55: Signal */
  &StateFlowGUI_B.x_p,                 /* 56: Signal */
  &StateFlowGUI_B.y_p,                 /* 57: Signal */
  &StateFlowGUI_B.Gain,                /* 58: Signal */
  &StateFlowGUI_B.Gain1,               /* 59: Signal */
  &StateFlowGUI_B.Kd[0],               /* 60: Signal */
  &StateFlowGUI_B.Memory_d[0],         /* 61: Signal */
  &StateFlowGUI_B.Product[0],          /* 62: Signal */
  &StateFlowGUI_B.Sum,                 /* 63: Signal */
  &StateFlowGUI_B.Sum1,                /* 64: Signal */
  &StateFlowGUI_B.Sum2_d,              /* 65: Signal */
  &StateFlowGUI_B.Sum3_b,              /* 66: Signal */
  &StateFlowGUI_B.Sum4_n[0],           /* 67: Signal */
  &StateFlowGUI_B.Sum7_j[0],           /* 68: Signal */
  &StateFlowGUI_B.Sum9_a[0],           /* 69: Signal */
  &StateFlowGUI_B.pos_A_conv_e,        /* 70: Signal */
  &StateFlowGUI_B.sf_AsseBconvbrac1_f.pos_B_conv,/* 71: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa_a.theta1,/* 72: Signal */
  &StateFlowGUI_B.sf_CinematicaInversa_a.theta2,/* 73: Signal */
  &StateFlowGUI_B.sf_CinematicaInversavel_l.theta1_p,/* 74: Signal */
  &StateFlowGUI_B.sf_CinematicaInversavel_l.theta2_p,/* 75: Signal */
  &StateFlowGUI_B.x0,                  /* 76: Signal */
  &StateFlowGUI_B.y0,                  /* 77: Signal */
  &StateFlowGUI_B.selettore,           /* 78: Signal */
  &StateFlowGUI_B.Coppiatheta1vel,     /* 79: Signal */
  &StateFlowGUI_B.Coppiatheta2vel,     /* 80: Signal */
  &StateFlowGUI_B.Memory_h,            /* 81: Signal */
  &StateFlowGUI_B.Memory1,             /* 82: Signal */
  &StateFlowGUI_B.Sum_e,               /* 83: Signal */
  &StateFlowGUI_B.Sum1_g,              /* 84: Signal */
  &StateFlowGUI_B.Sum12_a,             /* 85: Signal */
  &StateFlowGUI_B.Sum14,               /* 86: Signal */
  &StateFlowGUI_B.Sum17,               /* 87: Signal */
  &StateFlowGUI_B.Sum2_f,              /* 88: Signal */
  &StateFlowGUI_B.Sum3_l,              /* 89: Signal */
  &StateFlowGUI_B.Sum4_nw,             /* 90: Signal */
  &StateFlowGUI_B.Sum5_g,              /* 91: Signal */
  &StateFlowGUI_B.Sum6,                /* 92: Signal */
  &StateFlowGUI_B.Sum7_l,              /* 93: Signal */
  &StateFlowGUI_B.Sum8,                /* 94: Signal */
  &StateFlowGUI_B.DataTypeConversion3, /* 95: Signal */
  &StateFlowGUI_B.CoppiaAbracciasaturata,/* 96: Signal */
  &StateFlowGUI_B.Switch1_c,           /* 97: Signal */
  &StateFlowGUI_B.DataTypeConversion4, /* 98: Signal */
  &StateFlowGUI_B.CoppiaBbracciasaturata,/* 99: Signal */
  &StateFlowGUI_B.Switch1_i,           /* 100: Signal */
  &StateFlowGUI_B.ConvertA,            /* 101: Signal */
  &StateFlowGUI_B.Gain_a,              /* 102: Signal */
  &StateFlowGUI_B.CoppiaAvitesaturata, /* 103: Signal */
  &StateFlowGUI_B.Switch,              /* 104: Signal */
  &StateFlowGUI_B.ConvertB,            /* 105: Signal */
  &StateFlowGUI_B.Switch2,             /* 106: Signal */
  &StateFlowGUI_B.convert_g,           /* 107: Signal */
  &StateFlowGUI_B.convert10_d,         /* 108: Signal */
  &StateFlowGUI_B.MotorebracciaA,      /* 109: Signal */
  &StateFlowGUI_B.MotorebracciaB,      /* 110: Signal */
  &StateFlowGUI_B.convert,             /* 111: Signal */
  &StateFlowGUI_B.convert10,           /* 112: Signal */
  &StateFlowGUI_B.MotoreviteA,         /* 113: Signal */
  &StateFlowGUI_B.MotoreviteB,         /* 114: Signal */
  &StateFlowGUI_B.sf_AsseB.ldm_pos,    /* 115: Signal */
  &StateFlowGUI_B.sf_AsseB.ldm_vel,    /* 116: Signal */
  &StateFlowGUI_B.pos_B_conv,          /* 117: Signal */
  &StateFlowGUI_B.sf_RifermentoAsseAVite.ldm_pos,/* 118: Signal */
  &StateFlowGUI_B.sf_RifermentoAsseAVite.ldm_vel,/* 119: Signal */
  &StateFlowGUI_B.Gain2,               /* 120: Signal */
  &StateFlowGUI_B.Gain4,               /* 121: Signal */
  &StateFlowGUI_B.Sum1_o,              /* 122: Signal */
  &StateFlowGUI_B.Sum3,                /* 123: Signal */
  &StateFlowGUI_B.Sum4_i,              /* 124: Signal */
  &StateFlowGUI_B.Sum6_f,              /* 125: Signal */
  &StateFlowGUI_B.Sum7_i,              /* 126: Signal */
  &StateFlowGUI_B.Sum8_p,              /* 127: Signal */
  &StateFlowGUI_B.DataTypeConversion6, /* 128: Signal */
  &StateFlowGUI_B.StatusWord,          /* 129: Signal */
  &StateFlowGUI_B.Sum2,                /* 130: Signal */
  &StateFlowGUI_B.xct,                 /* 131: Signal */
  &StateFlowGUI_B.yct,                 /* 132: Signal */
  &StateFlowGUI_B.xct_p,               /* 133: Signal */
  &StateFlowGUI_B.yct_p,               /* 134: Signal */
  &StateFlowGUI_B.xct_pp,              /* 135: Signal */
  &StateFlowGUI_B.yct_pp,              /* 136: Signal */
  &StateFlowGUI_B.xc,                  /* 137: Signal */
  &StateFlowGUI_B.yc,                  /* 138: Signal */
  &StateFlowGUI_B.xc_p,                /* 139: Signal */
  &StateFlowGUI_B.yc_p,                /* 140: Signal */
  &StateFlowGUI_B.xc_pp,               /* 141: Signal */
  &StateFlowGUI_B.yc_pp,               /* 142: Signal */
  &StateFlowGUI_B.xq,                  /* 143: Signal */
  &StateFlowGUI_B.yq,                  /* 144: Signal */
  &StateFlowGUI_B.xq_p,                /* 145: Signal */
  &StateFlowGUI_B.yq_p,                /* 146: Signal */
  &StateFlowGUI_B.xq_pp,               /* 147: Signal */
  &StateFlowGUI_B.yq_pp,               /* 148: Signal */
  &StateFlowGUI_B.x,                   /* 149: Signal */
  &StateFlowGUI_B.y,                   /* 150: Signal */
  &StateFlowGUI_B.x_p_l,               /* 151: Signal */
  &StateFlowGUI_B.y_p_o,               /* 152: Signal */
  &StateFlowGUI_B.x_pp,                /* 153: Signal */
  &StateFlowGUI_B.y_pp,                /* 154: Signal */
  &StateFlowGUI_B.xs,                  /* 155: Signal */
  &StateFlowGUI_B.ys,                  /* 156: Signal */
  &StateFlowGUI_B.xs_p,                /* 157: Signal */
  &StateFlowGUI_B.ys_p,                /* 158: Signal */
  &StateFlowGUI_B.xs_pp,               /* 159: Signal */
  &StateFlowGUI_B.ys_pp,               /* 160: Signal */
  &StateFlowGUI_B.MultiportSwitch[0],  /* 161: Signal */
  &StateFlowGUI_B.x0_l,                /* 162: Signal */
  &StateFlowGUI_B.y0_p,                /* 163: Signal */
  &StateFlowGUI_B.sf_AsseAconvbracc.pos_B_conv,/* 164: Signal */
  &StateFlowGUI_B.sf_AsseBconvbrac1.pos_B_conv,/* 165: Signal */
  &StateFlowGUI_B.DigitalClock,        /* 166: Signal */
  &StateFlowGUI_B.Sum12,               /* 167: Signal */
  &StateFlowGUI_B.Sum4,                /* 168: Signal */
  &StateFlowGUI_B.Sum7,                /* 169: Signal */
  &StateFlowGUI_B.Sum9,                /* 170: Signal */
  &StateFlowGUI_B.sf_VelAsseAconv_a.vel_A_conv,/* 171: Signal */
  &StateFlowGUI_B.sf_VelAsseBconv_d.vel_B_conv,/* 172: Signal */
  &StateFlowGUI_B.VelocityA_o,         /* 173: Signal */
  &StateFlowGUI_B.VelocityB_f,         /* 174: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14_b,/* 175: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15_d,/* 176: Signal */
  &StateFlowGUI_B.vel_A_conv_b,        /* 177: Signal */
  &StateFlowGUI_B.vel_B_conv_a,        /* 178: Signal */
  &StateFlowGUI_B.VelocityA,           /* 179: Signal */
  &StateFlowGUI_B.VelocityB,           /* 180: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14,/* 181: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15,/* 182: Signal */
  &StateFlowGUI_B.Sum2_bi,             /* 183: Signal */
  &StateFlowGUI_B.Filter,              /* 184: Signal */
  &StateFlowGUI_B.Integrator,          /* 185: Signal */
  &StateFlowGUI_B.DerivativeGain,      /* 186: Signal */
  &StateFlowGUI_B.FilterCoefficient,   /* 187: Signal */
  &StateFlowGUI_B.IntegralGain,        /* 188: Signal */
  &StateFlowGUI_B.ProportionalGain,    /* 189: Signal */
  &StateFlowGUI_B.Sum_h,               /* 190: Signal */
  &StateFlowGUI_B.SumD,                /* 191: Signal */
  &StateFlowGUI_B.Filter_d,            /* 192: Signal */
  &StateFlowGUI_B.Integrator_d,        /* 193: Signal */
  &StateFlowGUI_B.DerivativeGain_b,    /* 194: Signal */
  &StateFlowGUI_B.FilterCoefficient_g, /* 195: Signal */
  &StateFlowGUI_B.IntegralGain_f,      /* 196: Signal */
  &StateFlowGUI_B.ProportionalGain_p,  /* 197: Signal */
  &StateFlowGUI_B.Sum_n,               /* 198: Signal */
  &StateFlowGUI_B.SumD_e,              /* 199: Signal */
  &StateFlowGUI_B.sf_VelAsseAconv_o.vel_A_conv,/* 200: Signal */
  &StateFlowGUI_B.sf_VelAsseBconv_o.vel_B_conv,/* 201: Signal */
  &StateFlowGUI_B.VelocityA_a,         /* 202: Signal */
  &StateFlowGUI_B.VelocityB_p,         /* 203: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14_c,/* 204: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15_l,/* 205: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_e.y,/* 206: Signal */
  &StateFlowGUI_B.DataTypeConversion14,/* 207: Signal */
  &StateFlowGUI_B.Memory,              /* 208: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9, /* 209: Signal */
  &StateFlowGUI_B.Switch1,             /* 210: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_a.y,/* 211: Signal */
  &StateFlowGUI_B.DataTypeConversion14_g,/* 212: Signal */
  &StateFlowGUI_B.Memory_g,            /* 213: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9_h,/* 214: Signal */
  &StateFlowGUI_B.Switch1_l,           /* 215: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_f.y,/* 216: Signal */
  &StateFlowGUI_B.DataTypeConversion14_k,/* 217: Signal */
  &StateFlowGUI_B.Memory_n,            /* 218: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9_hd,/* 219: Signal */
  &StateFlowGUI_B.Switch1_f,           /* 220: Signal */
  &StateFlowGUI_B.sf_MATLABFunction_i.y,/* 221: Signal */
  &StateFlowGUI_B.DataTypeConversion14_e,/* 222: Signal */
  &StateFlowGUI_B.Memory_a,            /* 223: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive9_d,/* 224: Signal */
  &StateFlowGUI_B.Switch1_k,           /* 225: Signal */
  &StateFlowGUI_B.Sum_i,               /* 226: Signal */
  &StateFlowGUI_B.Sum2_b,              /* 227: Signal */
  &StateFlowGUI_B.Gain_h,              /* 228: Signal */
  &StateFlowGUI_B.Gain6,               /* 229: Signal */
  &StateFlowGUI_B.Sum9_d,              /* 230: Signal */
  &StateFlowGUI_B.Diff_c,              /* 231: Signal */
  &StateFlowGUI_B.TSamp_d,             /* 232: Signal */
  &StateFlowGUI_B.Uk1_h,               /* 233: Signal */
  &StateFlowGUI_B.vel_A_conv,          /* 234: Signal */
  &StateFlowGUI_B.vel_B_conv,          /* 235: Signal */
  &StateFlowGUI_B.VelocityA_m,         /* 236: Signal */
  &StateFlowGUI_B.VelocityB_h,         /* 237: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive14_l,/* 238: Signal */
  &StateFlowGUI_B.EtherCATPDOReceive15_e,/* 239: Signal */
  &StateFlowGUI_B.CA,                  /* 240: Signal */
  &StateFlowGUI_B.CB,                  /* 241: Signal */
  &StateFlowGUI_B.CH,                  /* 242: Signal */
  &StateFlowGUI_B.Diff_i,              /* 243: Signal */
  &StateFlowGUI_B.TSamp_n,             /* 244: Signal */
  &StateFlowGUI_B.Uk1_d,               /* 245: Signal */
  &StateFlowGUI_B.Diff_d,              /* 246: Signal */
  &StateFlowGUI_B.TSamp_h,             /* 247: Signal */
  &StateFlowGUI_B.Uk1_b,               /* 248: Signal */
  &StateFlowGUI_B.Diff,                /* 249: Signal */
  &StateFlowGUI_B.TSamp,               /* 250: Signal */
  &StateFlowGUI_B.Uk1,                 /* 251: Signal */
  &StateFlowGUI_B.Diff_n,              /* 252: Signal */
  &StateFlowGUI_B.TSamp_nd,            /* 253: Signal */
  &StateFlowGUI_B.Uk1_l,               /* 254: Signal */
  &StateFlowGUI_B.Diff_b,              /* 255: Signal */
  &StateFlowGUI_B.TSamp_f,             /* 256: Signal */
  &StateFlowGUI_B.Uk1_j,               /* 257: Signal */
  &StateFlowGUI_B.Diff_bt,             /* 258: Signal */
  &StateFlowGUI_B.TSamp_i,             /* 259: Signal */
  &StateFlowGUI_B.Uk1_bl,              /* 260: Signal */
  &StateFlowGUI_B.Diff_iq,             /* 261: Signal */
  &StateFlowGUI_B.TSamp_c,             /* 262: Signal */
  &StateFlowGUI_B.Uk1_f,               /* 263: Signal */
  &StateFlowGUI_B.pos_A_conv,          /* 264: Signal */
  &StateFlowGUI_B.pos_B_conv_v,        /* 265: Signal */
  &StateFlowGUI_B.Sum5,                /* 266: Signal */
  &StateFlowGUI_B.Duk_h,               /* 267: Signal */
  &StateFlowGUI_B.x1k1_g,              /* 268: Signal */
  &StateFlowGUI_B.x2k1_n,              /* 269: Signal */
  &StateFlowGUI_B.yk_i,                /* 270: Signal */
  &StateFlowGUI_B.x1k_a,               /* 271: Signal */
  &StateFlowGUI_B.x2k_g,               /* 272: Signal */
  &StateFlowGUI_B.Duk,                 /* 273: Signal */
  &StateFlowGUI_B.x1k1,                /* 274: Signal */
  &StateFlowGUI_B.x2k1,                /* 275: Signal */
  &StateFlowGUI_B.yk,                  /* 276: Signal */
  &StateFlowGUI_B.x1k,                 /* 277: Signal */
  &StateFlowGUI_B.x2k,                 /* 278: Signal */
  &StateFlowGUI_B.Duk_n,               /* 279: Signal */
  &StateFlowGUI_B.x1k1_h,              /* 280: Signal */
  &StateFlowGUI_B.x2k1_h,              /* 281: Signal */
  &StateFlowGUI_B.yk_m,                /* 282: Signal */
  &StateFlowGUI_B.x1k_i,               /* 283: Signal */
  &StateFlowGUI_B.x2k_d,               /* 284: Signal */
  &StateFlowGUI_B.A11_p,               /* 285: Signal */
  &StateFlowGUI_B.A12_c,               /* 286: Signal */
  &StateFlowGUI_B.A21_h,               /* 287: Signal */
  &StateFlowGUI_B.A22_d,               /* 288: Signal */
  &StateFlowGUI_B.sum2_nk,             /* 289: Signal */
  &StateFlowGUI_B.sum3_e,              /* 290: Signal */
  &StateFlowGUI_B.B11_k,               /* 291: Signal */
  &StateFlowGUI_B.B21_l,               /* 292: Signal */
  &StateFlowGUI_B.C11_h,               /* 293: Signal */
  &StateFlowGUI_B.C12_e,               /* 294: Signal */
  &StateFlowGUI_B.sum2_k,              /* 295: Signal */
  &StateFlowGUI_B.A11,                 /* 296: Signal */
  &StateFlowGUI_B.A12,                 /* 297: Signal */
  &StateFlowGUI_B.A21,                 /* 298: Signal */
  &StateFlowGUI_B.A22,                 /* 299: Signal */
  &StateFlowGUI_B.sum2_n,              /* 300: Signal */
  &StateFlowGUI_B.sum3,                /* 301: Signal */
  &StateFlowGUI_B.B11,                 /* 302: Signal */
  &StateFlowGUI_B.B21,                 /* 303: Signal */
  &StateFlowGUI_B.C11,                 /* 304: Signal */
  &StateFlowGUI_B.C12,                 /* 305: Signal */
  &StateFlowGUI_B.sum2,                /* 306: Signal */
  &StateFlowGUI_B.A11_h,               /* 307: Signal */
  &StateFlowGUI_B.A12_g,               /* 308: Signal */
  &StateFlowGUI_B.A21_p,               /* 309: Signal */
  &StateFlowGUI_B.A22_j,               /* 310: Signal */
  &StateFlowGUI_B.sum2_e,              /* 311: Signal */
  &StateFlowGUI_B.sum3_b,              /* 312: Signal */
  &StateFlowGUI_B.B11_d,               /* 313: Signal */
  &StateFlowGUI_B.B21_h,               /* 314: Signal */
  &StateFlowGUI_B.C11_e,               /* 315: Signal */
  &StateFlowGUI_B.C12_m,               /* 316: Signal */
  &StateFlowGUI_B.sum2_ka,             /* 317: Signal */
  &StateFlowGUI_P.AlzataA_Value,       /* 318: Block Parameter */
  &StateFlowGUI_P.AlzataB_Value,       /* 319: Block Parameter */
  &StateFlowGUI_P.AsseAbraccia_Value,  /* 320: Block Parameter */
  &StateFlowGUI_P.AsseAvite_Value,     /* 321: Block Parameter */
  &StateFlowGUI_P.AsseBbraccia_Value,  /* 322: Block Parameter */
  &StateFlowGUI_P.AsseBvite_Value,     /* 323: Block Parameter */
  &StateFlowGUI_P.Kp_Value,            /* 324: Block Parameter */
  &StateFlowGUI_P.PeriodoA_Value,      /* 325: Block Parameter */
  &StateFlowGUI_P.PeriodoB_Value,      /* 326: Block Parameter */
  &StateFlowGUI_P.StartHome_Value,     /* 327: Block Parameter */
  &StateFlowGUI_P.StartRobot_Value,    /* 328: Block Parameter */
  &StateFlowGUI_P.StartWork_Value,     /* 329: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P1[0],/* 330: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P2,/* 331: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P3,/* 332: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P4,/* 333: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P5,/* 334: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P6,/* 335: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit3_P7,/* 336: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P1[0],/* 337: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P2,/* 338: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P3,/* 339: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P4,/* 340: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P5,/* 341: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P6,/* 342: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit4_P7,/* 343: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P1[0],/* 344: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P2,/* 345: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P3,/* 346: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P4,/* 347: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P5,/* 348: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P6,/* 349: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit5_P7,/* 350: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P1[0],/* 351: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P2,/* 352: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P3,/* 353: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P4,/* 354: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P5,/* 355: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P6,/* 356: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit6_P7,/* 357: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P1[0],/* 358: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P2,/* 359: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P3,/* 360: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P4,/* 361: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P5,/* 362: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P6,/* 363: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P7,/* 364: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P1_l[0],/* 365: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P2_n,/* 366: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P3_n,/* 367: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P4_l,/* 368: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P5_i,/* 369: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P6_f,/* 370: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive16_P7_h,/* 371: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P1[0],    /* 372: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P2,       /* 373: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P3,       /* 374: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P4,       /* 375: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P5,       /* 376: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P6,       /* 377: Block Parameter */
  &StateFlowGUI_P.LuceBianca_P7,       /* 378: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P1[0],     /* 379: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P2,        /* 380: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P3,        /* 381: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P4,        /* 382: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P5,        /* 383: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P6,        /* 384: Block Parameter */
  &StateFlowGUI_P.LuceRossa_P7,        /* 385: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P1[0],     /* 386: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P2,        /* 387: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P3,        /* 388: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P4,        /* 389: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P5,        /* 390: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P6,        /* 391: Block Parameter */
  &StateFlowGUI_P.LuceVerde_P7,        /* 392: Block Parameter */
  &StateFlowGUI_P.selettore_Value,     /* 393: Block Parameter */
  &StateFlowGUI_P.Gain_Gain_jp,        /* 394: Block Parameter */
  &StateFlowGUI_P.Gain1_Gain,          /* 395: Block Parameter */
  &StateFlowGUI_P.Kd_Gain,             /* 396: Block Parameter */
  &StateFlowGUI_P.Memory_X0_f[0],      /* 397: Block Parameter */
  &StateFlowGUI_P.PIDController1_P,    /* 398: Mask Parameter */
  &StateFlowGUI_P.PIDController1_I,    /* 399: Mask Parameter */
  &StateFlowGUI_P.PIDController1_D,    /* 400: Mask Parameter */
  &StateFlowGUI_P.PIDController1_N,    /* 401: Mask Parameter */
  &StateFlowGUI_P.PIDController2_P,    /* 402: Mask Parameter */
  &StateFlowGUI_P.PIDController2_I,    /* 403: Mask Parameter */
  &StateFlowGUI_P.PIDController2_D,    /* 404: Mask Parameter */
  &StateFlowGUI_P.PIDController2_N,    /* 405: Mask Parameter */
  &StateFlowGUI_P.Constant_Value_eg,   /* 406: Block Parameter */
  &StateFlowGUI_P.Constant1_Value_f,   /* 407: Block Parameter */
  &StateFlowGUI_P.selettore_Value_d,   /* 408: Block Parameter */
  &StateFlowGUI_P.Coppiatheta1vel_Gain,/* 409: Block Parameter */
  &StateFlowGUI_P.Coppiatheta2vel_Gain,/* 410: Block Parameter */
  &StateFlowGUI_P.Memory_X0_d,         /* 411: Block Parameter */
  &StateFlowGUI_P.Memory1_X0,          /* 412: Block Parameter */
  &StateFlowGUI_P.CoppiaAbracciasaturata_UpperSat,/* 413: Block Parameter */
  &StateFlowGUI_P.CoppiaAbracciasaturata_LowerSat,/* 414: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P1[0],/* 415: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P2,/* 416: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P3,/* 417: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P4,/* 418: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P5,/* 419: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P6,/* 420: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit1_P7,/* 421: Block Parameter */
  &StateFlowGUI_P.Switch1_Threshold,   /* 422: Block Parameter */
  &StateFlowGUI_P.CoppiaBbracciasaturata_UpperSat,/* 423: Block Parameter */
  &StateFlowGUI_P.CoppiaBbracciasaturata_LowerSat,/* 424: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P1[0],/* 425: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P2,/* 426: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P3,/* 427: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P4,/* 428: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P5,/* 429: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P6,/* 430: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit7_P7,/* 431: Block Parameter */
  &StateFlowGUI_P.Switch1_Threshold_f, /* 432: Block Parameter */
  &StateFlowGUI_P.Gain_Gain_j,         /* 433: Block Parameter */
  &StateFlowGUI_P.CoppiaAvitesaturata_UpperSat,/* 434: Block Parameter */
  &StateFlowGUI_P.CoppiaAvitesaturata_LowerSat,/* 435: Block Parameter */
  &StateFlowGUI_P.Torquesend_P1[0],    /* 436: Block Parameter */
  &StateFlowGUI_P.Torquesend_P2,       /* 437: Block Parameter */
  &StateFlowGUI_P.Torquesend_P3,       /* 438: Block Parameter */
  &StateFlowGUI_P.Torquesend_P4,       /* 439: Block Parameter */
  &StateFlowGUI_P.Torquesend_P5,       /* 440: Block Parameter */
  &StateFlowGUI_P.Torquesend_P6,       /* 441: Block Parameter */
  &StateFlowGUI_P.Torquesend_P7,       /* 442: Block Parameter */
  &StateFlowGUI_P.Switch_Threshold,    /* 443: Block Parameter */
  &StateFlowGUI_P.Constant1_Value_e,   /* 444: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P1[0],/* 445: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P2,/* 446: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P3,/* 447: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P4,/* 448: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P5,/* 449: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P6,/* 450: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOTransmit2_P7,/* 451: Block Parameter */
  &StateFlowGUI_P.Switch2_Threshold,   /* 452: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P1[0],/* 453: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P2,   /* 454: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P3,   /* 455: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P4,   /* 456: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P5,   /* 457: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P6,   /* 458: Block Parameter */
  &StateFlowGUI_P.MotorebracciaA_P7,   /* 459: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P1[0],/* 460: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P2,   /* 461: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P3,   /* 462: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P4,   /* 463: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P5,   /* 464: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P6,   /* 465: Block Parameter */
  &StateFlowGUI_P.MotorebracciaB_P7,   /* 466: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P1[0],   /* 467: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P2,      /* 468: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P3,      /* 469: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P4,      /* 470: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P5,      /* 471: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P6,      /* 472: Block Parameter */
  &StateFlowGUI_P.MotoreviteA_P7,      /* 473: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P1[0],   /* 474: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P2,      /* 475: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P3,      /* 476: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P4,      /* 477: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P5,      /* 478: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P6,      /* 479: Block Parameter */
  &StateFlowGUI_P.MotoreviteB_P7,      /* 480: Block Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB_ICPrevSca_f,/* 481: Mask Parameter */
  &StateFlowGUI_P.Gain2_Gain,          /* 482: Block Parameter */
  &StateFlowGUI_P.Gain4_Gain,          /* 483: Block Parameter */
  &StateFlowGUI_P.StatusWord_P1[0],    /* 484: Block Parameter */
  &StateFlowGUI_P.StatusWord_P2,       /* 485: Block Parameter */
  &StateFlowGUI_P.StatusWord_P3,       /* 486: Block Parameter */
  &StateFlowGUI_P.StatusWord_P4,       /* 487: Block Parameter */
  &StateFlowGUI_P.StatusWord_P5,       /* 488: Block Parameter */
  &StateFlowGUI_P.StatusWord_P6,       /* 489: Block Parameter */
  &StateFlowGUI_P.StatusWord_P7,       /* 490: Block Parameter */
  &StateFlowGUI_P.AlzataC_Value,       /* 491: Block Parameter */
  &StateFlowGUI_P.AlzataC1_Value,      /* 492: Block Parameter */
  &StateFlowGUI_P.AlzataQ_Value,       /* 493: Block Parameter */
  &StateFlowGUI_P.Constant3_Value,     /* 494: Block Parameter */
  &StateFlowGUI_P.Ngiri_Value,         /* 495: Block Parameter */
  &StateFlowGUI_P.Periodo_Value,       /* 496: Block Parameter */
  &StateFlowGUI_P.PeriodoC_Value,      /* 497: Block Parameter */
  &StateFlowGUI_P.PeriodoC1_Value,     /* 498: Block Parameter */
  &StateFlowGUI_P.PeriodoQ_Value,      /* 499: Block Parameter */
  &StateFlowGUI_P.Rmax_Value,          /* 500: Block Parameter */
  &StateFlowGUI_P.Rmin_Value,          /* 501: Block Parameter */
  &StateFlowGUI_P.Tempospostiniziale_Value,/* 502: Block Parameter */
  &StateFlowGUI_P.Constant_Value_b,    /* 503: Block Parameter */
  &StateFlowGUI_P.Constant1_Value,     /* 504: Block Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB_ICPrevScale,/* 505: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB1_ICPrevScal,/* 506: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB2_ICPrevScal,/* 507: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB3_ICPrevScal,/* 508: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB4_ICPrevScal,/* 509: Mask Parameter */
  &StateFlowGUI_P.DiscreteDerivativeB5_ICPrevScal,/* 510: Mask Parameter */
  &StateFlowGUI_P.Constant4_Value,     /* 511: Block Parameter */
  &StateFlowGUI_P.Constant5_Value,     /* 512: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1_k[0],/* 513: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2_i,/* 514: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3_a,/* 515: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4_e,/* 516: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5_j,/* 517: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6_m,/* 518: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7_m,/* 519: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1_a[0],/* 520: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2_l,/* 521: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3_a,/* 522: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4_f,/* 523: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5_c,/* 524: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6_g,/* 525: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7_m,/* 526: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1[0],/* 527: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2,/* 528: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3,/* 529: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4,/* 530: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5,/* 531: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6,/* 532: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7,/* 533: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1[0],/* 534: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2,/* 535: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3,/* 536: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4,/* 537: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5,/* 538: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6,/* 539: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7,/* 540: Block Parameter */
  &StateFlowGUI_P.Filter_gainval,      /* 541: Block Parameter */
  &StateFlowGUI_P.Filter_IC,           /* 542: Block Parameter */
  &StateFlowGUI_P.Integrator_gainval,  /* 543: Block Parameter */
  &StateFlowGUI_P.Integrator_IC,       /* 544: Block Parameter */
  &StateFlowGUI_P.Filter_gainval_m,    /* 545: Block Parameter */
  &StateFlowGUI_P.Filter_IC_b,         /* 546: Block Parameter */
  &StateFlowGUI_P.Integrator_gainval_o,/* 547: Block Parameter */
  &StateFlowGUI_P.Integrator_IC_f,     /* 548: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1_kn[0],/* 549: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2_k,/* 550: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3_m,/* 551: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4_p1,/* 552: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5_i,/* 553: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6_d,/* 554: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7_gg,/* 555: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1_f[0],/* 556: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2_c,/* 557: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3_p,/* 558: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4_i,/* 559: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5_h,/* 560: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6_h,/* 561: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7_lo,/* 562: Block Parameter */
  &StateFlowGUI_P.Constant_Value,      /* 563: Block Parameter */
  &StateFlowGUI_P.Memory_X0,           /* 564: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1[0],/* 565: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2,/* 566: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3,/* 567: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4,/* 568: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5,/* 569: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6,/* 570: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7,/* 571: Block Parameter */
  &StateFlowGUI_P.Constant_Value_l,    /* 572: Block Parameter */
  &StateFlowGUI_P.Memory_X0_m,         /* 573: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1_g[0],/* 574: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2_p,/* 575: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3_f,/* 576: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4_a,/* 577: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5_d,/* 578: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6_c,/* 579: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7_a,/* 580: Block Parameter */
  &StateFlowGUI_P.Constant_Value_e,    /* 581: Block Parameter */
  &StateFlowGUI_P.Memory_X0_o,         /* 582: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1_i[0],/* 583: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2_m,/* 584: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3_m,/* 585: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4_l,/* 586: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5_b,/* 587: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6_l,/* 588: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7_b,/* 589: Block Parameter */
  &StateFlowGUI_P.Constant_Value_o,    /* 590: Block Parameter */
  &StateFlowGUI_P.Memory_X0_e,         /* 591: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P1_n[0],/* 592: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P2_d,/* 593: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P3_fe,/* 594: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P4_ag,/* 595: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P5_h,/* 596: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P6_h,/* 597: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive9_P7_l,/* 598: Block Parameter */
  &StateFlowGUI_P.DiscreteDerivativeA_ICPrevScale,/* 599: Mask Parameter */
  &StateFlowGUI_P.Gain_Gain,           /* 600: Block Parameter */
  &StateFlowGUI_P.Gain6_Gain,          /* 601: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_l,        /* 602: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P1_n[0],/* 603: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P2_g,/* 604: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P3_n,/* 605: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P4_p,/* 606: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P5_k,/* 607: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P6_mb,/* 608: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive14_P7_g,/* 609: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P1_l[0],/* 610: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P2_n,/* 611: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P3_i,/* 612: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P4_j,/* 613: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P5_l,/* 614: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P6_f,/* 615: Block Parameter */
  &StateFlowGUI_P.EtherCATPDOReceive15_P7_l,/* 616: Block Parameter */
  &StateFlowGUI_P.CA_Y0,               /* 617: Block Parameter */
  &StateFlowGUI_P.CB_Y0,               /* 618: Block Parameter */
  &StateFlowGUI_P.CH_Y0,               /* 619: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_e,        /* 620: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_g,        /* 621: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt,          /* 622: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_gh,       /* 623: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_d,        /* 624: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_p,        /* 625: Block Parameter */
  &StateFlowGUI_P.TSamp_WtEt_n,        /* 626: Block Parameter */
  &StateFlowGUI_P.Duk_Gain_h,          /* 627: Block Parameter */
  &StateFlowGUI_P.Delay_x1_InitialCondition_l,/* 628: Block Parameter */
  &StateFlowGUI_P.Delay_x2_InitialCondition_l,/* 629: Block Parameter */
  &StateFlowGUI_P.Duk_Gain,            /* 630: Block Parameter */
  &StateFlowGUI_P.Delay_x1_InitialCondition,/* 631: Block Parameter */
  &StateFlowGUI_P.Delay_x2_InitialCondition,/* 632: Block Parameter */
  &StateFlowGUI_P.Duk_Gain_g,          /* 633: Block Parameter */
  &StateFlowGUI_P.Delay_x1_InitialCondition_n,/* 634: Block Parameter */
  &StateFlowGUI_P.Delay_x2_InitialCondition_e,/* 635: Block Parameter */
  &StateFlowGUI_P.A11_Gain_e,          /* 636: Block Parameter */
  &StateFlowGUI_P.A12_Gain_a,          /* 637: Block Parameter */
  &StateFlowGUI_P.A21_Gain_m,          /* 638: Block Parameter */
  &StateFlowGUI_P.A22_Gain_g,          /* 639: Block Parameter */
  &StateFlowGUI_P.B11_Gain_f,          /* 640: Block Parameter */
  &StateFlowGUI_P.B21_Gain_p,          /* 641: Block Parameter */
  &StateFlowGUI_P.C11_Gain_n,          /* 642: Block Parameter */
  &StateFlowGUI_P.C12_Gain_d,          /* 643: Block Parameter */
  &StateFlowGUI_P.A11_Gain,            /* 644: Block Parameter */
  &StateFlowGUI_P.A12_Gain,            /* 645: Block Parameter */
  &StateFlowGUI_P.A21_Gain,            /* 646: Block Parameter */
  &StateFlowGUI_P.A22_Gain,            /* 647: Block Parameter */
  &StateFlowGUI_P.B11_Gain,            /* 648: Block Parameter */
  &StateFlowGUI_P.B21_Gain,            /* 649: Block Parameter */
  &StateFlowGUI_P.C11_Gain,            /* 650: Block Parameter */
  &StateFlowGUI_P.C12_Gain,            /* 651: Block Parameter */
  &StateFlowGUI_P.A11_Gain_h,          /* 652: Block Parameter */
  &StateFlowGUI_P.A12_Gain_a3,         /* 653: Block Parameter */
  &StateFlowGUI_P.A21_Gain_f,          /* 654: Block Parameter */
  &StateFlowGUI_P.A22_Gain_d,          /* 655: Block Parameter */
  &StateFlowGUI_P.B11_Gain_n,          /* 656: Block Parameter */
  &StateFlowGUI_P.B21_Gain_l,          /* 657: Block Parameter */
  &StateFlowGUI_P.C11_Gain_g,          /* 658: Block Parameter */
  &StateFlowGUI_P.C12_Gain_d1,         /* 659: Block Parameter */
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
  { rtBlockSignals, 318,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 342,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3920527644U,
    513070576U,
    2758094169U,
    2294494389U },
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
