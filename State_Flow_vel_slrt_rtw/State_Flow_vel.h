/*
 * State_Flow_vel.h
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

#ifndef RTW_HEADER_State_Flow_vel_h_
#define RTW_HEADER_State_Flow_vel_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "rtw_modelmap.h"
#ifndef State_Flow_vel_COMMON_INCLUDES_
# define State_Flow_vel_COMMON_INCLUDES_
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#include "stddef.h"
#include "stdlib.h"
#include "xpcethercatutils.h"
#endif                                 /* State_Flow_vel_COMMON_INCLUDES_ */

#include "State_Flow_vel_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_State_Flow_vel         RT_MODEL_State_Flow_vel_T

/* Definition for use in the target main file */
#define State_Flow_vel_rtModel         RT_MODEL_State_Flow_vel_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S33>/Vel Asse A conv' */
typedef struct {
  real_T vel_A_conv;                   /* '<S33>/Vel Asse A conv' */
} B_VelAsseAconv_State_Flow_vel_T;

/* Block signals for system '<S33>/Vel Asse B conv' */
typedef struct {
  real_T vel_B_conv;                   /* '<S33>/Vel Asse B conv' */
} B_VelAsseBconv_State_Flow_vel_T;

/* Block signals for system '<S40>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S40>/MATLAB Function' */
} B_MATLABFunction_State_Flow_v_T;

