/*
 * kalmanSimulink.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "kalmanSimulink".
 *
 * Model version              : 1.118
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Nov 24 14:55:35 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "kalmanSimulink.h"
#include "kalmanSimulink_private.h"

/* Block states (auto storage) */
DW_kalmanSimulink_T kalmanSimulink_DW;

/* Real-time model */
RT_MODEL_kalmanSimulink_T kalmanSimulink_M_;
RT_MODEL_kalmanSimulink_T *const kalmanSimulink_M = &kalmanSimulink_M_;

/* Model step function */
void kalmanSimulink_step(void)
{
  /* local block i/o variables */
  real_T rtb_FromWorkspace;
  real_T rtb_FromWorkspace_c;

  /* FromWorkspace: '<S6>/From Workspace' */
  {
    int_T currIndex = kalmanSimulink_DW.FromWorkspace_IWORK.PrevIndex+1;
    real_T *pDataValues = (real_T *)
      kalmanSimulink_DW.FromWorkspace_PWORK.DataPtr;
    if (currIndex < 100) {
      pDataValues += currIndex;
      rtb_FromWorkspace = *pDataValues;
    } else {
      rtb_FromWorkspace = 0.0;
    }

    kalmanSimulink_DW.FromWorkspace_IWORK.PrevIndex = currIndex;
  }

  /* FromWorkspace: '<S7>/From Workspace' */
  {
    int_T currIndex = kalmanSimulink_DW.FromWorkspace_IWORK_m.PrevIndex+1;
    real_T *pDataValues = (real_T *)
      kalmanSimulink_DW.FromWorkspace_PWORK_i.DataPtr;
    if (currIndex < 100) {
      pDataValues += currIndex;
      rtb_FromWorkspace_c = *pDataValues;
    } else {
      rtb_FromWorkspace_c = 0.0;
    }

    kalmanSimulink_DW.FromWorkspace_IWORK_m.PrevIndex = currIndex;
  }

  /* MATLAB Function 'DinamicaInversa': '<S1>:1' */
  /* '<S1>:1:17' */
  /* '<S1>:1:3' */
  /*  Il calcolo della dinamica inversa va fatto passo passo: */
  /*  Primo caso */
  /*  Caso successivo al primo */
  /*  i > 1 */
  /* '<S1>:1:17' */
  /*  Definizioni condizioni iniziali */
  /* THETA34P Funzione che ritorna velocit&#xFFFD;&#xFFFD; e accelerazione dei link non */
  /* motorizzati */
  /* '<S1>:1:19' */
  /* '<S1>:1:20' */
  /* '<S1>:1:21' */
  /* MATLAB Function 'Id modello': '<S3>:1' */
  /* '<S3>:1:4' */
  /* '<S3>:1:5' */
  /* '<S3>:1:6' */
  /*  matrice di zero px1 */
  /*  p in questi caso = 2 */
  /* '<S3>:1:8' */
  /* MATLAB Function 'Id metodo': '<S2>:1' */
  /* '<S2>:1:7' */
  /* '<S2>:1:3' */
  /* '<S2>:1:4' */
  /* '<S2>:1:5' */
  /*  z(k+1) */
  /* '<S2>:1:6' */
  /* '<S2>:1:7' */
  /* '<S2>:1:8' */
  /* '<S2>:1:9' */
  /* MATLAB Function 'PassoStima std': '<S4>:1' */
  /*  raccolta dati */
  /*  Taylor primo ordine */
  /* '<S4>:1:20' */
  /* '<S4>:1:21' */
  /* Jf1_qp = jacobian(f(1),z(1)); */
  /* Jf1_q = jacobian(f(1),z(2)); */
  /* '<S4>:1:24' */
  /* '<S4>:1:26' */
  /* '<S4>:1:27' */
  /* Jf2_qp = jacobian(f(2),z(1)); */
  /* Jf2_q = jacobian(f(2),z(2)); */
  /* '<S4>:1:30' */
  /* '<S4>:1:32' */
  /* MATLAB Function 'Predizione': '<S5>:1' */
  /* '<S5>:1:4' */
  /*  rivedere bene */
  /* '<S5>:1:5' */
  /* '<S5>:1:6' */
  /* '<S5>:1:8' */
  /* '<S5>:1:9' */
  /* '<S5>:1:10' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(kalmanSimulink_M->rtwLogInfo,
                      (&kalmanSimulink_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(kalmanSimulink_M)!=-1) &&
        !((rtmGetTFinal(kalmanSimulink_M)-kalmanSimulink_M->Timing.taskTime0) >
          kalmanSimulink_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(kalmanSimulink_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++kalmanSimulink_M->Timing.clockTick0)) {
    ++kalmanSimulink_M->Timing.clockTickH0;
  }

  kalmanSimulink_M->Timing.taskTime0 = kalmanSimulink_M->Timing.clockTick0 *
    kalmanSimulink_M->Timing.stepSize0 + kalmanSimulink_M->Timing.clockTickH0 *
    kalmanSimulink_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void kalmanSimulink_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)kalmanSimulink_M, 0,
                sizeof(RT_MODEL_kalmanSimulink_T));
  rtmSetTFinal(kalmanSimulink_M, -1);
  kalmanSimulink_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    kalmanSimulink_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(kalmanSimulink_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(kalmanSimulink_M->rtwLogInfo, (NULL));
    rtliSetLogT(kalmanSimulink_M->rtwLogInfo, "tout");
    rtliSetLogX(kalmanSimulink_M->rtwLogInfo, "");
    rtliSetLogXFinal(kalmanSimulink_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(kalmanSimulink_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(kalmanSimulink_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(kalmanSimulink_M->rtwLogInfo, 0);
    rtliSetLogDecimation(kalmanSimulink_M->rtwLogInfo, 1);
    rtliSetLogY(kalmanSimulink_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(kalmanSimulink_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(kalmanSimulink_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&kalmanSimulink_DW, 0,
                sizeof(DW_kalmanSimulink_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(kalmanSimulink_M->rtwLogInfo, 0.0,
    rtmGetTFinal(kalmanSimulink_M), kalmanSimulink_M->Timing.stepSize0,
    (&rtmGetErrorStatus(kalmanSimulink_M)));

  /* Start for FromWorkspace: '<S6>/From Workspace' */
  {
    static real_T pDataValues0[] = { 0.0, 0.0023336681184892576,
      0.0046672802304424423, 0.0070007805088190172, 0.0093341133231186566,
      0.011667223240155518, 0.01400005502480469, 0.016332553640720775,
      0.018664664251028466, 0.020996332218985184, 0.023327503108615519,
      0.025658122685317721, 0.027988136916441763, 0.030317491971839333,
      0.032646134224385372, 0.034974010250471477, 0.037301066830470582,
      0.039627250949173562, 0.041952509796196941, 0.044276790766362532,
      0.046600041460048112, 0.048922209683509695, 0.051243243449175246,
      0.053563090975909458, 0.055881700689250344, 0.058199021221616361,
      0.060515001412485878, 0.062829590308546762, 0.065142737163818062,
      0.067454391439742661, 0.069764502805250941, 0.072073021136796089,
      0.0743798965183602, 0.076685079241431961, 0.078988519804955512,
      0.081290168915250191, 0.083589977485902134, 0.085887896637626415,
      0.088183877698101293, 0.0904778722017728, 0.092769831889631588,
      0.095059708708960508, 0.097347454813053472, 0.0996330225609066,
      0.10191636451687941, 0.10419743345032879, 0.10647618233521343,
      0.10875256434967073, 0.11102653287556453, 0.11329804149800489,
      0.11556704400483944, 0.11783349438611636, 0.12009734683351934,
      0.12235855573977442, 0.12461707569802838, 0.12687286150119964,
      0.12912586814130075, 0.13137605080873316, 0.1336233648915541,
      0.13586776597471614, 0.13810920983927835, 0.14034765246159051,
      0.14258305001244931, 0.14481535885622768, 0.14704453554997643,
      0.14927053684249858, 0.15149331967339688, 0.15371284117209411,
      0.15592905865682635, 0.15814192963360935, 0.16035141179517867,
      0.16255746301990234, 0.16476004137066816, 0.16695910509374273,
      0.16915461261760659, 0.17134652255176128, 0.17353479368551078,
      0.17571938498671805, 0.17790025560053385, 0.18007736484810155,
      0.18225067222523572, 0.18442013740107555, 0.18658572021671177,
      0.18874738068379046, 0.19090507898309059, 0.193058775463076,
      0.19520843063842466, 0.19735400518853138, 0.19949545995598703,
      0.20163275594503316, 0.20376585431999331, 0.20589471640367876,
      0.20801930367577148, 0.21013957777118386, 0.21225550047839314,
      0.21436703373775517, 0.2164741396397919, 0.21857678042345849,
      0.22067491847438619, 0.22276851632310243 } ;

    kalmanSimulink_DW.FromWorkspace_PWORK.TimePtr = (void *) 0;
    kalmanSimulink_DW.FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
    kalmanSimulink_DW.FromWorkspace_IWORK.PrevIndex = -1;
  }

  /* Start for FromWorkspace: '<S7>/From Workspace' */
  {
    static real_T pDataValues0[] = { 0.0, 0.0026257591610500067,
      0.0052514550198712179, 0.0078770240272843465, 0.010502402365627377,
      0.013127525949799865, 0.015752330428345177, 0.01837675118457063,
      0.021000723337705286, 0.023624181744095491, 0.026247060998437894,
      0.028869295435049982, 0.031490819129177769, 0.034111565898340981,
      0.036731469303715007, 0.039350462651550129, 0.041968478994627328,
      0.04458545113375105, 0.047201311619278541, 0.049815992752685369,
      0.052429426588167745, 0.05504154493428072, 0.057652279355612408,
      0.060261561174494542, 0.062869321472748138, 0.06547549109346551,
      0.068080000642827335, 0.070682780491955047, 0.0732837607787987,
      0.075882871410059435, 0.078480042063147432, 0.081075202188173767,
      0.083668281009977655, 0.086259207530187551, 0.088847910529316329,
      0.091434318568891379, 0.094018359993617448, 0.096599962933574146,
      0.099179055306446467, 0.10175556481978874, 0.10432941897332218,
      0.10690054506126481, 0.1094688701746948, 0.11203432120394616,
      0.114596824841037, 0.11715630758213014, 0.11971269573002562,
      0.12226591539668566, 0.12481589250579056, 0.12736255279532721,
      0.1299058218202076, 0.1324456249549199, 0.13498188739621,
      0.13751453416579323, 0.14004349011309772, 0.14256867991803765,
      0.14509002809381646, 0.14760745898976102, 0.15012089679418439,
      0.1526302655372794, 0.15513548909404085, 0.15763649118721754,
      0.16013319539029286, 0.16262552513049466, 0.16511340369183355,
      0.16759675421816991, 0.17007549971630881, 0.17254956305912308,
      0.17501886698870503, 0.17748333411954456, 0.1799428869417358,
      0.18239744782421047, 0.18484693901799898, 0.18729128265951736,
      0.18973040077388209, 0.19216421527825078, 0.19459264798518905,
      0.19701562060606406, 0.19943305475446368, 0.20184487194964115,
      0.20425099361998578, 0.20665134110651881, 0.20904583566641421,
      0.2114343984765446, 0.21381695063705247, 0.21619341317494473,
      0.21856370704771311, 0.22092775314697771, 0.22328547230215517,
      0.22563678528415049, 0.2279816128090722, 0.23031987554197203,
      0.23265149410060595, 0.234976389059221, 0.23729448095236219,
      0.23960569027870451, 0.24190993750490625, 0.24420714306948438,
      0.24649722738671387, 0.24878011085054694 } ;

    kalmanSimulink_DW.FromWorkspace_PWORK_i.TimePtr = (void *) 0;
    kalmanSimulink_DW.FromWorkspace_PWORK_i.DataPtr = (void *) pDataValues0;
    kalmanSimulink_DW.FromWorkspace_IWORK_m.PrevIndex = -1;
  }
}

/* Model terminate function */
void kalmanSimulink_terminate(void)
{
  /* (no terminate code required) */
}
