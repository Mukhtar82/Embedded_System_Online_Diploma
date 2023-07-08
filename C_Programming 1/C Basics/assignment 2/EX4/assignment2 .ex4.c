/*
check if the number is +ve , -ve or zero
 */

#include <stdio.h>

int main(void) {
	int a ;
	printf("enter the number to check it: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if (a>=0)
		printf("%d is positive",a);
	else if (a<=0)
		printf("%d is negative",a);
	else
		printf("%d is zero",a);
	return 0;
}
