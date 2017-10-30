/************************************************************************************
 * arch/arm/src/samv7/chip/same70_pinmap.h
 *
 *   Copyright (C) 2015 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_SAMV7_CHIP_SAME70_PINMAP_H
#define __ARCH_ARM_SRC_SAMV7_CHIP_SAME70_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include "chip.h"
#include "sam_gpio.h"

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* GPIO pin definitions *************************************************************/
/* Alternate Pin Functions
 *
 * These are mostly for reference and are not in pin configuration.
 */

#define GPIO_AFE0_AD0        (GPIO_ALTERNATE | GPIO_PORT_PIOD | GPIO_PIN30)
#define GPIO_AFE0_AD1        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN21)
#define GPIO_AFE0_AD2        (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN3)
#define GPIO_AFE0_AD3        (GPIO_ALTERNATE | GPIO_PORT_PIOE | GPIO_PIN5)
#define GPIO_AFE0_AD4        (GPIO_ALTERNATE | GPIO_PORT_PIOE | GPIO_PIN4)
#define GPIO_AFE0_AD5        (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN2)
#define GPIO_AFE0_AD6        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN17)
#define GPIO_AFE0_AD7        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN18)
#define GPIO_AFE0_AD8        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN19)
#define GPIO_AFE0_AD9        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN20)
#define GPIO_AFE0_AD10       (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN0)

#define GPIO_AFE1_AD0        (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN1)
#define GPIO_AFE1_AD1        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN13)
#define GPIO_AFE1_AD2        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN15)
#define GPIO_AFE1_AD3        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN12)
#define GPIO_AFE1_AD4        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN29)
#define GPIO_AFE1_AD5        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN30)
#define GPIO_AFE1_AD6        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN31)
#define GPIO_AFE1_AD7        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN26)
#define GPIO_AFE1_AD8        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN27)
#define GPIO_AFE1_AD9        (GPIO_ALTERNATE | GPIO_PORT_PIOC | GPIO_PIN0)
#define GPIO_AFE1_AD10       (GPIO_ALTERNATE | GPIO_PORT_PIOE | GPIO_PIN3)
#define GPIO_AFE1_AD11       (GPIO_ALTERNATE | GPIO_PORT_PIOE | GPIO_PIN0)

#define GPIO_DAC0            (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN13)
#define GPIO_DAC1            (GPIO_ALTERNATE | GPIO_PORT_PIOD | GPIO_PIN0)

#define GPIO_ERASE           (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN12)

#define GPIO_PIODC0          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN3)
#define GPIO_PIODC1          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN4)
#define GPIO_PIODC2          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN5)
#define GPIO_PIODC3          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN9)
#define GPIO_PIODC4          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN10)
#define GPIO_PIODC5          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN11)
#define GPIO_PIODC6          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN12)
#define GPIO_PIODC7          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN13)
#define GPIO_PIODCCLK        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN22)
#define GPIO_PIODCEN1        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN14)
#define GPIO_PIODCEN2        (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN21)

#define GPIO_RTCOUT0         (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN0)
#define GPIO_RTCOUT1         (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN1)

#define GPIO_SWCLK           (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN7)
#define GPIO_SWDIO           (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN6)
#define GPIO_TCK             (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN7)
#define GPIO_TDI             (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN4)
#define GPIO_TDO             (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN5)
#define GPIO_TMS             (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN6)
#define GPIO_TRACESWO        (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN5)

#define GPIO_WKUP0           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN0)
#define GPIO_WKUP1           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN1)
#define GPIO_WKUP2           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN2)
#define GPIO_WKUP3           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN4)
#define GPIO_WKUP4           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN5)
#define GPIO_WKUP5           (GPIO_ALTERNATE | GPIO_PORT_PIOD | GPIO_PIN28)
#define GPIO_WKUP6           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN9)
#define GPIO_WKUP7           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN11)
#define GPIO_WKUP8           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN14)
#define GPIO_WKUP9           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN19)
#define GPIO_WKUP10          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN20)
#define GPIO_WKUP11          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN30)
#define GPIO_WKUP12          (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN3)
#define GPIO_WKUP13          (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN5)

