/*
 * Header file for: rt_box_dummy
 * Generated with : PLECS 4.8.6
 *                  PLECS RT Box 1 3.0.5
 * Generated on   : 11 Oct 2024 18:55:15
 */
#ifndef PLECS_HEADER_rt_box_dummy_h_
#define PLECS_HEADER_rt_box_dummy_h_

#include <stdbool.h>
#include <stdint.h>

/* Model floating point type */
typedef double rt_box_dummy_FloatType;

/* Model checksum */
extern const char * const rt_box_dummy_checksum;

/* Model error status */
extern const char * rt_box_dummy_errorStatus;


/* Model sample time */
extern const double rt_box_dummy_sampleTime;


/*
 * Model states */
typedef struct
{
   double C_Script[2];              /* rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script */
   double rt_box_dummy_PM0_x[3];    /* rt_box_dummy */
   double rt_box_dummy_i1_PM1_x;    /* rt_box_dummy */
   bool rt_box_dummy_i2_PM1_s[3];   /* rt_box_dummy */
   double UHB[2];                   /* rt_box_dummy/HB4/Sub-cycle average/UHB/UHB */
   double UHB_1[2];                 /* rt_box_dummy/HB3/Sub-cycle average/UHB/UHB */
   double UHB_2[2];                 /* rt_box_dummy/HB5/Sub-cycle average/UHB/UHB */
   double TransferFcn[2];           /* rt_box_dummy/Transfer Fcn */
   double Assertion;                /* rt_box_dummy/HB3/Sub-cycle average/Gate Signal Combination/Hardware Preprocessing/Assertion/Assert/Assertion */
   double Assertion_1;              /* rt_box_dummy/HB4/Sub-cycle average/Gate Signal Combination/Hardware Preprocessing/Assertion/Assert/Assertion */
   double Assertion_2;              /* rt_box_dummy/HB5/Sub-cycle average/Gate Signal Combination/Hardware Preprocessing/Assertion/Assert/Assertion */
} rt_box_dummy_ModelStates;
extern rt_box_dummy_ModelStates rt_box_dummy_X;


