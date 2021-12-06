/*
 * StateflowKalman.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateflowKalman".
 *
 * Model version              : 1.1142
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Dec 06 14:16:06 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateflowKalman_h_
#define RTW_HEADER_StateflowKalman_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef StateflowKalman_COMMON_INCLUDES_
# define StateflowKalman_COMMON_INCLUDES_
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
#endif                                 /* StateflowKalman_COMMON_INCLUDES_ */

#include "StateflowKalman_types.h"

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
#define rtModel_StateflowKalman        RT_MODEL_StateflowKalman_T

/* Definition for use in the target main file */
#define StateflowKalman_rtModel        RT_MODEL_StateflowKalman_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S23>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S23>/MATLAB Function' */
} B_MATLABFunction_StateflowKal_T;

/* Block signals for system '<S94>/MeasurementUpdate' */
typedef struct {
  real_T Ckxhatkk1;                    /* '<S119>/C[k]*xhat[k|k-1]' */
  real_T Dkuk;                         /* '<S119>/D[k]*u[k]' */
  real_T yhatkk1;                      /* '<S119>/Add1' */
  real_T Sum;                          /* '<S119>/Sum' */
  real_T Product3[2];                  /* '<S119>/Product3' */
} B_MeasurementUpdate_Stateflow_T;

/* Block states (auto storage) for system '<S94>/MeasurementUpdate' */
typedef struct {
  int8_T MeasurementUpdate_SubsysRanBC;/* '<S94>/MeasurementUpdate' */
  boolean_T MeasurementUpdate_MODE;    /* '<S94>/MeasurementUpdate' */
} DW_MeasurementUpdate_Stateflo_T;

/* Block signals for system '<S56>/UseCurrentEstimator' */
typedef struct {
  real_T Add[2];                       /* '<S99>/Add' */
  real_T Product;                      /* '<S120>/Product' */
  real_T Product1;                     /* '<S120>/Product1' */
  real_T Add1;                         /* '<S120>/Add1' */
  real_T Product2[2];                  /* '<S120>/Product2' */
} B_UseCurrentEstimator_Statefl_T;

/* Block states (auto storage) for system '<S56>/UseCurrentEstimator' */
typedef struct {
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S99>/Enabled Subsystem' */
  boolean_T EnabledSubsystem_MODE;     /* '<S99>/Enabled Subsystem' */
} DW_UseCurrentEstimator_Statef_T;

