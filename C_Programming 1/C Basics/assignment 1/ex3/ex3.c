#include <stdio.h>
main(void)
{
	int a , b , sum;
	printf("Enter 2 integers :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a ,&b);
	sum= a+b ;
	printf("sum: %d", sum);
	return 0;
}
