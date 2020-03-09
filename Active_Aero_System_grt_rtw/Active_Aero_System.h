/*
 * Active_Aero_System.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Active_Aero_System".
 *
 * Model version              : 1.162
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C++ source code generated on : Sat Mar  7 23:35:38 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Active_Aero_System_h_
#define RTW_HEADER_Active_Aero_System_h_
#include <cmath>
#include <cfloat>
#include <stddef.h>
#include <cstring>
#ifndef Active_Aero_System_COMMON_INCLUDES_
# define Active_Aero_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Active_Aero_System_COMMON_INCLUDES_ */

#include "Active_Aero_System_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
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
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals for system '<S3>/If Action Subsystem2' */
typedef struct {
  real_T In1;                          /* '<S47>/In1' */
} B_IfActionSubsystem2_Active_A_T;

/* Block signals (default storage) */
typedef struct {
  real_T Gain1;                        /* '<S6>/Gain1' */
  real_T Subtract;                     /* '<S6>/Subtract' */
  real_T Product6;                     /* '<S6>/Product6' */
  real_T UnitDelay2;                   /* '<S6>/Unit Delay2' */
  real_T Add;                          /* '<S5>/Add' */
  real_T Square;                       /* '<S5>/Square' */
  real_T Multiply[2];                  /* '<S5>/Multiply' */
  real_T Product1[2];                  /* '<S5>/Product1' */
  real_T Product[2];                   /* '<S5>/Product' */
  real_T Add2;                         /* '<S6>/Add2' */
  real_T Product5;                     /* '<S6>/Product5' */
  real_T Product4;                     /* '<S6>/Product4' */
  real_T UnitDelay1;                   /* '<S6>/Unit Delay1' */
  real_T Add_k;                        /* '<S6>/Add' */
  real_T Gain;                         /* '<S6>/Gain' */
  real_T Product7;                     /* '<S6>/Product7' */
  real_T Product8;                     /* '<S6>/Product8' */
  real_T Add1;                         /* '<S6>/Add1' */
  real_T Merge;                        /* '<S6>/Merge' */
  real_T Subtract1;                    /* '<S6>/Subtract1' */
  real_T Product_k;                    /* '<S6>/Product' */
  real_T Product10;                    /* '<S6>/Product10' */
  real_T Add3;                         /* '<S6>/Add3' */
  real_T Switch1;                      /* '<S6>/Switch1' */
  real_T Gain_m;                       /* '<S1>/Gain' */
  real_T Product11;                    /* '<S6>/Product11' */
  real_T UnitDelay3;                   /* '<S6>/Unit Delay3' */
  real_T Add4;                         /* '<S6>/Add4' */
  real_T Switch2;                      /* '<S6>/Switch2' */
  real_T Product3;                     /* '<S6>/Product3' */
  real_T Product9;                     /* '<S6>/Product9' */
  real_T Memory;                       /* '<S27>/Memory' */
  real_T Merge4;                       /* '<S59>/Merge4' */
  real_T Merge4_m;                     /* '<S58>/Merge4' */
  real_T Subtract_g;                   /* '<S16>/Subtract' */
  real_T Abs;                          /* '<S16>/Abs' */
  real_T Merge4_d;                     /* '<S60>/Merge4' */
  real_T Subtract_b;                   /* '<S21>/Subtract' */
  real_T Abs_d;                        /* '<S21>/Abs' */
  real_T Merge4_i;                     /* '<S62>/Merge4' */
  real_T Subtract_l;                   /* '<S23>/Subtract' */
  real_T Abs_de;                       /* '<S23>/Abs' */
  real_T Merge_j;                      /* '<S3>/Merge' */
  real_T Switch;                       /* '<S27>/Switch' */
  real_T Memory_f;                     /* '<S26>/Memory' */
  real_T UnitDelay;                    /* '<S3>/Unit Delay' */
  real_T Subtract_p;                   /* '<S18>/Subtract' */
  real_T Abs_g;                        /* '<S18>/Abs' */
  real_T UnitDelay1_j;                 /* '<S3>/Unit Delay1' */
  real_T Subtract_a;                   /* '<S19>/Subtract' */
  real_T Abs_g1;                       /* '<S19>/Abs' */
  real_T Switch_l;                     /* '<S26>/Switch' */
  real_T Memory_p;                     /* '<S56>/Memory' */
  real_T Switch_a;                     /* '<S56>/Switch' */
  real_T Memory_l;                     /* '<S28>/Memory' */
  real_T Subtract_e;                   /* '<S25>/Subtract' */
  real_T Abs_dj;                       /* '<S25>/Abs' */
  real_T Switch_o;                     /* '<S28>/Switch' */
  real_T Memory_a;                     /* '<S30>/Memory' */
  real_T Merge4_a;                     /* '<S61>/Merge4' */
  real_T Subtract_h;                   /* '<S22>/Subtract' */
  real_T Abs_i;                        /* '<S22>/Abs' */
  real_T Subtract_o;                   /* '<S17>/Subtract' */
  real_T Abs_m;                        /* '<S17>/Abs' */
  real_T Merge4_iz;                    /* '<S63>/Merge4' */
  real_T Subtract_f;                   /* '<S24>/Subtract' */
  real_T Abs_dee;                      /* '<S24>/Abs' */
  real_T Subtract_c;                   /* '<S20>/Subtract' */
  real_T Abs_e;                        /* '<S20>/Abs' */
  real_T Switch_e;                     /* '<S30>/Switch' */
  real_T Memory_e;                     /* '<S39>/Memory' */
  real_T Switch_h;                     /* '<S39>/Switch' */
  real_T Memory_i;                     /* '<S31>/Memory' */
  real_T Switch_m;                     /* '<S31>/Switch' */
  real_T Add_l;                        /* '<S3>/Add' */
  real_T Gain_me;                      /* '<S4>/Gain' */
  real_T Product_c;                    /* '<S4>/Product' */
  real_T Max;                          /* '<S4>/Max' */
  real_T Product1_h;                   /* '<S4>/Product1' */
  real_T Max1;                         /* '<S4>/Max1' */
  real_T y;                            /* '<S38>/bit_shift' */
  real_T y_n;                          /* '<S37>/bit_shift' */
  real_T y_d;                          /* '<S36>/bit_shift' */
  real_T y_j;                          /* '<S35>/bit_shift' */
  real_T y_o;                          /* '<S34>/bit_shift' */
  real_T y_k;                          /* '<S33>/bit_shift' */
  real_T y_jv;                         /* '<S32>/bit_shift' */
  real_T UnitDelay_n;                  /* '<S2>/Unit Delay' */
  real_T Subtract_aa;                  /* '<S2>/Subtract' */
  real_T Abs_dja;                      /* '<S2>/Abs' */
  real_T UnitDelay2_m;                 /* '<S2>/Unit Delay2' */
  real_T UnitDelay1_n;                 /* '<S2>/Unit Delay1' */
  real_T Subtract1_h;                  /* '<S2>/Subtract1' */
  real_T Product1_k;                   /* '<S10>/Product1' */
  real_T Memory_d;                     /* '<S2>/Memory' */
  real_T Product_h;                    /* '<S10>/Product' */
  real_T MaxFX;                        /* '<S10>/MaxFX ' */
  real_T UnitDelay5;                   /* '<S2>/Unit Delay5' */
  real_T UnitDelay3_o;                 /* '<S2>/Unit Delay3' */
  real_T UnitDelay4;                   /* '<S2>/Unit Delay4' */
  real_T Merge_d;                      /* '<S2>/Merge' */
  real_T Merge1;                       /* '<S2>/Merge1' */
  real_T Switch1_a;                    /* '<S2>/Switch1' */
  real_T Subtract_k;                   /* '<S15>/Subtract' */
  real_T Subtract_hw;                  /* '<S14>/Subtract' */
  real_T y_n4;                         /* '<S2>/Chart' */
  real_T Product_e;                    /* '<S7>/Product' */
  real_T MaxFX_b;                      /* '<S7>/MaxFX ' */
  real_T Product1_l;                   /* '<S7>/Product1' */
  real_T Product_b;                    /* '<S8>/Product' */
  real_T MaxFX_n;                      /* '<S8>/MaxFX ' */
  real_T Product1_a;                   /* '<S8>/Product1' */
  real_T MinMax;                       /* '<S8>/MinMax' */
  real_T Gain_j;                       /* '<S8>/Gain' */
  boolean_T GreaterThan;               /* '<S16>/GreaterThan' */
  boolean_T Equal;                     /* '<S16>/Equal' */
  boolean_T Equal1;                    /* '<S16>/Equal1' */
  boolean_T OR;                        /* '<S16>/OR' */
  boolean_T GreaterThan_b;             /* '<S21>/GreaterThan' */
  boolean_T Equal_j;                   /* '<S21>/Equal' */
  boolean_T Equal1_h;                  /* '<S21>/Equal1' */
  boolean_T OR_a;                      /* '<S21>/OR' */
  boolean_T GreaterThan_a;             /* '<S23>/GreaterThan' */
  boolean_T Equal_a;                   /* '<S23>/Equal' */
  boolean_T Equal1_i;                  /* '<S23>/Equal1' */
  boolean_T OR_l;                      /* '<S23>/OR' */
  boolean_T GreaterThan_h;             /* '<S18>/GreaterThan' */
  boolean_T Equal_c;                   /* '<S18>/Equal' */
  boolean_T Equal1_a;                  /* '<S18>/Equal1' */
  boolean_T OR_h;                      /* '<S18>/OR' */
  boolean_T GreaterThan_n;             /* '<S19>/GreaterThan' */
  boolean_T Equal_p;                   /* '<S19>/Equal' */
  boolean_T Equal1_b;                  /* '<S19>/Equal1' */
  boolean_T OR_d;                      /* '<S19>/OR' */
  boolean_T GreaterThan_l;             /* '<S25>/GreaterThan' */
  boolean_T Equal_g;                   /* '<S25>/Equal' */
  boolean_T Equal1_k;                  /* '<S25>/Equal1' */
  boolean_T OR_k;                      /* '<S25>/OR' */
  boolean_T GreaterThan_j;             /* '<S22>/GreaterThan' */
  boolean_T Equal_au;                  /* '<S22>/Equal' */
  boolean_T Equal1_j;                  /* '<S22>/Equal1' */
  boolean_T OR_n;                      /* '<S22>/OR' */
  boolean_T GreaterThan_at;            /* '<S17>/GreaterThan' */
  boolean_T Equal_h;                   /* '<S17>/Equal' */
  boolean_T Equal1_jk;                 /* '<S17>/Equal1' */
  boolean_T OR_p;                      /* '<S17>/OR' */
  boolean_T GreaterThan_e;             /* '<S24>/GreaterThan' */
  boolean_T Equal_d;                   /* '<S24>/Equal' */
  boolean_T Equal1_a3;                 /* '<S24>/Equal1' */
  boolean_T OR_o;                      /* '<S24>/OR' */
  boolean_T GreaterThan_m;             /* '<S20>/GreaterThan' */
  boolean_T Equal_auq;                 /* '<S20>/Equal' */
  boolean_T Equal1_n;                  /* '<S20>/Equal1' */
  boolean_T OR_m;                      /* '<S20>/OR' */
  boolean_T OR2;                       /* '<S3>/OR2' */
  boolean_T OR1;                       /* '<S3>/OR1' */
  boolean_T OR_mz;                     /* '<S3>/OR' */
  boolean_T GreaterThan_g;             /* '<S2>/GreaterThan' */
  boolean_T LessThan;                  /* '<S10>/Less Than' */
  boolean_T GreaterThan1;              /* '<S2>/GreaterThan1' */
  boolean_T Threshold;                 /* '<S2>/Threshold' */
  boolean_T LessThan_e;                /* '<S2>/Less Than' */
  boolean_T NOT;                       /* '<S2>/NOT' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem1_c;/* '<S3>/If Action Subsystem1' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem10;/* '<S3>/If Action Subsystem10' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem21;/* '<S3>/If Action Subsystem21' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem18;/* '<S3>/If Action Subsystem18' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem17;/* '<S3>/If Action Subsystem17' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem19;/* '<S3>/If Action Subsystem19' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem20;/* '<S3>/If Action Subsystem20' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem16;/* '<S3>/If Action Subsystem16' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem7;/* '<S3>/If Action Subsystem7' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem8;/* '<S3>/If Action Subsystem8' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem9;/* '<S3>/If Action Subsystem9' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem6;/* '<S3>/If Action Subsystem6' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem3;/* '<S3>/If Action Subsystem3' */
  B_IfActionSubsystem2_Active_A_T IfActionSubsystem2_b;/* '<S3>/If Action Subsystem2' */
} B_Active_Aero_System_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay2_DSTATE;            /* '<S6>/Unit Delay2' */
  real_T UnitDelay1_DSTATE;            /* '<S6>/Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S6>/Unit Delay3' */
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j;          /* '<S3>/Unit Delay1' */
  real_T UnitDelay_DSTATE_n;           /* '<S2>/Unit Delay' */
  real_T UnitDelay2_DSTATE_k;          /* '<S2>/Unit Delay2' */
  real_T UnitDelay1_DSTATE_h;          /* '<S2>/Unit Delay1' */
  real_T UnitDelay5_DSTATE;            /* '<S2>/Unit Delay5' */
  real_T UnitDelay3_DSTATE_b;          /* '<S2>/Unit Delay3' */
  real_T UnitDelay4_DSTATE;            /* '<S2>/Unit Delay4' */
  real_T Memory_PreviousInput;         /* '<S27>/Memory' */
  real_T Memory_PreviousInput_b;       /* '<S26>/Memory' */
  real_T Memory_PreviousInput_l;       /* '<S56>/Memory' */
  real_T Memory_PreviousInput_a;       /* '<S28>/Memory' */
  real_T Memory_PreviousInput_k;       /* '<S30>/Memory' */
  real_T Memory_PreviousInput_p;       /* '<S39>/Memory' */
  real_T Memory_PreviousInput_e;       /* '<S31>/Memory' */
  real_T Memory_PreviousInput_bz;      /* '<S2>/Memory' */
  struct {
    void *LoggedData[5];
  } ControlDecisions_PWORK;            /* '<Root>/Control Decisions' */

  struct {
    void *LoggedData[6];
  } ControlEffects_PWORK;              /* '<Root>/Control Effects' */

  struct {
    void *LoggedData[6];
  } EnvironmentEffects_PWORK;          /* '<Root>/Environment Effects' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S6>/Scope' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<S6>/Scope4' */

  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<S3>/Scope2' */

  struct {
    void *LoggedData[2];
  } Scope3_PWORK;                      /* '<S3>/Scope3' */

  uint8_T is_active_c3_Active_Aero_System;/* '<S2>/Chart' */
  uint8_T is_c3_Active_Aero_System;    /* '<S2>/Chart' */
} DW_Active_Aero_System_T;

