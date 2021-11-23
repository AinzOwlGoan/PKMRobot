/*
 * StateFlowGUI_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.882
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Nov 23 10:48:39 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "StateFlowGUI.h"
#include "StateFlowGUI_private.h"

/* Block parameters (auto storage) */
P_StateFlowGUI_T StateFlowGUI_P = {
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  100.0,
  100.0,
  30000.0,
  30000.0,
  3.0,
  3.0,
  1.0,
  3.0,
  3.0,
  0.0,
  0.0,
  0.0,
  4.0,

  { 1.0, 43.0 },

  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 66.0,
    32.0, 77.0, 111.0, 100.0, 101.0, 115.0, 32.0, 111.0, 102.0, 32.0, 111.0,
    112.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  288.0,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  4.0,

  { 1.0, 43.0 },

  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 77.0, 111.0, 100.0, 101.0, 115.0, 32.0, 111.0, 102.0, 32.0, 111.0,
    112.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  264.0,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  4.0,

  { 1.0, 43.0 },

  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 77.0, 111.0, 100.0, 101.0, 115.0, 32.0, 111.0, 102.0, 32.0, 111.0,
    112.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  264.0,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  4.0,

  { 1.0, 43.0 },

  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 77.0, 111.0, 100.0, 101.0, 115.0, 32.0, 111.0, 102.0, 32.0, 111.0,
    112.0, 101.0, 114.0, 97.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  264.0,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 50.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 112.0, 111.0, 115.0, 105.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  272.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 50.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    66.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 112.0, 111.0, 115.0, 105.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  360.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 37.0 },

  { 65.0, 90.0, 50.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 52.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 83.0, 116.0, 97.0, 116.0, 117.0, 115.0, 32.0, 119.0, 111.0,
    114.0, 100.0 },

  { 1.0, 1.0 },
  456.0,

  { 1.0, 1.0 },
  6.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 41.0 },

  { 65.0, 90.0, 50.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 51.0, 46.0, 71.0, 101.0, 110.0, 101.0, 114.0,
    97.0, 108.0, 32.0, 112.0, 117.0, 114.0, 112.0, 111.0, 115.0, 101.0, 32.0,
    105.0, 110.0, 112.0, 117.0, 116.0, 115.0 },

  { 1.0, 1.0 },
  440.0,

  { 1.0, 1.0 },
  6.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 112.0, 111.0, 115.0, 105.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    66.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 112.0, 111.0, 115.0, 105.0, 116.0, 105.0, 111.0, 110.0 },

  { 1.0, 1.0 },
  104.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 41.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 51.0, 46.0, 71.0, 101.0, 110.0, 101.0, 114.0,
    97.0, 108.0, 32.0, 112.0, 117.0, 114.0, 112.0, 111.0, 115.0, 101.0, 32.0,
    105.0, 110.0, 112.0, 117.0, 116.0, 115.0 },

  { 1.0, 1.0 },
  184.0,

  { 1.0, 1.0 },
  6.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  3000.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 1.0, 24.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 54.0, 46.0, 79.0, 117.0, 116.0, 112.0,
    117.0, 116.0 },

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 24.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 56.0, 46.0, 79.0, 117.0, 116.0, 112.0,
    117.0, 116.0 },

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 24.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 55.0, 46.0, 79.0, 117.0, 116.0, 112.0,
    117.0, 116.0 },

  { 1.0, 1.0 },
  2.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  0.0,
  0.0,
  1.7453292519943295,
  1.3962634015954636,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    66.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  136.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  48.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  1.7453292519943295,
  1.3962634015954636,
  2.0,
  10.0,
  0.1,
  1.0,
  0.05,
  0.015,
  32.0,
  0.125,
  10.0,
  0.04,
  3.0,
  0.02,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    66.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  136.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  48.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  5.0,
  3333.3333333333335,
  2500.0,
  -2500.0,

  { 1.0, 38.0 },

  { 65.0, 90.0, 49.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 84.0, 97.0, 114.0, 103.0, 101.0, 116.0, 32.0, 84.0, 111.0, 114.0,
    113.0, 117.0, 101.0 },

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 23.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 49.0, 46.0, 73.0, 110.0, 112.0, 117.0,
    116.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  0.0,
  0.0,
  3333.3333333333335,
  2500.0,
  -2500.0,

  { 1.0, 38.0 },

  { 65.0, 90.0, 49.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 66.0,
    32.0, 84.0, 97.0, 114.0, 103.0, 101.0, 116.0, 32.0, 84.0, 111.0, 114.0,
    113.0, 117.0, 101.0 },

  { 1.0, 1.0 },
  40.0,

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 23.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 49.0, 46.0, 73.0, 110.0, 112.0, 117.0,
    116.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  0.0,
  0.0,
  0.0,
  2.0,
  833333.33333333337,

  { 1.0, 47.0 },

  { 65.0, 90.0, 50.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  304.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 47.0 },

  { 65.0, 90.0, 50.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    66.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  392.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  13888.888888888889,

  { 1.0, 38.0 },

  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 65.0,
    32.0, 84.0, 97.0, 114.0, 103.0, 101.0, 116.0, 32.0, 84.0, 111.0, 114.0,
    113.0, 117.0, 101.0 },

  { 1.0, 1.0 },
  272.0,

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 23.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 49.0, 46.0, 73.0, 110.0, 112.0, 117.0,
    116.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  0.0,
  0.0,
  0.0,
  6.0,
  5555.5555555555557,
  2.7777777777777777,
  0.0,
  600.0,
  -600.0,

  { 1.0, 38.0 },

  { 65.0, 90.0, 50.0, 46.0, 82.0, 101.0, 99.0, 101.0, 105.0, 118.0, 101.0, 32.0,
    80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0, 66.0,
    32.0, 84.0, 97.0, 114.0, 103.0, 101.0, 116.0, 32.0, 84.0, 111.0, 114.0,
    113.0, 117.0, 101.0 },

  { 1.0, 1.0 },
  296.0,

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,

  { 1.0, 23.0 },

  { 66.0, 101.0, 99.0, 107.0, 111.0, 102.0, 102.0, 46.0, 67.0, 104.0, 97.0,
    110.0, 110.0, 101.0, 108.0, 32.0, 49.0, 46.0, 73.0, 110.0, 112.0, 117.0,
    116.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  2.0,
  10.0,
  0.1,
  5.0,
  0.05,
  0.015,
  32.0,
  0.125,
  20.0,
  0.05,
  4.0,
  0.02,
  0.5,
  0.0,
  0.0,
  1.7453292519943295,
  1.3962634015954636,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 50.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    66.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  136.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  20.0,

  { 1.0, 47.0 },

  { 65.0, 90.0, 49.0, 46.0, 84.0, 114.0, 97.0, 110.0, 115.0, 109.0, 105.0, 116.0,
    32.0, 80.0, 68.0, 79.0, 32.0, 49.0, 46.0, 65.0, 120.0, 105.0, 115.0, 32.0,
    65.0, 32.0, 65.0, 99.0, 116.0, 117.0, 97.0, 108.0, 32.0, 109.0, 111.0, 116.0,
    111.0, 114.0, 32.0, 118.0, 101.0, 108.0, 111.0, 99.0, 105.0, 116.0, 121.0 },

  { 1.0, 1.0 },
  48.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.001,
  20.0,
  0.001,
  0.0,
  0.001,
  0.0,
  0.001,
  0.0,
  0.001,
  0.0,
  1000.0,
  1000.0,
  5.0,
  9.0,
  1000.0,
  0.0087417122878399815,
  0.0,
  35.429596809242618,
  0.0,
  0.017483424575679963,
  1000.0,
  0.98251657542432014,
  0.0009783114158223795,
  -34.966849151359462,
  0.95662283164474615,
  0.000489155707911193,
  0.978311415822373,
  0.0086934751553626125,
  0.0,
  35.431320902928483,
  0.0,
  0.017386950310725225,
  1000.0,
  1000.0,
  0.98261304968927488,
  0.00097291305268536361,
  -34.773900621450565,
  0.94582610537073,
  0.00048645652634268094,
  0.972913052685365,
  0.46728971962616817,
  0.0,
  2130.8411214953271,
  0.0,
  0.93457943925233633,
  1000.0,
  1000.0,
  0.06542056074766367,
  0.0004672897196261683,
  -1869.1588785046724,
  -0.065420560747663448,
  0.00023364485981308415,
  0.46728971962616822,
  57.295779513082323,
  57.295779513082323
};
