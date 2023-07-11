/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	int i, x=0 ;
	char a[100],ch;
	printf("Enter the sentence: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	printf("Enter the letter to get the frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for (i=0 ; a[i]!='\0';i++)
	{
		if(ch==a[i])
			++x;
	}
	printf("The frequency of %c : %d",ch,x);
	return 0;
}
