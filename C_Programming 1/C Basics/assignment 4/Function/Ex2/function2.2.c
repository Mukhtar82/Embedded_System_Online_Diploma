/*
 factorial calculation
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int x)
{
	if(x!=1)
		return	x*=factorial(x-1);
}

int main(void) {
	int x;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("The factorial of %d is %1d",x ,factorial(x));
	return 0;
}
