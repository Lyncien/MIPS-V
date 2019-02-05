/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Administrator/Desktop/PipelineCPU_20180606_1.21/PipelineCPU_20180606_1.21/PipelineCPU/seg.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {63U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {6U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {91U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {79U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {102U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {109U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {125U, 0U};
static int ng16[] = {7, 0};
static unsigned int ng17[] = {7U, 0U};
static int ng18[] = {8, 0};
static unsigned int ng19[] = {127U, 0U};
static int ng20[] = {9, 0};
static unsigned int ng21[] = {111U, 0U};
static int ng22[] = {10, 0};
static unsigned int ng23[] = {119U, 0U};
static int ng24[] = {11, 0};
static unsigned int ng25[] = {124U, 0U};
static int ng26[] = {12, 0};
static unsigned int ng27[] = {57U, 0U};
static int ng28[] = {13, 0};
static unsigned int ng29[] = {94U, 0U};
static int ng30[] = {14, 0};
static unsigned int ng31[] = {121U, 0U};
static int ng32[] = {15, 0};
static unsigned int ng33[] = {113U, 0U};
static int ng34[] = {400000, 0};
static unsigned int ng35[] = {1U, 0U};
static int ng36[] = {50000000, 0};
static unsigned int ng37[] = {10U, 0U};
static unsigned int ng38[] = {0U, 255U};
static unsigned int ng39[] = {12U, 0U};
static unsigned int ng40[] = {0U, 15U};
static unsigned int ng41[] = {8U, 0U};
static unsigned int ng42[] = {2U, 0U};
static unsigned int ng43[] = {3U, 0U};
static unsigned int ng44[] = {4U, 0U};
static unsigned int ng45[] = {5U, 0U};
static unsigned int ng46[] = {9U, 0U};
static unsigned int ng47[] = {14U, 0U};
static unsigned int ng48[] = {13U, 0U};
static unsigned int ng49[] = {11U, 0U};



static void Always_35_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5280);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB13:    t6 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 32);
    if (t21 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng12)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng14)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng16)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng18)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng20)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng22)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng24)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng26)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng28)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng30)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng32)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t21 == 1)
        goto LAB44;

LAB45:
LAB47:
LAB46:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB48:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 7);
    goto LAB12;

LAB14:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB50;

LAB49:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 & 127U);
    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 7);
    goto LAB48;

LAB16:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB52;

LAB51:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB18:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB54;

LAB53:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB20:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB56;

LAB55:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB22:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng11)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB58;

LAB57:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB24:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng13)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB60;

LAB59:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB26:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng15)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB62;

LAB61:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB28:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng17)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB64;

LAB63:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB30:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng19)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB66;

LAB65:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB32:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng21)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB68;

LAB67:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB34:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng23)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB70;

LAB69:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB36:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng25)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB72;

LAB71:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB38:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng27)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB74;

LAB73:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB40:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng29)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB76;

LAB75:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB42:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng31)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB78;

LAB77:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB44:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng33)));
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB80;

LAB79:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 7);
    goto LAB48;

LAB50:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t11 | t14);
    goto LAB49;

LAB52:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB51;

LAB54:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB53;

LAB56:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB55;

LAB58:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB57;

LAB60:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB59;

LAB62:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB61;

LAB64:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB63;

LAB66:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB65;

LAB68:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB67;

LAB70:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB69;

LAB72:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB71;

LAB74:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB73;

LAB76:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB75;

LAB78:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB77;

LAB80:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t11 | t14);
    goto LAB79;

}

static void Always_61_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5296);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng34)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);

LAB8:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);

LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 2, t4, 2, t5, 2);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 2);
    goto LAB8;

LAB10:    xsi_set_current_line(75, ng0);

LAB13:    xsi_set_current_line(76, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng37)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB17;

LAB14:    if (t21 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t15 = (t8 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(78, ng0);
    t16 = ((char*)((ng1)));
    t29 = (t0 + 2568);
    xsi_vlogvar_assign_value(t29, t16, 0, 0, 4);
    goto LAB20;

}

static void Always_85_2(char *t0)
{
    char t9[8];
    char t10[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5312);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng35)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng42)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng43)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng44)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng45)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng41)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng46)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(88, ng0);

