/*
 simple calculator
 */

#include <stdio.h>
int main(void) {
	float x , y , z ; // x & y the input numbers while z is the operation result
	char o ;
	printf("choose the operation ' + , - , * , / ' :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&o);
	fflush(stdin); fflush(stdout);
	printf("enter the two numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x ,&y);
	switch(o) {
	case'+':
		z=x+y;
		printf("answer is : %.3f",z);
		break;
	case'-':
		z=x-y;
		printf("answer is : %.3f",z);
		break;
	case'*':
		z=x*y;
		printf("answer is : %.3f",z);
		break;
	case'/':
		z=x/y;
		printf("answer is : %.3f",z);
		break;
	default:
		printf("Error!! operator isn't correct");
		break;
	}

	return 0;
}
