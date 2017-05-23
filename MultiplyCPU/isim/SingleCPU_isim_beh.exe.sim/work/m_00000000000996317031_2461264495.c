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
static const char *ng0 = "D:/Multiply/MultiplyCPU/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {64, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {31, 0};
static int ng7[] = {24, 0};
static int ng8[] = {23, 0};
static int ng9[] = {16, 0};
static int ng10[] = {15, 0};
static int ng11[] = {8, 0};
static int ng12[] = {7, 0};



static void Initial_33_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1196);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1104);
    t16 = (t0 + 1104);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1104);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1196);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1196);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1196);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_39_1(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t42[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    char *t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    char *t49;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2060);
    *((int *)t2) = 1;
    t3 = (t0 + 1892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);

LAB18:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    t12 = (t5 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1104);
    t21 = (t14 + 40U);
    t24 = *((char **)t21);
    t25 = (t0 + 692U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_array_select_value(t11, 8, t4, t13, t24, 2, 1, t26, 32, 2);
    t25 = (t0 + 1012);
    t27 = (t0 + 1012);
    t28 = (t27 + 44U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    t31 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t22, t23, t42, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t34 = (t22 + 4);
    t6 = *((unsigned int *)t34);
    t33 = (!(t6));
    t43 = (t23 + 4);
    t7 = *((unsigned int *)t43);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t44 = (t42 + 4);
    t8 = *((unsigned int *)t44);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    t12 = (t5 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1104);
    t21 = (t14 + 40U);
    t24 = *((char **)t21);
    t25 = (t0 + 692U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t26, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t11, 8, t4, t13, t24, 2, 1, t22, 32, 2);
    t27 = (t0 + 1012);
    t28 = (t0 + 1012);
    t29 = (t28 + 44U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng8)));
    t34 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t23, t42, t48, ((int*)(t30)), 2, t31, 32, 1, t34, 32, 1);
    t43 = (t23 + 4);
    t6 = *((unsigned int *)t43);
    t33 = (!(t6));
    t44 = (t42 + 4);
    t7 = *((unsigned int *)t44);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t49 = (t48 + 4);
    t8 = *((unsigned int *)t49);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    t12 = (t5 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1104);
    t21 = (t14 + 40U);
    t24 = *((char **)t21);
    t25 = (t0 + 692U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t26, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t11, 8, t4, t13, t24, 2, 1, t22, 32, 2);
    t27 = (t0 + 1012);
    t28 = (t0 + 1012);
    t29 = (t28 + 44U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng10)));
    t34 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t23, t42, t48, ((int*)(t30)), 2, t31, 32, 1, t34, 32, 1);
    t43 = (t23 + 4);
    t6 = *((unsigned int *)t43);
    t33 = (!(t6));
    t44 = (t42 + 4);
    t7 = *((unsigned int *)t44);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t49 = (t48 + 4);
    t8 = *((unsigned int *)t49);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    t12 = (t5 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1104);
    t21 = (t14 + 40U);
    t24 = *((char **)t21);
    t25 = (t0 + 692U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t26, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t11, 8, t4, t13, t24, 2, 1, t22, 32, 2);
    t27 = (t0 + 1012);
    t28 = (t0 + 1012);
    t29 = (t28 + 44U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng12)));
    t34 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t23, t42, t48, ((int*)(t30)), 2, t31, 32, 1, t34, 32, 1);
    t43 = (t23 + 4);
    t6 = *((unsigned int *)t43);
    t33 = (!(t6));
    t44 = (t42 + 4);
    t7 = *((unsigned int *)t44);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t49 = (t48 + 4);
    t8 = *((unsigned int *)t49);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB25;

LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 24);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 24);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = (t0 + 1104);
    t24 = (t0 + 1104);
    t25 = (t24 + 44U);
    t26 = *((char **)t25);
    t27 = (t0 + 1104);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    t30 = (t0 + 692U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t31, 32, 2);
    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1104);
    t12 = (t0 + 1104);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1104);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1104);
    t12 = (t0 + 1104);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1104);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1104);
    t12 = (t0 + 1104);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1104);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng5)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t21, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB13;

LAB14:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB15;

LAB16:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB17;

LAB19:    t9 = *((unsigned int *)t42);
    t45 = (t9 + 0);
    t10 = *((unsigned int *)t22);
    t15 = *((unsigned int *)t23);
    t46 = (t10 - t15);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t25, t11, t45, *((unsigned int *)t23), t47, 0LL);
    goto LAB20;

LAB21:    t9 = *((unsigned int *)t48);
    t45 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t42);
    t46 = (t10 - t15);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t27, t11, t45, *((unsigned int *)t42), t47, 0LL);
    goto LAB22;

LAB23:    t9 = *((unsigned int *)t48);
    t45 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t42);
    t46 = (t10 - t15);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t27, t11, t45, *((unsigned int *)t42), t47, 0LL);
    goto LAB24;

LAB25:    t9 = *((unsigned int *)t48);
    t45 = (t9 + 0);
    t10 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t42);
    t46 = (t10 - t15);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t27, t11, t45, *((unsigned int *)t42), t47, 0LL);
    goto LAB26;

}


extern void work_m_00000000000996317031_2461264495_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000000996317031_2461264495", "isim/SingleCPU_isim_beh.exe.sim/work/m_00000000000996317031_2461264495.didat");
	xsi_register_executes(pe);
}
