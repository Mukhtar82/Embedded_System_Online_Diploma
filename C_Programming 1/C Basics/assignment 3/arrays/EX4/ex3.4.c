/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i , j ,  x , y;//i=loop , x= no.of elements inside the array , y=the value which wanted to insert , j= location where i want to insert in
	float a[20];
	printf("Enter the number of element : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	fflush(stdin); fflush(stdout);
	printf("Enter the values :");
	fflush(stdin); fflush(stdout);
	for(i=0; i<x;i++) {
		scanf("%f",&a[i]);
	}
	printf("Enter the value that you want to insert:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	fflush(stdin); fflush(stdout);
	printf("Enter the location of it : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&j);
	fflush(stdin); fflush(stdout);
	for(i=x;i>=j;i--)
	{
		a[i]=a[i-1];
	}
	x++;
	a[j-1]=y;
	for(i=0;i<x;i++)
		printf(" %.1f",a[i]);
	return 0;
}
