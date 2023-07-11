
#include <stdio.h>

int main(void) {
	float a[2][2];
	float b[2][2];
	float c[2][2];
	int i , j;
	printf("Enter the first matrix values \n");
	fflush(stdin);  fflush(stdout);
	for (i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("enter a%d%d : ",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the second matrix values \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("enter b%d%d : ", i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("The sum of them is:\n");
	fflush(stdin);  fflush(stdout);
	for(i=0;i<2;i++)
	{
		for(j=0 ;j<2; j++)
		{
			printf("%.2f\t",c[i][j]);
			if (j==1)
				printf("\n");
		}
	}

	return 0;
}
