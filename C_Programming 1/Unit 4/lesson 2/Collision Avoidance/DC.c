#include "DC.h"
//pointer to function
void (*DC_state)();
//variables of the DC module
unsigned int speed ;


void DC_init()
{
	//init dc
	printf("DC_init\n");

}
void DC_motor(int s)
{
	speed =s ;
	DC_state = STATE(DC_busy) ;
	printf("CA----speed=%d---->DC \n", speed);
}

STATE_define(DC_idle)
{
	DC_state_id = DC_idle ;
	DC_state = STATE(DC_idle) ;

	printf("DC_idle state: speed=%d \n", speed);
}

STATE_define(DC_busy)
{
	DC_state_id = DC_busy ;
	//call DC driver
	DC_state = STATE(DC_idle) ;

	printf("DC_busy state: speed=%d \n", speed);
}
