#include "US.h"

 void (*US_state)();
//variable
int US_distance = 0 ;


int random_generator(int l , int r , int count)
{
	//to generate numbers in range of l and r
	int i ;
	for(i=0 ; i< count ; i++)
	{
		int rand_num = (rand() % (r - l + 1)) + 1 ;
		return rand_num ;
	}
}

void US_init (){
	//init us_init
	//call the us drivers or functions
	printf("DC_init\n");

}

STATE_define(US_busy)
{
	//state name
	US_state_id = US_busy ;
	//state action
	//read from the US
	US_distance = random_generator(45 , 55 , 1);
	//print
	printf("US-----distance=%d---->CA", US_distance);


	US_Set_distance(US_distance); //CA.c file
	US_state = STATE(US_busy) ;

}
