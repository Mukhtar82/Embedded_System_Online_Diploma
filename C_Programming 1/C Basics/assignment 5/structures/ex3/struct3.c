// To add two complex numbers by passing structure to a function
#include <stdio.h>
typedef struct complex
{
	float real;
	float imag;
}complex;
complex add(complex n1,complex n2);
int main(void) {
	complex n1,n2,temp;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary number respectively:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&n1.real,&n1.imag);
	fflush(stdin); fflush(stdout);
	printf("\nFor 2nd complex number\n");
		printf("Enter real and imaginary number respectively:\n");
		fflush(stdin); fflush(stdout);
		scanf("%f%f",&n2.real,&n2.imag);
		temp=add(n1,n2);
		printf("Sum=%.2f+%.2fi",temp.real,temp.imag);
	return 0;
}
complex add(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real+n2.real;
	temp.imag=n1.imag+n2.imag;
	return(temp);
}
