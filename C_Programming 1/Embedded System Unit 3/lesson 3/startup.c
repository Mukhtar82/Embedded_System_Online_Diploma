//Startup.c
//Eng.Mukhtar

#include <stdint.h>
void Reset_handler ();
extern int main(void);
void Default_handler()
{
	Reset_handler () ;
}

void NMI_handler () __attribute__((weak, alias ("Default_handler")));
void H_Fault_handler () __attribute__((weak, alias ("Default_handler")));
void MM_Fault_handler () __attribute__((weak, alias ("Default_handler")));
void Bus_Fault_handler () __attribute__((weak, alias ("Default_handler")));
void Usage_Fault_handler () __attribute__((weak, alias ("Default_handler")));

extern unsigned int _Stack_top ;
  
uint32_t vectors[] __attribute__((section(".vectors"))) = {
(uint32_t)	&_Stack_top,
(uint32_t)  &Reset_handler,
(uint32_t)  &NMI_handler,
(uint32_t)  &H_Fault_handler,
(uint32_t)  &MM_Fault_handler,
(uint32_t)  &Bus_Fault_handler,
(uint32_t)  &Usage_Fault_handler

};

extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;


void Reset_handler ()
{
	// copying data section from flash to ram

	int unsigned DATA_Size = ( unsigned char* ) &_S_DATA - ( unsigned char* ) &_E_DATA ;
	unsigned char* P_Src = ( unsigned char* ) &_E_text ;
	unsigned char* P_Dst = ( unsigned char* ) &_S_DATA ;
	for (volatile int i =0 ; i < DATA_Size ; i++)
	{
		*(( unsigned char* )P_Dst++) = *(( unsigned char* )P_Src++) ;

	}

	//init .bss section in Ram = 0
	int unsigned bss_Size = ( unsigned char* ) &_S_bss - ( unsigned char* ) &_E_bss ;
	P_Dst =  ( unsigned char* ) &_S_bss ;
	for (volatile int i =0 ; i < DATA_Size ; i++)
	{
		*(( unsigned char* )P_Dst++) =( unsigned char )0 ;

	}

 main();
		
}