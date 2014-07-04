#ifndef LEDS_H_
#define LEDS_H_

#include <avr/io.h>

#define START PB5
#define FALSTART PC5
#define RED PD7

#define SENSOR_1 PC4
#define SENSOR_2 PC3
#define SENSOR_3 PC2
#define SENSOR_4 PC1
#define SENSOR_5 PC0

#define YEL_1 PD2
#define YEL_2 PD3
#define YEL_3 PD4
#define YEL_4 PD5
#define YEL_5 PD6

//PORTS:

#define START_PORT PORTB
#define FALSTART_PORT PORTC
#define RED_PORT PORTD

#define SENSOR_1_PORT PORTC
#define SENSOR_2_PORT PORTC
#define SENSOR_3_PORT PORTC
#define SENSOR_4_PORT PORTC
#define SENSOR_5_PORT PORTC

#define YEL_1_PORT PORTD
#define YEL_2_PORT PORTD
#define YEL_3_PORT PORTD
#define YEL_4_PORT PORTD
#define YEL_5_PORT PORTD


void setSensorLeds(char number);
void clearSensorLeds(char number);

void setCountdownLeds(char number);

void setRedLed();
void clearRedLed();

void setStartLed();
void clearStartLed();

void setFalstartLed();
void clearFalstartLed();


#endif /* LEDS_H_ */
