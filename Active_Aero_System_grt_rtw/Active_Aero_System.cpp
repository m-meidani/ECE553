/*
 * Active_Aero_System.cpp
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

#include "Active_Aero_System.h"
#include "Active_Aero_System_private.h"

/* Named constants for Chart: '<S2>/Chart' */
const uint8_T Active_Aero_Syste_IN_SecondZero = 7U;
const uint8_T Active_Aero_System_IN_FirstOne = 1U;
const uint8_T Active_Aero_System_IN_FirstZero = 2U;
const uint8_T Active_Aero_System_IN_ForthOne = 3U;
const uint8_T Active_Aero_System_IN_ForthZero = 4U;
const uint8_T Active_Aero_System_IN_Normal = 5U;
const uint8_T Active_Aero_System_IN_SecondOne = 6U;
const uint8_T Active_Aero_System_IN_ThirdOne = 8U;
const uint8_T Active_Aero_System_IN_ThirdZero = 9U;
const uint8_T Active_Aero__IN_NO_ACTIVE_CHILD = 0U;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/*
 * Output and update for action system:
 *    '<S2>/If Action Subsystem1'
 *    '<S2>/If Action Subsystem'
 *    '<S2>/If Action Subsystem2'
 *    '<S3>/If Action Subsystem5'
 *    '<S3>/Bad ACT Left OK ACT Right'
 *    '<S3>/OK ACT :eft Bad ACT Right'
 *    '<S3>/If Action Subsystem'
 *    '<S58>/If Action Subsystem14'
 *    '<S58>/If Action Subsystem15'
 *    '<S59>/If Action Subsystem14'
 *    ...
 */
