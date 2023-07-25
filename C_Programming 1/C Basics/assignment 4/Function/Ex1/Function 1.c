// check prime numbers between 2 intervals


#include <stdio.h>
#include <stdlib.h>
int prime(int num){
	int x,check=0;
	for (x=2 ; x< num/2 ;++x)
	{
		if (num%x==0){
			check=1;
			break;
		}
	}
	return check;
}
int main(void) {
	int num1 , num2, i , check;
	printf("Enter the two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("The prime numbers between %d and %d is:", num1, num2);
	for(i=num1+1; i<num2 ; ++i)
	{
		check=prime(i);
		if(check==0)
			printf("%d  ",i);
	}
	return 0;
}
