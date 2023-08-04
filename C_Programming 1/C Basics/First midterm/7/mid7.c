

#include <stdio.h>
#include <stdlib.h>
int summ(int k);
int main(void) {

	int x;
	printf("Enter the number you want to sum with all numbers before it until number 0 : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);
	printf("the sum of numbers between 0 and %d is : %d",x,summ(x));

	return 0;
}

int summ(int k)
{
	int i ,sum=0 ;
	for (i=0 ; i<=k ; i++)
		sum+=i;

	return sum;
}
