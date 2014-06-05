#ifndef USART_H_
#define USART_H_

/*str 159 datasheet AtMega*/
#include <avr/io.h>
#include <avr/interrupt.h>


/*Funkcje z datasheet*/
void USART_Init(unsigned int ubrr);
void USART_Transmit(unsigned char data);
unsigned char USART_Receive(void);
ISR ( USART_RXC_vect );
void diody(char bajt);



#endif /* USART_H_ */
