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

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

/* digital pins for pinmap list */
const PinName digital_pins[] = {
    PORTC_13,   //D0
    PORTC_14,   //D1
    PORTC_15,   //D2
    PORTD_0,    //D3
    PORTD_1,    //D4
    PORTC_0,    //D5
    PORTC_1,    //D6
    PORTC_2,    //D7
    PORTC_3,    //D8
    PORTA_0,    //D9
    PORTA_1,    //D10
    PORTA_2,    //D11
    PORTA_3,    //D12
    PORTA_4,    //D13
    PORTA_5,    //D14
    PORTA_6,    //D15
    PORTA_7,    //D16
    PORTC_4,    //D17
    PORTC_5,    //D18
    PORTB_0,    //D19
    PORTB_1,    //D20
    PORTB_2,    //D21
    PORTB_10,   //D22
    PORTB_11,   //D23
    PORTB_12,   //D24
    PORTB_13,   //D25
    PORTB_14,   //D26
    PORTB_15,   //D27
    PORTC_6,    //D28
    PORTC_7,    //D29
    PORTC_8,    //D30
    PORTC_9,    //D31
    PORTA_8,    //D32
    PORTA_9,    //D33
    PORTA_10,   //D34
    PORTA_11,   //D35
    PORTA_12,   //D36
    PORTA_13,   //D37
    PORTA_14,   //D38
    PORTA_15,   //D39
    PORTC_10,   //D40
    PORTC_11,   //D41
    PORTC_12,   //D42
    PORTD_2,    //D43
    PORTB_3,    //D44
    PORTB_4,    //D45
    PORTB_5,    //D46
    PORTB_6,    //D47
    PORTB_7,    //D48
    PORTB_8,    //D49
    PORTB_9,    //D50
};

/* analog pins for pinmap list */
const uint32_t analog_pins[] = {
    PC0, //A5
    PC1, //A6
    PC2, //A7
    PC3, //A8
    PA0, //A9
    PA1, //A10
    PA2, //A11
    PA3, //A12
    PA4, //A13
    PA5, //A14
    PA6, //A15
    PA7, //A16
    PC4, //A17
    PC5, //A18
    PB0, //A19
    PB1, //A20
};
#ifdef __cplusplus
}
#endif
