/*
 * StateFlowGUI.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StateFlowGUI".
 *
 * Model version              : 1.703
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Oct 29 15:13:07 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateFlowGUI_h_
#define RTW_HEADER_StateFlowGUI_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef StateFlowGUI_COMMON_INCLUDES_
# define StateFlowGUI_COMMON_INCLUDES_
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
#endif                                 /* StateFlowGUI_COMMON_INCLUDES_ */

#include "StateFlowGUI_types.h"

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
#define rtModel_StateFlowGUI           RT_MODEL_StateFlowGUI_T

/* Definition for use in the target main file */
#define StateFlowGUI_rtModel           RT_MODEL_StateFlowGUI_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S4>/Cinematica Inversa' */
typedef struct {
  real_T theta1;                       /* '<S4>/Cinematica Inversa' */
  real_T theta2;                       /* '<S4>/Cinematica Inversa' */
} B_CinematicaInversa_StateFlow_T;

/* Block signals for system '<S4>/Cinematica Inversa vel' */
typedef struct {
  real_T theta1_p;                     /* '<S4>/Cinematica Inversa vel' */
  real_T theta2_p;                     /* '<S4>/Cinematica Inversa vel' */
} B_CinematicaInversavel_StateF_T;

/* Block signals for system '<S33>/Asse A conv bracc' */
typedef struct {
  real_T pos_B_conv;                   /* '<S33>/Asse A conv bracc' */
} B_AsseAconvbracc_StateFlowGUI_T;

/* Block signals for system '<S34>/Vel Asse A conv' */
typedef struct {
  real_T vel_A_conv;                   /* '<S34>/Vel Asse A conv' */
} B_VelAsseAconv_StateFlowGUI_T;

/* Block signals for system '<S34>/Vel Asse B conv' */
typedef struct {
  real_T vel_B_conv;                   /* '<S34>/Vel Asse B conv' */
} B_VelAsseBconv_StateFlowGUI_T;

/* Block signals for system '<S94>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S94>/MATLAB Function' */
} B_MATLABFunction_StateFlowGUI_T;

