/*
 * StateFlowFinal.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowFinal".
 *
 * Model version              : 1.991
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Nov 26 12:14:27 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateFlowFinal_h_
#define RTW_HEADER_StateFlowFinal_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef StateFlowFinal_COMMON_INCLUDES_
# define StateFlowFinal_COMMON_INCLUDES_
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
#endif                                 /* StateFlowFinal_COMMON_INCLUDES_ */

#include "StateFlowFinal_types.h"

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
#define rtModel_StateFlowFinal         RT_MODEL_StateFlowFinal_T

/* Definition for use in the target main file */
#define StateFlowFinal_rtModel         RT_MODEL_StateFlowFinal_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S23>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S23>/MATLAB Function' */
} B_MATLABFunction_StateFlowFin_T;

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
  real_T Kp;                           /* '<Root>/Kp' */
  real_T StartHome;                    /* '<Root>/StartHome' */
  real_T StartRobot;                   /* '<Root>/StartRobot' */
  real_T StartWork;                    /* '<Root>/StartWork' */
  real_T Reset;                        /* '<Root>/Reset' */
  real_T Stop;                         /* '<Root>/Stop' */
  real_T StartZero;                    /* '<Root>/StartZero' */
  real_T Memory;                       /* '<S23>/Memory' */
  real_T Sum12;                        /* '<S65>/Sum12' */
  real_T Sum4;                         /* '<S65>/Sum4' */
  real_T Sum9;                         /* '<S65>/Sum9' */
  real_T Sum7;                         /* '<S65>/Sum7' */
  real_T VelocityB;                    /* '<S69>/Velocity B' */
  real_T VelocityA;                    /* '<S69>/Velocity A' */
  real_T Sum2;                         /* '<S54>/Sum2' */
  real_T MultiportSwitch[6];           /* '<S57>/Multiport Switch' */
  real_T Sum;                          /* '<S12>/Sum' */
  real_T Ymov;                         /* '<S12>/Sum1' */
  real_T VelocityB_f;                  /* '<S68>/Velocity B' */
  real_T VelocityA_o;                  /* '<S68>/Velocity A' */
  real_T qdot[2];                      /* '<S12>/Sum7' */
  real_T Kd[2];                        /* '<S12>/Kd' */
  real_T q[2];                         /* '<S12>/Sum4' */
  real_T Product[2];                   /* '<S12>/Product' */
  real_T Y[2];                         /* '<S12>/Sum9' */
  real_T Gain1;                        /* '<S12>/Gain1' */
  real_T Switch1;                      /* '<S23>/Switch1' */
  real_T CoppiaAbracciasaturata;       /* '<S5>/Coppia A braccia saturata' */
  real_T DataTypeConversion14;         /* '<S23>/Data Type Conversion14' */
  real_T Memory_g;                     /* '<S27>/Memory' */
  real_T Gain;                         /* '<S12>/Gain' */
  real_T Switch1_l;                    /* '<S27>/Switch1' */
  real_T CoppiaBbracciasaturata;       /* '<S6>/Coppia B braccia saturata' */
  real_T DataTypeConversion14_g;       /* '<S27>/Data Type Conversion14' */
  real_T Memory_n;                     /* '<S31>/Memory' */
  real_T Sum_p;                        /* '<S35>/Sum' */
  real_T Sum3;                         /* '<S11>/Sum3' */
  real_T Sum5;                         /* '<S44>/Sum5' */
  real_T Sum2_m;                       /* '<S38>/Sum2' */
  real_T Sum1;                         /* '<S11>/Sum1' */
  real_T Gain_a;                       /* '<S39>/Gain' */
  real_T VelocityA_b;                  /* '<S42>/Velocity A' */
  real_T VelocityB_d;                  /* '<S42>/Velocity B' */
  real_T Sum8;                         /* '<S11>/Sum8' */
  real_T Gain6;                        /* '<S39>/Gain6' */
  real_T Sum9_p;                       /* '<S39>/Sum9' */
  real_T Switch1_f;                    /* '<S31>/Switch1' */
  real_T DataTypeConversion14_k;       /* '<S31>/Data Type Conversion14' */
  real_T Memory_d;                     /* '<S33>/Memory' */
  real_T Sum4_l;                       /* '<S11>/Sum4' */
  real_T Gain2;                        /* '<S11>/Gain2' */
  real_T Sum6;                         /* '<S11>/Sum6' */
  real_T Gain4;                        /* '<S11>/Gain4' */
  real_T Sum7_n;                       /* '<S11>/Sum7' */
  real_T Switch1_h;                    /* '<S33>/Switch1' */
  real_T CoppiaAvitesaturata;          /* '<S8>/Coppia A vite saturata' */
  real_T DataTypeConversion14_h;       /* '<S33>/Data Type Conversion14' */
  real_T TSamp;                        /* '<S40>/TSamp' */
  real_T Uk1;                          /* '<S40>/UD' */
  real_T Diff;                         /* '<S40>/Diff' */
  real_T TSamp_i;                      /* '<S43>/TSamp' */
  real_T Uk1_p;                        /* '<S43>/UD' */
  real_T Diff_l;                       /* '<S43>/Diff' */
  real_T Sum2_d;                       /* '<S12>/Sum2' */
  real_T Sum3_b;                       /* '<S12>/Sum3' */
  real_T Kd1[2];                       /* '<S12>/Kd1' */
  real_T Kp1[2];                       /* '<S12>/Kp1' */
  real_T TSamp_e;                      /* '<S83>/TSamp' */
  real_T Uk1_l;                        /* '<S83>/UD' */
  real_T Diff_f;                       /* '<S83>/Diff' */
  real_T Duk;                          /* '<S94>/D*u(k)' */
  real_T x1k;                          /* '<S94>/Delay_x1' */
  real_T C11;                          /* '<S97>/C11' */
  real_T x2k;                          /* '<S94>/Delay_x2' */
  real_T C12;                          /* '<S97>/C12' */
  real_T sum2;                         /* '<S97>/sum2' */
  real_T yk;                           /* '<S94>/C*X(k)+D*u(k)' */
  real_T TSamp_n;                      /* '<S81>/TSamp' */
  real_T Uk1_d;                        /* '<S81>/UD' */
  real_T Diff_i;                       /* '<S81>/Diff' */
  real_T A11;                          /* '<S95>/A11' */
  real_T A12;                          /* '<S95>/A12' */
  real_T A21;                          /* '<S95>/A21' */
  real_T A22;                          /* '<S95>/A22' */
  real_T sum2_n;                       /* '<S95>/sum2' */
  real_T sum3;                         /* '<S95>/sum3' */
  real_T B11;                          /* '<S96>/B11' */
  real_T x1k1;                         /* '<S94>/A*x1(k) + B*u1(k) ' */
  real_T B21;                          /* '<S96>/B21' */
  real_T x2k1;                         /* '<S94>/A*x2(k) + B*u2(k)' */
  real_T Duk_h;                        /* '<S90>/D*u(k)' */
  real_T x1k_a;                        /* '<S90>/Delay_x1' */
  real_T C11_h;                        /* '<S93>/C11' */
  real_T x2k_g;                        /* '<S90>/Delay_x2' */
  real_T C12_e;                        /* '<S93>/C12' */
  real_T sum2_k;                       /* '<S93>/sum2' */
  real_T yk_i;                         /* '<S90>/C*X(k)+D*u(k)' */
  real_T TSamp_h;                      /* '<S82>/TSamp' */
  real_T Uk1_b;                        /* '<S82>/UD' */
  real_T Diff_d;                       /* '<S82>/Diff' */
  real_T TSamp_nd;                     /* '<S84>/TSamp' */
  real_T Uk1_ll;                       /* '<S84>/UD' */
  real_T Diff_n;                       /* '<S84>/Diff' */
  real_T A11_p;                        /* '<S91>/A11' */
  real_T A12_c;                        /* '<S91>/A12' */
  real_T A21_h;                        /* '<S91>/A21' */
  real_T A22_d;                        /* '<S91>/A22' */
  real_T sum2_nk;                      /* '<S91>/sum2' */
  real_T sum3_e;                       /* '<S91>/sum3' */
  real_T B11_k;                        /* '<S92>/B11' */
  real_T x1k1_g;                       /* '<S90>/A*x1(k) + B*u1(k) ' */
  real_T B21_l;                        /* '<S92>/B21' */
  real_T x2k1_n;                       /* '<S90>/A*x2(k) + B*u2(k)' */
  real_T DigitalClock;                 /* '<S65>/Digital Clock' */
  real_T Duk_n;                        /* '<S98>/D*u(k)' */
  real_T x1k_i;                        /* '<S98>/Delay_x1' */
  real_T C11_e;                        /* '<S101>/C11' */
  real_T x2k_d;                        /* '<S98>/Delay_x2' */
  real_T C12_m;                        /* '<S101>/C12' */
  real_T sum2_ka;                      /* '<S101>/sum2' */
  real_T yk_m;                         /* '<S98>/C*X(k)+D*u(k)' */
  real_T TSamp_f;                      /* '<S85>/TSamp' */
  real_T Uk1_j;                        /* '<S85>/UD' */
  real_T Diff_b;                       /* '<S85>/Diff' */
  real_T TSamp_iq;                     /* '<S86>/TSamp' */
  real_T Uk1_bl;                       /* '<S86>/UD' */
  real_T Diff_bt;                      /* '<S86>/Diff' */
  real_T A11_h;                        /* '<S99>/A11' */
  real_T A12_g;                        /* '<S99>/A12' */
  real_T A21_p;                        /* '<S99>/A21' */
  real_T A22_j;                        /* '<S99>/A22' */
  real_T sum2_e;                       /* '<S99>/sum2' */
  real_T sum3_b;                       /* '<S99>/sum3' */
  real_T B11_d;                        /* '<S100>/B11' */
  real_T x1k1_h;                       /* '<S98>/A*x1(k) + B*u1(k) ' */
  real_T B21_h;                        /* '<S100>/B21' */
  real_T x2k1_h;                       /* '<S98>/A*x2(k) + B*u2(k)' */
  real_T Gain_p;                       /* '<S66>/Gain' */
  real_T Gain_n;                       /* '<S67>/Gain' */
  real_T nphi;                         /* '<S12>/Sum5' */
  real_T YRobusto[2];                  /* '<S12>/Sum8' */
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
  real_T Kp_l;                         /* '<Root>/State flow robot' */
  real_T Hv;                           /* '<Root>/State flow robot' */
  real_T Hb;                           /* '<Root>/State flow robot' */
  real_T Enable;                       /* '<Root>/State flow robot' */
  real_T FineLavorazione;              /* '<Root>/State flow robot' */
  real_T PosRifA;                      /* '<Root>/State flow robot' */
  real_T PosRifB;                      /* '<Root>/State flow robot' */
  real_T Stato;                        /* '<Root>/State flow robot' */
  real_T Fc;                           /* '<Root>/State flow robot' */
  real_T Fca;                          /* '<Root>/State flow robot' */
  real_T Fcb;                          /* '<Root>/State flow robot' */
  real_T posrifA;                      /* '<Root>/State flow robot' */
  real_T posrifB;                      /* '<Root>/State flow robot' */
  real_T posA;                         /* '<Root>/State flow robot' */
  real_T posB;                         /* '<Root>/State flow robot' */
  real_T Kp_p;                         /* '<Root>/State flow robot' */
  real_T DiscreteTimeIntegrator1;      /* '<S106>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator;       /* '<S106>/Discrete-Time Integrator' */
  real_T Gain_i;                       /* '<S106>/Gain' */
  real_T Gain1_f;                      /* '<S106>/Gain1' */
  real_T Sum1_i;                       /* '<S106>/Sum1' */
  real_T Sum2_b;                       /* '<S106>/Sum2' */
  real_T CA;                           /* '<S106>/MATLAB Function' */
  real_T CB;                           /* '<S106>/MATLAB Function' */
  real_T CH;                           /* '<S106>/MATLAB Function' */
  real_T DataTypeConversion;           /* '<S71>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<S71>/Data Type Conversion1' */
  real_T TmpSignalConversionAtsfunxyInpo[2];
  real_T vel_B_conv;                   /* '<S69>/Vel Asse B conv' */
  real_T vel_A_conv;                   /* '<S69>/Vel Asse A conv' */
  real_T vel_B_conv_b;                 /* '<S68>/Vel Asse B conv' */
  real_T vel_A_conv_b;                 /* '<S68>/Vel Asse A conv' */
  real_T pos_B_conv;                   /* '<S65>/Asse B conv brac1' */
  real_T pos_A_conv;                   /* '<S65>/Asse A conv bracc' */
  real_T x0;                           /* '<S64>/Cinematica Inversa2' */
  real_T y0;                           /* '<S64>/Cinematica Inversa2' */
  real_T x_p;                          /* '<S12>/MATLAB Jin' */
  real_T y_p;                          /* '<S12>/MATLAB Jin' */
  real_T rho;                          /* '<S12>/MATLAB Function4' */
  real_T omega[2];                     /* '<S12>/MATLAB Function4' */
  real_T z[2];                         /* '<S12>/MATLAB Function4' */
  real_T csiH[4];                      /* '<S12>/MATLAB Function3' */
  real_T phi;                          /* '<S12>/MATLAB Function3' */
  real_T xp;                           /* '<S12>/MATLAB Function2' */
  real_T yp;                           /* '<S12>/MATLAB Function2' */
  real_T xs;                           /* '<S57>/spirale' */
  real_T ys;                           /* '<S57>/spirale' */
  real_T xs_p;                         /* '<S57>/spirale' */
  real_T ys_p;                         /* '<S57>/spirale' */
  real_T xs_pp;                        /* '<S57>/spirale' */
  real_T ys_pp;                        /* '<S57>/spirale' */
  real_T x;                            /* '<S57>/g' */
  real_T y;                            /* '<S57>/g' */
  real_T x_p_l;                        /* '<S57>/g' */
  real_T y_p_o;                        /* '<S57>/g' */
  real_T x_pp;                         /* '<S57>/g' */
  real_T y_pp;                         /* '<S57>/g' */
  real_T xq;                           /* '<S57>/Quadrato' */
  real_T yq;                           /* '<S57>/Quadrato' */
  real_T xq_p;                         /* '<S57>/Quadrato' */
  real_T yq_p;                         /* '<S57>/Quadrato' */
  real_T xq_pp;                        /* '<S57>/Quadrato' */
  real_T yq_pp;                        /* '<S57>/Quadrato' */
  real_T xc;                           /* '<S57>/Cerchio' */
  real_T yc;                           /* '<S57>/Cerchio' */
  real_T xc_p;                         /* '<S57>/Cerchio' */
  real_T yc_p;                         /* '<S57>/Cerchio' */
  real_T xc_pp;                        /* '<S57>/Cerchio' */
  real_T yc_pp;                        /* '<S57>/Cerchio' */
  real_T xct;                          /* '<S57>/Cerchi Tangenti' */
  real_T yct;                          /* '<S57>/Cerchi Tangenti' */
  real_T xct_p;                        /* '<S57>/Cerchi Tangenti' */
  real_T yct_p;                        /* '<S57>/Cerchi Tangenti' */
  real_T xct_pp;                       /* '<S57>/Cerchi Tangenti' */
  real_T yct_pp;                       /* '<S57>/Cerchi Tangenti' */
  real_T C1;                           /* '<S12>/Dinamica Inversa1' */
  real_T C2;                           /* '<S12>/Dinamica Inversa1' */
  real_T Mm[4];                        /* '<S12>/Dinamica Inversa1' */
  real_T ntilde;                       /* '<S12>/Dinamica Inversa1' */
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
  real_T theta1;                       /* '<S12>/Cinematica Inversa' */
  real_T theta2;                       /* '<S12>/Cinematica Inversa' */
  real_T vel_B_conv_d;                 /* '<S42>/Vel Asse B conv' */
  real_T vel_A_conv_d;                 /* '<S42>/Vel Asse A conv' */
  real_T ldm_pos;                      /* '<S11>/Rifermento Asse A Vite' */
  real_T ldm_vel;                      /* '<S11>/Rifermento Asse A Vite' */
  real_T pos_B_conv_p;                 /* '<S11>/Asse B conv' */
  real_T ldm_pos_n;                    /* '<S11>/Asse B' */
  real_T ldm_vel_c;                    /* '<S11>/Asse B' */
  real_T pos_B_conv_v;                 /* '<S44>/Asse B conv v' */
  real_T pos_A_conv_c;                 /* '<S44>/Asse A conv' */
  real_T Switch2;                      /* '<S8>/Switch2' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T Gain_m;                       /* '<S7>/Gain' */
  real_T Switch1_i;                    /* '<S6>/Switch1' */
  real_T Switch1_c;                    /* '<S5>/Switch1' */
  real_T y_f;                          /* '<S3>/MATLAB Function2' */
  real_T y_b;                          /* '<S3>/MATLAB Function1' */
  real_T y_i;                          /* '<S3>/MATLAB Function' */
  int32_T EtherCATInit[6];             /* '<Root>/EtherCAT Init ' */
  int32_T MotorebracciaA;              /* '<S9>/Motore braccia A' */
  int32_T MotorebracciaB;              /* '<S9>/Motore braccia B' */
  int32_T MotoreviteA;                 /* '<S10>/Motore vite A' */
  int32_T MotoreviteB;                 /* '<S10>/Motore vite B' */
  int32_T EtherCATPDOReceive15;        /* '<S69>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14;        /* '<S69>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_d;      /* '<S68>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14_b;      /* '<S68>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive14_j;      /* '<S42>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_k;      /* '<S42>/EtherCAT PDO Receive15' */
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
  boolean_T EtherCATPDOReceive9_h;     /* '<S27>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_hd;    /* '<S31>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_m;     /* '<S33>/EtherCAT PDO Receive9' */
  B_MATLABFunction_StateFlowFin_T sf_MATLABFunction_fb;/* '<S33>/MATLAB Function' */
  B_MATLABFunction_StateFlowFin_T sf_MATLABFunction_f;/* '<S31>/MATLAB Function' */
  B_MATLABFunction_StateFlowFin_T sf_MATLABFunction_a;/* '<S27>/MATLAB Function' */
  B_MATLABFunction_StateFlowFin_T sf_MATLABFunction_e;/* '<S23>/MATLAB Function' */
} B_StateFlowFinal_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S40>/UD' */
  real_T UD_DSTATE_a;                  /* '<S43>/UD' */
  real_T UD_DSTATE_g;                  /* '<S83>/UD' */
  real_T Delay_x1_DSTATE;              /* '<S94>/Delay_x1' */
  real_T Delay_x2_DSTATE;              /* '<S94>/Delay_x2' */
  real_T UD_DSTATE_a3;                 /* '<S81>/UD' */
  real_T Delay_x1_DSTATE_g;            /* '<S90>/Delay_x1' */
  real_T Delay_x2_DSTATE_m;            /* '<S90>/Delay_x2' */
  real_T UD_DSTATE_j;                  /* '<S82>/UD' */
  real_T UD_DSTATE_f;                  /* '<S84>/UD' */
  real_T Delay_x1_DSTATE_k;            /* '<S98>/Delay_x1' */
  real_T Delay_x2_DSTATE_k;            /* '<S98>/Delay_x2' */
  real_T UD_DSTATE_g0;                 /* '<S85>/UD' */
  real_T UD_DSTATE_k;                  /* '<S86>/UD' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S106>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S106>/Discrete-Time Integrator' */
  real_T Memory_PreviousInput;         /* '<S23>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S27>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S31>/Memory' */
  real_T Memory_PreviousInput_a;       /* '<S33>/Memory' */
  real_T conv;                         /* '<Root>/State flow robot' */
  real_T OffA_0;                       /* '<Root>/State flow robot' */
  real_T OffB_0;                       /* '<Root>/State flow robot' */
  real_T conv_vite;                    /* '<Root>/State flow robot' */
  real_T DiscreteTimeIntegrator1_PREV_U;/* '<S106>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_PREV_U;/* '<S106>/Discrete-Time Integrator' */
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
  } HiddenToAsyncQueue_InsertedF_lc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_di;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedF_ou;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedF_l3;   /* synthesized block */

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
  } HiddenToAsyncQueue_Inserted_oub;   /* synthesized block */

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
  } HiddenToAsyncQueue_Inserte_oub0;   /* synthesized block */

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
  int_T EtherCATPDOReceive15_IWORK[7]; /* '<S69>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK[7]; /* '<S69>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_o[7];/* '<S68>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK_p[7];/* '<S68>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOTransmit1_IWORK[7]; /* '<S5>/EtherCAT PDO Transmit 1' */
  int_T EtherCATPDOReceive9_IWORK[7];  /* '<S23>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOTransmit7_IWORK[7]; /* '<S6>/EtherCAT PDO Transmit 7' */
  int_T EtherCATPDOReceive9_IWORK_n[7];/* '<S27>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive14_IWORK_f[7];/* '<S42>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_n[7];/* '<S42>/EtherCAT PDO Receive15' */
  int_T Torquesend_IWORK[7];           /* '<S7>/Torque send' */
  int_T EtherCATPDOReceive9_IWORK_g[7];/* '<S31>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOTransmit2_IWORK[7]; /* '<S8>/EtherCAT PDO Transmit 2' */
  int_T EtherCATPDOReceive9_IWORK_gl[7];/* '<S33>/EtherCAT PDO Receive9' */
  uint16_T temporalCounter_i1;         /* '<Root>/State flow robot' */
  int8_T Setting_SubsysRanBC;          /* '<S13>/Setting' */
  uint8_T is_active_c15_StateFlowFinal;/* '<Root>/State flow robot' */
  uint8_T is_c15_StateFlowFinal;       /* '<Root>/State flow robot' */
  uint8_T DiscreteTimeIntegrator1_SYSTEM_;/* '<S106>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;/* '<S106>/Discrete-Time Integrator' */
  boolean_T Setting_RESET_ELAPS_T;     /* '<S13>/Setting' */
} DW_StateFlowFinal_T;

