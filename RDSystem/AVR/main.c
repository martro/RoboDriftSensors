/*
 */
#define F_CPU 1000000UL
#define MYUBRR 12

#include <avr/io.h>
#include <util/delay.h>
#include "usart.h"
#include <avr/interrupt.h>
#include "sensors.h"

int main(void)
{
    DDRB |= 0b11111;
    PORTB = 0;

    DDRC |= 0b11111;
    PORTC = 0b11111;

    USART_Init(MYUBRR);

    sei();


    while(1)
    {
    	diody(collectData());
    }

    return 0;
}
