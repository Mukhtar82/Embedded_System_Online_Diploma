/*
check if the character is an alphabet or not
 */

#include <stdio.h>

int main(void) {
	char x;
	printf("enter the character to check:");
	fflush(stdin);  fflush(stdout);
	scanf("%c" ,&x);
	if (x>='a' && x<='z' || x>='A' && x<='Z')
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
	return 0;
}