void Active_Aero_SystemModelClass::Active_Aero__IfActionSubsystem1(real_T
  rtu_In1, real_T *rty_Out1)
{
  /* Inport: '<S12>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * System initialize for action system:
 *    '<S3>/If Action Subsystem2'
 *    '<S3>/If Action Subsystem3'
 *    '<S3>/If Action Subsystem6'
 *    '<S3>/If Action Subsystem9'
 *    '<S3>/If Action Subsystem8'
 *    '<S3>/If Action Subsystem7'
 *    '<S3>/If Action Subsystem16'
 *    '<S3>/If Action Subsystem20'
 *    '<S3>/If Action Subsystem19'
 *    '<S3>/If Action Subsystem17'
 *    ...
 */
void Active_Aero_SystemModelClass::Active__IfActionSubsystem2_Init
  (B_IfActionSubsystem2_Active_A_T *localB, P_IfActionSubsystem2_Active_A_T
   *localP)
{
  /* SystemInitialize for Outport: '<S47>/Out1' */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<S3>/If Action Subsystem2'
 *    '<S3>/If Action Subsystem3'
 *    '<S3>/If Action Subsystem6'
 *    '<S3>/If Action Subsystem9'
 *    '<S3>/If Action Subsystem8'
 *    '<S3>/If Action Subsystem7'
 *    '<S3>/If Action Subsystem16'
 *    '<S3>/If Action Subsystem20'
 *    '<S3>/If Action Subsystem19'
 *    '<S3>/If Action Subsystem17'
 *    ...
 */
void Active_Aero_SystemModelClass::Active_Aero__IfActionSubsystem2(real_T
  rtu_In1, B_IfActionSubsystem2_Active_A_T *localB)
{
  /* Inport: '<S47>/In1' */
  localB->In1 = rtu_In1;
}

/* Model step function */
void Active_Aero_SystemModelClass::step()
{
  real_T u0;
  real_T u1;

  /* Gain: '<S6>/Gain1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  Active_Aero_System_B.Gain1 = Active_Aero_System_P.Gain1_Gain *
    Active_Aero_System_P.Constant1_Value_fl;

  /* Sum: '<S6>/Subtract' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   */
  Active_Aero_System_B.Subtract = Active_Aero_System_P.Constant1_Value_k -
    Active_Aero_System_P.Constant2_Value_e;

  /* Product: '<S6>/Product6' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant7'
   */
  Active_Aero_System_B.Product6 = Active_Aero_System_P.Constant7_Value *
    Active_Aero_System_P.Constant_Value_c;

  /* UnitDelay: '<S6>/Unit Delay2' */
  Active_Aero_System_B.UnitDelay2 = Active_Aero_System_DW.UnitDelay2_DSTATE;

  /* Sum: '<S5>/Add' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  Active_Aero_System_B.Add = Active_Aero_System_B.UnitDelay2 +
    Active_Aero_System_P.Constant2_Value_ob;

  /* Math: '<S5>/Square' */
  Active_Aero_System_B.Square = Active_Aero_System_B.Add *
    Active_Aero_System_B.Add;

  /* Outputs for Atomic SubSystem: '<Root>/Controls' */
  /* UnitDelay: '<S2>/Unit Delay' */
  Active_Aero_System_B.UnitDelay_n = Active_Aero_System_DW.UnitDelay_DSTATE_n;

  /* Sum: '<S2>/Subtract' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Active_Aero_System_B.Subtract_aa = Active_Aero_System_P.Constant_Value_cq -
    Active_Aero_System_B.UnitDelay_n;

  /* Abs: '<S2>/Abs' */
  Active_Aero_System_B.Abs_dja = std::abs(Active_Aero_System_B.Subtract_aa);

  /* UnitDelay: '<S2>/Unit Delay2' */
  Active_Aero_System_B.UnitDelay2_m = Active_Aero_System_DW.UnitDelay2_DSTATE_k;

  /* UnitDelay: '<S2>/Unit Delay1' */
  Active_Aero_System_B.UnitDelay1_n = Active_Aero_System_DW.UnitDelay1_DSTATE_h;

  /* Sum: '<S2>/Subtract1' */
  Active_Aero_System_B.Subtract1_h = Active_Aero_System_B.UnitDelay2_m -
    Active_Aero_System_B.UnitDelay1_n;

  /* RelationalOperator: '<S2>/GreaterThan' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  Active_Aero_System_B.GreaterThan_g = (Active_Aero_System_B.Subtract1_h <=
    Active_Aero_System_P.Constant1_Value_p);

  /* Chart: '<S2>/Chart' */
  if (Active_Aero_System_DW.is_active_c3_Active_Aero_System == 0U) {
    Active_Aero_System_DW.is_active_c3_Active_Aero_System = 1U;
    Active_Aero_System_DW.is_c3_Active_Aero_System =
      Active_Aero_System_IN_Normal;

    /* :  y=0; */
    Active_Aero_System_B.y_n4 = 0.0;
  } else {
    switch (Active_Aero_System_DW.is_c3_Active_Aero_System) {
     case Active_Aero_System_IN_FirstOne:
      /* :  sf_internal_predicateOutput = u==1; */
      if (Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_SecondOne;
      } else {
        /* :  sf_internal_predicateOutput = u==0; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      }
      break;

     case Active_Aero_System_IN_FirstZero:
      /* :  sf_internal_predicateOutput = u==0; */
      if (!Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_Syste_IN_SecondZero;
      } else {
        /* :  sf_internal_predicateOutput = u==1; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      }
      break;

     case Active_Aero_System_IN_ForthOne:
      /* :  sf_internal_predicateOutput = u==0; */
      if (!Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      } else {
        /* :  sf_internal_predicateOutput = u==1; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_ForthOne;

        /* :  y=1; */
        Active_Aero_System_B.y_n4 = 1.0;
      }
      break;

     case Active_Aero_System_IN_ForthZero:
      /* :  sf_internal_predicateOutput = u==0; */
      if (!Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_ForthZero;

        /* :  y=1; */
        Active_Aero_System_B.y_n4 = 1.0;
      } else {
        /* :  sf_internal_predicateOutput = u==1; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      }
      break;

     case Active_Aero_System_IN_Normal:
      /* :  sf_internal_predicateOutput = u==1; */
      if (Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_FirstOne;
      } else {
        /* :  sf_internal_predicateOutput = u==0; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_FirstZero;
      }
      break;

     case Active_Aero_System_IN_SecondOne:
      /* :  sf_internal_predicateOutput = u==1; */
      if (Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_ThirdOne;
      } else {
        /* :  sf_internal_predicateOutput = u==0; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      }
      break;

     case Active_Aero_Syste_IN_SecondZero:
      /* :  sf_internal_predicateOutput = u==0; */
      if (!Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_ThirdZero;
      } else {
        /* :  sf_internal_predicateOutput = u==1; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      }
      break;

     case Active_Aero_System_IN_ThirdOne:
      /* :  sf_internal_predicateOutput = u==1; */
      if (Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_ForthOne;

        /* :  y=1; */
        Active_Aero_System_B.y_n4 = 1.0;
      } else {
        /* :  sf_internal_predicateOutput = u==0; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      }
      break;

     default:
      /* case IN_ThirdZero: */
      /* :  sf_internal_predicateOutput = u==1; */
      if (Active_Aero_System_B.GreaterThan_g) {
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_Normal;

        /* :  y=0; */
        Active_Aero_System_B.y_n4 = 0.0;
      } else {
        /* :  sf_internal_predicateOutput = u==0; */
        Active_Aero_System_DW.is_c3_Active_Aero_System =
          Active_Aero_System_IN_ForthZero;

        /* :  y=1; */
        Active_Aero_System_B.y_n4 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* Product: '<S10>/Product1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S10>/Constant4'
   */
  Active_Aero_System_B.Product1_k = Active_Aero_System_P.Constant_Value_cq *
    Active_Aero_System_P.Constant4_Value_e;

  /* Memory: '<S2>/Memory' */
  Active_Aero_System_B.Memory_d = Active_Aero_System_DW.Memory_PreviousInput_bz;

  /* Product: '<S10>/Product' incorporates:
   *  Constant: '<S10>/Constant'
   */
  Active_Aero_System_B.Product_h = Active_Aero_System_B.Memory_d /
    Active_Aero_System_P.Constant_Value_j0;

  /* Lookup_n-D: '<S10>/MaxFX ' */
  Active_Aero_System_B.MaxFX = look1_binlxpw(Active_Aero_System_B.Product_h,
    Active_Aero_System_P.MaxFX_bp01Data_b,
    Active_Aero_System_P.MaxFX_tableData_k, 99U);

  /* RelationalOperator: '<S10>/Less Than' */
  Active_Aero_System_B.LessThan = (Active_Aero_System_B.Product1_k >
    Active_Aero_System_B.MaxFX);

  /* RelationalOperator: '<S2>/GreaterThan1' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  Active_Aero_System_B.GreaterThan1 = (Active_Aero_System_B.Abs_dja <
    Active_Aero_System_P.Constant2_Value);

  /* UnitDelay: '<S2>/Unit Delay5' */
  Active_Aero_System_B.UnitDelay5 = Active_Aero_System_DW.UnitDelay5_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay3' */
  Active_Aero_System_B.UnitDelay3_o = Active_Aero_System_DW.UnitDelay3_DSTATE_b;

  /* If: '<S2>/If' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S2>/MAX_SAFE_SPEED'
   *  Constant: '<S2>/Zero'
   */
  if ((Active_Aero_System_B.UnitDelay5 >= 128.0) &&
      (Active_Aero_System_B.UnitDelay3_o >=
       Active_Aero_System_P.MAX_SAFE_SPEED_Value)) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Zero_Value,
      &Active_Aero_System_B.Merge_d);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_cq,
      &Active_Aero_System_B.Merge_d);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  }

  /* End of If: '<S2>/If' */

  /* RelationalOperator: '<S2>/Threshold' incorporates:
   *  Constant: '<S2>/Constant3'
   */
  Active_Aero_System_B.Threshold = (Active_Aero_System_B.y_n4 >
    Active_Aero_System_P.Constant3_Value);

  /* RelationalOperator: '<S2>/Less Than' incorporates:
   *  Constant: '<S2>/Constant4'
   */
  Active_Aero_System_B.LessThan_e = (Active_Aero_System_B.UnitDelay5 <
    Active_Aero_System_P.Constant4_Value);

  /* UnitDelay: '<S2>/Unit Delay4' */
  Active_Aero_System_B.UnitDelay4 = Active_Aero_System_DW.UnitDelay4_DSTATE;

  /* If: '<S2>/If1' */
  if (Active_Aero_System_B.GreaterThan_g && Active_Aero_System_B.GreaterThan1 &&
      Active_Aero_System_B.Threshold && Active_Aero_System_B.LessThan_e) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* Sum: '<S14>/Subtract' incorporates:
     *  Constant: '<S14>/Constant'
     */
    Active_Aero_System_B.Subtract_hw = Active_Aero_System_B.UnitDelay4 -
      Active_Aero_System_P.Constant_Value_p;

    /* MinMax: '<S14>/Max' incorporates:
     *  Constant: '<S14>/Constant1'
     */
    u0 = Active_Aero_System_B.Subtract_hw;
    u1 = Active_Aero_System_P.Constant1_Value_c;
    if ((u0 > u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    Active_Aero_System_B.Merge1 = u1;

    /* End of MinMax: '<S14>/Max' */
    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
  } else if (Active_Aero_System_B.LessThan && Active_Aero_System_B.Threshold &&
             Active_Aero_System_B.LessThan_e) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Sum: '<S15>/Subtract' incorporates:
     *  Constant: '<S15>/Constant'
     */
    Active_Aero_System_B.Subtract_k = Active_Aero_System_B.UnitDelay4 +
      Active_Aero_System_P.Constant_Value_g;

    /* MinMax: '<S15>/Max' incorporates:
     *  Constant: '<S15>/Constant1'
     */
    u0 = Active_Aero_System_B.Subtract_k;
    u1 = Active_Aero_System_P.Constant1_Value_n;
    if ((u0 < u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    Active_Aero_System_B.Merge1 = u1;

    /* End of MinMax: '<S15>/Max' */
    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem4' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.UnitDelay4,
      &Active_Aero_System_B.Merge1);

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
  }

  /* End of If: '<S2>/If1' */

  /* Logic: '<S2>/NOT' */
  Active_Aero_System_B.NOT = !Active_Aero_System_B.LessThan_e;

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<S2>/Constant'
   */
  if (Active_Aero_System_P.Constant1_Value_fl >
      Active_Aero_System_P.Switch1_Threshold) {
    Active_Aero_System_B.Switch1_a = Active_Aero_System_P.Constant_Value_d;
  } else {
    Active_Aero_System_B.Switch1_a = Active_Aero_System_B.Merge1;
  }

  /* End of Switch: '<S2>/Switch1' */
  /* End of Outputs for SubSystem: '<Root>/Controls' */

  /* Outputs for Atomic SubSystem: '<Root>/Wing Pos to Aero Mapping' */
  /* Gain: '<S4>/Gain' */
  Active_Aero_System_B.Gain_me = Active_Aero_System_P.Gain_Gain_d *
    Active_Aero_System_B.Switch1_a;

  /* Product: '<S4>/Product' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  Active_Aero_System_B.Product_c = Active_Aero_System_B.Gain_me *
    Active_Aero_System_P.Constant2_Value_o;

  /* MinMax: '<S4>/Max' incorporates:
   *  Constant: '<S4>/Constant'
   */
  u0 = Active_Aero_System_B.Product_c;
  u1 = Active_Aero_System_P.Constant_Value_h;
  if ((u0 > u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  Active_Aero_System_B.Max = u1;

  /* End of MinMax: '<S4>/Max' */

  /* Product: '<S4>/Product1' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  Active_Aero_System_B.Product1_h = Active_Aero_System_P.Constant3_Value_l *
    Active_Aero_System_B.Gain_me;

  /* MinMax: '<S4>/Max1' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  u0 = Active_Aero_System_B.Product1_h;
  u1 = Active_Aero_System_P.Constant1_Value_f;
  if ((u0 > u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  Active_Aero_System_B.Max1 = u1;

  /* End of MinMax: '<S4>/Max1' */
  /* End of Outputs for SubSystem: '<Root>/Wing Pos to Aero Mapping' */

  /* Gain: '<S5>/Multiply' */
  Active_Aero_System_B.Multiply[0] = Active_Aero_System_P.Multiply_Gain *
    Active_Aero_System_B.Max;
  Active_Aero_System_B.Multiply[1] = Active_Aero_System_P.Multiply_Gain *
    Active_Aero_System_B.Max1;

  /* Product: '<S5>/Product1' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  Active_Aero_System_B.Product1[0] = Active_Aero_System_P.Constant3_Value_lc *
    Active_Aero_System_B.Multiply[0];

  /* Product: '<S5>/Product' */
  Active_Aero_System_B.Product[0] = Active_Aero_System_B.Square *
    Active_Aero_System_B.Product1[0];

  /* Product: '<S5>/Product1' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  Active_Aero_System_B.Product1[1] = Active_Aero_System_P.Constant3_Value_lc *
    Active_Aero_System_B.Multiply[1];

  /* Product: '<S5>/Product' */
  Active_Aero_System_B.Product[1] = Active_Aero_System_B.Square *
    Active_Aero_System_B.Product1[1];

  /* Sum: '<S6>/Add2' */
  Active_Aero_System_B.Add2 = Active_Aero_System_B.Product6 +
    Active_Aero_System_B.Product[0];

  /* Product: '<S6>/Product5' */
  Active_Aero_System_B.Product5 = Active_Aero_System_B.Subtract *
    Active_Aero_System_B.Add2;

  /* Product: '<S6>/Product4' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  Active_Aero_System_B.Product4 = Active_Aero_System_B.Product5 /
    Active_Aero_System_P.Constant1_Value_k;

  /* UnitDelay: '<S6>/Unit Delay1' */
  Active_Aero_System_B.UnitDelay1 = Active_Aero_System_DW.UnitDelay1_DSTATE;

  /* Sum: '<S6>/Add' */
  Active_Aero_System_B.Add_k = Active_Aero_System_B.Product4 -
    Active_Aero_System_B.UnitDelay1;

  /* Gain: '<S6>/Gain' */
  Active_Aero_System_B.Gain = Active_Aero_System_P.Gain_Gain_c *
    Active_Aero_System_B.Merge_d;

  /* Product: '<S6>/Product7' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  Active_Aero_System_B.Product7 = Active_Aero_System_P.Constant2_Value_e *
    Active_Aero_System_B.Add2;

  /* Product: '<S6>/Product8' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  Active_Aero_System_B.Product8 = Active_Aero_System_B.Product7 /
    Active_Aero_System_P.Constant1_Value_k;

  /* Sum: '<S6>/Add1' */
  Active_Aero_System_B.Add1 = Active_Aero_System_B.Product8 +
    Active_Aero_System_B.UnitDelay1;

  /* If: '<S6>/If' */
  if (Active_Aero_System_B.Gain1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    if (Active_Aero_System_B.UnitDelay2 > Active_Aero_System_P.Switch_Threshold)
    {
      /* Product: '<S8>/Product' incorporates:
       *  Constant: '<S8>/Constant'
       */
      Active_Aero_System_B.Product_b = Active_Aero_System_B.Add_k /
        Active_Aero_System_P.Constant_Value;

      /* Lookup_n-D: '<S8>/MaxFX ' */
      Active_Aero_System_B.MaxFX_n = look1_binlxpw
        (Active_Aero_System_B.Product_b, Active_Aero_System_P.MaxFX_bp01Data,
         Active_Aero_System_P.MaxFX_tableData, 99U);

      /* Product: '<S8>/Product1' incorporates:
       *  Constant: '<S6>/Constant4'
       */
      Active_Aero_System_B.Product1_a = Active_Aero_System_B.Gain1 *
        Active_Aero_System_P.Constant4_Value_i;

      /* MinMax: '<S8>/MinMax' */
      u0 = Active_Aero_System_B.Product1_a;
      u1 = Active_Aero_System_B.MaxFX_n;
      if ((u0 < u1) || rtIsNaN(u1)) {
        u1 = u0;
      }

      Active_Aero_System_B.MinMax = u1;

      /* End of MinMax: '<S8>/MinMax' */

      /* Gain: '<S8>/Gain' */
      Active_Aero_System_B.Gain_j = Active_Aero_System_P.Gain_Gain *
        Active_Aero_System_B.MinMax;
      Active_Aero_System_B.Merge = Active_Aero_System_B.Gain_j;
    } else {
      Active_Aero_System_B.Merge = Active_Aero_System_P.Constant1_Value;
    }

    /* End of Switch: '<S8>/Switch' */
    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Product: '<S7>/Product' incorporates:
     *  Constant: '<S7>/Constant'
     */
    Active_Aero_System_B.Product_e = Active_Aero_System_B.Add1 /
      Active_Aero_System_P.Constant_Value_j;

    /* Lookup_n-D: '<S7>/MaxFX ' */
    Active_Aero_System_B.MaxFX_b = look1_binlxpw(Active_Aero_System_B.Product_e,
      Active_Aero_System_P.MaxFX_bp01Data_k,
      Active_Aero_System_P.MaxFX_tableData_n, 99U);

    /* Product: '<S7>/Product1' incorporates:
     *  Constant: '<S6>/Constant4'
     */
    Active_Aero_System_B.Product1_l = Active_Aero_System_B.Gain *
      Active_Aero_System_P.Constant4_Value_i;

    /* MinMax: '<S7>/MinMax' */
    u0 = Active_Aero_System_B.Product1_l;
    u1 = Active_Aero_System_B.MaxFX_b;
    if ((u0 < u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    Active_Aero_System_B.Merge = u1;

    /* End of MinMax: '<S7>/MinMax' */
    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
  }

  /* End of If: '<S6>/If' */

  /* Sum: '<S6>/Subtract1' */
  Active_Aero_System_B.Subtract1 = Active_Aero_System_B.Merge -
    Active_Aero_System_B.Product[1];

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S6>/Constant'
   */
  Active_Aero_System_B.Product_k = Active_Aero_System_B.Subtract1 /
    Active_Aero_System_P.Constant_Value_c;

  /* Product: '<S6>/Product10' incorporates:
   *  Constant: '<S6>/Constant6'
   */
  Active_Aero_System_B.Product10 = Active_Aero_System_B.Product_k *
    Active_Aero_System_P.Constant6_Value;

  /* Sum: '<S6>/Add3' */
  Active_Aero_System_B.Add3 = Active_Aero_System_B.Product10 +
    Active_Aero_System_B.UnitDelay2;

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Constant8'
   */
  if (Active_Aero_System_B.Add3 > Active_Aero_System_P.Switch1_Threshold_f) {
    Active_Aero_System_B.Switch1 = Active_Aero_System_B.Add3;
  } else {
    Active_Aero_System_B.Switch1 = Active_Aero_System_P.Constant8_Value;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Gain: '<S1>/Gain' */
  Active_Aero_System_B.Gain_m = Active_Aero_System_P.Gain_Gain_a *
    Active_Aero_System_B.Switch1;

  /* Product: '<S6>/Product11' incorporates:
   *  Constant: '<S6>/Constant6'
   */
  Active_Aero_System_B.Product11 = Active_Aero_System_B.Switch1 *
    Active_Aero_System_P.Constant6_Value;

  /* UnitDelay: '<S6>/Unit Delay3' */
  Active_Aero_System_B.UnitDelay3 = Active_Aero_System_DW.UnitDelay3_DSTATE;

  /* Sum: '<S6>/Add4' */
  Active_Aero_System_B.Add4 = Active_Aero_System_B.Product11 +
    Active_Aero_System_B.UnitDelay3;

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant9'
   */
  if (Active_Aero_System_B.Add4 > Active_Aero_System_P.Switch2_Threshold) {
    Active_Aero_System_B.Switch2 = Active_Aero_System_B.Add4;
  } else {
    Active_Aero_System_B.Switch2 = Active_Aero_System_P.Constant9_Value;
  }

  /* End of Switch: '<S6>/Switch2' */
  /* Product: '<S6>/Product3' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant3'
   */
  Active_Aero_System_B.Product3 = Active_Aero_System_P.Constant3_Value_e *
    Active_Aero_System_B.Product_k * Active_Aero_System_P.Constant_Value_c;

  /* Product: '<S6>/Product9' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  Active_Aero_System_B.Product9 = Active_Aero_System_B.Product3 /
    Active_Aero_System_P.Constant1_Value_k;

  /* Memory: '<S27>/Memory' */
  Active_Aero_System_B.Memory = Active_Aero_System_DW.Memory_PreviousInput;

  /* If: '<S58>/If8' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S59>/Constant'
   *  If: '<S59>/If8'
   */
  if (Active_Aero_System_P.Constant4_Value_o == 0.0) {
    /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Switch1_a,
      &Active_Aero_System_B.Merge4);

    /* End of Outputs for SubSystem: '<S59>/If Action Subsystem14' */

    /* Outputs for IfAction SubSystem: '<S58>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Switch1_a,
      &Active_Aero_System_B.Merge4_m);

    /* End of Outputs for SubSystem: '<S58>/If Action Subsystem14' */
  } else {
    /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_k,
      &Active_Aero_System_B.Merge4);

    /* End of Outputs for SubSystem: '<S59>/If Action Subsystem15' */

    /* Outputs for IfAction SubSystem: '<S58>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_jf,
      &Active_Aero_System_B.Merge4_m);

    /* End of Outputs for SubSystem: '<S58>/If Action Subsystem15' */
  }

  /* End of If: '<S58>/If8' */

  /* Sum: '<S16>/Subtract' */
  Active_Aero_System_B.Subtract_g = Active_Aero_System_B.Merge4 -
    Active_Aero_System_B.Merge4_m;

  /* Abs: '<S16>/Abs' */
  Active_Aero_System_B.Abs = std::abs(Active_Aero_System_B.Subtract_g);

  /* RelationalOperator: '<S16>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan = (Active_Aero_System_B.Abs >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S16>/Equal' incorporates:
   *  Constant: '<S16>/Constant'
   */
  Active_Aero_System_B.Equal = (Active_Aero_System_B.Merge4 ==
    Active_Aero_System_P.Constant_Value_o);

  /* RelationalOperator: '<S16>/Equal1' incorporates:
   *  Constant: '<S16>/Constant'
   */
  Active_Aero_System_B.Equal1 = (Active_Aero_System_B.Merge4_m ==
    Active_Aero_System_P.Constant_Value_o);

  /* Logic: '<S16>/OR' */
  Active_Aero_System_B.OR = (Active_Aero_System_B.GreaterThan ||
    Active_Aero_System_B.Equal || Active_Aero_System_B.Equal1);

  /* If: '<S60>/If8' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S60>/Constant'
   */
  if (Active_Aero_System_P.Constant4_Value_o == 0.0) {
    /* Outputs for IfAction SubSystem: '<S60>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Switch1_a,
      &Active_Aero_System_B.Merge4_d);

    /* End of Outputs for SubSystem: '<S60>/If Action Subsystem14' */
  } else {
    /* Outputs for IfAction SubSystem: '<S60>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_n,
      &Active_Aero_System_B.Merge4_d);

    /* End of Outputs for SubSystem: '<S60>/If Action Subsystem15' */
  }

  /* End of If: '<S60>/If8' */

  /* Sum: '<S21>/Subtract' */
  Active_Aero_System_B.Subtract_b = Active_Aero_System_B.Merge4 -
    Active_Aero_System_B.Merge4_d;

  /* Abs: '<S21>/Abs' */
  Active_Aero_System_B.Abs_d = std::abs(Active_Aero_System_B.Subtract_b);

  /* RelationalOperator: '<S21>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan_b = (Active_Aero_System_B.Abs_d >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S21>/Equal' incorporates:
   *  Constant: '<S21>/Constant'
   */
  Active_Aero_System_B.Equal_j = (Active_Aero_System_B.Merge4 ==
    Active_Aero_System_P.Constant_Value_a);

  /* RelationalOperator: '<S21>/Equal1' incorporates:
   *  Constant: '<S21>/Constant'
   */
  Active_Aero_System_B.Equal1_h = (Active_Aero_System_B.Merge4_d ==
    Active_Aero_System_P.Constant_Value_a);

  /* Logic: '<S21>/OR' */
  Active_Aero_System_B.OR_a = (Active_Aero_System_B.GreaterThan_b ||
    Active_Aero_System_B.Equal_j || Active_Aero_System_B.Equal1_h);

  /* If: '<S62>/If8' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S62>/Constant'
   */
  if (Active_Aero_System_P.Constant4_Value_o == 0.0) {
    /* Outputs for IfAction SubSystem: '<S62>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Switch1_a,
      &Active_Aero_System_B.Merge4_i);

    /* End of Outputs for SubSystem: '<S62>/If Action Subsystem14' */
  } else {
    /* Outputs for IfAction SubSystem: '<S62>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_e,
      &Active_Aero_System_B.Merge4_i);

    /* End of Outputs for SubSystem: '<S62>/If Action Subsystem15' */
  }

  /* End of If: '<S62>/If8' */

  /* Sum: '<S23>/Subtract' */
  Active_Aero_System_B.Subtract_l = Active_Aero_System_B.Merge4_m -
    Active_Aero_System_B.Merge4_i;

  /* Abs: '<S23>/Abs' */
  Active_Aero_System_B.Abs_de = std::abs(Active_Aero_System_B.Subtract_l);

  /* RelationalOperator: '<S23>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan_a = (Active_Aero_System_B.Abs_de >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S23>/Equal' incorporates:
   *  Constant: '<S23>/Constant'
   */
  Active_Aero_System_B.Equal_a = (Active_Aero_System_B.Merge4_m ==
    Active_Aero_System_P.Constant_Value_kt);

  /* RelationalOperator: '<S23>/Equal1' incorporates:
   *  Constant: '<S23>/Constant'
   */
  Active_Aero_System_B.Equal1_i = (Active_Aero_System_B.Merge4_i ==
    Active_Aero_System_P.Constant_Value_kt);

  /* Logic: '<S23>/OR' */
  Active_Aero_System_B.OR_l = (Active_Aero_System_B.GreaterThan_a ||
    Active_Aero_System_B.Equal_a || Active_Aero_System_B.Equal1_i);

  /* If: '<S3>/If' incorporates:
   *  Constant: '<S3>/Constant1'
   */
  if (!Active_Aero_System_B.OR) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Merge4,
      &Active_Aero_System_B.Merge_j);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem5' */
  } else if (Active_Aero_System_B.OR_a && (!Active_Aero_System_B.OR_l)) {
    /* Outputs for IfAction SubSystem: '<S3>/Bad ACT Left OK ACT Right' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Merge4_m,
      &Active_Aero_System_B.Merge_j);

    /* End of Outputs for SubSystem: '<S3>/Bad ACT Left OK ACT Right' */
  } else if ((!Active_Aero_System_B.OR_a) && Active_Aero_System_B.OR_l) {
    /* Outputs for IfAction SubSystem: '<S3>/OK ACT :eft Bad ACT Right' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Merge4,
      &Active_Aero_System_B.Merge_j);

    /* End of Outputs for SubSystem: '<S3>/OK ACT :eft Bad ACT Right' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant1_Value_d,
      &Active_Aero_System_B.Merge_j);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  }

  /* End of If: '<S3>/If' */

  /* If: '<S3>/If6' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE1'
   *  Constant: '<S3>/ONE'
   */
  if ((Active_Aero_System_B.Switch1_a >=
       Active_Aero_System_P.ERR_TOLERANCE1_Value) &&
      (Active_Aero_System_B.Merge_j < Active_Aero_System_P.ERR_TOLERANCE1_Value))
  {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem10' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem10);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem10' */
  }

  /* End of If: '<S3>/If6' */

  /* Switch: '<S27>/Switch' */
  if (Active_Aero_System_B.Memory > Active_Aero_System_P.Switch_Threshold_d) {
    Active_Aero_System_B.Switch = Active_Aero_System_B.Memory;
  } else {
    Active_Aero_System_B.Switch = Active_Aero_System_B.IfActionSubsystem10.In1;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Memory: '<S26>/Memory' */
  Active_Aero_System_B.Memory_f = Active_Aero_System_DW.Memory_PreviousInput_b;

  /* UnitDelay: '<S3>/Unit Delay' */
  Active_Aero_System_B.UnitDelay = Active_Aero_System_DW.UnitDelay_DSTATE;

  /* Sum: '<S18>/Subtract' */
  Active_Aero_System_B.Subtract_p = Active_Aero_System_B.Switch1_a -
    Active_Aero_System_B.UnitDelay;

  /* Abs: '<S18>/Abs' */
  Active_Aero_System_B.Abs_g = std::abs(Active_Aero_System_B.Subtract_p);

  /* RelationalOperator: '<S18>/GreaterThan' incorporates:
   *  Constant: '<S3>/MAX_ACT_CHANGE'
   */
  Active_Aero_System_B.GreaterThan_h = (Active_Aero_System_B.Abs_g >
    Active_Aero_System_P.MAX_ACT_CHANGE_Value);

  /* RelationalOperator: '<S18>/Equal' incorporates:
   *  Constant: '<S18>/Constant'
   */
  Active_Aero_System_B.Equal_c = (Active_Aero_System_B.Switch1_a ==
    Active_Aero_System_P.Constant_Value_gd);

  /* RelationalOperator: '<S18>/Equal1' incorporates:
   *  Constant: '<S18>/Constant'
   */
  Active_Aero_System_B.Equal1_a = (Active_Aero_System_B.UnitDelay ==
    Active_Aero_System_P.Constant_Value_gd);

  /* Logic: '<S18>/OR' */
  Active_Aero_System_B.OR_h = (Active_Aero_System_B.GreaterThan_h ||
    Active_Aero_System_B.Equal_c || Active_Aero_System_B.Equal1_a);

  /* UnitDelay: '<S3>/Unit Delay1' */
  Active_Aero_System_B.UnitDelay1_j = Active_Aero_System_DW.UnitDelay1_DSTATE_j;

  /* Sum: '<S19>/Subtract' */
  Active_Aero_System_B.Subtract_a = Active_Aero_System_B.Merge_j -
    Active_Aero_System_B.UnitDelay1_j;

  /* Abs: '<S19>/Abs' */
  Active_Aero_System_B.Abs_g1 = std::abs(Active_Aero_System_B.Subtract_a);

  /* RelationalOperator: '<S19>/GreaterThan' incorporates:
   *  Constant: '<S3>/MAX_ACT_CHANGE'
   */
  Active_Aero_System_B.GreaterThan_n = (Active_Aero_System_B.Abs_g1 >
    Active_Aero_System_P.MAX_ACT_CHANGE_Value);

  /* RelationalOperator: '<S19>/Equal' incorporates:
   *  Constant: '<S19>/Constant'
   */
  Active_Aero_System_B.Equal_p = (Active_Aero_System_B.Merge_j ==
    Active_Aero_System_P.Constant_Value_f);

  /* RelationalOperator: '<S19>/Equal1' incorporates:
   *  Constant: '<S19>/Constant'
   */
  Active_Aero_System_B.Equal1_b = (Active_Aero_System_B.UnitDelay1_j ==
    Active_Aero_System_P.Constant_Value_f);

  /* Logic: '<S19>/OR' */
  Active_Aero_System_B.OR_d = (Active_Aero_System_B.GreaterThan_n ||
    Active_Aero_System_B.Equal_p || Active_Aero_System_B.Equal1_b);

  /* If: '<S3>/If2' incorporates:
   *  Constant: '<S3>/ONE'
   */
  if ((!Active_Aero_System_B.OR_h) && Active_Aero_System_B.OR_d) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem9' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem9);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem9' */
  } else {
    if (Active_Aero_System_B.OR_h && (!Active_Aero_System_B.OR_d)) {
      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem8' incorporates:
       *  ActionPort: '<S54>/Action Port'
       */
      Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
        &Active_Aero_System_B.IfActionSubsystem8);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem8' */
    }
  }

  /* End of If: '<S3>/If2' */

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift5' */
  /* MATLAB Function: '<S37>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y_n = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem9.In1, 1);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift5' */

  /* Switch: '<S26>/Switch' */
  if (Active_Aero_System_B.Memory_f > Active_Aero_System_P.Switch_Threshold_m) {
    Active_Aero_System_B.Switch_l = Active_Aero_System_B.Memory_f;
  } else {
    Active_Aero_System_B.Switch_l = Active_Aero_System_B.y_n;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Memory: '<S56>/Memory' */
  Active_Aero_System_B.Memory_p = Active_Aero_System_DW.Memory_PreviousInput_l;

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift4' */
  /* MATLAB Function: '<S36>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y_d = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem8.In1, 2);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift4' */

  /* Switch: '<S56>/Switch' */
  if (Active_Aero_System_B.Memory_p > Active_Aero_System_P.Switch_Threshold_n) {
    Active_Aero_System_B.Switch_a = Active_Aero_System_B.Memory_p;
  } else {
    Active_Aero_System_B.Switch_a = Active_Aero_System_B.y_d;
  }

  /* End of Switch: '<S56>/Switch' */

  /* Memory: '<S28>/Memory' */
  Active_Aero_System_B.Memory_l = Active_Aero_System_DW.Memory_PreviousInput_a;

  /* Sum: '<S25>/Subtract' */
  Active_Aero_System_B.Subtract_e = Active_Aero_System_B.Switch1_a -
    Active_Aero_System_B.Merge_j;

  /* Abs: '<S25>/Abs' */
  Active_Aero_System_B.Abs_dj = std::abs(Active_Aero_System_B.Subtract_e);

  /* RelationalOperator: '<S25>/GreaterThan' incorporates:
   *  Constant: '<S3>/RESP_OUT_OF_RANGE_THRESH'
   */
  Active_Aero_System_B.GreaterThan_l = (Active_Aero_System_B.Abs_dj >
    Active_Aero_System_P.RESP_OUT_OF_RANGE_THRESH_Value);

  /* RelationalOperator: '<S25>/Equal' incorporates:
   *  Constant: '<S25>/Constant'
   */
  Active_Aero_System_B.Equal_g = (Active_Aero_System_B.Switch1_a ==
    Active_Aero_System_P.Constant_Value_nc);

  /* RelationalOperator: '<S25>/Equal1' incorporates:
   *  Constant: '<S25>/Constant'
   */
  Active_Aero_System_B.Equal1_k = (Active_Aero_System_B.Merge_j ==
    Active_Aero_System_P.Constant_Value_nc);

  /* Logic: '<S25>/OR' */
  Active_Aero_System_B.OR_k = (Active_Aero_System_B.GreaterThan_l ||
    Active_Aero_System_B.Equal_g || Active_Aero_System_B.Equal1_k);

  /* If: '<S3>/If3' incorporates:
   *  Constant: '<S3>/ONE'
   */
  if (Active_Aero_System_B.OR_k) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem7);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem7' */
  }

  /* End of If: '<S3>/If3' */

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift3' */
  /* MATLAB Function: '<S35>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y_j = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem7.In1, 3);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift3' */

  /* Switch: '<S28>/Switch' */
  if (Active_Aero_System_B.Memory_l > Active_Aero_System_P.Switch_Threshold_p) {
    Active_Aero_System_B.Switch_o = Active_Aero_System_B.Memory_l;
  } else {
    Active_Aero_System_B.Switch_o = Active_Aero_System_B.y_j;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Memory: '<S30>/Memory' */
  Active_Aero_System_B.Memory_a = Active_Aero_System_DW.Memory_PreviousInput_k;

  /* If: '<S61>/If8' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S61>/Constant'
   */
  if (Active_Aero_System_P.Constant4_Value_o == 0.0) {
    /* Outputs for IfAction SubSystem: '<S61>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Switch1_a,
      &Active_Aero_System_B.Merge4_a);

    /* End of Outputs for SubSystem: '<S61>/If Action Subsystem14' */
  } else {
    /* Outputs for IfAction SubSystem: '<S61>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_i,
      &Active_Aero_System_B.Merge4_a);

    /* End of Outputs for SubSystem: '<S61>/If Action Subsystem15' */
  }

  /* End of If: '<S61>/If8' */

  /* Sum: '<S22>/Subtract' */
  Active_Aero_System_B.Subtract_h = Active_Aero_System_B.Merge4 -
    Active_Aero_System_B.Merge4_a;

  /* Abs: '<S22>/Abs' */
  Active_Aero_System_B.Abs_i = std::abs(Active_Aero_System_B.Subtract_h);

  /* RelationalOperator: '<S22>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan_j = (Active_Aero_System_B.Abs_i >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S22>/Equal' incorporates:
   *  Constant: '<S22>/Constant'
   */
  Active_Aero_System_B.Equal_au = (Active_Aero_System_B.Merge4 ==
    Active_Aero_System_P.Constant_Value_ce);

  /* RelationalOperator: '<S22>/Equal1' incorporates:
   *  Constant: '<S22>/Constant'
   */
  Active_Aero_System_B.Equal1_j = (Active_Aero_System_B.Merge4_a ==
    Active_Aero_System_P.Constant_Value_ce);

  /* Logic: '<S22>/OR' */
  Active_Aero_System_B.OR_n = (Active_Aero_System_B.GreaterThan_j ||
    Active_Aero_System_B.Equal_au || Active_Aero_System_B.Equal1_j);

  /* Sum: '<S17>/Subtract' */
  Active_Aero_System_B.Subtract_o = Active_Aero_System_B.Merge4_d -
    Active_Aero_System_B.Merge4_a;

  /* Abs: '<S17>/Abs' */
  Active_Aero_System_B.Abs_m = std::abs(Active_Aero_System_B.Subtract_o);

  /* RelationalOperator: '<S17>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan_at = (Active_Aero_System_B.Abs_m >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S17>/Equal' incorporates:
   *  Constant: '<S17>/Constant'
   */
  Active_Aero_System_B.Equal_h = (Active_Aero_System_B.Merge4_d ==
    Active_Aero_System_P.Constant_Value_az);

  /* RelationalOperator: '<S17>/Equal1' incorporates:
   *  Constant: '<S17>/Constant'
   */
  Active_Aero_System_B.Equal1_jk = (Active_Aero_System_B.Merge4_a ==
    Active_Aero_System_P.Constant_Value_az);

  /* Logic: '<S17>/OR' */
  Active_Aero_System_B.OR_p = (Active_Aero_System_B.GreaterThan_at ||
    Active_Aero_System_B.Equal_h || Active_Aero_System_B.Equal1_jk);

  /* If: '<S3>/If4' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (Active_Aero_System_B.OR_a && (!Active_Aero_System_B.OR_p)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem16' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.Constant_Value_n4,
      &Active_Aero_System_B.IfActionSubsystem16);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem16' */
  } else if (Active_Aero_System_B.OR_a && (!Active_Aero_System_B.OR_n)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem20' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.Constant_Value_n4,
      &Active_Aero_System_B.IfActionSubsystem20);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem20' */
  } else {
    if ((!Active_Aero_System_B.OR_a) && Active_Aero_System_B.OR_n) {
      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem19' incorporates:
       *  ActionPort: '<S46>/Action Port'
       */
      Active_Aero__IfActionSubsystem2(Active_Aero_System_P.Constant_Value_n4,
        &Active_Aero_System_B.IfActionSubsystem19);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem19' */
    }
  }

  /* End of If: '<S3>/If4' */

  /* If: '<S63>/If8' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S63>/Constant'
   */
  if (Active_Aero_System_P.Constant4_Value_o == 0.0) {
    /* Outputs for IfAction SubSystem: '<S63>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_B.Switch1_a,
      &Active_Aero_System_B.Merge4_iz);

    /* End of Outputs for SubSystem: '<S63>/If Action Subsystem14' */
  } else {
    /* Outputs for IfAction SubSystem: '<S63>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    Active_Aero__IfActionSubsystem1(Active_Aero_System_P.Constant_Value_n41,
      &Active_Aero_System_B.Merge4_iz);

    /* End of Outputs for SubSystem: '<S63>/If Action Subsystem15' */
  }

  /* End of If: '<S63>/If8' */

  /* Sum: '<S24>/Subtract' */
  Active_Aero_System_B.Subtract_f = Active_Aero_System_B.Merge4_m -
    Active_Aero_System_B.Merge4_iz;

  /* Abs: '<S24>/Abs' */
  Active_Aero_System_B.Abs_dee = std::abs(Active_Aero_System_B.Subtract_f);

  /* RelationalOperator: '<S24>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan_e = (Active_Aero_System_B.Abs_dee >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S24>/Equal' incorporates:
   *  Constant: '<S24>/Constant'
   */
  Active_Aero_System_B.Equal_d = (Active_Aero_System_B.Merge4_m ==
    Active_Aero_System_P.Constant_Value_m);

  /* RelationalOperator: '<S24>/Equal1' incorporates:
   *  Constant: '<S24>/Constant'
   */
  Active_Aero_System_B.Equal1_a3 = (Active_Aero_System_B.Merge4_iz ==
    Active_Aero_System_P.Constant_Value_m);

  /* Logic: '<S24>/OR' */
  Active_Aero_System_B.OR_o = (Active_Aero_System_B.GreaterThan_e ||
    Active_Aero_System_B.Equal_d || Active_Aero_System_B.Equal1_a3);

  /* Sum: '<S20>/Subtract' */
  Active_Aero_System_B.Subtract_c = Active_Aero_System_B.Merge4_i -
    Active_Aero_System_B.Merge4_iz;

  /* Abs: '<S20>/Abs' */
  Active_Aero_System_B.Abs_e = std::abs(Active_Aero_System_B.Subtract_c);

  /* RelationalOperator: '<S20>/GreaterThan' incorporates:
   *  Constant: '<S3>/ERR_TOLERANCE'
   */
  Active_Aero_System_B.GreaterThan_m = (Active_Aero_System_B.Abs_e >
    Active_Aero_System_P.ERR_TOLERANCE_Value);

  /* RelationalOperator: '<S20>/Equal' incorporates:
   *  Constant: '<S20>/Constant'
   */
  Active_Aero_System_B.Equal_auq = (Active_Aero_System_B.Merge4_i ==
    Active_Aero_System_P.Constant_Value_ah);

  /* RelationalOperator: '<S20>/Equal1' incorporates:
   *  Constant: '<S20>/Constant'
   */
  Active_Aero_System_B.Equal1_n = (Active_Aero_System_B.Merge4_iz ==
    Active_Aero_System_P.Constant_Value_ah);

  /* Logic: '<S20>/OR' */
  Active_Aero_System_B.OR_m = (Active_Aero_System_B.GreaterThan_m ||
    Active_Aero_System_B.Equal_auq || Active_Aero_System_B.Equal1_n);

  /* If: '<S3>/If5' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (Active_Aero_System_B.OR_l && (!Active_Aero_System_B.OR_m)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem17' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.Constant_Value_n4,
      &Active_Aero_System_B.IfActionSubsystem17);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem17' */
  } else if (Active_Aero_System_B.OR_l && (!Active_Aero_System_B.OR_o)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem18' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.Constant_Value_n4,
      &Active_Aero_System_B.IfActionSubsystem18);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem18' */
  } else {
    if ((!Active_Aero_System_B.OR_l) && Active_Aero_System_B.OR_o) {
      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem21' incorporates:
       *  ActionPort: '<S49>/Action Port'
       */
      Active_Aero__IfActionSubsystem2(Active_Aero_System_P.Constant_Value_n4,
        &Active_Aero_System_B.IfActionSubsystem21);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem21' */
    }
  }

  /* End of If: '<S3>/If5' */

  /* Logic: '<S3>/OR2' */
  Active_Aero_System_B.OR2 = ((Active_Aero_System_B.IfActionSubsystem16.In1 !=
    0.0) || (Active_Aero_System_B.IfActionSubsystem17.In1 != 0.0));

  /* If: '<S3>/If12' incorporates:
   *  Constant: '<S3>/ONE'
   */
  if (Active_Aero_System_B.OR2) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem6);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem6' */
  }

  /* End of If: '<S3>/If12' */

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift2' */
  /* MATLAB Function: '<S34>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y_o = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem6.In1, 4);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift2' */

  /* Switch: '<S30>/Switch' */
  if (Active_Aero_System_B.Memory_a > Active_Aero_System_P.Switch_Threshold_g) {
    Active_Aero_System_B.Switch_e = Active_Aero_System_B.Memory_a;
  } else {
    Active_Aero_System_B.Switch_e = Active_Aero_System_B.y_o;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Memory: '<S39>/Memory' */
  Active_Aero_System_B.Memory_e = Active_Aero_System_DW.Memory_PreviousInput_p;

  /* If: '<S3>/If11' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<S3>/ONE'
   */
  if (Active_Aero_System_P.Constant4_Value_o != 0.0) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem3);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
  }

  /* End of If: '<S3>/If11' */

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift1' */
  /* MATLAB Function: '<S33>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y_k = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem3.In1, 5);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift1' */

  /* Switch: '<S39>/Switch' */
  if (Active_Aero_System_B.Memory_e > Active_Aero_System_P.Switch_Threshold_c) {
    Active_Aero_System_B.Switch_h = Active_Aero_System_B.Memory_e;
  } else {
    Active_Aero_System_B.Switch_h = Active_Aero_System_B.y_k;
  }

  /* End of Switch: '<S39>/Switch' */

  /* Memory: '<S31>/Memory' */
  Active_Aero_System_B.Memory_i = Active_Aero_System_DW.Memory_PreviousInput_e;

  /* Logic: '<S3>/OR1' */
  Active_Aero_System_B.OR1 = ((Active_Aero_System_B.IfActionSubsystem21.In1 !=
    0.0) || (Active_Aero_System_B.IfActionSubsystem18.In1 != 0.0) ||
    (Active_Aero_System_B.IfActionSubsystem19.In1 != 0.0) ||
    (Active_Aero_System_B.IfActionSubsystem20.In1 != 0.0));

  /* If: '<S3>/If10' incorporates:
   *  Constant: '<S3>/ONE'
   */
  if (Active_Aero_System_B.OR1) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem2_b);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
  }

  /* End of If: '<S3>/If10' */

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift' */
  /* MATLAB Function: '<S32>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y_jv = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem2_b.In1, 6);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift' */

  /* Switch: '<S31>/Switch' */
  if (Active_Aero_System_B.Memory_i > Active_Aero_System_P.Switch_Threshold_f) {
    Active_Aero_System_B.Switch_m = Active_Aero_System_B.Memory_i;
  } else {
    Active_Aero_System_B.Switch_m = Active_Aero_System_B.y_jv;
  }

  /* End of Switch: '<S31>/Switch' */

  /* Logic: '<S3>/OR' */
  Active_Aero_System_B.OR_mz = ((Active_Aero_System_B.Switch_h != 0.0) ||
    (Active_Aero_System_B.Switch != 0.0));

  /* If: '<S3>/If9' incorporates:
   *  Constant: '<S3>/ONE'
   */
  if (Active_Aero_System_B.OR_mz) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    Active_Aero__IfActionSubsystem2(Active_Aero_System_P.ONE_Value,
      &Active_Aero_System_B.IfActionSubsystem1_c);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  }

  /* End of If: '<S3>/If9' */

  /* Outputs for Atomic SubSystem: '<S3>/Bit Shift7' */
  /* MATLAB Function: '<S38>/bit_shift' */
  /* :  switch mode */
  /* :  case 1 */
  /* :  y = bitsll(cast_to_fi(u), N); */
  Active_Aero_System_B.y = std::ldexp
    (Active_Aero_System_B.IfActionSubsystem1_c.In1, 7);

  /* End of Outputs for SubSystem: '<S3>/Bit Shift7' */

  /* Sum: '<S3>/Add' */
  Active_Aero_System_B.Add_l = ((((((Active_Aero_System_B.Switch +
    Active_Aero_System_B.Switch_l) + Active_Aero_System_B.Switch_a) +
    Active_Aero_System_B.Switch_o) + Active_Aero_System_B.Switch_e) +
    Active_Aero_System_B.Switch_h) + Active_Aero_System_B.Switch_m) +
    Active_Aero_System_B.y;

  /* Update for UnitDelay: '<S6>/Unit Delay2' */
  Active_Aero_System_DW.UnitDelay2_DSTATE = Active_Aero_System_B.Switch1;

  /* Update for Atomic SubSystem: '<Root>/Controls' */
  /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Active_Aero_System_DW.UnitDelay_DSTATE_n =
    Active_Aero_System_P.Constant_Value_cq;

  /* Update for UnitDelay: '<S2>/Unit Delay2' */
  Active_Aero_System_DW.UnitDelay2_DSTATE_k = Active_Aero_System_B.Product_k;

  /* Update for UnitDelay: '<S2>/Unit Delay1' */
  Active_Aero_System_DW.UnitDelay1_DSTATE_h = Active_Aero_System_B.UnitDelay2_m;

  /* Update for Memory: '<S2>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_bz = Active_Aero_System_B.Add1;

  /* Update for UnitDelay: '<S2>/Unit Delay5' */
  Active_Aero_System_DW.UnitDelay5_DSTATE = Active_Aero_System_B.Add_l;

  /* Update for UnitDelay: '<S2>/Unit Delay3' */
  Active_Aero_System_DW.UnitDelay3_DSTATE_b = Active_Aero_System_B.Gain_m;

  /* Update for UnitDelay: '<S2>/Unit Delay4' */
  Active_Aero_System_DW.UnitDelay4_DSTATE = Active_Aero_System_B.Switch1_a;

  /* End of Update for SubSystem: '<Root>/Controls' */

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  Active_Aero_System_DW.UnitDelay1_DSTATE = Active_Aero_System_B.Product9;

  /* Update for UnitDelay: '<S6>/Unit Delay3' */
  Active_Aero_System_DW.UnitDelay3_DSTATE = Active_Aero_System_B.Switch2;

  /* Update for Memory: '<S27>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput = Active_Aero_System_B.Switch;

  /* Update for Memory: '<S26>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_b = Active_Aero_System_B.Switch_l;

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  Active_Aero_System_DW.UnitDelay_DSTATE = Active_Aero_System_B.Switch1_a;

  /* Update for UnitDelay: '<S3>/Unit Delay1' */
  Active_Aero_System_DW.UnitDelay1_DSTATE_j = Active_Aero_System_B.Merge_j;

  /* Update for Memory: '<S56>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_l = Active_Aero_System_B.Switch_a;

  /* Update for Memory: '<S28>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_a = Active_Aero_System_B.Switch_o;

  /* Update for Memory: '<S30>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_k = Active_Aero_System_B.Switch_e;

  /* Update for Memory: '<S39>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_p = Active_Aero_System_B.Switch_h;

  /* Update for Memory: '<S31>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_e = Active_Aero_System_B.Switch_m;

  /* Matfile logging */
  rt_UpdateTXYLogVars((&Active_Aero_System_M)->rtwLogInfo,
                      (&(&Active_Aero_System_M)->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.015s, 0.0s] */
    if ((rtmGetTFinal((&Active_Aero_System_M))!=-1) &&
        !((rtmGetTFinal((&Active_Aero_System_M))-(&Active_Aero_System_M)
           ->Timing.taskTime0) > (&Active_Aero_System_M)->Timing.taskTime0 *
          (DBL_EPSILON))) {
      rtmSetErrorStatus((&Active_Aero_System_M), "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++(&Active_Aero_System_M)->Timing.clockTick0)) {
    ++(&Active_Aero_System_M)->Timing.clockTickH0;
  }

  (&Active_Aero_System_M)->Timing.taskTime0 = (&Active_Aero_System_M)
    ->Timing.clockTick0 * (&Active_Aero_System_M)->Timing.stepSize0 +
    (&Active_Aero_System_M)->Timing.clockTickH0 * (&Active_Aero_System_M)
    ->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Active_Aero_SystemModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal((&Active_Aero_System_M), 24.99);
  (&Active_Aero_System_M)->Timing.stepSize0 = 0.015;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    (&Active_Aero_System_M)->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo((&Active_Aero_System_M)->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs((&Active_Aero_System_M)->rtwLogInfo, (NULL));
    rtliSetLogT((&Active_Aero_System_M)->rtwLogInfo, "tout");
    rtliSetLogX((&Active_Aero_System_M)->rtwLogInfo, "");
    rtliSetLogXFinal((&Active_Aero_System_M)->rtwLogInfo, "");
    rtliSetLogVarNameModifier((&Active_Aero_System_M)->rtwLogInfo, "rt_");
    rtliSetLogFormat((&Active_Aero_System_M)->rtwLogInfo, 4);
    rtliSetLogMaxRows((&Active_Aero_System_M)->rtwLogInfo, 0);
    rtliSetLogDecimation((&Active_Aero_System_M)->rtwLogInfo, 1);
    rtliSetLogY((&Active_Aero_System_M)->rtwLogInfo, "");
    rtliSetLogYSignalInfo((&Active_Aero_System_M)->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs((&Active_Aero_System_M)->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) std::memset((static_cast<void *>(&Active_Aero_System_B)), 0,
                     sizeof(B_Active_Aero_System_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&Active_Aero_System_DW), 0,
                     sizeof(DW_Active_Aero_System_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime((&Active_Aero_System_M)->rtwLogInfo, 0.0,
    rtmGetTFinal((&Active_Aero_System_M)), (&Active_Aero_System_M)
    ->Timing.stepSize0, (&rtmGetErrorStatus((&Active_Aero_System_M))));

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay2' */
  Active_Aero_System_DW.UnitDelay2_DSTATE =
    Active_Aero_System_P.UnitDelay2_InitialCondition_k;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
  Active_Aero_System_DW.UnitDelay1_DSTATE =
    Active_Aero_System_P.UnitDelay1_InitialCondition_m;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay3' */
  Active_Aero_System_DW.UnitDelay3_DSTATE =
    Active_Aero_System_P.UnitDelay3_InitialCondition_h;

  /* InitializeConditions for Memory: '<S27>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput =
    Active_Aero_System_P.Memory_InitialCondition_f;

  /* InitializeConditions for Memory: '<S26>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_b =
    Active_Aero_System_P.Memory_InitialCondition_d;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  Active_Aero_System_DW.UnitDelay_DSTATE =
    Active_Aero_System_P.UnitDelay_InitialCondition_i;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay1' */
  Active_Aero_System_DW.UnitDelay1_DSTATE_j =
    Active_Aero_System_P.UnitDelay1_InitialCondition_f;

  /* InitializeConditions for Memory: '<S56>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_l =
    Active_Aero_System_P.Memory_InitialCondition_b;

  /* InitializeConditions for Memory: '<S28>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_a =
    Active_Aero_System_P.Memory_InitialCondition_p;

  /* InitializeConditions for Memory: '<S30>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_k =
    Active_Aero_System_P.Memory_InitialCondition_m;

  /* InitializeConditions for Memory: '<S39>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_p =
    Active_Aero_System_P.Memory_InitialCondition_o;

  /* InitializeConditions for Memory: '<S31>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_e =
    Active_Aero_System_P.Memory_InitialCondition_on;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Controls' */
  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  Active_Aero_System_DW.UnitDelay_DSTATE_n =
    Active_Aero_System_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay2' */
  Active_Aero_System_DW.UnitDelay2_DSTATE_k =
    Active_Aero_System_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  Active_Aero_System_DW.UnitDelay1_DSTATE_h =
    Active_Aero_System_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  Active_Aero_System_DW.Memory_PreviousInput_bz =
    Active_Aero_System_P.Memory_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay5' */
  Active_Aero_System_DW.UnitDelay5_DSTATE =
    Active_Aero_System_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay3' */
  Active_Aero_System_DW.UnitDelay3_DSTATE_b =
    Active_Aero_System_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay4' */
  Active_Aero_System_DW.UnitDelay4_DSTATE =
    Active_Aero_System_P.UnitDelay4_InitialCondition;

  /* SystemInitialize for Chart: '<S2>/Chart' */
  Active_Aero_System_DW.is_active_c3_Active_Aero_System = 0U;
  Active_Aero_System_DW.is_c3_Active_Aero_System =
    Active_Aero__IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<Root>/Controls' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem10' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem10,
    &Active_Aero_System_P.IfActionSubsystem10);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem10' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem9' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem9,
    &Active_Aero_System_P.IfActionSubsystem9);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem9' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem8' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem8,
    &Active_Aero_System_P.IfActionSubsystem8);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem8' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem7' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem7,
    &Active_Aero_System_P.IfActionSubsystem7);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem7' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem16' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem16,
    &Active_Aero_System_P.IfActionSubsystem16);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem16' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem20' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem20,
    &Active_Aero_System_P.IfActionSubsystem20);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem20' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem19' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem19,
    &Active_Aero_System_P.IfActionSubsystem19);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem19' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem17' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem17,
    &Active_Aero_System_P.IfActionSubsystem17);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem17' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem18' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem18,
    &Active_Aero_System_P.IfActionSubsystem18);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem18' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem21' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem21,
    &Active_Aero_System_P.IfActionSubsystem21);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem21' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem6' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem6,
    &Active_Aero_System_P.IfActionSubsystem6);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem6' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem3' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem3,
    &Active_Aero_System_P.IfActionSubsystem3);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem2' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem2_b,
    &Active_Aero_System_P.IfActionSubsystem2_b);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<S3>/If Action Subsystem1' */
  Active__IfActionSubsystem2_Init(&Active_Aero_System_B.IfActionSubsystem1_c,
    &Active_Aero_System_P.IfActionSubsystem1_c);

  /* End of SystemInitialize for SubSystem: '<S3>/If Action Subsystem1' */
}

/* Model terminate function */
void Active_Aero_SystemModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
Active_Aero_SystemModelClass::Active_Aero_SystemModelClass() :
  Active_Aero_System_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
Active_Aero_SystemModelClass::~Active_Aero_SystemModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_Active_Aero_System_T * Active_Aero_SystemModelClass::getRTM()
{
  return (&Active_Aero_System_M);
}
