#ifndef __c15_StateflowKalman_h__
#define __c15_StateflowKalman_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc15_StateflowKalmanInstanceStruct
#define typedef_SFc15_StateflowKalmanInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c15_SampleTime;
  boolean_T c15_dataWrittenToVector[27];
  uint8_T c15_doSetSimStateSideEffects;
  const mxArray *c15_setSimStateSideEffectsInfo;
  void *c15_fEmlrtCtx;
  int32_T *c15_sfEvent;
  uint8_T *c15_is_active_c15_StateflowKalman;
  uint8_T *c15_is_c15_StateflowKalman;
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
  real_T *c15_conv_vite;
  real_T *c15_Hv;
  real_T *c15_Hb;
  real_T *c15_HomeSignal;
  real_T *c15_avvio;
  real_T *c15_BeginWork;
  real_T *c15_Enable;
  real_T *c15_FineLavorazione;
  real_T *c15_ResetButton;
  real_T *c15_StopPressed;
  real_T *c15_PosRifA;
  real_T *c15_PosRifB;
  real_T *c15_Stato;
  real_T *c15_ZeroSignal;
  real_T *c15_DiscVite;
  real_T *c15_AbbassaVite;
  real_T *c15_dv;
  real_T *c15_b_CoppiaA;
  real_T *c15_b_CoppiaB;
  real_T *c15_b_posA;
  real_T *c15_b_posB;
  real_T *c15_b_OffA_0;
  real_T *c15_b_OffB_0;
  real_T *c15_b_Clock;
  real_T *c15_b_OffT;
  real_T *c15_Fc;
  real_T *c15_Fca;
  real_T *c15_Fcb;
  real_T *c15_posrifA;
  real_T *c15_posrifB;
  real_T *c15_c_posA;
  real_T *c15_c_posB;
  real_T *c15_CA;
  real_T *c15_CB;
  real_T *c15_CH;
  uint16_T *c15_temporalCounter_i1;
} SFc15_StateflowKalmanInstanceStruct;

#endif                                 /*typedef_SFc15_StateflowKalmanInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c15_StateflowKalman_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c15_StateflowKalman_get_check_sum(mxArray *plhs[]);
extern void c15_StateflowKalman_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
