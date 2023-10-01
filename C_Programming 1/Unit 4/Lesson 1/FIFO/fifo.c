

#include "fifo.h"

//FIFO APIs
FIFO_Buf_Status FIFO_init (FIFO_buf_t* fifo , element_type* buf , uint32_t length )
{
	if (buf == NULL)
		return FIFO_null ;

	fifo->base = buf ;
	fifo->head = buf ;
	fifo->tail = buf ;
	fifo->length = length ;
	fifo->count = 0 ;

	return FIFO_No_error ;
}
FIFO_Buf_Status FIFO_enqueue (FIFO_buf_t* fifo , element_type item)
{
	if ( !fifo->base || !fifo->head ||!fifo->tail)
		return FIFO_null ;
	//fifo is full ?
	if(FIFO_IS_Full (fifo) == FIFO_Full )
		return FIFO_Full ;

	*(fifo->head) = item ;

	fifo->count++ ;

	// Circular fifo
	if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->head = fifo->base ;
	else
		fifo->head++ ;

	return FIFO_No_error ;

}
FIFO_Buf_Status FIFO_Dequeue (FIFO_buf_t* fifo , element_type* item)
{
	if ( !fifo->base || !fifo->head ||!fifo->tail)
			return FIFO_null ;
	// check fifo is empty or not
	if (fifo->count == 0)
		return FIFO_empty ;

	*item = *(fifo->tail) ;
	fifo->count-- ;

	if(fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))))
			fifo->tail = fifo->base ;
		else
			fifo->tail++ ;

	return FIFO_No_error ;
}
FIFO_Buf_Status FIFO_IS_Full (FIFO_buf_t* fifo )
{
	if ( !fifo->base || !fifo->head ||!fifo->tail)
			return FIFO_null ;
	if(fifo->count == fifo->length)
		return FIFO_Full ;
	return FIFO_No_error ;

}
void FIFO_print (FIFO_buf_t* fifo)
{
	element_type* temp ;
	int i ;
	if (fifo->count == 0)
	{
		printf("fifo is empty \n");

	}
	else
	{
		temp = fifo->tail ;
		printf("\n =======fifp_print=======\n");
		for(i=0 ; i<fifo->count ; i++)
		{
			printf("\t %x \n",*temp);
			temp++ ;
		}
		printf("==============\n");
	}
}
