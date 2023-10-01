
#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"


//User configuration
//Select the element type (uint8_t , uint16_t , uint32_t, ...)
#define element_type uint8_t
//create buffer
#define width1 5
element_type uart_buffer[width1];


//FIFO data types
typedef struct {
	uint32_t length ;
	uint32_t count ;
	element_type* head ;
	element_type* base ;
	element_type* tail ;
}FIFO_buf_t;

typedef enum {
	FIFO_No_error,
	FIFO_Full,
	FIFO_empty,
	FIFO_null
}FIFO_Buf_Status;

//FIFO APIs
FIFO_Buf_Status FIFO_init (FIFO_buf_t* fifo , element_type* buf , uint32_t length );
FIFO_Buf_Status FIFO_enqueue (FIFO_buf_t* fifo , element_type item);
FIFO_Buf_Status FIFO_Dequeue (FIFO_buf_t* fifo , element_type* item);
FIFO_Buf_Status FIFO_IS_Full (FIFO_buf_t* fifo );
void FIFO_print (FIFO_buf_t* fifo);


#endif
