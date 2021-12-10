/* Include files */

#include "StateFlowFinal_sfun.h"
#include "c15_StateFlowFinal.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "StateFlowFinal_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c15_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c15_IN_Attivazione             ((uint8_T)1U)
#define c15_IN_Controllo               ((uint8_T)2U)
#define c15_IN_Discesa_Vite            ((uint8_T)3U)
#define c15_IN_FineLavorazione         ((uint8_T)4U)
#define c15_IN_Home                    ((uint8_T)5U)
#define c15_IN_HomeDef                 ((uint8_T)6U)
#define c15_IN_OffSet                  ((uint8_T)7U)
#define c15_IN_Step1                   ((uint8_T)8U)
#define c15_IN_StopPhase               ((uint8_T)9U)
#define c15_const_SampleTime           (0.0)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c15_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c15_l_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_r_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_s_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c15_t_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void initialize_params_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void enable_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void disable_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void c15_update_debugger_state_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void ext_mode_exec_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance);
static const mxArray *get_sim_state_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void set_sim_state_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance, const mxArray *c15_st);
static void c15_set_sim_state_side_effects_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void finalize_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void sf_gateway_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void mdl_start_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void c15_chartstep_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance);
static void initSimStructsc15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance);
static void c15_Discesa_Vite(SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void c15_Controllo(SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void c15_Attivazione(SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void c15_enter_atomic_Home(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void c15_Home(SFc15_StateFlowFinalInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber, uint32_T c15_instanceNumber);
static const mxArray *c15_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static real_T c15_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_nargout, const char_T *c15_identifier);
static real_T c15_b_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_b_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static boolean_T c15_c_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_c_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static int32_T c15_d_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static uint8_T c15_e_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_b_is_active_c15_StateFlowFinal, const
  char_T *c15_identifier);
static uint8_T c15_f_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static uint16_T c15_g_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_b_temporalCounter_i1, const char_T
  *c15_identifier);
static uint16_T c15_h_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_i_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_b_dataWrittenToVector, const char_T
  *c15_identifier, boolean_T c15_y[27]);
static void c15_j_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId,
  boolean_T c15_y[27]);
static const mxArray *c15_k_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct *
  chartInstance, const mxArray *c15_b_setSimStateSideEffectsInfo, const char_T
  *c15_identifier);
static const mxArray *c15_l_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct *
  chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc15_StateFlowFinalInstanceStruct *chartInstance, int32_T c15_ssid);
static void c15_init_sf_message_store_memory(SFc15_StateFlowFinalInstanceStruct *
  chartInstance);
static void init_dsm_address_info(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc15_StateFlowFinalInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc15_StateFlowFinal(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c15_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c15_doSetSimStateSideEffects = 0U;
  chartInstance->c15_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c15_temporalCounter_i1 = 0U;
  *chartInstance->c15_temporalCounter_i1 = 0U;
  *chartInstance->c15_is_active_c15_StateFlowFinal = 0U;
  *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_NO_ACTIVE_CHILD;
  chartInstance->c15_SampleTime = 0.0;
  _SFD_DATA_RANGE_CHECK(chartInstance->c15_SampleTime, 39U, 1U, 12U,
                        *chartInstance->c15_sfEvent, false);
}

static void initialize_params_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  sf_call_output_fcn_enable(chartInstance->S, 0, "Posizionamento", 0);
  sf_call_output_fcn_enable(chartInstance->S, 1, "Setting", 0);
}

static void disable_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  sf_call_output_fcn_disable(chartInstance->S, 0, "Posizionamento", 0);
  sf_call_output_fcn_disable(chartInstance->S, 1, "Setting", 0);
}

static void c15_update_debugger_state_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  uint32_T c15_prevAniVal;
  c15_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c15_is_active_c15_StateFlowFinal == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 12U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_Step1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_HomeDef) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_Discesa_Vite) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_OffSet) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_Controllo) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_Attivazione) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_FineLavorazione) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_Home) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c15_sfEvent);
  }

  if (*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_StopPhase) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c15_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c15_sfEvent);
  }

  _SFD_SET_ANIMATION(c15_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance)
{
  c15_update_debugger_state_c15_StateFlowFinal(chartInstance);
}

static const mxArray *get_sim_state_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  const mxArray *c15_st;
  const mxArray *c15_y = NULL;
  real_T c15_hoistedGlobal;
  const mxArray *c15_b_y = NULL;
  real_T c15_b_hoistedGlobal;
  const mxArray *c15_c_y = NULL;
  real_T c15_c_hoistedGlobal;
  const mxArray *c15_d_y = NULL;
  real_T c15_d_hoistedGlobal;
  const mxArray *c15_e_y = NULL;
  real_T c15_e_hoistedGlobal;
  const mxArray *c15_f_y = NULL;
  real_T c15_f_hoistedGlobal;
  const mxArray *c15_g_y = NULL;
  real_T c15_g_hoistedGlobal;
  const mxArray *c15_h_y = NULL;
  real_T c15_h_hoistedGlobal;
  const mxArray *c15_i_y = NULL;
  real_T c15_i_hoistedGlobal;
  const mxArray *c15_j_y = NULL;
  real_T c15_j_hoistedGlobal;
  const mxArray *c15_k_y = NULL;
  real_T c15_k_hoistedGlobal;
  const mxArray *c15_l_y = NULL;
  real_T c15_l_hoistedGlobal;
  const mxArray *c15_m_y = NULL;
  real_T c15_m_hoistedGlobal;
  const mxArray *c15_n_y = NULL;
  real_T c15_n_hoistedGlobal;
  const mxArray *c15_o_y = NULL;
  real_T c15_o_hoistedGlobal;
  const mxArray *c15_p_y = NULL;
  real_T c15_p_hoistedGlobal;
  const mxArray *c15_q_y = NULL;
  real_T c15_q_hoistedGlobal;
  const mxArray *c15_r_y = NULL;
  real_T c15_r_hoistedGlobal;
  const mxArray *c15_s_y = NULL;
  real_T c15_s_hoistedGlobal;
  const mxArray *c15_t_y = NULL;
  real_T c15_t_hoistedGlobal;
  const mxArray *c15_u_y = NULL;
  real_T c15_u_hoistedGlobal;
  const mxArray *c15_v_y = NULL;
  real_T c15_v_hoistedGlobal;
  const mxArray *c15_w_y = NULL;
  uint8_T c15_w_hoistedGlobal;
  const mxArray *c15_x_y = NULL;
  uint8_T c15_x_hoistedGlobal;
  const mxArray *c15_y_y = NULL;
  uint16_T c15_y_hoistedGlobal;
  const mxArray *c15_ab_y = NULL;
  const mxArray *c15_bb_y = NULL;
  c15_st = NULL;
  c15_st = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_createcellmatrix(26, 1), false);
  c15_hoistedGlobal = *chartInstance->c15_Bool;
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 0, c15_b_y);
  c15_b_hoistedGlobal = *chartInstance->c15_CoppiaA;
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y", &c15_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 1, c15_c_y);
  c15_c_hoistedGlobal = *chartInstance->c15_CoppiaB;
  c15_d_y = NULL;
  sf_mex_assign(&c15_d_y, sf_mex_create("y", &c15_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 2, c15_d_y);
  c15_d_hoistedGlobal = *chartInstance->c15_CoppiaH;
  c15_e_y = NULL;
  sf_mex_assign(&c15_e_y, sf_mex_create("y", &c15_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 3, c15_e_y);
  c15_e_hoistedGlobal = *chartInstance->c15_Enable;
  c15_f_y = NULL;
  sf_mex_assign(&c15_f_y, sf_mex_create("y", &c15_e_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 4, c15_f_y);
  c15_f_hoistedGlobal = *chartInstance->c15_FineLavorazione;
  c15_g_y = NULL;
  sf_mex_assign(&c15_g_y, sf_mex_create("y", &c15_f_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 5, c15_g_y);
  c15_g_hoistedGlobal = *chartInstance->c15_Hb;
  c15_h_y = NULL;
  sf_mex_assign(&c15_h_y, sf_mex_create("y", &c15_g_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 6, c15_h_y);
  c15_h_hoistedGlobal = *chartInstance->c15_Hv;
  c15_i_y = NULL;
  sf_mex_assign(&c15_i_y, sf_mex_create("y", &c15_h_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 7, c15_i_y);
  c15_i_hoistedGlobal = *chartInstance->c15_Luci;
  c15_j_y = NULL;
  sf_mex_assign(&c15_j_y, sf_mex_create("y", &c15_i_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 8, c15_j_y);
  c15_j_hoistedGlobal = *chartInstance->c15_OffA;
  c15_k_y = NULL;
  sf_mex_assign(&c15_k_y, sf_mex_create("y", &c15_j_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 9, c15_k_y);
  c15_k_hoistedGlobal = *chartInstance->c15_OffA_vite;
  c15_l_y = NULL;
  sf_mex_assign(&c15_l_y, sf_mex_create("y", &c15_k_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 10, c15_l_y);
  c15_l_hoistedGlobal = *chartInstance->c15_OffB;
  c15_m_y = NULL;
  sf_mex_assign(&c15_m_y, sf_mex_create("y", &c15_l_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 11, c15_m_y);
  c15_m_hoistedGlobal = *chartInstance->c15_OffB_vite;
  c15_n_y = NULL;
  sf_mex_assign(&c15_n_y, sf_mex_create("y", &c15_m_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 12, c15_n_y);
  c15_n_hoistedGlobal = *chartInstance->c15_OffT;
  c15_o_y = NULL;
  sf_mex_assign(&c15_o_y, sf_mex_create("y", &c15_n_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 13, c15_o_y);
  c15_o_hoistedGlobal = *chartInstance->c15_PosRifA;
  c15_p_y = NULL;
  sf_mex_assign(&c15_p_y, sf_mex_create("y", &c15_o_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 14, c15_p_y);
  c15_p_hoistedGlobal = *chartInstance->c15_PosRifB;
  c15_q_y = NULL;
  sf_mex_assign(&c15_q_y, sf_mex_create("y", &c15_p_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 15, c15_q_y);
  c15_q_hoistedGlobal = *chartInstance->c15_Stato;
  c15_r_y = NULL;
  sf_mex_assign(&c15_r_y, sf_mex_create("y", &c15_q_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 16, c15_r_y);
  c15_r_hoistedGlobal = *chartInstance->c15_OffA_0;
  c15_s_y = NULL;
  sf_mex_assign(&c15_s_y, sf_mex_create("y", &c15_r_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 17, c15_s_y);
  c15_s_hoistedGlobal = *chartInstance->c15_OffB_0;
  c15_t_y = NULL;
  sf_mex_assign(&c15_t_y, sf_mex_create("y", &c15_s_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 18, c15_t_y);
  c15_t_hoistedGlobal = *chartInstance->c15_conv;
  c15_u_y = NULL;
  sf_mex_assign(&c15_u_y, sf_mex_create("y", &c15_t_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 19, c15_u_y);
  c15_u_hoistedGlobal = *chartInstance->c15_conv_vite;
  c15_v_y = NULL;
  sf_mex_assign(&c15_v_y, sf_mex_create("y", &c15_u_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 20, c15_v_y);
  c15_v_hoistedGlobal = *chartInstance->c15_dv;
  c15_w_y = NULL;
  sf_mex_assign(&c15_w_y, sf_mex_create("y", &c15_v_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 21, c15_w_y);
  c15_w_hoistedGlobal = *chartInstance->c15_is_active_c15_StateFlowFinal;
  c15_x_y = NULL;
  sf_mex_assign(&c15_x_y, sf_mex_create("y", &c15_w_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 22, c15_x_y);
  c15_x_hoistedGlobal = *chartInstance->c15_is_c15_StateFlowFinal;
  c15_y_y = NULL;
  sf_mex_assign(&c15_y_y, sf_mex_create("y", &c15_x_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c15_y, 23, c15_y_y);
  c15_y_hoistedGlobal = *chartInstance->c15_temporalCounter_i1;
  c15_ab_y = NULL;
  sf_mex_assign(&c15_ab_y, sf_mex_create("y", &c15_y_hoistedGlobal, 5, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c15_y, 24, c15_ab_y);
  c15_bb_y = NULL;
  sf_mex_assign(&c15_bb_y, sf_mex_create("y",
    chartInstance->c15_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 27), false);
  sf_mex_setcell(c15_y, 25, c15_bb_y);
  sf_mex_assign(&c15_st, c15_y, false);
  return c15_st;
}

static void set_sim_state_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance, const mxArray *c15_st)
{
  const mxArray *c15_u;
  boolean_T c15_bv0[27];
  int32_T c15_i0;
  c15_u = sf_mex_dup(c15_st);
  *chartInstance->c15_Bool = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Bool", c15_u, 0)), "Bool");
  *chartInstance->c15_CoppiaA = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("CoppiaA", c15_u, 1)), "CoppiaA");
  *chartInstance->c15_CoppiaB = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("CoppiaB", c15_u, 2)), "CoppiaB");
  *chartInstance->c15_CoppiaH = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("CoppiaH", c15_u, 3)), "CoppiaH");
  *chartInstance->c15_Enable = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Enable", c15_u, 4)), "Enable");
  *chartInstance->c15_FineLavorazione = c15_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("FineLavorazione", c15_u, 5)), "FineLavorazione");
  *chartInstance->c15_Hb = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Hb", c15_u, 6)), "Hb");
  *chartInstance->c15_Hv = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Hv", c15_u, 7)), "Hv");
  *chartInstance->c15_Luci = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Luci", c15_u, 8)), "Luci");
  *chartInstance->c15_OffA = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffA", c15_u, 9)), "OffA");
  *chartInstance->c15_OffA_vite = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffA_vite", c15_u, 10)), "OffA_vite");
  *chartInstance->c15_OffB = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffB", c15_u, 11)), "OffB");
  *chartInstance->c15_OffB_vite = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffB_vite", c15_u, 12)), "OffB_vite");
  *chartInstance->c15_OffT = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffT", c15_u, 13)), "OffT");
  *chartInstance->c15_PosRifA = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("PosRifA", c15_u, 14)), "PosRifA");
  *chartInstance->c15_PosRifB = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("PosRifB", c15_u, 15)), "PosRifB");
  *chartInstance->c15_Stato = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Stato", c15_u, 16)), "Stato");
  *chartInstance->c15_OffA_0 = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffA_0", c15_u, 17)), "OffA_0");
  *chartInstance->c15_OffB_0 = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("OffB_0", c15_u, 18)), "OffB_0");
  *chartInstance->c15_conv = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("conv", c15_u, 19)), "conv");
  *chartInstance->c15_conv_vite = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("conv_vite", c15_u, 20)), "conv_vite");
  *chartInstance->c15_dv = c15_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("dv", c15_u, 21)), "dv");
  *chartInstance->c15_is_active_c15_StateFlowFinal = c15_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c15_StateFlowFinal",
       c15_u, 22)), "is_active_c15_StateFlowFinal");
  *chartInstance->c15_is_c15_StateFlowFinal = c15_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_c15_StateFlowFinal", c15_u, 23)),
     "is_c15_StateFlowFinal");
  *chartInstance->c15_temporalCounter_i1 = c15_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c15_u, 24)),
    "temporalCounter_i1");
  c15_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c15_u, 25)), "dataWrittenToVector", c15_bv0);
  for (c15_i0 = 0; c15_i0 < 27; c15_i0++) {
    chartInstance->c15_dataWrittenToVector[c15_i0] = c15_bv0[c15_i0];
  }

  sf_mex_assign(&chartInstance->c15_setSimStateSideEffectsInfo,
                c15_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c15_u, 26)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c15_u);
  chartInstance->c15_doSetSimStateSideEffects = 1U;
  c15_update_debugger_state_c15_StateFlowFinal(chartInstance);
  sf_mex_destroy(&c15_st);
}