/* Block signals (auto storage) */
typedef struct {
  real_T convert;                      /* '<S9>/convert' */
  real_T convert10;                    /* '<S9>/convert 10 ' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T convert_k;                    /* '<S10>/convert' */
  real_T convert10_p;                  /* '<S10>/convert 10 ' */
  real_T DataTypeConversion6;          /* '<S14>/Data Type Conversion6' */
  real_T DataTypeConversion8;          /* '<S1>/Data Type Conversion8' */
  real_T IntegertoBitConverter[16];    /* '<S1>/Integer to Bit Converter' */
  real_T DataTypeConversion8_f;        /* '<S2>/Data Type Conversion8' */
  real_T IntegertoBitConverter_d[16];  /* '<S2>/Integer to Bit Converter' */
  real_T StartHome;                    /* '<Root>/StartHome' */
  real_T StartRobot;                   /* '<Root>/StartRobot' */
  real_T StartWork;                    /* '<Root>/StartWork' */
  real_T Reset;                        /* '<Root>/Reset' */
  real_T Stop;                         /* '<Root>/Stop' */
  real_T StartZero;                    /* '<Root>/StartZero' */
  real_T Discesa;                      /* '<Root>/Discesa' */
  real_T Abbassa;                      /* '<Root>/Abbassa' */
  real_T Memory;                       /* '<S23>/Memory' */
  real_T Sum12;                        /* '<S68>/Sum12' */
  real_T Sum4;                         /* '<S68>/Sum4' */
  real_T Sum9;                         /* '<S68>/Sum9' */
  real_T Sum7;                         /* '<S68>/Sum7' */
  real_T VelocityB;                    /* '<S72>/Velocity B' */
  real_T VelocityA;                    /* '<S72>/Velocity A' */
  real_T Sum2;                         /* '<S53>/Sum2' */
  real_T MultiportSwitch[6];           /* '<S58>/Multiport Switch' */
  real_T Xmov;                         /* '<S12>/Sum' */
  real_T Ymov;                         /* '<S12>/Sum1' */
  real_T VelocityB_f;                  /* '<S71>/Velocity B' */
  real_T VelocityA_o;                  /* '<S71>/Velocity A' */
  real_T qdot[2];                      /* '<S12>/Sum7' */
  real_T Kd[2];                        /* '<S12>/Kd' */
  real_T q[2];                         /* '<S12>/Sum4' */
  real_T ProportionalGain[2];          /* '<S66>/Proportional Gain' */
  real_T Integrator[2];                /* '<S66>/Integrator' */
  real_T Sum[2];                       /* '<S66>/Sum' */
  real_T Y[2];                         /* '<S12>/Sum9' */
  real_T Gain1;                        /* '<S12>/Gain1' */
  real_T Switch1;                      /* '<S23>/Switch1' */
  real_T CoppiaAbracciasaturata;       /* '<S5>/Coppia A braccia saturata' */
  real_T DataTypeConversion14;         /* '<S23>/Data Type Conversion14' */
  real_T Memory_g;                     /* '<S26>/Memory' */
  real_T Gain;                         /* '<S12>/Gain' */
  real_T Switch1_l;                    /* '<S26>/Switch1' */
  real_T CoppiaBbracciasaturata;       /* '<S6>/Coppia B braccia saturata' */
  real_T DataTypeConversion14_g;       /* '<S26>/Data Type Conversion14' */
  real_T Memory_n;                     /* '<S30>/Memory' */
  real_T Sum_p;                        /* '<S34>/Sum' */
  real_T Sum3;                         /* '<S11>/Sum3' */
  real_T Sum5;                         /* '<S43>/Sum5' */
  real_T Sum2_m;                       /* '<S37>/Sum2' */
  real_T Sum1;                         /* '<S11>/Sum1' */
  real_T Gain_a;                       /* '<S38>/Gain' */
  real_T VelocityA_b;                  /* '<S41>/Velocity A' */
  real_T VelocityB_d;                  /* '<S41>/Velocity B' */
  real_T Sum8;                         /* '<S11>/Sum8' */
  real_T Gain6;                        /* '<S38>/Gain6' */
  real_T Sum9_p;                       /* '<S38>/Sum9' */
  real_T Switch1_f;                    /* '<S30>/Switch1' */
  real_T DataTypeConversion14_k;       /* '<S30>/Data Type Conversion14' */
  real_T Memory_d;                     /* '<S32>/Memory' */
  real_T Sum4_l;                       /* '<S11>/Sum4' */
  real_T Gain2;                        /* '<S11>/Gain2' */
  real_T Sum6;                         /* '<S11>/Sum6' */
  real_T Gain4;                        /* '<S11>/Gain4' */
  real_T Sum7_n;                       /* '<S11>/Sum7' */
  real_T Switch1_h;                    /* '<S32>/Switch1' */
  real_T CoppiaAvitesaturata;          /* '<S8>/Coppia A vite saturata' */
  real_T DataTypeConversion14_h;       /* '<S32>/Data Type Conversion14' */
  real_T TSamp;                        /* '<S39>/TSamp' */
  real_T Uk1;                          /* '<S39>/UD' */
  real_T Diff;                         /* '<S39>/Diff' */
  real_T TSamp_i;                      /* '<S42>/TSamp' */
  real_T Uk1_p;                        /* '<S42>/UD' */
  real_T Diff_l;                       /* '<S42>/Diff' */
  real_T Conversion[2];                /* '<S161>/Conversion' */
  real_T Reshapeu;                     /* '<S57>/Reshapeu' */
  real_T RateTransition;               /* '<S12>/Rate Transition' */
  real_T Reshapey;                     /* '<S57>/Reshapey' */
  real_T Conversion_f[2];              /* '<S125>/Conversion' */
  real_T Conversion_a;                 /* '<S126>/Conversion' */
  real_T Conversion_p[2];              /* '<S136>/Conversion' */
  real_T ReshapeX0[2];                 /* '<S57>/ReshapeX0' */
  real_T MemoryX[2];                   /* '<S57>/MemoryX' */
  real_T Reshapexhat[2];               /* '<S57>/Reshapexhat' */
  real_T Memory2[4];                   /* '<S12>/Memory2' */
  real_T Memory_dw[16];                /* '<S12>/Memory' */
  real_T Memory1[4];                   /* '<S12>/Memory1' */
  real_T Sum2_d;                       /* '<S12>/Sum2' */
  real_T Sum3_b;                       /* '<S12>/Sum3' */
  real_T Conversion_c[2];              /* '<S115>/Conversion' */
  real_T Conversion_j[2];              /* '<S116>/Conversion' */
  real_T Conversion_j0;                /* '<S117>/Conversion' */
  real_T Conversion_k[4];              /* '<S118>/Conversion' */
  real_T Conversion_g[2];              /* '<S80>/Conversion' */
  real_T Reshapeu_m;                   /* '<S56>/Reshapeu' */
  real_T RateTransition1;              /* '<S12>/Rate Transition1' */
  real_T Reshapey_e;                   /* '<S56>/Reshapey' */
  real_T Conversion_n;                 /* '<S81>/Conversion' */
  real_T Conversion_m[2];              /* '<S91>/Conversion' */
  real_T ReshapeX0_i[2];               /* '<S56>/ReshapeX0' */
  real_T MemoryX_m[2];                 /* '<S56>/MemoryX' */
  real_T Product;                      /* '<S77>/Product' */
  real_T Product1;                     /* '<S77>/Product1' */
  real_T Add1;                         /* '<S77>/Add1' */
  real_T Conversion_d[4];              /* '<S78>/Conversion' */
  real_T Conversion_me[2];             /* '<S79>/Conversion' */
  real_T Conversion_l[4];              /* '<S82>/Conversion' */
  real_T Conversion_pk[2];             /* '<S83>/Conversion' */
  real_T Conversion_cs[2];             /* '<S84>/Conversion' */
  real_T Conversion_kg[4];             /* '<S86>/Conversion' */
  real_T Conversion_px[4];             /* '<S87>/Conversion' */
  real_T Conversion_h;                 /* '<S88>/Conversion' */
  real_T Conversion_n2;                /* '<S89>/Conversion' */
  real_T Conversion_i[2];              /* '<S90>/Conversion' */
  real_T ManualSwitchPZ[4];            /* '<S56>/ManualSwitchPZ' */
  real_T Akxhatkk1[2];                 /* '<S94>/A[k]*xhat[k|k-1]' */
  real_T Bkuk[2];                      /* '<S94>/B[k]*u[k]' */
  real_T Add[2];                       /* '<S94>/Add' */
  real_T Reshape[2];                   /* '<S94>/Reshape' */
  real_T Reshapexhat_m[2];             /* '<S56>/Reshapexhat' */
  real_T Reshapeyhat;                  /* '<S56>/Reshapeyhat' */
  real_T Conversion_ky[2];             /* '<S160>/Conversion' */
  real_T Conversion_pq;                /* '<S162>/Conversion' */
  real_T Conversion_f1[4];             /* '<S163>/Conversion' */
  real_T Product_m;                    /* '<S122>/Product' */
  real_T Product1_l;                   /* '<S122>/Product1' */
  real_T Add1_a;                       /* '<S122>/Add1' */
  real_T Conversion_b[4];              /* '<S123>/Conversion' */
  real_T Conversion_pt[2];             /* '<S124>/Conversion' */
  real_T Conversion_i1[4];             /* '<S127>/Conversion' */
  real_T Conversion_g3[2];             /* '<S128>/Conversion' */
  real_T Conversion_jd[2];             /* '<S129>/Conversion' */
  real_T Conversion_pv[4];             /* '<S131>/Conversion' */
  real_T Conversion_d0[4];             /* '<S132>/Conversion' */
  real_T Conversion_o;                 /* '<S133>/Conversion' */
  real_T Conversion_dw;                /* '<S134>/Conversion' */
  real_T Conversion_pc[2];             /* '<S135>/Conversion' */
  real_T ManualSwitchPZ_l[4];          /* '<S57>/ManualSwitchPZ' */
  real_T Akxhatkk1_b[2];               /* '<S139>/A[k]*xhat[k|k-1]' */
  real_T Bkuk_b[2];                    /* '<S139>/B[k]*u[k]' */
  real_T Add_f[2];                     /* '<S139>/Add' */
  real_T Reshape_c[2];                 /* '<S139>/Reshape' */
  real_T Reshapeyhat_f;                /* '<S57>/Reshapeyhat' */
  real_T IntegralGain[2];              /* '<S66>/Integral Gain' */
  real_T TSamp_e;                      /* '<S176>/TSamp' */
  real_T Uk1_l;                        /* '<S176>/UD' */
  real_T Diff_f;                       /* '<S176>/Diff' */
  real_T Duk;                          /* '<S187>/D*u(k)' */
  real_T x1k;                          /* '<S187>/Delay_x1' */
  real_T C11;                          /* '<S190>/C11' */
  real_T x2k;                          /* '<S187>/Delay_x2' */
  real_T C12;                          /* '<S190>/C12' */
  real_T sum2;                         /* '<S190>/sum2' */
  real_T yk;                           /* '<S187>/C*X(k)+D*u(k)' */
  real_T TSamp_n;                      /* '<S174>/TSamp' */
  real_T Uk1_d;                        /* '<S174>/UD' */
  real_T Diff_i;                       /* '<S174>/Diff' */
  real_T A11;                          /* '<S188>/A11' */
  real_T A12;                          /* '<S188>/A12' */
  real_T A21;                          /* '<S188>/A21' */
  real_T A22;                          /* '<S188>/A22' */
  real_T sum2_n;                       /* '<S188>/sum2' */
  real_T sum3;                         /* '<S188>/sum3' */
  real_T B11;                          /* '<S189>/B11' */
  real_T x1k1;                         /* '<S187>/A*x1(k) + B*u1(k) ' */
  real_T B21;                          /* '<S189>/B21' */
  real_T x2k1;                         /* '<S187>/A*x2(k) + B*u2(k)' */
  real_T Duk_h;                        /* '<S183>/D*u(k)' */
  real_T x1k_a;                        /* '<S183>/Delay_x1' */
  real_T C11_h;                        /* '<S186>/C11' */
  real_T x2k_g;                        /* '<S183>/Delay_x2' */
  real_T C12_e;                        /* '<S186>/C12' */
  real_T sum2_k;                       /* '<S186>/sum2' */
  real_T yk_i;                         /* '<S183>/C*X(k)+D*u(k)' */
  real_T TSamp_h;                      /* '<S175>/TSamp' */
  real_T Uk1_b;                        /* '<S175>/UD' */
  real_T Diff_d;                       /* '<S175>/Diff' */
  real_T TSamp_nd;                     /* '<S177>/TSamp' */
  real_T Uk1_ll;                       /* '<S177>/UD' */
  real_T Diff_n;                       /* '<S177>/Diff' */
  real_T A11_p;                        /* '<S184>/A11' */
  real_T A12_c;                        /* '<S184>/A12' */
  real_T A21_h;                        /* '<S184>/A21' */
  real_T A22_d;                        /* '<S184>/A22' */
  real_T sum2_nk;                      /* '<S184>/sum2' */
  real_T sum3_e;                       /* '<S184>/sum3' */
  real_T B11_k;                        /* '<S185>/B11' */
  real_T x1k1_g;                       /* '<S183>/A*x1(k) + B*u1(k) ' */
  real_T B21_l;                        /* '<S185>/B21' */
  real_T x2k1_n;                       /* '<S183>/A*x2(k) + B*u2(k)' */
  real_T DigitalClock;                 /* '<S68>/Digital Clock' */
  real_T Duk_n;                        /* '<S191>/D*u(k)' */
  real_T x1k_i;                        /* '<S191>/Delay_x1' */
  real_T C11_e;                        /* '<S194>/C11' */
  real_T x2k_d;                        /* '<S191>/Delay_x2' */
  real_T C12_m;                        /* '<S194>/C12' */
  real_T sum2_ka;                      /* '<S194>/sum2' */
  real_T yk_m;                         /* '<S191>/C*X(k)+D*u(k)' */
  real_T TSamp_f;                      /* '<S178>/TSamp' */
  real_T Uk1_j;                        /* '<S178>/UD' */
  real_T Diff_b;                       /* '<S178>/Diff' */
  real_T TSamp_iq;                     /* '<S179>/TSamp' */
  real_T Uk1_bl;                       /* '<S179>/UD' */
  real_T Diff_bt;                      /* '<S179>/Diff' */
  real_T A11_h;                        /* '<S192>/A11' */
  real_T A12_g;                        /* '<S192>/A12' */
  real_T A21_p;                        /* '<S192>/A21' */
  real_T A22_j;                        /* '<S192>/A22' */
  real_T sum2_e;                       /* '<S192>/sum2' */
  real_T sum3_b;                       /* '<S192>/sum3' */
  real_T B11_d;                        /* '<S193>/B11' */
  real_T x1k1_h;                       /* '<S191>/A*x1(k) + B*u1(k) ' */
  real_T B21_h;                        /* '<S193>/B21' */
  real_T x2k1_h;                       /* '<S191>/A*x2(k) + B*u2(k)' */
  real_T Gain_p;                       /* '<S69>/Gain' */
  real_T Gain_n;                       /* '<S70>/Gain' */
  real_T Sum5_d[4];                    /* '<S12>/Sum5' */
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
  real_T Hv;                           /* '<Root>/State flow robot' */
  real_T Hb;                           /* '<Root>/State flow robot' */
  real_T Enable;                       /* '<Root>/State flow robot' */
  real_T FineLavorazione;              /* '<Root>/State flow robot' */
  real_T PosRifA;                      /* '<Root>/State flow robot' */
  real_T PosRifB;                      /* '<Root>/State flow robot' */
  real_T Stato;                        /* '<Root>/State flow robot' */
  real_T posA;                         /* '<Root>/State flow robot' */
  real_T posB;                         /* '<Root>/State flow robot' */
  real_T OffA_0;                       /* '<Root>/State flow robot' */
  real_T OffB_0;                       /* '<Root>/State flow robot' */
  real_T Clock_a;                      /* '<Root>/State flow robot' */
  real_T OffT_a;                       /* '<Root>/State flow robot' */
  real_T Fc;                           /* '<Root>/State flow robot' */
  real_T Fca;                          /* '<Root>/State flow robot' */
  real_T Fcb;                          /* '<Root>/State flow robot' */
  real_T posrifA;                      /* '<Root>/State flow robot' */
  real_T posrifB;                      /* '<Root>/State flow robot' */
  real_T posA_k;                       /* '<Root>/State flow robot' */
  real_T posB_c;                       /* '<Root>/State flow robot' */
  real_T DiscreteTimeIntegrator1;      /* '<S200>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator;       /* '<S200>/Discrete-Time Integrator' */
  real_T Gain_i;                       /* '<S200>/Gain' */
  real_T Gain1_f;                      /* '<S200>/Gain1' */
  real_T Sum1_i;                       /* '<S200>/Sum1' */
  real_T Sum2_b;                       /* '<S200>/Sum2' */
  real_T CA;                           /* '<S200>/MATLAB Function' */
  real_T CB;                           /* '<S200>/MATLAB Function' */
  real_T CH;                           /* '<S200>/MATLAB Function' */
  real_T Sum1_e;                       /* '<S199>/Sum1' */
  real_T Conversioneingradi;           /* '<S199>/Conversione in gradi ' */
  real_T DiscreteTimeIntegrator_i;     /* '<S199>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_b;    /* '<S199>/Discrete-Time Integrator1' */
  real_T Sum2_g;                       /* '<S199>/Sum2' */
  real_T Gain1_e;                      /* '<S199>/Gain1' */
  real_T Ki1;                          /* '<S199>/Ki1' */
  real_T Ki2;                          /* '<S199>/Ki2' */
  real_T Sum_h;                        /* '<S199>/Sum' */
  real_T Sum3_a;                       /* '<S199>/Sum3' */
  real_T Kp1;                          /* '<S199>/Kp1' */
  real_T Sum4_f;                       /* '<S199>/Sum4' */
  real_T Kp2;                          /* '<S199>/Kp2' */
  real_T Sum5_p;                       /* '<S199>/Sum5' */
  real_T Sum6_n;                       /* '<S199>/Sum6' */
  real_T CA_o;                         /* '<S199>/MATLAB Function1' */
  real_T CB_b;                         /* '<S199>/MATLAB Function1' */
  real_T theta1;                       /* '<S199>/MATLAB Function' */
  real_T theta2;                       /* '<S199>/MATLAB Function' */
  real_T DataTypeConversion;           /* '<S74>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<S74>/Data Type Conversion1' */
  real_T TmpSignalConversionAtsfunxyInpo[2];
  real_T vel_B_conv;                   /* '<S72>/Vel Asse B conv' */
  real_T vel_A_conv;                   /* '<S72>/Vel Asse A conv' */
  real_T vel_B_conv_b;                 /* '<S71>/Vel Asse B conv' */
  real_T vel_A_conv_b;                 /* '<S71>/Vel Asse A conv' */
  real_T pos_B_conv;                   /* '<S68>/Asse B conv brac1' */
  real_T pos_A_conv;                   /* '<S68>/Asse A conv bracc' */
  real_T x0;                           /* '<S67>/Cinematica Inversa2' */
  real_T y0;                           /* '<S67>/Cinematica Inversa2' */
  real_T x_p;                          /* '<S12>/MATLAB Jin' */
  real_T y_p;                          /* '<S12>/MATLAB Jin' */
  real_T xhatt1[4];                    /* '<S12>/MATLAB Function5' */
  real_T yhatt1[4];                    /* '<S12>/MATLAB Function5' */
  real_T K[16];                        /* '<S12>/MATLAB Function4' */
  real_T H[16];                        /* '<S12>/MATLAB Function4' */
  real_T Pt1[16];                      /* '<S12>/MATLAB Function4' */
  real_T F[16];                        /* '<S12>/MATLAB Function3' */
  real_T xp;                           /* '<S12>/MATLAB Function2' */
  real_T yp;                           /* '<S12>/MATLAB Function2' */
  real_T xs;                           /* '<S58>/spirale' */
  real_T ys;                           /* '<S58>/spirale' */
  real_T xs_p;                         /* '<S58>/spirale' */
  real_T ys_p;                         /* '<S58>/spirale' */
  real_T xs_pp;                        /* '<S58>/spirale' */
  real_T ys_pp;                        /* '<S58>/spirale' */
  real_T x;                            /* '<S58>/g' */
  real_T y;                            /* '<S58>/g' */
  real_T x_p_l;                        /* '<S58>/g' */
  real_T y_p_o;                        /* '<S58>/g' */
  real_T x_pp;                         /* '<S58>/g' */
  real_T y_pp;                         /* '<S58>/g' */
  real_T xq;                           /* '<S58>/Quadrato' */
  real_T yq;                           /* '<S58>/Quadrato' */
  real_T xq_p;                         /* '<S58>/Quadrato' */
  real_T yq_p;                         /* '<S58>/Quadrato' */
  real_T xq_pp;                        /* '<S58>/Quadrato' */
  real_T yq_pp;                        /* '<S58>/Quadrato' */
  real_T xc;                           /* '<S58>/Cerchio' */
  real_T yc;                           /* '<S58>/Cerchio' */
  real_T xc_p;                         /* '<S58>/Cerchio' */
  real_T yc_p;                         /* '<S58>/Cerchio' */
  real_T xc_pp;                        /* '<S58>/Cerchio' */
  real_T yc_pp;                        /* '<S58>/Cerchio' */
  real_T xct;                          /* '<S58>/Cerchi Tangenti' */
  real_T yct;                          /* '<S58>/Cerchi Tangenti' */
  real_T xct_p;                        /* '<S58>/Cerchi Tangenti' */
  real_T yct_p;                        /* '<S58>/Cerchi Tangenti' */
  real_T xct_pp;                       /* '<S58>/Cerchi Tangenti' */
  real_T yct_pp;                       /* '<S58>/Cerchi Tangenti' */
  real_T C1;                           /* '<S12>/Dinamica Inversa1' */
  real_T C2;                           /* '<S12>/Dinamica Inversa1' */
  real_T M[4];                         /* '<S12>/Dinamica Inversa1' */
  real_T K_f[4];                       /* '<S12>/Dinamica Inversa1' */
  real_T Cm1;                          /* '<S12>/Coppia motrice' */
  real_T Cm2;                          /* '<S12>/Coppia motrice' */
  real_T x_pp_f;                       /* '<S12>/Cinematica diretta Acc' */
  real_T y_pp_l;                       /* '<S12>/Cinematica diretta Acc' */
  real_T x_n;                          /* '<S12>/Cinematica diretta' */
  real_T y_k;                          /* '<S12>/Cinematica diretta' */
  real_T theta1_p;                     /* '<S12>/Cinematica Inversa vel' */
  real_T theta2_p;                     /* '<S12>/Cinematica Inversa vel' */
  real_T theta1_pp;                    /* '<S12>/Cinematica Inversa Acc' */
  real_T theta2_pp;                    /* '<S12>/Cinematica Inversa Acc' */
  real_T theta1_l;                     /* '<S12>/Cinematica Inversa' */
  real_T theta2_j;                     /* '<S12>/Cinematica Inversa' */
  real_T vel_B_conv_d;                 /* '<S41>/Vel Asse B conv' */
  real_T vel_A_conv_d;                 /* '<S41>/Vel Asse A conv' */
  real_T ldm_pos;                      /* '<S11>/Rifermento Asse A Vite' */
  real_T ldm_vel;                      /* '<S11>/Rifermento Asse A Vite' */
  real_T pos_B_conv_p;                 /* '<S11>/Asse B conv' */
  real_T ldm_pos_n;                    /* '<S11>/Asse B' */
  real_T ldm_vel_c;                    /* '<S11>/Asse B' */
  real_T pos_B_conv_v;                 /* '<S43>/Asse B conv v' */
  real_T pos_A_conv_c;                 /* '<S43>/Asse A conv' */
  real_T Switch2;                      /* '<S8>/Switch2' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T Gain_m;                       /* '<S7>/Gain' */
  real_T Switch1_i;                    /* '<S6>/Switch1' */
  real_T Switch1_c;                    /* '<S5>/Switch1' */
  real_T y_f;                          /* '<S3>/MATLAB Function2' */
  real_T y_b;                          /* '<S3>/MATLAB Function1' */
  real_T y_i;                          /* '<S3>/MATLAB Function' */
  real32_T Conversion_ks[4];           /* '<S85>/Conversion' */
  real32_T Conversion_gp[4];           /* '<S130>/Conversion' */
  int32_T EtherCATInit[6];             /* '<Root>/EtherCAT Init ' */
  int32_T MotorebracciaA;              /* '<S9>/Motore braccia A' */
  int32_T MotorebracciaB;              /* '<S9>/Motore braccia B' */
  int32_T MotoreviteA;                 /* '<S10>/Motore vite A' */
  int32_T MotoreviteB;                 /* '<S10>/Motore vite B' */
  int32_T EtherCATPDOReceive15;        /* '<S72>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14;        /* '<S72>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_d;      /* '<S71>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14_b;      /* '<S71>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive14_j;      /* '<S41>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_k;      /* '<S41>/EtherCAT PDO Receive15' */
  int16_T DataTypeConversion3;         /* '<S5>/Data Type Conversion3' */
  int16_T DataTypeConversion4;         /* '<S6>/Data Type Conversion4' */
  int16_T ConvertA;                    /* '<S7>/Convert A' */
  int16_T ConvertB;                    /* '<S8>/Convert B' */
  uint16_T StatusWord;                 /* '<S14>/Status Word' */
  uint16_T EtherCATPDOReceive16;       /* '<S1>/EtherCAT PDO Receive16' */
  uint16_T EtherCATPDOReceive16_d;     /* '<S2>/EtherCAT PDO Receive16' */
  int8_T DataTypeConversion7;          /* '<Root>/Data Type Conversion7' */
  int8_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  int8_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  int8_T DataTypeConversion1_p;        /* '<Root>/Data Type Conversion1' */
  boolean_T DataTypeConversion25;      /* '<S3>/Data Type Conversion25' */
  boolean_T DataTypeConversion24;      /* '<S3>/Data Type Conversion24' */
  boolean_T DataTypeConversion26;      /* '<S3>/Data Type Conversion26' */
  boolean_T EtherCATPDOReceive9;       /* '<S23>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_h;     /* '<S26>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_hd;    /* '<S30>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_m;     /* '<S32>/EtherCAT PDO Receive9' */
  boolean_T DataTypeConversionEnable;  /* '<S57>/DataTypeConversionEnable' */
  boolean_T DataTypeConversionEnable_i;/* '<S56>/DataTypeConversionEnable' */
  B_UseCurrentEstimator_Statefl_T UseCurrentEstimator;/* '<S57>/UseCurrentEstimator' */
  B_MeasurementUpdate_Stateflow_T MeasurementUpdate_a;/* '<S139>/MeasurementUpdate' */
  B_UseCurrentEstimator_Statefl_T UseCurrentEstimator_e;/* '<S56>/UseCurrentEstimator' */
  B_MeasurementUpdate_Stateflow_T MeasurementUpdate;/* '<S94>/MeasurementUpdate' */
  B_MATLABFunction_StateflowKal_T sf_MATLABFunction_fb;/* '<S32>/MATLAB Function' */
  B_MATLABFunction_StateflowKal_T sf_MATLABFunction_f;/* '<S30>/MATLAB Function' */
  B_MATLABFunction_StateflowKal_T sf_MATLABFunction_a;/* '<S26>/MATLAB Function' */
  B_MATLABFunction_StateflowKal_T sf_MATLABFunction_e;/* '<S23>/MATLAB Function' */
} B_StateflowKalman_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE[2];         /* '<S66>/Integrator' */
  real_T UD_DSTATE;                    /* '<S39>/UD' */
  real_T UD_DSTATE_a;                  /* '<S42>/UD' */
  real_T MemoryX_DSTATE[2];            /* '<S57>/MemoryX' */
  real_T MemoryX_DSTATE_h[2];          /* '<S56>/MemoryX' */
  real_T UD_DSTATE_g;                  /* '<S176>/UD' */
  real_T Delay_x1_DSTATE;              /* '<S187>/Delay_x1' */
  real_T Delay_x2_DSTATE;              /* '<S187>/Delay_x2' */
  real_T UD_DSTATE_a3;                 /* '<S174>/UD' */
  real_T Delay_x1_DSTATE_g;            /* '<S183>/Delay_x1' */
  real_T Delay_x2_DSTATE_m;            /* '<S183>/Delay_x2' */
  real_T UD_DSTATE_j;                  /* '<S175>/UD' */
  real_T UD_DSTATE_f;                  /* '<S177>/UD' */
  real_T Delay_x1_DSTATE_k;            /* '<S191>/Delay_x1' */
  real_T Delay_x2_DSTATE_k;            /* '<S191>/Delay_x2' */
  real_T UD_DSTATE_g0;                 /* '<S178>/UD' */
  real_T UD_DSTATE_k;                  /* '<S179>/UD' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S200>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S200>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S199>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTAT_j;/* '<S199>/Discrete-Time Integrator1' */
  real_T Memory_PreviousInput;         /* '<S23>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S26>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S30>/Memory' */
  real_T Memory_PreviousInput_a;       /* '<S32>/Memory' */
  real_T Memory2_PreviousInput[4];     /* '<S12>/Memory2' */
  real_T Memory_PreviousInput_j[16];   /* '<S12>/Memory' */
  real_T Memory1_PreviousInput[4];     /* '<S12>/Memory1' */
  real_T conv;                         /* '<Root>/State flow robot' */
  real_T OffA_0;                       /* '<Root>/State flow robot' */
  real_T OffB_0;                       /* '<Root>/State flow robot' */
  real_T conv_vite;                    /* '<Root>/State flow robot' */
  real_T dv;                           /* '<Root>/State flow robot' */
  real_T DiscreteTimeIntegrator1_PREV_U;/* '<S200>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_PREV_U;/* '<S200>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_PREV_U_j;/* '<S199>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_PREV__o;/* '<S199>/Discrete-Time Integrator1' */
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
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l1;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pe;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_i;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dn;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pt;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ex;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_in;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cl;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ae;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_nk;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_j;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_m4;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_eg;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gm;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_l32;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ej;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mr;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ok;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ou;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ck;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ij;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_dp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cb;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_oc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_h;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_bz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_oub;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_g3;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_fz;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mf;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_bcw;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_Inserted_l3u;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_cv;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_er;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_k;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_fj;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/State flow robot' */
  uint32_T Posizionamento_ELAPS_T[2];  /* '<S13>/Posizionamento' */
  uint32_T Posizionamento_PREV_T[2];   /* '<S13>/Posizionamento' */
  uint32_T Setting_ELAPS_T[2];         /* '<S13>/Setting' */
  uint32_T Setting_PREV_T[2];          /* '<S13>/Setting' */
  int_T EtherCATPDOTransmit5_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 5' */
  int_T EtherCATPDOTransmit6_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 6' */
  int_T EtherCATPDOTransmit3_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 3' */
  int_T EtherCATPDOTransmit4_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 4' */
  int_T MotorebracciaA_IWORK[7];       /* '<S9>/Motore braccia A' */
  int_T MotorebracciaB_IWORK[7];       /* '<S9>/Motore braccia B' */
  int_T MotoreviteA_IWORK[7];          /* '<S10>/Motore vite A' */
  int_T MotoreviteB_IWORK[7];          /* '<S10>/Motore vite B' */
  int_T StatusWord_IWORK[7];           /* '<S14>/Status Word' */
  int_T EtherCATPDOReceive16_IWORK[7]; /* '<S1>/EtherCAT PDO Receive16' */
  int_T EtherCATPDOReceive16_IWORK_l[7];/* '<S2>/EtherCAT PDO Receive16' */
  int_T LuceBianca_IWORK[7];           /* '<S3>/Luce Bianca' */
  int_T LuceRossa_IWORK[7];            /* '<S3>/Luce Rossa ' */
  int_T LuceVerde_IWORK[7];            /* '<S3>/Luce Verde' */
  int_T EtherCATPDOReceive15_IWORK[7]; /* '<S72>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK[7]; /* '<S72>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_o[7];/* '<S71>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK_p[7];/* '<S71>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOTransmit1_IWORK[7]; /* '<S5>/EtherCAT PDO Transmit 1' */
  int_T EtherCATPDOReceive9_IWORK[7];  /* '<S23>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOTransmit7_IWORK[7]; /* '<S6>/EtherCAT PDO Transmit 7' */
  int_T EtherCATPDOReceive9_IWORK_n[7];/* '<S26>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive14_IWORK_f[7];/* '<S41>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_n[7];/* '<S41>/EtherCAT PDO Receive15' */
  int_T Torquesend_IWORK[7];           /* '<S7>/Torque send' */
  int_T EtherCATPDOReceive9_IWORK_g[7];/* '<S30>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOTransmit2_IWORK[7]; /* '<S8>/EtherCAT PDO Transmit 2' */
  int_T EtherCATPDOReceive9_IWORK_gl[7];/* '<S32>/EtherCAT PDO Receive9' */
  uint16_T temporalCounter_i1;         /* '<Root>/State flow robot' */
  int8_T Integrator_PrevResetState;    /* '<S66>/Integrator' */
  int8_T Posizionamento_SubsysRanBC;   /* '<S13>/Posizionamento' */
  int8_T Setting_SubsysRanBC;          /* '<S13>/Setting' */
  uint8_T icLoad;                      /* '<S57>/MemoryX' */
  uint8_T icLoad_d;                    /* '<S56>/MemoryX' */
  uint8_T is_active_c15_StateflowKalman;/* '<Root>/State flow robot' */
  uint8_T is_c15_StateflowKalman;      /* '<Root>/State flow robot' */
  uint8_T DiscreteTimeIntegrator1_SYSTEM_;/* '<S200>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;/* '<S200>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_j;/* '<S199>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator1_SYSTE_c;/* '<S199>/Discrete-Time Integrator1' */
  boolean_T Posizionamento_RESET_ELAPS_T;/* '<S13>/Posizionamento' */
  boolean_T Setting_RESET_ELAPS_T;     /* '<S13>/Setting' */
  DW_UseCurrentEstimator_Statef_T UseCurrentEstimator;/* '<S57>/UseCurrentEstimator' */
  DW_MeasurementUpdate_Stateflo_T MeasurementUpdate_a;/* '<S139>/MeasurementUpdate' */
  DW_UseCurrentEstimator_Statef_T UseCurrentEstimator_e;/* '<S56>/UseCurrentEstimator' */
  DW_MeasurementUpdate_Stateflo_T MeasurementUpdate;/* '<S94>/MeasurementUpdate' */
} DW_StateflowKalman_T;

