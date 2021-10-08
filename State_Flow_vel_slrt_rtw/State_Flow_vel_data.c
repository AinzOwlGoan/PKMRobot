/*
 * State_Flow_vel_data.c
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

#include "State_Flow_vel.h"
#include "State_Flow_vel_private.h"

/* Block parameters (auto storage) */
P_State_Flow_vel_T State_Flow_vel_P = {
  0.0,
  0.0,
  1000.0,
  1000.0,
  0.0,
  0.0,
  100.0,
  100.0,
  200000.0,
  200000.0,
  0.0,
  3.0,
  0.0,
  3.0,
  20833.333333333336,
  833333.33333333337,
  -1.0,
  0.0,
  0.0,
  277.77777777777777,
  5555.5555555555557,
  6.0,
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
  5.9921124526782858E-6,
  57.295779513082323,
  5.9921124526782858E-6,
  57.295779513082323,

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
  6.0,
  0.1,
  4.0,
  0.1,
  1.0,
  2.0943951023931953,
  1.2217304763960306,
  0.001,
  0.0,
  0.001,
  0.0,

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
  4000.0,
  -4000.0,

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
  0.001,
  0.0,
  0.001,
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
  3500.0,
  -3500.0,

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
  7.0,

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
  6.0,
  0.0,
  0.0,
  0.0,
  7.0,
  0.0,

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
  57.295779513082323,
  57.295779513082323,
  57.295779513082323,
  57.295779513082323,
  1000.0,
  1000.0
};