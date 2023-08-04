
#include <stdio.h>
#include <stdlib.h>
int num_s(int);
int main() {

	int x ;
	printf("Enter the number you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);
	printf("the number of ones in the binary form of this number is : %d ", num_s(x));
	fflush(stdin); fflush(stdout);

	return 0;
}

int num_s(int num )
{
	int i , count =0 ;
	for(i=0 ; i< 32 ; i++)
	{
		if(num & (1<<i))
			count++;
	}

	return count;
}
