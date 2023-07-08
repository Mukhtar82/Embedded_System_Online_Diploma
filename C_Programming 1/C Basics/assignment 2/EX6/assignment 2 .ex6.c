/*

 */
#include <stdio.h>

int main(void)
{
	// x the number user will input , y it will start from until reach x no. and adding them in "sum"
	int x , y , sum=0;
	printf(" enter an integer:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);
	for(y=1; y<=x;++y )
	{
		sum+=y;
	}
	printf("sum = %d",sum);

	return 0;
}
