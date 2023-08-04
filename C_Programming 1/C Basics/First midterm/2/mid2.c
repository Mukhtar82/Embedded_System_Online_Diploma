// square root C Function

#include <stdio.h>
#include <stdlib.h>
float sqr(int x);
int main(void) {
	int x ;
	printf("Enter the number to check : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);  fflush(stdout);
	printf("The square root of %d is : %.2f",x,sqr(x));
	return 0;
}

float sqr(int x)
{
	float i;
	for(i=0.0001 ; i*i<x ; i=i+0.0001);
	return (i) ;

}
