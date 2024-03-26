#ifndef _PINNAMESVAR_H_
#define _PINNAMESVAR_H_

#ifdef __cplusplus
extern "C"
{
#endif

// aliases
#define A_INHA PA8
#define A_INHB PA9
#define A_INHC PA10
#define A_EN_DRV PA11
#define A_NFAULT PA12

#define A_SPI1_CS PB12
#define A_SPI1_SCK PB13
#define A_SPI1_MISO PB14
#define A_SPI1_MOSI PB15

#define A_SPI2_CS PA15
#define A_SPI2_SCK PC10
#define A_SPI2_MISO PC11
#define A_SPI2_MOSI PC12

#define A_CAN0_RX PB8
#define A_CAN0_TX PB9

#define A_CSOC PC0
#define A_CSOB PC1

#define A_LED1 PA5

#define P_SPI1_MOSI PORTB_15
#define P_SPI1_MISO PORTB_14
#define P_SPI1_SCK PORTB_13
#define P_SPI1_CS PORTB_12

#define P_SPI2_CS PORTA_15
#define P_SPI2_SCK PORTC_10
#define P_SPI2_MISO PORTC_11
#define P_SPI2_MOSI PORTC_12

#ifdef __cplusplus
}
#endif

/**
 * Some sensible defaults for Cybergear clocks and pins.
 * Call it from setup() in main.cpp/ino
 */
void initVariant()
{
    gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, 5); // LED pin PA5 os an output
    rcu_periph_clock_enable(RCU_AF);                          // need AF clock for remap pins e.g SPI2
    gpio_pin_remap_config(GPIO_SWJ_SWDPENABLE_REMAP, ENABLE); // we need PA15 for SPI2 so must release it JTAG duties (otherwise it is pulled high)
}

#endif /* _PINNAMESVAR_H_ */