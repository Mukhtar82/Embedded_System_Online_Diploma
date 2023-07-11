/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i, j, x;
	float a[20];
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("Enter the value no.%d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
	}
	fflush(stdin); fflush(stdout);
	printf("Enter the number you want to search for :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&j);
	// to search starting from 0
	i=0;
	while(i<x && j!=a[i])
	{
		i++;
	}
	if(i<x)
	{
		printf("The number fount at location no.%d",i+1);
	}
	else {
		printf("The number not found");
	}
	return 0;
}
