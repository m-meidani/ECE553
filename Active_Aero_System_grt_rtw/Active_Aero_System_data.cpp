/*
 * Active_Aero_System_data.cpp
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

/* Block parameters (default storage) */
P_Active_Aero_System_T Active_Aero_SystemModelClass::Active_Aero_System_P = {
  /* Expression: 0
   * Referenced by: '<S6>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Constant8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S8>/Constant'
   */
  2.0,

  /* Expression: [870.52
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
  { 870.52, 884.5, 898.49, 912.73, 926.94, 941.16, 955.39, 969.63, 983.88,
    998.15, 1012.4, 1026.7, 1041.2, 1055.7, 1070.2, 1084.7, 1099.2, 1113.7,
    1128.3, 1142.9, 1157.5, 1172.3, 1187.0, 1201.8, 1216.6, 1231.4, 1246.1,
    1261.0, 1276.0, 1291.0, 1306.0, 1321.0, 1336.0, 1351.1, 1364.8, 1378.5,
    1392.3, 1406.0, 1419.8, 1433.6, 1447.4, 1461.2, 1475.0, 1488.9, 1502.7,
    1516.6, 1530.5, 1544.3, 1558.2, 1572.1, 1586.1, 1600.0, 1613.9, 1627.9,
    1641.9, 1655.8, 1669.8, 1683.8, 1697.9, 1711.9, 1726.0, 1740.0, 1754.1,
    1768.2, 1782.4, 1796.5, 1810.6, 1824.3, 1838.0, 1851.6, 1865.3, 1879.1,
    1892.8, 1906.6, 1920.4, 1934.2, 1948.0, 1961.8, 1975.6, 1989.5, 2003.3,
    2017.2, 2031.1, 2045.0, 2058.9, 2072.8, 2086.7, 2100.7, 2114.6, 2128.6,
    2142.6, 2156.6, 2170.6, 2184.6, 2198.6, 2212.6, 2226.7, 2240.8, 2254.8,
    2268.9 },

  /* Expression: [333.6
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
  { 333.6, 340.34, 347.08, 353.82, 360.56, 367.3, 374.04, 380.78, 387.52, 394.25,
    400.99, 407.73, 414.47, 421.21, 427.95, 434.69, 441.43, 448.17, 454.91,
    461.65, 468.39, 475.13, 481.87, 488.61, 495.35, 502.08, 508.82, 515.56,
    522.3, 529.04, 535.78, 542.52, 549.26, 556.0, 562.74, 569.48, 576.22, 582.96,
    589.7, 596.44, 603.18, 609.92, 616.65, 623.39, 630.13, 636.87, 643.61,
    650.35, 657.09, 663.83, 670.57, 677.31, 684.05, 690.79, 697.53, 704.27,
    711.01, 717.75, 724.48, 731.22, 737.96, 744.7, 751.44, 758.18, 764.92,
    771.66, 778.4, 785.14, 791.88, 798.62, 805.36, 812.1, 818.84, 825.58, 832.32,
    839.05, 845.79, 852.53, 859.27, 866.01, 872.75, 879.49, 886.23, 892.97,
    899.71, 906.45, 913.19, 919.93, 926.67, 933.41, 940.15, 946.88, 953.62,
    960.36, 967.1, 973.84, 980.58, 987.32, 994.06, 1000.8 },

  /* Expression: -1
   * Referenced by: '<S8>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S8>/Switch'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S7>/Constant'
   */
  2.0,

  /* Expression: [870.52
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
  { 870.52, 884.5, 898.49, 912.73, 926.94, 941.16, 955.39, 969.63, 983.88,
    998.15, 1012.4, 1026.7, 1041.2, 1055.7, 1070.2, 1084.7, 1099.2, 1113.7,
    1128.3, 1142.9, 1157.5, 1172.3, 1187.0, 1201.8, 1216.6, 1231.4, 1246.1,
    1261.0, 1276.0, 1291.0, 1306.0, 1321.0, 1336.0, 1351.1, 1364.8, 1378.5,
    1392.3, 1406.0, 1419.8, 1433.6, 1447.4, 1461.2, 1475.0, 1488.9, 1502.7,
    1516.6, 1530.5, 1544.3, 1558.2, 1572.1, 1586.1, 1600.0, 1613.9, 1627.9,
    1641.9, 1655.8, 1669.8, 1683.8, 1697.9, 1711.9, 1726.0, 1740.0, 1754.1,
    1768.2, 1782.4, 1796.5, 1810.6, 1824.3, 1838.0, 1851.6, 1865.3, 1879.1,
    1892.8, 1906.6, 1920.4, 1934.2, 1948.0, 1961.8, 1975.6, 1989.5, 2003.3,
    2017.2, 2031.1, 2045.0, 2058.9, 2072.8, 2086.7, 2100.7, 2114.6, 2128.6,
    2142.6, 2156.6, 2170.6, 2184.6, 2198.6, 2212.6, 2226.7, 2240.8, 2254.8,
    2268.9 },

  /* Expression: [333.6
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
  { 333.6, 340.34, 347.08, 353.82, 360.56, 367.3, 374.04, 380.78, 387.52, 394.25,
    400.99, 407.73, 414.47, 421.21, 427.95, 434.69, 441.43, 448.17, 454.91,
    461.65, 468.39, 475.13, 481.87, 488.61, 495.35, 502.08, 508.82, 515.56,
    522.3, 529.04, 535.78, 542.52, 549.26, 556.0, 562.74, 569.48, 576.22, 582.96,
    589.7, 596.44, 603.18, 609.92, 616.65, 623.39, 630.13, 636.87, 643.61,
    650.35, 657.09, 663.83, 670.57, 677.31, 684.05, 690.79, 697.53, 704.27,
    711.01, 717.75, 724.48, 731.22, 737.96, 744.7, 751.44, 758.18, 764.92,
    771.66, 778.4, 785.14, 791.88, 798.62, 805.36, 812.1, 818.84, 825.58, 832.32,
    839.05, 845.79, 852.53, 859.27, 866.01, 872.75, 879.49, 886.23, 892.97,
    899.71, 906.45, 913.19, 919.93, 926.67, 933.41, 940.15, 946.88, 953.62,
    960.36, 967.1, 973.84, 980.58, 987.32, 994.06, 1000.8 },

  /* Expression: 100
   * Referenced by: '<S2>/Constant'
   */
  100.0,

  /* Expression: 10
   * Referenced by: '<S14>/Constant'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<S14>/Constant1'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S15>/Constant'
   */
  10.0,

  /* Expression: 100
   * Referenced by: '<S15>/Constant1'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Constant1'
   */
  0.0,

  /* Expression: 2.5
   * Referenced by: '<S2>/Constant2'
   */
  2.5,

  /* Expression: 0
   * Referenced by: '<S2>/Constant3'
   */
  0.0,

  /* Expression: 128
   * Referenced by: '<S2>/Constant4'
   */
  128.0,

  /* Expression: 2
   * Referenced by: '<S10>/Constant'
   */
  2.0,

  /* Expression: Cnst_Veh_MaxFrc_N
   * Referenced by: '<S10>/Constant4'
   */
  2800.0,

  /* Expression: 0
   * Referenced by: '<S2>/Memory'
   */
  0.0,

  /* Expression: [870.52
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
  { 870.52, 884.5, 898.49, 912.73, 926.94, 941.16, 955.39, 969.63, 983.88,
    998.15, 1012.4, 1026.7, 1041.2, 1055.7, 1070.2, 1084.7, 1099.2, 1113.7,
    1128.3, 1142.9, 1157.5, 1172.3, 1187.0, 1201.8, 1216.6, 1231.4, 1246.1,
    1261.0, 1276.0, 1291.0, 1306.0, 1321.0, 1336.0, 1351.1, 1364.8, 1378.5,
    1392.3, 1406.0, 1419.8, 1433.6, 1447.4, 1461.2, 1475.0, 1488.9, 1502.7,
    1516.6, 1530.5, 1544.3, 1558.2, 1572.1, 1586.1, 1600.0, 1613.9, 1627.9,
    1641.9, 1655.8, 1669.8, 1683.8, 1697.9, 1711.9, 1726.0, 1740.0, 1754.1,
    1768.2, 1782.4, 1796.5, 1810.6, 1824.3, 1838.0, 1851.6, 1865.3, 1879.1,
    1892.8, 1906.6, 1920.4, 1934.2, 1948.0, 1961.8, 1975.6, 1989.5, 2003.3,
    2017.2, 2031.1, 2045.0, 2058.9, 2072.8, 2086.7, 2100.7, 2114.6, 2128.6,
    2142.6, 2156.6, 2170.6, 2184.6, 2198.6, 2212.6, 2226.7, 2240.8, 2254.8,
    2268.9 },

  /* Expression: [333.6
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
  { 333.6, 340.34, 347.08, 353.82, 360.56, 367.3, 374.04, 380.78, 387.52, 394.25,
    400.99, 407.73, 414.47, 421.21, 427.95, 434.69, 441.43, 448.17, 454.91,
    461.65, 468.39, 475.13, 481.87, 488.61, 495.35, 502.08, 508.82, 515.56,
    522.3, 529.04, 535.78, 542.52, 549.26, 556.0, 562.74, 569.48, 576.22, 582.96,
    589.7, 596.44, 603.18, 609.92, 616.65, 623.39, 630.13, 636.87, 643.61,
    650.35, 657.09, 663.83, 670.57, 677.31, 684.05, 690.79, 697.53, 704.27,
    711.01, 717.75, 724.48, 731.22, 737.96, 744.7, 751.44, 758.18, 764.92,
    771.66, 778.4, 785.14, 791.88, 798.62, 805.36, 812.1, 818.84, 825.58, 832.32,
    839.05, 845.79, 852.53, 859.27, 866.01, 872.75, 879.49, 886.23, 892.97,
    899.71, 906.45, 913.19, 919.93, 926.67, 933.41, 940.15, 946.88, 953.62,
    960.36, 967.1, 973.84, 980.58, 987.32, 994.06, 1000.8 },

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay3'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S2>/MAX_SAFE_SPEED'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S2>/Zero'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S2>/Unit Delay4'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S2>/Switch1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S4>/Constant'
   */
  2.0,

  /* Expression: 0.9
   * Referenced by: '<S4>/Constant1'
   */
  0.9,

  /* Expression: 4.105
   * Referenced by: '<S4>/Constant2'
   */
  4.105,

  /* Expression: 1.4
   * Referenced by: '<S4>/Constant3'
   */
  1.4,

  /* Expression: 0.01
   * Referenced by: '<S4>/Gain'
   */
  0.01,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Expression: 0.01
   * Referenced by: '<S6>/Gain1'
   */
  0.01,

  /* Expression: Cnst_Veh_MaxFrc_N
   * Referenced by: '<S6>/Constant4'
   */
  2800.0,

  /* Expression: Cnst_Veh_WhlBase_M
   * Referenced by: '<S6>/Constant1'
   */
  1.35,

  /* Expression: Cnst_Veh_CGx_M
   * Referenced by: '<S6>/Constant2'
   */
  0.858,

  /* Expression: Cnst_Grav
   * Referenced by: '<S6>/Constant7'
   */
  9.81,

  /* Expression: Cnst_Veh_Mass_KG
   * Referenced by: '<S6>/Constant'
   */
  250.0,

  /* Expression: 0
   * Referenced by: '<S6>/Unit Delay2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant3'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S5>/Multiply'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S6>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.01
   * Referenced by: '<S6>/Gain'
   */
  0.01,

  /* Expression: Cnst_ExecTime_S
   * Referenced by: '<S6>/Constant6'
   */
  0.015,

  /* Expression: 0
   * Referenced by: '<S6>/Switch1'
   */
  0.0,

  /* Expression: 3.6
   * Referenced by: '<S1>/Gain'
   */
  3.6,

  /* Expression: 0
   * Referenced by: '<S6>/Unit Delay3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Switch2'
   */
  0.0,

  /* Expression: Cnst_Veh_CGz_M
   * Referenced by: '<S6>/Constant3'
   */
  0.265,

  /* Expression: 1
   * Referenced by: '<Root>/Constant4'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S27>/Memory'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S59>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S58>/Constant'
   */
  -1.0,

  /* Expression: 0.01
   * Referenced by: '<S3>/ERR_TOLERANCE'
   */
  0.01,

  /* Expression: -1
   * Referenced by: '<S16>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S60>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S21>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S62>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S23>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S3>/Constant1'
   */
  -1.0,

  /* Expression: 0.01
   * Referenced by: '<S3>/ERR_TOLERANCE1'
   */
  0.01,

  /* Expression: 1
   * Referenced by: '<S3>/ONE'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S27>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S26>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Unit Delay'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S3>/MAX_ACT_CHANGE'
   */
  10.0,

  /* Expression: -1
   * Referenced by: '<S18>/Constant'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S3>/Unit Delay1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S19>/Constant'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S26>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S56>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S56>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S28>/Memory'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S3>/RESP_OUT_OF_RANGE_THRESH'
   */
  5.0,

  /* Expression: -1
   * Referenced by: '<S25>/Constant'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S28>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S30>/Memory'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S61>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S22>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S17>/Constant'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S63>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S24>/Constant'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S20>/Constant'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S30>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S39>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S39>/Switch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S31>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S31>/Switch'
   */
  0.0,

  /* Start of '<S3>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S41>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem1' */

  /* Start of '<S3>/If Action Subsystem10' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S42>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem10' */

  /* Start of '<S3>/If Action Subsystem21' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S49>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem21' */

  /* Start of '<S3>/If Action Subsystem18' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S45>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem18' */

  /* Start of '<S3>/If Action Subsystem17' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S44>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem17' */

  /* Start of '<S3>/If Action Subsystem19' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S46>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem19' */

  /* Start of '<S3>/If Action Subsystem20' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S48>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem20' */

  /* Start of '<S3>/If Action Subsystem16' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S43>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem16' */

  /* Start of '<S3>/If Action Subsystem7' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S53>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem7' */

  /* Start of '<S3>/If Action Subsystem8' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S54>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem8' */

  /* Start of '<S3>/If Action Subsystem9' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S55>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem9' */

  /* Start of '<S3>/If Action Subsystem6' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S52>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem6' */

  /* Start of '<S3>/If Action Subsystem3' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S50>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S3>/If Action Subsystem3' */

  /* Start of '<S3>/If Action Subsystem2' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S47>/Out1'
     */
    0.0
  }
  /* End of '<S3>/If Action Subsystem2' */
};
