/*
 * DC.h
 *
 *  Created on: Oct 3, 2023
 *      Author: Muhammed Mukhtar
 */

#ifndef DC_H_
#define DC_H_


#include "state.h"

enum {
	DC_idle,
	DC_busy
}DC_state_id;

//prototypes
void DC_init();
STATE_define(DC_idle) ;
STATE_define(DC_busy) ;
//global pointer to function
extern void (*DC_state)();

#endif /* DC_H_ */
