// 123 ----> 1+2+3=6

#include <stdio.h>
#include <stdlib.h>
int func(int x);

int main(void) {
	int x;
	printf("Enter the number please : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);
    printf("the sum of %d is : %d",x,func(x));
	return 0;
}

int func(int x)
{
	int r , sum=0;
	while(x>0)
	{
		r=x%10;
		sum+=r;
		x=x/10;
	}
	return sum;
}
