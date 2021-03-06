#include "constants.h"

#ifndef DEVICE_CONFIGURATION
#define DEVICE_CONFIGURATION

// CPU settings
#ifndef TARGET_CPU
    #define TARGET_CPU m2560
#endif

#ifndef F_CPU
    #define F_CPU 16000000
#endif

#ifndef FREQUENCY_CORRECTION
    #define FREQUENCY_CORRECTION 0
#endif

// Sampling & timer setup
#define CONFIG_AFSK_DAC_SAMPLERATE 9600

// Port settings
#if TARGET_CPU == m328p
    #define DAC_PORT PORTD
    #define DAC_DDR  DDRD
    #define DAC_PINA _BV(4)
    #define DAC_PINB _BV(5)
    #define DAC_PINC _BV(6)
    #define DAC_PIND _BV(7)
    #define DAC_PINS (_BV(4)| _BV(5) | _BV(6) | _BV(7))
    #define LED_PORT PORTB
    #define LED_DDR  DDRB
    #define LED_RX_PIN 2
    #define LED_TX_PIN 1
    #define ADC_PORT PORTC
    #define ADC_DDR  DDRC
    #define ADC_PIN 0
    #define PTT_PORT PORTD
    #define PTT_DDR DDRD
    #define PPT_PIN 3
#endif
#if TARGET_CPU == m2560
    #define DAC_PORT PORTA
    #define DAC_DDR  DDRA
    #define DAC_PINA _BV(0)
    #define DAC_PINB _BV(2)
    #define DAC_PINC _BV(4)
    #define DAC_PIND _BV(6)
    #define DAC_PINS (_BV(0)| _BV(2) | _BV(4) | _BV(6))
    #define LED_PORT PORTH
    #define LED_DDR  DDRH
    #define LED_RX_PIN 3
    #define LED_TX_PIN 5
    #define ADC_PORT PORTF
    #define ADC_DDR  DDRF
    #define ADC_PIN 1
    #define PTT_PORT PORTA
    #define PTT_DDR  DDRA
    #define PPT_PIN 3

#endif


#endif
