
typedef volatile unsigned long Unl_t ; 

#define SYSCTL_RCGC2_R    (*((volatile unsigned long*)0x400FE108))
#define GPIO_OIRTF_DIR_R  (*((volatile unsigned long*)0x40025400))
#define GPIO_OIRTF_DEN_R  (*((volatile unsigned long*)0x4002551C))
#define GPIO_OIRTF_DATA_R (*((volatile unsigned long*)0x400253FC))

int main()
{
	Unl_t delay_count ;
	SYSCTL_RCGC2_R =0x00000020 ;
	// delay to make sure GPIOF is up and running
	for (delay_count=0 ; delay_count < 200 ; delay_count++) ;
	GPIO_OIRTF_DIR_R |= 1<<3 ; // Dir is output for pin 3 port F
	GPIO_OIRTF_DEN_R |= 1<<3 ;
	while(1)
	{
		GPIO_OIRTF_DATA_R |= 1<<3 ;
		for (delay_count=0 ; delay_count < 200000 ; delay_count++) ;
		GPIO_OIRTF_DATA_R &= ~(1<<3);
	    for (delay_count=0 ; delay_count < 200000 ; delay_count++) ;
	}

	return 0;
}