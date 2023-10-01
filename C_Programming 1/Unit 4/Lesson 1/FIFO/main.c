#include "fifo.h"


void main()
{
	FIFO_buf_t FIFO_UART ;
	element_type i , temp =0 ;
	if (FIFO_init( &FIFO_UART,uart_buffer, 5) == FIFO_No_error )
		printf ("fifo init ----> Done \n");

	for (i=0 ; i<7 ; i++)
	{
		printf ("FIFO Enqueue (%x) \n",i);
		if (FIFO_enqueue( &FIFO_UART, i) == FIFO_No_error )
			printf ("\t Fifo Enqueue ----> Done \n");
		else
			printf ("\t Fifo Enqueue ----> Failed \n");

	}

	FIFO_print(&FIFO_UART);
	if (FIFO_Dequeue( &FIFO_UART, &temp) == FIFO_No_error )
		printf (" Fifo Dequeue %x ----> Done \n",temp);
	if (FIFO_Dequeue( &FIFO_UART, &temp) == FIFO_No_error )
			printf (" Fifo Dequeue %x ----> Done \n",temp);
	FIFO_print(&FIFO_UART);
}
