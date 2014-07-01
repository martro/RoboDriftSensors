#include <avr/io.h>
#define F_CPU 8000000UL
#define __DELAY_BACKWARD_COMPATIBLE__
#include <util/delay.h>
#include <avr/interrupt.h>

#define BURST 50
#define GAP 50

volatile uint8_t Proportion;
volatile uint8_t Peak;

ISR(TIMER2_COMP_vect) //generuje na PB4 sygnał 36kHz, stosujek 1:1 (1):(0)
{
    if(Peak<=GAP) //Burst = 30 -> 0.4ms, GAP=20->0.3ms
    {
        PORTB &= ~(1<<PB4);

    }
    else if(Peak>BURST+GAP)
    {
        Peak=0;
    }
    else
    {
        PORTB |= (1<<PB4);


        if(Proportion == 1)
        {
            PORTB &= ~(1<<PB4);
        }
        else if(Proportion >= 2)
        {
            PORTB |= (1<<PB4);
            Proportion = 0;
        }
        Proportion ++;
    }
    Peak++;
}


void CTC2_Init()
{
    TCCR2 |= (1<<WGM21)|(1<<COM20)|(1<<CS20); //CTC, prescaler 1,
    TIMSK |= (1<<OCIE2); //Interrupt enable on comapre match
    TIFR |= (1<<OCF2);

    DDRB |= (1<<PB3); //CTC
    DDRB |= (1<<PB4); //CTC w stosunku 1:1
    DDRB |= (1<<PB0); //reset :P
    PORTB |= (1<<PB0);
}



int main()
{

	DDRC =255;
	PORTC =255;
    /*CTC2_Init();
    sei();

    Proportion = 1;
    Peak = 1;
    OCR2 = 114; //generuje sygnal na PB3
    while(1)
    {
        if(Peak==GAP)
        {
            cli();
            _delay_ms(4); //magic number,
            sei();
        }
    }
*/
}
