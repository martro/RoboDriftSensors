#include "leds.h"

void setSensorLeds(char number)
{
	switch(number)
	{
	case 1:
		SENSOR_1_PORT |= (1<<SENSOR_1);
		break;
	case 2:
		SENSOR_2_PORT |= (1<<SENSOR_2);
		break;
	case 3:
		SENSOR_3_PORT |= (1<<SENSOR_3);
		break;
	case 4:
		SENSOR_4_PORT |= (1<<SENSOR_4);
		break;
	case 5:
		SENSOR_5_PORT |= (1<<SENSOR_5);
		break;
	default:
		break;
	}


}

void clearSensorLeds(char number)
{
	switch(number)
	{
	case 1:
		SENSOR_1_PORT &= ~(1<<SENSOR_1);
		break;
	case 2:
		SENSOR_2_PORT &= ~(1<<SENSOR_2);
		break;
	case 3:
		SENSOR_3_PORT &= ~(1<<SENSOR_3);
		break;
	case 4:
		SENSOR_4_PORT &= ~(1<<SENSOR_4);
		break;
	case 5:
		SENSOR_5_PORT &= ~(1<<SENSOR_5);
		break;
	default:
		break;
	}


}

void setCountdownLeds(char number)
{
	YEL_1_PORT &= ~(1<<YEL_1);
	YEL_2_PORT &= ~(1<<YEL_2);
	YEL_3_PORT &= ~(1<<YEL_3);
	YEL_4_PORT &= ~(1<<YEL_4);
	YEL_5_PORT &= ~(1<<YEL_5);

	switch(number)
	{
	case 1:
		YEL_1_PORT |= (1<<YEL_1);
		break;
	case 2:
		YEL_2_PORT |= (1<<YEL_2);
		break;
	case 3:
		YEL_3_PORT |= (1<<YEL_3);
		break;
	case 4:
		YEL_4_PORT |= (1<<YEL_4);
		break;
	case 5:
		YEL_5_PORT |= (1<<YEL_5);
		break;
	default:
		break;
	}
}


void setRedLed()
{
	RED_PORT |= (1<<RED);
}
void clearRedLed()
{
	RED_PORT &= ~(1<<RED);
}

void setStartLed()
{
	START_PORT |= (1<<START);
}
void clearStartLed()
{
	START_PORT &= ~(1<<START);
}

void setFalstartLed()
{
	FALSTART_PORT |= (1<<FALSTART);
}
void clearFalstartLed()
{
	FALSTART_PORT &= ~(1<<FALSTART);
}