#define GPIO_XIN             (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN9)
#define GPIO_XIN32           (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN7)
#define GPIO_XOUT            (GPIO_ALTERNATE | GPIO_PORT_PIOB | GPIO_PIN8)
#define GPIO_XOUT32          (GPIO_ALTERNATE | GPIO_PORT_PIOA | GPIO_PIN8)

/* Peripheral Pin Functions.
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2, etc.
 * Drivers, however, will use the pin selection without the numeric suffix.
 * Additional definitions are required in the board.h file.  For example, if we
 * wanted the UART1 TX output PCK0 on PA4, then the following definition
 * should appear in the board.h header file for that board:
 *
 * #define GPIO_UART1_TXD GPIO_UART1_TXD_1
 *
 * The driver will then automatically configure PA6 as the PCK0 pin.
 */

/* WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!!
 * Additional effort is required to select specific GPIO options such as frequency,
 * open-drain/push-pull, and pull-up/down!  Just the basics are defined for most
 * pins in this file.
 */

/* Analog Front End (AFE) */

#define GPIO_AFE0_ADTRG      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN8)
#define GPIO_AFE1_ADTRG      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN9)

/* MCAN */

#define GPIO_MCAN0_RX        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN3)
#define GPIO_MCAN0_TX        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN2)
#define GPIO_MCAN1_RX_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN28)
#define GPIO_MCAN1_RX_2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN12)
#define GPIO_MCAN1_TX_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN12)
#define GPIO_MCAN1_TX_2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN14)

/* Digital-to-Analog Convert (DAC) */

#define GPIO_DAC_DATRG       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN2)

/* Ethernet MAC Controller (EMAC) */

#define GPIO_EMAC0_COL       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN13)
#define GPIO_EMAC0_CRS       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN10)
#define GPIO_EMAC0_MDC       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN8)
#define GPIO_EMAC0_MDIO      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN9)
#define GPIO_EMAC0_RX0       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN5)
#define GPIO_EMAC0_RX1       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN6)
#define GPIO_EMAC0_RX2       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN11)
#define GPIO_EMAC0_RX3       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN12)
#define GPIO_EMAC0_RXCK      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN14)
#define GPIO_EMAC0_RXDV      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN4)
#define GPIO_EMAC0_RXER      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN7)
#define GPIO_EMAC0_TSUCOMP_1 (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN1)
#define GPIO_EMAC0_TSUCOMP_2 (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN12)
#define GPIO_EMAC0_TSUCOMP_3 (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN11)
#define GPIO_EMAC0_TSUCOMP_4 (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN20)
#define GPIO_EMAC0_TX0       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN2)
#define GPIO_EMAC0_TX1       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN3)
#define GPIO_EMAC0_TX2       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN15)
#define GPIO_EMAC0_TX3       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN16)
#define GPIO_EMAC0_TXCK      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN0)
#define GPIO_EMAC0_TXEN      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN1)
#define GPIO_EMAC0_TXER      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN17)

/* Image Sensor Interface (ISI) */

#define GPIO_ISI_D0          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN22)
#define GPIO_ISI_D1          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN21)
#define GPIO_ISI_D2          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN3)
#define GPIO_ISI_D3          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN9)
#define GPIO_ISI_D4          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN5)
#define GPIO_ISI_D5          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN11)
#define GPIO_ISI_D6          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN12)
#define GPIO_ISI_D7          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN27)
#define GPIO_ISI_D8          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN27)
#define GPIO_ISI_D9          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN28)
#define GPIO_ISI_D10         (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN30)
#define GPIO_ISI_D11         (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN31)
#define GPIO_ISI_HSYNC       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN24)
#define GPIO_ISI_PCK         (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN24)
#define GPIO_ISI_VSYNC       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN25)

/* High-Speed Multimedia Card Interface (HSMCI) */

#define GPIO_MCI0_CK         (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN25)
#define GPIO_MCI0_CDA        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN28)
#define GPIO_MCI0_DA0        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN30)
#define GPIO_MCI0_DA1        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN31)
#define GPIO_MCI0_DA2        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN26)
#define GPIO_MCI0_DA3        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN27)

