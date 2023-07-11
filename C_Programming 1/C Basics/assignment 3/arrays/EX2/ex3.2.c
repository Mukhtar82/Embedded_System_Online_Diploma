/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i , j;
	float a[100] , sum=0.0 , av ;
	printf("Enter the number of data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&j);
	if(j<0 || j>100)
	{
		printf("Error!! The number must be in range (1 to 100)\r\n");
		fflush(stdin); fflush(stdout);
		printf("Enter the number again:");
		fflush(stdin); fflush(stdout);
		scanf("%d", &j);
	}

	for(i=0; i<j;i++)
	{
		printf("%d. Enter the number",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	av=sum/j;
	printf("The average is: %.3f",av);

	return 0;
}
