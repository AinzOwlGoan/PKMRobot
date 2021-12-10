/*
 * TestVite_data.c
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

#include "TestVite.h"
#include "TestVite_private.h"

/* Block parameters (auto storage) */
P_TestVite_T TestVite_P = {
  300.0,                               /* Mask Parameter: Ramp_X0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  25.0,                                /* Mask Parameter: Ramp_slope
                                        * Referenced by: '<S1>/Step'
                                        */
  0.0,                                 /* Mask Parameter: Ramp_start
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S1>/Step'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Asse A vite'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit6_P1_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 43.0 },

  /*  Computed Parameter: EtherCATPDOTransmit6_P1
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 77.0, 111.0, 100.0, 101.0, 115.0, 32.0, 111.0, 102.0, 32.0, 111.0,
    112.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  /*  Computed Parameter: EtherCATPDOTransmit6_P2_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },
  264.0,                               /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit6_P3_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit6_P4_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },
  8.0,                                 /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit6_P5_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit6_P6_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit6_P7_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Asse B vite'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit4_P1_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 43.0 },

  /*  Computed Parameter: EtherCATPDOTransmit4_P1
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 77.0, 111.0, 100.0, 101.0, 115.0, 32.0, 111.0, 102.0, 32.0, 111.0,
    112.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  /*  Computed Parameter: EtherCATPDOTransmit4_P2_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },
  264.0,                               /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit4_P3_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit4_P4_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },
  8.0,                                 /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit4_P5_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit4_P6_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit4_P7_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Step'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit2_P1_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 38.0 },

  /*  Computed Parameter: EtherCATPDOTransmit2_P1
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 66.0,
    32.0, 84.0, 97.0, 114.0, 103.0, 101.0, 116.0, 32.0, 84.0, 111.0, 114.0,
    113.0, 117.0, 101.0 },

  /*  Computed Parameter: EtherCATPDOTransmit2_P2_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },
  296.0,                               /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit2_P3_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit2_P4_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },
  16.0,                                /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit2_P5_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit2_P6_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
                                        */

  /*  Computed Parameter: EtherCATPDOTransmit2_P7_Size
   * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
   */
  { 1.0, 1.0 },
  0.001                                /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 2'
                                        */
};
