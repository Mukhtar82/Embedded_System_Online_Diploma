#include "CA.h"

//pointer to function
void (*CA_state)();
//variables of the CA module
unsigned int CA_speed = 0 ;
unsigned int CA_distance = 0 ;
unsigned int CA_threshold = 50 ;

//to receive the distance from US sensor
void US_Set_distance (int d)
{
	CA_distance = d;
		(CA_distance<= CA_threshold)? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving)) ;
		printf("\nUS----distance=%d---->CA",CA_distance);
}

STATE_define(CA_waiting)
{
	CA_state_id = CA_waiting ;
		printf("\nWaiting state : distance = %d  speed = %d\n", CA_distance , CA_speed);
		//state action
		CA_speed = 0;
		DC_motor(CA_speed);
}

STATE_define(CA_driving)
{
	//state name
	CA_state_id = CA_driving ;
	printf("\nDriving state : distance = %d  speed = %d\n", CA_distance , CA_speed);

	//state action
	CA_speed = 30;
	DC_motor(CA_speed);
}
