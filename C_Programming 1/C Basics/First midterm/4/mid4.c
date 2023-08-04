
#include <stdio.h>
#include <stdlib.h>
void Reverse();


int main() {
	printf("Enter the sentence : ");
	fflush(stdin); fflush(stdout);
	Reverse();
	return 0;
}
void Reverse() {
	char c ;
	scanf("%c",&c);
	if(c!='\n'){
		Reverse();
		printf("%c",c);
	}
}
