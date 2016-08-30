/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2014, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#include "PeripheralPins.h"

// =====
// Note: Commented lines are alternative possibilities which are not used per default.
//       If you change them, you will have also to modify the corresponding xxx_api.c file
//       for pwmout, analogin, analogout, ...
// =====

//*** ADC ***

const PinMap PinMap_ADC[] = {
    {PA_0, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0
    {PA_1, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1
    {PA_2, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2
    {PA_3, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3
    {PA_4, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC_IN4
    {PA_5, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC_IN5
    {PA_6, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC_IN6
    {PA_7, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC_IN7
    {PB_0, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC_IN8
    {PB_1, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC_IN9
    {PC_0, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC_IN10
    {PC_1, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC_IN11
    {PC_2, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC_IN12
    {PC_3, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC_IN13
    {PC_4, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC_IN14
    {PC_5, ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC_IN15
    {NC,   NC,    0}
};

//*** DAC ***

const PinMap PinMap_DAC[] = {
    {PA_4, DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC_OUT1
    {PA_5, DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // DAC_OUT2 (Warning: LED1 is also on this pin)
    {NC,   NC,    0}
};

//*** I2C ***

const PinMap PinMap_I2C_SDA[] = {
    {PB_7,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_9,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_11, I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C2)},
    {PB_14, I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C2)},
    {NC,    NC,    0}
};

const PinMap PinMap_I2C_SCL[] = {
    {PB_6,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_8,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_10, I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C2)},
    {PB_13, I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C2)},
    {NC,    NC,    0}
};

//*** PWM ***

// TIM2 cannot be used because already used by the us_ticker
const PinMap PinMap_PWM[] = {
//  {PA_1,  PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  2, 0)},  // TIM2_CH2
    {PA_1,  PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM15, 1, 1)}, // TIM15_CH1N
    {PA_2,  PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM15, 1, 0)}, // TIM15_CH1
//  {PA_2,  PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  3, 0)},  // TIM2_CH3
    {PA_3,  PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM15, 2, 0)}, // TIM15_CH2
//  {PA_3,  PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  4, 0)},  // TIM2_CH4
    {PA_4,  PWM_14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM14, 1, 0)}, // TIM14_CH1
//  {PA_6,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3,  1, 0)},  // TIM3_CH1
    {PA_6,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM16, 1, 0)}, // TIM16_CH1
//  {PA_7,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3,  2, 0)},  // TIM3_CH2
//  {PA_7,  PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  1, 1)},  // TIM1_CH1N
//  {PA_7,  PWM_14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM14, 1, 0)}, // TIM14_CH1
    {PA_7,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM17, 1, 0)}, // TIM17_CH1
    {PA_8,  PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  1, 0)},  // TIM1_CH1
    {PA_9,  PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  2, 0)},  // TIM1_CH2
    {PA_10, PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  3, 0)},  // TIM1_CH3
    {PA_11, PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  4, 0)},  // TIM1_CH4

    {PB_0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3,  3, 0)},  // TIM3_CH3
//  {PB_0,  PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  2, 1)},  // TIM1_CH2N
    {PB_1,  PWM_14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM14, 1, 0)}, // TIM14_CH1
//  {PB_1,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3,  4, 0)},  // TIM3_CH4
//  {PB_1,  PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  3, 1)},  // TIM1_CH3N
//  {PB_3,  PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  2, 0)},  // TIM2_CH2
    {PB_4,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3,  1, 0)},  // TIM3_CH1
    {PB_5,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3,  1, 0)},  // TIM3_CH2
    {PB_6,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM16, 1, 1)}, // TIM16_CH1N
    {PB_7,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM17, 1, 1)}, // TIM17_CH1N
    {PB_8,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM16, 1, 0)}, // TIM16_CH1
    {PB_9,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM17, 1, 0)}, // TIM17_CH1
//  {PB_10, PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  3, 0)},  // TIM2_CH3
//  {PB_11, PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  4, 0)},  // TIM2_CH4
    {PB_13, PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  1, 1)},  // TIM1_CH1N
    {PB_14, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM15, 1, 0)}, // TIM15_CH1
//  {PB_14, PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  2, 1)},  // TIM1_CH2N
    {PB_15, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM15, 2, 0)}, // TIM15_CH2
//  {PB_15, PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1,  3, 1)},  // TIM1_CH3N
//  {PB_15, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM15, 1, 1)}, // TIM15_CH1N

    {PC_6,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM3, 1, 0)},  // TIM3_CH1
    {PC_7,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM3, 2, 0)},  // TIM3_CH2
    {PC_8,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM3, 3, 0)},  // TIM3_CH3
    {PC_9,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM3, 4, 0)},  // TIM3_CH4

    {NC,    NC,    0}
};

//*** SERIAL ***

const PinMap PinMap_UART_TX[] = {
    {PA_0,  UART_4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART4)},
    {PA_2,  UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
    {PA_9,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
    {PA_14, UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)}, // Warning: SWCLK is also on this pin
    {PB_6,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {PB_10, UART_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART3)},
    {PC_4,  UART_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART3)},
    {PC_10, UART_4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART4)},
//  {PC_10, UART_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART3)},
    {NC,    NC,     0}
};

const PinMap PinMap_UART_RX[] = {
    {PA_1,  UART_4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART4)},
    {PA_3,  UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
    {PA_10, UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
    {PA_15, UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
    {PB_7,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {PB_11, UART_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART3)},
    {PC_5,  UART_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART3)},
    {PC_11, UART_4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART4)},
//  {PC_11, UART_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART3)},
    {NC,    NC,     0}
};

//*** SPI ***

const PinMap PinMap_SPI_MOSI[] = {
    {PA_7,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_5,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_15, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {PC_3,  SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_MISO[] = {
    {PA_6,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_4,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_14, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {PC_2,  SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SCLK[] = {
    {PA_5,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_3,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_10, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
    {PB_13, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SSEL[] = {
    {PA_4,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PA_15, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB_9,  SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
    {PB_12, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_CAN_RD[] = {
    {PB_8 , CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
    {PA_11, CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
    {NC,    NC,    0}
};

const PinMap PinMap_CAN_TD[] = {
    {PB_9 ,  CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
    {PA_12,  CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
    {NC,    NC,    0}
};