/* Block signals for system '<S14>/Asse B' */
typedef struct {
  real_T ldm_pos;                      /* '<S14>/Asse B' */
  real_T ldm_vel;                      /* '<S14>/Asse B' */
} B_AsseB_State_Flow_vel_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Clock;                        /* '<Root>/Clock' */
  real_T convert;                      /* '<S12>/convert' */
  real_T convert10;                    /* '<S12>/convert 10 ' */
  real_T DataTypeConversion6;          /* '<S16>/Data Type Conversion6' */
  real_T DataTypeConversion8;          /* '<S1>/Data Type Conversion8' */
  real_T IntegertoBitConverter[16];    /* '<S1>/Integer to Bit Converter' */
  real_T convert_g;                    /* '<S11>/convert' */
  real_T convert10_d;                  /* '<S11>/convert 10 ' */
  real_T DataTypeConversion8_f;        /* '<S2>/Data Type Conversion8' */
  real_T IntegertoBitConverter_d[16];  /* '<S2>/Integer to Bit Converter' */
  real_T VelocityA;                    /* '<S17>/Velocity A' */
  real_T VelocityB;                    /* '<S17>/Velocity B' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Gain_h;                       /* '<S9>/Gain' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Gain_n;                       /* '<S10>/Gain' */
  real_T Memory;                       /* '<S40>/Memory' */
  real_T Sum2;                         /* '<S27>/Sum2' */
  real_T Sum_e;                        /* '<S4>/Sum' */
  real_T Sum1_g;                       /* '<S4>/Sum1' */
  real_T Sum4;                         /* '<S4>/Sum4' */
  real_T Sum3;                         /* '<S4>/Sum3' */
  real_T Sum5;                         /* '<S4>/Sum5' */
  real_T ProportionalGain;             /* '<S28>/Proportional Gain' */
  real_T Integrator;                   /* '<S28>/Integrator' */
  real_T DerivativeGain;               /* '<S28>/Derivative Gain' */
  real_T Filter;                       /* '<S28>/Filter' */
  real_T SumD;                         /* '<S28>/SumD' */
  real_T FilterCoefficient;            /* '<S28>/Filter Coefficient' */
  real_T VelocityA_a;                  /* '<S33>/Velocity A' */
  real_T Sum17;                        /* '<S4>/Sum17' */
  real_T Switch1;                      /* '<S40>/Switch1' */
  real_T Saturation;                   /* '<S5>/Saturation' */
  real_T DataTypeConversion14;         /* '<S40>/Data Type Conversion14' */
  real_T Memory_g;                     /* '<S42>/Memory' */
  real_T Sum12;                        /* '<S4>/Sum12' */
  real_T Sum2_f;                       /* '<S4>/Sum2' */
  real_T Sum14;                        /* '<S4>/Sum14' */
  real_T ProportionalGain_p;           /* '<S29>/Proportional Gain' */
  real_T Integrator_d;                 /* '<S29>/Integrator' */
  real_T DerivativeGain_b;             /* '<S29>/Derivative Gain' */
  real_T Filter_d;                     /* '<S29>/Filter' */
  real_T SumD_e;                       /* '<S29>/SumD' */
  real_T FilterCoefficient_g;          /* '<S29>/Filter Coefficient' */
  real_T VelocityB_p;                  /* '<S33>/Velocity B' */
  real_T Sum6;                         /* '<S4>/Sum6' */
  real_T Switch1_l;                    /* '<S42>/Switch1' */
  real_T Saturation_e;                 /* '<S6>/Saturation' */
  real_T DataTypeConversion14_g;       /* '<S42>/Data Type Conversion14' */
  real_T Memory_n;                     /* '<S44>/Memory' */
  real_T Switch1_f;                    /* '<S44>/Switch1' */
  real_T DataTypeConversion14_k;       /* '<S44>/Data Type Conversion14' */
  real_T Sum_i;                        /* '<S58>/Sum' */
  real_T Sum3_o;                       /* '<S14>/Sum3' */
  real_T Sum5_h;                       /* '<S67>/Sum5' */
  real_T Sum2_b;                       /* '<S61>/Sum2' */
  real_T VelocityA_m;                  /* '<S65>/Velocity A' */
  real_T VelocityB_h;                  /* '<S65>/Velocity B' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T Memory_a;                     /* '<S46>/Memory' */
  real_T Switch1_k;                    /* '<S46>/Switch1' */
  real_T DataTypeConversion14_e;       /* '<S46>/Data Type Conversion14' */
  real_T Gain_k;                       /* '<S34>/Gain' */
  real_T Gain_p;                       /* '<S35>/Gain' */
  real_T Gain_b;                       /* '<S36>/Gain' */
  real_T Gain_g;                       /* '<S37>/Gain' */
  real_T IntegralGain;                 /* '<S28>/Integral Gain' */
  real_T IntegralGain_f;               /* '<S29>/Integral Gain' */
  real_T TSamp;                        /* '<S63>/TSamp' */
  real_T Uk1;                          /* '<S63>/UD' */
  real_T Diff;                         /* '<S63>/Diff' */
  real_T TSamp_c;                      /* '<S66>/TSamp' */
  real_T Uk1_f;                        /* '<S66>/UD' */
  real_T Diff_i;                       /* '<S66>/Diff' */
  real_T Bool;                         /* '<Root>/State flow robot' */
  real_T OffT;                         /* '<Root>/State flow robot' */
  real_T CoppiaH;                      /* '<Root>/State flow robot' */
  real_T OffA_vite;                    /* '<Root>/State flow robot' */
  real_T OffB_vite;                    /* '<Root>/State flow robot' */
  real_T OffA;                         /* '<Root>/State flow robot' */
  real_T OffB;                         /* '<Root>/State flow robot' */
  real_T CoppiaA;                      /* '<Root>/State flow robot' */
  real_T CoppiaB;                      /* '<Root>/State flow robot' */
  real_T Luci;                         /* '<Root>/State flow robot' */
  real_T OffA_0;                       /* '<Root>/State flow robot' */
  real_T OffB_0;                       /* '<Root>/State flow robot' */
  real_T SFunction_o14;                /* '<Root>/State flow robot' */
  real_T SFunction_o15;                /* '<Root>/State flow robot' */
  real_T SFunction_o16;                /* '<Root>/State flow robot' */
  real_T SFunction_o17;                /* '<Root>/State flow robot' */
  real_T SFunction_o18;                /* '<Root>/State flow robot' */
  real_T SFunction_o19;                /* '<Root>/State flow robot' */
  real_T SFunction_o20;                /* '<Root>/State flow robot' */
  real_T SFunction_o21;                /* '<Root>/State flow robot' */
  real_T SFunction_o22;                /* '<Root>/State flow robot' */
  real_T SFunction_o23;                /* '<Root>/State flow robot' */
  real_T SFunction_o24;                /* '<Root>/State flow robot' */
  real_T SFunction_o25;                /* '<Root>/State flow robot' */
  real_T SFunction_o26;                /* '<Root>/State flow robot' */
  real_T SFunction_o27;                /* '<Root>/State flow robot' */
  real_T fc;                           /* '<Root>/State flow robot' */
  real_T fcA;                          /* '<Root>/State flow robot' */
  real_T fcB;                          /* '<Root>/State flow robot' */
  real_T CA;                           /* '<S72>/MATLAB Function' */
  real_T CB;                           /* '<S72>/MATLAB Function' */
  real_T CH;                           /* '<S72>/MATLAB Function' */
  real_T vel_B_conv;                   /* '<S65>/Vel Asse B conv' */
  real_T vel_A_conv;                   /* '<S65>/Vel Asse A conv' */
  real_T pos_B_conv;                   /* '<S14>/Asse B conv' */
  real_T pos_B_conv_v;                 /* '<S67>/Asse B conv v' */
  real_T pos_A_conv;                   /* '<S67>/Asse A conv' */
  real_T Switch2;                      /* '<S8>/Switch2' */
  real_T Sum6_f;                       /* '<S14>/Sum6' */
  real_T Gain4;                        /* '<S14>/Gain4' */
  real_T Sum4_i;                       /* '<S14>/Sum4' */
  real_T Gain2;                        /* '<S14>/Gain2' */
  real_T Sum7;                         /* '<S14>/Sum7' */
  real_T Sum8;                         /* '<S14>/Sum8' */
  real_T Gain6;                        /* '<S62>/Gain6' */
  real_T Sum1_o;                       /* '<S14>/Sum1' */
  real_T Gain_hw;                      /* '<S62>/Gain' */
  real_T Sum9;                         /* '<S62>/Sum9' */
  real_T Gain_a;                       /* '<S7>/Gain' */
  real_T Switch1_i;                    /* '<S6>/Switch1' */
  real_T Coppiatheta1vel;              /* '<S4>/Coppia theta 1 vel' */
  real_T Sum_n;                        /* '<S29>/Sum' */
  real_T Sum7_l;                       /* '<S4>/Sum7' */
  real_T Switch1_c;                    /* '<S5>/Switch1' */
  real_T Coppiatheta2vel;              /* '<S4>/Coppia theta 2 vel' */
  real_T Sum_h;                        /* '<S28>/Sum' */
  real_T Sum8_f;                       /* '<S4>/Sum8' */
  real_T x;                            /* '<S4>/Selettore' */
  real_T y;                            /* '<S4>/Selettore' */
  real_T xq;                           /* '<S4>/Quadrato' */
  real_T yq;                           /* '<S4>/Quadrato' */
  real_T xq_p;                         /* '<S4>/Quadrato' */
  real_T yq_p;                         /* '<S4>/Quadrato' */
  real_T x0;                           /* '<S4>/Cinematica Inversa1' */
  real_T y0;                           /* '<S4>/Cinematica Inversa1' */
  real_T theta1_p;                     /* '<S4>/Cinematica Inversa vel' */
  real_T theta2_p;                     /* '<S4>/Cinematica Inversa vel' */
  real_T theta1;                       /* '<S4>/Cinematica Inversa' */
  real_T theta2;                       /* '<S4>/Cinematica Inversa' */
  real_T x_i;                          /* '<S4>/Cerchio' */
  real_T y_m;                          /* '<S4>/Cerchio' */
  real_T pos_B_conv_k;                 /* '<S4>/Asse B conv brac1' */
  real_T pos_A_conv_e;                 /* '<S4>/Asse A conv brac' */
  real_T y_f;                          /* '<S3>/MATLAB Function2' */
  real_T y_b;                          /* '<S3>/MATLAB Function1' */
  real_T y_i;                          /* '<S3>/MATLAB Function' */
  int32_T EtherCATInit[6];             /* '<Root>/EtherCAT Init ' */
  int32_T MotoreviteA;                 /* '<S12>/Motore vite A' */
  int32_T MotoreviteB;                 /* '<S12>/Motore vite B' */
  int32_T MotorebracciaA;              /* '<S11>/Motore braccia A' */
  int32_T MotorebracciaB;              /* '<S11>/Motore braccia B' */
  int32_T EtherCATPDOReceive14;        /* '<S17>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15;        /* '<S17>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14_c;      /* '<S33>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_l;      /* '<S33>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14_l;      /* '<S65>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_e;      /* '<S65>/EtherCAT PDO Receive15' */
  int16_T DataTypeConversion3;         /* '<S5>/Data Type Conversion3' */
  int16_T DataTypeConversion4;         /* '<S6>/Data Type Conversion4' */
  int16_T ConvertA;                    /* '<S7>/Convert A' */
  int16_T ConvertB;                    /* '<S8>/Convert B' */
  uint16_T StatusWord;                 /* '<S16>/Status Word' */
  uint16_T EtherCATPDOReceive16;       /* '<S1>/EtherCAT PDO Receive16' */
  uint16_T EtherCATPDOReceive16_d;     /* '<S2>/EtherCAT PDO Receive16' */
  int8_T DataTypeConversion7;          /* '<Root>/Data Type Conversion7' */
  int8_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  int8_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  int8_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  boolean_T DataTypeConversion25;      /* '<S3>/Data Type Conversion25' */
  boolean_T DataTypeConversion24;      /* '<S3>/Data Type Conversion24' */
  boolean_T DataTypeConversion26;      /* '<S3>/Data Type Conversion26' */
  boolean_T EtherCATPDOReceive9;       /* '<S40>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_h;     /* '<S42>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_hd;    /* '<S44>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_d;     /* '<S46>/EtherCAT PDO Receive9' */
  B_VelAsseBconv_State_Flow_vel_T sf_VelAsseBconv;/* '<S17>/Vel Asse B conv' */
  B_VelAsseAconv_State_Flow_vel_T sf_VelAsseAconv;/* '<S17>/Vel Asse A conv' */
  B_AsseB_State_Flow_vel_T sf_RifermentoAsseAVite;/* '<S14>/Rifermento Asse A Vite' */
  B_AsseB_State_Flow_vel_T sf_AsseB;   /* '<S14>/Asse B' */
  B_MATLABFunction_State_Flow_v_T sf_MATLABFunction_i;/* '<S46>/MATLAB Function' */
  B_MATLABFunction_State_Flow_v_T sf_MATLABFunction_f;/* '<S44>/MATLAB Function' */
  B_MATLABFunction_State_Flow_v_T sf_MATLABFunction_a;/* '<S42>/MATLAB Function' */
  B_MATLABFunction_State_Flow_v_T sf_MATLABFunction_e;/* '<S40>/MATLAB Function' */
  B_VelAsseBconv_State_Flow_vel_T sf_VelAsseBconv_o;/* '<S33>/Vel Asse B conv' */
  B_VelAsseAconv_State_Flow_vel_T sf_VelAsseAconv_o;/* '<S33>/Vel Asse A conv' */
} B_State_Flow_vel_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S28>/Integrator' */
  real_T Filter_DSTATE;                /* '<S28>/Filter' */
  real_T Integrator_DSTATE_a;          /* '<S29>/Integrator' */
  real_T Filter_DSTATE_d;              /* '<S29>/Filter' */
  real_T UD_DSTATE;                    /* '<S63>/UD' */
  real_T UD_DSTATE_f;                  /* '<S66>/UD' */
  real_T Memory_PreviousInput;         /* '<S40>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S42>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S44>/Memory' */
  real_T Memory_PreviousInput_h;       /* '<S46>/Memory' */
  real_T conv;                         /* '<Root>/State flow robot' */
  real_T C1;                           /* '<Root>/State flow robot' */
  real_T C2;                           /* '<Root>/State flow robot' */
  real_T conv_vite;                    /* '<Root>/State flow robot' */
  struct {
    real_T EXECRATIO;
  } EtherCATInit_RWORK;                /* '<Root>/EtherCAT Init ' */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ea;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_g5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_e4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_i;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_aq;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ej;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ok;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cy;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_j;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ij;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_os;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_nw;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gs;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pt;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_d4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ib;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pe;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ie;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_jh;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_h;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_jn;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_db;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_g4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_hx;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ie5;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_cyc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_d4c;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_ib0;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_d4ci;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserte_ib0h;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/State flow robot' */
  int_T EtherCATPDOTransmit5_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 5' */
  int_T EtherCATPDOTransmit6_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 6' */
  int_T EtherCATPDOTransmit3_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 3' */
  int_T EtherCATPDOTransmit4_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 4' */
  int_T MotoreviteA_IWORK[7];          /* '<S12>/Motore vite A' */
  int_T MotoreviteB_IWORK[7];          /* '<S12>/Motore vite B' */
  int_T StatusWord_IWORK[7];           /* '<S16>/Status Word' */
  int_T EtherCATPDOReceive16_IWORK[7]; /* '<S1>/EtherCAT PDO Receive16' */
  int_T MotorebracciaA_IWORK[7];       /* '<S11>/Motore braccia A' */
  int_T MotorebracciaB_IWORK[7];       /* '<S11>/Motore braccia B' */
  int_T EtherCATPDOReceive16_IWORK_l[7];/* '<S2>/EtherCAT PDO Receive16' */
  int_T EtherCATPDOReceive14_IWORK[7]; /* '<S17>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK[7]; /* '<S17>/EtherCAT PDO Receive15' */
  int_T LuceBianca_IWORK[7];           /* '<S3>/Luce Bianca' */
  int_T LuceRossa_IWORK[7];            /* '<S3>/Luce Rossa ' */
  int_T LuceVerde_IWORK[7];            /* '<S3>/Luce Verde' */
  int_T EtherCATPDOReceive14_IWORK_j[7];/* '<S33>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOTransmit1_IWORK[7]; /* '<S5>/EtherCAT PDO Transmit 1' */
  int_T EtherCATPDOReceive9_IWORK[7];  /* '<S40>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive15_IWORK_m[7];/* '<S33>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOTransmit7_IWORK[7]; /* '<S6>/EtherCAT PDO Transmit 7' */
  int_T EtherCATPDOReceive9_IWORK_n[7];/* '<S42>/EtherCAT PDO Receive9' */
  int_T Torquesend_IWORK[7];           /* '<S7>/Torque send' */
  int_T EtherCATPDOReceive9_IWORK_g[7];/* '<S44>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive14_IWORK_je[7];/* '<S65>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_e[7];/* '<S65>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOTransmit2_IWORK[7]; /* '<S8>/EtherCAT PDO Transmit 2' */
  int_T EtherCATPDOReceive9_IWORK_l[7];/* '<S46>/EtherCAT PDO Receive9' */
  uint16_T temporalCounter_i1;         /* '<Root>/State flow robot' */
  int8_T Homing_SubsysRanBC;           /* '<S15>/Homing' */
  uint8_T is_active_c15_State_Flow_vel;/* '<Root>/State flow robot' */
  uint8_T is_c15_State_Flow_vel;       /* '<Root>/State flow robot' */
} DW_State_Flow_vel_T;

