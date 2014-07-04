#ifndef SENSORS_H_
#define SENSORS_H_

#include <avr/io.h>

#define SENSOR1 PB0
#define SENSOR2 PB1
#define SENSOR3 PB2
#define SENSOR4 PB3
#define SENSOR5 PB4

#define SENSOR1_PORT PORTB
#define SENSOR2_PORT PORTB
#define SENSOR3_PORT PORTB
#define SENSOR4_PORT PORTB
#define SENSOR5_PORT PORTB

int collectData();


#endif /* SENSORS_H_ */