/* Backward compatible GRT Identifiers */
#define rtB                            StateFlowFinal_B
#define BlockIO                        B_StateFlowFinal_T
#define rtP                            StateFlowFinal_P
#define Parameters                     P_StateFlowFinal_T
#define rtDWork                        StateFlowFinal_DW
#define D_Work                         DW_StateFlowFinal_T

/* Parameters (auto storage) */
struct P_StateFlowFinal_T_ {
  real_T DiscreteDerivativeB_ICPrevScale;/* Mask Parameter: DiscreteDerivativeB_ICPrevScale
                                          * Referenced by: '<S40>/UD'
                                          */
  real_T DiscreteDerivativeA_ICPrevScale;/* Mask Parameter: DiscreteDerivativeA_ICPrevScale
                                          * Referenced by: '<S43>/UD'
                                          */
  real_T DiscreteDerivativeB2_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB2_ICPrevScal
                                          * Referenced by: '<S83>/UD'
                                          */
  real_T DiscreteDerivativeB_ICPrevSca_m;/* Mask Parameter: DiscreteDerivativeB_ICPrevSca_m
                                          * Referenced by: '<S81>/UD'
                                          */
  real_T DiscreteDerivativeB1_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB1_ICPrevScal
                                          * Referenced by: '<S82>/UD'
                                          */
  real_T DiscreteDerivativeB3_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB3_ICPrevScal
                                          * Referenced by: '<S84>/UD'
                                          */
  real_T DiscreteDerivativeB4_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB4_ICPrevScal
                                          * Referenced by: '<S85>/UD'
                                          */
  real_T DiscreteDerivativeB5_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB5_ICPrevScal
                                          * Referenced by: '<S86>/UD'
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
  real_T CA_Y0;                        /* Computed Parameter: CA_Y0
                                        * Referenced by: '<S106>/CA'
                                        */
  real_T CB_Y0;                        /* Computed Parameter: CB_Y0
                                        * Referenced by: '<S106>/CB'
                                        */
  real_T CH_Y0;                        /* Computed Parameter: CH_Y0
                                        * Referenced by: '<S106>/CH'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S106>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S106>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S106>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S106>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_d;                  /* Expression: ( (2*pi)/16384/64*180/pi)
                                        * Referenced by: '<S106>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: ( (2*pi)/16384/64*180/pi)
                                        * Referenced by: '<S106>/Gain1'
                                        */
  real_T Ki_Value;                     /* Expression: 200
                                        * Referenced by: '<S106>/Ki'
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
  real_T Kp_Value;                     /* Expression: 450
                                        * Referenced by: '<Root>/Kp'
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
                                        * Referenced by: '<S65>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: deg2rad(80)
                                        * Referenced by: '<S65>/Constant5'
                                        */
  real_T EtherCATPDOReceive15_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P1[47];  /* Computed Parameter: EtherCATPDOReceive15_P1
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P3;      /* Expression: sig_type
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P4;      /* Expression: type_size
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P6;      /* Expression: device_id
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P7;      /* Expression: sample_time
                                        * Referenced by: '<S69>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive14_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P1[47];  /* Computed Parameter: EtherCATPDOReceive14_P1
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P3;      /* Expression: sig_type
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P4;      /* Expression: type_size
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P6;      /* Expression: device_id
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size
                                          * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P7;      /* Expression: sample_time
                                        * Referenced by: '<S69>/EtherCAT PDO Receive14'
                                        */
  real_T Constant_Value_b;             /* Expression: deg2rad(100)
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: deg2rad(80)
                                        * Referenced by: '<S64>/Constant1'
                                        */
  real_T selettore_Value;              /* Expression: 2
                                        * Referenced by: '<S12>/selettore'
                                        */
  real_T PeriodoQ_Value;               /* Expression: 10
                                        * Referenced by: '<S57>/Periodo Q'
                                        */
  real_T AlzataQ_Value;                /* Expression: 0.10
                                        * Referenced by: '<S57>/Alzata Q'
                                        */
  real_T PeriodoC_Value;               /* Expression: 1
                                        * Referenced by: '<S57>/Periodo C'
                                        */
  real_T AlzataC_Value;                /* Expression: 0.05
                                        * Referenced by: '<S57>/Alzata C'
                                        */
  real_T AlzataC1_Value;               /* Expression: 0.015
                                        * Referenced by: '<S57>/Alzata C1'
                                        */
  real_T PeriodoC1_Value;              /* Expression: 32
                                        * Referenced by: '<S57>/Periodo C1'
                                        */
  real_T Constant3_Value;              /* Expression: 0.125
                                        * Referenced by: '<S57>/Constant3'
                                        */
  real_T Periodo_Value;                /* Expression: 10
                                        * Referenced by: '<S57>/Periodo'
                                        */
  real_T Rmax_Value;                   /* Expression: 0.04
                                        * Referenced by: '<S57>/Rmax'
                                        */
  real_T Ngiri_Value;                  /* Expression: 3
                                        * Referenced by: '<S57>/N giri'
                                        */
  real_T Rmin_Value;                   /* Expression: 0.02
                                        * Referenced by: '<S57>/Rmin'
                                        */
  real_T Tempospostiniziale_Value;     /* Expression: 0.5
                                        * Referenced by: '<S57>/Tempo spost. iniziale'
                                        */
  real_T Rmax1_Value;                  /* Expression: 0
                                        * Referenced by: '<S57>/Rmax1'
                                        */
  real_T Ngiri1_Value;                 /* Expression: 0
                                        * Referenced by: '<S57>/N giri1'
                                        */
  real_T Rmin1_Value;                  /* Expression: 0
                                        * Referenced by: '<S57>/Rmin1'
                                        */
  real_T Ngiri2_Value;                 /* Expression: 0
                                        * Referenced by: '<S57>/N giri2'
                                        */
  real_T Rmin2_Value;                  /* Expression: 0
                                        * Referenced by: '<S57>/Rmin2'
                                        */
  real_T Rmin3_Value;                  /* Expression: 0
                                        * Referenced by: '<S57>/Rmin3'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_j
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_a[47];/* Computed Parameter: EtherCATPDOReceive15_P1_a
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_n[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_n
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_l;    /* Expression: sig_offset
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_j
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_a;    /* Expression: sig_type
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_c[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_c
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_f;    /* Expression: type_size
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_k
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_c;    /* Expression: sig_dim
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_j
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_g;    /* Expression: device_id
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_f[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_f
                                            * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_m;    /* Expression: sample_time
                                        * Referenced by: '<S68>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_c
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_k[47];/* Computed Parameter: EtherCATPDOReceive14_P1_k
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_m[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_m
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_i;    /* Expression: sig_offset
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_h
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_a;    /* Expression: sig_type
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_c
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_e;    /* Expression: type_size
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_c
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_j;    /* Expression: sig_dim
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_h
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_m;    /* Expression: device_id
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_p
                                            * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_m;    /* Expression: sample_time
                                        * Referenced by: '<S68>/EtherCAT PDO Receive14'
                                        */
  real_T Kd_Gain;                      /* Expression: 5
                                        * Referenced by: '<S12>/Kd'
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
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * Referenced by: '<S27>/Memory'
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
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_g[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_g
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_i
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_p;     /* Expression: sig_offset
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_g[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_g
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_f;     /* Expression: sig_type
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_e
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_a;     /* Expression: type_size
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_n[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_n
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_d;     /* Expression: sig_dim
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_e
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_c;     /* Expression: device_id
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_a
                                           * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_a;     /* Expression: sample_time
                                        * Referenced by: '<S27>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Memory_X0_o;                  /* Expression: 0
                                        * Referenced by: '<S31>/Memory'
                                        */
  real_T AlzataA_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata A'
                                        */
  real_T PeriodoA_Value;               /* Expression: 2
                                        * Referenced by: '<Root>/Periodo A'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 300*1000/0.36
                                        * Referenced by: '<S39>/Gain'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_g[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_g
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_m[47];/* Computed Parameter: EtherCATPDOReceive14_P1_m
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_d[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_d
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_d;    /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_k[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_k
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_d;    /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_o[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_o
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_g;    /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_a[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_a
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_h;    /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_k[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_k
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_o;    /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_k[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_k
                                            * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_g;    /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_b
                                            * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_m[47];/* Computed Parameter: EtherCATPDOReceive15_P1_m
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_b
                                            * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_d;    /* Expression: sig_offset
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_a[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_a
                                            * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_b;    /* Expression: sig_type
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_f[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_f
                                            * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_i;    /* Expression: type_size
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_e[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_e
                                            * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_cp;   /* Expression: sig_dim
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_k
                                            * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_f;    /* Expression: device_id
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_fm[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_fm
                                             * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                             */
  real_T EtherCATPDOReceive15_P7_o;    /* Expression: sample_time
                                        * Referenced by: '<S42>/EtherCAT PDO Receive15'
                                        */
  real_T Gain6_Gain;                   /* Expression: 5*1000/0.36
                                        * Referenced by: '<S39>/Gain6'
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
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_i[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_i
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_a
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_m;     /* Expression: sig_offset
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_h
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_m;     /* Expression: sig_type
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_f[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_f
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_l;     /* Expression: type_size
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_a
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_b;     /* Expression: sig_dim
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_i
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_l;     /* Expression: device_id
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_p
                                           * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_b;     /* Expression: sample_time
                                        * Referenced by: '<S31>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Memory_X0_a;                  /* Expression: 0
                                        * Referenced by: '<S33>/Memory'
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
                                           * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_a[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_a
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_c[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_c
                                           * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_d;     /* Expression: sig_offset
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_i
                                           * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_k;     /* Expression: sig_type
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_en[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_en
                                            * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P4_f;     /* Expression: type_size
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_nv[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_nv
                                            * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P5_k;     /* Expression: sig_dim
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_p
                                           * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_l4;    /* Expression: device_id
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_ai[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_ai
                                            * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P7_j;     /* Expression: sample_time
                                        * Referenced by: '<S33>/EtherCAT PDO Receive9'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S40>/TSamp'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S43>/TSamp'
                                        */
  real_T Kd1_Gain;                     /* Expression: 5
                                        * Referenced by: '<S12>/Kd1'
                                        */
  real_T Kp1_Gain;                     /* Expression: 9
                                        * Referenced by: '<S12>/Kp1'
                                        */
  real_T TSamp_WtEt_m;                 /* Computed Parameter: TSamp_WtEt_m
                                        * Referenced by: '<S83>/TSamp'
                                        */
  real_T Duk_Gain;                     /* Expression: sps.D
                                        * Referenced by: '<S94>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition;    /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S94>/Delay_x1'
                                        */
  real_T C11_Gain;                     /* Expression: sps.C11
                                        * Referenced by: '<S97>/C11'
                                        */
  real_T Delay_x2_InitialCondition;    /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S94>/Delay_x2'
                                        */
  real_T C12_Gain;                     /* Expression: sps.C12
                                        * Referenced by: '<S97>/C12'
                                        */
  real_T TSamp_WtEt_e;                 /* Computed Parameter: TSamp_WtEt_e
                                        * Referenced by: '<S81>/TSamp'
                                        */
  real_T A11_Gain;                     /* Expression: sps.A11
                                        * Referenced by: '<S95>/A11'
                                        */
  real_T A12_Gain;                     /* Expression: sps.A12
                                        * Referenced by: '<S95>/A12'
                                        */
  real_T A21_Gain;                     /* Expression: sps.A21
                                        * Referenced by: '<S95>/A21'
                                        */
  real_T A22_Gain;                     /* Expression: sps.A22
                                        * Referenced by: '<S95>/A22'
                                        */
  real_T B11_Gain;                     /* Expression: sps.B11
                                        * Referenced by: '<S96>/B11'
                                        */
  real_T B21_Gain;                     /* Expression: sps.B21
                                        * Referenced by: '<S96>/B21'
                                        */
  real_T Duk_Gain_h;                   /* Expression: sps.D
                                        * Referenced by: '<S90>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition_l;  /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S90>/Delay_x1'
                                        */
  real_T C11_Gain_n;                   /* Expression: sps.C11
                                        * Referenced by: '<S93>/C11'
                                        */
  real_T Delay_x2_InitialCondition_l;  /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S90>/Delay_x2'
                                        */
  real_T C12_Gain_d;                   /* Expression: sps.C12
                                        * Referenced by: '<S93>/C12'
                                        */
  real_T TSamp_WtEt_gz;                /* Computed Parameter: TSamp_WtEt_gz
                                        * Referenced by: '<S82>/TSamp'
                                        */
  real_T TSamp_WtEt_gh;                /* Computed Parameter: TSamp_WtEt_gh
                                        * Referenced by: '<S84>/TSamp'
                                        */
  real_T A11_Gain_e;                   /* Expression: sps.A11
                                        * Referenced by: '<S91>/A11'
                                        */
  real_T A12_Gain_a;                   /* Expression: sps.A12
                                        * Referenced by: '<S91>/A12'
                                        */
  real_T A21_Gain_m;                   /* Expression: sps.A21
                                        * Referenced by: '<S91>/A21'
                                        */
  real_T A22_Gain_g;                   /* Expression: sps.A22
                                        * Referenced by: '<S91>/A22'
                                        */
  real_T B11_Gain_f;                   /* Expression: sps.B11
                                        * Referenced by: '<S92>/B11'
                                        */
  real_T B21_Gain_p;                   /* Expression: sps.B21
                                        * Referenced by: '<S92>/B21'
                                        */
  real_T Duk_Gain_g;                   /* Expression: sps.D
                                        * Referenced by: '<S98>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition_n;  /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S98>/Delay_x1'
                                        */
  real_T C11_Gain_g;                   /* Expression: sps.C11
                                        * Referenced by: '<S101>/C11'
                                        */
  real_T Delay_x2_InitialCondition_e;  /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S98>/Delay_x2'
                                        */
  real_T C12_Gain_d1;                  /* Expression: sps.C12
                                        * Referenced by: '<S101>/C12'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S85>/TSamp'
                                        */
  real_T TSamp_WtEt_p;                 /* Computed Parameter: TSamp_WtEt_p
                                        * Referenced by: '<S86>/TSamp'
                                        */
  real_T A11_Gain_h;                   /* Expression: sps.A11
                                        * Referenced by: '<S99>/A11'
                                        */
  real_T A12_Gain_a3;                  /* Expression: sps.A12
                                        * Referenced by: '<S99>/A12'
                                        */
  real_T A21_Gain_f;                   /* Expression: sps.A21
                                        * Referenced by: '<S99>/A21'
                                        */
  real_T A22_Gain_d;                   /* Expression: sps.A22
                                        * Referenced by: '<S99>/A22'
                                        */
  real_T B11_Gain_n;                   /* Expression: sps.B11
                                        * Referenced by: '<S100>/B11'
                                        */
  real_T B21_Gain_l;                   /* Expression: sps.B21
                                        * Referenced by: '<S100>/B21'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 180/pi
                                        * Referenced by: '<S66>/Gain'
                                        */
  real_T Gain_Gain_d4;                 /* Expression: 180/pi
                                        * Referenced by: '<S67>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_StateFlowFinal_T {
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
extern P_StateFlowFinal_T StateFlowFinal_P;

/* Block signals (auto storage) */
extern B_StateFlowFinal_T StateFlowFinal_B;

/* Block states (auto storage) */
extern DW_StateFlowFinal_T StateFlowFinal_DW;

/*====================*
 * External functions *
 *====================*/
extern StateFlowFinal_rtModel *StateFlowFinal(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  StateFlowFinal_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_StateFlowFinal_T *const StateFlowFinal_M;

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
 * '<Root>' : 'StateFlowFinal'
 * '<S1>'   : 'StateFlowFinal/Finecorsa Vite'
 * '<S2>'   : 'StateFlowFinal/Finecorsa braccia'
 * '<S3>'   : 'StateFlowFinal/LED Status'
 * '<S4>'   : 'StateFlowFinal/Movimento Braccia'
 * '<S5>'   : 'StateFlowFinal/Out Asse A Braccia'
 * '<S6>'   : 'StateFlowFinal/Out Asse B Braccia'
 * '<S7>'   : 'StateFlowFinal/Out asse A Vite'
 * '<S8>'   : 'StateFlowFinal/Out asse B Vite'
 * '<S9>'   : 'StateFlowFinal/Posizione Braccia '
 * '<S10>'  : 'StateFlowFinal/Posizione Vite'
 * '<S11>'  : 'StateFlowFinal/Sistema Vite'
 * '<S12>'  : 'StateFlowFinal/Sistema_braccia'
 * '<S13>'  : 'StateFlowFinal/State flow robot'
 * '<S14>'  : 'StateFlowFinal/Status'
 * '<S15>'  : 'StateFlowFinal/LED Status/MATLAB Function'
 * '<S16>'  : 'StateFlowFinal/LED Status/MATLAB Function1'
 * '<S17>'  : 'StateFlowFinal/LED Status/MATLAB Function2'
 * '<S18>'  : 'StateFlowFinal/Movimento Braccia/Cinematica D'
 * '<S19>'  : 'StateFlowFinal/Movimento Braccia/Cinematica I'
 * '<S20>'  : 'StateFlowFinal/Movimento Braccia/Clock reale'
 * '<S21>'  : 'StateFlowFinal/Movimento Braccia/MATLAB Function'
 * '<S22>'  : 'StateFlowFinal/Movimento Braccia/Quadrato1'
 * '<S23>'  : 'StateFlowFinal/Out Asse A Braccia/Fungo'
 * '<S24>'  : 'StateFlowFinal/Out Asse A Braccia/MATLAB Function'
 * '<S25>'  : 'StateFlowFinal/Out Asse A Braccia/Ramp'
 * '<S26>'  : 'StateFlowFinal/Out Asse A Braccia/Fungo/MATLAB Function'
 * '<S27>'  : 'StateFlowFinal/Out Asse B Braccia/Fungo'
 * '<S28>'  : 'StateFlowFinal/Out Asse B Braccia/MATLAB Function'
 * '<S29>'  : 'StateFlowFinal/Out Asse B Braccia/Ramp'
 * '<S30>'  : 'StateFlowFinal/Out Asse B Braccia/Fungo/MATLAB Function'
 * '<S31>'  : 'StateFlowFinal/Out asse A Vite/Fungo'
 * '<S32>'  : 'StateFlowFinal/Out asse A Vite/Fungo/MATLAB Function'
 * '<S33>'  : 'StateFlowFinal/Out asse B Vite/Fungo'
 * '<S34>'  : 'StateFlowFinal/Out asse B Vite/Fungo/MATLAB Function'
 * '<S35>'  : 'StateFlowFinal/Sistema Vite/Actual A'
 * '<S36>'  : 'StateFlowFinal/Sistema Vite/Asse B'
 * '<S37>'  : 'StateFlowFinal/Sistema Vite/Asse B conv'
 * '<S38>'  : 'StateFlowFinal/Sistema Vite/Clock reale'
 * '<S39>'  : 'StateFlowFinal/Sistema Vite/Coppia VIte A finale'
 * '<S40>'  : 'StateFlowFinal/Sistema Vite/Discrete Derivative B'
 * '<S41>'  : 'StateFlowFinal/Sistema Vite/Rifermento Asse A Vite'
 * '<S42>'  : 'StateFlowFinal/Sistema Vite/Velocita vite '
 * '<S43>'  : 'StateFlowFinal/Sistema Vite/Actual A/Discrete Derivative A'
 * '<S44>'  : 'StateFlowFinal/Sistema Vite/Actual A/Posizione attuale Vite A'
 * '<S45>'  : 'StateFlowFinal/Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv'
 * '<S46>'  : 'StateFlowFinal/Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v'
 * '<S47>'  : 'StateFlowFinal/Sistema Vite/Velocita vite /Vel Asse A conv'
 * '<S48>'  : 'StateFlowFinal/Sistema Vite/Velocita vite /Vel Asse B conv'
 * '<S49>'  : 'StateFlowFinal/Sistema_braccia/Cinematica Inversa'
 * '<S50>'  : 'StateFlowFinal/Sistema_braccia/Cinematica Inversa Acc'
 * '<S51>'  : 'StateFlowFinal/Sistema_braccia/Cinematica Inversa vel'
 * '<S52>'  : 'StateFlowFinal/Sistema_braccia/Cinematica diretta'
 * '<S53>'  : 'StateFlowFinal/Sistema_braccia/Cinematica diretta Acc'
 * '<S54>'  : 'StateFlowFinal/Sistema_braccia/Clock reale'
 * '<S55>'  : 'StateFlowFinal/Sistema_braccia/Coppia motrice'
 * '<S56>'  : 'StateFlowFinal/Sistema_braccia/Dinamica Inversa1'
 * '<S57>'  : 'StateFlowFinal/Sistema_braccia/Leggi di moto'
 * '<S58>'  : 'StateFlowFinal/Sistema_braccia/MATLAB Function'
 * '<S59>'  : 'StateFlowFinal/Sistema_braccia/MATLAB Function1'
 * '<S60>'  : 'StateFlowFinal/Sistema_braccia/MATLAB Function2'
 * '<S61>'  : 'StateFlowFinal/Sistema_braccia/MATLAB Function3'
 * '<S62>'  : 'StateFlowFinal/Sistema_braccia/MATLAB Function4'
 * '<S63>'  : 'StateFlowFinal/Sistema_braccia/MATLAB Jin'
 * '<S64>'  : 'StateFlowFinal/Sistema_braccia/Pos iniziali'
 * '<S65>'  : 'StateFlowFinal/Sistema_braccia/Posizioni'
 * '<S66>'  : 'StateFlowFinal/Sistema_braccia/Radians to Degrees'
 * '<S67>'  : 'StateFlowFinal/Sistema_braccia/Radians to Degrees1'
 * '<S68>'  : 'StateFlowFinal/Sistema_braccia/Velocita '
 * '<S69>'  : 'StateFlowFinal/Sistema_braccia/Velocita braccia 1'
 * '<S70>'  : 'StateFlowFinal/Sistema_braccia/XY Graph'
 * '<S71>'  : 'StateFlowFinal/Sistema_braccia/XY Graph1'
 * '<S72>'  : 'StateFlowFinal/Sistema_braccia/XZ Graph'
 * '<S73>'  : 'StateFlowFinal/Sistema_braccia/Leggi di moto/Cerchi Tangenti'
 * '<S74>'  : 'StateFlowFinal/Sistema_braccia/Leggi di moto/Cerchio'
 * '<S75>'  : 'StateFlowFinal/Sistema_braccia/Leggi di moto/Quadrato'
 * '<S76>'  : 'StateFlowFinal/Sistema_braccia/Leggi di moto/g'
 * '<S77>'  : 'StateFlowFinal/Sistema_braccia/Leggi di moto/spirale'
 * '<S78>'  : 'StateFlowFinal/Sistema_braccia/Pos iniziali/Cinematica Inversa2'
 * '<S79>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Asse A conv bracc'
 * '<S80>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Asse B conv brac1'
 * '<S81>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Discrete Derivative B'
 * '<S82>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Discrete Derivative B1'
 * '<S83>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Discrete Derivative B2'
 * '<S84>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Discrete Derivative B3'
 * '<S85>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Discrete Derivative B4'
 * '<S86>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Discrete Derivative B5'
 * '<S87>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter'
 * '<S88>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter1'
 * '<S89>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter2'
 * '<S90>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter/Model'
 * '<S91>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter/Model/A*k(k-1)'
 * '<S92>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S93>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter/Model/C*x(k)'
 * '<S94>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter1/Model'
 * '<S95>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter1/Model/A*k(k-1)'
 * '<S96>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))'
 * '<S97>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter1/Model/C*x(k)'
 * '<S98>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter2/Model'
 * '<S99>'  : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter2/Model/A*k(k-1)'
 * '<S100>' : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))'
 * '<S101>' : 'StateFlowFinal/Sistema_braccia/Posizioni/Second-Order Filter2/Model/C*x(k)'
 * '<S102>' : 'StateFlowFinal/Sistema_braccia/Velocita /Vel Asse A conv'
 * '<S103>' : 'StateFlowFinal/Sistema_braccia/Velocita /Vel Asse B conv'
 * '<S104>' : 'StateFlowFinal/Sistema_braccia/Velocita braccia 1/Vel Asse A conv'
 * '<S105>' : 'StateFlowFinal/Sistema_braccia/Velocita braccia 1/Vel Asse B conv'
 * '<S106>' : 'StateFlowFinal/State flow robot/Setting'
 * '<S107>' : 'StateFlowFinal/State flow robot/Setting/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_StateFlowFinal_h_ */
