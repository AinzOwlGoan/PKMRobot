#ifndef __StateFlowFinal_XPCOPTIONS_H___
#define __StateFlowFinal_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "StateFlowFinal.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                1
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_StateFlowFinal_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  0
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void StateFlowFinal_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_StateFlowFinal_T *const StateFlowFinal_M)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  StateFlowFinal_M->Timing.stepSize0 = StateFlowFinal_M->Timing.stepSize0 *
    ratio;
  StateFlowFinal_M->Timing.stepSize1 = StateFlowFinal_M->Timing.stepSize1 *
    ratio;
  StateFlowFinal_M->Timing.stepSize = StateFlowFinal_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  StateFlowFinal_ChangeStepSize(stepSize, StateFlowFinal_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(StateFlowFinal_M, errMsg);
}

#endif                                 /* __StateFlowFinal_XPCOPTIONS_H___ */
