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
static const char *ng0 = "E:/programs/vhdl examples/Mips_microprocessor_f/PC.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void work_a_1991350011_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4448);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1991350011_3212880686_p_1(char *t0)
{
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(49, ng0);
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
LAB3:    t1 = (t0 + 4464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t5 = t1;
    memset(t5, (unsigned char)2, 32U);
    t6 = (t0 + 4624);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t7 = t2;
    memset(t7, (unsigned char)2, 32U);
    t8 = (t0 + 4624);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}

static void work_a_1991350011_3212880686_p_2(char *t0)
{
    char t18[16];
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 7224);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB11:    t6 = (t0 + 7227);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB12:    t9 = (t0 + 7230);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB13:    t12 = (t0 + 7233);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB14:    t15 = (t0 + 7236);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB9;

LAB15:
LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(62, ng0);

LAB21:    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;

LAB1:    return;
LAB5:    xsi_set_current_line(63, ng0);
    t19 = (t0 + 2152U);
    t20 = *((char **)t19);
    t19 = (t0 + 7040U);
    t21 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t18, t20, t19, 1);
    t22 = (t0 + 4752);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t21, 32U);
    xsi_driver_first_trans_fast(t22);
    goto LAB4;

LAB6:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 7040U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t27, t3, t2, 1);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t6 = (t0 + 6960U);
    t9 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t18, t4, t27, t7, t6);
    t10 = (t0 + 4752);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t9, 32U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB7:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t28 = (31 - 31);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t2 = (t3 + t30);
    t4 = (t0 + 1512U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t9 = (t27 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 31;
    t10 = (t9 + 4U);
    *((int *)t10) = 26;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t5 = (26 - 31);
    t31 = (t5 * -1);
    t31 = (t31 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t31;
    t10 = (t0 + 6976U);
    t4 = xsi_base_array_concat(t4, t18, t7, (char)97, t2, t27, (char)97, t6, t10, (char)101);
    t31 = (6U + 26U);
    t32 = (32U != t31);
    if (t32 == 1)
        goto LAB17;

LAB18:    t12 = (t0 + 4752);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    memcpy(t19, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB4;

LAB8:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 4752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB16:;
LAB17:    xsi_size_not_matching(32U, t31, 0);
    goto LAB18;

LAB19:    t3 = (t0 + 4480);
    *((int *)t3) = 0;
    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}


extern void work_a_1991350011_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1991350011_3212880686_p_0,(void *)work_a_1991350011_3212880686_p_1,(void *)work_a_1991350011_3212880686_p_2};
	xsi_register_didat("work_a_1991350011_3212880686", "isim/final_test_isim_beh.exe.sim/work/a_1991350011_3212880686.didat");
	xsi_register_executes(pe);
}
