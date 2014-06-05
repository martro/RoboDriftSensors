/*
 */
#define F_CPU 1000000UL
#define MYUBRR 12

#include <avr/io.h>
#include <util/delay.h>
#include "usart.h"
#include <avr/interrupt.h>

int main(void)
{
    DDRB |= 0xff;
    PORTB = 0;

    USART_Init(MYUBRR);

    sei();


    while(1)
    {

    }

    return 0;
}
