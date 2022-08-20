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
static const char *ng0 = "E:/programs/vhdl examples/Mips_microprocessor_f/Stack.vhd";



static void work_a_3772128646_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    unsigned char t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 4840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB20:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2928U);
    t7 = *((char **)t2);
    t13 = *((int *)t7);
    t14 = (t13 >= 1024);
    if (t14 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t15 = (1024 - 1);
    t3 = (t13 == t15);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 4840);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t15 = (t13 - 0);
    t16 = (t15 * 1);
    t17 = (32U * t16);
    t18 = (0U + t17);
    t1 = (t0 + 4968);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    memcpy(t19, t2, 32U);
    xsi_driver_first_trans_delta(t1, t18, 32U, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t15 = (t13 + 1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t15;

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(35, ng0);
    goto LAB14;

LAB16:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t9 = (t13 == 0);
    if (t9 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 1);
    if (t3 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4840);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB25:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t15 = (t13 - 1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t15 = (t13 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 1023, 1, t13);
    t17 = (32U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t6 = (t0 + 5032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 32U);
    xsi_driver_first_trans_fast_port(t6);

LAB22:    goto LAB11;

LAB21:    xsi_set_current_line(50, ng0);
    goto LAB22;

LAB24:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 4840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

}

static void work_a_3772128646_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4744);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3772128646_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4760);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3772128646_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3772128646_3212880686_p_0,(void *)work_a_3772128646_3212880686_p_1,(void *)work_a_3772128646_3212880686_p_2};
	xsi_register_didat("work_a_3772128646_3212880686", "isim/final_test_isim_beh.exe.sim/work/a_3772128646_3212880686.didat");
	xsi_register_executes(pe);
}
