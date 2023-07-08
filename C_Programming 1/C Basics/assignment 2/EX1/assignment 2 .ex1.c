
#include <stdio.h>

int main(void) {
	int x;
	printf("enter the number you want to check:");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &x);
	if ((x%2)==0)
		printf("%d is even" ,x);
	else
		printf("%d is odd" ,x);
	return 0;
}
