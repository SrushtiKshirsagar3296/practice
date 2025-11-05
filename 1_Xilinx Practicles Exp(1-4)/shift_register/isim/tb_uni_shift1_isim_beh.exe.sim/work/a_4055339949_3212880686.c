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
static const char *ng0 = "C:/Users/Sysuser/Desktop/Practicles/shift_register/shift_register.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4055339949_3212880686_p_0(char *t0)
{
    char t28[16];
    char t29[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t30;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 4136);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 4200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 6614);
    t11 = xsi_mem_cmp(t2, t5, 2U);
    if (t11 == 1)
        goto LAB8;

LAB13:    t7 = (t0 + 6616);
    t12 = xsi_mem_cmp(t7, t5, 2U);
    if (t12 == 1)
        goto LAB9;

LAB14:    t9 = (t0 + 6618);
    t13 = xsi_mem_cmp(t9, t5, 2U);
    if (t13 == 1)
        goto LAB10;

LAB15:    t14 = (t0 + 6620);
    t16 = xsi_mem_cmp(t14, t5, 2U);
    if (t16 == 1)
        goto LAB11;

LAB16:
LAB12:    xsi_set_current_line(55, ng0);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(32, ng0);
    t17 = (t0 + 2312U);
    t18 = *((char **)t17);
    t19 = (3 - 3);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t4 = *((unsigned char *)t17);
    t23 = (t0 + 4200);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = t4;
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t20 = (3 - 2);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t29 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 2;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t11 = (0 - 2);
    t30 = (t11 * -1);
    t30 = (t30 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t30;
    t5 = xsi_base_array_concat(t5, t28, t7, (char)97, t1, t29, (char)99, t3, (char)101);
    t30 = (3U + 1U);
    t4 = (4U != t30);
    if (t4 == 1)
        goto LAB18;

LAB19:    t9 = (t0 + 4136);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB7;

LAB9:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t20 = (3 - 2);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t29 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 2;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t11 = (0 - 2);
    t30 = (t11 * -1);
    t30 = (t30 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t30;
    t5 = xsi_base_array_concat(t5, t28, t7, (char)97, t1, t29, (char)99, t3, (char)101);
    t30 = (3U + 1U);
    t4 = (4U != t30);
    if (t4 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 4136);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB7;

LAB10:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB7;

LAB11:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t11 = (3 - 3);
    t20 = (t11 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4200);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t20 = (3 - 2);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t29 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 2;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t11 = (0 - 2);
    t30 = (t11 * -1);
    t30 = (t30 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t30;
    t5 = xsi_base_array_concat(t5, t28, t6, (char)97, t1, t29, (char)99, (unsigned char)2, (char)101);
    t30 = (3U + 1U);
    t3 = (4U != t30);
    if (t3 == 1)
        goto LAB28;

LAB29:    t8 = (t0 + 4136);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t8);

LAB26:    goto LAB7;

LAB17:;
LAB18:    xsi_size_not_matching(4U, t30, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(4U, t30, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 4136);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 4136);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_size_not_matching(4U, t30, 0);
    goto LAB29;

}

static void work_a_4055339949_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4056);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4055339949_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4055339949_3212880686_p_0,(void *)work_a_4055339949_3212880686_p_1};
	xsi_register_didat("work_a_4055339949_3212880686", "isim/tb_uni_shift1_isim_beh.exe.sim/work/a_4055339949_3212880686.didat");
	xsi_register_executes(pe);
}
