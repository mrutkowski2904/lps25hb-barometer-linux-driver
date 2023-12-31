#ifndef _LPS25HB_REGISTERS_H
#define _LPS25HB_REGISTERS_H

/* internal memory map of LPS25HB */

/* read should return LPS25HB_REG_WHO_AM_I_EXPECTED_VAL */
#define LPS25HB_REG_WHO_AM_I_ADDR 0x0F
#define LPS25HB_REG_CTRL1_ADDR 0x20
#define LPS25HB_REG_PRESS_OUT_XL_ADDR 0x28
#define LPS25HB_REG_PRESS_OUT_XL_ADDR 0x28
#define LPS25HB_REG_PRESS_OUT_L_ADDR 0x29
#define LPS25HB_REG_PRESS_OUT_H_ADDR 0x2A

#define LPS25HB_REG_WHO_AM_I_EXPECTED_VAL 0xBD

/* bit postitions of CTRL1 register */
#define LPS25HB_REG_CTRL1_PD_POS 7
#define LPS25HB_REG_CTRL1_ODR2_POS 6
#define LPS25HB_REG_CTRL1_ODR1_POS 5
#define LPS25HB_REG_CTRL1_ODR0_POS 4
#define LPS25HB_REG_CTRL1_DIFF_EN_POS 3
#define LPS25HB_REG_CTRL1_BDU_POS 2
#define LPS25HB_REG_CTRL1_RESET_AZ_POS 1
#define LPS25HB_REG_CTRL1_SIM_POS 0

/*
 * initial configuration value for CTRL1 register
 * power up and 7Hz data update interval
 */
#define LPS25HB_REG_CTRL1_VALUE ((1 << LPS25HB_REG_CTRL1_PD_POS) | (1 << LPS25HB_REG_CTRL1_ODR1_POS))

#endif