/* Programmable Clock Output */

#define GPIO_PCK0_1          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN6)
#define GPIO_PCK0_2          (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN12)
#define GPIO_PCK0_3          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN13)
#define GPIO_PCK1_1          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN17)
#define GPIO_PCK1_2          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN21)
#define GPIO_PCK2_1          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN18)
#define GPIO_PCK2_2          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN31)
#define GPIO_PCK2_3          (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN3)
#define GPIO_PCK2_4          (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN3)
#define GPIO_PCK2_5          (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN31)

/* Pulse Width Modulation (PWM) */

#define GPIO_PWMC0_EXTRG0    (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN10)
#define GPIO_PWMC0_EXTRG1    (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN22)
#define GPIO_PWMC0_FI0       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN9)
#define GPIO_PWMC0_FI1       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN8)
#define GPIO_PWMC0_FI2       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN9)
#define GPIO_PWMC0_H0_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN0)
#define GPIO_PWMC0_H0_2      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN0)
#define GPIO_PWMC0_H0_3      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN20)
#define GPIO_PWMC0_H0_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN11)
#define GPIO_PWMC0_H0_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN23)
#define GPIO_PWMC0_H0_6      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN11)
#define GPIO_PWMC0_H1_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN2)
#define GPIO_PWMC0_H1_2      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN1)
#define GPIO_PWMC0_H1_3      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN21)
#define GPIO_PWMC0_H1_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN12)
#define GPIO_PWMC0_H1_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN24)
#define GPIO_PWMC0_H2_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN22)
#define GPIO_PWMC0_H2_2      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN13)
#define GPIO_PWMC0_H2_3      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN25)
#define GPIO_PWMC0_H2_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN4)
#define GPIO_PWMC0_H2_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN19)
#define GPIO_PWMC0_H3_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN23)
#define GPIO_PWMC0_H3_2      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN14)
#define GPIO_PWMC0_H3_3      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN7)
#define GPIO_PWMC0_H3_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN13)
#define GPIO_PWMC0_H3_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN21)
#define GPIO_PWMC0_H3_6      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN17)
#define GPIO_PWMC0_L0_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN1)
#define GPIO_PWMC0_L0_2      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN24)
#define GPIO_PWMC0_L0_3      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN19)
#define GPIO_PWMC0_L0_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN5)
#define GPIO_PWMC0_L0_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN0)
#define GPIO_PWMC0_L0_6      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN10)
#define GPIO_PWMC0_L1_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN12)
#define GPIO_PWMC0_L1_2      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN25)
#define GPIO_PWMC0_L1_3      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN20)
#define GPIO_PWMC0_L1_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN1)
#define GPIO_PWMC0_L1_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN18)
#define GPIO_PWMC0_L2_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN30)
#define GPIO_PWMC0_L2_2      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN13)
#define GPIO_PWMC0_L2_3      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN26)
#define GPIO_PWMC0_L2_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN2)
#define GPIO_PWMC0_L2_5      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN20)
#define GPIO_PWMC0_L2_6      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN16)
#define GPIO_PWMC0_L3_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN27)
#define GPIO_PWMC0_L3_2      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN15)
#define GPIO_PWMC0_L3_3      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN22)
#define GPIO_PWMC0_L3_4      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN3)
#define GPIO_PWMC0_L3_5      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN15)

#define GPIO_PWMC1_EXTRG0    (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN30)
#define GPIO_PWMC1_EXTRG1    (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN18)
#define GPIO_PWMC1_FI0       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN21)
#define GPIO_PWMC1_FI1       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN26)
#define GPIO_PWMC1_FI2       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN28)
#define GPIO_PWMC1_H0_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN1)
#define GPIO_PWMC1_H0_2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN12)
#define GPIO_PWMC1_H1_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN3)
#define GPIO_PWMC1_H1_2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN14)
#define GPIO_PWMC1_H2_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN5)
#define GPIO_PWMC1_H2_2      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN31)
#define GPIO_PWMC1_H3_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN8)
#define GPIO_PWMC1_H3_2      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN7)
#define GPIO_PWMC1_L0_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN0)
#define GPIO_PWMC1_L0_2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN11)
#define GPIO_PWMC1_L1_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN2)
#define GPIO_PWMC1_L1_2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN13)
#define GPIO_PWMC1_L2_1      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN4)
#define GPIO_PWMC1_L2_2      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN23)
#define GPIO_PWMC1_L3_1      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN5)
#define GPIO_PWMC1_L3_2      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN6)

