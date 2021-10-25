#ifndef __c15_State_Flow_Test_h__
#define __c15_State_Flow_Test_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc15_State_Flow_TestInstanceStruct
#define typedef_SFc15_State_Flow_TestInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c15_SampleTime;
  boolean_T c15_dataWrittenToVector[20];
  uint8_T c15_doSetSimStateSideEffects;
  const mxArray *c15_setSimStateSideEffectsInfo;
  void *c15_fEmlrtCtx;
  int32_T *c15_sfEvent;
  uint8_T *c15_is_active_c15_State_Flow_Test;
  uint8_T *c15_is_c15_State_Flow_Test;
  real_T *c15_Clock;
  real_T *c15_posA_vite;
  real_T *c15_posB_vite;
  real_T *c15_Status;
  real_T *c15_fc;
  real_T *c15_posA;
  real_T *c15_posB;
  real_T *c15_Bool;
  real_T *c15_OffT;
  real_T *c15_CoppiaH;
  real_T *c15_OffA_vite;
  real_T *c15_OffB_vite;
  real_T *c15_OffA;
  real_T *c15_OffB;
  real_T *c15_CoppiaA;
  real_T *c15_CoppiaB;
  real_T *c15_fcA;
  real_T *c15_fcB;
  real_T *c15_conv;
  real_T *c15_Luci;
  real_T *c15_OffA_0;
  real_T *c15_OffB_0;
  real_T *c15_C1;
  real_T *c15_C2;
  real_T *c15_conv_vite;
  real_T *c15_velA;
  real_T *c15_velB;
  real_T *c15_Kp;
  real_T *c15_KP;
  real_T *c15_b_fc;
  real_T *c15_CA;
  real_T *c15_CB;
  real_T *c15_CH;
  real_T *c15_b_fcA;
  real_T *c15_b_fcB;
  uint16_T *c15_temporalCounter_i1;
} SFc15_State_Flow_TestInstanceStruct;

#endif                                 /*typedef_SFc15_State_Flow_TestInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c15_State_Flow_Test_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c15_State_Flow_Test_get_check_sum(mxArray *plhs[]);
extern void c15_State_Flow_Test_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
