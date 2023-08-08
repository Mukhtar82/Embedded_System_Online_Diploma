
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m;
	int* ab=&m;
	m=29;
	printf(" Address of m : %x \n value of m : %d \n",&m,m);
	printf(" Now ab is assigned with the address of m \n ");
	printf("Address of pointer ab : %x \n value of pointer am : %d \n ",ab,*ab);
	m=34;
	printf("The value of m assigned to 34 now.\n ");
	printf("Address of pointer ab : %x \n value of pointer am : %d \n ",ab,*ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n ");
	printf("Address of m : %x \n value of m : %d \n  ",&m,m);
	return 0;
}
