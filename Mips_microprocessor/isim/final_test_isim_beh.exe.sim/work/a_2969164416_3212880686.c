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
static const char *ng0 = "E:/programs/vhdl examples/Mips_microprocessor_f/RF_WA_mux.vhd";



static void work_a_2969164416_3212880686_p_0(char *t0)
{
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4888);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 4890);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 4892);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4899);
    t4 = (t0 + 3072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 5U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(42, ng0);

LAB15:    t2 = (t0 + 2992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(43, ng0);
    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t12 = (t0 + 3072);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 5U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB6:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 3072);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 5U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4894);
    t4 = (t0 + 3072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 5U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 2992);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}


extern void work_a_2969164416_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2969164416_3212880686_p_0};
	xsi_register_didat("work_a_2969164416_3212880686", "isim/final_test_isim_beh.exe.sim/work/a_2969164416_3212880686.didat");
	xsi_register_executes(pe);
}
