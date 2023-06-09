/*
 * Copyright (C) 2020 Antonio Galea
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_yarm
 * @brief       Support for the Acmesystems YARM board.
 * @{
 *
 * @file
 * @brief       Board specific definitions for the Acmesystems
 *              YARM board.
 *
 * @author      Antonio Galea <antonio.galea@gmail.com>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   ATA8510 will be driven via SPI at 200KHZ
 */
#ifndef SPI_CLK_200KHZ
#define SPI_CLK_200KHZ 200000U
#endif
/**
 * @brief   Microchip ATA8510 configuration
 */
#define ATA8510_PARAMS   { .spi = SPI_DEV(0),               \
                           .spi_clk = SPI_CLK_200KHZ,       \
                           .cs_pin = (GPIO_PIN(PA, 5)),     \
                           .int_pin = (GPIO_PIN(PA, 14)),   \
                           .sleep_pin = (GPIO_PIN(PA, 27)), \
                           .reset_pin = (GPIO_PIN(PA, 15)) }

/**
 * @brief   Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
