// to count the max number of ones between two zeroes
#include <stdio.h>
#include <stdlib.h>
int max(int);
int main(void) {
	int x;
	printf("enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);
    printf("the max ones between two zeros is : %d", max(x));
	return 0;
}

int max(int x)
{
	int count=0 ;
	while(x!=0)
	{
		x=(x&(x<<1));
		count++;
	}
	return count;
}
