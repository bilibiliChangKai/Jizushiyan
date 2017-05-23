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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Multiply/MultiplyCPU/IM.v";
static int ng1[] = {0, 0};
static const char *ng2 = "test/test.txt";
static int ng3[] = {1, 0};
static int ng4[] = {4, 0};
static int ng5[] = {3, 0};
static int ng6[] = {2, 0};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {7, 0};
static int ng10[] = {25, 0};
static int ng11[] = {21, 0};
static int ng12[] = {20, 0};
static int ng13[] = {16, 0};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 26, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1656);
    xsi_vlogfile_readmemb(ng2, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t40[8];
    char t49[8];
    char t50[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    char *t60;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2520);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 1656);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t32 = (t0 + 1656);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1656);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 692U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t31, 8, t30, t34, t37, 2, 1, t39, 32, 2);
    memset(t40, 0, 8);
    t38 = (t40 + 4);
    t41 = (t31 + 4);
    t42 = *((unsigned int *)t31);
    t43 = (t42 >> 2);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 2);
    *((unsigned int *)t38) = t45;
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t46 & 63U);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 & 63U);
    t48 = (t0 + 1104);
    xsi_vlogvar_assign_value(t48, t40, 0, 0, 6);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t30, 32, 2);
    memset(t31, 0, 8);
    t29 = (t31 + 4);
    t32 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t32);
    t12 = (t11 >> 0);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 3U);
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 3U);
    t33 = (t0 + 1196);
    t34 = (t0 + 1196);
    t35 = (t34 + 44U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    t38 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t40, t49, t50, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t39 = (t40 + 4);
    t15 = *((unsigned int *)t39);
    t51 = (!(t15));
    t41 = (t49 + 4);
    t16 = *((unsigned int *)t41);
    t52 = (!(t16));
    t53 = (t51 && t52);
    t48 = (t50 + 4);
    t17 = *((unsigned int *)t48);
    t54 = (!(t17));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    memset(t40, 0, 8);
    t32 = (t40 + 4);
    t33 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 5);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t33);
    t12 = (t11 >> 5);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 7U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 7U);
    t34 = (t0 + 1196);
    t35 = (t0 + 1196);
    t36 = (t35 + 44U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    t39 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t49, t50, t59, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t49 + 4);
    t15 = *((unsigned int *)t41);
    t51 = (!(t15));
    t48 = (t50 + 4);
    t16 = *((unsigned int *)t48);
    t52 = (!(t16));
    t53 = (t51 && t52);
    t60 = (t59 + 4);
    t17 = *((unsigned int *)t60);
    t54 = (!(t17));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    memset(t40, 0, 8);
    t32 = (t40 + 4);
    t33 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t33);
    t12 = (t11 >> 0);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 31U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 31U);
    t34 = (t0 + 1288);
    xsi_vlogvar_assign_value(t34, t40, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng6)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    memset(t40, 0, 8);
    t32 = (t40 + 4);
    t33 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 3);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t33);
    t12 = (t11 >> 3);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 31U);
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 31U);
    t34 = (t0 + 1380);
    xsi_vlogvar_assign_value(t34, t40, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng6)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t32 = (t0 + 1472);
    t33 = (t0 + 1472);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng7)));
    t37 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t40, t49, t50, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t40 + 4);
    t9 = *((unsigned int *)t38);
    t51 = (!(t9));
    t39 = (t49 + 4);
    t10 = *((unsigned int *)t39);
    t52 = (!(t10));
    t53 = (t51 && t52);
    t41 = (t50 + 4);
    t11 = *((unsigned int *)t41);
    t54 = (!(t11));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = (t0 + 1656);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t31, 32, 2);
    t32 = (t0 + 1472);
    t33 = (t0 + 1472);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng9)));
    t37 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t40, t49, t50, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t40 + 4);
    t9 = *((unsigned int *)t38);
    t51 = (!(t9));
    t39 = (t49 + 4);
    t10 = *((unsigned int *)t39);
    t52 = (!(t10));
    t53 = (t51 && t52);
    t41 = (t50 + 4);
    t11 = *((unsigned int *)t41);
    t54 = (!(t11));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t7 = (t0 + 1564);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng10)));
    t28 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t6, t31, t40, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t51 = (!(t9));
    t30 = (t31 + 4);
    t10 = *((unsigned int *)t30);
    t52 = (!(t10));
    t53 = (t51 && t52);
    t32 = (t40 + 4);
    t11 = *((unsigned int *)t32);
    t54 = (!(t11));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t7 = (t0 + 1564);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng12)));
    t28 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t6, t31, t40, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t51 = (!(t9));
    t30 = (t31 + 4);
    t10 = *((unsigned int *)t30);
    t52 = (!(t10));
    t53 = (t51 && t52);
    t32 = (t40 + 4);
    t11 = *((unsigned int *)t32);
    t54 = (!(t11));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t7 = (t0 + 1564);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng7)));
    t28 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t31, t40, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t51 = (!(t9));
    t30 = (t31 + 4);
    t10 = *((unsigned int *)t30);
    t52 = (!(t10));
    t53 = (t51 && t52);
    t32 = (t40 + 4);
    t11 = *((unsigned int *)t32);
    t54 = (!(t11));
    t55 = (t53 && t54);
    if (t55 == 1)
        goto LAB26;

LAB27:    goto LAB12;

LAB14:    t18 = *((unsigned int *)t50);
    t56 = (t18 + 0);
    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t49);
    t57 = (t19 - t20);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t33, t31, t56, *((unsigned int *)t49), t58);
    goto LAB15;

LAB16:    t18 = *((unsigned int *)t59);
    t56 = (t18 + 0);
    t19 = *((unsigned int *)t49);
    t20 = *((unsigned int *)t50);
    t57 = (t19 - t20);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t34, t40, t56, *((unsigned int *)t50), t58);
    goto LAB17;

LAB18:    t12 = *((unsigned int *)t50);
    t56 = (t12 + 0);
    t13 = *((unsigned int *)t40);
    t14 = *((unsigned int *)t49);
    t57 = (t13 - t14);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t32, t6, t56, *((unsigned int *)t49), t58);
    goto LAB19;

LAB20:    t12 = *((unsigned int *)t50);
    t56 = (t12 + 0);
    t13 = *((unsigned int *)t40);
    t14 = *((unsigned int *)t49);
    t57 = (t13 - t14);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t32, t6, t56, *((unsigned int *)t49), t58);
    goto LAB21;

LAB22:    t12 = *((unsigned int *)t40);
    t56 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t31);
    t57 = (t13 - t14);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t5, t4, t56, *((unsigned int *)t31), t58);
    goto LAB23;

LAB24:    t12 = *((unsigned int *)t40);
    t56 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t31);
    t57 = (t13 - t14);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t5, t4, t56, *((unsigned int *)t31), t58);
    goto LAB25;

LAB26:    t12 = *((unsigned int *)t40);
    t56 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t31);
    t57 = (t13 - t14);
    t58 = (t57 + 1);
    xsi_vlogvar_assign_value(t5, t4, t56, *((unsigned int *)t31), t58);
    goto LAB27;

}


extern void work_m_00000000003599387904_2138213552_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000003599387904_2138213552", "isim/SingleCPU_isim_beh.exe.sim/work/m_00000000003599387904_2138213552.didat");
	xsi_register_executes(pe);
}