/* Block signals for system '<S13>/Asse B' */
typedef struct {
  real_T ldm_pos;                      /* '<S13>/Asse B' */
  real_T ldm_vel;                      /* '<S13>/Asse B' */
} B_AsseB_StateFlowGUI_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Clock;                        /* '<Root>/Clock' */
  real_T convert;                      /* '<S11>/convert' */
  real_T convert10;                    /* '<S11>/convert 10 ' */
  real_T DataTypeConversion6;          /* '<S15>/Data Type Conversion6' */
  real_T DataTypeConversion8;          /* '<S1>/Data Type Conversion8' */
  real_T IntegertoBitConverter[16];    /* '<S1>/Integer to Bit Converter' */
  real_T convert_g;                    /* '<S10>/convert' */
  real_T convert10_d;                  /* '<S10>/convert 10 ' */
  real_T DataTypeConversion8_f;        /* '<S2>/Data Type Conversion8' */
  real_T IntegertoBitConverter_d[16];  /* '<S2>/Integer to Bit Converter' */
  real_T Kp;                           /* '<Root>/Kp' */
  real_T StartHome;                    /* '<Root>/StartHome' */
  real_T StartRobot;                   /* '<Root>/StartRobot' */
  real_T StartWork;                    /* '<Root>/StartWork' */
  real_T Memory;                       /* '<S94>/Memory' */
  real_T Sum12;                        /* '<S33>/Sum12' */
  real_T Sum4;                         /* '<S33>/Sum4' */
  real_T Sum9;                         /* '<S33>/Sum9' */
  real_T Sum7;                         /* '<S33>/Sum7' */
  real_T VelocityB;                    /* '<S35>/Velocity B' */
  real_T VelocityA;                    /* '<S35>/Velocity A' */
  real_T Sum2;                         /* '<S24>/Sum2' */
  real_T MultiportSwitch[6];           /* '<S27>/Multiport Switch' */
  real_T Sum;                          /* '<S4>/Sum' */
  real_T Sum1;                         /* '<S4>/Sum1' */
  real_T VelocityB_f;                  /* '<S34>/Velocity B' */
  real_T VelocityA_o;                  /* '<S34>/Velocity A' */
  real_T Sum7_j[2];                    /* '<S4>/Sum7' */
  real_T Kd[2];                        /* '<S4>/Kd' */
  real_T Sum4_n[2];                    /* '<S4>/Sum4' */
  real_T Product[2];                   /* '<S4>/Product' */
  real_T Sum9_a[2];                    /* '<S4>/Sum9' */
  real_T Memory_d[4];                  /* '<S4>/Memory' */
  real_T Gain1;                        /* '<S4>/Gain1' */
  real_T Switch1;                      /* '<S94>/Switch1' */
  real_T CoppiaAbracciasaturata;       /* '<S6>/Coppia A braccia saturata' */
  real_T DataTypeConversion14;         /* '<S94>/Data Type Conversion14' */
  real_T Memory_g;                     /* '<S98>/Memory' */
  real_T Gain;                         /* '<S4>/Gain' */
  real_T Switch1_l;                    /* '<S98>/Switch1' */
  real_T CoppiaBbracciasaturata;       /* '<S7>/Coppia B braccia saturata' */
  real_T DataTypeConversion14_g;       /* '<S98>/Data Type Conversion14' */
  real_T Memory_n;                     /* '<S102>/Memory' */
  real_T Sum_i;                        /* '<S116>/Sum' */
  real_T Sum3;                         /* '<S13>/Sum3' */
  real_T Sum5;                         /* '<S125>/Sum5' */
  real_T Sum2_b;                       /* '<S119>/Sum2' */
  real_T VelocityA_m;                  /* '<S123>/Velocity A' */
  real_T VelocityB_h;                  /* '<S123>/Velocity B' */
  real_T Switch1_f;                    /* '<S102>/Switch1' */
  real_T CoppiaAvitesaturata;          /* '<S8>/Coppia A vite saturata' */
  real_T DataTypeConversion14_k;       /* '<S102>/Data Type Conversion14' */
  real_T Memory_a;                     /* '<S104>/Memory' */
  real_T Switch1_k;                    /* '<S104>/Switch1' */
  real_T DataTypeConversion14_e;       /* '<S104>/Data Type Conversion14' */
  real_T Sum2_d;                       /* '<S4>/Sum2' */
  real_T Sum3_b;                       /* '<S4>/Sum3' */
  real_T TSamp;                        /* '<S49>/TSamp' */
  real_T Uk1;                          /* '<S49>/UD' */
  real_T Diff;                         /* '<S49>/Diff' */
  real_T Duk;                          /* '<S60>/D*u(k)' */
  real_T x1k;                          /* '<S60>/Delay_x1' */
  real_T C11;                          /* '<S63>/C11' */
  real_T x2k;                          /* '<S60>/Delay_x2' */
  real_T C12;                          /* '<S63>/C12' */
  real_T sum2;                         /* '<S63>/sum2' */
  real_T yk;                           /* '<S60>/C*X(k)+D*u(k)' */
  real_T TSamp_n;                      /* '<S47>/TSamp' */
  real_T Uk1_d;                        /* '<S47>/UD' */
  real_T Diff_i;                       /* '<S47>/Diff' */
  real_T A11;                          /* '<S61>/A11' */
  real_T A12;                          /* '<S61>/A12' */
  real_T A21;                          /* '<S61>/A21' */
  real_T A22;                          /* '<S61>/A22' */
  real_T sum2_n;                       /* '<S61>/sum2' */
  real_T sum3;                         /* '<S61>/sum3' */
  real_T B11;                          /* '<S62>/B11' */
  real_T x1k1;                         /* '<S60>/A*x1(k) + B*u1(k) ' */
  real_T B21;                          /* '<S62>/B21' */
  real_T x2k1;                         /* '<S60>/A*x2(k) + B*u2(k)' */
  real_T Duk_h;                        /* '<S56>/D*u(k)' */
  real_T x1k_a;                        /* '<S56>/Delay_x1' */
  real_T C11_h;                        /* '<S59>/C11' */
  real_T x2k_g;                        /* '<S56>/Delay_x2' */
  real_T C12_e;                        /* '<S59>/C12' */
  real_T sum2_k;                       /* '<S59>/sum2' */
  real_T yk_i;                         /* '<S56>/C*X(k)+D*u(k)' */
  real_T TSamp_h;                      /* '<S48>/TSamp' */
  real_T Uk1_b;                        /* '<S48>/UD' */
  real_T Diff_d;                       /* '<S48>/Diff' */
  real_T TSamp_nd;                     /* '<S50>/TSamp' */
  real_T Uk1_l;                        /* '<S50>/UD' */
  real_T Diff_n;                       /* '<S50>/Diff' */
  real_T A11_p;                        /* '<S57>/A11' */
  real_T A12_c;                        /* '<S57>/A12' */
  real_T A21_h;                        /* '<S57>/A21' */
  real_T A22_d;                        /* '<S57>/A22' */
  real_T sum2_nk;                      /* '<S57>/sum2' */
  real_T sum3_e;                       /* '<S57>/sum3' */
  real_T B11_k;                        /* '<S58>/B11' */
  real_T x1k1_g;                       /* '<S56>/A*x1(k) + B*u1(k) ' */
  real_T B21_l;                        /* '<S58>/B21' */
  real_T x2k1_n;                       /* '<S56>/A*x2(k) + B*u2(k)' */
  real_T DigitalClock;                 /* '<S33>/Digital Clock' */
  real_T Duk_n;                        /* '<S64>/D*u(k)' */
  real_T x1k_i;                        /* '<S64>/Delay_x1' */
  real_T C11_e;                        /* '<S67>/C11' */
  real_T x2k_d;                        /* '<S64>/Delay_x2' */
  real_T C12_m;                        /* '<S67>/C12' */
  real_T sum2_ka;                      /* '<S67>/sum2' */
  real_T yk_m;                         /* '<S64>/C*X(k)+D*u(k)' */
  real_T TSamp_f;                      /* '<S51>/TSamp' */
  real_T Uk1_j;                        /* '<S51>/UD' */
  real_T Diff_b;                       /* '<S51>/Diff' */
  real_T TSamp_i;                      /* '<S52>/TSamp' */
  real_T Uk1_bl;                       /* '<S52>/UD' */
  real_T Diff_bt;                      /* '<S52>/Diff' */
  real_T A11_h;                        /* '<S65>/A11' */
  real_T A12_g;                        /* '<S65>/A12' */
  real_T A21_p;                        /* '<S65>/A21' */
  real_T A22_j;                        /* '<S65>/A22' */
  real_T sum2_e;                       /* '<S65>/sum2' */
  real_T sum3_b;                       /* '<S65>/sum3' */
  real_T B11_d;                        /* '<S66>/B11' */
  real_T x1k1_h;                       /* '<S64>/A*x1(k) + B*u1(k) ' */
  real_T B21_h;                        /* '<S66>/B21' */
  real_T x2k1_h;                       /* '<S64>/A*x2(k) + B*u2(k)' */
  real_T Memory_h;                     /* '<S5>/Memory' */
  real_T Memory1;                      /* '<S5>/Memory1' */
  real_T Sum12_a;                      /* '<S5>/Sum12' */
  real_T Sum2_f;                       /* '<S5>/Sum2' */
  real_T Sum4_nw;                      /* '<S5>/Sum4' */
  real_T Sum3_l;                       /* '<S5>/Sum3' */
  real_T Sum2_bi;                      /* '<S77>/Sum2' */
  real_T Sum_e;                        /* '<S5>/Sum' */
  real_T Sum1_g;                       /* '<S5>/Sum1' */
  real_T VelocityB_p;                  /* '<S84>/Velocity B' */
  real_T Sum6;                         /* '<S5>/Sum6' */
  real_T Coppiatheta1vel;              /* '<S5>/Coppia theta 1 vel' */
  real_T VelocityA_a;                  /* '<S84>/Velocity A' */
  real_T Sum17;                        /* '<S5>/Sum17' */
  real_T Coppiatheta2vel;              /* '<S5>/Coppia theta 2 vel' */
  real_T Sum5_g;                       /* '<S5>/Sum5' */
  real_T DerivativeGain;               /* '<S80>/Derivative Gain' */
  real_T Filter;                       /* '<S80>/Filter' */
  real_T SumD;                         /* '<S80>/SumD' */
  real_T FilterCoefficient;            /* '<S80>/Filter Coefficient' */
  real_T IntegralGain;                 /* '<S80>/Integral Gain' */
  real_T Integrator;                   /* '<S80>/Integrator' */
  real_T ProportionalGain;             /* '<S80>/Proportional Gain' */
  real_T Sum_h;                        /* '<S80>/Sum' */
  real_T Sum14;                        /* '<S5>/Sum14' */
  real_T DerivativeGain_b;             /* '<S81>/Derivative Gain' */
  real_T Filter_d;                     /* '<S81>/Filter' */
  real_T SumD_e;                       /* '<S81>/SumD' */
  real_T FilterCoefficient_g;          /* '<S81>/Filter Coefficient' */
  real_T IntegralGain_f;               /* '<S81>/Integral Gain' */
  real_T Integrator_d;                 /* '<S81>/Integrator' */
  real_T ProportionalGain_p;           /* '<S81>/Proportional Gain' */
  real_T Sum_n;                        /* '<S81>/Sum' */
  real_T Sum7_l;                       /* '<S5>/Sum7' */
  real_T Sum8;                         /* '<S5>/Sum8' */
  real_T selettore;                    /* '<S5>/selettore' */
  real_T TSamp_d;                      /* '<S121>/TSamp' */
  real_T Uk1_h;                        /* '<S121>/UD' */
  real_T Diff_c;                       /* '<S121>/Diff' */
  real_T TSamp_c;                      /* '<S124>/TSamp' */
  real_T Uk1_f;                        /* '<S124>/UD' */
  real_T Diff_iq;                      /* '<S124>/Diff' */
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
  real_T Kp_n;                         /* '<Root>/State flow robot' */
  real_T Hv;                           /* '<Root>/State flow robot' */
  real_T Hb;                           /* '<Root>/State flow robot' */
  real_T Enable;                       /* '<Root>/State flow robot' */
  real_T FineLavorazione;              /* '<Root>/State flow robot' */
  real_T SFunction_o17;                /* '<Root>/State flow robot' */
  real_T SFunction_o18;                /* '<Root>/State flow robot' */
  real_T SFunction_o19;                /* '<Root>/State flow robot' */
  real_T SFunction_o20;                /* '<Root>/State flow robot' */
  real_T SFunction_o21;                /* '<Root>/State flow robot' */
  real_T SFunction_o22;                /* '<Root>/State flow robot' */
  real_T SFunction_o23;                /* '<Root>/State flow robot' */
  real_T SFunction_o24;                /* '<Root>/State flow robot' */
  real_T fc;                           /* '<Root>/State flow robot' */
  real_T fcA;                          /* '<Root>/State flow robot' */
  real_T fcB;                          /* '<Root>/State flow robot' */
  real_T SFunction_o28;                /* '<Root>/State flow robot' */
  real_T SFunction_o29;                /* '<Root>/State flow robot' */
  real_T SFunction_o30;                /* '<Root>/State flow robot' */
  real_T SFunction_o31;                /* '<Root>/State flow robot' */
  real_T SFunction_o32;                /* '<Root>/State flow robot' */
  real_T SFunction_o33;                /* '<Root>/State flow robot' */
  real_T CA;                           /* '<S130>/MATLAB Function' */
  real_T CB;                           /* '<S130>/MATLAB Function' */
  real_T CH;                           /* '<S130>/MATLAB Function' */
  real_T vel_B_conv;                   /* '<S123>/Vel Asse B conv' */
  real_T vel_A_conv;                   /* '<S123>/Vel Asse A conv' */
  real_T pos_B_conv;                   /* '<S13>/Asse B conv' */
  real_T pos_B_conv_v;                 /* '<S125>/Asse B conv v' */
  real_T pos_A_conv;                   /* '<S125>/Asse A conv' */
  real_T Switch2;                      /* '<S9>/Switch2' */
  real_T Sum6_f;                       /* '<S13>/Sum6' */
  real_T Gain4;                        /* '<S13>/Gain4' */
  real_T Sum4_i;                       /* '<S13>/Sum4' */
  real_T Gain2;                        /* '<S13>/Gain2' */
  real_T Sum7_i;                       /* '<S13>/Sum7' */
  real_T Switch;                       /* '<S8>/Switch' */
  real_T Sum8_p;                       /* '<S13>/Sum8' */
  real_T Gain6;                        /* '<S120>/Gain6' */
  real_T Sum1_o;                       /* '<S13>/Sum1' */
  real_T Gain_h;                       /* '<S120>/Gain' */
  real_T Sum9_d;                       /* '<S120>/Sum9' */
  real_T Gain_a;                       /* '<S8>/Gain' */
  real_T Switch1_i;                    /* '<S7>/Switch1' */
  real_T Switch1_c;                    /* '<S6>/Switch1' */
  real_T x0;                           /* '<S5>/Cinematica Inversa1' */
  real_T y0;                           /* '<S5>/Cinematica Inversa1' */
  real_T pos_A_conv_e;                 /* '<S5>/Asse A conv brac' */
  real_T vel_B_conv_a;                 /* '<S35>/Vel Asse B conv' */
  real_T vel_A_conv_b;                 /* '<S35>/Vel Asse A conv' */
  real_T x0_l;                         /* '<S32>/Cinematica Inversa2' */
  real_T y0_p;                         /* '<S32>/Cinematica Inversa2' */
  real_T x_p;                          /* '<S4>/MATLAB Jin' */
  real_T y_p;                          /* '<S4>/MATLAB Jin' */
  real_T xp;                           /* '<S4>/MATLAB Function2' */
  real_T yp;                           /* '<S4>/MATLAB Function2' */
  real_T xs;                           /* '<S27>/spirale' */
  real_T ys;                           /* '<S27>/spirale' */
  real_T xs_p;                         /* '<S27>/spirale' */
  real_T ys_p;                         /* '<S27>/spirale' */
  real_T xs_pp;                        /* '<S27>/spirale' */
  real_T ys_pp;                        /* '<S27>/spirale' */
  real_T x;                            /* '<S27>/g' */
  real_T y;                            /* '<S27>/g' */
  real_T x_p_l;                        /* '<S27>/g' */
  real_T y_p_o;                        /* '<S27>/g' */
  real_T x_pp;                         /* '<S27>/g' */
  real_T y_pp;                         /* '<S27>/g' */
  real_T xq;                           /* '<S27>/Quadrato' */
  real_T yq;                           /* '<S27>/Quadrato' */
  real_T xq_p;                         /* '<S27>/Quadrato' */
  real_T yq_p;                         /* '<S27>/Quadrato' */
  real_T xq_pp;                        /* '<S27>/Quadrato' */
  real_T yq_pp;                        /* '<S27>/Quadrato' */
  real_T xc;                           /* '<S27>/Cerchio' */
  real_T yc;                           /* '<S27>/Cerchio' */
  real_T xc_p;                         /* '<S27>/Cerchio' */
  real_T yc_p;                         /* '<S27>/Cerchio' */
  real_T xc_pp;                        /* '<S27>/Cerchio' */
  real_T yc_pp;                        /* '<S27>/Cerchio' */
  real_T xct;                          /* '<S27>/Cerchi Tangenti' */
  real_T yct;                          /* '<S27>/Cerchi Tangenti' */
  real_T xct_p;                        /* '<S27>/Cerchi Tangenti' */
  real_T yct_p;                        /* '<S27>/Cerchi Tangenti' */
  real_T xct_pp;                       /* '<S27>/Cerchi Tangenti' */
  real_T yct_pp;                       /* '<S27>/Cerchi Tangenti' */
  real_T C1;                           /* '<S4>/Dinamica Inversa1' */
  real_T C2;                           /* '<S4>/Dinamica Inversa1' */
  real_T Mm[4];                        /* '<S4>/Dinamica Inversa1' */
  real_T K[4];                         /* '<S4>/Dinamica Inversa1' */
  real_T Mpi[4];                       /* '<S4>/Dinamica Inversa1' */
  real_T Cm1;                          /* '<S4>/Coppia motrice' */
  real_T Cm2;                          /* '<S4>/Coppia motrice' */
  real_T x_pp_f;                       /* '<S4>/Cinematica diretta Acc' */
  real_T y_pp_l;                       /* '<S4>/Cinematica diretta Acc' */
  real_T x_n;                          /* '<S4>/Cinematica diretta' */
  real_T y_k;                          /* '<S4>/Cinematica diretta' */
  real_T theta1_pp;                    /* '<S4>/Cinematica Inversa Acc' */
  real_T theta2_pp;                    /* '<S4>/Cinematica Inversa Acc' */
  real_T y_f;                          /* '<S3>/MATLAB Function2' */
  real_T y_b;                          /* '<S3>/MATLAB Function1' */
  real_T y_i;                          /* '<S3>/MATLAB Function' */
  int32_T EtherCATInit[6];             /* '<Root>/EtherCAT Init ' */
  int32_T MotoreviteA;                 /* '<S11>/Motore vite A' */
  int32_T MotoreviteB;                 /* '<S11>/Motore vite B' */
  int32_T MotorebracciaA;              /* '<S10>/Motore braccia A' */
  int32_T MotorebracciaB;              /* '<S10>/Motore braccia B' */
  int32_T EtherCATPDOReceive15;        /* '<S35>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14;        /* '<S35>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_d;      /* '<S34>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14_b;      /* '<S34>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive14_l;      /* '<S123>/EtherCAT PDO Receive14' */
  int32_T EtherCATPDOReceive15_e;      /* '<S123>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive15_l;      /* '<S84>/EtherCAT PDO Receive15' */
  int32_T EtherCATPDOReceive14_c;      /* '<S84>/EtherCAT PDO Receive14' */
  int16_T DataTypeConversion3;         /* '<S6>/Data Type Conversion3' */
  int16_T DataTypeConversion4;         /* '<S7>/Data Type Conversion4' */
  int16_T ConvertA;                    /* '<S8>/Convert A' */
  int16_T ConvertB;                    /* '<S9>/Convert B' */
  uint16_T StatusWord;                 /* '<S15>/Status Word' */
  uint16_T EtherCATPDOReceive16;       /* '<S1>/EtherCAT PDO Receive16' */
  uint16_T EtherCATPDOReceive16_d;     /* '<S2>/EtherCAT PDO Receive16' */
  int8_T DataTypeConversion7;          /* '<Root>/Data Type Conversion7' */
  int8_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  int8_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  int8_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  boolean_T DataTypeConversion25;      /* '<S3>/Data Type Conversion25' */
  boolean_T DataTypeConversion24;      /* '<S3>/Data Type Conversion24' */
  boolean_T DataTypeConversion26;      /* '<S3>/Data Type Conversion26' */
  boolean_T EtherCATPDOReceive9;       /* '<S94>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_h;     /* '<S98>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_hd;    /* '<S102>/EtherCAT PDO Receive9' */
  boolean_T EtherCATPDOReceive9_d;     /* '<S104>/EtherCAT PDO Receive9' */
  B_AsseB_StateFlowGUI_T sf_RifermentoAsseAVite;/* '<S13>/Rifermento Asse A Vite' */
  B_AsseB_StateFlowGUI_T sf_AsseB;     /* '<S13>/Asse B' */
  B_MATLABFunction_StateFlowGUI_T sf_MATLABFunction_i;/* '<S104>/MATLAB Function' */
  B_MATLABFunction_StateFlowGUI_T sf_MATLABFunction_f;/* '<S102>/MATLAB Function' */
  B_MATLABFunction_StateFlowGUI_T sf_MATLABFunction_a;/* '<S98>/MATLAB Function' */
  B_MATLABFunction_StateFlowGUI_T sf_MATLABFunction_e;/* '<S94>/MATLAB Function' */
  B_VelAsseBconv_StateFlowGUI_T sf_VelAsseBconv_o;/* '<S84>/Vel Asse B conv' */
  B_VelAsseAconv_StateFlowGUI_T sf_VelAsseAconv_o;/* '<S84>/Vel Asse A conv' */
  B_CinematicaInversavel_StateF_T sf_CinematicaInversavel_l;/* '<S5>/Cinematica Inversa vel' */
  B_CinematicaInversa_StateFlow_T sf_CinematicaInversa_a;/* '<S5>/Cinematica Inversa' */
  B_AsseAconvbracc_StateFlowGUI_T sf_AsseBconvbrac1_f;/* '<S5>/Asse B conv brac1' */
  B_VelAsseBconv_StateFlowGUI_T sf_VelAsseBconv_d;/* '<S34>/Vel Asse B conv' */
  B_VelAsseAconv_StateFlowGUI_T sf_VelAsseAconv_a;/* '<S34>/Vel Asse A conv' */
  B_AsseAconvbracc_StateFlowGUI_T sf_AsseBconvbrac1;/* '<S33>/Asse B conv brac1' */
  B_AsseAconvbracc_StateFlowGUI_T sf_AsseAconvbracc;/* '<S33>/Asse A conv bracc' */
  B_CinematicaInversavel_StateF_T sf_CinematicaInversavel;/* '<S4>/Cinematica Inversa vel' */
  B_CinematicaInversa_StateFlow_T sf_CinematicaInversa;/* '<S4>/Cinematica Inversa' */
} B_StateFlowGUI_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S49>/UD' */
  real_T Delay_x1_DSTATE;              /* '<S60>/Delay_x1' */
  real_T Delay_x2_DSTATE;              /* '<S60>/Delay_x2' */
  real_T UD_DSTATE_a;                  /* '<S47>/UD' */
  real_T Delay_x1_DSTATE_g;            /* '<S56>/Delay_x1' */
  real_T Delay_x2_DSTATE_m;            /* '<S56>/Delay_x2' */
  real_T UD_DSTATE_j;                  /* '<S48>/UD' */
  real_T UD_DSTATE_f;                  /* '<S50>/UD' */
  real_T Delay_x1_DSTATE_k;            /* '<S64>/Delay_x1' */
  real_T Delay_x2_DSTATE_k;            /* '<S64>/Delay_x2' */
  real_T UD_DSTATE_g;                  /* '<S51>/UD' */
  real_T UD_DSTATE_k;                  /* '<S52>/UD' */
  real_T Filter_DSTATE;                /* '<S80>/Filter' */
  real_T Integrator_DSTATE;            /* '<S80>/Integrator' */
  real_T Filter_DSTATE_d;              /* '<S81>/Filter' */
  real_T Integrator_DSTATE_a;          /* '<S81>/Integrator' */
  real_T UD_DSTATE_m;                  /* '<S121>/UD' */
  real_T UD_DSTATE_fc;                 /* '<S124>/UD' */
  real_T Memory_PreviousInput;         /* '<S94>/Memory' */
  real_T Memory_PreviousInput_h[4];    /* '<S4>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S98>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S102>/Memory' */
  real_T Memory_PreviousInput_hp;      /* '<S104>/Memory' */
  real_T Memory_PreviousInput_e;       /* '<S5>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S5>/Memory1' */
  real_T conv;                         /* '<Root>/State flow robot' */
  real_T OffA_0;                       /* '<Root>/State flow robot' */
  real_T OffB_0;                       /* '<Root>/State flow robot' */
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
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ps;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_pt;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ex;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_i;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedF_ck;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ou;   /* synthesized block */

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
  } HiddenToAsyncQueue_InsertedF_bc;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_l3;   /* synthesized block */

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
  } HiddenToAsyncQueue_Inserted_ptw;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_gp;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_ib;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_d4;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/State flow robot' */
  int_T EtherCATPDOTransmit5_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 5' */
  int_T EtherCATPDOTransmit6_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 6' */
  int_T EtherCATPDOTransmit3_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 3' */
  int_T EtherCATPDOTransmit4_IWORK[7]; /* '<Root>/EtherCAT PDO Transmit 4' */
  int_T MotoreviteA_IWORK[7];          /* '<S11>/Motore vite A' */
  int_T MotoreviteB_IWORK[7];          /* '<S11>/Motore vite B' */
  int_T StatusWord_IWORK[7];           /* '<S15>/Status Word' */
  int_T EtherCATPDOReceive16_IWORK[7]; /* '<S1>/EtherCAT PDO Receive16' */
  int_T MotorebracciaA_IWORK[7];       /* '<S10>/Motore braccia A' */
  int_T MotorebracciaB_IWORK[7];       /* '<S10>/Motore braccia B' */
  int_T EtherCATPDOReceive16_IWORK_l[7];/* '<S2>/EtherCAT PDO Receive16' */
  int_T LuceBianca_IWORK[7];           /* '<S3>/Luce Bianca' */
  int_T LuceRossa_IWORK[7];            /* '<S3>/Luce Rossa ' */
  int_T LuceVerde_IWORK[7];            /* '<S3>/Luce Verde' */
  int_T EtherCATPDOReceive15_IWORK[7]; /* '<S35>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK[7]; /* '<S35>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_o[7];/* '<S34>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK_p[7];/* '<S34>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOTransmit1_IWORK[7]; /* '<S6>/EtherCAT PDO Transmit 1' */
  int_T EtherCATPDOReceive9_IWORK[7];  /* '<S94>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOTransmit7_IWORK[7]; /* '<S7>/EtherCAT PDO Transmit 7' */
  int_T EtherCATPDOReceive9_IWORK_n[7];/* '<S98>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive14_IWORK_j[7];/* '<S123>/EtherCAT PDO Receive14' */
  int_T EtherCATPDOReceive15_IWORK_e[7];/* '<S123>/EtherCAT PDO Receive15' */
  int_T Torquesend_IWORK[7];           /* '<S8>/Torque send' */
  int_T EtherCATPDOReceive9_IWORK_g[7];/* '<S102>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOTransmit2_IWORK[7]; /* '<S9>/EtherCAT PDO Transmit 2' */
  int_T EtherCATPDOReceive9_IWORK_l[7];/* '<S104>/EtherCAT PDO Receive9' */
  int_T EtherCATPDOReceive15_IWORK_m[7];/* '<S84>/EtherCAT PDO Receive15' */
  int_T EtherCATPDOReceive14_IWORK_jl[7];/* '<S84>/EtherCAT PDO Receive14' */
  uint16_T temporalCounter_i1;         /* '<Root>/State flow robot' */
  int8_T Homing_SubsysRanBC;           /* '<S14>/Homing' */
  uint8_T is_active_c15_StateFlowGUI;  /* '<Root>/State flow robot' */
  uint8_T is_c15_StateFlowGUI;         /* '<Root>/State flow robot' */
} DW_StateFlowGUI_T;

