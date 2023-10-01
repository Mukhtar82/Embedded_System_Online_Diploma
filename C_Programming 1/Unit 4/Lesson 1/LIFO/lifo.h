

#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include "stdlib.h"


typedef unsigned int uint ;


//type definitions
typedef struct  {
	uint length ;
	uint count ;
	uint* base ;
	uint* head ;

}LIFO_Buf_t ;


typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_Null

}LIFO_status;


//APIs

LIFO_status LIFO_Add_item (LIFO_Buf_t* lifo_buf , uint item);
LIFO_status LIFO_get_item (LIFO_Buf_t* lifo_buf , uint* item);
LIFO_status LIFO_init (LIFO_Buf_t* lifo_buf , uint* buf , uint length);


#endif