LAB30:    xsi_set_current_line(88, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 24);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 24);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 255U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = ((char*)((ng38)));
    xsi_vlogtype_concat(t9, 16, 16, 2U, t20, 8, t10, 8);
    t21 = (t0 + 2728);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 16);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng39)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB9:    xsi_set_current_line(89, ng0);

LAB31:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 20);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 20);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4095U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 4095U);
    t7 = ((char*)((ng40)));
    xsi_vlogtype_concat(t9, 16, 16, 2U, t7, 4, t10, 12);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB11:    xsi_set_current_line(90, ng0);

LAB32:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 16);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 16);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 65535U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 65535U);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB13:    xsi_set_current_line(91, ng0);

LAB33:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 12);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 12);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 65535U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 65535U);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB15:    xsi_set_current_line(92, ng0);

LAB34:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 8);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 65535U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 65535U);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB17:    xsi_set_current_line(93, ng0);

LAB35:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 4);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 4);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 65535U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 65535U);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB19:    xsi_set_current_line(94, ng0);

LAB36:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 65535U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 65535U);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB21:    xsi_set_current_line(95, ng0);

LAB37:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4095U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 4095U);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t10, 12, t3, 4);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 16);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB23:    xsi_set_current_line(96, ng0);

LAB38:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 255U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 255U);
    xsi_vlogtype_concat(t9, 16, 16, 2U, t10, 8, t3, 8);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 16);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng43)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB25:    xsi_set_current_line(97, ng0);

LAB39:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 28);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 28);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 15U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 15U);
    t7 = ((char*)((ng38)));
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t22, 0, 8);
    t11 = (t22 + 4);
    t13 = (t12 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (t23 >> 0);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t13);
    t26 = (t25 >> 0);
    *((unsigned int *)t11) = t26;
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 15U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 15U);
    xsi_vlogtype_concat(t9, 16, 16, 3U, t22, 4, t7, 8, t10, 4);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 16);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

}

static void Always_102_3(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 4744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng35)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng42)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng43)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng47)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(105, ng0);
    t9 = ((char*)((ng47)));
    t10 = (t0 + 3048);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 + 4);
    t18 = (t12 + 4);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB18;

LAB19:
LAB20:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t13, 0, 0, 4);
    goto LAB17;

LAB9:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t9 = (t3 + 4);
    t10 = (t7 + 4);
    t11 = (t13 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB21;

LAB22:
LAB23:    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng49)));
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t9 = (t3 + 4);
    t10 = (t7 + 4);
    t11 = (t13 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB24;

LAB25:
LAB26:    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t9 = (t3 + 4);
    t10 = (t7 + 4);
    t11 = (t13 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB27;

LAB28:
LAB29:    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 4);
    goto LAB17;

LAB18:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t25 | t26);
    t27 = (t9 + 4);
    t28 = (t12 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t12);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t37);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & t38);
    goto LAB20;

LAB21:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t25 | t26);
    t12 = (t3 + 4);
    t17 = (t7 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t3);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t37);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t38);
    goto LAB23;

LAB24:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t25 | t26);
    t12 = (t3 + 4);
    t17 = (t7 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t3);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t37);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t38);
    goto LAB26;

LAB27:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t25 | t26);
    t12 = (t3 + 4);
    t17 = (t7 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t3);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t37);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t38);
    goto LAB29;

}

static void Always_113_4(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5344);
    *((int *)t2) = 1;
    t3 = (t0 + 4992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng35)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng42)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng43)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(116, ng0);
    t10 = (t0 + 2728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t9 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 2888);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 4);
    goto LAB17;

LAB9:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 4);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 4);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 15U);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 8);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 8);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 15U);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(119, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 12);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 12);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 15U);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 4);
    goto LAB17;

}


extern void work_m_00000000002722366037_2678915913_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_61_1,(void *)Always_85_2,(void *)Always_102_3,(void *)Always_113_4};
	xsi_register_didat("work_m_00000000002722366037_2678915913", "isim/test_isim_beh.exe.sim/work/m_00000000002722366037_2678915913.didat");
	xsi_register_executes(pe);
}
