/*
    Copyright (c) 2020, GigaDevice Semiconductor Inc.

    Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors
       may be used to endorse or promote products derived from this software without
       specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
OF SUCH DAMAGE.
*/

#ifndef _VARIANT_
#define _VARIANT_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
/* GPIO pins definitions */
#define PC13 0
#define PC14 1
#define PC15 2
#define PD0 3
#define PD1 4
#define PC0 5
#define PC1 6
#define PC2 7
#define PC3 8
#define PA0 9
#define PA1 10
#define PA2 11
#define PA3 12
#define PA4 13
#define PA5 14
#define PA6 15
#define PA7 16
#define PC4 17
#define PC5 18
#define PB0 19
#define PB1 20
#define PB2 21
#define PB10 22
#define PB11 23
#define PB12 24
#define PB13 25
#define PB14 26
#define PB15 27
#define PC6 28
#define PC7 29
#define PC8 30
#define PC9 31
#define PA8 32
#define PA9 33
#define PA10 34
#define PA11 35
#define PA12 36
#define PA13 37
#define PA14 38
#define PA15 39
#define PC10 40
#define PC11 41
#define PC12 42
#define PD2 43
#define PB3 44
#define PB4 45
#define PB5 46
#define PB6 47
#define PB7 48
#define PB8 49
#define PB9 50


/* digital pins and analog pins number definitions */
#define DIGITAL_PINS_NUM        51
#define ANALOG_PINS_NUM         16
#define ANALOG_PINS_START       PC0
#define ANALOG_PINS_LAST        PB1


#define LED_BUILTIN             PA5
#define LED_BLUE                PA5


/* SPI definitions */
#define PIN_SPI_SS              PB12
#define PIN_SPI_MOSI            PB15
#define PIN_SPI_MISO            PB14
#define PIN_SPI_SCK             PB13

/* I2C definitions */
/* I2C0 */
#define HAVE_I2C  // Whilst we could remove this, it can cause issues in libraries like SimpleFOC that depend on Wire.h
#ifndef PIN_WIRE_SDA
#define PIN_WIRE_SDA                PB7
#endif
#ifndef PIN_WIRE_SCL
#define PIN_WIRE_SCL                PB6
#endif

/* TIMER or PWM definitions */
#define TIMER_TONE              TIMER5
#define TIMER_SERVO             TIMER6

#define PWM0                    PD12
#define PWM1                    PC7
#define PWM2                    PB0
#define PWM3                    PE5
#define PWM4                    PA8
#define PWM5                    PB15

/* Serial definitions */
/* "Serial" is by default Serial1 / USART0 */
#ifndef DEFAULT_HWSERIAL_INSTANCE
#define DEFAULT_HWSERIAL_INSTANCE 2
#endif

/* USART0 */
#define HAVE_HWSERIAL2
#define SERIAL1_RX          PA3
#define SERIAL1_TX          PA2

/* ADC definitions */
#define ADC_RESOLUTION          10
#define DAC_RESOLUTION          12

#ifdef __cplusplus
} // extern "C"
#endif

#ifdef __cplusplus
    /* Port which normally prints to the Arduino Serial Monitor */
    #define SERIAL_PORT_MONITOR     Serial
    /* Hardware serial port, physical RX & TX pins. */
    #define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ */
