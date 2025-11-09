/*
 * Implementation file for: rt_box_dummy
 * Generated with         : PLECS 4.8.6
 *                          PLECS RT Box 1 3.0.5
 * Generated on           : 11 Oct 2024 18:55:15
 */
#include "rt_box_dummy.h"
#ifndef PLECS_HEADER_rt_box_dummy_h_
#error The wrong header file "rt_box_dummy.h" was included. Please check
#error your include path to see whether this file name conflicts with the
#error name of another header file.
#endif /* PLECS_HEADER_rt_box_dummy_h_ */
#if defined(__GNUC__) && (__GNUC__ > 4)
#   define _ALIGNMENT 16
#   define _RESTRICT __restrict
#   define _ALIGN __attribute__((aligned(_ALIGNMENT)))
#   if defined(__clang__)
#      if __has_builtin(__builtin_assume_aligned)
#         define _ASSUME_ALIGNED(a) __builtin_assume_aligned(a, _ALIGNMENT)
#      else
#         define _ASSUME_ALIGNED(a) a
#      endif
#   else
#      define _ASSUME_ALIGNED(a) __builtin_assume_aligned(a, _ALIGNMENT)
#   endif
#else
#   ifndef _RESTRICT
#      define _RESTRICT
#   endif
#   ifndef _ALIGN
#      define _ALIGN
#   endif
#   ifndef _ASSUME_ALIGNED
#      define _ASSUME_ALIGNED(a) a
#   endif
#endif
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include "plexim/DigitalIn.h"
#include "plexim/SPI.h"
#include "plexim/AnalogOut.h"
#include "plexim/DigitalOut.h"
#include "plexim/hw_wrapper.h"
#include "plexim/AnalogIn.h"
#include "plexim/SFP.h"
#include "plexim/HIL_Framework.h"
#include "plexim/DigitalOverride.h"
#include "plexim/DataCapture.h"
#include "plexim/ProgrammableValue.h"
#include "plexim/ToFile.h"
#define PLECSRunTimeError(msg) rt_box_dummy_errorStatus = msg
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
static double plecsmod(double a, double b)
{
   if (!b)
   {
      return a;
   }
   else
   {
      double r = fmod(a, b);
      if ((r < 0 && b > 0) || (r > 0 && b < 0))
      {
         r += b;
      }
      return r;
   }
}
static struct CScriptStruct rt_box_dummy_cScriptStruct[3];
#define rt_box_dummy_UNCONNECTED 0
static const double rt_box_dummy_UNCONNECTED_double =
   rt_box_dummy_UNCONNECTED;
