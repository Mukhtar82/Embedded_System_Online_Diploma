#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth:Mukhtar" ;
unsigned char const string_buffer2[100] = "learn-in-depth:Muhammed" ;
void main (void)
{
  uart_Send_string (&string_buffer[0]);
}