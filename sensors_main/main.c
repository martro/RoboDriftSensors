/*
 */
#define F_CPU 1000000UL
#define MYUBRR 12

#include <avr/io.h>
#include <util/delay.h>
#include "usart.h"
#include <avr/interrupt.h>
#include "sensors.h"
#include "leds.h"

int main(void)
{
	DDRB = 0xff;
	DDRC = 0xff;
	DDRD = 0b11111100;





	setFalstartLed();
    /*DDRB |= 0b11111;
    PORTB = 0;

    DDRC |= 0b100000;
    PORTC = 0b11111;*/
    //PORTC |=0b100000;//enable usart mode diode

    USART_Init(MYUBRR);

    sei();


    while(1)
    {
    	//diody();
        //USART_Transmit(collectData());
    }



    return 0;
}