static double rt_box_dummy_D_double[2];
static int rt_box_dummy_D_int[6];
static size_t rt_box_dummy_D_size_t[6];
static double * _RESTRICT rt_box_dummy_PM0_x;
static double rt_box_dummy_PM0_tmpX[3] _ALIGN;
static double rt_box_dummy_PM0_prevX[3] _ALIGN;
static double rt_box_dummy_PM0_u[2] _ALIGN;
static double rt_box_dummy_PM0_prevU[2] _ALIGN;
static double rt_box_dummy_PM0_y[5] _ALIGN;
static size_t rt_box_dummy_PM0_topoIdx;
static char rt_box_dummy_PM0_withDiracs;
static const size_t PM0_Ad_0_rowPtr[] = {
   0,1,3,5
};
static const size_t PM0_Ad_0_colIdx[] = {
   0,0,1,0,2
};
static const double PM0_Ad_0_data[] _ALIGN = {
   1.,5.00000000000000041e-06,1.,-5.00000000000000041e-06,1.
};
static const size_t PM0_Bd0_0_rowPtr[] = {
   0,2,4,6
};
static const size_t PM0_Bd0_0_colIdx[] = {
   0,1,0,1,0,1
};
static const double PM0_Bd0_0_data[] _ALIGN = {
   0.000593824228028503589,-0.000593824228028503589,1.97941409342834571e-09,
   -1.97941409342834571e-09,-1.97941409342834571e-09,1.97941409342834571e-09
};
static const size_t PM0_Bd1_0_rowPtr[] = {
   0,2,4,6
};
static const size_t PM0_Bd1_0_colIdx[] = {
   0,1,0,1,0,1
};
static const double PM0_Bd1_0_data[] _ALIGN = {
   0.000593824228028503589,-0.000593824228028503589,9.89707046714172853e-10,
   -9.89707046714172853e-10,-9.89707046714172853e-10,9.89707046714172853e-10
};
static const size_t * const PM0_Ad_rowPtr[] = {
   PM0_Ad_0_rowPtr
};
static const size_t * const PM0_Ad_colIdx[] = {
   PM0_Ad_0_colIdx
};
static const double * const rt_box_dummy_PM0_Ad_data[] = {
   PM0_Ad_0_data
};
static const size_t * const PM0_Bd0_rowPtr[] = {
   PM0_Bd0_0_rowPtr
};
static const size_t * const PM0_Bd0_colIdx[] = {
   PM0_Bd0_0_colIdx
};
static const double * const rt_box_dummy_PM0_Bd0_data[] = {
   PM0_Bd0_0_data
};
static const size_t * const PM0_Bd1_rowPtr[] = {
   PM0_Bd1_0_rowPtr
};
static const size_t * const PM0_Bd1_colIdx[] = {
   PM0_Bd1_0_colIdx
};
static const double * const rt_box_dummy_PM0_Bd1_data[] = {
   PM0_Bd1_0_data
};
static size_t rt_box_dummy_PM0_conductionMasks[1]={
   0
};
static size_t rt_box_dummy_PM0_directionMasks[1]={
   0
};
static void rt_box_dummy_PM0_update(const double * _RESTRICT aAd_data,
                                    const double * _RESTRICT aBd0_data,
                                    const double * _RESTRICT aBd1_data,
                                    double * _RESTRICT x)
{
   const double * _RESTRICT Ad_data = _ASSUME_ALIGNED(aAd_data);
   const double * _RESTRICT Bd0_data = _ASSUME_ALIGNED(aBd0_data);
   const double * _RESTRICT Bd1_data = _ASSUME_ALIGNED(aBd1_data);
   const double * _RESTRICT prevX = rt_box_dummy_PM0_prevX;
   size_t i;
   for (i = 0; i < 3; ++i)
   {
      x[i] = 0;
      {
         const size_t *rowPtr = PM0_Ad_rowPtr[rt_box_dummy_PM0_topoIdx];
         const size_t *colIdx = PM0_Ad_colIdx[rt_box_dummy_PM0_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(x+i) += Ad_data[j]*prevX[colIdx[j]];
      }
      {
         const size_t *rowPtr = PM0_Bd0_rowPtr[rt_box_dummy_PM0_topoIdx];
         const size_t *colIdx = PM0_Bd0_colIdx[rt_box_dummy_PM0_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(x+i) += Bd0_data[j]*rt_box_dummy_PM0_prevU[colIdx[j]];
      }
      {
         const size_t *rowPtr = PM0_Bd1_rowPtr[rt_box_dummy_PM0_topoIdx];
         const size_t *colIdx = PM0_Bd1_colIdx[rt_box_dummy_PM0_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(x+i) += Bd1_data[j]*rt_box_dummy_PM0_u[colIdx[j]];
      }
   }
}
static double * _RESTRICT rt_box_dummy_PM1_x;
static double rt_box_dummy_PM1_tmpX[1] _ALIGN;
static double rt_box_dummy_PM1_prevX[1] _ALIGN;
static double rt_box_dummy_PM1_u[9] _ALIGN;
static double rt_box_dummy_PM1_prevU[9] _ALIGN;
static double rt_box_dummy_PM1_y[16] _ALIGN;
static double rt_box_dummy_PM1_gateSignalBuffer[6] _ALIGN;
static double rt_box_dummy_PM1_dcsVoltageSignalBuffer[6] _ALIGN;
static size_t rt_box_dummy_PM1_topoIdx;
static char rt_box_dummy_PM1_withDiracs;
static const size_t PM1_Ad_7_rowPtr[] = {
   0,1
};
static const size_t PM1_Ad_7_colIdx[] = {
   0
};
static const double PM1_Ad_7_data[] _ALIGN = {
   0.0518915226023586446
};
static const size_t PM1_Bd0_7_rowPtr[] = {
   0,4
};
static const size_t PM1_Bd0_7_colIdx[] = {
   2,4,6,8
};
static const double PM1_Bd0_7_data[] _ALIGN = {
   -0.0253444852312128925,2.53444852312128963e-05,2.53444852312128963e-05,
   2.53444852312128963e-05
};
static const size_t PM1_Bd1_7_rowPtr[] = {
   0,4
};
static const size_t PM1_Bd1_7_colIdx[] = {
   2,4,6,8
};
static const double PM1_Bd1_7_data[] _ALIGN = {
   0.973452962313749781,-0.000973452962313749821,-0.000973452962313749821,
   -0.000973452962313749821
};
static const size_t PM1_C_0_7_rowPtr[] = {
   0,0,0,0
};
static const size_t PM1_C_0_7_colIdx[] = {
   0
};
static const double PM1_C_0_7_data[] _ALIGN = {
   0
};
static const size_t PM1_D_0_7_rowPtr[] = {
   0,1,3,4
};
static const size_t PM1_D_0_7_colIdx[] = {
   0,0,1,1
};
static const double PM1_D_0_7_data[] _ALIGN = {
   1.,-1.,-1.,1.
};
static const size_t PM1_C_1_7_rowPtr[] = {
   0,0,0,0,0,0,0,0,0
};
static const size_t PM1_C_1_7_colIdx[] = {
   0
};
static const double PM1_C_1_7_data[] _ALIGN = {
   0
};
static const size_t PM1_D_1_7_rowPtr[] = {
   0,2,4,5,7,8,10,12,14
};
static const size_t PM1_D_1_7_colIdx[] = {
   3,5,5,7,0,0,1,1,3,5,5,7,3,7
};
static const double PM1_D_1_7_data[] _ALIGN = {
   -1.,1.,-1.,1.,1.,-1.,-1.,1.,-1.,1.,-1.,1.,1.,-1.
};
static void PM1_collision_7()
{
}
static size_t PM1_natPreComm_7_1()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   return 0; /* 7_1 */
}
static size_t PM1_natPostComm_7_1()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   if (-u[0] > 0)
   {
      if (-u[1] > 0)
      {
         return 1; /* 7_2 */
      }
      if (u[0]+u[1] > 0)
      {
         return 3; /* 7_4 */
      }
   }
   if (u[0] > 0)
   {
      if (-u[0]-u[1] > 0)
      {
         return 2; /* 7_3 */
      }
      if (u[1] > 0)
      {
         return 4; /* 7_5 */
      }
   }
   if (-u[0]-u[1] > 0)
   {
      if (u[1] > 0)
      {
         return 5; /* 7_6 */
      }
   }
   return 0; /* 7_1 */
}
static size_t PM1_forcedComm_7_1()
{
   return 0;                                  /* 7_1 */
}
static size_t PM1_natPreComm_7_2()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   return 1; /* 7_2 */
}
static size_t PM1_natPostComm_7_2()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   if (u[0]+u[1] > 0)
   {
      if (-u[1] > 0)
      {
         return 0; /* 7_1 */
      }
      if (-u[0] > 0)
      {
         return 3; /* 7_4 */
      }
   }
   if (u[0] > 0)
   {
      if (-u[0]-u[1] > 0)
      {
         return 2; /* 7_3 */
      }
      if (u[1] > 0)
      {
         return 4; /* 7_5 */
      }
   }
   if (-u[0]-u[1] > 0)
   {
      if (u[1] > 0)
      {
         return 5; /* 7_6 */
      }
   }
   return 1; /* 7_2 */
}
static size_t PM1_forcedComm_7_2()
{
   return 1;                                  /* 7_2 */
}
static size_t PM1_natPreComm_7_3()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   return 2; /* 7_3 */
}
static size_t PM1_natPostComm_7_3()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   if (u[0]+u[1] > 0)
   {
      if (-u[1] > 0)
      {
         return 0; /* 7_1 */
      }
      if (-u[0] > 0)
      {
         return 3; /* 7_4 */
      }
   }
   if (u[1] > 0)
   {
      if (u[0] > 0)
      {
         return 4; /* 7_5 */
      }
      if (-u[0]-u[1] > 0)
      {
         return 5; /* 7_6 */
      }
   }
   if (-u[1] > 0)
   {
      if (-u[0] > 0)
      {
         return 1; /* 7_2 */
      }
   }
   return 2; /* 7_3 */
}
static size_t PM1_forcedComm_7_3()
{
   return 2;                                  /* 7_3 */
}
static size_t PM1_natPreComm_7_4()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   return 3; /* 7_4 */
}
static size_t PM1_natPostComm_7_4()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   if (-u[1] > 0)
   {
      if (u[0]+u[1] > 0)
      {
         return 0; /* 7_1 */
      }
      if (-u[0] > 0)
      {
         return 1; /* 7_2 */
      }
   }
   if (u[0] > 0)
   {
      if (-u[0]-u[1] > 0)
      {
         return 2; /* 7_3 */
      }
      if (u[1] > 0)
      {
         return 4; /* 7_5 */
      }
   }
   if (-u[0]-u[1] > 0)
   {
      if (u[1] > 0)
      {
         return 5; /* 7_6 */
      }
   }
   return 3; /* 7_4 */
}
static size_t PM1_forcedComm_7_4()
{
   return 3;                                  /* 7_4 */
}
static size_t PM1_natPreComm_7_5()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   return 4; /* 7_5 */
}
static size_t PM1_natPostComm_7_5()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   if (u[0]+u[1] > 0)
   {
      if (-u[1] > 0)
      {
         return 0; /* 7_1 */
      }
      if (-u[0] > 0)
      {
         return 3; /* 7_4 */
      }
   }
   if (-u[0]-u[1] > 0)
   {
      if (u[0] > 0)
      {
         return 2; /* 7_3 */
      }
      if (u[1] > 0)
      {
         return 5; /* 7_6 */
      }
   }
   if (-u[1] > 0)
   {
      if (-u[0] > 0)
      {
         return 1; /* 7_2 */
      }
   }
   return 4; /* 7_5 */
}
static size_t PM1_forcedComm_7_5()
{
   return 4;                                  /* 7_5 */
}
static size_t PM1_natPreComm_7_6()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   return 5; /* 7_6 */
}
static size_t PM1_natPostComm_7_6()
{
   const double * const x = rt_box_dummy_PM1_x;
   const double * const u = rt_box_dummy_PM1_u;
   const double * const v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   if (u[0]+u[1] > 0)
   {
      if (-u[1] > 0)
      {
         return 0; /* 7_1 */
      }
      if (-u[0] > 0)
      {
         return 3; /* 7_4 */
      }
   }
   if (u[0] > 0)
   {
      if (-u[0]-u[1] > 0)
      {
         return 2; /* 7_3 */
      }
      if (u[1] > 0)
      {
         return 4; /* 7_5 */
      }
   }
   if (-u[1] > 0)
   {
      if (-u[0] > 0)
      {
         return 1; /* 7_2 */
      }
   }
   return 5; /* 7_6 */
}
static size_t PM1_forcedComm_7_6()
{
   return 5;                                  /* 7_6 */
}
static const size_t * const PM1_Ad_rowPtr[] = {
   PM1_Ad_7_rowPtr,PM1_Ad_7_rowPtr,PM1_Ad_7_rowPtr,PM1_Ad_7_rowPtr,
   PM1_Ad_7_rowPtr,PM1_Ad_7_rowPtr
};
static const size_t * const PM1_Ad_colIdx[] = {
   PM1_Ad_7_colIdx,PM1_Ad_7_colIdx,PM1_Ad_7_colIdx,PM1_Ad_7_colIdx,
   PM1_Ad_7_colIdx,PM1_Ad_7_colIdx
};
static const double * const rt_box_dummy_PM1_Ad_data[] = {
   PM1_Ad_7_data,PM1_Ad_7_data,PM1_Ad_7_data,PM1_Ad_7_data,PM1_Ad_7_data,
   PM1_Ad_7_data
};
static const size_t * const PM1_Bd0_rowPtr[] = {
   PM1_Bd0_7_rowPtr,PM1_Bd0_7_rowPtr,PM1_Bd0_7_rowPtr,PM1_Bd0_7_rowPtr,
   PM1_Bd0_7_rowPtr,PM1_Bd0_7_rowPtr
};
static const size_t * const PM1_Bd0_colIdx[] = {
   PM1_Bd0_7_colIdx,PM1_Bd0_7_colIdx,PM1_Bd0_7_colIdx,PM1_Bd0_7_colIdx,
   PM1_Bd0_7_colIdx,PM1_Bd0_7_colIdx
};
static const double * const rt_box_dummy_PM1_Bd0_data[] = {
   PM1_Bd0_7_data,PM1_Bd0_7_data,PM1_Bd0_7_data,PM1_Bd0_7_data,PM1_Bd0_7_data,
   PM1_Bd0_7_data
};
static const size_t * const PM1_Bd1_rowPtr[] = {
   PM1_Bd1_7_rowPtr,PM1_Bd1_7_rowPtr,PM1_Bd1_7_rowPtr,PM1_Bd1_7_rowPtr,
   PM1_Bd1_7_rowPtr,PM1_Bd1_7_rowPtr
};
static const size_t * const PM1_Bd1_colIdx[] = {
   PM1_Bd1_7_colIdx,PM1_Bd1_7_colIdx,PM1_Bd1_7_colIdx,PM1_Bd1_7_colIdx,
   PM1_Bd1_7_colIdx,PM1_Bd1_7_colIdx
};
static const double * const rt_box_dummy_PM1_Bd1_data[] = {
   PM1_Bd1_7_data,PM1_Bd1_7_data,PM1_Bd1_7_data,PM1_Bd1_7_data,PM1_Bd1_7_data,
   PM1_Bd1_7_data
};
static const size_t * const PM1_C_0_rowPtr[] = {
   PM1_C_0_7_rowPtr,PM1_C_0_7_rowPtr,PM1_C_0_7_rowPtr,PM1_C_0_7_rowPtr,
   PM1_C_0_7_rowPtr,PM1_C_0_7_rowPtr
};
static const size_t * const PM1_C_0_colIdx[] = {
   PM1_C_0_7_colIdx,PM1_C_0_7_colIdx,PM1_C_0_7_colIdx,PM1_C_0_7_colIdx,
   PM1_C_0_7_colIdx,PM1_C_0_7_colIdx
};
static const double * const rt_box_dummy_PM1_C_0_data[] = {
   PM1_C_0_7_data,PM1_C_0_7_data,PM1_C_0_7_data,PM1_C_0_7_data,PM1_C_0_7_data,
   PM1_C_0_7_data
};
static const size_t * const PM1_D_0_rowPtr[] = {
   PM1_D_0_7_rowPtr,PM1_D_0_7_rowPtr,PM1_D_0_7_rowPtr,PM1_D_0_7_rowPtr,
   PM1_D_0_7_rowPtr,PM1_D_0_7_rowPtr
};
static const size_t * const PM1_D_0_colIdx[] = {
   PM1_D_0_7_colIdx,PM1_D_0_7_colIdx,PM1_D_0_7_colIdx,PM1_D_0_7_colIdx,
   PM1_D_0_7_colIdx,PM1_D_0_7_colIdx
};
static const double * const rt_box_dummy_PM1_D_0_data[] = {
   PM1_D_0_7_data,PM1_D_0_7_data,PM1_D_0_7_data,PM1_D_0_7_data,PM1_D_0_7_data,
   PM1_D_0_7_data
};
static const size_t * const PM1_C_1_rowPtr[] = {
   PM1_C_1_7_rowPtr,PM1_C_1_7_rowPtr,PM1_C_1_7_rowPtr,PM1_C_1_7_rowPtr,
   PM1_C_1_7_rowPtr,PM1_C_1_7_rowPtr
};
static const size_t * const PM1_C_1_colIdx[] = {
   PM1_C_1_7_colIdx,PM1_C_1_7_colIdx,PM1_C_1_7_colIdx,PM1_C_1_7_colIdx,
   PM1_C_1_7_colIdx,PM1_C_1_7_colIdx
};
static const double * const rt_box_dummy_PM1_C_1_data[] = {
   PM1_C_1_7_data,PM1_C_1_7_data,PM1_C_1_7_data,PM1_C_1_7_data,PM1_C_1_7_data,
   PM1_C_1_7_data
};
static const size_t * const PM1_D_1_rowPtr[] = {
   PM1_D_1_7_rowPtr,PM1_D_1_7_rowPtr,PM1_D_1_7_rowPtr,PM1_D_1_7_rowPtr,
   PM1_D_1_7_rowPtr,PM1_D_1_7_rowPtr
};
static const size_t * const PM1_D_1_colIdx[] = {
   PM1_D_1_7_colIdx,PM1_D_1_7_colIdx,PM1_D_1_7_colIdx,PM1_D_1_7_colIdx,
   PM1_D_1_7_colIdx,PM1_D_1_7_colIdx
};
static const double * const rt_box_dummy_PM1_D_1_data[] = {
   PM1_D_1_7_data,PM1_D_1_7_data,PM1_D_1_7_data,PM1_D_1_7_data,PM1_D_1_7_data,
   PM1_D_1_7_data
};
static void (*const PM1_collision[6]) () = {
   PM1_collision_7,PM1_collision_7,PM1_collision_7,PM1_collision_7,
   PM1_collision_7,PM1_collision_7
};
static size_t (*const PM1_natPreComm[6]) () = {
   PM1_natPreComm_7_1,PM1_natPreComm_7_2,PM1_natPreComm_7_3,
   PM1_natPreComm_7_4,PM1_natPreComm_7_5,PM1_natPreComm_7_6
};
static size_t (*const PM1_natPostComm[6]) () = {
   PM1_natPostComm_7_1,PM1_natPostComm_7_2,PM1_natPostComm_7_3,
   PM1_natPostComm_7_4,PM1_natPostComm_7_5,PM1_natPostComm_7_6
};
static size_t (*const PM1_forcedComm[6]) () = {
   PM1_forcedComm_7_1,PM1_forcedComm_7_2,PM1_forcedComm_7_3,
   PM1_forcedComm_7_4,PM1_forcedComm_7_5,PM1_forcedComm_7_6
};
static size_t rt_box_dummy_PM1_conductionMasks[6]={
   7,7,7,7,7,7
};
static size_t rt_box_dummy_PM1_directionMasks[6]={
   1,2,3,4,5,6
};
static void rt_box_dummy_PM1_natComm()
{
   size_t oldTopo = rt_box_dummy_PM1_topoIdx;
   size_t midTopo = rt_box_dummy_PM1_topoIdx;
   size_t preConductionToggleMask = 0;
   size_t postConductionToggleMask = 0;
   size_t directionToggleMask = 0;
   rt_box_dummy_PM1_topoIdx = PM1_natPreComm[rt_box_dummy_PM1_topoIdx]();
   midTopo = rt_box_dummy_PM1_topoIdx;
   rt_box_dummy_PM1_topoIdx = PM1_natPostComm[rt_box_dummy_PM1_topoIdx]();
   preConductionToggleMask = rt_box_dummy_PM1_conductionMasks[midTopo] ^
                             rt_box_dummy_PM1_conductionMasks[oldTopo];
   if (preConductionToggleMask)
   {
      postConductionToggleMask =
         rt_box_dummy_PM1_conductionMasks[rt_box_dummy_PM1_topoIdx] ^
         rt_box_dummy_PM1_conductionMasks[midTopo];
      directionToggleMask =
         rt_box_dummy_PM1_directionMasks[rt_box_dummy_PM1_topoIdx] ^
         rt_box_dummy_PM1_directionMasks[oldTopo];
      if (postConductionToggleMask &
          (~preConductionToggleMask | directionToggleMask))
      {
         PM1_collision[rt_box_dummy_PM1_topoIdx]();
      }
      else
      {
         PM1_collision[midTopo]();
      }
   }
}
static void rt_box_dummy_PM1_forcedComm()
{
   rt_box_dummy_PM1_topoIdx = PM1_forcedComm[rt_box_dummy_PM1_topoIdx]();
}
static void rt_box_dummy_PM1_dcsPostCommutationUpdate()
{
   double * const _RESTRICT u = rt_box_dummy_PM1_u;
   const double * const _RESTRICT v = rt_box_dummy_PM1_dcsVoltageSignalBuffer;
   const size_t cnd =
      rt_box_dummy_PM1_conductionMasks[rt_box_dummy_PM1_topoIdx];
   const size_t dir =
      rt_box_dummy_PM1_directionMasks[rt_box_dummy_PM1_topoIdx];

   u[3] =
      (cnd & 1)
      ? ((dir & 1) ? -v[1] : v[0])
      : (0.5 * (v[0] - v[1]));

   u[5] =
      (cnd & 2)
      ? ((dir & 2) ? -v[3] : v[2])
      : (0.5 * (v[2] - v[3]));

   u[7] =
      (cnd & 4)
      ? ((dir & 4) ? -v[5] : v[4])
      : (0.5 * (v[4] - v[5]));
}
static void rt_box_dummy_PM1_output_0()
{
   const double * _RESTRICT C_0_data = _ASSUME_ALIGNED(
                                                       rt_box_dummy_PM1_C_0_data[
                                                          rt_box_dummy_PM1_topoIdx]);
   const double * _RESTRICT D_0_data = _ASSUME_ALIGNED(
                                                       rt_box_dummy_PM1_D_0_data[
                                                          rt_box_dummy_PM1_topoIdx]);
   const size_t meterIdx[]={
      8,10,12
   };
   double y[3] _ALIGN;
   size_t i;
   for (i = 0; i < 3; ++i)
   {
      y[i] = 0;
      {
         const size_t *rowPtr = PM1_C_0_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_C_0_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(y+i) += C_0_data[j]*rt_box_dummy_PM1_x[colIdx[j]];
      }
      {
         const size_t *rowPtr = PM1_D_0_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_D_0_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(y+i) += D_0_data[j]*rt_box_dummy_PM1_u[colIdx[j]];
      }
   }
   for (i = 0; i < 3; ++i)
   {
      rt_box_dummy_PM1_y[meterIdx[i]] = y[i];
   }
}
static void rt_box_dummy_PM1_output_1()
{
   const double * _RESTRICT C_1_data = _ASSUME_ALIGNED(
                                                       rt_box_dummy_PM1_C_1_data[
                                                          rt_box_dummy_PM1_topoIdx]);
   const double * _RESTRICT D_1_data = _ASSUME_ALIGNED(
                                                       rt_box_dummy_PM1_D_1_data[
                                                          rt_box_dummy_PM1_topoIdx]);
   const size_t meterIdx[]={
      0,1,2,3,4,5,6,7
   };
   double y[8] _ALIGN;
   size_t i;
   for (i = 0; i < 8; ++i)
   {
      y[i] = 0;
      {
         const size_t *rowPtr = PM1_C_1_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_C_1_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(y+i) += C_1_data[j]*rt_box_dummy_PM1_x[colIdx[j]];
      }
      {
         const size_t *rowPtr = PM1_D_1_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_D_1_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(y+i) += D_1_data[j]*rt_box_dummy_PM1_u[colIdx[j]];
      }
   }
   for (i = 0; i < 8; ++i)
   {
      rt_box_dummy_PM1_y[meterIdx[i]] = y[i];
   }
}
static void rt_box_dummy_PM1_update(const double * _RESTRICT aAd_data,
                                    const double * _RESTRICT aBd0_data,
                                    const double * _RESTRICT aBd1_data,
                                    double * _RESTRICT x)
{
   const double * _RESTRICT Ad_data = _ASSUME_ALIGNED(aAd_data);
   const double * _RESTRICT Bd0_data = _ASSUME_ALIGNED(aBd0_data);
   const double * _RESTRICT Bd1_data = _ASSUME_ALIGNED(aBd1_data);
   const double * _RESTRICT prevX = rt_box_dummy_PM1_prevX;
   size_t i;
   for (i = 0; i < 1; ++i)
   {
      x[i] = 0;
      {
         const size_t *rowPtr = PM1_Ad_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_Ad_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(x+i) += Ad_data[j]*prevX[colIdx[j]];
      }
      {
         const size_t *rowPtr = PM1_Bd0_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_Bd0_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(x+i) += Bd0_data[j]*rt_box_dummy_PM1_prevU[colIdx[j]];
      }
      {
         const size_t *rowPtr = PM1_Bd1_rowPtr[rt_box_dummy_PM1_topoIdx];
         const size_t *colIdx = PM1_Bd1_colIdx[rt_box_dummy_PM1_topoIdx];
         size_t j;
         for (j = rowPtr[i]; j < rowPtr[i+1]; ++j)
            *(x+i) += Bd1_data[j]*rt_box_dummy_PM1_u[colIdx[j]];
      }
   }
}
static char rt_box_dummy_first;
static double rt_box_dummy_deriv[4] _ALIGN;
void rt_box_dummy_0_cScriptStart(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_0_cScriptOutput(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_0_cScriptUpdate(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_0_cScriptDerivative(
                                      const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_0_cScriptTerminate(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_1_cScriptStart(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_1_cScriptOutput(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_1_cScriptUpdate(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_1_cScriptDerivative(
                                      const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_1_cScriptTerminate(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_2_cScriptStart(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_2_cScriptOutput(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_2_cScriptUpdate(const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_2_cScriptDerivative(
                                      const struct CScriptStruct *cScriptStruct);
void rt_box_dummy_2_cScriptTerminate(const struct CScriptStruct *cScriptStruct);
static uint32_t rt_box_dummy_tickLo;
static int32_t rt_box_dummy_tickHi;
rt_box_dummy_BlockOutputs rt_box_dummy_B;
#if defined(EXTERNAL_MODE) && EXTERNAL_MODE
static double rt_box_dummy_ExtModeBuffer[6];
const double * const rt_box_dummy_ExtModeSignals[] = {
   &rt_box_dummy_ExtModeBuffer[0],
   &rt_box_dummy_ExtModeBuffer[1],
   &rt_box_dummy_B.TransferFcn[0],
   &rt_box_dummy_B.TransferFcn[1],
   &rt_box_dummy_PM1_y[5],
   &rt_box_dummy_PM1_y[6],
   &rt_box_dummy_PM1_y[7],
   &rt_box_dummy_PM1_y[2],
   &rt_box_dummy_PM1_y[3],
   &rt_box_dummy_PM1_y[4],
   &rt_box_dummy_B.Gain4,
   &rt_box_dummy_B.AngleSensor,
   &rt_box_dummy_B.DataType6,
   &rt_box_dummy_B.DataType,
   &rt_box_dummy_B.DataType7,
   &rt_box_dummy_B.DataType1,
   &rt_box_dummy_B.DataType8,
   &rt_box_dummy_B.DataType2,
   &rt_box_dummy_PM1_y[2],
   &rt_box_dummy_PM1_y[3],
   &rt_box_dummy_PM1_y[4],
   &rt_box_dummy_PM0_y[4],
   &rt_box_dummy_PM1_y[2],
   &rt_box_dummy_PM1_y[3],
   &rt_box_dummy_PM1_y[4],
   &rt_box_dummy_B.SineWave3,
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_PM1_y[14],
   &rt_box_dummy_B.Sum[0],
   &rt_box_dummy_B.Sum[1],
   &rt_box_dummy_B.Sum[2],
   &rt_box_dummy_ExtModeBuffer[2],
   &rt_box_dummy_ExtModeBuffer[3],
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_UNCONNECTED_double,
   &rt_box_dummy_ExtModeBuffer[4],
   &rt_box_dummy_B.C_Script1,
   &rt_box_dummy_B.C_Script_1,
   &rt_box_dummy_B.Math,
   &rt_box_dummy_B.Gain,
   &rt_box_dummy_B.Product,
   &rt_box_dummy_B.Saturation,
   &rt_box_dummy_ExtModeBuffer[5],
   &rt_box_dummy_B.Switch_i1[0],
   &rt_box_dummy_B.Switch_i1[1],
   &rt_box_dummy_B.Switch_i1[2],
   &rt_box_dummy_B.Switch_i1[3],
   &rt_box_dummy_B.Switch_i1[4],
   &rt_box_dummy_B.Switch_i1[5],
   &rt_box_dummy_B.abc_d,
   &rt_box_dummy_B.abc_q
};
#endif /* defined(EXTERNAL_MODE) */
rt_box_dummy_ModelStates rt_box_dummy_X _ALIGN;
const char * rt_box_dummy_errorStatus;
const double rt_box_dummy_sampleTime = 5.00000000000000041e-06;
const char * const rt_box_dummy_checksum =
   "df0bb66d1610752635e8c48ba0b6425ed0d36265";
/* Target declarations */
struct PlxDataCaptureRegistry plxDataCaptureRegistry[1];
const int plxUseEthercat = 0;
struct PlxProgrammableValueRegistry plxProgrammableValueRegistry[1];
struct PlxToFileRegistry plxToFileRegistry[1];

void rt_box_dummy_initialize(double time)
{
   double remainder;
   rt_box_dummy_errorStatus = NULL;
   rt_box_dummy_tickHi = floor(time/(4294967296.0*rt_box_dummy_sampleTime));
   remainder = time - rt_box_dummy_tickHi*4294967296.0*
               rt_box_dummy_sampleTime;
   rt_box_dummy_tickLo = floor(remainder/rt_box_dummy_sampleTime + .5);
   remainder -= rt_box_dummy_tickLo*rt_box_dummy_sampleTime;
   if (fabs(remainder) > 1e-6*fabs(time))
   {
      rt_box_dummy_errorStatus =
         "Start time must be an integer multiple of the base sample time.";
   }
   memset(&rt_box_dummy_X, 0, sizeof(rt_box_dummy_X));

   /* Target pre-initialization */
   setAnalogInputVoltage(1);
   setupDACs(0);
   setDigitalOutVoltage(0);
   plxInitDigitalOut();
   initPWMCapture();
   plxInitDigitalOverride();
   plxSetupAnalogSampling(1, 0, 5.00000000000000041e-06);
   plxSetMaxNumConsecutiveOverruns(5);
   setupSFPSyncMaster(0, 0, 0, 0);
   setupSFPSyncSlave(0, 0, 0);


   /* Initialization for C-Script : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script' */
   {
      static int numInputSignals[] = {
         5
      };
      static const double* inputPtrs[] = {
         &rt_box_dummy_PM1_y[0], &rt_box_dummy_PM1_y[1], &rt_box_dummy_B.p_wm,
         &rt_box_dummy_B.TrigonometricFunction2,
         &rt_box_dummy_B.TrigonometricFunction1
      };
      static const double** inputs[] = {
         &inputPtrs[0]
      };
      static int numOutputSignals[] = {
         5
      };
      static double* outputPtrs[] = {
         &rt_box_dummy_B.C_Script[0], &rt_box_dummy_B.C_Script[1],
         &rt_box_dummy_B.C_Script[2], &rt_box_dummy_B.C_Script[3],
         &rt_box_dummy_B.C_Script[4]
      };
      static double** outputs[] = {
         &outputPtrs[0]
      };
      static double nextSampleHit;
      static const char contTaskHit = '\001';
      static const char * sampleHits[] = {
         &contTaskHit
      };
      static double sampleTimePeriods[] = {
         0
      };
      static double sampleTimeOffsets[] = {
         0
      };
      static double terminalSampleTimePeriods[] = {
         0., 0., 0., 0., 0.
      };
      static double terminalSampleTimeOffsets[] = {
         0., 0., 0., 0., 0.
      };
      static const double* terminalSampleTimePeriodPtrs[] = {
         &terminalSampleTimePeriods[0]
      };
      static const double* terminalSampleTimeOffsetPtrs[] = {
         &terminalSampleTimeOffsets[0]
      };
      static const char* errorStatus;
      static const char* warningStatus;
      static const char* rangeErrorMsg;
      static const double paramData[] = {
         0.0179999999999999986,0.000176999999999999993,
         0.000183000000000000003,0.0541999999999999982,10.,0.,0.,0.
      };
      static const double* paramDataPtr[] = {
         paramData+0,paramData+1,paramData+3,paramData+4,paramData+5,
         paramData+6
      };
      static const char paramStringData[] = "\0\0\0\0\0\0";
      static const char* paramStringDataPtr[] = {
         paramStringData+0,paramStringData+1,paramStringData+2,
         paramStringData+3,paramStringData+4,paramStringData+5
      };
      static const int paramDim[] = {
         1,1,1,2,1,1,1,1,1,1,1,2
      };
      static const int* paramDimPtr[] = {
         paramDim+0,paramDim+2,paramDim+4,paramDim+6,paramDim+8,paramDim+10
      };
      static const int paramNumElements[] = {
         1,2,1,1,1,2
      };
      static const int paramNumDims[] = {
         2,2,2,2,2,2
      };
      errorStatus = NULL;
      warningStatus = NULL;
      rangeErrorMsg = NULL;
      rt_box_dummy_cScriptStruct[0].isMajorTimeStep = 1;
      rt_box_dummy_cScriptStruct[0].numInputTerminals = 1;
      rt_box_dummy_cScriptStruct[0].numInputSignals = numInputSignals;
      rt_box_dummy_cScriptStruct[0].inputs = inputs;
      rt_box_dummy_cScriptStruct[0].numOutputTerminals = 1;
      rt_box_dummy_cScriptStruct[0].numOutputSignals = numOutputSignals;
      rt_box_dummy_cScriptStruct[0].outputs = outputs;
      rt_box_dummy_cScriptStruct[0].numContStates = 2;
      rt_box_dummy_cScriptStruct[0].contStates = &rt_box_dummy_X.C_Script[0];
      rt_box_dummy_cScriptStruct[0].contDerivs = &rt_box_dummy_deriv[0];
      rt_box_dummy_cScriptStruct[0].numDiscStates = 0;
      rt_box_dummy_cScriptStruct[0].discStates = NULL;
      rt_box_dummy_cScriptStruct[0].numZCSignals = 0;
      rt_box_dummy_cScriptStruct[0].numParameters = 6;
      rt_box_dummy_cScriptStruct[0].paramNumDims = paramNumDims;
      rt_box_dummy_cScriptStruct[0].paramDims = paramDimPtr;
      rt_box_dummy_cScriptStruct[0].paramNumElements = paramNumElements;
      rt_box_dummy_cScriptStruct[0].paramRealData = paramDataPtr;
      rt_box_dummy_cScriptStruct[0].paramStringData = paramStringDataPtr;
      rt_box_dummy_cScriptStruct[0].numSampleTimes = 1;
      rt_box_dummy_cScriptStruct[0].sampleTimePeriods = sampleTimePeriods;
      rt_box_dummy_cScriptStruct[0].sampleTimeOffsets = sampleTimeOffsets;
      rt_box_dummy_cScriptStruct[0].inputSampleTimePeriods =
         terminalSampleTimePeriodPtrs;
      rt_box_dummy_cScriptStruct[0].inputSampleTimeOffsets =
         terminalSampleTimeOffsetPtrs;
      rt_box_dummy_cScriptStruct[0].sampleHits = sampleHits;
      rt_box_dummy_cScriptStruct[0].nextSampleHit = &nextSampleHit;
      rt_box_dummy_cScriptStruct[0].errorStatus = &errorStatus;
      rt_box_dummy_cScriptStruct[0].warningStatus = &warningStatus;
      rt_box_dummy_cScriptStruct[0].rangeErrorMsg = &rangeErrorMsg;
      rt_box_dummy_0_cScriptStart(&rt_box_dummy_cScriptStruct[0]);
      if (*rt_box_dummy_cScriptStruct[0].errorStatus)
         rt_box_dummy_errorStatus =
            *rt_box_dummy_cScriptStruct[0].errorStatus;
   }

   /* Initialization for Subsystem : 'rt_box_dummy' */
   rt_box_dummy_PM0_topoIdx = 0;
   rt_box_dummy_X.rt_box_dummy_PM0_x[0] = 0;
   rt_box_dummy_X.rt_box_dummy_PM0_x[1] = 0;
   rt_box_dummy_X.rt_box_dummy_PM0_x[2] = 0;
   rt_box_dummy_PM0_x = &rt_box_dummy_X.rt_box_dummy_PM0_x[0];

   /* Initialization for PWM Capture : 'rt_box_dummy/PWM Capture1' */
   plxSetupPWMCaptureChannel(0, 1, 1);
   rt_box_dummy_D_size_t[0] = 0;
   rt_box_dummy_D_int[0] = 1;

   /* Initialization for PWM Capture : 'rt_box_dummy/PWM Capture2' */
   plxSetupPWMCaptureChannel(1, 1, 1);
   rt_box_dummy_D_size_t[1] = 0;
   rt_box_dummy_D_int[1] = 1;

   /* Initialization for PWM Capture : 'rt_box_dummy/PWM Capture3' */
   plxSetupPWMCaptureChannel(2, 1, 1);
   rt_box_dummy_D_size_t[2] = 0;
   rt_box_dummy_D_int[2] = 1;

   /* Initialization for PWM Capture : 'rt_box_dummy/PWM Capture4' */
   plxSetupPWMCaptureChannel(3, 1, 1);
   rt_box_dummy_D_size_t[3] = 0;
   rt_box_dummy_D_int[3] = 1;

   /* Initialization for PWM Capture : 'rt_box_dummy/PWM Capture5' */
   plxSetupPWMCaptureChannel(4, 1, 1);
   rt_box_dummy_D_size_t[4] = 0;
   rt_box_dummy_D_int[4] = 1;

   /* Initialization for PWM Capture : 'rt_box_dummy/PWM Capture6' */
   plxSetupPWMCaptureChannel(5, 1, 1);
   rt_box_dummy_D_size_t[5] = 0;
   rt_box_dummy_D_int[5] = 1;

   /* Initialization for Digital In : 'rt_box_dummy/GD_Enable' */
   plxSetupDigitalInput(9, 1);

   /* Initialization for Subsystem : 'rt_box_dummy' */
   rt_box_dummy_X.UHB[0] = 0;
   rt_box_dummy_X.UHB[1] = 0;
   rt_box_dummy_X.UHB_1[0] = 0;
   rt_box_dummy_X.UHB_1[1] = 0;
   rt_box_dummy_X.UHB_2[0] = 0;
   rt_box_dummy_X.UHB_2[1] = 0;
   rt_box_dummy_X.rt_box_dummy_i2_PM1_s[0] = 1;
   rt_box_dummy_X.rt_box_dummy_i2_PM1_s[1] = 1;
   rt_box_dummy_X.rt_box_dummy_i2_PM1_s[2] = 1;
   rt_box_dummy_PM1_topoIdx = 0;
   rt_box_dummy_X.rt_box_dummy_i1_PM1_x = 540;
   rt_box_dummy_PM1_x = &rt_box_dummy_X.rt_box_dummy_i1_PM1_x;

   /* Initialization for SPI Slave : 'rt_box_dummy/SPI Slave' */
   {
      const SPI_CONF conf = {
         .SLAVE = 1,
         .CLK_SPC1 = 0,
         .CLK_SPC2 = 0,
         .SPIMODE = 2,
         .DataBits = 8,
         .bitOrder = 0,
         .HS_MODE = 0,
         .STRMBR = 0,
         .CS_POLARITY = 0,
         .TRGDELAY = 0
      };
      static uint16_t outputBuffer[8];
      setupSPI(0, &conf, 1.00000000000000000e+06, 2, 0, 0, outputBuffer,
               4*sizeof(uint16_t), 0);
   }
   setupSPIInput(0, 0, 8);
   setupSPIOutput(0, 0, 0);
   setupSPIInput(0, 5, 7);
   setupSPIInput(0, 4, 6);
   setupSPIOutput(0,1, 2);

   /* Initialization for Transfer Function : 'rt_box_dummy/Transfer Fcn' */
   rt_box_dummy_X.TransferFcn[0] = 0.;
   rt_box_dummy_X.TransferFcn[1] = 0.;

   /* Initialization for Sine Wave Generator : 'rt_box_dummy/Sine Wave3' */
   rt_box_dummy_D_double[0] = sin(10.*time);
   rt_box_dummy_D_double[1] = cos(10.*time);

   /* Initialization for C-Script : 'rt_box_dummy/C-Script1' */
   {
      static int numInputSignals[] = {
         1
      };
      static const double* inputPtrs[] = {
         &rt_box_dummy_B.Gain1
      };
      static const double** inputs[] = {
         &inputPtrs[0]
      };
      static int numOutputSignals[] = {
         1
      };
      static double* outputPtrs[] = {
         &rt_box_dummy_B.C_Script1
      };
      static double** outputs[] = {
         &outputPtrs[0]
      };
      static double nextSampleHit;
      static const char contTaskHit = '\001';
      static const char * sampleHits[] = {
         &contTaskHit
      };
      static double sampleTimePeriods[] = {
         0
      };
      static double sampleTimeOffsets[] = {
         0
      };
      static double terminalSampleTimePeriods[] = {
         0.
      };
      static double terminalSampleTimeOffsets[] = {
         0.
      };
      static const double* terminalSampleTimePeriodPtrs[] = {
         &terminalSampleTimePeriods[0]
      };
      static const double* terminalSampleTimeOffsetPtrs[] = {
         &terminalSampleTimeOffsets[0]
      };
      static const char* errorStatus;
      static const char* warningStatus;
      static const char* rangeErrorMsg;
      errorStatus = NULL;
      warningStatus = NULL;
      rangeErrorMsg = NULL;
      rt_box_dummy_cScriptStruct[1].isMajorTimeStep = 1;
      rt_box_dummy_cScriptStruct[1].numInputTerminals = 1;
      rt_box_dummy_cScriptStruct[1].numInputSignals = numInputSignals;
      rt_box_dummy_cScriptStruct[1].inputs = inputs;
      rt_box_dummy_cScriptStruct[1].numOutputTerminals = 1;
      rt_box_dummy_cScriptStruct[1].numOutputSignals = numOutputSignals;
      rt_box_dummy_cScriptStruct[1].outputs = outputs;
      rt_box_dummy_cScriptStruct[1].numContStates = 0;
      rt_box_dummy_cScriptStruct[1].contStates = NULL;
      rt_box_dummy_cScriptStruct[1].contDerivs = NULL;
      rt_box_dummy_cScriptStruct[1].numDiscStates = 0;
      rt_box_dummy_cScriptStruct[1].discStates = NULL;
      rt_box_dummy_cScriptStruct[1].numZCSignals = 0;
      rt_box_dummy_cScriptStruct[1].numParameters = 0;
      rt_box_dummy_cScriptStruct[1].paramNumDims = NULL;
      rt_box_dummy_cScriptStruct[1].paramDims = NULL;
      rt_box_dummy_cScriptStruct[1].paramNumElements = NULL;
      rt_box_dummy_cScriptStruct[1].paramRealData = NULL;
      rt_box_dummy_cScriptStruct[1].paramStringData = NULL;
      rt_box_dummy_cScriptStruct[1].numSampleTimes = 1;
      rt_box_dummy_cScriptStruct[1].sampleTimePeriods = sampleTimePeriods;
      rt_box_dummy_cScriptStruct[1].sampleTimeOffsets = sampleTimeOffsets;
      rt_box_dummy_cScriptStruct[1].inputSampleTimePeriods =
         terminalSampleTimePeriodPtrs;
      rt_box_dummy_cScriptStruct[1].inputSampleTimeOffsets =
         terminalSampleTimeOffsetPtrs;
      rt_box_dummy_cScriptStruct[1].sampleHits = sampleHits;
      rt_box_dummy_cScriptStruct[1].nextSampleHit = &nextSampleHit;
      rt_box_dummy_cScriptStruct[1].errorStatus = &errorStatus;
      rt_box_dummy_cScriptStruct[1].warningStatus = &warningStatus;
      rt_box_dummy_cScriptStruct[1].rangeErrorMsg = &rangeErrorMsg;
      rt_box_dummy_1_cScriptStart(&rt_box_dummy_cScriptStruct[1]);
      if (*rt_box_dummy_cScriptStruct[1].errorStatus)
         rt_box_dummy_errorStatus =
            *rt_box_dummy_cScriptStruct[1].errorStatus;
   }

   /* Initialization for C-Script : 'rt_box_dummy/C-Script' */
   {
      static int numInputSignals[] = {
         1
      };
      static const double* inputPtrs[] = {
         &rt_box_dummy_B.Gain1
      };
      static const double** inputs[] = {
         &inputPtrs[0]
      };
      static int numOutputSignals[] = {
         1
      };
      static double* outputPtrs[] = {
         &rt_box_dummy_B.C_Script_1
      };
      static double** outputs[] = {
         &outputPtrs[0]
      };
      static double nextSampleHit;
      static const char contTaskHit = '\001';
      static const char * sampleHits[] = {
         &contTaskHit
      };
      static double sampleTimePeriods[] = {
         0
      };
      static double sampleTimeOffsets[] = {
         0
      };
      static double terminalSampleTimePeriods[] = {
         0.
      };
      static double terminalSampleTimeOffsets[] = {
         0.
      };
      static const double* terminalSampleTimePeriodPtrs[] = {
         &terminalSampleTimePeriods[0]
      };
      static const double* terminalSampleTimeOffsetPtrs[] = {
         &terminalSampleTimeOffsets[0]
      };
      static const char* errorStatus;
      static const char* warningStatus;
      static const char* rangeErrorMsg;
      errorStatus = NULL;
      warningStatus = NULL;
      rangeErrorMsg = NULL;
      rt_box_dummy_cScriptStruct[2].isMajorTimeStep = 1;
      rt_box_dummy_cScriptStruct[2].numInputTerminals = 1;
      rt_box_dummy_cScriptStruct[2].numInputSignals = numInputSignals;
      rt_box_dummy_cScriptStruct[2].inputs = inputs;
      rt_box_dummy_cScriptStruct[2].numOutputTerminals = 1;
      rt_box_dummy_cScriptStruct[2].numOutputSignals = numOutputSignals;
      rt_box_dummy_cScriptStruct[2].outputs = outputs;
      rt_box_dummy_cScriptStruct[2].numContStates = 0;
      rt_box_dummy_cScriptStruct[2].contStates = NULL;
      rt_box_dummy_cScriptStruct[2].contDerivs = NULL;
      rt_box_dummy_cScriptStruct[2].numDiscStates = 0;
      rt_box_dummy_cScriptStruct[2].discStates = NULL;
      rt_box_dummy_cScriptStruct[2].numZCSignals = 0;
      rt_box_dummy_cScriptStruct[2].numParameters = 0;
      rt_box_dummy_cScriptStruct[2].paramNumDims = NULL;
      rt_box_dummy_cScriptStruct[2].paramDims = NULL;
      rt_box_dummy_cScriptStruct[2].paramNumElements = NULL;
      rt_box_dummy_cScriptStruct[2].paramRealData = NULL;
      rt_box_dummy_cScriptStruct[2].paramStringData = NULL;
      rt_box_dummy_cScriptStruct[2].numSampleTimes = 1;
      rt_box_dummy_cScriptStruct[2].sampleTimePeriods = sampleTimePeriods;
      rt_box_dummy_cScriptStruct[2].sampleTimeOffsets = sampleTimeOffsets;
      rt_box_dummy_cScriptStruct[2].inputSampleTimePeriods =
         terminalSampleTimePeriodPtrs;
      rt_box_dummy_cScriptStruct[2].inputSampleTimeOffsets =
         terminalSampleTimeOffsetPtrs;
      rt_box_dummy_cScriptStruct[2].sampleHits = sampleHits;
      rt_box_dummy_cScriptStruct[2].nextSampleHit = &nextSampleHit;
      rt_box_dummy_cScriptStruct[2].errorStatus = &errorStatus;
      rt_box_dummy_cScriptStruct[2].warningStatus = &warningStatus;
      rt_box_dummy_cScriptStruct[2].rangeErrorMsg = &rangeErrorMsg;
      rt_box_dummy_2_cScriptStart(&rt_box_dummy_cScriptStruct[2]);
      if (*rt_box_dummy_cScriptStruct[2].errorStatus)
         rt_box_dummy_errorStatus =
            *rt_box_dummy_cScriptStruct[2].errorStatus;
   }

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out1' */
   setupAnalogOut(0, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out2' */
   setupAnalogOut(2, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out3' */
   setupAnalogOut(4, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out5' */
   setupAnalogOut(1, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out6' */
   setupAnalogOut(3, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out7' */
   setupAnalogOut(5, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Digital Out : 'rt_box_dummy/Digital Out1' */
   setupDigitalOut(5, DO_GPIO, DO_NINV);

   /* Initialization for Digital Out : 'rt_box_dummy/Digital Out2' */
   setupDigitalOut(4, DO_GPIO, DO_NINV);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out8' */
   setupAnalogOut(8, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out9' */
   setupAnalogOut(9, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out4' */
   setupAnalogOut(6, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);

   /* Initialization for Analog Out : 'rt_box_dummy/Analog Out10' */
   setupAnalogOut(7, 1.000000000e+00f, 0.000000000e+00f, -inf, inf);


   /* Target post-initialization */
   plxEnableRcpMode();
   rt_box_dummy_first = 1;
}

void rt_box_dummy_step(void)
{
   if (rt_box_dummy_errorStatus)
   {
      return;
   }

   /* C-Script : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script' */
   rt_box_dummy_0_cScriptOutput(&rt_box_dummy_cScriptStruct[0]);
   if (*rt_box_dummy_cScriptStruct[0].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[0].errorStatus;

   /* Mechanical model */
   if (!rt_box_dummy_first)
   {
      memcpy(rt_box_dummy_PM0_prevX,rt_box_dummy_PM0_x,3*sizeof(double));
      rt_box_dummy_PM0_update(rt_box_dummy_PM0_Ad_data[
                                 rt_box_dummy_PM0_topoIdx],
                              rt_box_dummy_PM0_Bd0_data[
                                 rt_box_dummy_PM0_topoIdx],
                              rt_box_dummy_PM0_Bd1_data[
                                 rt_box_dummy_PM0_topoIdx],
                              rt_box_dummy_PM0_x);
   }
   rt_box_dummy_PM0_y[0] = 1.*rt_box_dummy_PM0_x[0];
   rt_box_dummy_PM0_y[1] = 1.*rt_box_dummy_PM0_x[0];
   rt_box_dummy_PM0_y[2] = -1.*rt_box_dummy_PM0_x[0];
   rt_box_dummy_PM0_y[3] = -1.*rt_box_dummy_PM0_x[0];
   /* End of mechanical model output */
   /* Gain : 'rt_box_dummy/Gain2'
    * incorporates
    *  Rotational Speed Sensor : 'rt_box_dummy/Speed\nSensor1'
    */
   rt_box_dummy_B.Gain2 = -1.*rt_box_dummy_PM0_y[2];

   /* Product : 'rt_box_dummy/Product'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant'
    */
   rt_box_dummy_B.Product = rt_box_dummy_B.Gain2 * 1.;

   /* Mechanical model input */
   /* Torque (Controlled) : 'rt_box_dummy/Torque2'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant'
    */
   rt_box_dummy_PM0_u[1]=rt_box_dummy_B.Product;
   /* End of mechanical model input */
   rt_box_dummy_PM0_y[4] = 1.*rt_box_dummy_PM0_u[1];
   /* End of mechanical model output */
   /* Angle Sensor : 'rt_box_dummy/Perm.-Magnet SM/Rotor\nAngle' */
   if (rt_box_dummy_PM0_x[1] > 3.14159265358979312)
   {
      rt_box_dummy_PM0_x[1]-=6.28318530717958623;
      if (rt_box_dummy_PM0_x[1] > 3.14159265358979312)
         rt_box_dummy_PM0_x[1]=fmod(rt_box_dummy_PM0_x[1]+3.14159265358979312,
                                    6.28318530717958623)-
                                (3.14159265358979312);
   }
   else if (rt_box_dummy_PM0_x[1] < -3.14159265358979312)
   {
      rt_box_dummy_PM0_x[1]+=6.28318530717958623;
      if (rt_box_dummy_PM0_x[1] < -3.14159265358979312)
         rt_box_dummy_PM0_x[1]=
            fmod(rt_box_dummy_PM0_x[1]-(-3.14159265358979312),
                 6.28318530717958623)+ -3.14159265358979312;
   }
   /* Angle Sensor : 'rt_box_dummy/Angle\nSensor' */
   rt_box_dummy_B.AngleSensor = rt_box_dummy_PM0_x[2];
   /* End of mechanical model */
   /* Gain : 'rt_box_dummy/Perm.-Magnet SM/p*thetam'
    * incorporates
    *  Angle Sensor : 'rt_box_dummy/Perm.-Magnet SM/Rotor\nAngle'
    */
   rt_box_dummy_B.p_thetam = 10.*(rt_box_dummy_PM0_x[1]);

   /* Trigonometric Function : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Cos\/Sin/Trigonometric\nFunction2' */
   rt_box_dummy_B.TrigonometricFunction2 = cos(rt_box_dummy_B.p_thetam);

   /* Trigonometric Function : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Cos\/Sin/Trigonometric\nFunction1' */
   rt_box_dummy_B.TrigonometricFunction1 = sin(rt_box_dummy_B.p_thetam);

   /* Function : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Sub/i_a' */
   rt_box_dummy_B.i_a =
      (rt_box_dummy_B.C_Script[0] *
       rt_box_dummy_B.TrigonometricFunction2)-
      (rt_box_dummy_B.C_Script[1] * rt_box_dummy_B.TrigonometricFunction1);

   /* PWM Capture : 'rt_box_dummy/PWM Capture1' */
   {
      float* result = &rt_box_dummy_B.PWMCapture1;
      *result = plxGetDigitalInAveraged(0);
   }
   /* PWM Capture : 'rt_box_dummy/PWM Capture2' */
   {
      float* result = &rt_box_dummy_B.PWMCapture2;
      *result = plxGetDigitalInAveraged(1);
   }
   /* PWM Capture : 'rt_box_dummy/PWM Capture3' */
   {
      float* result = &rt_box_dummy_B.PWMCapture3;
      *result = plxGetDigitalInAveraged(2);
   }
   /* PWM Capture : 'rt_box_dummy/PWM Capture4' */
   {
      float* result = &rt_box_dummy_B.PWMCapture4;
      *result = plxGetDigitalInAveraged(3);
   }
   /* PWM Capture : 'rt_box_dummy/PWM Capture5' */
   {
      float* result = &rt_box_dummy_B.PWMCapture5;
      *result = plxGetDigitalInAveraged(4);
   }
   /* PWM Capture : 'rt_box_dummy/PWM Capture6' */
   {
      float* result = &rt_box_dummy_B.PWMCapture6;
      *result = plxGetDigitalInAveraged(5);
   }
   /* Digital In : 'rt_box_dummy/GD_Enable' */
   rt_box_dummy_B.GD_Enable = getDigitalIn(9);

   /* Signal Switch : 'rt_box_dummy/Switch' */
   rt_box_dummy_B.Switch = rt_box_dummy_B.GD_Enable != false;

   /* Signal Switch : 'rt_box_dummy/Switch'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant1'
    */
   rt_box_dummy_B.Switch_i1[0] =
      (double)(rt_box_dummy_B.Switch ? rt_box_dummy_B.PWMCapture1 : 0.);
   rt_box_dummy_B.Switch_i1[1] =
      (double)(rt_box_dummy_B.Switch ? rt_box_dummy_B.PWMCapture2 : 0.);
   rt_box_dummy_B.Switch_i1[2] =
      (double)(rt_box_dummy_B.Switch ? rt_box_dummy_B.PWMCapture3 : 0.);
   rt_box_dummy_B.Switch_i1[3] =
      (double)(rt_box_dummy_B.Switch ? rt_box_dummy_B.PWMCapture4 : 0.);
   rt_box_dummy_B.Switch_i1[4] =
      (double)(rt_box_dummy_B.Switch ? rt_box_dummy_B.PWMCapture5 : 0.);
   rt_box_dummy_B.Switch_i1[5] =
      (double)(rt_box_dummy_B.Switch ? rt_box_dummy_B.PWMCapture6 : 0.);

   /* Relational Operator : 'rt_box_dummy/Relational\nOperator3'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant7'
    */
   rt_box_dummy_B.RelationalOperator3 = rt_box_dummy_B.Switch_i1[0] != 0.;

   /* Data Type : 'rt_box_dummy/Data Type6' */
   rt_box_dummy_B.DataType6 = (double)rt_box_dummy_B.RelationalOperator3;

   /* Data Type : 'rt_box_dummy/Data Type'
    * incorporates
    *  Logical Operator : 'rt_box_dummy/Logical\nOperator3'
    */
   rt_box_dummy_B.DataType = (double)(!rt_box_dummy_B.RelationalOperator3);

   /* Target Code Block : 'rt_box_dummy/HB3/Sub-cycle average/Gate Signal\nCombination/Hardware Preprocessing/Gate Signal\nPreprocessing' */
   rt_box_dummy_B.GateSignalPreprocessing[0] = rt_box_dummy_B.DataType6;
   rt_box_dummy_B.GateSignalPreprocessing[1] = rt_box_dummy_B.DataType;
   rt_box_dummy_B.GateSignalPreprocessing[2] =
      ((rt_box_dummy_B.DataType6) + (rt_box_dummy_B.DataType) < 1.000001);

   /* Relational Operator : 'rt_box_dummy/Relational\nOperator4'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant8'
    */
   rt_box_dummy_B.RelationalOperator4 = rt_box_dummy_B.Switch_i1[2] != 0.;

   /* Data Type : 'rt_box_dummy/Data Type7' */
   rt_box_dummy_B.DataType7 = (double)rt_box_dummy_B.RelationalOperator4;

   /* Data Type : 'rt_box_dummy/Data Type1'
    * incorporates
    *  Logical Operator : 'rt_box_dummy/Logical\nOperator4'
    */
   rt_box_dummy_B.DataType1 = (double)(!rt_box_dummy_B.RelationalOperator4);

   /* Target Code Block : 'rt_box_dummy/HB4/Sub-cycle average/Gate Signal\nCombination/Hardware Preprocessing/Gate Signal\nPreprocessing' */
   rt_box_dummy_B.GateSignalPreprocessing_1[0] = rt_box_dummy_B.DataType7;
   rt_box_dummy_B.GateSignalPreprocessing_1[1] = rt_box_dummy_B.DataType1;
   rt_box_dummy_B.GateSignalPreprocessing_1[2] =
      ((rt_box_dummy_B.DataType7) + (rt_box_dummy_B.DataType1) < 1.000001);

   /* Relational Operator : 'rt_box_dummy/Relational\nOperator5'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant9'
    */
   rt_box_dummy_B.RelationalOperator5 = rt_box_dummy_B.Switch_i1[4] != 0.;

   /* Data Type : 'rt_box_dummy/Data Type8' */
   rt_box_dummy_B.DataType8 = (double)rt_box_dummy_B.RelationalOperator5;

   /* Data Type : 'rt_box_dummy/Data Type2'
    * incorporates
    *  Logical Operator : 'rt_box_dummy/Logical\nOperator5'
    */
   rt_box_dummy_B.DataType2 = (double)(!rt_box_dummy_B.RelationalOperator5);

   /* Target Code Block : 'rt_box_dummy/HB5/Sub-cycle average/Gate Signal\nCombination/Hardware Preprocessing/Gate Signal\nPreprocessing' */
   rt_box_dummy_B.GateSignalPreprocessing_2[0] = rt_box_dummy_B.DataType8;
   rt_box_dummy_B.GateSignalPreprocessing_2[1] = rt_box_dummy_B.DataType2;
   rt_box_dummy_B.GateSignalPreprocessing_2[2] =
      ((rt_box_dummy_B.DataType8) + (rt_box_dummy_B.DataType2) < 1.000001);

   /* Electrical model */


   /* Electrical model input */
   /* Current Source (Controlled) : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/i_a' */
   rt_box_dummy_PM1_u[0]=rt_box_dummy_B.i_a;
   /* Current Source (Controlled) : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/i_c'
    * incorporates
    *  Function : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Sub/i_b'
    *  Sum : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Sub/i_c'
    */
   rt_box_dummy_PM1_u[1]=-rt_box_dummy_B.i_a -
                          ((rt_box_dummy_B.C_Script[0] *
                            (((-0.5) *
                              rt_box_dummy_B.TrigonometricFunction2) +
                             (0.866025403784438597 *
     rt_box_dummy_B.TrigonometricFunction1))) +
                           (rt_box_dummy_B.C_Script[1] *
     ((0.5 *
       rt_box_dummy_B.TrigonometricFunction1) +
     (0.866025403784438597 * rt_box_dummy_B.TrigonometricFunction2))));
   /* Voltage Source DC : 'rt_box_dummy/V_dc' */
   rt_box_dummy_PM1_u[2]=5.;
   /* End of electrical model input */
   if (!rt_box_dummy_first)
   {
      memcpy(rt_box_dummy_PM1_prevX,rt_box_dummy_PM1_x,1*sizeof(double));
      rt_box_dummy_PM1_update(rt_box_dummy_PM1_Ad_data[
                                 rt_box_dummy_PM1_topoIdx],
                              rt_box_dummy_PM1_Bd0_data[
                                 rt_box_dummy_PM1_topoIdx],
                              rt_box_dummy_PM1_Bd1_data[
                                 rt_box_dummy_PM1_topoIdx],
                              rt_box_dummy_PM1_x);
   }


   /* Electrical model output */
   rt_box_dummy_PM1_output_0();
   /* End of electrical model output */
   /* Universal Half Bridge : 'rt_box_dummy/HB4/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB = -rt_box_dummy_PM1_y[10];
   if (rt_box_dummy_B.UHB < 0.)
   {
      rt_box_dummy_B.UHB = 0.;
   }

   /* Universal Half Bridge : 'rt_box_dummy/HB4/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_i1 = rt_box_dummy_PM1_y[10];
   if (rt_box_dummy_B.UHB_i1 < 0.)
   {
      rt_box_dummy_B.UHB_i1 = 0.;
   }

   /* Universal Half Bridge : 'rt_box_dummy/HB3/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_1 = -rt_box_dummy_PM1_y[8];
   if (rt_box_dummy_B.UHB_1 < 0.)
   {
      rt_box_dummy_B.UHB_1 = 0.;
   }

   /* Universal Half Bridge : 'rt_box_dummy/HB3/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_1_i1 = rt_box_dummy_PM1_y[8];
   if (rt_box_dummy_B.UHB_1_i1 < 0.)
   {
      rt_box_dummy_B.UHB_1_i1 = 0.;
   }

   /* Universal Half Bridge : 'rt_box_dummy/HB5/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_2 = -rt_box_dummy_PM1_y[12];
   if (rt_box_dummy_B.UHB_2 < 0.)
   {
      rt_box_dummy_B.UHB_2 = 0.;
   }

   /* Universal Half Bridge : 'rt_box_dummy/HB5/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_2_i1 = rt_box_dummy_PM1_y[12];
   if (rt_box_dummy_B.UHB_2_i1 < 0.)
   {
      rt_box_dummy_B.UHB_2_i1 = 0.;
   }

   /* Electrical model input */
   /* Universal Half Bridge : 'rt_box_dummy/HB3/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_PM1_u[4]=
      ((rt_box_dummy_B.UHB_1)*
       ((0.5 *
         ((rt_box_dummy_B.GateSignalPreprocessing[1]) +
       (rt_box_dummy_X.UHB_1[0]))) -
     (1.)) + (rt_box_dummy_B.UHB_1_i1)*
       ((0.5 *
         ((rt_box_dummy_B.GateSignalPreprocessing[0]) +
       (rt_box_dummy_X.UHB_1[1]))) - (0.)));
   /* Universal Half Bridge : 'rt_box_dummy/HB4/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_PM1_u[6]=
      ((rt_box_dummy_B.UHB)*
       ((0.5 *
         ((rt_box_dummy_B.GateSignalPreprocessing_1[1]) +
       (rt_box_dummy_X.UHB[0]))) -
     (1.)) + (rt_box_dummy_B.UHB_i1)*
       ((0.5 *
         ((rt_box_dummy_B.GateSignalPreprocessing_1[0]) +
       (rt_box_dummy_X.UHB[1]))) - (0.)));
   /* Universal Half Bridge : 'rt_box_dummy/HB5/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_PM1_u[8]=
      ((rt_box_dummy_B.UHB_2)*
       ((0.5 *
         ((rt_box_dummy_B.GateSignalPreprocessing_2[1]) +
       (rt_box_dummy_X.UHB_2[0]))) -
     (1.)) + (rt_box_dummy_B.UHB_2_i1)*
       ((0.5 *
         ((rt_box_dummy_B.GateSignalPreprocessing_2[0]) +
       (rt_box_dummy_X.UHB_2[1]))) - (0.)));
   /* End of electrical model input */
   rt_box_dummy_PM1_y[9] = 0.499999999916912352*rt_box_dummy_PM1_x[0]+
                           0.499999999916912352*rt_box_dummy_PM1_u[2]-
                           0.000499999999916912394*
                           rt_box_dummy_PM1_u[4]-0.000499999999916912394*
                           rt_box_dummy_PM1_u[6]-
                           0.000499999999916912394*rt_box_dummy_PM1_u[8];
   rt_box_dummy_PM1_y[11] = 0.499999999916912352*rt_box_dummy_PM1_x[0]+
                            0.499999999916912352*rt_box_dummy_PM1_u[2]-
                            0.000499999999916912394*
                            rt_box_dummy_PM1_u[4]-0.000499999999916912394*
                            rt_box_dummy_PM1_u[6]-
                            0.000499999999916912394*rt_box_dummy_PM1_u[8];
   rt_box_dummy_PM1_y[13] = 0.499999999916912352*rt_box_dummy_PM1_x[0]+
                            0.499999999916912352*rt_box_dummy_PM1_u[2]-
                            0.000499999999916912394*
                            rt_box_dummy_PM1_u[4]-0.000499999999916912394*
                            rt_box_dummy_PM1_u[6]-
                            0.000499999999916912394*rt_box_dummy_PM1_u[8];
   /* End of electrical model output */
   /* Universal Half Bridge : 'rt_box_dummy/HB3/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_1_i2[0] =
      (((rt_box_dummy_B.GateSignalPreprocessing[1]) -
        (1.))*(rt_box_dummy_PM1_y[9]));
   rt_box_dummy_B.UHB_1_i2[1] =
      (((rt_box_dummy_B.GateSignalPreprocessing[0]) -
        (0.))*(rt_box_dummy_PM1_y[9]));

   /* Universal Half Bridge : 'rt_box_dummy/HB5/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_2_i2[0] =
      (((rt_box_dummy_B.GateSignalPreprocessing_2[1]) -
        (1.))*(rt_box_dummy_PM1_y[13]));
   rt_box_dummy_B.UHB_2_i2[1] =
      (((rt_box_dummy_B.GateSignalPreprocessing_2[0]) -
        (0.))*(rt_box_dummy_PM1_y[13]));

   /* Universal Half Bridge : 'rt_box_dummy/HB4/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_B.UHB_i2[0] =
      (((rt_box_dummy_B.GateSignalPreprocessing_1[1]) -
        (1.))*(rt_box_dummy_PM1_y[11]));
   rt_box_dummy_B.UHB_i2[1] =
      (((rt_box_dummy_B.GateSignalPreprocessing_1[0]) -
        (0.))*(rt_box_dummy_PM1_y[11]));

   /* Commutation */
   rt_box_dummy_PM1_dcsVoltageSignalBuffer[4] = rt_box_dummy_B.UHB_2_i2[0];
   rt_box_dummy_PM1_dcsVoltageSignalBuffer[3] = rt_box_dummy_B.UHB_i2[1];
   rt_box_dummy_PM1_dcsVoltageSignalBuffer[1] = rt_box_dummy_B.UHB_1_i2[1];
   rt_box_dummy_PM1_dcsVoltageSignalBuffer[5] = rt_box_dummy_B.UHB_2_i2[1];
   rt_box_dummy_PM1_dcsVoltageSignalBuffer[2] = rt_box_dummy_B.UHB_i2[0];
   rt_box_dummy_PM1_dcsVoltageSignalBuffer[0] = rt_box_dummy_B.UHB_1_i2[0];
   rt_box_dummy_PM1_natComm();
   rt_box_dummy_PM1_gateSignalBuffer[3] = rt_box_dummy_UNCONNECTED;
   rt_box_dummy_PM1_gateSignalBuffer[1] = rt_box_dummy_UNCONNECTED;
   rt_box_dummy_PM1_gateSignalBuffer[0] = rt_box_dummy_UNCONNECTED;
   rt_box_dummy_PM1_gateSignalBuffer[2] = rt_box_dummy_UNCONNECTED;
   rt_box_dummy_PM1_gateSignalBuffer[4] = rt_box_dummy_UNCONNECTED;
   rt_box_dummy_PM1_gateSignalBuffer[5] = rt_box_dummy_UNCONNECTED;
   rt_box_dummy_PM1_forcedComm();
   rt_box_dummy_PM1_dcsPostCommutationUpdate();

   /* Electrical model output */
   rt_box_dummy_PM1_output_1();
   rt_box_dummy_PM1_y[14] = 1.*rt_box_dummy_PM1_u[4]+1.*rt_box_dummy_PM1_u[6]+
                            1.*rt_box_dummy_PM1_u[8];
   rt_box_dummy_PM1_y[15] = 0.0014739752795112492*rt_box_dummy_PM1_x[0]+
                            0.0014739752795112492*rt_box_dummy_PM1_u[2]-
                            1.47397527951124918e-06*
                            rt_box_dummy_PM1_u[4]-1.47397527951124918e-06*
                            rt_box_dummy_PM1_u[6]-
                            1.47397527951124918e-06*rt_box_dummy_PM1_u[8];
   /* End of electrical model output */

   /* End of electrical model */
   /* SPI Slave : 'rt_box_dummy/SPI Slave' */
   {
      int currReadBufferIdx = plxSPICurrentReadBuffer[0];
      int newReadBufferIdx = !currReadBufferIdx;
      plxSPIUpdateFlags[0][currReadBufferIdx] = 0;
      if (plxSPIUpdateFlags[0][newReadBufferIdx])
      {
         plxSPIRxBufferPtr0=plxSPIOutputBuffer[0]+newReadBufferIdx*
                             plxSPIBufLength[0];
         plxSPICurrentReadBuffer[0]=newReadBufferIdx;
      }
   }
   rt_box_dummy_B.SPISlave_uint8_t[0] = getSPIIn0(0);
   rt_box_dummy_B.SPISlave_uint8_t[1] = getSPIIn0(1);
   rt_box_dummy_B.SPISlave_uint8_t[2] = 0;
   rt_box_dummy_B.SPISlave_uint8_t[3] = 0;
   rt_box_dummy_B.SPISlave_uint8_t[4] = 0;
   rt_box_dummy_B.SPISlave_bool = getSPIInputState0();

   /* Transfer Function : 'rt_box_dummy/Transfer Fcn' */
   rt_box_dummy_B.TransferFcn[0] = 10.*rt_box_dummy_X.TransferFcn[0];
   rt_box_dummy_B.TransferFcn[1] = 10.*rt_box_dummy_X.TransferFcn[1];

   /* Gain : 'rt_box_dummy/Gain4' */
   rt_box_dummy_B.Gain4 = 9.54929658551372107*rt_box_dummy_B.Gain2;

   /* Sine Wave Generator : 'rt_box_dummy/Sine Wave3' */
   rt_box_dummy_B.SineWave3 = 0. + 1. *
                              (1.*rt_box_dummy_D_double[0] + 0.*
                               rt_box_dummy_D_double[1]);

   /* Sum : 'rt_box_dummy/Sum'
    * incorporates
    *  Gain : 'rt_box_dummy/Gain3'
    *  Meter (3 phase) : 'rt_box_dummy/3ph Meter'
    *  Constant : 'rt_box_dummy/Constant2'
    */
   rt_box_dummy_B.Sum[0] = 0.0120000000000000002*rt_box_dummy_PM1_y[2] + 2.5;
   rt_box_dummy_B.Sum[1] = 0.0120000000000000002*rt_box_dummy_PM1_y[3] + 2.5;
   rt_box_dummy_B.Sum[2] = 0.0120000000000000002*rt_box_dummy_PM1_y[4] + 2.5;

   /* Gain : 'rt_box_dummy/Gain' */
   rt_box_dummy_B.Gain = -1.*rt_box_dummy_B.AngleSensor;

   /* Math Function : 'rt_box_dummy/Math'
    * incorporates
    *  Constant : 'rt_box_dummy/Constant3'
    */
   rt_box_dummy_B.Math = plecsmod(rt_box_dummy_B.Gain,6.28318530717958623);

   /* Gain : 'rt_box_dummy/Gain1' */
   rt_box_dummy_B.Gain1 = 1000.*rt_box_dummy_B.Math;

   /* C-Script : 'rt_box_dummy/C-Script1' */
   rt_box_dummy_1_cScriptOutput(&rt_box_dummy_cScriptStruct[1]);
   if (*rt_box_dummy_cScriptStruct[1].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[1].errorStatus;

   /* C-Script : 'rt_box_dummy/C-Script' */
   rt_box_dummy_2_cScriptOutput(&rt_box_dummy_cScriptStruct[2]);
   if (*rt_box_dummy_cScriptStruct[2].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[2].errorStatus;

   /* Saturation : 'rt_box_dummy/Saturation'
    * incorporates
    *  Sum : 'rt_box_dummy/Sum1'
    *  Voltmeter : 'rt_box_dummy/Vm2'
    *  Constant : 'rt_box_dummy/Constant4'
    */
   rt_box_dummy_B.Saturation = rt_box_dummy_PM1_y[15] + 1.;
   if (rt_box_dummy_B.Saturation > 3.)
   {
      rt_box_dummy_B.Saturation = 3.;
   }
   else if (rt_box_dummy_B.Saturation < 0.)
   {
      rt_box_dummy_B.Saturation = 0.;
   }

   /* Gain : 'rt_box_dummy/Gain5' */
   rt_box_dummy_B.Gain5 = 10.*rt_box_dummy_B.Gain;

   /* Trigonometric Function : 'rt_box_dummy/3ph->RRF/Cos' */
   rt_box_dummy_B.Cos = cos(rt_box_dummy_B.Gain5);

   /* Trigonometric Function : 'rt_box_dummy/3ph->RRF/Sin' */
   rt_box_dummy_B.Sin = sin(rt_box_dummy_B.Gain5);

   /* Function : 'rt_box_dummy/3ph->RRF/abc->d'
    * incorporates
    *  Meter (3 phase) : 'rt_box_dummy/3ph Meter'
    */
   rt_box_dummy_B.abc_d = 0.66666666666666663 *
                          (((rt_box_dummy_PM1_y[2] *
                             rt_box_dummy_B.Cos) +
                            (rt_box_dummy_PM1_y[3] *
                             (((-0.5) *
                               rt_box_dummy_B.Cos) +
     (0.866025403784438597 *
     rt_box_dummy_B.Sin)))) +
                           (rt_box_dummy_PM1_y[4] *
     (((-0.5) *
       rt_box_dummy_B.Cos)-(0.866025403784438597 * rt_box_dummy_B.Sin))));

   /* Function : 'rt_box_dummy/3ph->RRF/abc->q'
    * incorporates
    *  Meter (3 phase) : 'rt_box_dummy/3ph Meter'
    */
   rt_box_dummy_B.abc_q = 0.66666666666666663 *
                          ((((-rt_box_dummy_PM1_y[2]) *
                             rt_box_dummy_B.Sin) +
                            (rt_box_dummy_PM1_y[3] *
                             ((0.5 *
                               rt_box_dummy_B.Sin) +
     (0.866025403784438597 *
     rt_box_dummy_B.Cos)))) +
                           (rt_box_dummy_PM1_y[4] *
     ((0.5 *
       rt_box_dummy_B.Sin)-(0.866025403784438597 * rt_box_dummy_B.Cos))));
   if (!(rt_box_dummy_B.GateSignalPreprocessing[2]))
   {
      rt_box_dummy_errorStatus =
         "Assertion failed in 'rt_box_dummy/HB3': Half-bridge shoot-through.";
   }
   if (!(rt_box_dummy_B.GateSignalPreprocessing_1[2]))
   {
      rt_box_dummy_errorStatus =
         "Assertion failed in 'rt_box_dummy/HB4': Half-bridge shoot-through.";
   }
   if (!(rt_box_dummy_B.GateSignalPreprocessing_2[2]))
   {
      rt_box_dummy_errorStatus =
         "Assertion failed in 'rt_box_dummy/HB5': Half-bridge shoot-through.";
   }
   /* Analog Out : 'rt_box_dummy/Analog Out1' */
   setAnalogOut(0, rt_box_dummy_B.Sum[0]);

   /* Analog Out : 'rt_box_dummy/Analog Out2' */
   setAnalogOut(2, rt_box_dummy_B.Sum[1]);

   /* Analog Out : 'rt_box_dummy/Analog Out3' */
   setAnalogOut(4, rt_box_dummy_B.Sum[2]);

   /* Analog Out : 'rt_box_dummy/Analog Out5' */
   setAnalogOut(1, 2.5);

   /* Analog Out : 'rt_box_dummy/Analog Out6' */
   setAnalogOut(3, 2.5);

   /* Analog Out : 'rt_box_dummy/Analog Out7' */
   setAnalogOut(5, 2.5);

   /* Digital Out : 'rt_box_dummy/Digital Out1' */
   writeDigitalOut(5, 1.);

   /* Digital Out : 'rt_box_dummy/Digital Out2' */
   writeDigitalOut(4, 1.);

   /* Analog Out : 'rt_box_dummy/Analog Out8' */
   setAnalogOut(8, rt_box_dummy_B.Saturation);

   /* Analog Out : 'rt_box_dummy/Analog Out9' */
   setAnalogOut(9, 1.);
   /* Saturation : 'rt_box_dummy/Saturation1' */
   rt_box_dummy_B.Saturation1 = 2.5;
   /* Analog Out : 'rt_box_dummy/Analog Out4' */
   setAnalogOut(6, rt_box_dummy_B.Saturation1);

   /* Analog Out : 'rt_box_dummy/Analog Out10' */
   setAnalogOut(7, 0.5);
   /* Gain : 'rt_box_dummy/Perm.-Magnet SM/p*wm'
    * incorporates
    *  Rotational Speed Sensor : 'rt_box_dummy/Perm.-Magnet SM/Rotor\nSpeed'
    */
   rt_box_dummy_B.p_wm = 10.*rt_box_dummy_PM0_y[0];
   rt_box_dummy_first = 0;
#if defined(EXTERNAL_MODE) && EXTERNAL_MODE
   rt_box_dummy_ExtModeBuffer[0] = (double)rt_box_dummy_B.SPISlave_uint8_t[0];
   rt_box_dummy_ExtModeBuffer[1] = (double)rt_box_dummy_B.SPISlave_uint8_t[1];
   rt_box_dummy_ExtModeBuffer[2] = (double)rt_box_dummy_B.SPISlave_uint8_t[0];
   rt_box_dummy_ExtModeBuffer[3] = (double)rt_box_dummy_B.SPISlave_uint8_t[1];
   rt_box_dummy_ExtModeBuffer[4] = (double)rt_box_dummy_B.SPISlave_bool;
   rt_box_dummy_ExtModeBuffer[5] = (double)rt_box_dummy_B.GD_Enable;
#endif /* defined(EXTERNAL_MODE) */

   if (rt_box_dummy_errorStatus)
   {
      return;
   }

   /* Update for C-Script : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script' */
   rt_box_dummy_0_cScriptUpdate(&rt_box_dummy_cScriptStruct[0]);
   if (*rt_box_dummy_cScriptStruct[0].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[0].errorStatus;

   /* Update for Subsystem : 'rt_box_dummy' */


   /* Mechanical model input */
   /* Torque (Controlled) : 'rt_box_dummy/Perm.-Magnet SM/Te' */
   rt_box_dummy_PM0_u[0]=rt_box_dummy_B.C_Script[4];
   /* End of mechanical model input */
   memcpy(rt_box_dummy_PM0_prevU,rt_box_dummy_PM0_u,2*sizeof(double));

   /* Update for Subsystem : 'rt_box_dummy' */


   /* Update for Universal Half Bridge : 'rt_box_dummy/HB4/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_X.UHB[0] = rt_box_dummy_B.GateSignalPreprocessing_1[1];
   rt_box_dummy_X.UHB[1] = rt_box_dummy_B.GateSignalPreprocessing_1[0];

   /* Update for Universal Half Bridge : 'rt_box_dummy/HB3/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_X.UHB_1[0] = rt_box_dummy_B.GateSignalPreprocessing[1];
   rt_box_dummy_X.UHB_1[1] = rt_box_dummy_B.GateSignalPreprocessing[0];

   /* Update for Universal Half Bridge : 'rt_box_dummy/HB5/Sub-cycle average/UHB/UHB' */
   rt_box_dummy_X.UHB_2[0] = rt_box_dummy_B.GateSignalPreprocessing_2[1];
   rt_box_dummy_X.UHB_2[1] = rt_box_dummy_B.GateSignalPreprocessing_2[0];
   memcpy(rt_box_dummy_PM1_prevU,rt_box_dummy_PM1_u,9*sizeof(double));

   /* Update for SPI Slave : 'rt_box_dummy/SPI Slave' */
   setSPIOut0(0, rt_box_dummy_B.C_Script1);
   setSPIOut0(1, rt_box_dummy_B.C_Script_1);
   *plxIo.SPIEnable |= 1;
   /* Update for Sine Wave Generator : 'rt_box_dummy/Sine Wave3' */
   {
      double scaling, scaledX, scaledY;
      scaling = 1. +
                (0.5 *
                 (rt_box_dummy_D_double[0]*rt_box_dummy_D_double[0] +
        rt_box_dummy_D_double[1]*rt_box_dummy_D_double[1] - 1.));
      scaledX = rt_box_dummy_D_double[0] / scaling;
      scaledY = rt_box_dummy_D_double[1] / scaling;
      rt_box_dummy_D_double[0] = 0.999999998750000008 * scaledX +
                                 4.99999999791666714e-05 * scaledY;
      rt_box_dummy_D_double[1] = -4.99999999791666714e-05 * scaledX +
                                 0.999999998750000008 * scaledY;
   }

   /* Update for C-Script : 'rt_box_dummy/C-Script1' */
   rt_box_dummy_1_cScriptUpdate(&rt_box_dummy_cScriptStruct[1]);
   if (*rt_box_dummy_cScriptStruct[1].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[1].errorStatus;

   /* Update for C-Script : 'rt_box_dummy/C-Script' */
   rt_box_dummy_2_cScriptUpdate(&rt_box_dummy_cScriptStruct[2]);
   if (*rt_box_dummy_cScriptStruct[2].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[2].errorStatus;

   /* Derivatives for C-Script : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script' */
   rt_box_dummy_0_cScriptDerivative(&rt_box_dummy_cScriptStruct[0]);
   if (*rt_box_dummy_cScriptStruct[0].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[0].errorStatus;

   /* Derivatives for Transfer Function : 'rt_box_dummy/Transfer Fcn' */
   rt_box_dummy_deriv[2] = (rt_box_dummy_B.abc_d)-10.*
                           rt_box_dummy_X.TransferFcn[0];
   rt_box_dummy_deriv[3] = (rt_box_dummy_B.abc_q)-10.*
                           rt_box_dummy_X.TransferFcn[1];

   /* Update continuous states */
   rt_box_dummy_X.C_Script[0] += 5.00000000000000041e-06*
                                 rt_box_dummy_deriv[0];
   rt_box_dummy_X.C_Script[1] += 5.00000000000000041e-06*
                                 rt_box_dummy_deriv[1];
   rt_box_dummy_X.TransferFcn[0] += 5.00000000000000041e-06*
                                    rt_box_dummy_deriv[2];
   rt_box_dummy_X.TransferFcn[1] += 5.00000000000000041e-06*
                                    rt_box_dummy_deriv[3];
}

void rt_box_dummy_terminate(void)
{
   /* Termination for C-Script : 'rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script' */
   rt_box_dummy_0_cScriptTerminate(&rt_box_dummy_cScriptStruct[0]);
   if (*rt_box_dummy_cScriptStruct[0].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[0].errorStatus;
   /* Termination for C-Script : 'rt_box_dummy/C-Script1' */
   rt_box_dummy_1_cScriptTerminate(&rt_box_dummy_cScriptStruct[1]);
   if (*rt_box_dummy_cScriptStruct[1].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[1].errorStatus;
   /* Termination for C-Script : 'rt_box_dummy/C-Script' */
   rt_box_dummy_2_cScriptTerminate(&rt_box_dummy_cScriptStruct[2]);
   if (*rt_box_dummy_cScriptStruct[2].errorStatus)
      rt_box_dummy_errorStatus = *rt_box_dummy_cScriptStruct[2].errorStatus;
}