/* Parameters for system: '<S3>/If Action Subsystem2' */
struct P_IfActionSubsystem2_Active_A_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S47>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_Active_Aero_System_T_ {
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S6>/Constant9'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S6>/Constant8'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T MaxFX_tableData[100];         /* Expression: [870.52
                                          884.5
                                          898.49
                                          912.73
                                          926.94
                                          941.16
                                          955.39
                                          969.63
                                          983.88
                                          998.15
                                          1012.4
                                          1026.7
                                          1041.2
                                          1055.7
                                          1070.2
                                          1084.7
                                          1099.2
                                          1113.7
                                          1128.3
                                          1142.9
                                          1157.5
                                          1172.3
                                          1187
                                          1201.8
                                          1216.6
                                          1231.4
                                          1246.1
                                          1261
                                          1276
                                          1291
                                          1306
                                          1321
                                          1336
                                          1351.1
                                          1364.8
                                          1378.5
                                          1392.3
                                          1406
                                          1419.8
                                          1433.6
                                          1447.4
                                          1461.2
                                          1475
                                          1488.9
                                          1502.7
                                          1516.6
                                          1530.5
                                          1544.3
                                          1558.2
                                          1572.1
                                          1586.1
                                          1600
                                          1613.9
                                          1627.9
                                          1641.9
                                          1655.8
                                          1669.8
                                          1683.8
                                          1697.9
                                          1711.9
                                          1726
                                          1740
                                          1754.1
                                          1768.2
                                          1782.4
                                          1796.5
                                          1810.6
                                          1824.3
                                          1838
                                          1851.6
                                          1865.3
                                          1879.1
                                          1892.8
                                          1906.6
                                          1920.4
                                          1934.2
                                          1948
                                          1961.8
                                          1975.6
                                          1989.5
                                          2003.3
                                          2017.2
                                          2031.1
                                          2045
                                          2058.9
                                          2072.8
                                          2086.7
                                          2100.7
                                          2114.6
                                          2128.6
                                          2142.6
                                          2156.6
                                          2170.6
                                          2184.6
                                          2198.6
                                          2212.6
                                          2226.7
                                          2240.8
                                          2254.8
                                          2268.9]

                                        * Referenced by: '<S8>/MaxFX '
                                        */
  real_T MaxFX_bp01Data[100];          /* Expression: [333.6
                                          340.34
                                          347.08
                                          353.82
                                          360.56
                                          367.3
                                          374.04
                                          380.78
                                          387.52
                                          394.25
                                          400.99
                                          407.73
                                          414.47
                                          421.21
                                          427.95
                                          434.69
                                          441.43
                                          448.17
                                          454.91
                                          461.65
                                          468.39
                                          475.13
                                          481.87
                                          488.61
                                          495.35
                                          502.08
                                          508.82
                                          515.56
                                          522.3
                                          529.04
                                          535.78
                                          542.52
                                          549.26
                                          556
                                          562.74
                                          569.48
                                          576.22
                                          582.96
                                          589.7
                                          596.44
                                          603.18
                                          609.92
                                          616.65
                                          623.39
                                          630.13
                                          636.87
                                          643.61
                                          650.35
                                          657.09
                                          663.83
                                          670.57
                                          677.31
                                          684.05
                                          690.79
                                          697.53
                                          704.27
                                          711.01
                                          717.75
                                          724.48
                                          731.22
                                          737.96
                                          744.7
                                          751.44
                                          758.18
                                          764.92
                                          771.66
                                          778.4
                                          785.14
                                          791.88
                                          798.62
                                          805.36
                                          812.1
                                          818.84
                                          825.58
                                          832.32
                                          839.05
                                          845.79
                                          852.53
                                          859.27
                                          866.01
                                          872.75
                                          879.49
                                          886.23
                                          892.97
                                          899.71
                                          906.45
                                          913.19
                                          919.93
                                          926.67
                                          933.41
                                          940.15
                                          946.88
                                          953.62
                                          960.36
                                          967.1
                                          973.84
                                          980.58
                                          987.32
                                          994.06
                                          1000.8]
                                        * Referenced by: '<S8>/MaxFX '
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S8>/Switch'
                                        */
  real_T Constant_Value_j;             /* Expression: 2
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T MaxFX_tableData_n[100];       /* Expression: [870.52
                                          884.5
                                          898.49
                                          912.73
                                          926.94
                                          941.16
                                          955.39
                                          969.63
                                          983.88
                                          998.15
                                          1012.4
                                          1026.7
                                          1041.2
                                          1055.7
                                          1070.2
                                          1084.7
                                          1099.2
                                          1113.7
                                          1128.3
                                          1142.9
                                          1157.5
                                          1172.3
                                          1187
                                          1201.8
                                          1216.6
                                          1231.4
                                          1246.1
                                          1261
                                          1276
                                          1291
                                          1306
                                          1321
                                          1336
                                          1351.1
                                          1364.8
                                          1378.5
                                          1392.3
                                          1406
                                          1419.8
                                          1433.6
                                          1447.4
                                          1461.2
                                          1475
                                          1488.9
                                          1502.7
                                          1516.6
                                          1530.5
                                          1544.3
                                          1558.2
                                          1572.1
                                          1586.1
                                          1600
                                          1613.9
                                          1627.9
                                          1641.9
                                          1655.8
                                          1669.8
                                          1683.8
                                          1697.9
                                          1711.9
                                          1726
                                          1740
                                          1754.1
                                          1768.2
                                          1782.4
                                          1796.5
                                          1810.6
                                          1824.3
                                          1838
                                          1851.6
                                          1865.3
                                          1879.1
                                          1892.8
                                          1906.6
                                          1920.4
                                          1934.2
                                          1948
                                          1961.8
                                          1975.6
                                          1989.5
                                          2003.3
                                          2017.2
                                          2031.1
                                          2045
                                          2058.9
                                          2072.8
                                          2086.7
                                          2100.7
                                          2114.6
                                          2128.6
                                          2142.6
                                          2156.6
                                          2170.6
                                          2184.6
                                          2198.6
                                          2212.6
                                          2226.7
                                          2240.8
                                          2254.8
                                          2268.9]

                                        * Referenced by: '<S7>/MaxFX '
                                        */
  real_T MaxFX_bp01Data_k[100];        /* Expression: [333.6
                                          340.34
                                          347.08
                                          353.82
                                          360.56
                                          367.3
                                          374.04
                                          380.78
                                          387.52
                                          394.25
                                          400.99
                                          407.73
                                          414.47
                                          421.21
                                          427.95
                                          434.69
                                          441.43
                                          448.17
                                          454.91
                                          461.65
                                          468.39
                                          475.13
                                          481.87
                                          488.61
                                          495.35
                                          502.08
                                          508.82
                                          515.56
                                          522.3
                                          529.04
                                          535.78
                                          542.52
                                          549.26
                                          556
                                          562.74
                                          569.48
                                          576.22
                                          582.96
                                          589.7
                                          596.44
                                          603.18
                                          609.92
                                          616.65
                                          623.39
                                          630.13
                                          636.87
                                          643.61
                                          650.35
                                          657.09
                                          663.83
                                          670.57
                                          677.31
                                          684.05
                                          690.79
                                          697.53
                                          704.27
                                          711.01
                                          717.75
                                          724.48
                                          731.22
                                          737.96
                                          744.7
                                          751.44
                                          758.18
                                          764.92
                                          771.66
                                          778.4
                                          785.14
                                          791.88
                                          798.62
                                          805.36
                                          812.1
                                          818.84
                                          825.58
                                          832.32
                                          839.05
                                          845.79
                                          852.53
                                          859.27
                                          866.01
                                          872.75
                                          879.49
                                          886.23
                                          892.97
                                          899.71
                                          906.45
                                          913.19
                                          919.93
                                          926.67
                                          933.41
                                          940.15
                                          946.88
                                          953.62
                                          960.36
                                          967.1
                                          973.84
                                          980.58
                                          987.32
                                          994.06
                                          1000.8]
                                        * Referenced by: '<S7>/MaxFX '
                                        */
  real_T Constant_Value_d;             /* Expression: 100
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant_Value_p;             /* Expression: 10
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 10
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Constant1_Value_n;            /* Expression: 100
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay2'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay1'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 2.5
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 128
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T Constant_Value_j0;            /* Expression: 2
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T Constant4_Value_e;            /* Expression: Cnst_Veh_MaxFrc_N
                                        * Referenced by: '<S10>/Constant4'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S2>/Memory'
                                        */
  real_T MaxFX_tableData_k[100];       /* Expression: [870.52
                                          884.5
                                          898.49
                                          912.73
                                          926.94
                                          941.16
                                          955.39
                                          969.63
                                          983.88
                                          998.15
                                          1012.4
                                          1026.7
                                          1041.2
                                          1055.7
                                          1070.2
                                          1084.7
                                          1099.2
                                          1113.7
                                          1128.3
                                          1142.9
                                          1157.5
                                          1172.3
                                          1187
                                          1201.8
                                          1216.6
                                          1231.4
                                          1246.1
                                          1261
                                          1276
                                          1291
                                          1306
                                          1321
                                          1336
                                          1351.1
                                          1364.8
                                          1378.5
                                          1392.3
                                          1406
                                          1419.8
                                          1433.6
                                          1447.4
                                          1461.2
                                          1475
                                          1488.9
                                          1502.7
                                          1516.6
                                          1530.5
                                          1544.3
                                          1558.2
                                          1572.1
                                          1586.1
                                          1600
                                          1613.9
                                          1627.9
                                          1641.9
                                          1655.8
                                          1669.8
                                          1683.8
                                          1697.9
                                          1711.9
                                          1726
                                          1740
                                          1754.1
                                          1768.2
                                          1782.4
                                          1796.5
                                          1810.6
                                          1824.3
                                          1838
                                          1851.6
                                          1865.3
                                          1879.1
                                          1892.8
                                          1906.6
                                          1920.4
                                          1934.2
                                          1948
                                          1961.8
                                          1975.6
                                          1989.5
                                          2003.3
                                          2017.2
                                          2031.1
                                          2045
                                          2058.9
                                          2072.8
                                          2086.7
                                          2100.7
                                          2114.6
                                          2128.6
                                          2142.6
                                          2156.6
                                          2170.6
                                          2184.6
                                          2198.6
                                          2212.6
                                          2226.7
                                          2240.8
                                          2254.8
                                          2268.9]

                                        * Referenced by: '<S10>/MaxFX '
                                        */
  real_T MaxFX_bp01Data_b[100];        /* Expression: [333.6
                                          340.34
                                          347.08
                                          353.82
                                          360.56
                                          367.3
                                          374.04
                                          380.78
                                          387.52
                                          394.25
                                          400.99
                                          407.73
                                          414.47
                                          421.21
                                          427.95
                                          434.69
                                          441.43
                                          448.17
                                          454.91
                                          461.65
                                          468.39
                                          475.13
                                          481.87
                                          488.61
                                          495.35
                                          502.08
                                          508.82
                                          515.56
                                          522.3
                                          529.04
                                          535.78
                                          542.52
                                          549.26
                                          556
                                          562.74
                                          569.48
                                          576.22
                                          582.96
                                          589.7
                                          596.44
                                          603.18
                                          609.92
                                          616.65
                                          623.39
                                          630.13
                                          636.87
                                          643.61
                                          650.35
                                          657.09
                                          663.83
                                          670.57
                                          677.31
                                          684.05
                                          690.79
                                          697.53
                                          704.27
                                          711.01
                                          717.75
                                          724.48
                                          731.22
                                          737.96
                                          744.7
                                          751.44
                                          758.18
                                          764.92
                                          771.66
                                          778.4
                                          785.14
                                          791.88
                                          798.62
                                          805.36
                                          812.1
                                          818.84
                                          825.58
                                          832.32
                                          839.05
                                          845.79
                                          852.53
                                          859.27
                                          866.01
                                          872.75
                                          879.49
                                          886.23
                                          892.97
                                          899.71
                                          906.45
                                          913.19
                                          919.93
                                          926.67
                                          933.41
                                          940.15
                                          946.88
                                          953.62
                                          960.36
                                          967.1
                                          973.84
                                          980.58
                                          987.32
                                          994.06
                                          1000.8]
                                        * Referenced by: '<S10>/MaxFX '
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay5'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay3'
                                        */
  real_T MAX_SAFE_SPEED_Value;         /* Expression: 100
                                        * Referenced by: '<S2>/MAX_SAFE_SPEED'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S2>/Zero'
                                        */
  real_T UnitDelay4_InitialCondition;  /* Expression: 100
                                        * Referenced by: '<S2>/Unit Delay4'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S2>/Switch1'
                                        */
  real_T Constant_Value_h;             /* Expression: 2
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: 0.9
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant2_Value_o;            /* Expression: 4.105
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T Constant3_Value_l;            /* Expression: 1.4
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.01
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Constant1_Value_fl;           /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.01
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Constant4_Value_i;            /* Expression: Cnst_Veh_MaxFrc_N
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real_T Constant1_Value_k;            /* Expression: Cnst_Veh_WhlBase_M
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Constant2_Value_e;            /* Expression: Cnst_Veh_CGx_M
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real_T Constant7_Value;              /* Expression: Cnst_Grav
                                        * Referenced by: '<S6>/Constant7'
                                        */
  real_T Constant_Value_c;             /* Expression: Cnst_Veh_Mass_KG
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T UnitDelay2_InitialCondition_k;/* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay2'
                                        */
  real_T Constant2_Value_ob;           /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value_lc;           /* Expression: 1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant_Value_cq;            /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Multiply_Gain;                /* Expression: 0.5
                                        * Referenced by: '<S5>/Multiply'
                                        */
  real_T UnitDelay1_InitialCondition_m;/* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay1'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 0.01
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Constant6_Value;              /* Expression: Cnst_ExecTime_S
                                        * Referenced by: '<S6>/Constant6'
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 0
                                        * Referenced by: '<S6>/Switch1'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 3.6
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T UnitDelay3_InitialCondition_h;/* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay3'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S6>/Switch2'
                                        */
  real_T Constant3_Value_e;            /* Expression: Cnst_Veh_CGz_M
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real_T Constant4_Value_o;            /* Expression: 1
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Memory_InitialCondition_f;    /* Expression: 0
                                        * Referenced by: '<S27>/Memory'
                                        */
  real_T Constant_Value_k;             /* Expression: -1
                                        * Referenced by: '<S59>/Constant'
                                        */
  real_T Constant_Value_jf;            /* Expression: -1
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T ERR_TOLERANCE_Value;          /* Expression: 0.01
                                        * Referenced by: '<S3>/ERR_TOLERANCE'
                                        */
  real_T Constant_Value_o;             /* Expression: -1
                                        * Referenced by: '<S16>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: -1
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: -1
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: -1
                                        * Referenced by: '<S62>/Constant'
                                        */
  real_T Constant_Value_kt;            /* Expression: -1
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: -1
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T ERR_TOLERANCE1_Value;         /* Expression: 0.01
                                        * Referenced by: '<S3>/ERR_TOLERANCE1'
                                        */
  real_T ONE_Value;                    /* Expression: 1
                                        * Referenced by: '<S3>/ONE'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0
                                        * Referenced by: '<S27>/Switch'
                                        */
  real_T Memory_InitialCondition_d;    /* Expression: 0
                                        * Referenced by: '<S26>/Memory'
                                        */
  real_T UnitDelay_InitialCondition_i; /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T MAX_ACT_CHANGE_Value;         /* Expression: 10
                                        * Referenced by: '<S3>/MAX_ACT_CHANGE'
                                        */
  real_T Constant_Value_gd;            /* Expression: -1
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T UnitDelay1_InitialCondition_f;/* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay1'
                                        */
  real_T Constant_Value_f;             /* Expression: -1
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S26>/Switch'
                                        */
  real_T Memory_InitialCondition_b;    /* Expression: 0
                                        * Referenced by: '<S56>/Memory'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
                                        * Referenced by: '<S56>/Switch'
                                        */
  real_T Memory_InitialCondition_p;    /* Expression: 0
                                        * Referenced by: '<S28>/Memory'
                                        */
  real_T RESP_OUT_OF_RANGE_THRESH_Value;/* Expression: 5
                                         * Referenced by: '<S3>/RESP_OUT_OF_RANGE_THRESH'
                                         */
  real_T Constant_Value_nc;            /* Expression: -1
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0
                                        * Referenced by: '<S28>/Switch'
                                        */
  real_T Memory_InitialCondition_m;    /* Expression: 0
                                        * Referenced by: '<S30>/Memory'
                                        */
  real_T Constant_Value_i;             /* Expression: -1
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T Constant_Value_ce;            /* Expression: -1
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Constant_Value_az;            /* Expression: -1
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Constant_Value_n4;            /* Expression: 1
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant_Value_n41;           /* Expression: -1
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: -1
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T Constant_Value_ah;            /* Expression: -1
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Switch_Threshold_g;           /* Expression: 0
                                        * Referenced by: '<S30>/Switch'
                                        */
  real_T Memory_InitialCondition_o;    /* Expression: 0
                                        * Referenced by: '<S39>/Memory'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S39>/Switch'
                                        */
  real_T Memory_InitialCondition_on;   /* Expression: 0
                                        * Referenced by: '<S31>/Memory'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S31>/Switch'
                                        */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem1_c;/* '<S3>/If Action Subsystem1' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem10;/* '<S3>/If Action Subsystem10' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem21;/* '<S3>/If Action Subsystem21' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem18;/* '<S3>/If Action Subsystem18' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem17;/* '<S3>/If Action Subsystem17' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem19;/* '<S3>/If Action Subsystem19' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem20;/* '<S3>/If Action Subsystem20' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem16;/* '<S3>/If Action Subsystem16' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem7;/* '<S3>/If Action Subsystem7' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem8;/* '<S3>/If Action Subsystem8' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem9;/* '<S3>/If Action Subsystem9' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem6;/* '<S3>/If Action Subsystem6' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem3;/* '<S3>/If Action Subsystem3' */
  P_IfActionSubsystem2_Active_A_T IfActionSubsystem2_b;/* '<S3>/If Action Subsystem2' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Active_Aero_System_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Class declaration for model Active_Aero_System */
class Active_Aero_SystemModelClass {
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  Active_Aero_SystemModelClass();