/* Block outputs */
typedef struct
{
   double C_Script[5];              /* rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/C-Script */
   double UHB;                      /* rt_box_dummy/HB4/Sub-cycle average/UHB/UHB */
   double UHB_i1;                   /* rt_box_dummy/HB4/Sub-cycle average/UHB/UHB */
   double UHB_1;                    /* rt_box_dummy/HB3/Sub-cycle average/UHB/UHB */
   double UHB_1_i1;                 /* rt_box_dummy/HB3/Sub-cycle average/UHB/UHB */
   double UHB_2;                    /* rt_box_dummy/HB5/Sub-cycle average/UHB/UHB */
   double UHB_2_i1;                 /* rt_box_dummy/HB5/Sub-cycle average/UHB/UHB */
   double C_Script1;                /* rt_box_dummy/C-Script1 */
   double C_Script_1;               /* rt_box_dummy/C-Script */
   double Saturation;               /* rt_box_dummy/Saturation */
   double Saturation1;              /* rt_box_dummy/Saturation1 */
   double Gain2;                    /* rt_box_dummy/Gain2 */
   double Product;                  /* rt_box_dummy/Product */
   double AngleSensor;              /* rt_box_dummy/Angle Sensor */
   double p_thetam;                 /* rt_box_dummy/Perm.-Magnet SM/p*thetam */
   double TrigonometricFunction2;   /* rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Cos/Sin/Trigonometric Function2 */
   double TrigonometricFunction1;   /* rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Cos/Sin/Trigonometric Function1 */
   double i_a;                      /* rt_box_dummy/Perm.-Magnet SM/Electrical model/Rotor reference frame/Sub/i_a */
   float PWMCapture1;               /* rt_box_dummy/PWM Capture1 */
   float PWMCapture2;               /* rt_box_dummy/PWM Capture2 */
   float PWMCapture3;               /* rt_box_dummy/PWM Capture3 */
   float PWMCapture4;               /* rt_box_dummy/PWM Capture4 */
   float PWMCapture5;               /* rt_box_dummy/PWM Capture5 */
   float PWMCapture6;               /* rt_box_dummy/PWM Capture6 */
   bool GD_Enable;                  /* rt_box_dummy/GD_Enable */
   bool Switch;                     /* rt_box_dummy/Switch */
   double Switch_i1[6];             /* rt_box_dummy/Switch */
   bool RelationalOperator3;        /* rt_box_dummy/Relational Operator3 */
   double DataType6;                /* rt_box_dummy/Data Type6 */
   double DataType;                 /* rt_box_dummy/Data Type */
   double GateSignalPreprocessing[3]; /* rt_box_dummy/HB3/Sub-cycle average/Gate Signal Combination/Hardware Preprocessing/Gate Signal Preprocessing */
   bool RelationalOperator4;        /* rt_box_dummy/Relational Operator4 */
   double DataType7;                /* rt_box_dummy/Data Type7 */
   double DataType1;                /* rt_box_dummy/Data Type1 */
   double GateSignalPreprocessing_1[3]; /* rt_box_dummy/HB4/Sub-cycle average/Gate Signal Combination/Hardware Preprocessing/Gate Signal Preprocessing */
   bool RelationalOperator5;        /* rt_box_dummy/Relational Operator5 */
   double DataType8;                /* rt_box_dummy/Data Type8 */
   double DataType2;                /* rt_box_dummy/Data Type2 */
   double GateSignalPreprocessing_2[3]; /* rt_box_dummy/HB5/Sub-cycle average/Gate Signal Combination/Hardware Preprocessing/Gate Signal Preprocessing */
   double UHB_1_i2[2];              /* rt_box_dummy/HB3/Sub-cycle average/UHB/UHB */
   double UHB_2_i2[2];              /* rt_box_dummy/HB5/Sub-cycle average/UHB/UHB */
   double UHB_i2[2];                /* rt_box_dummy/HB4/Sub-cycle average/UHB/UHB */
   bool SPISlave_bool;              /* rt_box_dummy/SPI Slave */
   uint8_t SPISlave_uint8_t[5];     /* rt_box_dummy/SPI Slave */
   double TransferFcn[2];           /* rt_box_dummy/Transfer Fcn */
   double Gain4;                    /* rt_box_dummy/Gain4 */
   double SineWave3;                /* rt_box_dummy/Sine Wave3 */
   double Sum[3];                   /* rt_box_dummy/Sum */
   double Gain;                     /* rt_box_dummy/Gain */
   double Math;                     /* rt_box_dummy/Math */
   double Gain1;                    /* rt_box_dummy/Gain1 */
   double Gain5;                    /* rt_box_dummy/Gain5 */
   double Cos;                      /* rt_box_dummy/3ph->RRF/Cos */
   double Sin;                      /* rt_box_dummy/3ph->RRF/Sin */
   double abc_d;                    /* rt_box_dummy/3ph->RRF/abc->d */
   double abc_q;                    /* rt_box_dummy/3ph->RRF/abc->q */
   double p_wm;                     /* rt_box_dummy/Perm.-Magnet SM/p*wm */
} rt_box_dummy_BlockOutputs;
extern rt_box_dummy_BlockOutputs rt_box_dummy_B;

#if defined(EXTERNAL_MODE) && EXTERNAL_MODE
/* External mode signals */
#define rt_box_dummy_NumExtModeSignals 55
extern const double * const rt_box_dummy_ExtModeSignals[];
/* Tunable parameters */
#define rt_box_dummy_NumTunableParameters 0
#endif /* defined(EXTERNAL_MODE) */


/* Entry point functions */
void rt_box_dummy_initialize(double time);
void rt_box_dummy_step(void);
void rt_box_dummy_terminate(void);

#endif /* PLECS_HEADER_rt_box_dummy_h_ */
