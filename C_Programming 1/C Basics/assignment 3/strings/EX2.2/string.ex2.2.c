


#include <stdio.h>
#include <string.h>

int main(void) {
	char a[100];
	int i;
	printf("Enter the sentence :");
	fflush(stdin); fflush(stdout);
	gets(a);
	for(i=0 ; a[i]!='\0';i++);
	printf("The length of %s is: %d",a,i);
	return 0;
}
