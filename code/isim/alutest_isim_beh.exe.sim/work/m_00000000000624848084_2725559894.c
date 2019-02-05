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
static const char *ng0 = "C:/Users/Administrator/Desktop/PipelineCPU_20180606_1.1/PipelineCPU/alu.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};



static void Always_47_0(char *t0)
{
    char t9[8];
    char t40[8];
    char t47[8];
    char t49[8];
    char t50[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:
LAB38:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB38;

LAB8:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB38;

LAB10:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB38;

LAB12:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB39;

LAB40:
LAB41:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 32);
    goto LAB38;

LAB14:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB42;

LAB43:
LAB44:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 32);
    goto LAB38;

LAB16:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB45;

LAB46:
LAB47:    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 32);
    goto LAB38;

LAB18:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t40) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t40 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB48;

LAB49:
LAB50:    memset(t9, 0, 8);
    t39 = (t9 + 4);
    t41 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t9) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB52;

LAB51:    t44 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t9, 0, 0, 32);
    goto LAB38;

LAB20:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB38;

LAB22:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB38;

LAB24:    xsi_set_current_line(59, ng0);

LAB53:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1208U);
    t13 = *((char **)t8);
    memset(t40, 0, 8);
    t8 = (t40 + 4);
    t21 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t40) = t19;
    t20 = *((unsigned int *)t21);
    t23 = (t20 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t8) = t24;
    memset(t47, 0, 8);
    t22 = (t9 + 4);
    t39 = (t40 + 4);
    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t40);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t39);
    t30 = (t28 ^ t29);
    t33 = (t27 | t30);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t39);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB57;

LAB54:    if (t36 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t47) = 1;

LAB57:    t46 = (t47 + 4);
    t42 = *((unsigned int *)t46);
    t43 = (~(t42));
    t44 = *((unsigned int *)t47);
    t45 = (t44 & t43);
    t48 = (t45 != 0);
    if (t48 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t47, 0, 8);
    t2 = (t47 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t47) = t12;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t49, 0, 8);
    t7 = (t49 + 4);
    t13 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t49) = t19;
    t20 = *((unsigned int *)t13);
    t23 = (t20 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    memset(t50, 0, 8);
    t21 = (t47 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB80;

LAB79:    t22 = (t49 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t47) < *((unsigned int *)t49))
        goto LAB81;

LAB82:    memset(t40, 0, 8);
    t41 = (t50 + 4);
    t25 = *((unsigned int *)t41);
    t26 = (~(t25));
    t27 = *((unsigned int *)t50);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t41) != 0)
        goto LAB86;

LAB87:    t51 = (t40 + 4);
    t30 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t51);
    t34 = (t30 || t33);
    if (t34 > 0)
        goto LAB88;

LAB89:    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    t37 = *((unsigned int *)t51);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t51) > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t40) > 0)
        goto LAB94;

LAB95:    memcpy(t9, t53, 8);

LAB96:    t55 = (t0 + 1768);
    xsi_vlogvar_assign_value(t55, t9, 0, 0, 32);

LAB60:    goto LAB38;

LAB26:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB98;

LAB97:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB98;

LAB101:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB99;

LAB100:    memset(t40, 0, 8);
    t21 = (t47 + 4);
    t10 = *((unsigned int *)t21);
    t11 = (~(t10));
    t12 = *((unsigned int *)t47);
    t14 = (t12 & t11);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t21) != 0)
        goto LAB104;

LAB105:    t39 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t39);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB106;

LAB107:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t39);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t39) > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t40) > 0)
        goto LAB112;

LAB113:    memcpy(t9, t46, 8);

LAB114:    t51 = (t0 + 1768);
    xsi_vlogvar_assign_value(t51, t9, 0, 0, 32);
    goto LAB38;

LAB28:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB38;

LAB30:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB38;

LAB32:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t40, 0, 8);
    xsi_vlog_signed_rshift(t40, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t40, 0, 0, 32);
    goto LAB38;

LAB34:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB38;

LAB39:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t33);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t34);
    goto LAB41;

LAB42:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB44;

LAB45:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t19 | t20);
    goto LAB47;

LAB48:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB50;

LAB52:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t9) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB51;

LAB56:    t41 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(60, ng0);
    t51 = (t0 + 1048U);
    t52 = *((char **)t51);
    t51 = (t0 + 1208U);
    t53 = *((char **)t51);
    memset(t54, 0, 8);
    t51 = (t52 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB62;

LAB61:    t55 = (t53 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t52) < *((unsigned int *)t53))
        goto LAB63;

LAB64:    memset(t50, 0, 8);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t57) != 0)
        goto LAB68;

LAB69:    t64 = (t50 + 4);
    t65 = *((unsigned int *)t50);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB70;

LAB71:    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t64) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t50) > 0)
        goto LAB76;

LAB77:    memcpy(t49, t73, 8);

LAB78:    t74 = (t0 + 1768);
    xsi_vlogvar_assign_value(t74, t49, 0, 0, 32);
    goto LAB60;

LAB62:    t56 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t54) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t50) = 1;
    goto LAB69;

LAB68:    t63 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB69;

LAB70:    t68 = ((char*)((ng3)));
    goto LAB71;

LAB72:    t73 = ((char*)((ng1)));
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t49, 32, t68, 32, t73, 32);
    goto LAB78;

LAB76:    memcpy(t49, t68, 8);
    goto LAB78;

LAB80:    t39 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB82;

LAB81:    *((unsigned int *)t50) = 1;
    goto LAB82;

LAB84:    *((unsigned int *)t40) = 1;
    goto LAB87;

LAB86:    t46 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB87;

LAB88:    t52 = ((char*)((ng1)));
    goto LAB89;

LAB90:    t53 = ((char*)((ng3)));
    goto LAB91;

LAB92:    xsi_vlog_unsigned_bit_combine(t9, 32, t52, 32, t53, 32);
    goto LAB96;

LAB94:    memcpy(t9, t52, 8);
    goto LAB96;

LAB98:    t13 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB100;

LAB99:    *((unsigned int *)t47) = 1;
    goto LAB100;

LAB102:    *((unsigned int *)t40) = 1;
    goto LAB105;

LAB104:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB105;

LAB106:    t41 = ((char*)((ng3)));
    goto LAB107;

LAB108:    t46 = ((char*)((ng1)));
    goto LAB109;

LAB110:    xsi_vlog_unsigned_bit_combine(t9, 32, t41, 32, t46, 32);
    goto LAB114;

LAB112:    memcpy(t9, t41, 8);
    goto LAB114;

}


extern void work_m_00000000000624848084_2725559894_init()
{
	static char *pe[] = {(void *)Always_47_0};
	xsi_register_didat("work_m_00000000000624848084_2725559894", "isim/alutest_isim_beh.exe.sim/work/m_00000000000624848084_2725559894.didat");
	xsi_register_executes(pe);
}