/* Quad IO SPI (QSPI) */

#define GPIO_QSPI_CS         (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN11)
#define GPIO_QSPI_IO0        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN13)
#define GPIO_QSPI_IO1        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN12)
#define GPIO_QSPI_IO2        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN17)
#define GPIO_QSPI_IO3        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN31)
#define GPIO_QSPI_SCK        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN14)

/* SDR-SDRAM Controller (SDRAMC) */

#define GPIO_SDRAMC_BA0      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN20)
#define GPIO_SDRAMC_BA1      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN0)
#define GPIO_SDRAMC_CAS      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN17)
#define GPIO_SDRAMC_A10_1    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN13)
#define GPIO_SDRAMC_A10_2    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN13)
#define GPIO_SDRAMC_CK       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN23)
#define GPIO_SDRAMC_CKE      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN14)
#define GPIO_SDRAMC_CS_1     (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN15)
#define GPIO_SDRAMC_CS_2     (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN18)
#define GPIO_SDRAMC_RAS      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN16)
#define GPIO_SDRAMC_WE       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN29)

/* Static Memory Controller (SMC).  Many pins shared with SDRAMC */

#define GPIO_SMC_A0          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN18)
#define GPIO_SMC_A1          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN19)
#define GPIO_SMC_A2          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN20)
#define GPIO_SMC_A3          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN21)
#define GPIO_SMC_A4          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN22)
#define GPIO_SMC_A5          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN23)
#define GPIO_SMC_A6          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN24)
#define GPIO_SMC_A7          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN25)
#define GPIO_SMC_A8          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN26)
#define GPIO_SMC_A9          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN27)
#define GPIO_SMC_A10         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN28)
#define GPIO_SMC_A11         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN29)
#define GPIO_SMC_A12         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN30)
#define GPIO_SMC_A13         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN31)
#define GPIO_SMC_A14         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN18)
#define GPIO_SMC_A15         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN19)
#define GPIO_SMC_A16         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN20)
#define GPIO_SMC_A17         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN0)
#define GPIO_SMC_A18         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN1)
#define GPIO_SMC_A19         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN23)
#define GPIO_SMC_A20         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN24)
#define GPIO_SMC_A21         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN16)
#define GPIO_SMC_A22         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN17)
#define GPIO_SMC_A23         (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN25)
#define GPIO_SMC_D0          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN0)
#define GPIO_SMC_D1          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN1)
#define GPIO_SMC_D2          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN2)
#define GPIO_SMC_D3          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN3)
#define GPIO_SMC_D4          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN4)
#define GPIO_SMC_D5          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN5)
#define GPIO_SMC_D6          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN6)
#define GPIO_SMC_D7          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN7)
#define GPIO_SMC_D8          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOE | GPIO_PIN0)
#define GPIO_SMC_D9          (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOE | GPIO_PIN1)
#define GPIO_SMC_D10         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOE | GPIO_PIN2)
#define GPIO_SMC_D11         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOE | GPIO_PIN3)
#define GPIO_SMC_D12         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOE | GPIO_PIN4)
#define GPIO_SMC_D13         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOE | GPIO_PIN5)
#define GPIO_SMC_D14         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN15)
#define GPIO_SMC_D15         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN16)
#define GPIO_SMC_NANDALE     (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN16)
#define GPIO_SMC_NANDCLE     (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN17)
#define GPIO_SMC_NANDOE      (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN9)
#define GPIO_SMC_NANDWE      (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN10)
#define GPIO_SMC_NBS0        (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN18)
#define GPIO_SMC_NBS1        (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOD | GPIO_PIN15)
#define GPIO_SMC_NCS0        (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN14)
#define GPIO_SMC_NCS1_1      (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN15)
#define GPIO_SMC_NCS1_2      (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOD | GPIO_PIN18)
#define GPIO_SMC_NCS2        (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOA | GPIO_PIN22)
#define GPIO_SMC_NCS3_1      (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN12)
#define GPIO_SMC_NCS3_2      (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOD | GPIO_PIN19)
#define GPIO_SMC_NRD         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN11)
#define GPIO_SMC_NWAIT       (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN13)
#define GPIO_SMC_NWE         (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN8)
#define GPIO_SMC_NWR0        (GPIO_PERIPHA | GPIO_CFG_PULLUP | GPIO_PORT_PIOC | GPIO_PIN8)
#define GPIO_SMC_NWR1        (GPIO_PERIPHC | GPIO_CFG_PULLUP | GPIO_PORT_PIOD | GPIO_PIN15)

