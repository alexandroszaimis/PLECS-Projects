/*
 * C-Script file for: rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script
 * Generated with   : PLECS 4.8.6
 * Generated on     : 11 Oct 2024 18:55:15
 */
typedef double real_t;
#define REAL_MAX DBL_MAX
#define REAL_MIN DBL_MIN
#define REAL_EPSILON DBL_EPSILON
#include        <math.h>

#define v_ab                    Input(0)
#define v_bc                    Input(1)
#define w_r                     Input(2)
#define cos_th          Input(3)
#define sin_th          Input(4)

#define i_d                     ContState(0)
#define i_q                     ContState(1)
#define pi_d                    ContDeriv(0)
#define pi_q                    ContDeriv(1)

#define yi_d                    Output(0)
#define yi_q                    Output(1)
#define ylambda_d       Output(2)
#define ylambda_q       Output(3)
#define T_e                     Output(4)

#define pi                      3.14159265358979323846

static double r, L_d, L_q, L_d_inv, L_q_inv, lambda_m, p, lambda_d, lambda_q;

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

void rt_box_dummy_0_cScriptStart(const struct CScriptStruct *cScriptStruct)
{
   double theta_r0, i_a0, i_b0, i_c0, cos_0, cos_n, cos_p, sin_0, sin_n,
          sin_p;

   int ParIdx = 0;
   if (NumParameters != 6)
   {
      SetErrorMessage("Number of parameters does not match.");
      return;
   }

   r                               = ParamRealData(ParIdx++, 0);
   L_d                     = ParamRealData(ParIdx, 0);
   L_q                     = ParamRealData(ParIdx++, 1);
   lambda_m                = ParamRealData(ParIdx++, 0);
   p                               = ParamRealData(ParIdx++, 0);
   theta_r0                = ParamRealData(ParIdx++, 0);
   i_a0                    = ParamRealData(ParIdx, 0);
   i_b0                    = ParamRealData(ParIdx, 1);
   i_c0                    = -i_a0 - i_b0;

   cos_0 = cos(theta_r0);
   cos_n = cos(theta_r0-2./3.*pi);
   cos_p = cos(theta_r0+2./3.*pi);
   sin_0 = sin(theta_r0);
   sin_n = sin(theta_r0-2./3.*pi);
   sin_p = sin(theta_r0+2./3.*pi);

   i_d = 2./3.*(i_a0*cos_0 + i_b0*cos_n + i_c0*cos_p);
   i_q = -2./3.*(i_a0*sin_0 + i_b0*sin_n + i_c0*sin_p);

   L_d_inv = 1./L_d;
   L_q_inv = 1./L_q;
}

void rt_box_dummy_0_cScriptOutput(const struct CScriptStruct *cScriptStruct)
{
   yi_d = i_d;
   yi_q = i_q;

   lambda_d = L_d*i_d + lambda_m;
   lambda_q = L_q*i_q;

   T_e = 3./2.*p*(i_q*lambda_d-i_d*lambda_q);

   ylambda_d = lambda_d;
   ylambda_q = lambda_q;
}

void rt_box_dummy_0_cScriptUpdate(const struct CScriptStruct *cScriptStruct)
{
}

void rt_box_dummy_0_cScriptDerivative(
                                      const struct CScriptStruct *cScriptStruct)
{
   double v_d = 2./3.*v_ab*cos_th + 1./3.*v_bc*(cos_th+sqrt(3.)*sin_th);
   double v_q = -2./3.*v_ab*sin_th - 1./3.*v_bc*(sin_th-sqrt(3.)*cos_th);

   pi_d = L_d_inv * (
                     -r * i_d
                     + w_r * lambda_q
                     + v_d
                     );

   pi_q = L_q_inv * (
                     -r * i_q
                     - w_r * lambda_d
                     + v_q
                     );

}

void rt_box_dummy_0_cScriptTerminate(const struct CScriptStruct *cScriptStruct)
{
}
