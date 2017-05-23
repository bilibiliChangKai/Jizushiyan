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
static const char *ng0 = "D:/Multiply/MultiplyCPU/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
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
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1968);
    *((int *)t2) = 1;
    t3 = (t0 + 1800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB53:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 784U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB25;

LAB24:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB26;

LAB27:    memset(t11, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB32:    t20 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB33;

LAB34:    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t20) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t11) > 0)
        goto LAB39;

LAB40:    memcpy(t10, t29, 8);

LAB41:    t30 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t30, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t21 = (t17 | t18);
    *((unsigned int *)t9) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB42;

LAB43:
LAB44:    t20 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t20, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 & t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t21 = (t17 | t18);
    *((unsigned int *)t9) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB45;

LAB46:
LAB47:    t20 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t20, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t21 = (t17 | t18);
    *((unsigned int *)t9) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB48;

LAB49:
LAB50:    t13 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t13, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB25:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t12) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB31:    t19 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB32;

LAB33:    t24 = ((char*)((ng5)));
    goto LAB34;

LAB35:    t29 = ((char*)((ng1)));
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t29, 32);
    goto LAB41;

LAB39:    memcpy(t10, t24, 8);
    goto LAB41;

LAB42:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t25 | t26);
    t13 = (t4 + 4);
    t19 = (t7 + 4);
    t27 = *((unsigned int *)t13);
    t28 = (~(t27));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t28);
    t33 = *((unsigned int *)t19);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t38);
    goto LAB44;

LAB45:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t25 | t26);
    t13 = (t4 + 4);
    t19 = (t7 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t31 = *((unsigned int *)t13);
    t33 = (~(t31));
    t34 = *((unsigned int *)t7);
    t35 = (~(t34));
    t37 = *((unsigned int *)t19);
    t38 = (~(t37));
    t32 = (t28 & t33);
    t36 = (t35 & t38);
    t39 = (~(t32));
    t40 = (~(t36));
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t39);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t40);
    t43 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t43 & t39);
    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & t40);
    goto LAB47;

LAB48:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t25 | t26);
    goto LAB50;

LAB51:    xsi_set_current_line(50, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB53;

}


extern void work_m_00000000000335156854_0886308060_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000000335156854_0886308060", "isim/SingleCPUTest_isim_beh.exe.sim/work/m_00000000000335156854_0886308060.didat");
	xsi_register_executes(pe);
}
