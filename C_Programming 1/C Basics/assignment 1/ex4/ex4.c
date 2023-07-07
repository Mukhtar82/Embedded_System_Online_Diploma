#include <stdio.h>
main(void)
{
	float a , b , product;
	printf("Enter 2 numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a ,&b);
	product= a*b ;
	printf("product: %f", product);
	return 0;
}
