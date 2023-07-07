
#include <stdio.h>


int main(void) {
	int a ;
	printf("Enter a integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	fflush(stdin); fflush(stdout);
	printf(" You entered: %d",a);
	return 0;
}