/* Backward compatible GRT Identifiers */
#define rtB                            StateflowKalman_B
#define BlockIO                        B_StateflowKalman_T
#define rtP                            StateflowKalman_P
#define Parameters                     P_StateflowKalman_T
#define rtDWork                        StateflowKalman_DW
#define D_Work                         DW_StateflowKalman_T

/* Parameters for system: '<S94>/MeasurementUpdate' */
struct P_MeasurementUpdate_Stateflow_T_ {
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S119>/L*(y[k]-yhat[k|k-1])'
                                        */
};

/* Parameters for system: '<S56>/UseCurrentEstimator' */
struct P_UseCurrentEstimator_Statefl_T_ {
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S120>/deltax'
                                        */
};

/* Parameters (auto storage) */
struct P_StateflowKalman_T_ {
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S66>/Integral Gain'
                                        */
  real_T DiscreteDerivativeB_ICPrevScale;/* Mask Parameter: DiscreteDerivativeB_ICPrevScale
                                          * Referenced by: '<S39>/UD'
                                          */
  real_T DiscreteDerivativeA_ICPrevScale;/* Mask Parameter: DiscreteDerivativeA_ICPrevScale
                                          * Referenced by: '<S42>/UD'
                                          */
  real_T DiscreteDerivativeB2_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB2_ICPrevScal
                                          * Referenced by: '<S176>/UD'
                                          */
  real_T DiscreteDerivativeB_ICPrevSca_m;/* Mask Parameter: DiscreteDerivativeB_ICPrevSca_m
                                          * Referenced by: '<S174>/UD'
                                          */
  real_T DiscreteDerivativeB1_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB1_ICPrevScal
                                          * Referenced by: '<S175>/UD'
                                          */
  real_T DiscreteDerivativeB3_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB3_ICPrevScal
                                          * Referenced by: '<S177>/UD'
                                          */
  real_T DiscreteDerivativeB4_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB4_ICPrevScal
                                          * Referenced by: '<S178>/UD'
                                          */
  real_T DiscreteDerivativeB5_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB5_ICPrevScal
                                          * Referenced by: '<S179>/UD'
                                          */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S66>/Proportional Gain'
                                        */
  real_T Switch1_Threshold;            /* Expression: 3
                                        * Referenced by: '<S5>/Switch1'
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 3
                                        * Referenced by: '<S6>/Switch1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Switch_Threshold;             /* Expression: 3
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T Switch2_Threshold;            /* Expression: 3
                                        * Referenced by: '<S8>/Switch2'
                                        */
  real_T CoppiaA_Y0;                   /* Computed Parameter: CoppiaA_Y0
                                        * Referenced by: '<S199>/CoppiaA'
                                        */
  real_T CoppiaB_Y0;                   /* Computed Parameter: CoppiaB_Y0
                                        * Referenced by: '<S199>/CoppiaB'
                                        */
  real_T Conversioneingradi_Gain;      /* Expression: ( (2*pi)/16384/64*180/pi)
                                        * Referenced by: '<S199>/Conversione in gradi '
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S199>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S199>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S199>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S199>/Discrete-Time Integrator1'
                                        */
  real_T Gain1_Gain;                   /* Expression: ( (2*pi)/16384/64*180/pi)
                                        * Referenced by: '<S199>/Gain1'
                                        */
  real_T Ki1_Gain;                     /* Expression: 200
                                        * Referenced by: '<S199>/Ki1'
                                        */
  real_T Ki2_Gain;                     /* Expression: 200
                                        * Referenced by: '<S199>/Ki2'
                                        */
  real_T Kp1_Gain;                     /* Expression: 400
                                        * Referenced by: '<S199>/Kp1'
                                        */
  real_T Kp2_Gain;                     /* Expression: 400
                                        * Referenced by: '<S199>/Kp2'
                                        */
  real_T CA_Y0;                        /* Computed Parameter: CA_Y0
                                        * Referenced by: '<S200>/CA'
                                        */
  real_T CB_Y0;                        /* Computed Parameter: CB_Y0
                                        * Referenced by: '<S200>/CB'
                                        */
  real_T CH_Y0;                        /* Computed Parameter: CH_Y0
                                        * Referenced by: '<S200>/CH'
                                        */
  real_T DiscreteTimeIntegrator1_gainv_o;/* Computed Parameter: DiscreteTimeIntegrator1_gainv_o
                                          * Referenced by: '<S200>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC_j; /* Expression: 0
                                        * Referenced by: '<S200>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_l;/* Computed Parameter: DiscreteTimeIntegrator_gainva_l
                                          * Referenced by: '<S200>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_e;  /* Expression: 0
                                        * Referenced by: '<S200>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_d;                  /* Expression: ( (2*pi)/16384/64*180/pi)
                                        * Referenced by: '<S200>/Gain'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: ( (2*pi)/16384/64*180/pi)
                                        * Referenced by: '<S200>/Gain1'
                                        */
  real_T Ki_Value;                     /* Expression: 500
                                        * Referenced by: '<S200>/Ki'
                                        */
  real_T Kp_Value;                     /* Expression: 600
                                        * Referenced by: '<S200>/Kp'
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
  real_T MotorebracciaA_P1_Size[2];    /* Computed Parameter: MotorebracciaA_P1_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P1[47];        /* Computed Parameter: MotorebracciaA_P1
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P2_Size[2];    /* Computed Parameter: MotorebracciaA_P2_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P2;            /* Expression: sig_offset
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P3_Size[2];    /* Computed Parameter: MotorebracciaA_P3_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P3;            /* Expression: sig_type
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P4_Size[2];    /* Computed Parameter: MotorebracciaA_P4_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P4;            /* Expression: type_size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P5_Size[2];    /* Computed Parameter: MotorebracciaA_P5_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P5;            /* Expression: sig_dim
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P6_Size[2];    /* Computed Parameter: MotorebracciaA_P6_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P6;            /* Expression: device_id
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P7_Size[2];    /* Computed Parameter: MotorebracciaA_P7_Size
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P7;            /* Expression: sample_time
                                        * Referenced by: '<S9>/Motore braccia A'
                                        */
  real_T MotorebracciaB_P1_Size[2];    /* Computed Parameter: MotorebracciaB_P1_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P1[47];        /* Computed Parameter: MotorebracciaB_P1
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P2_Size[2];    /* Computed Parameter: MotorebracciaB_P2_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P2;            /* Expression: sig_offset
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P3_Size[2];    /* Computed Parameter: MotorebracciaB_P3_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P3;            /* Expression: sig_type
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P4_Size[2];    /* Computed Parameter: MotorebracciaB_P4_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P4;            /* Expression: type_size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P5_Size[2];    /* Computed Parameter: MotorebracciaB_P5_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P5;            /* Expression: sig_dim
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P6_Size[2];    /* Computed Parameter: MotorebracciaB_P6_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P6;            /* Expression: device_id
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P7_Size[2];    /* Computed Parameter: MotorebracciaB_P7_Size
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P7;            /* Expression: sample_time
                                        * Referenced by: '<S9>/Motore braccia B'
                                        */
  real_T MotoreviteA_P1_Size[2];       /* Computed Parameter: MotoreviteA_P1_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P1[47];           /* Computed Parameter: MotoreviteA_P1
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P2_Size[2];       /* Computed Parameter: MotoreviteA_P2_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P2;               /* Expression: sig_offset
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P3_Size[2];       /* Computed Parameter: MotoreviteA_P3_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P3;               /* Expression: sig_type
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P4_Size[2];       /* Computed Parameter: MotoreviteA_P4_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P4;               /* Expression: type_size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P5_Size[2];       /* Computed Parameter: MotoreviteA_P5_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P5;               /* Expression: sig_dim
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P6_Size[2];       /* Computed Parameter: MotoreviteA_P6_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P6;               /* Expression: device_id
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P7_Size[2];       /* Computed Parameter: MotoreviteA_P7_Size
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteA_P7;               /* Expression: sample_time
                                        * Referenced by: '<S10>/Motore vite A'
                                        */
  real_T MotoreviteB_P1_Size[2];       /* Computed Parameter: MotoreviteB_P1_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P1[47];           /* Computed Parameter: MotoreviteB_P1
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P2_Size[2];       /* Computed Parameter: MotoreviteB_P2_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P2;               /* Expression: sig_offset
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P3_Size[2];       /* Computed Parameter: MotoreviteB_P3_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P3;               /* Expression: sig_type
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P4_Size[2];       /* Computed Parameter: MotoreviteB_P4_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P4;               /* Expression: type_size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P5_Size[2];       /* Computed Parameter: MotoreviteB_P5_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P5;               /* Expression: sig_dim
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P6_Size[2];       /* Computed Parameter: MotoreviteB_P6_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P6;               /* Expression: device_id
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P7_Size[2];       /* Computed Parameter: MotoreviteB_P7_Size
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T MotoreviteB_P7;               /* Expression: sample_time
                                        * Referenced by: '<S10>/Motore vite B'
                                        */
  real_T StatusWord_P1_Size[2];        /* Computed Parameter: StatusWord_P1_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P1[37];            /* Computed Parameter: StatusWord_P1
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P2_Size[2];        /* Computed Parameter: StatusWord_P2_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P2;                /* Expression: sig_offset
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P3_Size[2];        /* Computed Parameter: StatusWord_P3_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P3;                /* Expression: sig_type
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P4_Size[2];        /* Computed Parameter: StatusWord_P4_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P4;                /* Expression: type_size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P5_Size[2];        /* Computed Parameter: StatusWord_P5_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P5;                /* Expression: sig_dim
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P6_Size[2];        /* Computed Parameter: StatusWord_P6_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P6;                /* Expression: device_id
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P7_Size[2];        /* Computed Parameter: StatusWord_P7_Size
                                        * Referenced by: '<S14>/Status Word'
                                        */
  real_T StatusWord_P7;                /* Expression: sample_time
                                        * Referenced by: '<S14>/Status Word'
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
  real_T StartHome_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/StartHome'
                                        */
  real_T StartRobot_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/StartRobot'
                                        */
  real_T StartWork_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/StartWork'
                                        */
  real_T Reset_Value;                  /* Expression: 0
                                        * Referenced by: '<Root>/Reset'
                                        */
  real_T Stop_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/Stop'
                                        */
  real_T StartZero_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/StartZero'
                                        */
  real_T Discesa_Value;                /* Expression: 3.8
                                        * Referenced by: '<Root>/Discesa'
                                        */
  real_T Abbassa_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Abbassa'
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
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S23>/Memory'
                                        */
  real_T Constant4_Value;              /* Expression: deg2rad(100)
                                        * Referenced by: '<S68>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: deg2rad(80)
                                        * Referenced by: '<S68>/Constant5'
                                        */
  real_T EtherCATPDOReceive15_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P1[47];  /* Computed Parameter: EtherCATPDOReceive15_P1
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P3;      /* Expression: sig_type
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P4;      /* Expression: type_size
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P6;      /* Expression: device_id
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P7;      /* Expression: sample_time
                                        * Referenced by: '<S72>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive14_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P1[47];  /* Computed Parameter: EtherCATPDOReceive14_P1
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P3;      /* Expression: sig_type
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P4;      /* Expression: type_size
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P6;      /* Expression: device_id
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size
                                          * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P7;      /* Expression: sample_time
                                        * Referenced by: '<S72>/EtherCAT PDO Receive14'
                                        */
  real_T Constant_Value_b;             /* Expression: deg2rad(100)
                                        * Referenced by: '<S67>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: deg2rad(80)
                                        * Referenced by: '<S67>/Constant1'
                                        */
  real_T selettore_Value;              /* Expression: 2
                                        * Referenced by: '<S12>/selettore'
                                        */
  real_T PeriodoQ_Value;               /* Expression: 10
                                        * Referenced by: '<S58>/Periodo Q'
                                        */
  real_T AlzataQ_Value;                /* Expression: 0.10
                                        * Referenced by: '<S58>/Alzata Q'
                                        */
  real_T PeriodoC_Value;               /* Expression: 3
                                        * Referenced by: '<S58>/Periodo C'
                                        */
  real_T AlzataC_Value;                /* Expression: 0.05
                                        * Referenced by: '<S58>/Alzata C'
                                        */
  real_T AlzataC1_Value;               /* Expression: 0.015
                                        * Referenced by: '<S58>/Alzata C1'
                                        */
  real_T PeriodoC1_Value;              /* Expression: 32
                                        * Referenced by: '<S58>/Periodo C1'
                                        */
  real_T Constant3_Value;              /* Expression: 0.125
                                        * Referenced by: '<S58>/Constant3'
                                        */
  real_T Periodo_Value;                /* Expression: 10
                                        * Referenced by: '<S58>/Periodo'
                                        */
  real_T Rmax_Value;                   /* Expression: 0.04
                                        * Referenced by: '<S58>/Rmax'
                                        */
  real_T Ngiri_Value;                  /* Expression: 3
                                        * Referenced by: '<S58>/N giri'
                                        */
  real_T Rmin_Value;                   /* Expression: 0.02
                                        * Referenced by: '<S58>/Rmin'
                                        */
  real_T Tempospostiniziale_Value;     /* Expression: 0.5
                                        * Referenced by: '<S58>/Tempo spost. iniziale'
                                        */
  real_T Rmax1_Value;                  /* Expression: 0
                                        * Referenced by: '<S58>/Rmax1'
                                        */
  real_T Ngiri1_Value;                 /* Expression: 0
                                        * Referenced by: '<S58>/N giri1'
                                        */
  real_T Rmin1_Value;                  /* Expression: 0
                                        * Referenced by: '<S58>/Rmin1'
                                        */
  real_T Ngiri2_Value;                 /* Expression: 0
                                        * Referenced by: '<S58>/N giri2'
                                        */
  real_T Rmin2_Value;                  /* Expression: 0
                                        * Referenced by: '<S58>/Rmin2'
                                        */
  real_T Rmin3_Value;                  /* Expression: 0
                                        * Referenced by: '<S58>/Rmin3'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_j
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_a[47];/* Computed Parameter: EtherCATPDOReceive15_P1_a
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_n[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_n
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_l;    /* Expression: sig_offset
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_j
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_a;    /* Expression: sig_type
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_c[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_c
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_f;    /* Expression: type_size
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_k
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_c;    /* Expression: sig_dim
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_j
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_g;    /* Expression: device_id
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_f[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_f
                                            * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_m;    /* Expression: sample_time
                                        * Referenced by: '<S71>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_c
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_k[47];/* Computed Parameter: EtherCATPDOReceive14_P1_k
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_m[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_m
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_i;    /* Expression: sig_offset
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_h
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_a;    /* Expression: sig_type
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_c
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_e;    /* Expression: type_size
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_c
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_j;    /* Expression: sig_dim
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_h
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_m;    /* Expression: device_id
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_p
                                            * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_m;    /* Expression: sample_time
                                        * Referenced by: '<S71>/EtherCAT PDO Receive14'
                                        */
  real_T Kd_Gain;                      /* Expression: 0
                                        * Referenced by: '<S12>/Kd'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S66>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S66>/Integrator'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1000/0.3
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T CoppiaAbracciasaturata_UpperSat;/* Expression: 500
                                          * Referenced by: '<S5>/Coppia A braccia saturata'
                                          */
  real_T CoppiaAbracciasaturata_LowerSat;/* Expression: -500
                                          * Referenced by: '<S5>/Coppia A braccia saturata'
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
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P1[23];   /* Computed Parameter: EtherCATPDOReceive9_P1
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P3;       /* Expression: sig_type
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P4;       /* Expression: type_size
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P6;       /* Expression: device_id
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size
                                         * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P7;       /* Expression: sample_time
                                        * Referenced by: '<S23>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * Referenced by: '<S26>/Memory'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1000/0.3
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T CoppiaBbracciasaturata_UpperSat;/* Expression: 500
                                          * Referenced by: '<S6>/Coppia B braccia saturata'
                                          */
  real_T CoppiaBbracciasaturata_LowerSat;/* Expression: -500
                                          * Referenced by: '<S6>/Coppia B braccia saturata'
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
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_g[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_g
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_i
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_p;     /* Expression: sig_offset
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_g[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_g
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_f;     /* Expression: sig_type
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_e
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_a;     /* Expression: type_size
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_n[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_n
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_d;     /* Expression: sig_dim
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_e
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_c;     /* Expression: device_id
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_a
                                           * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_a;     /* Expression: sample_time
                                        * Referenced by: '<S26>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Memory_X0_o;                  /* Expression: 0
                                        * Referenced by: '<S30>/Memory'
                                        */
  real_T AlzataA_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata A'
                                        */
  real_T PeriodoA_Value;               /* Expression: 2
                                        * Referenced by: '<Root>/Periodo A'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 300*1000/0.36
                                        * Referenced by: '<S38>/Gain'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_g[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_g
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_m[47];/* Computed Parameter: EtherCATPDOReceive14_P1_m
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_d[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_d
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_d;    /* Expression: sig_offset
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_k[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_k
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_d;    /* Expression: sig_type
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_o[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_o
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_g;    /* Expression: type_size
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_a[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_a
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_h;    /* Expression: sig_dim
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_k[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_k
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_o;    /* Expression: device_id
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_k[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_k
                                            * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_g;    /* Expression: sample_time
                                        * Referenced by: '<S41>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_b
                                            * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_m[47];/* Computed Parameter: EtherCATPDOReceive15_P1_m
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_b
                                            * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_d;    /* Expression: sig_offset
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_a[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_a
                                            * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_b;    /* Expression: sig_type
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_f[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_f
                                            * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_i;    /* Expression: type_size
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_e[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_e
                                            * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_cp;   /* Expression: sig_dim
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_k
                                            * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_f;    /* Expression: device_id
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_fm[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_fm
                                             * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                             */
  real_T EtherCATPDOReceive15_P7_o;    /* Expression: sample_time
                                        * Referenced by: '<S41>/EtherCAT PDO Receive15'
                                        */
  real_T Gain6_Gain;                   /* Expression: 5*1000/0.36
                                        * Referenced by: '<S38>/Gain6'
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
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_i[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_i
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_a
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_m;     /* Expression: sig_offset
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_h
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_m;     /* Expression: sig_type
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_f[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_f
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_l;     /* Expression: type_size
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_a
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_b;     /* Expression: sig_dim
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_i
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_l;     /* Expression: device_id
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_p
                                           * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_b;     /* Expression: sample_time
                                        * Referenced by: '<S30>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T Memory_X0_a;                  /* Expression: 0
                                        * Referenced by: '<S32>/Memory'
                                        */
  real_T AlzataB_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata B '
                                        */
  real_T PeriodoB_Value;               /* Expression: 6
                                        * Referenced by: '<Root>/Periodo B'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2*1000/0.36
                                        * Referenced by: '<S11>/Gain2'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.001*1000/0.36
                                        * Referenced by: '<S11>/Gain4'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T CoppiaAvitesaturata_UpperSat; /* Expression: 600
                                        * Referenced by: '<S8>/Coppia A vite saturata'
                                        */
  real_T CoppiaAvitesaturata_LowerSat; /* Expression: -600
                                        * Referenced by: '<S8>/Coppia A vite saturata'
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
  real_T EtherCATPDOReceive9_P1_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_p
                                           * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_a[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_a
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_c[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_c
                                           * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_d;     /* Expression: sig_offset
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_i
                                           * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_k;     /* Expression: sig_type
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_en[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_en
                                            * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P4_f;     /* Expression: type_size
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_nv[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_nv
                                            * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P5_k;     /* Expression: sig_dim
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_p
                                           * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_l4;    /* Expression: device_id
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_ai[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_ai
                                            * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P7_j;     /* Expression: sample_time
                                        * Referenced by: '<S32>/EtherCAT PDO Receive9'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S39>/TSamp'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S42>/TSamp'
                                        */
  real_T KalmanGainM_Value[2];         /* Expression: pInitialization.M
                                        * Referenced by: '<S121>/KalmanGainM'
                                        */
  real_T C_Value[2];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S57>/C'
                                        */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S57>/D'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S57>/X0'
                                        */
  real_T Memory2_X0[4];                /* Expression: [deg2rad(100); deg2rad(80); 0;0]
                                        * Referenced by: '<S12>/Memory2'
                                        */
  real_T Memory_X0_ap[16];             /* Expression: eye(4)
                                        * Referenced by: '<S12>/Memory'
                                        */
  real_T Memory1_X0[4];                /* Expression: zeros(4,1)
                                        * Referenced by: '<S12>/Memory1'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S56>/A'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S56>/B'
                                        */
  real_T C_Value_j[2];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S56>/C'
                                        */
  real_T ConstantP_Value;              /* Expression: 0
                                        * Referenced by: '<S76>/ConstantP'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S76>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value[2];         /* Expression: pInitialization.L
                                        * Referenced by: '<S76>/KalmanGainL'
                                        */
  real_T KalmanGainM_Value_n[2];       /* Expression: pInitialization.M
                                        * Referenced by: '<S76>/KalmanGainM'
                                        */
  real_T D_Value_e;                    /* Expression: pInitialization.D
                                        * Referenced by: '<S56>/D'
                                        */
  real_T X0_Value_o[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S56>/X0'
                                        */
  real_T G_Value[4];                   /* Expression: pInitialization.G
                                        * Referenced by: '<S56>/G'
                                        */
  real_T H_Value[2];                   /* Expression: pInitialization.H
                                        * Referenced by: '<S56>/H'
                                        */
  real_T N_Value[2];                   /* Expression: pInitialization.N
                                        * Referenced by: '<S56>/N'
                                        */
  real_T P0_Value[4];                  /* Expression: pInitialization.P0
                                        * Referenced by: '<S56>/P0'
                                        */
  real_T Q_Value[4];                   /* Expression: pInitialization.Q
                                        * Referenced by: '<S56>/Q'
                                        */
  real_T R_Value;                      /* Expression: pInitialization.R
                                        * Referenced by: '<S56>/R'
                                        */
  real_T CheckSignalProperties_P4;     /* Expression: pInitialization.Ts
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  real_T CheckSignalProperties_P4_n;   /* Expression: pInitialization.Ts
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  real_T A_Value_j[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S57>/A'
                                        */
  real_T B_Value_i[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S57>/B'
                                        */
  real_T ConstantP_Value_c;            /* Expression: 0
                                        * Referenced by: '<S121>/ConstantP'
                                        */
  real_T CovarianceZ_Value_m[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S121>/CovarianceZ'
                                        */
  real_T KalmanGainL_Value_m[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S121>/KalmanGainL'
                                        */
  real_T G_Value_m[4];                 /* Expression: pInitialization.G
                                        * Referenced by: '<S57>/G'
                                        */
  real_T H_Value_h[2];                 /* Expression: pInitialization.H
                                        * Referenced by: '<S57>/H'
                                        */
  real_T N_Value_m[2];                 /* Expression: pInitialization.N
                                        * Referenced by: '<S57>/N'
                                        */
  real_T P0_Value_m[4];                /* Expression: pInitialization.P0
                                        * Referenced by: '<S57>/P0'
                                        */
  real_T Q_Value_n[4];                 /* Expression: pInitialization.Q
                                        * Referenced by: '<S57>/Q'
                                        */
  real_T R_Value_o;                    /* Expression: pInitialization.R
                                        * Referenced by: '<S57>/R'
                                        */
  real_T CheckSignalProperties_P4_l;   /* Expression: pInitialization.Ts
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  real_T CheckSignalProperties_P4_b;   /* Expression: pInitialization.Ts
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  real_T TSamp_WtEt_m;                 /* Computed Parameter: TSamp_WtEt_m
                                        * Referenced by: '<S176>/TSamp'
                                        */
  real_T Duk_Gain;                     /* Expression: sps.D
                                        * Referenced by: '<S187>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition;    /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S187>/Delay_x1'
                                        */
  real_T C11_Gain;                     /* Expression: sps.C11
                                        * Referenced by: '<S190>/C11'
                                        */
  real_T Delay_x2_InitialCondition;    /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S187>/Delay_x2'
                                        */
  real_T C12_Gain;                     /* Expression: sps.C12
                                        * Referenced by: '<S190>/C12'
                                        */
  real_T TSamp_WtEt_e;                 /* Computed Parameter: TSamp_WtEt_e
                                        * Referenced by: '<S174>/TSamp'
                                        */
  real_T A11_Gain;                     /* Expression: sps.A11
                                        * Referenced by: '<S188>/A11'
                                        */
  real_T A12_Gain;                     /* Expression: sps.A12
                                        * Referenced by: '<S188>/A12'
                                        */
  real_T A21_Gain;                     /* Expression: sps.A21
                                        * Referenced by: '<S188>/A21'
                                        */
  real_T A22_Gain;                     /* Expression: sps.A22
                                        * Referenced by: '<S188>/A22'
                                        */
  real_T B11_Gain;                     /* Expression: sps.B11
                                        * Referenced by: '<S189>/B11'
                                        */
  real_T B21_Gain;                     /* Expression: sps.B21
                                        * Referenced by: '<S189>/B21'
                                        */
  real_T Duk_Gain_h;                   /* Expression: sps.D
                                        * Referenced by: '<S183>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition_l;  /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S183>/Delay_x1'
                                        */
  real_T C11_Gain_n;                   /* Expression: sps.C11
                                        * Referenced by: '<S186>/C11'
                                        */
  real_T Delay_x2_InitialCondition_l;  /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S183>/Delay_x2'
                                        */
  real_T C12_Gain_d;                   /* Expression: sps.C12
                                        * Referenced by: '<S186>/C12'
                                        */
  real_T TSamp_WtEt_gz;                /* Computed Parameter: TSamp_WtEt_gz
                                        * Referenced by: '<S175>/TSamp'
                                        */
  real_T TSamp_WtEt_gh;                /* Computed Parameter: TSamp_WtEt_gh
                                        * Referenced by: '<S177>/TSamp'
                                        */
  real_T A11_Gain_e;                   /* Expression: sps.A11
                                        * Referenced by: '<S184>/A11'
                                        */
  real_T A12_Gain_a;                   /* Expression: sps.A12
                                        * Referenced by: '<S184>/A12'
                                        */
  real_T A21_Gain_m;                   /* Expression: sps.A21
                                        * Referenced by: '<S184>/A21'
                                        */
  real_T A22_Gain_g;                   /* Expression: sps.A22
                                        * Referenced by: '<S184>/A22'
                                        */
  real_T B11_Gain_f;                   /* Expression: sps.B11
                                        * Referenced by: '<S185>/B11'
                                        */
  real_T B21_Gain_p;                   /* Expression: sps.B21
                                        * Referenced by: '<S185>/B21'
                                        */
  real_T Duk_Gain_g;                   /* Expression: sps.D
                                        * Referenced by: '<S191>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition_n;  /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S191>/Delay_x1'
                                        */
  real_T C11_Gain_g;                   /* Expression: sps.C11
                                        * Referenced by: '<S194>/C11'
                                        */
  real_T Delay_x2_InitialCondition_e;  /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S191>/Delay_x2'
                                        */
  real_T C12_Gain_d1;                  /* Expression: sps.C12
                                        * Referenced by: '<S194>/C12'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S178>/TSamp'
                                        */
  real_T TSamp_WtEt_p;                 /* Computed Parameter: TSamp_WtEt_p
                                        * Referenced by: '<S179>/TSamp'
                                        */
  real_T A11_Gain_h;                   /* Expression: sps.A11
                                        * Referenced by: '<S192>/A11'
                                        */
  real_T A12_Gain_a3;                  /* Expression: sps.A12
                                        * Referenced by: '<S192>/A12'
                                        */
  real_T A21_Gain_f;                   /* Expression: sps.A21
                                        * Referenced by: '<S192>/A21'
                                        */
  real_T A22_Gain_d;                   /* Expression: sps.A22
                                        * Referenced by: '<S192>/A22'
                                        */
  real_T B11_Gain_n;                   /* Expression: sps.B11
                                        * Referenced by: '<S193>/B11'
                                        */
  real_T B21_Gain_l;                   /* Expression: sps.B21
                                        * Referenced by: '<S193>/B21'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 180/pi
                                        * Referenced by: '<S69>/Gain'
                                        */
  real_T Gain_Gain_d4;                 /* Expression: 180/pi
                                        * Referenced by: '<S70>/Gain'
                                        */
  real32_T Constant_Value_bx;          /* Computed Parameter: Constant_Value_bx
                                        * Referenced by: '<S95>/Constant'
                                        */
  real32_T Constant_Value_l1;          /* Computed Parameter: Constant_Value_l1
                                        * Referenced by: '<S140>/Constant'
                                        */
  int32_T CheckSignalProperties_P5;    /* Expression: Ns
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P6;    /* Expression: Nu
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P7;    /* Expression: Nw
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P8;    /* Expression: Ny
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P5_p;  /* Expression: Ns
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P6_g;  /* Expression: Nu
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P7_a;  /* Expression: Nw
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P8_j;  /* Expression: Ny
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P5_h;  /* Expression: Ns
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P6_l;  /* Expression: Nu
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P7_d;  /* Expression: Nw
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P8_o;  /* Expression: Ny
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P5_i;  /* Expression: Ns
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P6_e;  /* Expression: Nu
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P7_p;  /* Expression: Nw
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  int32_T CheckSignalProperties_P8_od; /* Expression: Ny
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  uint32_T MemoryX_DelayLength;        /* Computed Parameter: MemoryX_DelayLength
                                        * Referenced by: '<S57>/MemoryX'
                                        */
  uint32_T MemoryX_DelayLength_a;      /* Computed Parameter: MemoryX_DelayLength_a
                                        * Referenced by: '<S56>/MemoryX'
                                        */
  uint16_T CheckSignalProperties_P1[46];/* Computed Parameter: CheckSignalProperties_P1
                                         * Referenced by: '<S113>/CheckSignalProperties'
                                         */
  uint16_T CheckSignalProperties_P2;   /* Computed Parameter: CheckSignalProperties_P2
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  uint16_T CheckSignalProperties_P1_d[46];/* Computed Parameter: CheckSignalProperties_P1_d
                                           * Referenced by: '<S114>/CheckSignalProperties'
                                           */
  uint16_T CheckSignalProperties_P2_l; /* Computed Parameter: CheckSignalProperties_P2_l
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  uint16_T CheckSignalProperties_P1_i[46];/* Computed Parameter: CheckSignalProperties_P1_i
                                           * Referenced by: '<S158>/CheckSignalProperties'
                                           */
  uint16_T CheckSignalProperties_P2_e; /* Computed Parameter: CheckSignalProperties_P2_e
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  uint16_T CheckSignalProperties_P1_m[46];/* Computed Parameter: CheckSignalProperties_P1_m
                                           * Referenced by: '<S159>/CheckSignalProperties'
                                           */
  uint16_T CheckSignalProperties_P2_lv;/* Computed Parameter: CheckSignalProperties_P2_lv
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  uint8_T ManualSwitchPZ_CurrentSetting;/* Computed Parameter: ManualSwitchPZ_CurrentSetting
                                         * Referenced by: '<S56>/ManualSwitchPZ'
                                         */
  uint8_T ManualSwitchPZ_CurrentSetting_p;/* Computed Parameter: ManualSwitchPZ_CurrentSetting_p
                                           * Referenced by: '<S57>/ManualSwitchPZ'
                                           */
  boolean_T Enable_Value;              /* Computed Parameter: Enable_Value
                                        * Referenced by: '<S57>/Enable'
                                        */
  boolean_T Enable_Value_d;            /* Computed Parameter: Enable_Value_d
                                        * Referenced by: '<S56>/Enable'
                                        */
  boolean_T Reset_Value_f;             /* Computed Parameter: Reset_Value_f
                                        * Referenced by: '<S56>/Reset'
                                        */
  boolean_T CheckSignalProperties_P3;  /* Expression: isContinuousTime
                                        * Referenced by: '<S113>/CheckSignalProperties'
                                        */
  boolean_T CheckSignalProperties_P3_n;/* Expression: isContinuousTime
                                        * Referenced by: '<S114>/CheckSignalProperties'
                                        */
  boolean_T Reset_Value_o;             /* Computed Parameter: Reset_Value_o
                                        * Referenced by: '<S57>/Reset'
                                        */
  boolean_T CheckSignalProperties_P3_b;/* Expression: isContinuousTime
                                        * Referenced by: '<S158>/CheckSignalProperties'
                                        */
  boolean_T CheckSignalProperties_P3_k;/* Expression: isContinuousTime
                                        * Referenced by: '<S159>/CheckSignalProperties'
                                        */
  P_UseCurrentEstimator_Statefl_T UseCurrentEstimator;/* '<S57>/UseCurrentEstimator' */
  P_MeasurementUpdate_Stateflow_T MeasurementUpdate_a;/* '<S139>/MeasurementUpdate' */
  P_UseCurrentEstimator_Statefl_T UseCurrentEstimator_e;/* '<S56>/UseCurrentEstimator' */
  P_MeasurementUpdate_Stateflow_T MeasurementUpdate;/* '<S94>/MeasurementUpdate' */
};

/* Real-time Model Data Structure */
struct tag_RTM_StateflowKalman_T {
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
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
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
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
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
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
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
      struct _ssPortOutputs outputPortInfo[1];
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
      struct _ssPortInputs inputPortInfo[1];
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
extern P_StateflowKalman_T StateflowKalman_P;

/* Block signals (auto storage) */
extern B_StateflowKalman_T StateflowKalman_B;

/* Block states (auto storage) */
extern DW_StateflowKalman_T StateflowKalman_DW;

/*====================*
 * External functions *
 *====================*/
extern StateflowKalman_rtModel *StateflowKalman(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  StateflowKalman_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_StateflowKalman_T *const StateflowKalman_M;

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
 * '<Root>' : 'StateflowKalman'
 * '<S1>'   : 'StateflowKalman/Finecorsa Vite'
 * '<S2>'   : 'StateflowKalman/Finecorsa braccia'
 * '<S3>'   : 'StateflowKalman/LED Status'
 * '<S4>'   : 'StateflowKalman/Movimento Braccia'
 * '<S5>'   : 'StateflowKalman/Out Asse A Braccia'
 * '<S6>'   : 'StateflowKalman/Out Asse B Braccia'
 * '<S7>'   : 'StateflowKalman/Out asse A Vite'
 * '<S8>'   : 'StateflowKalman/Out asse B Vite'
 * '<S9>'   : 'StateflowKalman/Posizione Braccia '
 * '<S10>'  : 'StateflowKalman/Posizione Vite'
 * '<S11>'  : 'StateflowKalman/Sistema Vite'
 * '<S12>'  : 'StateflowKalman/Sistema_braccia'
 * '<S13>'  : 'StateflowKalman/State flow robot'
 * '<S14>'  : 'StateflowKalman/Status'
 * '<S15>'  : 'StateflowKalman/LED Status/MATLAB Function'
 * '<S16>'  : 'StateflowKalman/LED Status/MATLAB Function1'
 * '<S17>'  : 'StateflowKalman/LED Status/MATLAB Function2'
 * '<S18>'  : 'StateflowKalman/Movimento Braccia/Cinematica D'
 * '<S19>'  : 'StateflowKalman/Movimento Braccia/Cinematica I'
 * '<S20>'  : 'StateflowKalman/Movimento Braccia/Clock reale'
 * '<S21>'  : 'StateflowKalman/Movimento Braccia/MATLAB Function'
 * '<S22>'  : 'StateflowKalman/Movimento Braccia/Quadrato1'
 * '<S23>'  : 'StateflowKalman/Out Asse A Braccia/Fungo'
 * '<S24>'  : 'StateflowKalman/Out Asse A Braccia/Ramp'
 * '<S25>'  : 'StateflowKalman/Out Asse A Braccia/Fungo/MATLAB Function'
 * '<S26>'  : 'StateflowKalman/Out Asse B Braccia/Fungo'
 * '<S27>'  : 'StateflowKalman/Out Asse B Braccia/MATLAB Function'
 * '<S28>'  : 'StateflowKalman/Out Asse B Braccia/Ramp'
 * '<S29>'  : 'StateflowKalman/Out Asse B Braccia/Fungo/MATLAB Function'
 * '<S30>'  : 'StateflowKalman/Out asse A Vite/Fungo'
 * '<S31>'  : 'StateflowKalman/Out asse A Vite/Fungo/MATLAB Function'
 * '<S32>'  : 'StateflowKalman/Out asse B Vite/Fungo'
 * '<S33>'  : 'StateflowKalman/Out asse B Vite/Fungo/MATLAB Function'
 * '<S34>'  : 'StateflowKalman/Sistema Vite/Actual A'
 * '<S35>'  : 'StateflowKalman/Sistema Vite/Asse B'
 * '<S36>'  : 'StateflowKalman/Sistema Vite/Asse B conv'
 * '<S37>'  : 'StateflowKalman/Sistema Vite/Clock reale'
 * '<S38>'  : 'StateflowKalman/Sistema Vite/Coppia VIte A finale'
 * '<S39>'  : 'StateflowKalman/Sistema Vite/Discrete Derivative B'
 * '<S40>'  : 'StateflowKalman/Sistema Vite/Rifermento Asse A Vite'
 * '<S41>'  : 'StateflowKalman/Sistema Vite/Velocita vite '
 * '<S42>'  : 'StateflowKalman/Sistema Vite/Actual A/Discrete Derivative A'
 * '<S43>'  : 'StateflowKalman/Sistema Vite/Actual A/Posizione attuale Vite A'
 * '<S44>'  : 'StateflowKalman/Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv'
 * '<S45>'  : 'StateflowKalman/Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v'
 * '<S46>'  : 'StateflowKalman/Sistema Vite/Velocita vite /Vel Asse A conv'
 * '<S47>'  : 'StateflowKalman/Sistema Vite/Velocita vite /Vel Asse B conv'
 * '<S48>'  : 'StateflowKalman/Sistema_braccia/Cinematica Inversa'
 * '<S49>'  : 'StateflowKalman/Sistema_braccia/Cinematica Inversa Acc'
 * '<S50>'  : 'StateflowKalman/Sistema_braccia/Cinematica Inversa vel'
 * '<S51>'  : 'StateflowKalman/Sistema_braccia/Cinematica diretta'
 * '<S52>'  : 'StateflowKalman/Sistema_braccia/Cinematica diretta Acc'
 * '<S53>'  : 'StateflowKalman/Sistema_braccia/Clock reale'
 * '<S54>'  : 'StateflowKalman/Sistema_braccia/Coppia motrice'
 * '<S55>'  : 'StateflowKalman/Sistema_braccia/Dinamica Inversa1'
 * '<S56>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1'
 * '<S57>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter2'
 * '<S58>'  : 'StateflowKalman/Sistema_braccia/Leggi di moto'
 * '<S59>'  : 'StateflowKalman/Sistema_braccia/MATLAB Function'
 * '<S60>'  : 'StateflowKalman/Sistema_braccia/MATLAB Function1'
 * '<S61>'  : 'StateflowKalman/Sistema_braccia/MATLAB Function2'
 * '<S62>'  : 'StateflowKalman/Sistema_braccia/MATLAB Function3'
 * '<S63>'  : 'StateflowKalman/Sistema_braccia/MATLAB Function4'
 * '<S64>'  : 'StateflowKalman/Sistema_braccia/MATLAB Function5'
 * '<S65>'  : 'StateflowKalman/Sistema_braccia/MATLAB Jin'
 * '<S66>'  : 'StateflowKalman/Sistema_braccia/PID Controller'
 * '<S67>'  : 'StateflowKalman/Sistema_braccia/Pos iniziali'
 * '<S68>'  : 'StateflowKalman/Sistema_braccia/Posizioni'
 * '<S69>'  : 'StateflowKalman/Sistema_braccia/Radians to Degrees'
 * '<S70>'  : 'StateflowKalman/Sistema_braccia/Radians to Degrees1'
 * '<S71>'  : 'StateflowKalman/Sistema_braccia/Velocita '
 * '<S72>'  : 'StateflowKalman/Sistema_braccia/Velocita braccia 1'
 * '<S73>'  : 'StateflowKalman/Sistema_braccia/XY Graph'
 * '<S74>'  : 'StateflowKalman/Sistema_braccia/XY Graph1'
 * '<S75>'  : 'StateflowKalman/Sistema_braccia/XZ Graph'
 * '<S76>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/CalculatePL'
 * '<S77>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/CalculateYhat'
 * '<S78>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionA'
 * '<S79>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionB'
 * '<S80>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionC'
 * '<S81>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionD'
 * '<S82>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionG'
 * '<S83>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionH'
 * '<S84>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionN'
 * '<S85>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionP'
 * '<S86>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionP0'
 * '<S87>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionQ'
 * '<S88>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionR'
 * '<S89>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionReset'
 * '<S90>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionX'
 * '<S91>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionX0'
 * '<S92>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/DataTypeConversionu'
 * '<S93>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/MemoryP'
 * '<S94>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/Observer'
 * '<S95>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/ReducedQRN'
 * '<S96>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/ScalarExpansionP0'
 * '<S97>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/ScalarExpansionQ'
 * '<S98>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/ScalarExpansionR'
 * '<S99>'  : 'StateflowKalman/Sistema_braccia/Kalman Filter1/UseCurrentEstimator'
 * '<S100>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkA'
 * '<S101>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkB'
 * '<S102>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkC'
 * '<S103>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkD'
 * '<S104>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkEnable'
 * '<S105>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkG'
 * '<S106>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkH'
 * '<S107>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkN'
 * '<S108>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkP0'
 * '<S109>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkQ'
 * '<S110>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkR'
 * '<S111>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkReset'
 * '<S112>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checkX0'
 * '<S113>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checku'
 * '<S114>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/checky'
 * '<S115>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionL'
 * '<S116>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionM'
 * '<S117>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionP'
 * '<S118>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/CalculatePL/DataTypeConversionZ'
 * '<S119>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/Observer/MeasurementUpdate'
 * '<S120>' : 'StateflowKalman/Sistema_braccia/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem'
 * '<S121>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/CalculatePL'
 * '<S122>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/CalculateYhat'
 * '<S123>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionA'
 * '<S124>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionB'
 * '<S125>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionC'
 * '<S126>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionD'
 * '<S127>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionG'
 * '<S128>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionH'
 * '<S129>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionN'
 * '<S130>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionP'
 * '<S131>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionP0'
 * '<S132>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionQ'
 * '<S133>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionR'
 * '<S134>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionReset'
 * '<S135>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionX'
 * '<S136>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionX0'
 * '<S137>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/DataTypeConversionu'
 * '<S138>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/MemoryP'
 * '<S139>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/Observer'
 * '<S140>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/ReducedQRN'
 * '<S141>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/ScalarExpansionP0'
 * '<S142>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/ScalarExpansionQ'
 * '<S143>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/ScalarExpansionR'
 * '<S144>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/UseCurrentEstimator'
 * '<S145>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkA'
 * '<S146>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkB'
 * '<S147>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkC'
 * '<S148>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkD'
 * '<S149>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkEnable'
 * '<S150>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkG'
 * '<S151>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkH'
 * '<S152>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkN'
 * '<S153>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkP0'
 * '<S154>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkQ'
 * '<S155>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkR'
 * '<S156>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkReset'
 * '<S157>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checkX0'
 * '<S158>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checku'
 * '<S159>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/checky'
 * '<S160>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionL'
 * '<S161>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionM'
 * '<S162>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionP'
 * '<S163>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/CalculatePL/DataTypeConversionZ'
 * '<S164>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/Observer/MeasurementUpdate'
 * '<S165>' : 'StateflowKalman/Sistema_braccia/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem'
 * '<S166>' : 'StateflowKalman/Sistema_braccia/Leggi di moto/Cerchi Tangenti'
 * '<S167>' : 'StateflowKalman/Sistema_braccia/Leggi di moto/Cerchio'
 * '<S168>' : 'StateflowKalman/Sistema_braccia/Leggi di moto/Quadrato'
 * '<S169>' : 'StateflowKalman/Sistema_braccia/Leggi di moto/g'
 * '<S170>' : 'StateflowKalman/Sistema_braccia/Leggi di moto/spirale'
 * '<S171>' : 'StateflowKalman/Sistema_braccia/Pos iniziali/Cinematica Inversa2'
 * '<S172>' : 'StateflowKalman/Sistema_braccia/Posizioni/Asse A conv bracc'
 * '<S173>' : 'StateflowKalman/Sistema_braccia/Posizioni/Asse B conv brac1'
 * '<S174>' : 'StateflowKalman/Sistema_braccia/Posizioni/Discrete Derivative B'
 * '<S175>' : 'StateflowKalman/Sistema_braccia/Posizioni/Discrete Derivative B1'
 * '<S176>' : 'StateflowKalman/Sistema_braccia/Posizioni/Discrete Derivative B2'
 * '<S177>' : 'StateflowKalman/Sistema_braccia/Posizioni/Discrete Derivative B3'
 * '<S178>' : 'StateflowKalman/Sistema_braccia/Posizioni/Discrete Derivative B4'
 * '<S179>' : 'StateflowKalman/Sistema_braccia/Posizioni/Discrete Derivative B5'
 * '<S180>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter'
 * '<S181>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter1'
 * '<S182>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter2'
 * '<S183>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter/Model'
 * '<S184>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)'
 * '<S185>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S186>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)'
 * '<S187>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter1/Model'
 * '<S188>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)'
 * '<S189>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))'
 * '<S190>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)'
 * '<S191>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter2/Model'
 * '<S192>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)'
 * '<S193>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))'
 * '<S194>' : 'StateflowKalman/Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)'
 * '<S195>' : 'StateflowKalman/Sistema_braccia/Velocita /Vel Asse A conv'
 * '<S196>' : 'StateflowKalman/Sistema_braccia/Velocita /Vel Asse B conv'
 * '<S197>' : 'StateflowKalman/Sistema_braccia/Velocita braccia 1/Vel Asse A conv'
 * '<S198>' : 'StateflowKalman/Sistema_braccia/Velocita braccia 1/Vel Asse B conv'
 * '<S199>' : 'StateflowKalman/State flow robot/Posizionamento'
 * '<S200>' : 'StateflowKalman/State flow robot/Setting'
 * '<S201>' : 'StateflowKalman/State flow robot/Posizionamento/MATLAB Function'
 * '<S202>' : 'StateflowKalman/State flow robot/Posizionamento/MATLAB Function1'
 * '<S203>' : 'StateflowKalman/State flow robot/Setting/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_StateflowKalman_h_ */