/* Serial Peripheral Interface (SPI) */

#define GPIO_SPI0_MISO       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN20)
#define GPIO_SPI0_MOSI       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN21)
#define GPIO_SPI0_SPCK       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN22)

#define GPIO_SPI0_NSS        (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN2)
#define GPIO_SPI0_NPCS0      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN2)
#define GPIO_SPI0_NPCS1_1    (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN31)
#define GPIO_SPI0_NPCS1_2    (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN25)
#define GPIO_SPI0_NPCS2      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN12)
#define GPIO_SPI0_NPCS3      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN27)

#define GPIO_SPI1_MISO       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN26)
#define GPIO_SPI1_MOSI       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN27)
#define GPIO_SPI1_SPCK       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN24)

#define GPIO_SPI1_NSS        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN25)
#define GPIO_SPI1_NPCS0      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN25)
#define GPIO_SPI1_NPCS1_1    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN28)
#define GPIO_SPI1_NPCS1_2    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN0)
#define GPIO_SPI1_NPCS2_1    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN29)
#define GPIO_SPI1_NPCS2_2    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN1)
#define GPIO_SPI1_NPCS3_1    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN30)
#define GPIO_SPI1_NPCS3_2    (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN2)

/* Synchronous Serial Controller (SSC) */

#define GPIO_SSC0_RD         (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN10)
#define GPIO_SSC0_RF         (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN24)
#define GPIO_SSC0_RK         (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN22)
#define GPIO_SSC0_TD_1       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN26)
#define GPIO_SSC0_TD_2       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN10)
#define GPIO_SSC0_TD_3       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN5)
#define GPIO_SSC0_TF         (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN0)
#define GPIO_SSC0_TK         (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN1)

/* Timer/Counters (TC) */

#define GPIO_TC0_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN4)
#define GPIO_TC0_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN0)
#define GPIO_TC0_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN1)
#define GPIO_TC1_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN28)
#define GPIO_TC1_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN15)
#define GPIO_TC1_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN16)
#define GPIO_TC2_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN29)
#define GPIO_TC2_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN26)
#define GPIO_TC2_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN27)
#define GPIO_TC3_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN25)
#define GPIO_TC3_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN23)
#define GPIO_TC3_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN24)
#define GPIO_TC4_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN28)
#define GPIO_TC4_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN26)
#define GPIO_TC4_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN27)
#define GPIO_TC5_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN31)
#define GPIO_TC5_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN29)
#define GPIO_TC5_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN30)
#define GPIO_TC6_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN7)
#define GPIO_TC6_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN5)
#define GPIO_TC6_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN6)
#define GPIO_TC7_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN10)
#define GPIO_TC7_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN8)
#define GPIO_TC7_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN9)
#define GPIO_TC8_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN14)
#define GPIO_TC8_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN11)
#define GPIO_TC8_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOC | GPIO_PIN12)
#define GPIO_TC9_TCLK        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOE | GPIO_PIN2)
#define GPIO_TC9_TIOA        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOE | GPIO_PIN0)
#define GPIO_TC9_TIOB        (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOE | GPIO_PIN1)
#define GPIO_TC10_TCLK       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOE | GPIO_PIN5)
#define GPIO_TC10_TIOA       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOE | GPIO_PIN3)
#define GPIO_TC10_TIOB       (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOE | GPIO_PIN4)
#define GPIO_TC11_TCLK       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN24)
#define GPIO_TC11_TIOA       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN21)
#define GPIO_TC11_TIOB       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN22)

