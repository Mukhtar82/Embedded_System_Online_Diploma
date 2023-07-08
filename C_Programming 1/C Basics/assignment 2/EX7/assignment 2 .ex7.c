/*

 */

#include <stdio.h>

int main(void) {
	int x , count;
	unsigned long long int factorial=1 ;
	printf("enter an integer:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);
	if (x<0)
		printf("Error!! factorial of negative number doesn't exist");
	else
	{
		for(count=1 ; count<=x ; ++count) {
			factorial*=count;
		}
	printf("factorial = %lu ",factorial);
	}
	return 0;
}