static void c15_set_sim_state_side_effects_c15_StateFlowFinal
  (SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  if (chartInstance->c15_doSetSimStateSideEffects != 0) {
    if ((*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_Controllo) &&
        (sf_mex_sub(chartInstance->c15_setSimStateSideEffectsInfo,
                    "setSimStateSideEffectsInfo", 1, 3) == 0.0)) {
      *chartInstance->c15_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c15_is_c15_StateFlowFinal == c15_IN_FineLavorazione) &&
        (sf_mex_sub(chartInstance->c15_setSimStateSideEffectsInfo,
                    "setSimStateSideEffectsInfo", 1, 5) == 0.0)) {
      *chartInstance->c15_temporalCounter_i1 = 0U;
    }

    chartInstance->c15_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c15_setSimStateSideEffectsInfo);
}

static void sf_gateway_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  c15_set_sim_state_side_effects_c15_StateFlowFinal(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  if (*chartInstance->c15_temporalCounter_i1 < 65535U) {
    (*chartInstance->c15_temporalCounter_i1)++;
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 12U, *chartInstance->c15_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_AbbassaVite, 21U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_DiscVite, 20U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_ZeroSignal, 19U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_StopPressed, 18U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_ResetButton, 17U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_BeginWork, 16U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_avvio, 15U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_HomeSignal, 14U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_fcB, 13U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_fcA, 12U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_posB, 11U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_posA, 10U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_fc, 9U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Status, 8U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_posB_vite, 7U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_posA_vite, 6U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Clock, 5U, 1U, 0U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_sfEvent = CALL_EVENT;
  c15_chartstep_c15_StateFlowFinal(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_StateFlowFinalMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  c15_init_sf_message_store_memory(chartInstance);
}

static void c15_chartstep_c15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance)
{
  uint32_T c15_debug_family_var_map[3];
  real_T c15_nargin = 0.0;
  real_T c15_b_nargin = 0.0;
  real_T c15_c_nargin = 0.0;
  uint32_T c15_b_debug_family_var_map[2];
  real_T c15_nargout = 1.0;
  real_T c15_b_nargout = 1.0;
  real_T c15_c_nargout = 1.0;
  real_T c15_d_nargin = 0.0;
  boolean_T c15_out;
  boolean_T c15_b_out;
  boolean_T c15_c_out;
  real_T c15_d_nargout = 0.0;
  real_T c15_e_nargin = 0.0;
  real_T c15_e_nargout = 1.0;
  boolean_T c15_d_out;
  real_T c15_f_nargin = 0.0;
  real_T c15_f_nargout = 1.0;
  boolean_T c15_e_out;
  real_T c15_g_nargin = 0.0;
  real_T c15_g_nargout = 0.0;
  real_T c15_h_nargin = 0.0;
  real_T c15_i_nargin = 0.0;
  real_T c15_j_nargin = 0.0;
  real_T c15_h_nargout = 0.0;
  real_T c15_i_nargout = 0.0;
  real_T c15_j_nargout = 0.0;
  real_T c15_k_nargin = 0.0;
  real_T c15_k_nargout = 0.0;
  real_T c15_hoistedGlobal;
  real_T c15_b_hoistedGlobal;
  real_T c15_c_hoistedGlobal;
  real_T c15_d_hoistedGlobal;
  real_T c15_e_hoistedGlobal;
  real_T c15_f_hoistedGlobal;
  real_T c15_d_posA;
  real_T c15_d_posB;
  real_T c15_c_OffA_0;
  real_T c15_c_OffB_0;
  real_T c15_c_Clock;
  real_T c15_c_OffT;
  real_T c15_d0;
  real_T c15_d1;
  real_T c15_d2;
  real_T c15_d3;
  real_T c15_g_hoistedGlobal;
  const mxArray *c15_y = NULL;
  real_T c15_h_hoistedGlobal;
  const mxArray *c15_b_y = NULL;
  boolean_T guard1 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 12U, *chartInstance->c15_sfEvent);
  if (*chartInstance->c15_is_active_c15_StateFlowFinal == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 12U,
                 *chartInstance->c15_sfEvent);
    *chartInstance->c15_is_active_c15_StateFlowFinal = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c15_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c15_sfEvent);
    *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Step1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c15_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_debug_family_names,
      c15_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_d_nargin, 0U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_d_nargout, 1U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    *chartInstance->c15_Bool = -1.0;
    chartInstance->c15_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 9U,
                          *chartInstance->c15_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (*chartInstance->c15_is_c15_StateFlowFinal) {
     case c15_IN_Attivazione:
      CV_CHART_EVAL(12, 0, 1);
      c15_Attivazione(chartInstance);
      break;

     case c15_IN_Controllo:
      CV_CHART_EVAL(12, 0, 2);
      c15_Controllo(chartInstance);
      break;

     case c15_IN_Discesa_Vite:
      CV_CHART_EVAL(12, 0, 3);
      c15_Discesa_Vite(chartInstance);
      break;

     case c15_IN_FineLavorazione:
      CV_CHART_EVAL(12, 0, 4);
      *chartInstance->c15_Hb = 0.0;
      chartInstance->c15_dataWrittenToVector[15U] = true;
      *chartInstance->c15_FineLavorazione = 1.0;
      chartInstance->c15_dataWrittenToVector[17U] = true;
      *chartInstance->c15_Bool = 5.0;
      chartInstance->c15_dataWrittenToVector[0U] = true;
      *chartInstance->c15_Luci = 5.0;
      chartInstance->c15_dataWrittenToVector[10U] = true;
      *chartInstance->c15_Hv = 0.0;
      chartInstance->c15_dataWrittenToVector[14U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c15_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_t_debug_family_names,
        c15_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_f_nargin, 0U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_f_nargout, 1U,
        c15_sf_marshallOut, c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_e_out, 2U, c15_b_sf_marshallOut,
        c15_b_sf_marshallIn);
      if ((CV_EML_COND(6, 0, 0, *chartInstance->c15_temporalCounter_i1 >= 10000)
           && CV_EML_COND(6, 0, 1, CV_RELATIONAL_EVAL(5U, 6U, 0,
             *chartInstance->c15_HomeSignal, 1.0, -1, 0U,
             *chartInstance->c15_HomeSignal == 1.0))) || CV_EML_COND(6, 0, 2,
           CV_RELATIONAL_EVAL(5U, 6U, 1, *chartInstance->c15_ResetButton, 1.0,
                              -1, 0U, *chartInstance->c15_ResetButton == 1.0)))
      {
        CV_EML_MCDC(6, 0, 0, true);
        CV_EML_IF(6, 0, 0, true);
        c15_e_out = true;
      } else {
        CV_EML_MCDC(6, 0, 0, false);
        CV_EML_IF(6, 0, 0, false);
        c15_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c15_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c15_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c15_sfEvent);
        *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Home;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c15_sfEvent);
        c15_enter_atomic_Home(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     *chartInstance->c15_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c15_sfEvent);
      break;

     case c15_IN_Home:
      CV_CHART_EVAL(12, 0, 5);
      c15_Home(chartInstance);
      break;

     case c15_IN_HomeDef:
      CV_CHART_EVAL(12, 0, 6);
      *chartInstance->c15_Luci = 2.0;
      chartInstance->c15_dataWrittenToVector[10U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   *chartInstance->c15_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_m_debug_family_names,
        c15_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargin, 0U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargout, 1U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_out, 2U, c15_b_sf_marshallOut,
        c15_b_sf_marshallIn);
      if (!chartInstance->c15_dataWrittenToVector[7U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 10U,
          *chartInstance->c15_sfEvent, false);
      }

      guard1 = false;
      if (CV_EML_COND(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0,
            *chartInstance->c15_CoppiaA, 0.0, -1, 0U,
            *chartInstance->c15_CoppiaA == 0.0))) {
        if (CV_EML_COND(10, 0, 1, CV_RELATIONAL_EVAL(5U, 10U, 1,
              *chartInstance->c15_CoppiaB, 0.0, -1, 0U,
              *chartInstance->c15_CoppiaB == 0.0)) && CV_EML_COND(10, 0, 2,
             CV_RELATIONAL_EVAL(5U, 10U, 2, *chartInstance->c15_AbbassaVite, 1.0,
              -1, 0U, *chartInstance->c15_AbbassaVite == 1.0))) {
          CV_EML_MCDC(10, 0, 0, true);
          CV_EML_IF(10, 0, 0, true);
          c15_out = true;
        } else {
          guard1 = true;
        }
      } else {
        if (!chartInstance->c15_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(30U, 5U, 10U,
            *chartInstance->c15_sfEvent, false);
        }

        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(10, 0, 0, false);
        CV_EML_IF(10, 0, 0, false);
        c15_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c15_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c15_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c15_sfEvent);
        *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Discesa_Vite;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c15_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_d_debug_family_names,
          c15_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_k_nargin, 0U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_k_nargout, 1U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        *chartInstance->c15_OffA_vite = *chartInstance->c15_posA_vite;
        chartInstance->c15_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffA_vite, 25U, 4U, 2U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_CoppiaH = 0.0;
        chartInstance->c15_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaH, 24U, 4U, 2U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Hb = 1.0;
        chartInstance->c15_dataWrittenToVector[15U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Hb, 33U, 4U, 2U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c15_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_c_debug_family_names,
          c15_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_h_nargin, 0U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_h_nargout, 1U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        if (!chartInstance->c15_dataWrittenToVector[11U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 4U, 5U,
            *chartInstance->c15_sfEvent, false);
        }

        if (!chartInstance->c15_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 4U, 5U,
            *chartInstance->c15_sfEvent, false);
        }

        if (!chartInstance->c15_dataWrittenToVector[1U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(23U, 4U, 5U,
            *chartInstance->c15_sfEvent, false);
        }

        c15_hoistedGlobal = *chartInstance->c15_posA;
        c15_b_hoistedGlobal = *chartInstance->c15_posB;
        c15_c_hoistedGlobal = *chartInstance->c15_OffA_0;
        c15_d_hoistedGlobal = *chartInstance->c15_OffB_0;
        c15_e_hoistedGlobal = *chartInstance->c15_Clock;
        c15_f_hoistedGlobal = *chartInstance->c15_OffT;
        c15_d_posA = c15_hoistedGlobal;
        c15_d_posB = c15_b_hoistedGlobal;
        c15_c_OffA_0 = c15_c_hoistedGlobal;
        c15_c_OffB_0 = c15_d_hoistedGlobal;
        c15_c_Clock = c15_e_hoistedGlobal;
        c15_c_OffT = c15_f_hoistedGlobal;
        _SFD_DATA_RANGE_CHECK(c15_c_OffT, 51U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_DATA_RANGE_CHECK(c15_c_Clock, 48U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_DATA_RANGE_CHECK(c15_c_OffB_0, 47U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_DATA_RANGE_CHECK(c15_c_OffA_0, 45U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_DATA_RANGE_CHECK(c15_d_posB, 43U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_DATA_RANGE_CHECK(c15_d_posA, 41U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_SET_DATA_VALUE_PTR(55U, (void *)&c15_d0);
        _SFD_SET_DATA_VALUE_PTR(53U, (void *)&c15_d1);
        _SFD_SET_DATA_VALUE_PTR(51U, (void *)&c15_c_OffT);
        _SFD_SET_DATA_VALUE_PTR(48U, (void *)&c15_c_Clock);
        _SFD_SET_DATA_VALUE_PTR(47U, (void *)&c15_c_OffB_0);
        _SFD_SET_DATA_VALUE_PTR(45U, (void *)&c15_c_OffA_0);
        _SFD_SET_DATA_VALUE_PTR(43U, (void *)&c15_d_posB);
        _SFD_SET_DATA_VALUE_PTR(41U, (void *)&c15_d_posA);
        _SFD_CS_CALL(FUNCTION_ACTIVE_TAG, 7U, *chartInstance->c15_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH(8U, 0U);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("posA", &c15_d_posA, c15_sf_marshallOut,
          c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("posB", &c15_d_posB, c15_sf_marshallOut,
          c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("OffA_0", &c15_c_OffA_0,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("OffB_0", &c15_c_OffB_0,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("Clock", &c15_c_Clock,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("OffT", &c15_c_OffT, c15_sf_marshallOut,
          c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("CoppiaA", &c15_d1, c15_sf_marshallOut,
          c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("CoppiaB", &c15_d0, c15_sf_marshallOut,
          c15_sf_marshallIn);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c15_sfEvent);
        *chartInstance->c15_b_posA = c15_d_posA;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_b_posA, 41U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_b_posB = c15_d_posB;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_b_posB, 43U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_b_OffA_0 = c15_c_OffA_0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_b_OffA_0, 45U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_b_OffB_0 = c15_c_OffB_0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_b_OffB_0, 47U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_b_Clock = c15_c_Clock;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_b_Clock, 48U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_b_OffT = c15_c_OffT;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_b_OffT, 51U, 4U, 7U,
                              *chartInstance->c15_sfEvent, false);
        sf_call_output_fcn_call(chartInstance->S, 0, "Posizionamento", 0);
        c15_d1 = *chartInstance->c15_b_CoppiaA;
        chartInstance->c15_dataWrittenToVector[22U] = true;
        _SFD_DATA_RANGE_CHECK(c15_d1, 53U, 4U, 7U, *chartInstance->c15_sfEvent,
                              false);
        c15_d0 = *chartInstance->c15_b_CoppiaB;
        chartInstance->c15_dataWrittenToVector[23U] = true;
        _SFD_DATA_RANGE_CHECK(c15_d0, 55U, 4U, 7U, *chartInstance->c15_sfEvent,
                              false);
        _SFD_SYMBOL_SCOPE_POP();
        _SFD_CS_CALL(FUNCTION_INACTIVE_TAG, 7U, *chartInstance->c15_sfEvent);
        _SFD_UNSET_DATA_VALUE_PTR(55U);
        _SFD_UNSET_DATA_VALUE_PTR(53U);
        _SFD_UNSET_DATA_VALUE_PTR(51U);
        _SFD_UNSET_DATA_VALUE_PTR(48U);
        _SFD_UNSET_DATA_VALUE_PTR(47U);
        _SFD_UNSET_DATA_VALUE_PTR(45U);
        _SFD_UNSET_DATA_VALUE_PTR(43U);
        _SFD_UNSET_DATA_VALUE_PTR(41U);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c15_sfEvent);
        c15_d2 = c15_d1;
        c15_d3 = c15_d0;
        *chartInstance->c15_CoppiaA = c15_d2;
        chartInstance->c15_dataWrittenToVector[7U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaA, 29U, 4U, 5U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_CoppiaB = c15_d3;
        chartInstance->c15_dataWrittenToVector[8U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaB, 30U, 4U, 5U,
                              *chartInstance->c15_sfEvent, false);
        if (!chartInstance->c15_dataWrittenToVector[7U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 5U,
            *chartInstance->c15_sfEvent, false);
        }

        sf_mex_printf("%s =\\n", "CoppiaA");
        c15_g_hoistedGlobal = *chartInstance->c15_CoppiaA;
        c15_y = NULL;
        sf_mex_assign(&c15_y, sf_mex_create("y", &c15_g_hoistedGlobal, 0, 0U, 0U,
          0U, 0), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c15_y);
        if (!chartInstance->c15_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(30U, 4U, 5U,
            *chartInstance->c15_sfEvent, false);
        }

        sf_mex_printf("%s =\\n", "CoppiaB");
        c15_h_hoistedGlobal = *chartInstance->c15_CoppiaB;
        c15_b_y = NULL;
        sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_h_hoistedGlobal, 0, 0U,
          0U, 0U, 0), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14,
                          c15_b_y);
        _SFD_SYMBOL_SCOPE_POP();
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c15_sfEvent);
      break;

     case c15_IN_OffSet:
      CV_CHART_EVAL(12, 0, 7);
      *chartInstance->c15_Bool = 2.0;
      chartInstance->c15_dataWrittenToVector[0U] = true;
      *chartInstance->c15_Luci = 3.0;
      chartInstance->c15_dataWrittenToVector[10U] = true;
      *chartInstance->c15_Hv = 1.0;
      chartInstance->c15_dataWrittenToVector[14U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c15_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_p_debug_family_names,
        c15_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_e_nargin, 0U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_e_nargout, 1U,
        c15_sf_marshallOut, c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_d_out, 2U, c15_b_sf_marshallOut,
        c15_b_sf_marshallIn);
      c15_d_out = CV_EML_IF(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
        *chartInstance->c15_BeginWork, 1.0, -1, 0U,
        *chartInstance->c15_BeginWork == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c15_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c15_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c15_sfEvent);
        *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Controllo;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c15_sfEvent);
        *chartInstance->c15_temporalCounter_i1 = 0U;
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_f_debug_family_names,
          c15_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_i_nargin, 0U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_i_nargout, 1U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        *chartInstance->c15_OffT = *chartInstance->c15_Clock;
        chartInstance->c15_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffT, 23U, 4U, 1U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Luci = 4.0;
        chartInstance->c15_dataWrittenToVector[10U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Luci, 31U, 4U, 1U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Bool = 4.0;
        chartInstance->c15_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 1U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Hv = 0.0;
        chartInstance->c15_dataWrittenToVector[14U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Hv, 32U, 4U, 1U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Hb = 0.0;
        chartInstance->c15_dataWrittenToVector[15U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Hb, 33U, 4U, 1U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c15_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c15_sfEvent);
      break;

     case c15_IN_Step1:
      CV_CHART_EVAL(12, 0, 8);
      *chartInstance->c15_Bool = -1.0;
      chartInstance->c15_dataWrittenToVector[0U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   *chartInstance->c15_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_l_debug_family_names,
        c15_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_nargin, 0U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_nargout, 1U,
        c15_sf_marshallOut, c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_out, 2U, c15_b_sf_marshallOut,
        c15_b_sf_marshallIn);
      if (CV_EML_COND(0, 0, 0, CV_RELATIONAL_EVAL(5U, 0U, 0,
            *chartInstance->c15_Status, 1079.0, -1, 0U,
            *chartInstance->c15_Status == 1079.0)) && CV_EML_COND(0, 0, 1,
           CV_RELATIONAL_EVAL(5U, 0U, 1, *chartInstance->c15_avvio, 1.0, -1, 0U,
            *chartInstance->c15_avvio == 1.0))) {
        CV_EML_MCDC(0, 0, 0, true);
        CV_EML_IF(0, 0, 0, true);
        c15_b_out = true;
      } else {
        CV_EML_MCDC(0, 0, 0, false);
        CV_EML_IF(0, 0, 0, false);
        c15_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c15_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c15_sfEvent);
        *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Attivazione;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_g_debug_family_names,
          c15_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_j_nargin, 0U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_j_nargout, 1U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        *chartInstance->c15_Bool = 0.0;
        chartInstance->c15_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 0U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Enable = 1.0;
        chartInstance->c15_dataWrittenToVector[16U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Enable, 34U, 4U, 0U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                     *chartInstance->c15_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c15_sfEvent);
      break;

     case c15_IN_StopPhase:
      CV_CHART_EVAL(12, 0, 9);
      *chartInstance->c15_Bool = 3.0;
      chartInstance->c15_dataWrittenToVector[0U] = true;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c15_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_o_debug_family_names,
        c15_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_nargin, 0U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_nargout, 1U,
        c15_sf_marshallOut, c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_out, 2U, c15_b_sf_marshallOut,
        c15_b_sf_marshallIn);
      c15_c_out = CV_EML_IF(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0,
        *chartInstance->c15_ResetButton, 1.0, -1, 0U,
        *chartInstance->c15_ResetButton == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c15_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c15_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c15_sfEvent);
        *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Attivazione;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_g_debug_family_names,
          c15_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_g_nargin, 0U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_g_nargout, 1U,
          c15_sf_marshallOut, c15_sf_marshallIn);
        *chartInstance->c15_Bool = 0.0;
        chartInstance->c15_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 0U,
                              *chartInstance->c15_sfEvent, false);
        *chartInstance->c15_Enable = 1.0;
        chartInstance->c15_dataWrittenToVector[16U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Enable, 34U, 4U, 0U,
                              *chartInstance->c15_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                     *chartInstance->c15_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c15_sfEvent);
      break;

     default:
      CV_CHART_EVAL(12, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c15_sfEvent);
}

static void initSimStructsc15_StateFlowFinal(SFc15_StateFlowFinalInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void c15_Discesa_Vite(SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  uint32_T c15_debug_family_var_map[2];
  real_T c15_nargin = 0.0;
  real_T c15_nargout = 0.0;
  *chartInstance->c15_Hb = 1.0;
  chartInstance->c15_dataWrittenToVector[15U] = true;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c15_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c15_sfEvent);
  *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_OffSet;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c15_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_e_debug_family_names,
    c15_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargin, 0U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargout, 1U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  *chartInstance->c15_CoppiaH = 0.0;
  chartInstance->c15_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaH, 24U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_CoppiaA = 0.0;
  chartInstance->c15_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaA, 29U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_CoppiaB = 0.0;
  chartInstance->c15_dataWrittenToVector[8U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaB, 30U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_OffA = *chartInstance->c15_posA;
  chartInstance->c15_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffA, 27U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_OffB = *chartInstance->c15_posB;
  chartInstance->c15_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffB, 28U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_OffA_0 = *chartInstance->c15_posA;
  chartInstance->c15_dataWrittenToVector[11U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffA_0, 0U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_OffB_0 = *chartInstance->c15_posB;
  chartInstance->c15_dataWrittenToVector[12U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffB_0, 1U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_Bool = 2.0;
  chartInstance->c15_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_Luci = 3.0;
  chartInstance->c15_dataWrittenToVector[10U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Luci, 31U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_Hv = 1.0;
  chartInstance->c15_dataWrittenToVector[14U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Hv, 32U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_OffA_vite = *chartInstance->c15_posA_vite;
  chartInstance->c15_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffA_vite, 25U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_OffB_vite = *chartInstance->c15_posB_vite;
  chartInstance->c15_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffB_vite, 26U, 4U, 6U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c15_sfEvent);
}

static void c15_Controllo(SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  uint32_T c15_debug_family_var_map[3];
  real_T c15_nargin = 0.0;
  real_T c15_nargout = 1.0;
  boolean_T c15_out;
  real_T c15_b_nargin = 0.0;
  real_T c15_b_nargout = 1.0;
  boolean_T c15_b_out;
  uint32_T c15_b_debug_family_var_map[2];
  real_T c15_c_nargin = 0.0;
  real_T c15_c_nargout = 0.0;
  real_T c15_d_nargin = 0.0;
  real_T c15_d_nargout = 0.0;
  *chartInstance->c15_Hb = 0.0;
  chartInstance->c15_dataWrittenToVector[15U] = true;
  *chartInstance->c15_Bool = 4.0;
  chartInstance->c15_dataWrittenToVector[0U] = true;
  *chartInstance->c15_Luci = 4.0;
  chartInstance->c15_dataWrittenToVector[10U] = true;
  *chartInstance->c15_Hv = 0.0;
  chartInstance->c15_dataWrittenToVector[14U] = true;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, *chartInstance->c15_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_n_debug_family_names,
    c15_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargin, 0U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargout, 1U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_out, 2U, c15_b_sf_marshallOut,
    c15_b_sf_marshallIn);
  c15_out = CV_EML_IF(3, 0, 0, *chartInstance->c15_temporalCounter_i1 >= 40000);
  _SFD_SYMBOL_SCOPE_POP();
  if (c15_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c15_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c15_sfEvent);
    *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_FineLavorazione;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c15_sfEvent);
    *chartInstance->c15_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_h_debug_family_names,
      c15_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_nargin, 0U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_nargout, 1U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    *chartInstance->c15_Bool = 5.0;
    chartInstance->c15_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 3U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Luci = 5.0;
    chartInstance->c15_dataWrittenToVector[10U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Luci, 31U, 4U, 3U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_FineLavorazione = 1.0;
    chartInstance->c15_dataWrittenToVector[17U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_FineLavorazione, 35U, 4U, 3U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Hv = 0.0;
    chartInstance->c15_dataWrittenToVector[14U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Hv, 32U, 4U, 3U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Hb = 0.0;
    chartInstance->c15_dataWrittenToVector[15U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Hb, 33U, 4U, 3U,
                          *chartInstance->c15_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                 *chartInstance->c15_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_s_debug_family_names,
      c15_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_nargin, 0U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_nargout, 1U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_out, 2U, c15_b_sf_marshallOut,
      c15_b_sf_marshallIn);
    c15_b_out = CV_EML_IF(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
      *chartInstance->c15_StopPressed, 1.0, -1, 0U,
      *chartInstance->c15_StopPressed == 1.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c15_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c15_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c15_sfEvent);
      *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_StopPhase;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c15_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_k_debug_family_names,
        c15_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_d_nargin, 0U, c15_sf_marshallOut,
        c15_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_d_nargout, 1U,
        c15_sf_marshallOut, c15_sf_marshallIn);
      *chartInstance->c15_Bool = 3.0;
      chartInstance->c15_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 10U,
                            *chartInstance->c15_sfEvent, false);
      *chartInstance->c15_CoppiaA = 0.0;
      chartInstance->c15_dataWrittenToVector[7U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaA, 29U, 4U, 10U,
                            *chartInstance->c15_sfEvent, false);
      *chartInstance->c15_CoppiaB = 0.0;
      chartInstance->c15_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaB, 30U, 4U, 10U,
                            *chartInstance->c15_sfEvent, false);
      *chartInstance->c15_CoppiaH = 0.0;
      chartInstance->c15_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaH, 24U, 4U, 10U,
                            *chartInstance->c15_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   *chartInstance->c15_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c15_sfEvent);
}

static void c15_Attivazione(SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  uint32_T c15_debug_family_var_map[3];
  real_T c15_nargin = 0.0;
  real_T c15_nargout = 1.0;
  boolean_T c15_out;
  *chartInstance->c15_Enable = 1.0;
  chartInstance->c15_dataWrittenToVector[16U] = true;
  *chartInstance->c15_Bool = 0.0;
  chartInstance->c15_dataWrittenToVector[0U] = true;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c15_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_q_debug_family_names,
    c15_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargin, 0U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargout, 1U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_out, 2U, c15_b_sf_marshallOut,
    c15_b_sf_marshallIn);
  c15_out = CV_EML_IF(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0,
    *chartInstance->c15_ZeroSignal, 1.0, -1, 0U, *chartInstance->c15_ZeroSignal ==
    1.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c15_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c15_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c15_sfEvent);
    *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_Home;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c15_sfEvent);
    c15_enter_atomic_Home(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                 *chartInstance->c15_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c15_sfEvent);
}

static void c15_enter_atomic_Home(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  uint32_T c15_debug_family_var_map[2];
  real_T c15_nargin = 0.0;
  real_T c15_nargout = 0.0;
  real_T c15_hoistedGlobal;
  real_T c15_b_hoistedGlobal;
  real_T c15_A;
  real_T c15_x;
  real_T c15_b_x;
  real_T c15_y;
  real_T c15_c_hoistedGlobal;
  real_T c15_d_hoistedGlobal;
  real_T c15_b_A;
  real_T c15_c_x;
  real_T c15_d_x;
  real_T c15_b_y;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_i_debug_family_names,
    c15_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargin, 0U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargout, 1U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  *chartInstance->c15_Bool = 1.0;
  chartInstance->c15_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Bool, 22U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_conv = 5.9921124526782858E-6;
  chartInstance->c15_dataWrittenToVector[9U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_conv, 2U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_conv_vite = 1.220703125E-7;
  chartInstance->c15_dataWrittenToVector[13U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_conv_vite, 3U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_Luci = 1.0;
  chartInstance->c15_dataWrittenToVector[10U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Luci, 31U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  *chartInstance->c15_FineLavorazione = 0.0;
  chartInstance->c15_dataWrittenToVector[17U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_FineLavorazione, 35U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  if (!chartInstance->c15_dataWrittenToVector[9U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 4U, 4U, *chartInstance->c15_sfEvent,
      false);
  }

  c15_hoistedGlobal = *chartInstance->c15_posA;
  c15_b_hoistedGlobal = *chartInstance->c15_conv;
  c15_A = c15_b_hoistedGlobal * 180.0;
  c15_x = c15_A;
  c15_b_x = c15_x;
  c15_y = c15_b_x / 3.1415926535897931;
  *chartInstance->c15_PosRifA = c15_hoistedGlobal * c15_y;
  chartInstance->c15_dataWrittenToVector[18U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_PosRifA, 36U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  if (!chartInstance->c15_dataWrittenToVector[9U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 4U, 4U, *chartInstance->c15_sfEvent,
      false);
  }

  c15_c_hoistedGlobal = *chartInstance->c15_posB;
  c15_d_hoistedGlobal = *chartInstance->c15_conv;
  c15_b_A = c15_d_hoistedGlobal * 180.0;
  c15_c_x = c15_b_A;
  c15_d_x = c15_c_x;
  c15_b_y = c15_d_x / 3.1415926535897931;
  *chartInstance->c15_PosRifB = c15_c_hoistedGlobal * c15_b_y;
  chartInstance->c15_dataWrittenToVector[19U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c15_PosRifB, 37U, 4U, 4U,
                        *chartInstance->c15_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c15_Home(SFc15_StateFlowFinalInstanceStruct *chartInstance)
{
  uint32_T c15_debug_family_var_map[3];
  real_T c15_nargin = 0.0;
  real_T c15_nargout = 1.0;
  boolean_T c15_out;
  uint32_T c15_b_debug_family_var_map[2];
  real_T c15_b_nargin = 0.0;
  real_T c15_b_nargout = 0.0;
  real_T c15_c_nargin = 0.0;
  real_T c15_c_nargout = 0.0;
  real_T c15_hoistedGlobal;
  real_T c15_b_hoistedGlobal;
  real_T c15_c_hoistedGlobal;
  real_T c15_d_hoistedGlobal;
  real_T c15_e_hoistedGlobal;
  real_T c15_f_hoistedGlobal;
  real_T c15_g_hoistedGlobal;
  real_T c15_b_Fc;
  real_T c15_b_Fca;
  real_T c15_b_Fcb;
  real_T c15_b_posrifA;
  real_T c15_b_posrifB;
  real_T c15_d_posA;
  real_T c15_d_posB;
  real_T c15_d4;
  real_T c15_d5;
  real_T c15_d6;
  real_T c15_d7;
  real_T c15_d8;
  real_T c15_d9;
  real_T c15_h_hoistedGlobal;
  const mxArray *c15_y = NULL;
  real_T c15_i_hoistedGlobal;
  const mxArray *c15_b_y = NULL;
  real_T c15_j_hoistedGlobal;
  const mxArray *c15_c_y = NULL;
  *chartInstance->c15_FineLavorazione = 0.0;
  chartInstance->c15_dataWrittenToVector[17U] = true;
  *chartInstance->c15_Bool = 1.0;
  chartInstance->c15_dataWrittenToVector[0U] = true;
  *chartInstance->c15_Luci = 1.0;
  chartInstance->c15_dataWrittenToVector[10U] = true;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, *chartInstance->c15_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c15_r_debug_family_names,
    c15_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargin, 0U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_nargout, 1U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_out, 2U, c15_b_sf_marshallOut,
    c15_b_sf_marshallIn);
  if (CV_EML_COND(9, 0, 0, CV_RELATIONAL_EVAL(5U, 9U, 0, *chartInstance->c15_fc,
        0.0, -1, 0U, *chartInstance->c15_fc == 0.0)) && CV_EML_COND(9, 0, 1,
       CV_RELATIONAL_EVAL(5U, 9U, 1, *chartInstance->c15_fcA, 1.0, -1, 0U,
                          *chartInstance->c15_fcA == 1.0)) && CV_EML_COND(9, 0,
       2, CV_RELATIONAL_EVAL(5U, 9U, 2, *chartInstance->c15_fcB, 1.0, -1, 0U,
        *chartInstance->c15_fcB == 1.0)) && CV_EML_COND(9, 0, 3,
       CV_RELATIONAL_EVAL(5U, 9U, 3, *chartInstance->c15_HomeSignal, 1.0, -1, 0U,
        *chartInstance->c15_HomeSignal == 1.0))) {
    CV_EML_MCDC(9, 0, 0, true);
    CV_EML_IF(9, 0, 0, true);
    c15_out = true;
  } else {
    CV_EML_MCDC(9, 0, 0, false);
    CV_EML_IF(9, 0, 0, false);
    c15_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c15_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c15_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c15_sfEvent);
    *chartInstance->c15_is_c15_StateFlowFinal = c15_IN_HomeDef;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c15_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_b_debug_family_names,
      c15_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_nargin, 0U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_c_nargout, 1U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    *chartInstance->c15_OffA_0 = *chartInstance->c15_posA;
    chartInstance->c15_dataWrittenToVector[11U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffA_0, 0U, 4U, 5U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_OffB_0 = *chartInstance->c15_posB;
    chartInstance->c15_dataWrittenToVector[12U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffB_0, 1U, 4U, 5U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Luci = 2.0;
    chartInstance->c15_dataWrittenToVector[10U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Luci, 31U, 4U, 5U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_OffT = *chartInstance->c15_Clock;
    chartInstance->c15_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_OffT, 23U, 4U, 5U,
                          *chartInstance->c15_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                 *chartInstance->c15_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c15_j_debug_family_names,
      c15_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_nargin, 0U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c15_b_nargout, 1U, c15_sf_marshallOut,
      c15_sf_marshallIn);
    if (!chartInstance->c15_dataWrittenToVector[18U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    *chartInstance->c15_PosRifA -= 0.02;
    chartInstance->c15_dataWrittenToVector[18U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_PosRifA, 36U, 4U, 4U,
                          *chartInstance->c15_sfEvent, false);
    if (!chartInstance->c15_dataWrittenToVector[19U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    *chartInstance->c15_PosRifB -= 0.02;
    chartInstance->c15_dataWrittenToVector[19U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_PosRifB, 37U, 4U, 4U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Stato = 0.0;
    chartInstance->c15_dataWrittenToVector[20U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Stato, 38U, 4U, 4U,
                          *chartInstance->c15_sfEvent, false);
    if (!chartInstance->c15_dataWrittenToVector[18U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    if (!chartInstance->c15_dataWrittenToVector[19U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    c15_hoistedGlobal = *chartInstance->c15_fc;
    c15_b_hoistedGlobal = *chartInstance->c15_fcA;
    c15_c_hoistedGlobal = *chartInstance->c15_fcB;
    c15_d_hoistedGlobal = *chartInstance->c15_PosRifA;
    c15_e_hoistedGlobal = *chartInstance->c15_PosRifB;
    c15_f_hoistedGlobal = *chartInstance->c15_posA;
    c15_g_hoistedGlobal = *chartInstance->c15_posB;
    c15_b_Fc = c15_hoistedGlobal;
    c15_b_Fca = c15_b_hoistedGlobal;
    c15_b_Fcb = c15_c_hoistedGlobal;
    c15_b_posrifA = c15_d_hoistedGlobal;
    c15_b_posrifB = c15_e_hoistedGlobal;
    c15_d_posA = c15_f_hoistedGlobal;
    c15_d_posB = c15_g_hoistedGlobal;
    _SFD_DATA_RANGE_CHECK(c15_d_posB, 52U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    _SFD_DATA_RANGE_CHECK(c15_d_posA, 50U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    _SFD_DATA_RANGE_CHECK(c15_b_posrifB, 49U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    _SFD_DATA_RANGE_CHECK(c15_b_posrifA, 46U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    _SFD_DATA_RANGE_CHECK(c15_b_Fcb, 44U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    _SFD_DATA_RANGE_CHECK(c15_b_Fca, 42U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    _SFD_DATA_RANGE_CHECK(c15_b_Fc, 40U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    _SFD_SET_DATA_VALUE_PTR(57U, (void *)&c15_d4);
    _SFD_SET_DATA_VALUE_PTR(56U, (void *)&c15_d5);
    _SFD_SET_DATA_VALUE_PTR(54U, (void *)&c15_d6);
    _SFD_SET_DATA_VALUE_PTR(52U, (void *)&c15_d_posB);
    _SFD_SET_DATA_VALUE_PTR(50U, (void *)&c15_d_posA);
    _SFD_SET_DATA_VALUE_PTR(49U, (void *)&c15_b_posrifB);
    _SFD_SET_DATA_VALUE_PTR(46U, (void *)&c15_b_posrifA);
    _SFD_SET_DATA_VALUE_PTR(44U, (void *)&c15_b_Fcb);
    _SFD_SET_DATA_VALUE_PTR(42U, (void *)&c15_b_Fca);
    _SFD_SET_DATA_VALUE_PTR(40U, (void *)&c15_b_Fc);
    _SFD_CS_CALL(FUNCTION_ACTIVE_TAG, 8U, *chartInstance->c15_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH(10U, 0U);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("Fc", &c15_b_Fc, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("Fca", &c15_b_Fca, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("Fcb", &c15_b_Fcb, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("posrifA", &c15_b_posrifA,
      c15_sf_marshallOut, c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("posrifB", &c15_b_posrifB,
      c15_sf_marshallOut, c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("posA", &c15_d_posA, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("posB", &c15_d_posB, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("CA", &c15_d6, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("CB", &c15_d5, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_IMPORTABLE("CH", &c15_d4, c15_sf_marshallOut,
      c15_sf_marshallIn);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                 *chartInstance->c15_sfEvent);
    *chartInstance->c15_Fc = c15_b_Fc;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Fc, 40U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Fca = c15_b_Fca;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Fca, 42U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_Fcb = c15_b_Fcb;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_Fcb, 44U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_posrifA = c15_b_posrifA;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_posrifA, 46U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_posrifB = c15_b_posrifB;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_posrifB, 49U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_c_posA = c15_d_posA;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_c_posA, 50U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_c_posB = c15_d_posB;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_c_posB, 52U, 4U, 8U,
                          *chartInstance->c15_sfEvent, false);
    sf_call_output_fcn_call(chartInstance->S, 1, "Setting", 0);
    c15_d6 = *chartInstance->c15_CA;
    chartInstance->c15_dataWrittenToVector[24U] = true;
    _SFD_DATA_RANGE_CHECK(c15_d6, 54U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    c15_d5 = *chartInstance->c15_CB;
    chartInstance->c15_dataWrittenToVector[25U] = true;
    _SFD_DATA_RANGE_CHECK(c15_d5, 56U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    c15_d4 = *chartInstance->c15_CH;
    chartInstance->c15_dataWrittenToVector[26U] = true;
    _SFD_DATA_RANGE_CHECK(c15_d4, 57U, 4U, 8U, *chartInstance->c15_sfEvent,
                          false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(FUNCTION_INACTIVE_TAG, 8U, *chartInstance->c15_sfEvent);
    _SFD_UNSET_DATA_VALUE_PTR(57U);
    _SFD_UNSET_DATA_VALUE_PTR(56U);
    _SFD_UNSET_DATA_VALUE_PTR(54U);
    _SFD_UNSET_DATA_VALUE_PTR(52U);
    _SFD_UNSET_DATA_VALUE_PTR(50U);
    _SFD_UNSET_DATA_VALUE_PTR(49U);
    _SFD_UNSET_DATA_VALUE_PTR(46U);
    _SFD_UNSET_DATA_VALUE_PTR(44U);
    _SFD_UNSET_DATA_VALUE_PTR(42U);
    _SFD_UNSET_DATA_VALUE_PTR(40U);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c15_sfEvent);
    c15_d7 = c15_d6;
    c15_d8 = c15_d5;
    c15_d9 = c15_d4;
    *chartInstance->c15_CoppiaA = c15_d7;
    chartInstance->c15_dataWrittenToVector[7U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaA, 29U, 4U, 4U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_CoppiaB = c15_d8;
    chartInstance->c15_dataWrittenToVector[8U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaB, 30U, 4U, 4U,
                          *chartInstance->c15_sfEvent, false);
    *chartInstance->c15_CoppiaH = c15_d9;
    chartInstance->c15_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c15_CoppiaH, 24U, 4U, 4U,
                          *chartInstance->c15_sfEvent, false);
    if (!chartInstance->c15_dataWrittenToVector[7U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    sf_mex_printf("%s =\\n", "CoppiaA");
    c15_h_hoistedGlobal = *chartInstance->c15_CoppiaA;
    c15_y = NULL;
    sf_mex_assign(&c15_y, sf_mex_create("y", &c15_h_hoistedGlobal, 0, 0U, 0U, 0U,
      0), false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c15_y);
    if (!chartInstance->c15_dataWrittenToVector[8U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(30U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    sf_mex_printf("%s =\\n", "CoppiaB");
    c15_i_hoistedGlobal = *chartInstance->c15_CoppiaB;
    c15_b_y = NULL;
    sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_i_hoistedGlobal, 0, 0U, 0U,
      0U, 0), false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c15_b_y);
    if (!chartInstance->c15_dataWrittenToVector[2U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 4U, *chartInstance->c15_sfEvent,
        false);
    }

    sf_mex_printf("%s =\\n", "CoppiaH");
    c15_j_hoistedGlobal = *chartInstance->c15_CoppiaH;
    c15_c_y = NULL;
    sf_mex_assign(&c15_c_y, sf_mex_create("y", &c15_j_hoistedGlobal, 0, 0U, 0U,
      0U, 0), false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c15_c_y);
    _SFD_SYMBOL_SCOPE_POP();
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c15_sfEvent);
}

static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber, uint32_T c15_instanceNumber)
{
  (void)(c15_machineNumber);
  (void)(c15_chartNumber);
  (void)(c15_instanceNumber);
}

static const mxArray *c15_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData;
  real_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_mxArrayOutData = NULL;
  c15_u = *(real_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c15_mxArrayOutData, c15_y, false);
  return c15_mxArrayOutData;
}

static real_T c15_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_nargout, const char_T *c15_identifier)
{
  real_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_nargout),
    &c15_thisId);
  sf_mex_destroy(&c15_nargout);
  return c15_y;
}

static real_T c15_b_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  real_T c15_y;
  real_T c15_d10;
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_d10, 1, 0, 0U, 0, 0U, 0);
  c15_y = c15_d10;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_nargout;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  real_T c15_y;
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)chartInstanceVoid;
  c15_nargout = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_nargout),
    &c15_thisId);
  sf_mex_destroy(&c15_nargout);
  *(real_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static const mxArray *c15_b_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData;
  boolean_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_mxArrayOutData = NULL;
  c15_u = *(boolean_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c15_mxArrayOutData, c15_y, false);
  return c15_mxArrayOutData;
}

static boolean_T c15_c_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  boolean_T c15_y;
  boolean_T c15_b0;
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_b0, 1, 11, 0U, 0, 0U, 0);
  c15_y = c15_b0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_sf_internal_predicateOutput;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  boolean_T c15_y;
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)chartInstanceVoid;
  c15_sf_internal_predicateOutput = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c15_sf_internal_predicateOutput), &c15_thisId);
  sf_mex_destroy(&c15_sf_internal_predicateOutput);
  *(boolean_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

const mxArray *sf_c15_StateFlowFinal_get_eml_resolved_functions_info(void)
{
  const mxArray *c15_nameCaptureInfo = NULL;
  c15_nameCaptureInfo = NULL;
  sf_mex_assign(&c15_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c15_nameCaptureInfo;
}

static const mxArray *c15_c_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData;
  int32_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_mxArrayOutData = NULL;
  c15_u = *(int32_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c15_mxArrayOutData, c15_y, false);
  return c15_mxArrayOutData;
}

static int32_T c15_d_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  int32_T c15_y;
  int32_T c15_i1;
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_i1, 1, 6, 0U, 0, 0U, 0);
  c15_y = c15_i1;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_b_sfEvent;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  int32_T c15_y;
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)chartInstanceVoid;
  c15_b_sfEvent = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_sfEvent),
    &c15_thisId);
  sf_mex_destroy(&c15_b_sfEvent);
  *(int32_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static uint8_T c15_e_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_b_is_active_c15_StateFlowFinal, const
  char_T *c15_identifier)
{
  uint8_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c15_b_is_active_c15_StateFlowFinal), &c15_thisId);
  sf_mex_destroy(&c15_b_is_active_c15_StateFlowFinal);
  return c15_y;
}

static uint8_T c15_f_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  uint8_T c15_y;
  uint8_T c15_u0;
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_u0, 1, 3, 0U, 0, 0U, 0);
  c15_y = c15_u0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static uint16_T c15_g_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_b_temporalCounter_i1, const char_T
  *c15_identifier)
{
  uint16_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_y = c15_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c15_b_temporalCounter_i1), &c15_thisId);
  sf_mex_destroy(&c15_b_temporalCounter_i1);
  return c15_y;
}

static uint16_T c15_h_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  uint16_T c15_y;
  uint16_T c15_u1;
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_u1, 1, 5, 0U, 0, 0U, 0);
  c15_y = c15_u1;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_i_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_b_dataWrittenToVector, const char_T
  *c15_identifier, boolean_T c15_y[27])
{
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_dataWrittenToVector),
    &c15_thisId, c15_y);
  sf_mex_destroy(&c15_b_dataWrittenToVector);
}

static void c15_j_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct
  *chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId,
  boolean_T c15_y[27])
{
  boolean_T c15_bv1[27];
  int32_T c15_i2;
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), c15_bv1, 1, 11, 0U, 1, 0U, 1,
                27);
  for (c15_i2 = 0; c15_i2 < 27; c15_i2++) {
    c15_y[c15_i2] = c15_bv1[c15_i2];
  }

  sf_mex_destroy(&c15_u);
}

static const mxArray *c15_k_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct *
  chartInstance, const mxArray *c15_b_setSimStateSideEffectsInfo, const char_T
  *c15_identifier)
{
  const mxArray *c15_y = NULL;
  emlrtMsgIdentifier c15_thisId;
  c15_y = NULL;
  c15_thisId.fIdentifier = (const char *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  sf_mex_assign(&c15_y, c15_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c15_b_setSimStateSideEffectsInfo), &c15_thisId), false);
  sf_mex_destroy(&c15_b_setSimStateSideEffectsInfo);
  return c15_y;
}

static const mxArray *c15_l_emlrt_marshallIn(SFc15_StateFlowFinalInstanceStruct *
  chartInstance, const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  const mxArray *c15_y = NULL;
  (void)chartInstance;
  (void)c15_parentId;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_duplicatearraysafe(&c15_u), false);
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc15_StateFlowFinalInstanceStruct *chartInstance, int32_T c15_ssid)
{
  const mxArray *c15_msgInfo;
  (void)chartInstance;
  (void)c15_ssid;
  c15_msgInfo = NULL;
  return NULL;
}

static void c15_init_sf_message_store_memory(SFc15_StateFlowFinalInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc15_StateFlowFinalInstanceStruct
  *chartInstance)
{
  chartInstance->c15_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c15_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c15_is_active_c15_StateFlowFinal = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c15_is_c15_StateFlowFinal = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c15_Clock = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c15_posA_vite = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c15_posB_vite = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c15_Status = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c15_fc = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c15_posA = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c15_posB = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c15_Bool = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c15_OffT = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c15_CoppiaH = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c15_OffA_vite = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c15_OffB_vite = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c15_OffA = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c15_OffB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c15_CoppiaA = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c15_CoppiaB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c15_fcA = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c15_fcB = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c15_conv = (real_T *)ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c15_Luci = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c15_OffA_0 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 4);
  chartInstance->c15_OffB_0 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 5);
  chartInstance->c15_conv_vite = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    6);
  chartInstance->c15_Hv = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c15_Hb = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c15_HomeSignal = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c15_avvio = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c15_BeginWork = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c15_Enable = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c15_FineLavorazione = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c15_ResetButton = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c15_StopPressed = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c15_PosRifA = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c15_PosRifB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 16);
  chartInstance->c15_Stato = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 17);
  chartInstance->c15_ZeroSignal = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c15_DiscVite = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c15_AbbassaVite = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 16);
  chartInstance->c15_dv = (real_T *)ssGetDWork_wrapper(chartInstance->S, 7);
  chartInstance->c15_b_CoppiaA = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 17);
  chartInstance->c15_b_CoppiaB = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c15_b_posA = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c15_b_posB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 19);
  chartInstance->c15_b_OffA_0 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 20);
  chartInstance->c15_b_OffB_0 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 21);
  chartInstance->c15_b_Clock = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 22);
  chartInstance->c15_b_OffT = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 23);
  chartInstance->c15_Fc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 24);
  chartInstance->c15_Fca = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 25);
  chartInstance->c15_Fcb = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 26);
  chartInstance->c15_posrifA = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 27);
  chartInstance->c15_posrifB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 28);
  chartInstance->c15_c_posA = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 29);
  chartInstance->c15_c_posB = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 30);
  chartInstance->c15_CA = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 19);
  chartInstance->c15_CB = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 20);
  chartInstance->c15_CH = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 21);
  chartInstance->c15_temporalCounter_i1 = (uint16_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c15_StateFlowFinal_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3516289783U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2908140015U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(160525450U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(422085978U);
}

mxArray* sf_c15_StateFlowFinal_get_post_codegen_info(void);
mxArray *sf_c15_StateFlowFinal_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("fIqCTIgnw1CVM72qesFLOH");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,17,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,17,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo = sf_c15_StateFlowFinal_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c15_StateFlowFinal_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c15_StateFlowFinal_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c15_StateFlowFinal_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c15_StateFlowFinal_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c15_StateFlowFinal(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[63],T\"Bool\",},{M[1],M[81],T\"CoppiaA\",},{M[1],M[82],T\"CoppiaB\",},{M[1],M[68],T\"CoppiaH\",},{M[1],M[238],T\"Enable\",},{M[1],M[244],T\"FineLavorazione\",},{M[1],M[215],T\"Hb\",},{M[1],M[214],T\"Hv\",},{M[1],M[142],T\"Luci\",},{M[1],M[65],T\"OffA\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[83],T\"OffA_vite\",},{M[1],M[66],T\"OffB\",},{M[1],M[84],T\"OffB_vite\",},{M[1],M[64],T\"OffT\",},{M[1],M[263],T\"PosRifA\",},{M[1],M[264],T\"PosRifB\",},{M[1],M[283],T\"Stato\",},{M[3],M[91],T\"OffA_0\",},{M[3],M[94],T\"OffB_0\",},{M[3],M[137],T\"conv\",}}",
    "100 S1x6'type','srcId','name','auxInfo'{{M[3],M[178],T\"conv_vite\",},{M[3],M[335],T\"dv\",},{M[8],M[0],T\"is_active_c15_StateFlowFinal\",},{M[9],M[0],T\"is_c15_StateFlowFinal\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x2[147 69],M[1]}}},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 26, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c15_StateFlowFinal_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc15_StateFlowFinalInstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc15_StateFlowFinalInstanceStruct *chartInstance =
      (SFc15_StateFlowFinalInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _StateFlowFinalMachineNumber_,
           15,
           11,
           11,
           0,
           58,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_StateFlowFinalMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_StateFlowFinalMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _StateFlowFinalMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"OffA_0");
          _SFD_SET_DATA_PROPS(1,0,0,0,"OffB_0");
          _SFD_SET_DATA_PROPS(2,0,0,0,"conv");
          _SFD_SET_DATA_PROPS(3,0,0,0,"conv_vite");
          _SFD_SET_DATA_PROPS(4,0,0,0,"dv");
          _SFD_SET_DATA_PROPS(5,1,1,0,"Clock");
          _SFD_SET_DATA_PROPS(6,1,1,0,"posA_vite");
          _SFD_SET_DATA_PROPS(7,1,1,0,"posB_vite");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Status");
          _SFD_SET_DATA_PROPS(9,1,1,0,"fc");
          _SFD_SET_DATA_PROPS(10,1,1,0,"posA");
          _SFD_SET_DATA_PROPS(11,1,1,0,"posB");
          _SFD_SET_DATA_PROPS(12,1,1,0,"fcA");
          _SFD_SET_DATA_PROPS(13,1,1,0,"fcB");
          _SFD_SET_DATA_PROPS(14,1,1,0,"HomeSignal");
          _SFD_SET_DATA_PROPS(15,1,1,0,"avvio");
          _SFD_SET_DATA_PROPS(16,1,1,0,"BeginWork");
          _SFD_SET_DATA_PROPS(17,1,1,0,"ResetButton");
          _SFD_SET_DATA_PROPS(18,1,1,0,"StopPressed");
          _SFD_SET_DATA_PROPS(19,1,1,0,"ZeroSignal");
          _SFD_SET_DATA_PROPS(20,1,1,0,"DiscVite");
          _SFD_SET_DATA_PROPS(21,1,1,0,"AbbassaVite");
          _SFD_SET_DATA_PROPS(22,2,0,1,"Bool");
          _SFD_SET_DATA_PROPS(23,2,0,1,"OffT");
          _SFD_SET_DATA_PROPS(24,2,0,1,"CoppiaH");
          _SFD_SET_DATA_PROPS(25,2,0,1,"OffA_vite");
          _SFD_SET_DATA_PROPS(26,2,0,1,"OffB_vite");
          _SFD_SET_DATA_PROPS(27,2,0,1,"OffA");
          _SFD_SET_DATA_PROPS(28,2,0,1,"OffB");
          _SFD_SET_DATA_PROPS(29,2,0,1,"CoppiaA");
          _SFD_SET_DATA_PROPS(30,2,0,1,"CoppiaB");
          _SFD_SET_DATA_PROPS(31,2,0,1,"Luci");
          _SFD_SET_DATA_PROPS(32,2,0,1,"Hv");
          _SFD_SET_DATA_PROPS(33,2,0,1,"Hb");
          _SFD_SET_DATA_PROPS(34,2,0,1,"Enable");
          _SFD_SET_DATA_PROPS(35,2,0,1,"FineLavorazione");
          _SFD_SET_DATA_PROPS(36,2,0,1,"PosRifA");
          _SFD_SET_DATA_PROPS(37,2,0,1,"PosRifB");
          _SFD_SET_DATA_PROPS(38,2,0,1,"Stato");
          _SFD_SET_DATA_PROPS(39,7,0,0,"SampleTime");
          _SFD_SET_DATA_PROPS(40,8,0,0,"");
          _SFD_SET_DATA_PROPS(41,8,0,0,"");
          _SFD_SET_DATA_PROPS(42,8,0,0,"");
          _SFD_SET_DATA_PROPS(43,8,0,0,"");
          _SFD_SET_DATA_PROPS(44,8,0,0,"");
          _SFD_SET_DATA_PROPS(45,8,0,0,"");
          _SFD_SET_DATA_PROPS(46,8,0,0,"");
          _SFD_SET_DATA_PROPS(47,8,0,0,"");
          _SFD_SET_DATA_PROPS(48,8,0,0,"");
          _SFD_SET_DATA_PROPS(49,8,0,0,"");
          _SFD_SET_DATA_PROPS(50,8,0,0,"");
          _SFD_SET_DATA_PROPS(51,8,0,0,"");
          _SFD_SET_DATA_PROPS(52,8,0,0,"");
          _SFD_SET_DATA_PROPS(53,9,0,0,"");
          _SFD_SET_DATA_PROPS(54,9,0,0,"");
          _SFD_SET_DATA_PROPS(55,9,0,0,"");
          _SFD_SET_DATA_PROPS(56,9,0,0,"");
          _SFD_SET_DATA_PROPS(57,9,0,0,"");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(7,0,2);
          _SFD_STATE_INFO(8,0,2);
          _SFD_CH_SUBSTATE_COUNT(9);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,9);
          _SFD_CH_SUBSTATE_INDEX(8,10);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
        }

        _SFD_CV_INIT_CHART(9,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(9,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(10,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(0,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(0,0,0,1,27,1,27);

        {
          static int condStart[] = { 1, 17 };

          static int condEnd[] = { 13, 27 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,0,1,27,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(0,0,0,1,13,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,0,1,17,27,-1,0);
        _SFD_CV_INIT_EML(10,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(10,0,0,1,49,1,48);

        {
          static int condStart[] = { 1, 17, 33 };

          static int condEnd[] = { 13, 29, 49 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(10,0,0,1,49,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(10,0,0,1,13,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,1,17,29,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,2,33,49,-1,0);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(3,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,1,17,1,17);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,1,17,-1,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(2,0,0,1,15,1,15);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,15,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,1,16,1,16);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,16,-1,0);
        _SFD_CV_INIT_EML(9,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(9,0,0,1,50,1,48);

        {
          static int condStart[] = { 1, 11, 23, 35 };

          static int condEnd[] = { 7, 19, 31, 50 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(9,0,0,1,50,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(9,0,0,1,7,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,2,23,31,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,3,35,50,-1,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(7,0,0,1,17,1,17);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,17,-1,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(6,0,0,1,51,1,48);

        {
          static int condStart[] = { 1, 18, 35 };

          static int condEnd[] = { 14, 31, 51 };

          static int pfixExpr[] = { 0, 1, -3, 2, -2 };

          _SFD_CV_INIT_EML_MCDC(6,0,0,1,51,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,18,31,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,1,35,51,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(32,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(33,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(34,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(35,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(36,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(37,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(38,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(39,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(40,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(41,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(42,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(43,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(44,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(45,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(46,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(47,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(48,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(49,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(50,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(51,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(52,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(53,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(54,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(55,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(56,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(57,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_VALUE_PTR(40,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(41,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(42,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(43,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(44,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(45,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(46,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(47,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(48,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(49,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(50,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(51,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(52,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(53,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(54,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(55,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(56,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(57,(void *)(NULL));
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _StateFlowFinalMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc15_StateFlowFinalInstanceStruct *chartInstance =
      (SFc15_StateFlowFinalInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(5U, (void *)chartInstance->c15_Clock);
        _SFD_SET_DATA_VALUE_PTR(6U, (void *)chartInstance->c15_posA_vite);
        _SFD_SET_DATA_VALUE_PTR(7U, (void *)chartInstance->c15_posB_vite);
        _SFD_SET_DATA_VALUE_PTR(39U, (void *)&chartInstance->c15_SampleTime);
        _SFD_SET_DATA_VALUE_PTR(8U, (void *)chartInstance->c15_Status);
        _SFD_SET_DATA_VALUE_PTR(9U, (void *)chartInstance->c15_fc);
        _SFD_SET_DATA_VALUE_PTR(10U, (void *)chartInstance->c15_posA);
        _SFD_SET_DATA_VALUE_PTR(11U, (void *)chartInstance->c15_posB);
        _SFD_SET_DATA_VALUE_PTR(22U, (void *)chartInstance->c15_Bool);
        _SFD_SET_DATA_VALUE_PTR(23U, (void *)chartInstance->c15_OffT);
        _SFD_SET_DATA_VALUE_PTR(24U, (void *)chartInstance->c15_CoppiaH);
        _SFD_SET_DATA_VALUE_PTR(25U, (void *)chartInstance->c15_OffA_vite);
        _SFD_SET_DATA_VALUE_PTR(26U, (void *)chartInstance->c15_OffB_vite);
        _SFD_SET_DATA_VALUE_PTR(27U, (void *)chartInstance->c15_OffA);
        _SFD_SET_DATA_VALUE_PTR(28U, (void *)chartInstance->c15_OffB);
        _SFD_SET_DATA_VALUE_PTR(29U, (void *)chartInstance->c15_CoppiaA);
        _SFD_SET_DATA_VALUE_PTR(30U, (void *)chartInstance->c15_CoppiaB);
        _SFD_SET_DATA_VALUE_PTR(12U, (void *)chartInstance->c15_fcA);
        _SFD_SET_DATA_VALUE_PTR(13U, (void *)chartInstance->c15_fcB);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c15_conv);
        _SFD_SET_DATA_VALUE_PTR(31U, (void *)chartInstance->c15_Luci);
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c15_OffA_0);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c15_OffB_0);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c15_conv_vite);
        _SFD_SET_DATA_VALUE_PTR(32U, (void *)chartInstance->c15_Hv);
        _SFD_SET_DATA_VALUE_PTR(33U, (void *)chartInstance->c15_Hb);
        _SFD_SET_DATA_VALUE_PTR(14U, (void *)chartInstance->c15_HomeSignal);
        _SFD_SET_DATA_VALUE_PTR(15U, (void *)chartInstance->c15_avvio);
        _SFD_SET_DATA_VALUE_PTR(16U, (void *)chartInstance->c15_BeginWork);
        _SFD_SET_DATA_VALUE_PTR(34U, (void *)chartInstance->c15_Enable);
        _SFD_SET_DATA_VALUE_PTR(35U, (void *)chartInstance->c15_FineLavorazione);
        _SFD_SET_DATA_VALUE_PTR(17U, (void *)chartInstance->c15_ResetButton);
        _SFD_SET_DATA_VALUE_PTR(18U, (void *)chartInstance->c15_StopPressed);
        _SFD_SET_DATA_VALUE_PTR(36U, (void *)chartInstance->c15_PosRifA);
        _SFD_SET_DATA_VALUE_PTR(37U, (void *)chartInstance->c15_PosRifB);
        _SFD_SET_DATA_VALUE_PTR(38U, (void *)chartInstance->c15_Stato);
        _SFD_SET_DATA_VALUE_PTR(19U, (void *)chartInstance->c15_ZeroSignal);
        _SFD_SET_DATA_VALUE_PTR(20U, (void *)chartInstance->c15_DiscVite);
        _SFD_SET_DATA_VALUE_PTR(21U, (void *)chartInstance->c15_AbbassaVite);
        _SFD_SET_DATA_VALUE_PTR(4U, (void *)chartInstance->c15_dv);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sidz7odynkYIxM62Of1vjv";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_StateFlowFinal_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 15, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c15_StateFlowFinal(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
  initialize_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c15_StateFlowFinal(void *chartInstanceVar)
{
  enable_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c15_StateFlowFinal(void *chartInstanceVar)
{
  disable_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c15_StateFlowFinal(void *chartInstanceVar)
{
  sf_gateway_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c15_StateFlowFinal(void *chartInstanceVar)
{
  ext_mode_exec_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c15_StateFlowFinal(SimStruct* S)
{
  return get_sim_state_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c15_StateFlowFinal(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c15_StateFlowFinal(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc15_StateFlowFinalInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_StateFlowFinal_optimization_info();
    }

    finalize_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c15_StateFlowFinal(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c15_StateFlowFinal((SFc15_StateFlowFinalInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c15_StateFlowFinal_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x9'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint16\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 9, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3709147077U, 707659262U, 4101984910U,
    2127990956U };

  return checksum;
}

static void mdlSetWorkWidths_c15_StateFlowFinal(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  ssSetModelReferenceSampleTimeDisallowInheritance(S);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_StateFlowFinal_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      15);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,15,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 15);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,15);
    sf_mark_output_events_with_multiple_callers(S,sf_get_instance_specialization
      (),infoStruct,15,2);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 12, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 13, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 14, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 15, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 16, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 17, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 18, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 19, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 20, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 21, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,15,17);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,15,30);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=30; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 22; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,15);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3997172493U));
  ssSetChecksum1(S,(1570747354U));
  ssSetChecksum2(S,(2787319105U));
  ssSetChecksum3(S,(3657377880U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c15_StateFlowFinal(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c15_StateFlowFinal(SimStruct *S)
{
  SFc15_StateFlowFinalInstanceStruct *chartInstance;
  chartInstance = (SFc15_StateFlowFinalInstanceStruct *)utMalloc(sizeof
    (SFc15_StateFlowFinalInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc15_StateFlowFinalInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c15_StateFlowFinal;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c15_StateFlowFinal;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c15_StateFlowFinal;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c15_StateFlowFinal;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c15_StateFlowFinal;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c15_StateFlowFinal;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c15_StateFlowFinal;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c15_StateFlowFinal;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c15_StateFlowFinal;
  chartInstance->chartInfo.mdlStart = mdlStart_c15_StateFlowFinal;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c15_StateFlowFinal;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c15_StateFlowFinal;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c15_StateFlowFinal(chartInstance);
}

void c15_StateFlowFinal_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c15_StateFlowFinal(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c15_StateFlowFinal(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c15_StateFlowFinal(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c15_StateFlowFinal_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
