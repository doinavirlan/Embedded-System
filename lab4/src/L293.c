#include <avr/io.h>

#include "L293.h"


void L293_init() {
	DDRC = 0xFF; //PORTC as Output

}


void L293_clockwise()
{
	PORTC = 0x02; //00000010  Run motor in clockwise
}

void L293_antiClockwise()
{
	 //Rotates Motor in Antilockwise
	 PORTC = 0x01; //00000001
}

void L293_stop()
{
	PORTC = 0x00; //00000000
}



