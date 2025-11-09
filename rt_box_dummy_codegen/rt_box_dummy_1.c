/*
 * C-Script file for: rt_box_dummy/C-Script1
 * Generated with   : PLECS 4.8.6
 * Generated on     : 11 Oct 2024 18:55:15
 */
typedef double real_t;
#define REAL_MAX DBL_MAX
#define REAL_MIN DBL_MIN
#define REAL_EPSILON DBL_EPSILON
#include <stdint.h>

int x;
int y;
struct CScriptStruct
{
   int numInputTerminals;
   int numOutputTerminals;
   int* numInputSignals;
   int* numOutputSignals;
   int numContStates;
   int numDiscStates;
   int numZCSignals;
   int numSampleTimes;
   int numParameters;
   int isMajorTimeStep;
   double time;
   const double ***inputs;
   double ***outputs;
   double *contStates;
   double *contDerivs;
   double *discStates;
   double *zCSignals;
   const int *paramNumDims;
   const int **paramDims;
   const int *paramNumElements;
   const double **paramRealData;
   const char **paramStringData;
   const char * const *sampleHits;
   const double *sampleTimePeriods;
   const double *sampleTimeOffsets;
   const double * const *inputSampleTimePeriods;
   const double * const *inputSampleTimeOffsets;
   double *nextSampleHit;
   const char** errorStatus;
   const char** warningStatus;
   const char** rangeErrorMsg;
   int* rangeErrorLine;
   void (*writeCustomStateDouble)(void*, double);
   double (*readCustomStateDouble)(void*);
   void (*writeCustomStateInt)(void*, int);
   void (*writeCustomStateData)(void*, const void*, int);
   void (*readCustomStateData)(void*, void*, int);
};
#define NumInputs cScriptStruct->numInputSignals[0]
#define NumOutputs cScriptStruct->numOutputSignals[0]
#define Input(signalIdx) (*cScriptStruct->inputs[0][signalIdx])
#define Output(signalIdx) (*cScriptStruct->outputs[0][signalIdx])
#define NumInputTerminals cScriptStruct->numInputTerminals
#define NumOutputTerminals cScriptStruct->numOutputTerminals
#define NumInputSignals(terminalIdx) cScriptStruct->numInputSignals[ \
      terminalIdx]
#define NumOutputSignals(terminalIdx) cScriptStruct->numOutputSignals[ \
      terminalIdx]
#define InputSignal(terminalIdx, \
                    signalIdx) (*cScriptStruct->inputs[terminalIdx][signalIdx])
#define OutputSignal(terminalIdx, \
                     signalIdx) (*cScriptStruct->outputs[terminalIdx][ \
                                    signalIdx])
#define NumContStates cScriptStruct->numContStates
#define NumDiscStates cScriptStruct->numDiscStates
#define NumZCSignals cScriptStruct->numZCSignals
#define NumParameters cScriptStruct->numParameters
#define NumSampleTimes cScriptStruct->numSampleTimes
#define IsMajorStep cScriptStruct->isMajorTimeStep
#define CurrentTime cScriptStruct->time
#define NextSampleHit (*cScriptStruct->nextSampleHit)
#define SetErrorMessage(string) { *cScriptStruct->errorStatus=(string); }
#define SetWarningMessage(string)
#define ContState(idx) cScriptStruct->contStates[idx]
#define ContDeriv(idx) cScriptStruct->contDerivs[idx]
#define DiscState(idx) cScriptStruct->discStates[idx]
#define ZCSignal(idx) cScriptStruct->zCSignals[idx]
#define IsSampleHit(idx) (*cScriptStruct->sampleHits[idx])
#define SampleTimePeriod(idx) cScriptStruct->sampleTimePeriods[idx]
#define SampleTimeOffset(idx) cScriptStruct->sampleTimeOffsets[idx]
#define InputSampleTimePeriod(terminalIdx, \
                              signalIdx) cScriptStruct->inputSampleTimePeriods \
   [terminalIdx][signalIdx]
#define InputSampleTimeOffset(terminalIdx, \
                              signalIdx) cScriptStruct->inputSampleTimeOffsets \
   [terminalIdx][signalIdx]
#define ParamNumDims(idx) cScriptStruct->paramNumDims[idx]
#define ParamDim(pIdx, dIdx) cScriptStruct->paramDims[pIdx][dIdx]
#define ParamRealData(pIdx, dIdx) cScriptStruct->paramRealData[pIdx][dIdx]
#define ParamStringData(pIdx) cScriptStruct->paramStringData[pIdx]

void rt_box_dummy_1_cScriptStart(const struct CScriptStruct *cScriptStruct)
{
}

void rt_box_dummy_1_cScriptOutput(const struct CScriptStruct *cScriptStruct)
{
   OutputSignal(x,y) = (uint16_t)(InputSignal(x,y)) >> 8;
}

void rt_box_dummy_1_cScriptUpdate(const struct CScriptStruct *cScriptStruct)
{
}

void rt_box_dummy_1_cScriptDerivative(
                                      const struct CScriptStruct *cScriptStruct)
{
}

void rt_box_dummy_1_cScriptTerminate(const struct CScriptStruct *cScriptStruct)
{
}
