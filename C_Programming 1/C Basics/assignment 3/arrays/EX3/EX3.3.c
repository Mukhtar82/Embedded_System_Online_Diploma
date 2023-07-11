
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , j , x ,y;
	float a[10][10],b[10][10];
	printf("Enter the number of rows and columns:");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&x,&y);
	fflush(stdin); fflush(stdout);
	printf("Enter the values of the matrix\n");
	fflush(stdin); fflush(stdout);
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			printf("enter a%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
			fflush(stdin); fflush(stdout);
		}
	}
	printf("The entered matrix:\r\n");
	fflush(stdin); fflush(stdout);
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			printf("%.2f\t",a[i][j]);
			fflush(stdin); fflush(stdout);
			if (j==y-1)
				printf("\n");
			fflush(stdin); fflush(stdout);
		}
	}
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			b[j][i]=a[i][j]; // transpose form
		}
	}
	printf("The transposed matrix is\r\n");
	fflush(stdin); fflush(stdout);
	for(i=0 ; i<y ; i++) // 3mlna switch hna 3lshan el transpose ykon tmm
	{
		for(j=0 ; j<x ; j++)
		{ printf("%.2f\t",b[i][j]);
		fflush(stdin); fflush(stdout);
		if (j==x-1)
			printf("\n");
		}
	}


	return 0;
}
