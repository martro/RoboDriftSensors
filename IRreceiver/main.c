#define F_CPU 8000000UL
#define __DELAY_BACKWARD_COMPATIBLE__
#include <util/delay.h>
#include <avr/interrupt.h>

#define YES 1
#define NO 0

#define SYGNAL PD1
#define TSOP PD2

#define LED1IN  PB2
#define LED2IN  PB3
#define LED1OUT PB4
#define LED2OUT PB5

#define LEDSTATUS PD0
#define LED1 PD3
#define LED2 PD4
#define LED3 PD5
#define LED4 PD6
#define LED5 PD7

#define IN1 PC0
#define IN2 PC1
#define IN3 PC2
#define IN4 PC3
#define IN5 PC4

volatile uint8_t LogicalChange;
void set_Diodes_OFF()
{
    PORTD &= ~(1<<LED1)&~(1<<LED2)&~(1<<LED3)&~(1<<LED4)&~(1<<LED5);
}
void set_Diode()
{
    set_Diodes_OFF();
    PORTD |= 1<<LED1;
    _delay_ms(200);
    set_Diodes_OFF();
    PORTD |= 1<<LED2;
    _delay_ms(200);
    set_Diodes_OFF();
    PORTD |= 1<<LED3;
    _delay_ms(200);
    set_Diodes_OFF();
    PORTD |= 1<<LED4;
    _delay_ms(200);
    set_Diodes_OFF();
    PORTD |= 1<<LED5;
    _delay_ms(200);
    set_Diodes_OFF();

    PORTD |= 1<<LED1;
}

void init_PORT()
{
    DDRD = 255;
    DDRD &= ~(1<<TSOP);

    DDRB |= (1<<LED1IN)|(1<<LED2IN)|(1<<LED1OUT)|(1<<LED2OUT); //wyjscja na ledy przy RJ45
    DDRD |= (1<<LED1)|(1<<LED2)|(1<<LED3)|(1<<LED4)|(1<<LED5); //wujscia na ledy

    set_Diode();

    DDRC |= (1<<IN1); //wyjscie na czujke aktulaną

}

void init_TIMER0()
{
    TCCR0 |= (1<<CS02)|(0<<CS01)|(0<<CS00); //preskaler 256 -> rozdzielczość 8ms
    TIMSK |= (1<<TOIE0); //ovf int enable
}

void init_INTERRUPT0()
{
    MCUCR |= (0<<ISC01)|(1<<ISC00); // any logical change genereates interrupt
    GICR |= (1<<INT0);
}

ISR(INT0_vect)
{
    LogicalChange++;
}

ISR(TIMER0_OVF_vect)
{
    if(LogicalChange == 0)
    {
        PORTC |= (1<<IN1);
        PORTD &= ~(1<<LEDSTATUS);
    }
    else
    {
         PORTC &= ~(1<<IN1);
         PORTD |= (1<<LEDSTATUS);
    }
    LogicalChange = 0;
}

int main(void)
{
    init_PORT();
    init_TIMER0();
    init_INTERRUPT0();

    LogicalChange = 1;
    sei();

    while(1)
    {

        PORTB = (1<<LED1IN);
        _delay_ms(200);
        PORTB = (1<<LED1OUT);
        _delay_ms(200);
        PORTB = (1<<LED2IN);
        _delay_ms(200);
        PORTB = (1<<LED2OUT);
        _delay_ms(200);

    }
}
