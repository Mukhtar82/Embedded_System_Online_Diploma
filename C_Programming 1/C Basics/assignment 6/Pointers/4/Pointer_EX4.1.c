// reverse an array with pointer
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ,i , x[15];
	int* pt=x;
	printf("Enter the number of element you want to store and reveres (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0 ; i<num ; i++)
	{
		printf("Element no. %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",pt);
		pt++;
	}

	pt=&x[num-1];
	printf("\nThe elements of array in reversed order are :");

	for(i=num; i>0; i--)
	{
		printf("\nElement no. %d : %d",i,*pt);
		pt--;
	}
	return 0;
}
