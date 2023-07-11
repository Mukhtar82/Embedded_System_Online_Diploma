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
#include <string.h>

int main(void) {
	char a[100];
	printf("Enter the sentence :");
	fflush(stdin); fflush(stdout);
	gets(a);
	printf("The length of %s is: %d",a,strlen(a));
	return 0;
}