/* Backward compatible GRT Identifiers */
#define rtB                            StateFlowGUI_B
#define BlockIO                        B_StateFlowGUI_T
#define rtP                            StateFlowGUI_P
#define Parameters                     P_StateFlowGUI_T
#define rtDWork                        StateFlowGUI_DW
#define D_Work                         DW_StateFlowGUI_T

/* Parameters (auto storage) */
struct P_StateFlowGUI_T_ {
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S80>/Derivative Gain'
                                        */
  real_T PIDController2_D;             /* Mask Parameter: PIDController2_D
                                        * Referenced by: '<S81>/Derivative Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S80>/Integral Gain'
                                        */
  real_T PIDController2_I;             /* Mask Parameter: PIDController2_I
                                        * Referenced by: '<S81>/Integral Gain'
                                        */
  real_T DiscreteDerivativeB2_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB2_ICPrevScal
                                          * Referenced by: '<S49>/UD'
                                          */
  real_T DiscreteDerivativeB_ICPrevScale;/* Mask Parameter: DiscreteDerivativeB_ICPrevScale
                                          * Referenced by: '<S47>/UD'
                                          */
  real_T DiscreteDerivativeB1_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB1_ICPrevScal
                                          * Referenced by: '<S48>/UD'
                                          */
  real_T DiscreteDerivativeB3_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB3_ICPrevScal
                                          * Referenced by: '<S50>/UD'
                                          */
  real_T DiscreteDerivativeB4_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB4_ICPrevScal
                                          * Referenced by: '<S51>/UD'
                                          */
  real_T DiscreteDerivativeB5_ICPrevScal;/* Mask Parameter: DiscreteDerivativeB5_ICPrevScal
                                          * Referenced by: '<S52>/UD'
                                          */
  real_T DiscreteDerivativeB_ICPrevSca_f;/* Mask Parameter: DiscreteDerivativeB_ICPrevSca_f
                                          * Referenced by: '<S121>/UD'
                                          */
  real_T DiscreteDerivativeA_ICPrevScale;/* Mask Parameter: DiscreteDerivativeA_ICPrevScale
                                          * Referenced by: '<S124>/UD'
                                          */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S80>/Filter Coefficient'
                                        */
  real_T PIDController2_N;             /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S81>/Filter Coefficient'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S80>/Proportional Gain'
                                        */
  real_T PIDController2_P;             /* Mask Parameter: PIDController2_P
                                        * Referenced by: '<S81>/Proportional Gain'
                                        */
  real_T Switch1_Threshold;            /* Expression: 3
                                        * Referenced by: '<S6>/Switch1'
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 3
                                        * Referenced by: '<S7>/Switch1'
                                        */
  real_T Gain6_Gain;                   /* Expression: 7.5*1000/0.36
                                        * Referenced by: '<S120>/Gain6'
                                        */
  real_T Gain_Gain;                    /* Expression: 300*1000/0.36
                                        * Referenced by: '<S120>/Gain'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Switch_Threshold;             /* Expression: 3
                                        * Referenced by: '<S8>/Switch'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.1*1000/0.36
                                        * Referenced by: '<S13>/Gain4'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2*1000/0.36
                                        * Referenced by: '<S13>/Gain2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 6
                                        * Referenced by: '<S9>/Switch2'
                                        */
  real_T CA_Y0;                        /* Computed Parameter: CA_Y0
                                        * Referenced by: '<S130>/CA'
                                        */
  real_T CB_Y0;                        /* Computed Parameter: CB_Y0
                                        * Referenced by: '<S130>/CB'
                                        */
  real_T CH_Y0;                        /* Computed Parameter: CH_Y0
                                        * Referenced by: '<S130>/CH'
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
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P1[47];           /* Computed Parameter: MotoreviteA_P1
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P2_Size[2];       /* Computed Parameter: MotoreviteA_P2_Size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P2;               /* Expression: sig_offset
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P3_Size[2];       /* Computed Parameter: MotoreviteA_P3_Size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P3;               /* Expression: sig_type
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P4_Size[2];       /* Computed Parameter: MotoreviteA_P4_Size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P4;               /* Expression: type_size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P5_Size[2];       /* Computed Parameter: MotoreviteA_P5_Size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P5;               /* Expression: sig_dim
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P6_Size[2];       /* Computed Parameter: MotoreviteA_P6_Size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P6;               /* Expression: device_id
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P7_Size[2];       /* Computed Parameter: MotoreviteA_P7_Size
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteA_P7;               /* Expression: sample_time
                                        * Referenced by: '<S11>/Motore vite A'
                                        */
  real_T MotoreviteB_P1_Size[2];       /* Computed Parameter: MotoreviteB_P1_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P1[47];           /* Computed Parameter: MotoreviteB_P1
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P2_Size[2];       /* Computed Parameter: MotoreviteB_P2_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P2;               /* Expression: sig_offset
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P3_Size[2];       /* Computed Parameter: MotoreviteB_P3_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P3;               /* Expression: sig_type
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P4_Size[2];       /* Computed Parameter: MotoreviteB_P4_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P4;               /* Expression: type_size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P5_Size[2];       /* Computed Parameter: MotoreviteB_P5_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P5;               /* Expression: sig_dim
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P6_Size[2];       /* Computed Parameter: MotoreviteB_P6_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P6;               /* Expression: device_id
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P7_Size[2];       /* Computed Parameter: MotoreviteB_P7_Size
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T MotoreviteB_P7;               /* Expression: sample_time
                                        * Referenced by: '<S11>/Motore vite B'
                                        */
  real_T StatusWord_P1_Size[2];        /* Computed Parameter: StatusWord_P1_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P1[37];            /* Computed Parameter: StatusWord_P1
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P2_Size[2];        /* Computed Parameter: StatusWord_P2_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P2;                /* Expression: sig_offset
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P3_Size[2];        /* Computed Parameter: StatusWord_P3_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P3;                /* Expression: sig_type
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P4_Size[2];        /* Computed Parameter: StatusWord_P4_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P4;                /* Expression: type_size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P5_Size[2];        /* Computed Parameter: StatusWord_P5_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P5;                /* Expression: sig_dim
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P6_Size[2];        /* Computed Parameter: StatusWord_P6_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P6;                /* Expression: device_id
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P7_Size[2];        /* Computed Parameter: StatusWord_P7_Size
                                        * Referenced by: '<S15>/Status Word'
                                        */
  real_T StatusWord_P7;                /* Expression: sample_time
                                        * Referenced by: '<S15>/Status Word'
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
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P1[47];        /* Computed Parameter: MotorebracciaA_P1
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P2_Size[2];    /* Computed Parameter: MotorebracciaA_P2_Size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P2;            /* Expression: sig_offset
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P3_Size[2];    /* Computed Parameter: MotorebracciaA_P3_Size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P3;            /* Expression: sig_type
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P4_Size[2];    /* Computed Parameter: MotorebracciaA_P4_Size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P4;            /* Expression: type_size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P5_Size[2];    /* Computed Parameter: MotorebracciaA_P5_Size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P5;            /* Expression: sig_dim
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P6_Size[2];    /* Computed Parameter: MotorebracciaA_P6_Size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P6;            /* Expression: device_id
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P7_Size[2];    /* Computed Parameter: MotorebracciaA_P7_Size
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaA_P7;            /* Expression: sample_time
                                        * Referenced by: '<S10>/Motore braccia A'
                                        */
  real_T MotorebracciaB_P1_Size[2];    /* Computed Parameter: MotorebracciaB_P1_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P1[47];        /* Computed Parameter: MotorebracciaB_P1
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P2_Size[2];    /* Computed Parameter: MotorebracciaB_P2_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P2;            /* Expression: sig_offset
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P3_Size[2];    /* Computed Parameter: MotorebracciaB_P3_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P3;            /* Expression: sig_type
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P4_Size[2];    /* Computed Parameter: MotorebracciaB_P4_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P4;            /* Expression: type_size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P5_Size[2];    /* Computed Parameter: MotorebracciaB_P5_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P5;            /* Expression: sig_dim
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P6_Size[2];    /* Computed Parameter: MotorebracciaB_P6_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P6;            /* Expression: device_id
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P7_Size[2];    /* Computed Parameter: MotorebracciaB_P7_Size
                                        * Referenced by: '<S10>/Motore braccia B'
                                        */
  real_T MotorebracciaB_P7;            /* Expression: sample_time
                                        * Referenced by: '<S10>/Motore braccia B'
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
  real_T Kp_Value;                     /* Expression: 3000
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
                                        * Referenced by: '<S94>/Constant'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S94>/Memory'
                                        */
  real_T Constant4_Value;              /* Expression: deg2rad(100)
                                        * Referenced by: '<S33>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: deg2rad(80)
                                        * Referenced by: '<S33>/Constant5'
                                        */
  real_T EtherCATPDOReceive15_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P1[47];  /* Computed Parameter: EtherCATPDOReceive15_P1
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P3;      /* Expression: sig_type
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P4;      /* Expression: type_size
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P6;      /* Expression: device_id
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                          */
  real_T EtherCATPDOReceive15_P7;      /* Expression: sample_time
                                        * Referenced by: '<S35>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive14_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P1[47];  /* Computed Parameter: EtherCATPDOReceive14_P1
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P3;      /* Expression: sig_type
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P4;      /* Expression: type_size
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P6;      /* Expression: device_id
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size
                                          * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                          */
  real_T EtherCATPDOReceive14_P7;      /* Expression: sample_time
                                        * Referenced by: '<S35>/EtherCAT PDO Receive14'
                                        */
  real_T Constant_Value_b;             /* Expression: deg2rad(100)
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: deg2rad(80)
                                        * Referenced by: '<S32>/Constant1'
                                        */
  real_T selettore_Value;              /* Expression: 2
                                        * Referenced by: '<S4>/selettore'
                                        */
  real_T PeriodoQ_Value;               /* Expression: 10
                                        * Referenced by: '<S27>/Periodo Q'
                                        */
  real_T AlzataQ_Value;                /* Expression: 0.10
                                        * Referenced by: '<S27>/Alzata Q'
                                        */
  real_T PeriodoC_Value;               /* Expression: 5
                                        * Referenced by: '<S27>/Periodo C'
                                        */
  real_T AlzataC_Value;                /* Expression: 0.05
                                        * Referenced by: '<S27>/Alzata C'
                                        */
  real_T AlzataC1_Value;               /* Expression: 0.015
                                        * Referenced by: '<S27>/Alzata C1'
                                        */
  real_T PeriodoC1_Value;              /* Expression: 32
                                        * Referenced by: '<S27>/Periodo C1'
                                        */
  real_T Constant3_Value;              /* Expression: 0.125
                                        * Referenced by: '<S27>/Constant3'
                                        */
  real_T Periodo_Value;                /* Expression: 20
                                        * Referenced by: '<S27>/Periodo'
                                        */
  real_T Rmax_Value;                   /* Expression: 0.05
                                        * Referenced by: '<S27>/Rmax'
                                        */
  real_T Ngiri_Value;                  /* Expression: 4
                                        * Referenced by: '<S27>/N giri'
                                        */
  real_T Rmin_Value;                   /* Expression: 0.02
                                        * Referenced by: '<S27>/Rmin'
                                        */
  real_T Tempospostiniziale_Value;     /* Expression: 0.5
                                        * Referenced by: '<S27>/Tempo spost. iniziale'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_j
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_a[47];/* Computed Parameter: EtherCATPDOReceive15_P1_a
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_n[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_n
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_l;    /* Expression: sig_offset
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_j
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_a;    /* Expression: sig_type
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_c[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_c
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_f;    /* Expression: type_size
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_k
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_c;    /* Expression: sig_dim
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_j
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_g;    /* Expression: device_id
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_f[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_f
                                            * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_m;    /* Expression: sample_time
                                        * Referenced by: '<S34>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_c
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_k[47];/* Computed Parameter: EtherCATPDOReceive14_P1_k
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_m[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_m
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_i;    /* Expression: sig_offset
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_h
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_a;    /* Expression: sig_type
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_c
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_e;    /* Expression: type_size
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_c
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_j;    /* Expression: sig_dim
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_h
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_m;    /* Expression: device_id
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_p
                                            * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_m;    /* Expression: sample_time
                                        * Referenced by: '<S34>/EtherCAT PDO Receive14'
                                        */
  real_T Kd_Gain;                      /* Expression: 5
                                        * Referenced by: '<S4>/Kd'
                                        */
  real_T Memory_X0_f[4];               /* Expression: [10,10;10,10]
                                        * Referenced by: '<S4>/Memory'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1000/0.3
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T CoppiaAbracciasaturata_UpperSat;/* Expression: 2500
                                          * Referenced by: '<S6>/Coppia A braccia saturata'
                                          */
  real_T CoppiaAbracciasaturata_LowerSat;/* Expression: -2500
                                          * Referenced by: '<S6>/Coppia A braccia saturata'
                                          */
  real_T EtherCATPDOTransmit1_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P1_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P1[38];  /* Computed Parameter: EtherCATPDOTransmit1_P1
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P2_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P3_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P3;      /* Expression: sig_type
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P4_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P4;      /* Expression: type_size
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P5_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P6_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P6;      /* Expression: device_id
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOTransmit1_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit1_P7_Size
                                          * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                          */
  real_T EtherCATPDOTransmit1_P7;      /* Expression: sample_time
                                        * Referenced by: '<S6>/EtherCAT PDO Transmit 1'
                                        */
  real_T EtherCATPDOReceive9_P1_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P1[23];   /* Computed Parameter: EtherCATPDOReceive9_P1
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P2;       /* Expression: sig_offset
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P3;       /* Expression: sig_type
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P4;       /* Expression: type_size
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P5;       /* Expression: sig_dim
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P6;       /* Expression: device_id
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size
                                         * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                         */
  real_T EtherCATPDOReceive9_P7;       /* Expression: sample_time
                                        * Referenced by: '<S94>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S98>/Constant'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * Referenced by: '<S98>/Memory'
                                        */
  real_T Gain_Gain_jp;                 /* Expression: 1000/0.3
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T CoppiaBbracciasaturata_UpperSat;/* Expression: 2500
                                          * Referenced by: '<S7>/Coppia B braccia saturata'
                                          */
  real_T CoppiaBbracciasaturata_LowerSat;/* Expression: -2500
                                          * Referenced by: '<S7>/Coppia B braccia saturata'
                                          */
  real_T EtherCATPDOTransmit7_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P1_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P1[38];  /* Computed Parameter: EtherCATPDOTransmit7_P1
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P2_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P3_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P3;      /* Expression: sig_type
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P4_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P4;      /* Expression: type_size
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P5_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P6_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P6;      /* Expression: device_id
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOTransmit7_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit7_P7_Size
                                          * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                          */
  real_T EtherCATPDOTransmit7_P7;      /* Expression: sample_time
                                        * Referenced by: '<S7>/EtherCAT PDO Transmit 7'
                                        */
  real_T EtherCATPDOReceive9_P1_Size_m[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_m
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_g[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_g
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_i
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_p;     /* Expression: sig_offset
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_g[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_g
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_f;     /* Expression: sig_type
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_e
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_a;     /* Expression: type_size
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_n[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_n
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_d;     /* Expression: sig_dim
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_e[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_e
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_c;     /* Expression: device_id
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_a
                                           * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_a;     /* Expression: sample_time
                                        * Referenced by: '<S98>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S102>/Constant'
                                        */
  real_T Memory_X0_o;                  /* Expression: 0
                                        * Referenced by: '<S102>/Memory'
                                        */
  real_T AlzataA_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata A'
                                        */
  real_T PeriodoA_Value;               /* Expression: 22
                                        * Referenced by: '<Root>/Periodo A'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_o[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_o
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_n[47];/* Computed Parameter: EtherCATPDOReceive14_P1_n
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P2_Size_i[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_i
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P2_g;    /* Expression: sig_offset
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_c
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_n;    /* Expression: sig_type
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_g[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_g
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P4_p;    /* Expression: type_size
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_d[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_d
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_k;    /* Expression: sig_dim
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_j[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_j
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_mb;   /* Expression: device_id
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_c[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_c
                                            * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_g;    /* Expression: sample_time
                                        * Referenced by: '<S123>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_k[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_k
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_l[47];/* Computed Parameter: EtherCATPDOReceive15_P1_l
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_b
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_n;    /* Expression: sig_offset
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_b[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_b
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_i;    /* Expression: sig_type
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_d[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_d
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_j;    /* Expression: type_size
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_l[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_l
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_l;    /* Expression: sig_dim
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_o[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_o
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_f;    /* Expression: device_id
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_g[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_g
                                            * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_l;    /* Expression: sample_time
                                        * Referenced by: '<S123>/EtherCAT PDO Receive15'
                                        */
  real_T CoppiaAvitesaturata_UpperSat; /* Expression: 600
                                        * Referenced by: '<S8>/Coppia A vite saturata'
                                        */
  real_T CoppiaAvitesaturata_LowerSat; /* Expression: -600
                                        * Referenced by: '<S8>/Coppia A vite saturata'
                                        */
  real_T Torquesend_P1_Size[2];        /* Computed Parameter: Torquesend_P1_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P1[38];            /* Computed Parameter: Torquesend_P1
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P2_Size[2];        /* Computed Parameter: Torquesend_P2_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P2;                /* Expression: sig_offset
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P3_Size[2];        /* Computed Parameter: Torquesend_P3_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P3;                /* Expression: sig_type
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P4_Size[2];        /* Computed Parameter: Torquesend_P4_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P4;                /* Expression: type_size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P5_Size[2];        /* Computed Parameter: Torquesend_P5_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P5;                /* Expression: sig_dim
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P6_Size[2];        /* Computed Parameter: Torquesend_P6_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P6;                /* Expression: device_id
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P7_Size[2];        /* Computed Parameter: Torquesend_P7_Size
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T Torquesend_P7;                /* Expression: sample_time
                                        * Referenced by: '<S8>/Torque send'
                                        */
  real_T EtherCATPDOReceive9_P1_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_i
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_i[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_i
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_a
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_m;     /* Expression: sig_offset
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_h[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_h
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_m;     /* Expression: sig_type
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_f[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_f
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_l;     /* Expression: type_size
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_a[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_a
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P5_b;     /* Expression: sig_dim
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_i
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_l;     /* Expression: device_id
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_p[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_p
                                           * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P7_b;     /* Expression: sample_time
                                        * Referenced by: '<S102>/EtherCAT PDO Receive9'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S104>/Constant'
                                        */
  real_T Memory_X0_e;                  /* Expression: 0
                                        * Referenced by: '<S104>/Memory'
                                        */
  real_T AlzataB_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/Alzata B '
                                        */
  real_T PeriodoB_Value;               /* Expression: 22
                                        * Referenced by: '<Root>/Periodo B'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T EtherCATPDOTransmit2_P1_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P1_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P1[38];  /* Computed Parameter: EtherCATPDOTransmit2_P1
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P2_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P2_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P2;      /* Expression: sig_offset
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P3_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P3_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P3;      /* Expression: sig_type
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P4_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P4_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P4;      /* Expression: type_size
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P5_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P5_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P5;      /* Expression: sig_dim
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P6_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P6_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P6;      /* Expression: device_id
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOTransmit2_P7_Size[2];/* Computed Parameter: EtherCATPDOTransmit2_P7_Size
                                          * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                          */
  real_T EtherCATPDOTransmit2_P7;      /* Expression: sample_time
                                        * Referenced by: '<S9>/EtherCAT PDO Transmit 2'
                                        */
  real_T EtherCATPDOReceive9_P1_Size_o[2];/* Computed Parameter: EtherCATPDOReceive9_P1_Size_o
                                           * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P1_n[23]; /* Computed Parameter: EtherCATPDOReceive9_P1_n
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P2_Size_h[2];/* Computed Parameter: EtherCATPDOReceive9_P2_Size_h
                                           * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P2_d;     /* Expression: sig_offset
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P3_Size_i[2];/* Computed Parameter: EtherCATPDOReceive9_P3_Size_i
                                           * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P3_fe;    /* Expression: sig_type
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P4_Size_l[2];/* Computed Parameter: EtherCATPDOReceive9_P4_Size_l
                                           * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P4_ag;    /* Expression: type_size
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P5_Size_aa[2];/* Computed Parameter: EtherCATPDOReceive9_P5_Size_aa
                                            * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P5_h;     /* Expression: sig_dim
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P6_Size_m[2];/* Computed Parameter: EtherCATPDOReceive9_P6_Size_m
                                           * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                           */
  real_T EtherCATPDOReceive9_P6_h;     /* Expression: device_id
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T EtherCATPDOReceive9_P7_Size_pq[2];/* Computed Parameter: EtherCATPDOReceive9_P7_Size_pq
                                            * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                            */
  real_T EtherCATPDOReceive9_P7_l;     /* Expression: sample_time
                                        * Referenced by: '<S104>/EtherCAT PDO Receive9'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S49>/TSamp'
                                        */
  real_T Duk_Gain;                     /* Expression: sps.D
                                        * Referenced by: '<S60>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition;    /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S60>/Delay_x1'
                                        */
  real_T C11_Gain;                     /* Expression: sps.C11
                                        * Referenced by: '<S63>/C11'
                                        */
  real_T Delay_x2_InitialCondition;    /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S60>/Delay_x2'
                                        */
  real_T C12_Gain;                     /* Expression: sps.C12
                                        * Referenced by: '<S63>/C12'
                                        */
  real_T TSamp_WtEt_e;                 /* Computed Parameter: TSamp_WtEt_e
                                        * Referenced by: '<S47>/TSamp'
                                        */
  real_T A11_Gain;                     /* Expression: sps.A11
                                        * Referenced by: '<S61>/A11'
                                        */
  real_T A12_Gain;                     /* Expression: sps.A12
                                        * Referenced by: '<S61>/A12'
                                        */
  real_T A21_Gain;                     /* Expression: sps.A21
                                        * Referenced by: '<S61>/A21'
                                        */
  real_T A22_Gain;                     /* Expression: sps.A22
                                        * Referenced by: '<S61>/A22'
                                        */
  real_T B11_Gain;                     /* Expression: sps.B11
                                        * Referenced by: '<S62>/B11'
                                        */
  real_T B21_Gain;                     /* Expression: sps.B21
                                        * Referenced by: '<S62>/B21'
                                        */
  real_T Duk_Gain_h;                   /* Expression: sps.D
                                        * Referenced by: '<S56>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition_l;  /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S56>/Delay_x1'
                                        */
  real_T C11_Gain_n;                   /* Expression: sps.C11
                                        * Referenced by: '<S59>/C11'
                                        */
  real_T Delay_x2_InitialCondition_l;  /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S56>/Delay_x2'
                                        */
  real_T C12_Gain_d;                   /* Expression: sps.C12
                                        * Referenced by: '<S59>/C12'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S48>/TSamp'
                                        */
  real_T TSamp_WtEt_gh;                /* Computed Parameter: TSamp_WtEt_gh
                                        * Referenced by: '<S50>/TSamp'
                                        */
  real_T A11_Gain_e;                   /* Expression: sps.A11
                                        * Referenced by: '<S57>/A11'
                                        */
  real_T A12_Gain_a;                   /* Expression: sps.A12
                                        * Referenced by: '<S57>/A12'
                                        */
  real_T A21_Gain_m;                   /* Expression: sps.A21
                                        * Referenced by: '<S57>/A21'
                                        */
  real_T A22_Gain_g;                   /* Expression: sps.A22
                                        * Referenced by: '<S57>/A22'
                                        */
  real_T B11_Gain_f;                   /* Expression: sps.B11
                                        * Referenced by: '<S58>/B11'
                                        */
  real_T B21_Gain_p;                   /* Expression: sps.B21
                                        * Referenced by: '<S58>/B21'
                                        */
  real_T Duk_Gain_g;                   /* Expression: sps.D
                                        * Referenced by: '<S64>/D*u(k)'
                                        */
  real_T Delay_x1_InitialCondition_n;  /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S64>/Delay_x1'
                                        */
  real_T C11_Gain_g;                   /* Expression: sps.C11
                                        * Referenced by: '<S67>/C11'
                                        */
  real_T Delay_x2_InitialCondition_e;  /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S64>/Delay_x2'
                                        */
  real_T C12_Gain_d1;                  /* Expression: sps.C12
                                        * Referenced by: '<S67>/C12'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S51>/TSamp'
                                        */
  real_T TSamp_WtEt_p;                 /* Computed Parameter: TSamp_WtEt_p
                                        * Referenced by: '<S52>/TSamp'
                                        */
  real_T A11_Gain_h;                   /* Expression: sps.A11
                                        * Referenced by: '<S65>/A11'
                                        */
  real_T A12_Gain_a3;                  /* Expression: sps.A12
                                        * Referenced by: '<S65>/A12'
                                        */
  real_T A21_Gain_f;                   /* Expression: sps.A21
                                        * Referenced by: '<S65>/A21'
                                        */
  real_T A22_Gain_d;                   /* Expression: sps.A22
                                        * Referenced by: '<S65>/A22'
                                        */
  real_T B11_Gain_n;                   /* Expression: sps.B11
                                        * Referenced by: '<S66>/B11'
                                        */
  real_T B21_Gain_l;                   /* Expression: sps.B21
                                        * Referenced by: '<S66>/B21'
                                        */
  real_T Memory_X0_d;                  /* Expression: 0
                                        * Referenced by: '<S5>/Memory'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<S5>/Memory1'
                                        */
  real_T Constant_Value_eg;            /* Expression: deg2rad(110)
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: deg2rad(70)
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T EtherCATPDOReceive15_P1_Size_h[2];/* Computed Parameter: EtherCATPDOReceive15_P1_Size_h
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P1_f[47];/* Computed Parameter: EtherCATPDOReceive15_P1_f
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P2_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P2_Size_j
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P2_c;    /* Expression: sig_offset
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P3_Size_o[2];/* Computed Parameter: EtherCATPDOReceive15_P3_Size_o
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P3_p;    /* Expression: sig_type
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P4_Size_m[2];/* Computed Parameter: EtherCATPDOReceive15_P4_Size_m
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P4_i;    /* Expression: type_size
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P5_Size_j[2];/* Computed Parameter: EtherCATPDOReceive15_P5_Size_j
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P5_h;    /* Expression: sig_dim
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P6_Size_c[2];/* Computed Parameter: EtherCATPDOReceive15_P6_Size_c
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P6_h;    /* Expression: device_id
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T EtherCATPDOReceive15_P7_Size_n[2];/* Computed Parameter: EtherCATPDOReceive15_P7_Size_n
                                            * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                            */
  real_T EtherCATPDOReceive15_P7_lo;   /* Expression: sample_time
                                        * Referenced by: '<S84>/EtherCAT PDO Receive15'
                                        */
  real_T Coppiatheta1vel_Gain;         /* Expression: 0
                                        * Referenced by: '<S5>/Coppia theta 1 vel'
                                        */
  real_T EtherCATPDOReceive14_P1_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P1_Size_h
                                            * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P1_kn[47];/* Computed Parameter: EtherCATPDOReceive14_P1_kn
                                         * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                         */
  real_T EtherCATPDOReceive14_P2_Size_m4[2];/* Computed Parameter: EtherCATPDOReceive14_P2_Size_m4
                                             * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                             */
  real_T EtherCATPDOReceive14_P2_k;    /* Expression: sig_offset
                                        * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P3_Size_e[2];/* Computed Parameter: EtherCATPDOReceive14_P3_Size_e
                                            * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P3_m;    /* Expression: sig_type
                                        * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P4_Size_g0[2];/* Computed Parameter: EtherCATPDOReceive14_P4_Size_g0
                                             * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                             */
  real_T EtherCATPDOReceive14_P4_p1;   /* Expression: type_size
                                        * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P5_Size_h[2];/* Computed Parameter: EtherCATPDOReceive14_P5_Size_h
                                            * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P5_i;    /* Expression: sig_dim
                                        * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P6_Size_g[2];/* Computed Parameter: EtherCATPDOReceive14_P6_Size_g
                                            * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P6_d;    /* Expression: device_id
                                        * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                        */
  real_T EtherCATPDOReceive14_P7_Size_f[2];/* Computed Parameter: EtherCATPDOReceive14_P7_Size_f
                                            * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                            */
  real_T EtherCATPDOReceive14_P7_gg;   /* Expression: sample_time
                                        * Referenced by: '<S84>/EtherCAT PDO Receive14'
                                        */
  real_T Coppiatheta2vel_Gain;         /* Expression: 0
                                        * Referenced by: '<S5>/Coppia theta 2 vel'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S80>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S80>/Filter'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S80>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S80>/Integrator'
                                        */
  real_T Filter_gainval_m;             /* Computed Parameter: Filter_gainval_m
                                        * Referenced by: '<S81>/Filter'
                                        */
  real_T Filter_IC_b;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S81>/Filter'
                                        */
  real_T Integrator_gainval_o;         /* Computed Parameter: Integrator_gainval_o
                                        * Referenced by: '<S81>/Integrator'
                                        */
  real_T Integrator_IC_f;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S81>/Integrator'
                                        */
  real_T selettore_Value_d;            /* Expression: 5
                                        * Referenced by: '<S5>/selettore'
                                        */
  real_T TSamp_WtEt_l;                 /* Computed Parameter: TSamp_WtEt_l
                                        * Referenced by: '<S121>/TSamp'
                                        */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S124>/TSamp'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_StateFlowGUI_T {
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
    SimStruct childSFunctions[30];
    SimStruct *childSFunctionPtrs[30];
    struct _ssBlkInfo2 blkInfo2[30];
    struct _ssSFcnModelMethods2 methods2[30];
    struct _ssSFcnModelMethods3 methods3[30];
    struct _ssSFcnModelMethods4 methods4[30];
    struct _ssStatesInfo2 statesInfo2[30];
    ssPeriodicStatesInfo periodicStatesInfo[30];
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

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn29;
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
extern P_StateFlowGUI_T StateFlowGUI_P;

/* Block signals (auto storage) */
extern B_StateFlowGUI_T StateFlowGUI_B;

/* Block states (auto storage) */
extern DW_StateFlowGUI_T StateFlowGUI_DW;

/*====================*
 * External functions *
 *====================*/
extern StateFlowGUI_rtModel *StateFlowGUI(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  StateFlowGUI_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_StateFlowGUI_T *const StateFlowGUI_M;

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
 * '<Root>' : 'StateFlowGUI'
 * '<S1>'   : 'StateFlowGUI/Finecorsa Vite'
 * '<S2>'   : 'StateFlowGUI/Finecorsa braccia'
 * '<S3>'   : 'StateFlowGUI/LED Status'
 * '<S4>'   : 'StateFlowGUI/Movimento'
 * '<S5>'   : 'StateFlowGUI/Movimento Braccia'
 * '<S6>'   : 'StateFlowGUI/Out Asse A Braccia'
 * '<S7>'   : 'StateFlowGUI/Out Asse B Braccia'
 * '<S8>'   : 'StateFlowGUI/Out asse A Vite'
 * '<S9>'   : 'StateFlowGUI/Out asse B Vite'
 * '<S10>'  : 'StateFlowGUI/Posizione Braccia '
 * '<S11>'  : 'StateFlowGUI/Posizione Vite'
 * '<S12>'  : 'StateFlowGUI/Sistema Braccia Linea'
 * '<S13>'  : 'StateFlowGUI/Sistema Vite'
 * '<S14>'  : 'StateFlowGUI/State flow robot'
 * '<S15>'  : 'StateFlowGUI/Status'
 * '<S16>'  : 'StateFlowGUI/LED Status/MATLAB Function'
 * '<S17>'  : 'StateFlowGUI/LED Status/MATLAB Function1'
 * '<S18>'  : 'StateFlowGUI/LED Status/MATLAB Function2'
 * '<S19>'  : 'StateFlowGUI/Movimento/Cinematica Inversa'
 * '<S20>'  : 'StateFlowGUI/Movimento/Cinematica Inversa Acc'
 * '<S21>'  : 'StateFlowGUI/Movimento/Cinematica Inversa vel'
 * '<S22>'  : 'StateFlowGUI/Movimento/Cinematica diretta'
 * '<S23>'  : 'StateFlowGUI/Movimento/Cinematica diretta Acc'
 * '<S24>'  : 'StateFlowGUI/Movimento/Clock reale'
 * '<S25>'  : 'StateFlowGUI/Movimento/Coppia motrice'
 * '<S26>'  : 'StateFlowGUI/Movimento/Dinamica Inversa1'
 * '<S27>'  : 'StateFlowGUI/Movimento/Leggi di moto'
 * '<S28>'  : 'StateFlowGUI/Movimento/MATLAB Function'
 * '<S29>'  : 'StateFlowGUI/Movimento/MATLAB Function1'
 * '<S30>'  : 'StateFlowGUI/Movimento/MATLAB Function2'
 * '<S31>'  : 'StateFlowGUI/Movimento/MATLAB Jin'
 * '<S32>'  : 'StateFlowGUI/Movimento/Pos iniziali'
 * '<S33>'  : 'StateFlowGUI/Movimento/Posizioni'
 * '<S34>'  : 'StateFlowGUI/Movimento/Velocita '
 * '<S35>'  : 'StateFlowGUI/Movimento/Velocita braccia 1'
 * '<S36>'  : 'StateFlowGUI/Movimento/XY Graph'
 * '<S37>'  : 'StateFlowGUI/Movimento/XY Graph1'
 * '<S38>'  : 'StateFlowGUI/Movimento/XZ Graph'
 * '<S39>'  : 'StateFlowGUI/Movimento/Leggi di moto/Cerchi Tangenti'
 * '<S40>'  : 'StateFlowGUI/Movimento/Leggi di moto/Cerchio'
 * '<S41>'  : 'StateFlowGUI/Movimento/Leggi di moto/Quadrato'
 * '<S42>'  : 'StateFlowGUI/Movimento/Leggi di moto/g'
 * '<S43>'  : 'StateFlowGUI/Movimento/Leggi di moto/spirale'
 * '<S44>'  : 'StateFlowGUI/Movimento/Pos iniziali/Cinematica Inversa2'
 * '<S45>'  : 'StateFlowGUI/Movimento/Posizioni/Asse A conv bracc'
 * '<S46>'  : 'StateFlowGUI/Movimento/Posizioni/Asse B conv brac1'
 * '<S47>'  : 'StateFlowGUI/Movimento/Posizioni/Discrete Derivative B'
 * '<S48>'  : 'StateFlowGUI/Movimento/Posizioni/Discrete Derivative B1'
 * '<S49>'  : 'StateFlowGUI/Movimento/Posizioni/Discrete Derivative B2'
 * '<S50>'  : 'StateFlowGUI/Movimento/Posizioni/Discrete Derivative B3'
 * '<S51>'  : 'StateFlowGUI/Movimento/Posizioni/Discrete Derivative B4'
 * '<S52>'  : 'StateFlowGUI/Movimento/Posizioni/Discrete Derivative B5'
 * '<S53>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter'
 * '<S54>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter1'
 * '<S55>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter2'
 * '<S56>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter/Model'
 * '<S57>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter/Model/A*k(k-1)'
 * '<S58>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S59>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter/Model/C*x(k)'
 * '<S60>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter1/Model'
 * '<S61>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter1/Model/A*k(k-1)'
 * '<S62>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter1/Model/B*(u(k)+u(k-1))'
 * '<S63>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter1/Model/C*x(k)'
 * '<S64>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter2/Model'
 * '<S65>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter2/Model/A*k(k-1)'
 * '<S66>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter2/Model/B*(u(k)+u(k-1))'
 * '<S67>'  : 'StateFlowGUI/Movimento/Posizioni/Second-Order Filter2/Model/C*x(k)'
 * '<S68>'  : 'StateFlowGUI/Movimento/Velocita /Vel Asse A conv'
 * '<S69>'  : 'StateFlowGUI/Movimento/Velocita /Vel Asse B conv'
 * '<S70>'  : 'StateFlowGUI/Movimento/Velocita braccia 1/Vel Asse A conv'
 * '<S71>'  : 'StateFlowGUI/Movimento/Velocita braccia 1/Vel Asse B conv'
 * '<S72>'  : 'StateFlowGUI/Movimento Braccia/Asse A conv brac'
 * '<S73>'  : 'StateFlowGUI/Movimento Braccia/Asse B conv brac1'
 * '<S74>'  : 'StateFlowGUI/Movimento Braccia/Cinematica Inversa'
 * '<S75>'  : 'StateFlowGUI/Movimento Braccia/Cinematica Inversa vel'
 * '<S76>'  : 'StateFlowGUI/Movimento Braccia/Cinematica Inversa1'
 * '<S77>'  : 'StateFlowGUI/Movimento Braccia/Clock reale'
 * '<S78>'  : 'StateFlowGUI/Movimento Braccia/MATLAB Function'
 * '<S79>'  : 'StateFlowGUI/Movimento Braccia/MATLAB Function1'
 * '<S80>'  : 'StateFlowGUI/Movimento Braccia/PID Controller1'
 * '<S81>'  : 'StateFlowGUI/Movimento Braccia/PID Controller2'
 * '<S82>'  : 'StateFlowGUI/Movimento Braccia/Quadrato1'
 * '<S83>'  : 'StateFlowGUI/Movimento Braccia/Subsystem'
 * '<S84>'  : 'StateFlowGUI/Movimento Braccia/Velocita vite '
 * '<S85>'  : 'StateFlowGUI/Movimento Braccia/XY Graph'
 * '<S86>'  : 'StateFlowGUI/Movimento Braccia/XZ Graph'
 * '<S87>'  : 'StateFlowGUI/Movimento Braccia/Subsystem/Cerchi Tangenti'
 * '<S88>'  : 'StateFlowGUI/Movimento Braccia/Subsystem/Cerchio'
 * '<S89>'  : 'StateFlowGUI/Movimento Braccia/Subsystem/Quadrato'
 * '<S90>'  : 'StateFlowGUI/Movimento Braccia/Subsystem/g'
 * '<S91>'  : 'StateFlowGUI/Movimento Braccia/Subsystem/spirale'
 * '<S92>'  : 'StateFlowGUI/Movimento Braccia/Velocita vite /Vel Asse A conv'
 * '<S93>'  : 'StateFlowGUI/Movimento Braccia/Velocita vite /Vel Asse B conv'
 * '<S94>'  : 'StateFlowGUI/Out Asse A Braccia/Fungo'
 * '<S95>'  : 'StateFlowGUI/Out Asse A Braccia/MATLAB Function'
 * '<S96>'  : 'StateFlowGUI/Out Asse A Braccia/Ramp'
 * '<S97>'  : 'StateFlowGUI/Out Asse A Braccia/Fungo/MATLAB Function'
 * '<S98>'  : 'StateFlowGUI/Out Asse B Braccia/Fungo'
 * '<S99>'  : 'StateFlowGUI/Out Asse B Braccia/MATLAB Function'
 * '<S100>' : 'StateFlowGUI/Out Asse B Braccia/Ramp'
 * '<S101>' : 'StateFlowGUI/Out Asse B Braccia/Fungo/MATLAB Function'
 * '<S102>' : 'StateFlowGUI/Out asse A Vite/Fungo'
 * '<S103>' : 'StateFlowGUI/Out asse A Vite/Fungo/MATLAB Function'
 * '<S104>' : 'StateFlowGUI/Out asse B Vite/Fungo'
 * '<S105>' : 'StateFlowGUI/Out asse B Vite/Fungo/MATLAB Function'
 * '<S106>' : 'StateFlowGUI/Sistema Braccia Linea/Asse A conv bracc2'
 * '<S107>' : 'StateFlowGUI/Sistema Braccia Linea/Asse B conv brac1'
 * '<S108>' : 'StateFlowGUI/Sistema Braccia Linea/Cinematica Inversa'
 * '<S109>' : 'StateFlowGUI/Sistema Braccia Linea/Cinematica Inversa vel'
 * '<S110>' : 'StateFlowGUI/Sistema Braccia Linea/Cinematica Inversa1'
 * '<S111>' : 'StateFlowGUI/Sistema Braccia Linea/Velocita vite '
 * '<S112>' : 'StateFlowGUI/Sistema Braccia Linea/x'
 * '<S113>' : 'StateFlowGUI/Sistema Braccia Linea/y'
 * '<S114>' : 'StateFlowGUI/Sistema Braccia Linea/Velocita vite /Vel Asse A conv'
 * '<S115>' : 'StateFlowGUI/Sistema Braccia Linea/Velocita vite /Vel Asse B conv'
 * '<S116>' : 'StateFlowGUI/Sistema Vite/Actual A'
 * '<S117>' : 'StateFlowGUI/Sistema Vite/Asse B'
 * '<S118>' : 'StateFlowGUI/Sistema Vite/Asse B conv'
 * '<S119>' : 'StateFlowGUI/Sistema Vite/Clock reale'
 * '<S120>' : 'StateFlowGUI/Sistema Vite/Coppia VIte A finale'
 * '<S121>' : 'StateFlowGUI/Sistema Vite/Discrete Derivative B'
 * '<S122>' : 'StateFlowGUI/Sistema Vite/Rifermento Asse A Vite'
 * '<S123>' : 'StateFlowGUI/Sistema Vite/Velocita vite '
 * '<S124>' : 'StateFlowGUI/Sistema Vite/Actual A/Discrete Derivative A'
 * '<S125>' : 'StateFlowGUI/Sistema Vite/Actual A/Posizione attuale Vite A'
 * '<S126>' : 'StateFlowGUI/Sistema Vite/Actual A/Posizione attuale Vite A/Asse A conv'
 * '<S127>' : 'StateFlowGUI/Sistema Vite/Actual A/Posizione attuale Vite A/Asse B conv v'
 * '<S128>' : 'StateFlowGUI/Sistema Vite/Velocita vite /Vel Asse A conv'
 * '<S129>' : 'StateFlowGUI/Sistema Vite/Velocita vite /Vel Asse B conv'
 * '<S130>' : 'StateFlowGUI/State flow robot/Homing'
 * '<S131>' : 'StateFlowGUI/State flow robot/Mov'
 * '<S132>' : 'StateFlowGUI/State flow robot/Mov1'
 * '<S133>' : 'StateFlowGUI/State flow robot/Homing/MATLAB Function'
 * '<S134>' : 'StateFlowGUI/State flow robot/Mov/Asse A conv bracc2'
 * '<S135>' : 'StateFlowGUI/State flow robot/Mov/Asse B conv brac'
 * '<S136>' : 'StateFlowGUI/State flow robot/Mov/Cinematica Inversa'
 * '<S137>' : 'StateFlowGUI/State flow robot/Mov/Cinematica Inversa vel'
 * '<S138>' : 'StateFlowGUI/State flow robot/Mov/Cinematica Inversa1'
 * '<S139>' : 'StateFlowGUI/State flow robot/Mov/x'
 * '<S140>' : 'StateFlowGUI/State flow robot/Mov/y'
 * '<S141>' : 'StateFlowGUI/State flow robot/Mov1/Asse A conv bracc'
 * '<S142>' : 'StateFlowGUI/State flow robot/Mov1/Asse A conv bracc1'
 * '<S143>' : 'StateFlowGUI/State flow robot/Mov1/Clock reale'
 * '<S144>' : 'StateFlowGUI/State flow robot/Mov1/Ldm theta1'
 * '<S145>' : 'StateFlowGUI/State flow robot/Mov1/Ldm theta2'
 */
#endif                                 /* RTW_HEADER_StateFlowGUI_h_ */