/* Trace Debug Port */

#define GPIO_TRACE_CLK       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN8)
#define GPIO_TRACE_D0        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN4)
#define GPIO_TRACE_D1        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN5)
#define GPIO_TRACE_D2        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN6)
#define GPIO_TRACE_D3        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN7)

/* Two Wire Interface (TWIHS) */

#define GPIO_TWIHS0_CK       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN4)
#define GPIO_TWIHS0_D        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN3)
#define GPIO_TWIHS1_CK       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN5)
#define GPIO_TWIHS1_D        (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN4)
#define GPIO_TWIHS2_CK       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN28)
#define GPIO_TWIHS2_D        (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN27)

/* Universal Asynchronous Receiver Transceiver (UART) */

#define GPIO_UART0_RXD       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN9)
#define GPIO_UART0_TXD       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN10)

#define GPIO_UART1_RXD       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN5)
#define GPIO_UART1_TXD_1     (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN26)
#define GPIO_UART1_TXD_2     (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN4)
#define GPIO_UART1_TXD_3     (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN6)

#define GPIO_UART2_RXD       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN25)
#define GPIO_UART2_TXD       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN26)

#define GPIO_UART3_RXD       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN28)
#define GPIO_UART3_TXD_1     (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN30)
#define GPIO_UART3_TXD_2     (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN31)

#define GPIO_UART4_RXD       (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN18)
#define GPIO_UART4_TXD_1     (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN19)
#define GPIO_UART4_TXD_2     (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN3)

/* Universal Synchronous Asynchronous Receiver Transmitter (USART) */

#define GPIO_USART0_CTS      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN2)
#define GPIO_USART0_DCD      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN0)
#define GPIO_USART0_DSR      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN2)
#define GPIO_USART0_DTR      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN1)
#define GPIO_USART0_RI       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN3)
#define GPIO_USART0_RTS      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN3)
#define GPIO_USART0_RXD      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN0)
#define GPIO_USART0_SCK      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN13)
#define GPIO_USART0_TXD      (GPIO_PERIPHC | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN1)

#define GPIO_USART1_CTS      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN25)
#define GPIO_USART1_DCD      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN26)
#define GPIO_USART1_DSR      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN28)
#define GPIO_USART1_DTR      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN27)
#define GPIO_USART1_LONCOL   (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN3)
#define GPIO_USART1_RI       (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN29)
#define GPIO_USART1_RTS      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN24)
#define GPIO_USART1_RXD      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN21)
#define GPIO_USART1_SCK      (GPIO_PERIPHA | GPIO_CFG_DEFAULT | GPIO_PORT_PIOA | GPIO_PIN23)
#define GPIO_USART1_TXD      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOB | GPIO_PIN4)

#define GPIO_USART2_CTS      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN19)
#define GPIO_USART2_DCD      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN4)
#define GPIO_USART2_DSR      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN6)
#define GPIO_USART2_DTR      (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN5)
#define GPIO_USART2_RI       (GPIO_PERIPHD | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN7)
#define GPIO_USART2_RTS      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN18)
#define GPIO_USART2_RXD      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN15)
#define GPIO_USART2_SCK      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN17)
#define GPIO_USART2_TXD      (GPIO_PERIPHB | GPIO_CFG_DEFAULT | GPIO_PORT_PIOD | GPIO_PIN16)

/************************************************************************************
 * Public Types
 ************************************************************************************/

/************************************************************************************
 * Inline Functions
 ************************************************************************************/

#ifndef __ASSEMBLY__

/************************************************************************************
 * Public Data
 ************************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/************************************************************************************
 * Public Function Prototypes
 ************************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* __ARCH_ARM_SRC_SAMV7_CHIP_SAME70_PINMAP_H */
