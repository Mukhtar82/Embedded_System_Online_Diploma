/*
find the largest number
 */

#include <stdio.h>

int main(void) {
	int a , b, c;
	printf("enter three numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b){
		if (a>=c)
			printf("%d is the largest number",a);
		else
			printf("%d is the largest number",c);
	}
	else {
		if (b>=c)
			printf("%d is the largest number",b);
		else
			printf("%d is the largest number",c);
	}

	return 0;
}
