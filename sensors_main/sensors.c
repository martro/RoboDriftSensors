#include "sensors.h"
#include "leds.h"

int collectData()
{
	char data;
	data=(PINB)&0b11111;
	setSensorLeds(data);
	return (data);

}
