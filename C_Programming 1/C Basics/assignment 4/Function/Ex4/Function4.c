/*
 ============================================================================
 Name        : Function4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int x ,int y);
int main(void) {
	int b , p;
	printf("Enter the base : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	fflush(stdin); fflush(stdout);
	printf("Enter the power : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);
	fflush(stdin); fflush(stdout);
printf("%d^%d = %d",b , p , power(b,p));


	return 0;
}
int power(int base , int exp){
	if(exp!=0){
		return(base*power(base,exp-1));
	}
	else
		return 1;
}