  /* Destructor */
  ~Active_Aero_SystemModelClass();

  /* Real-Time Model get method */
  RT_MODEL_Active_Aero_System_T * getRTM();

  /* private data and function members */
 private:
  /* Tunable parameters */
  static P_Active_Aero_System_T Active_Aero_System_P;

  /* Block signals */
  B_Active_Aero_System_T Active_Aero_System_B;

  /* Block states */
  DW_Active_Aero_System_T Active_Aero_System_DW;

  /* Real-Time Model */
  RT_MODEL_Active_Aero_System_T Active_Aero_System_M;

  /* private member function(s) for subsystem '<S2>/If Action Subsystem1'*/
  void Active_Aero__IfActionSubsystem1(real_T rtu_In1, real_T *rty_Out1);

  /* private member function(s) for subsystem '<S3>/If Action Subsystem2'*/
  void Active__IfActionSubsystem2_Init(B_IfActionSubsystem2_Active_A_T *localB,
    P_IfActionSubsystem2_Active_A_T *localP);
  void Active_Aero__IfActionSubsystem2(real_T rtu_In1,
    B_IfActionSubsystem2_Active_A_T *localB);
};

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
 * '<Root>' : 'Active_Aero_System'
 * '<S1>'   : 'Active_Aero_System/Car Model'
 * '<S2>'   : 'Active_Aero_System/Controls'
 * '<S3>'   : 'Active_Aero_System/Diagnostics'
 * '<S4>'   : 'Active_Aero_System/Wing Pos to Aero Mapping'
 * '<S5>'   : 'Active_Aero_System/Car Model/Aero Model'
 * '<S6>'   : 'Active_Aero_System/Car Model/Subsystem'
 * '<S7>'   : 'Active_Aero_System/Car Model/Subsystem/If Action Subsystem1'
 * '<S8>'   : 'Active_Aero_System/Car Model/Subsystem/If Action Subsystem2'
 * '<S9>'   : 'Active_Aero_System/Controls/Chart'
 * '<S10>'  : 'Active_Aero_System/Controls/Downforce Request'
 * '<S11>'  : 'Active_Aero_System/Controls/If Action Subsystem'
 * '<S12>'  : 'Active_Aero_System/Controls/If Action Subsystem1'
 * '<S13>'  : 'Active_Aero_System/Controls/If Action Subsystem2'
 * '<S14>'  : 'Active_Aero_System/Controls/If Action Subsystem3'
 * '<S15>'  : 'Active_Aero_System/Controls/If Action Subsystem4'
 * '<S16>'  : 'Active_Aero_System/Diagnostics/AbsDiff'
 * '<S17>'  : 'Active_Aero_System/Diagnostics/AbsDiff1'
 * '<S18>'  : 'Active_Aero_System/Diagnostics/AbsDiff11'
 * '<S19>'  : 'Active_Aero_System/Diagnostics/AbsDiff12'
 * '<S20>'  : 'Active_Aero_System/Diagnostics/AbsDiff3'
 * '<S21>'  : 'Active_Aero_System/Diagnostics/AbsDiff5'
 * '<S22>'  : 'Active_Aero_System/Diagnostics/AbsDiff6'
 * '<S23>'  : 'Active_Aero_System/Diagnostics/AbsDiff7'
 * '<S24>'  : 'Active_Aero_System/Diagnostics/AbsDiff8'
 * '<S25>'  : 'Active_Aero_System/Diagnostics/AbsDiff9'
 * '<S26>'  : 'Active_Aero_System/Diagnostics/Actuators Changed WO CMD'
 * '<S27>'  : 'Active_Aero_System/Diagnostics/Actuators Not Working'
 * '<S28>'  : 'Active_Aero_System/Diagnostics/Actuators Out of Range'
 * '<S29>'  : 'Active_Aero_System/Diagnostics/Bad ACT Left OK ACT Right'
 * '<S30>'  : 'Active_Aero_System/Diagnostics/Bad Actuator'
 * '<S31>'  : 'Active_Aero_System/Diagnostics/BadSensors'
 * '<S32>'  : 'Active_Aero_System/Diagnostics/Bit Shift'
 * '<S33>'  : 'Active_Aero_System/Diagnostics/Bit Shift1'
 * '<S34>'  : 'Active_Aero_System/Diagnostics/Bit Shift2'
 * '<S35>'  : 'Active_Aero_System/Diagnostics/Bit Shift3'
 * '<S36>'  : 'Active_Aero_System/Diagnostics/Bit Shift4'
 * '<S37>'  : 'Active_Aero_System/Diagnostics/Bit Shift5'
 * '<S38>'  : 'Active_Aero_System/Diagnostics/Bit Shift7'
 * '<S39>'  : 'Active_Aero_System/Diagnostics/Communication Error'
 * '<S40>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem'
 * '<S41>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem1'
 * '<S42>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem10'
 * '<S43>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem16'
 * '<S44>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem17'
 * '<S45>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem18'
 * '<S46>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem19'
 * '<S47>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem2'
 * '<S48>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem20'
 * '<S49>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem21'
 * '<S50>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem3'
 * '<S51>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem5'
 * '<S52>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem6'
 * '<S53>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem7'
 * '<S54>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem8'
 * '<S55>'  : 'Active_Aero_System/Diagnostics/If Action Subsystem9'
 * '<S56>'  : 'Active_Aero_System/Diagnostics/Latcher4'
 * '<S57>'  : 'Active_Aero_System/Diagnostics/OK ACT :eft Bad ACT Right'
 * '<S58>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty'
 * '<S59>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty1'
 * '<S60>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty2'
 * '<S61>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty3'
 * '<S62>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty4'
 * '<S63>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty5'
 * '<S64>'  : 'Active_Aero_System/Diagnostics/Bit Shift/bit_shift'
 * '<S65>'  : 'Active_Aero_System/Diagnostics/Bit Shift1/bit_shift'
 * '<S66>'  : 'Active_Aero_System/Diagnostics/Bit Shift2/bit_shift'
 * '<S67>'  : 'Active_Aero_System/Diagnostics/Bit Shift3/bit_shift'
 * '<S68>'  : 'Active_Aero_System/Diagnostics/Bit Shift4/bit_shift'
 * '<S69>'  : 'Active_Aero_System/Diagnostics/Bit Shift5/bit_shift'
 * '<S70>'  : 'Active_Aero_System/Diagnostics/Bit Shift7/bit_shift'
 * '<S71>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty/If Action Subsystem14'
 * '<S72>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty/If Action Subsystem15'
 * '<S73>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty1/If Action Subsystem14'
 * '<S74>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty1/If Action Subsystem15'
 * '<S75>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty2/If Action Subsystem14'
 * '<S76>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty2/If Action Subsystem15'
 * '<S77>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty3/If Action Subsystem14'
 * '<S78>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty3/If Action Subsystem15'
 * '<S79>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty4/If Action Subsystem14'
 * '<S80>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty4/If Action Subsystem15'
 * '<S81>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty5/If Action Subsystem14'
 * '<S82>'  : 'Active_Aero_System/Diagnostics/UseControlValueIfFaulty5/If Action Subsystem15'
 */
#endif                                 /* RTW_HEADER_Active_Aero_System_h_ */
