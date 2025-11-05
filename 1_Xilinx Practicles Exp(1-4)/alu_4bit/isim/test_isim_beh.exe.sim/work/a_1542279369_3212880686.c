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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/VLSI Practical/alu_4bit/alu_4bit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3798478767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_43738421_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1542279369_3212880686_p_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6492U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (1U + 4U);
    t7 = (5U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 4344);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 4216);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t6, 0);
    goto LAB6;

}

static void work_a_1542279369_3212880686_p_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6508U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (1U + 4U);
    t7 = (5U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 4408);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 4232);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t6, 0);
    goto LAB6;

}

static void work_a_1542279369_3212880686_p_2(char *t0)
{
    char t23[16];
    char t39[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t40;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6606);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB11:    t5 = (t0 + 6609);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB12:    t8 = (t0 + 6612);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB13:    t11 = (t0 + 6615);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB14:    t14 = (t0 + 6618);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB15:    t17 = (t0 + 6621);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB16:    t20 = (t0 + 6624);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB17:
LAB10:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t30 = (4 - 3);
    t31 = (t30 * 1U);
    t38 = (0 + t31);
    t1 = (t2 + t38);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t39 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 3;
    t8 = (t6 + 4U);
    *((int *)t8) = 0;
    t8 = (t6 + 8U);
    *((int *)t8) = -1;
    t4 = (0 - 3);
    t40 = (t4 * -1);
    t40 = (t40 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t40;
    t3 = xsi_base_array_concat(t3, t23, t5, (char)99, (unsigned char)2, (char)97, t1, t39, (char)101);
    t40 = (1U + 4U);
    t32 = (5U != t40);
    if (t32 == 1)
        goto LAB33;

LAB34:    t8 = (t0 + 4472);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t3, 5U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t1 = (t0 + 4248);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(48, ng0);
    t24 = (t0 + 1672U);
    t25 = *((char **)t24);
    t24 = (t0 + 6556U);
    t26 = (t0 + 1832U);
    t27 = *((char **)t26);
    t26 = (t0 + 6556U);
    t28 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t23, t25, t24, t27, t26);
    t29 = (t23 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB19;

LAB20:    t33 = (t0 + 4472);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 5U);
    xsi_driver_first_trans_fast(t33);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t30 = (t4 * -1);
    t31 = (1U * t30);
    t38 = (0 + t31);
    t1 = (t2 + t38);
    t32 = *((unsigned char *)t1);
    t3 = (t0 + 4536);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t32;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6556U);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t23, t2, t1, t5, t3);
    t8 = (t23 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 4472);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t30 = (t4 * -1);
    t31 = (1U * t30);
    t38 = (0 + t31);
    t1 = (t2 + t38);
    t32 = *((unsigned char *)t1);
    t3 = (t0 + 4536);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t32;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6556U);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t23, t2, t1, t5, t3);
    t8 = (t23 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 4472);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6556U);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_3798478767_503743352(IEEE_P_2592010699, t23, t2, t1, t5, t3);
    t8 = (t23 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 4472);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6556U);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t23, t2, t1, t5, t3);
    t8 = (t23 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB27;

LAB28:    t9 = (t0 + 4472);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6556U);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_43738421_503743352(IEEE_P_2592010699, t23, t2, t1, t5, t3);
    t8 = (t23 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 4472);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6556U);
    t3 = (t0 + 1832U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t23, t2, t1, t5, t3);
    t8 = (t23 + 12U);
    t30 = *((unsigned int *)t8);
    t31 = (1U * t30);
    t32 = (5U != t31);
    if (t32 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 4472);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB18:;
LAB19:    xsi_size_not_matching(5U, t31, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(5U, t31, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(5U, t31, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(5U, t31, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(5U, t31, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(5U, t31, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(5U, t31, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(5U, t40, 0);
    goto LAB34;

}

static void work_a_1542279369_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (4 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 1U, 4U, 0LL);

LAB2:    t11 = (t0 + 4264);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1542279369_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1542279369_3212880686_p_0,(void *)work_a_1542279369_3212880686_p_1,(void *)work_a_1542279369_3212880686_p_2,(void *)work_a_1542279369_3212880686_p_3};
	xsi_register_didat("work_a_1542279369_3212880686", "isim/test_isim_beh.exe.sim/work/a_1542279369_3212880686.didat");
	xsi_register_executes(pe);
}