/* Backward compatible GRT Identifiers */
#define rtB                            State_Flow_vel_B
#define BlockIO                        B_State_Flow_vel_T
#define rtP                            State_Flow_vel_P
#define Parameters                     P_State_Flow_vel_T
#define rtDWork                        State_Flow_vel_DW
#define D_Work                         DW_State_Flow_vel_T

/* Parameters (auto storage) */
struct P_State_Flow_vel_T_ {
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S28>/Derivative Gain'
                                        */
  real_T PIDController2_D;             /* Mask Parameter: PIDController2_D
                                        * Referenced by: '<S29>/Derivative Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S28>/Integral Gain'
                                        */
  real_T PIDController2_I;             /* Mask Parameter: PIDController2_I
                                        * Referenced by: '<S29>/Integral Gain'
                                        */
  real_T DiscreteDerivativeB_ICPrevScale;/* Mask Parameter: DiscreteDerivativeB_ICPrevScale
                                          * Referenced by: '<S63>/UD'
                                          */
  real_T DiscreteDerivativeA_ICPrevScale;/* Mask Parameter: DiscreteDerivativeA_ICPrevScale
                                          * Referenced by: '<S66>/UD'
                                          */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S28>/Filter Coefficient'
                                        */
  real_T PIDController2_N;             /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S29>/Filter Coefficient'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S28>/Proportional Gain'
                                        */
  real_T PIDController2_P;             /* Mask Parameter: PIDController2_P
                                        * Referenced by: '<S29>/Proportional Gain'
                                        */
  real_T Coppiatheta2vel_Gain;         /* Expression: 0
                                        * Referenced by: '<S4>/Coppia theta 2 vel'
                                        */
  real_T Switch1_Threshold;            /* Expression: 3
                                        * Referenced by: '<S5>/Switch1'
                                        */
  real_T Coppiatheta1vel_Gain;         /* Expression: 0
                                        * Referenced by: '<S4>/Coppia theta 1 vel'
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 3
                                        * Referenced by: '<S6>/Switch1'
                                        */
  real_T Gain6_Gain;                   /* Expression: 7.5*1000/0.36
                                        * Referenced by: '<S62>/Gain6'
                                        */
  real_T Gain_Gain;                    /* Expression: 300*1000/0.36
                                        * Referenced by: '<S62>/Gain'
                                        */
  real_T Gain_Gain_j;                  /* Expression: -1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.1*1000/0.36
                                        * Referenced by: '<S14>/Gain4'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2*1000/0.36
                                        * Referenced by: '<S14>/Gain2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 6
                                        * Referenced by: '<S8>/Switch2'
                                        */
  real_T CA_Y0;                        /* Computed Parameter: CA_Y0
                                        * Referenced by: '<S72>/CA'
                                        */
  real_T CB_Y0;                        /* Computed Parameter: CB_Y0
                                        * Referenced by: '<S72>/CB'
                                        */
  real_T CH_Y0;                        /* Computed Parameter: CH_Y0
                                        * Referenced by: '<S72>/CH'
                                        */
  real_T AsseAbraccia_Value;           /* Expression: 4
                                        * Referenced by: '<Root>/Asse A braccia'
                                        */
  real_T EtherCATPDOTransmit5_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P1_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P1[43];  /* Computed Parameter: EtherCATPDOTransmit5_P1
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T EtherCATPDOTransmit5_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P2_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P2;      /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T EtherCATPDOTransmit5_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P3_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P3;      /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T EtherCATPDOTransmit5_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P4_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P4;      /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T EtherCATPDOTransmit5_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P5_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P5;      /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T EtherCATPDOTransmit5_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P6_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P6;      /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T EtherCATPDOTransmit5_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit5_P7_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                          */
  real_T EtherCATPDOTransmit5_P7;      /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 5'
                                        */
  real_T AsseAvite_Value;              /* Expression: 4
                                        * Referenced by: '<Root>/Asse A vite'
                                        */
  real_T EtherCATPDOTransmit6_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P1_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P1[43];  /* Computed Parameter: EtherCATPDOTransmit6_P1
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T EtherCATPDOTransmit6_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P2_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P2;      /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T EtherCATPDOTransmit6_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P3_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P3;      /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T EtherCATPDOTransmit6_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P4_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P4;      /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T EtherCATPDOTransmit6_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P5_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P5;      /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T EtherCATPDOTransmit6_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P6_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P6;      /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T EtherCATPDOTransmit6_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit6_P7_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                          */
  real_T EtherCATPDOTransmit6_P7;      /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 6'
                                        */
  real_T AsseBbraccia_Value;           /* Expression: 4
                                        * Referenced by: '<Root>/Asse B braccia'
                                        */
  real_T EtherCATPDOTransmit3_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P1_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P1[43];  /* Computed Parameter: EtherCATPDOTransmit3_P1
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T EtherCATPDOTransmit3_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P2_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P2;      /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T EtherCATPDOTransmit3_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P3_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P3;      /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T EtherCATPDOTransmit3_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P4_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P4;      /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T EtherCATPDOTransmit3_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P5_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P5;      /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T EtherCATPDOTransmit3_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P6_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P6;      /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T EtherCATPDOTransmit3_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit3_P7_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                          */
  real_T EtherCATPDOTransmit3_P7;      /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 3'
                                        */
  real_T AsseBvite_Value;              /* Expression: 4
                                        * Referenced by: '<Root>/Asse B vite'
                                        */
  real_T EtherCATPDOTransmit4_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P1_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P1[43];  /* Computed Parameter: EtherCATPDOTransmit4_P1
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T EtherCATPDOTransmit4_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P2_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P2;      /* Expression: sig_offset
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T EtherCATPDOTransmit4_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P3_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P3;      /* Expression: sig_type
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T EtherCATPDOTransmit4_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P4_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P4;      /* Expression: type_size
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T EtherCATPDOTransmit4_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P5_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P5;      /* Expression: sig_dim
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T EtherCATPDOTransmit4_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P6_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P6;      /* Expression: device_id
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T EtherCATPDOTransmit4_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit4_P7_Size
                                          * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                          */
  real_T EtherCATPDOTransmit4_P7;      /* Expression: sample_time
                                        * Referenced by: '<Root>/EtherCAT PDO Transmit 4'
                                        */
  real_T MotoreviteA_P1_Size[2];       /* Computed Parameter: MotoreviteA_P1_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P1[47];           /* Computed Parameter: MotoreviteA_P1
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P2_Size[2];       /* Computed Parameter: MotoreviteA_P2_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P2;               /* Expression: sig_offset
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P3_Size[2];       /* Computed Parameter: MotoreviteA_P3_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P3;               /* Expression: sig_type
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P4_Size[2];       /* Computed Parameter: MotoreviteA_P4_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P4;               /* Expression: type_size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P5_Size[2];       /* Computed Parameter: MotoreviteA_P5_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P5;               /* Expression: sig_dim
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P6_Size[2];       /* Computed Parameter: MotoreviteA_P6_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P6;               /* Expression: device_id
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P7_Size[2];       /* Computed Parameter: MotoreviteA_P7_Size
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteA_P7;               /* Expression: sample_time
                                        * Referenced by: '<S12>/Motore vite A'
                                        */
  real_T MotoreviteB_P1_Size[2];       /* Computed Parameter: MotoreviteB_P1_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P1[47];           /* Computed Parameter: MotoreviteB_P1
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P2_Size[2];       /* Computed Parameter: MotoreviteB_P2_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P2;               /* Expression: sig_offset
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P3_Size[2];       /* Computed Parameter: MotoreviteB_P3_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P3;               /* Expression: sig_type
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P4_Size[2];       /* Computed Parameter: MotoreviteB_P4_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P4;               /* Expression: type_size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P5_Size[2];       /* Computed Parameter: MotoreviteB_P5_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P5;               /* Expression: sig_dim
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P6_Size[2];       /* Computed Parameter: MotoreviteB_P6_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P6;               /* Expression: device_id
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P7_Size[2];       /* Computed Parameter: MotoreviteB_P7_Size
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T MotoreviteB_P7;               /* Expression: sample_time
                                        * Referenced by: '<S12>/Motore vite B'
                                        */
  real_T StatusWord_P1_Size[2];        /* Computed Parameter: StatusWord_P1_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P1[37];            /* Computed Parameter: StatusWord_P1
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P2_Size[2];        /* Computed Parameter: StatusWord_P2_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P2;                /* Expression: sig_offset
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P3_Size[2];        /* Computed Parameter: StatusWord_P3_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P3;                /* Expression: sig_type
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P4_Size[2];        /* Computed Parameter: StatusWord_P4_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P4;                /* Expression: type_size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P5_Size[2];        /* Computed Parameter: StatusWord_P5_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P5;                /* Expression: sig_dim
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P6_Size[2];        /* Computed Parameter: StatusWord_P6_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P6;                /* Expression: device_id
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P7_Size[2];        /* Computed Parameter: StatusWord_P7_Size
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T StatusWord_P7;                /* Expression: sample_time
                                        * Referenced by: '<S16>/Status Word'
                                        */
  real_T EtherCATPDOReceive16_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P1_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P1[41];  /* Computed Parameter: EtherCATPDOReceive16_P1
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P2_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P3_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P3;      /* Expression: sig_type
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P4_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P4;      /* Expression: type_size
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P5_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P6_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P6;      /* Expression: device_id
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive16_P7_Size
                                          * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                          */
  real_T EtherCATPDOReceive16_P7;      /* Expression: sample_time
                                        * Referenced by: '<S1>/EtherCAT PDO Receive16'
                                        */
  real_T MotorebracciaA_P1_Size[2];    /* Computed Parameter: MotorebracciaA_P1_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P1[47];        /* Computed Parameter: MotorebracciaA_P1
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P2_Size[2];    /* Computed Parameter: MotorebracciaA_P2_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P2;            /* Expression: sig_offset
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P3_Size[2];    /* Computed Parameter: MotorebracciaA_P3_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P3;            /* Expression: sig_type
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P4_Size[2];    /* Computed Parameter: MotorebracciaA_P4_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P4;            /* Expression: type_size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P5_Size[2];    /* Computed Parameter: MotorebracciaA_P5_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P5;            /* Expression: sig_dim
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P6_Size[2];    /* Computed Parameter: MotorebracciaA_P6_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P6;            /* Expression: device_id
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P7_Size[2];    /* Computed Parameter: MotorebracciaA_P7_Size
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P7;            /* Expression: sample_time
                                        * Referenced by: '<S11>/Motore braccia A'
                                        */
  real_T MotorebracciaB_P1_Size[2];    /* Computed Parameter: MotorebracciaB_P1_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P1[47];        /* Computed Parameter: MotorebracciaB_P1
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P2_Size[2];    /* Computed Parameter: MotorebracciaB_P2_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P2;            /* Expression: sig_offset
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P3_Size[2];    /* Computed Parameter: MotorebracciaB_P3_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P3;            /* Expression: sig_type
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P4_Size[2];    /* Computed Parameter: MotorebracciaB_P4_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P4;            /* Expression: type_size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P5_Size[2];    /* Computed Parameter: MotorebracciaB_P5_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P5;            /* Expression: sig_dim
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P6_Size[2];    /* Computed Parameter: MotorebracciaB_P6_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P6;            /* Expression: device_id
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P7_Size[2];    /* Computed Parameter: MotorebracciaB_P7_Size
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P7;            /* Expression: sample_time
                                        * Referenced by: '<S11>/Motore braccia B'
                                        */
  real_T EtherCATPDOReceive16_P1_Size_g[2];/* Computed Parameter: EtherCATPDOReceive16_P1_Size_g
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P1_l[41];/* Computed Parameter: EtherCATPDOReceive16_P1_l
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P2_Size_j[2];/* Computed Parameter: EtherCATPDOReceive16_P2_Size_j
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P2_n;    /* Expression: sig_offset
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P3_Size_j[2];/* Computed Parameter: EtherCATPDOReceive16_P3_Size_j
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P3_n;    /* Expression: sig_type
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P4_Size_b[2];/* Computed Parameter: EtherCATPDOReceive16_P4_Size_b
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P4_l;    /* Expression: type_size
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P5_Size_c[2];/* Computed Parameter: EtherCATPDOReceive16_P5_Size_c
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P5_i;    /* Expression: sig_dim
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P6_Size_e[2];/* Computed Parameter: EtherCATPDOReceive16_P6_Size_e
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P6_f;    /* Expression: device_id
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive16_P7_Size_c[2];/* Computed Parameter: EtherCATPDOReceive16_P7_Size_c
                                            * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                            */
  real_T EtherCATPDOReceive16_P7_h;    /* Expression: sample_time
                                        * Referenced by: '<S2>/EtherCAT PDO Receive16'
                                        */
  real_T EtherCATPDOReceive14_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P1[47];  /* Computed Parameter: EtherCATPDOReceive14_P1
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P3;      /* Expression: sig_type
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P4;      /* Expression: type_size
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P6;      /* Expression: device_id
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P7;      /* Expression: sample_time
                                        * Referenced by: '<S17>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive15_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P1[47];  /* Computed Parameter: EtherCATPDOReceive15_P1
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P3;      /* Expression: sig_type
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P4;      /* Expression: type_size
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P6;      /* Expression: device_id
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size
                                          * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P7;      /* Expression: sample_time
                                        * Referenced by: '<S17>/EtherCAT PDO Receive15'
                                        */
  real_T Gain_Gain_a;                  /* Expression: (2*pi)/16384/64;
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 180/pi
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: (2*pi)/16384/64;
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Gain_Gain_m0;                 /* Expression: 180/pi
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T LuceBianca_P1_Size[2];        /* Computed Parameter: LuceBianca_P1_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P1[24];            /* Computed Parameter: LuceBianca_P1
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P2_Size[2];        /* Computed Parameter: LuceBianca_P2_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P2;                /* Expression: sig_offset
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P3_Size[2];        /* Computed Parameter: LuceBianca_P3_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P3;                /* Expression: sig_type
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P4_Size[2];        /* Computed Parameter: LuceBianca_P4_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P4;                /* Expression: type_size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P5_Size[2];        /* Computed Parameter: LuceBianca_P5_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P5;                /* Expression: sig_dim
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P6_Size[2];        /* Computed Parameter: LuceBianca_P6_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P6;                /* Expression: device_id
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P7_Size[2];        /* Computed Parameter: LuceBianca_P7_Size
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceBianca_P7;                /* Expression: sample_time
                                        * Referenced by: '<S3>/Luce Bianca'
                                        */
  real_T LuceRossa_P1_Size[2];         /* Computed Parameter: LuceRossa_P1_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P1[24];             /* Computed Parameter: LuceRossa_P1
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P2_Size[2];         /* Computed Parameter: LuceRossa_P2_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P2;                 /* Expression: sig_offset
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P3_Size[2];         /* Computed Parameter: LuceRossa_P3_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P3;                 /* Expression: sig_type
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P4_Size[2];         /* Computed Parameter: LuceRossa_P4_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P4;                 /* Expression: type_size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P5_Size[2];         /* Computed Parameter: LuceRossa_P5_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P5;                 /* Expression: sig_dim
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P6_Size[2];         /* Computed Parameter: LuceRossa_P6_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P6;                 /* Expression: device_id
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P7_Size[2];         /* Computed Parameter: LuceRossa_P7_Size
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceRossa_P7;                 /* Expression: sample_time
                                        * Referenced by: '<S3>/Luce Rossa '
                                        */
  real_T LuceVerde_P1_Size[2];         /* Computed Parameter: LuceVerde_P1_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P1[24];             /* Computed Parameter: LuceVerde_P1
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P2_Size[2];         /* Computed Parameter: LuceVerde_P2_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P2;                 /* Expression: sig_offset
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P3_Size[2];         /* Computed Parameter: LuceVerde_P3_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P3;                 /* Expression: sig_type
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P4_Size[2];         /* Computed Parameter: LuceVerde_P4_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P4;                 /* Expression: type_size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P5_Size[2];         /* Computed Parameter: LuceVerde_P5_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P5;                 /* Expression: sig_dim
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P6_Size[2];         /* Computed Parameter: LuceVerde_P6_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P6;                 /* Expression: device_id
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P7_Size[2];         /* Computed Parameter: LuceVerde_P7_Size
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T LuceVerde_P7;                 /* Expression: sample_time
                                        * Referenced by: '<S3>/Luce Verde'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S40>/Memory'
                                        */
  real_T PeriodoQ_Value;               /* Expression: 6
                                        * Referenced by: '<S4>/Periodo Q'
                                        */
  real_T AlzataQ_Value;                /* Expression: 0.1
                                        * Referenced by: '<S4>/Alzata Q'
                                        */
  real_T PeriodoC_Value;               /* Expression: 4
                                        * Referenced by: '<S4>/Periodo C'
                                        */
  real_T AlzataC_Value;                /* Expression: 0.1
                                        * Referenced by: '<S4>/Alzata C'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T Constant_Value_eg;            /* Expression: deg2rad(120)
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: deg2rad(70)
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S28>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S28>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S28>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S28>/Filter'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_h
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_k[47];/* Computed Parameter: EtherCATPDOReceive14_P1_k
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_m[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_m
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_k;    /* Expression: sig_offset
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_e[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_e
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_m;    /* Expression: sig_type
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_g[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_g
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_p;    /* Expression: type_size
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_h
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_i;    /* Expression: sig_dim
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_g[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_g
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_d;    /* Expression: device_id
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_f[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_f
                                            * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_g;    /* Expression: sample_time
                                        * Referenced by: '<S33>/EtherCAT PDO Receive14'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 4000
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -4000
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T EtherCATPDOTransmit1_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P1_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P1[38];  /* Computed Parameter: EtherCATPDOTransmit1_P1
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P2_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P3_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P3;      /* Expression: sig_type
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P4_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P4;      /* Expression: type_size
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P5_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P6_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P6;      /* Expression: device_id
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P7_Size
                                          * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P7;      /* Expression: sample_time
                                        * Referenced by: '<S5>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOReceive9_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P1[23];   /* Computed Parameter: EtherCATPDOReceive9_P1
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P3;       /* Expression: sig_type
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P4;       /* Expression: type_size
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P6;       /* Expression: device_id
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size
                                         * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P7;       /* Expression: sample_time
                                        * Referenced by: '<S40>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * Referenced by: '<S42>/Memory'
                                        */
  real_T Integrator_gainval_o;         /* Computed Parameter: Integrator_gainval_o
                                        * Referenced by: '<S29>/Integrator'
                                        */
  real_T Integrator_IC_f;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S29>/Integrator'
                                        */
  real_T Filter_gainval_m;             /* Computed Parameter: Filter_gainval_m
                                        * Referenced by: '<S29>/Filter'
                                        */
  real_T Filter_IC_b;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S29>/Filter'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_h[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_h
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_f[47];/* Computed Parameter: EtherCATPDOReceive15_P1_f
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_j
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_c;    /* Expression: sig_offset
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_o[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_o
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_p;    /* Expression: sig_type
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_m[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_m
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_i;    /* Expression: type_size
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_j
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_h;    /* Expression: sig_dim
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_c[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_c
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_h;    /* Expression: device_id
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_n[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_n
                                            * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_l;    /* Expression: sample_time
                                        * Referenced by: '<S33>/EtherCAT PDO Receive15'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 3500
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: -3500
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T EtherCATPDOTransmit7_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P1_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P1[38];  /* Computed Parameter: EtherCATPDOTransmit7_P1
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P2_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P3_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P3;      /* Expression: sig_type
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P4_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P4;      /* Expression: type_size
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P5_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P6_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P6;      /* Expression: device_id
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P7_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P7;      /* Expression: sample_time
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOReceive9_P1_Size_m[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_m
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_g[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_g
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_i
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_p;     /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_g[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_g
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_f;     /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_e
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_a;     /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_n[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_n
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_d;     /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_e
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_c;     /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_a
                                           * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_a;     /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive9'
                                        */
  real_T Memory_X0_o;                  /* Expression: 0
                                        * Referenced by: '<S44>/Memory'
                                        */
  real_T Torquesend_P1_Size[2];        /* Computed Parameter: Torquesend_P1_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P1[38];            /* Computed Parameter: Torquesend_P1
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P2_Size[2];        /* Computed Parameter: Torquesend_P2_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P2;                /* Expression: sig_offset
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P3_Size[2];        /* Computed Parameter: Torquesend_P3_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P3;                /* Expression: sig_type
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P4_Size[2];        /* Computed Parameter: Torquesend_P4_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P4;                /* Expression: type_size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P5_Size[2];        /* Computed Parameter: Torquesend_P5_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P5;                /* Expression: sig_dim
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P6_Size[2];        /* Computed Parameter: Torquesend_P6_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P6;                /* Expression: device_id
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P7_Size[2];        /* Computed Parameter: Torquesend_P7_Size
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T Torquesend_P7;                /* Expression: sample_time
                                        * Referenced by: '<S7>/Torque send'
                                        */
  real_T EtherCATPDOReceive9_P1_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_i
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_i[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_i
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_a
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_m;     /* Expression: sig_offset
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_h
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_m;     /* Expression: sig_type
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_f[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_f
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_l;     /* Expression: type_size
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_a
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_b;     /* Expression: sig_dim
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_i
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_l;     /* Expression: device_id
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_p
                                           * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_b;     /* Expression: sample_time
                                        * Referenced by: '<S44>/EtherCAT PDO Receive9'
                                        */
  real_T AlzataA_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata A'
                                        */
  real_T PeriodoA_Value;               /* Expression: 7
                                        * Referenced by: '<Root>/Periodo A'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_o[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_o
                                            * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_n[47];/* Computed Parameter: EtherCATPDOReceive14_P1_n
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_i[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_i
                                            * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_g;    /* Expression: sig_offset
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_c
                                            * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_n;    /* Expression: sig_type
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_gq[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_gq
                                             * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                             */
  real_T EtherCATPDOReceive14_P4_pd;   /* Expression: type_size
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_d[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_d
                                            * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_k;    /* Expression: sig_dim
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_j[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_j
                                            * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_m;    /* Expression: device_id
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_c
                                            * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_gp;   /* Expression: sample_time
                                        * Referenced by: '<S65>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_k
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_l[47];/* Computed Parameter: EtherCATPDOReceive15_P1_l
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_b
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_n;    /* Expression: sig_offset
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_b
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_i;    /* Expression: sig_type
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_d[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_d
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_j;    /* Expression: type_size
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_l[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_l
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_l;    /* Expression: sig_dim
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_o[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_o
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_f;    /* Expression: device_id
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_g[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_g
                                            * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_l1;   /* Expression: sample_time
                                        * Referenced by: '<S65>/EtherCAT PDO Receive15'
                                        */
  real_T Switch_Threshold;             /* Expression: 6
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Memory_X0_e;                  /* Expression: 0
                                        * Referenced by: '<S46>/Memory'
                                        */
  real_T AlzataB_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata B '
                                        */
  real_T PeriodoB_Value;               /* Expression: 7
                                        * Referenced by: '<Root>/Periodo B'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T EtherCATPDOTransmit2_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P1_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P1[38];  /* Computed Parameter: EtherCATPDOTransmit2_P1
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P2_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P3_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P3;      /* Expression: sig_type
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P4_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P4;      /* Expression: type_size
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P5_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P6_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P6;      /* Expression: device_id
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P7_Size
                                          * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P7;      /* Expression: sample_time
                                        * Referenced by: '<S8>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOReceive9_P1_Size_o[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_o
                                           * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_n[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_n
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_h[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_h
                                           * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_d;     /* Expression: sig_offset
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_i
                                           * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_fe;    /* Expression: sig_type
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_l[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_l
                                           * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_ag;    /* Expression: type_size
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_aa[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_aa
                                            * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P5_h;     /* Expression: sig_dim
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_m[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_m
                                           * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_h;     /* Expression: device_id
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_pq[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_pq
                                            * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P7_l;     /* Expression: sample_time
                                        * Referenced by: '<S46>/EtherCAT PDO Receive9'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 180/pi
                                        * Referenced by: '<S34>/Gain'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 180/pi
                                        * Referenced by: '<S35>/Gain'
                                        */
  real_T Gain_Gain_jq;                 /* Expression: 180/pi
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 180/pi
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S63>/TSamp'
                                        */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S66>/TSamp'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_State_Flow_vel_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[28];
    SimStruct *childSFunctionPtrs[28];
    struct _ssBlkInfo2 blkInfo2[28];
    struct _ssSFcnModelMethods2 methods2[28];
    struct _ssSFcnModelMethods3 methods3[28];
    struct _ssSFcnModelMethods4 methods4[28];
    struct _ssStatesInfo2 statesInfo2[28];
    ssPeriodicStatesInfo periodicStatesInfo[28];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn27;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_State_Flow_vel_T State_Flow_vel_P;

/* Block signals (auto storage) */
extern B_State_Flow_vel_T State_Flow_vel_B;

/* Block states (auto storage) */
extern DW_State_Flow_vel_T State_Flow_vel_DW;

/*====================*
 * External functions *
 *====================*/
extern State_Flow_vel_rtModel *State_Flow_vel(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  State_Flow_vel_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_State_Flow_vel_T *const State_Flow_vel_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'State_Flow_vel'
 * '<S1>'   : 'State_Flow_vel/Finecorsa Vite'
 * '<S2>'   : 'State_Flow_vel/Finecorsa braccia'
 * '<S3>'   : 'State_Flow_vel/LED Status'
 * '<S4>'   : 'State_Flow_vel/Movimento Braccia'
 * '<S5>'   : 'State_Flow_vel/Out Asse A Braccia'
 * '<S6>'   : 'State_Flow_vel/Out Asse B Braccia'
 * '<S7>'   : 'State_Flow_vel/Out asse A Vite'
 * '<S8>'   : 'State_Flow_vel/Out asse B Vite'
 * '<S9>'   : 'State_Flow_vel/PosAtest '
 * '<S10>'  : 'State_Flow_vel/PosBtest '
 * '<S11>'  : 'State_Flow_vel/Posizione Braccia '
 * '<S12>'  : 'State_Flow_vel/Posizione Vite'
 * '<S13>'  : 'State_Flow_vel/Sistema Braccia Linea'
 * '<S14>'  : 'State_Flow_vel/Sistema Vite'
 * '<S15>'  : 'State_Flow_vel/State flow robot'
 * '<S16>'  : 'State_Flow_vel/Status'
 * '<S17>'  : 'State_Flow_vel/Velocita vite '
 * '<S18>'  : 'State_Flow_vel/LED Status/MATLAB Function'
 * '<S19>'  : 'State_Flow_vel/LED Status/MATLAB Function1'
 * '<S20>'  : 'State_Flow_vel/LED Status/MATLAB Function2'
 * '<S21>'  : 'State_Flow_vel/Movimento Braccia/Asse A conv brac'
 * '<S22>'  : 'State_Flow_vel/Movimento Braccia/Asse B conv brac1'
 * '<S23>'  : 'State_Flow_vel/Movimento Braccia/Cerchio'
 * '<S24>'  : 'State_Flow_vel/Movimento Braccia/Cinematica Inversa'
 * '<S25>'  : 'State_Flow_vel/Movimento Braccia/Cinematica Inversa vel'
 * '<S26>'  : 'State_Flow_vel/Movimento Braccia/Cinematica Inversa1'
 * '<S27>'  : 'State_Flow_vel/Movimento Braccia/Clock reale'
 * '<S28>'  : 'State_Flow_vel/Movimento Braccia/PID Controller1'
 * '<S29>'  : 'State_Flow_vel/Movimento Braccia/PID Controller2'
 * '<S30>'  : 'State_Flow_vel/Movimento Braccia/Quadrato'
 * '<S31>'  : 'State_Flow_vel/Movimento Braccia/Quadrato1'
 * '<S32>'  : 'State_Flow_vel/Movimento Braccia/Selettore'
 * '<S33>'  : 'State_Flow_vel/Movimento Braccia/Velocita vite '
 * '<S34>'  : 'State_Flow_vel/Movimento Braccia/theta1deg'
 * '<S35>'  : 'State_Flow_vel/Movimento Braccia/theta1err'
 * '<S36>'  : 'State_Flow_vel/Movimento Braccia/theta2deg'
 * '<S37>'  : 'State_Flow_vel/Movimento Braccia/theta2err'
 * '<S38>'  : 'State_Flow_vel/Movimento Braccia/Velocita vite /Vel Asse A conv'
 * '<S39>'  : 'State_Flow_vel/Movimento Braccia/Velocita vite /Vel Asse B conv'
 * '<S40>'  : 'State_Flow_vel/Out Asse A Braccia/Fungo'
 * '<S41>'  : 'State_Flow_vel/Out Asse A Braccia/Fungo/MATLAB Function'
 * '<S42>'  : 'State_Flow_vel/Out Asse B Braccia/Fungo'
 * '<S43>'  : 'State_Flow_vel/Out Asse B Braccia/Fungo/MATLAB Function'
 * '<S44>'  : 'State_Flow_vel/Out asse A Vite/Fungo'
 * '<S45>'  : 'State_Flow_vel/Out asse A Vite/Fungo/MATLAB Function'
 * '<S46>'  : 'State_Flow_vel/Out asse B Vite/Fungo'
 * '<S47>'  : 'State_Flow_vel/Out asse B Vite/Fungo/MATLAB Function'
 * '<S48>'  : 'State_Flow_vel/Sistema Braccia Linea/Asse A conv bracc2'
 * '<S49>'  : 'State_Flow_vel/Sistema Braccia Linea/Asse B conv brac1'
 * '<S50>'  : 'State_Flow_vel/Sistema Braccia Linea/Cinematica Inversa'
 * '<S51>'  : 'State_Flow_vel/Sistema Braccia Linea/Cinematica Inversa vel'
 * '<S52>'  : 'State_Flow_vel/Sistema Braccia Linea/Cinematica Inversa1'
 * '<S53>'  : 'State_Flow_vel/Sistema Braccia Linea/Velocita vite '
 * '<S54>'  : 'State_Flow_vel/Sistema Braccia Linea/x'
 * '<S55>'  : 'State_Flow_vel/Sistema Braccia Linea/y'
 * '<S56>'  : 'State_Flow_vel/Sistema Braccia Linea/Velocita vite /Vel Asse A conv'
 * '<S57>'  : 'State_Flow_vel/Sistema Braccia Linea/Velocita vite /Vel Asse B conv'
 * '<S58>'  : 'State_Flow_vel/Sistema Vite/Actual A'
 * '<S59>'  : 'State_Flow_vel/Sistema Vite/Asse B'
 * '<S60>'  : 'State_Flow_vel/Sistema Vite/Asse B conv'
 * '<S61>'  : 'State_Flow_vel/Sistema Vite/Clock reale'
 * '<S62>'  : 'State_Flow_vel/Sistema Vite/Coppia VIte A finale'
 * '<S63>'  : 'State_Flow_vel/Sistema Vite/Discrete Derivative B'
 * '<S64>'  : 'State_Flow_vel/Sistema Vite/Rifermento Asse A Vite'
 * '<S65>'  : 'State_Flow_vel/Sistema Vite/Velocita vite '
 * '<S66>'  : 'State_Flow_vel/Sistema Vite/Actual A/Discrete Derivative A'
 * '<S67>'  : 'State_Flow_vel/Sistema Vite/Actual A/Posizione attuale Vite A'
 * '<S68>'  : 'State_Flow_vel/Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv'
 * '<S69>'  : 'State_Flow_vel/Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v'
 * '<S70>'  : 'State_Flow_vel/Sistema Vite/Velocita vite /Vel Asse A conv'
 * '<S71>'  : 'State_Flow_vel/Sistema Vite/Velocita vite /Vel Asse B conv'
 * '<S72>'  : 'State_Flow_vel/State flow robot/Homing'
 * '<S73>'  : 'State_Flow_vel/State flow robot/Mov'
 * '<S74>'  : 'State_Flow_vel/State flow robot/Mov1'
 * '<S75>'  : 'State_Flow_vel/State flow robot/Homing/MATLAB Function'
 * '<S76>'  : 'State_Flow_vel/State flow robot/Mov/Asse A conv bracc2'
 * '<S77>'  : 'State_Flow_vel/State flow robot/Mov/Asse B conv brac'
 * '<S78>'  : 'State_Flow_vel/State flow robot/Mov/Cinematica Inversa'
 * '<S79>'  : 'State_Flow_vel/State flow robot/Mov/Cinematica Inversa vel'
 * '<S80>'  : 'State_Flow_vel/State flow robot/Mov/Cinematica Inversa1'
 * '<S81>'  : 'State_Flow_vel/State flow robot/Mov/x'
 * '<S82>'  : 'State_Flow_vel/State flow robot/Mov/y'
 * '<S83>'  : 'State_Flow_vel/State flow robot/Mov1/Asse A conv bracc'
 * '<S84>'  : 'State_Flow_vel/State flow robot/Mov1/Asse A conv bracc1'
 * '<S85>'  : 'State_Flow_vel/State flow robot/Mov1/Clock reale'
 * '<S86>'  : 'State_Flow_vel/State flow robot/Mov1/Ldm theta1'
 * '<S87>'  : 'State_Flow_vel/State flow robot/Mov1/Ldm theta2'
 * '<S88>'  : 'State_Flow_vel/Velocita vite /Vel Asse A conv'
 * '<S89>'  : 'State_Flow_vel/Velocita vite /Vel Asse B conv'
 */
#endif                                 /* RTW_HEADER_State_Flow_vel_h_ */
