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

    DDRC |= 0b100000;
    PORTC = 0b11111;
    //PORTC |=0b100000;//enable usart mode diode

    USART_Init(MYUBRR);

    sei();

    int olddata=0;
    int newdata=0;


    while(1)
    {
    	diody();

    	olddata=newdata;
    	newdata=collectData();
    	if (olddata!=newdata)
    		USART_Transmit(newdata);
    }

    return 0;
}
