#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"


//generalize
#define STATE_define(_statefunc_) void ST_##_statefunc_()
#define STATE(_statefunc_) ST_##_statefunc_

//states connections

void US_Set_distance (int d);
void DC_motor(int s);









#endif //STATE_H_
