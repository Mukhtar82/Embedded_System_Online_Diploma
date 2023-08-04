//sum the distance between 2 places by structure


#include <stdio.h>
#include <stdlib.h>
struct SDistance{
	int feet;
	float inch;
}first,second,sum;
int main(void) {
	printf("Enter the information of the first distance:\n");
	printf("Enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&first.feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&first.inch);
	printf("Enter the information of the second distance:\n");
	printf("Enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&second.feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&second.inch);

	sum.feet=first.feet+second.feet;
	sum.inch=first.inch+second.inch;
	//if sum of inch greater than 12 , changing it to feet.
	if(sum.inch>12)
	{
		sum.inch-=12.0;
		++sum.feet;
	}
	printf("\n Sum of distances=%d\'-%.2f\'",sum.feet , sum.inch);

	return 0;
}
