// find the unique number in the array

#include <stdio.h>
#include <stdlib.h>
int uni(int a[], int size);
int main(void) {
	int a[]={4,2,5,2,5,7,4} , size;
	 size=sizeof(a)/sizeof(a[0]);
	 printf("the unique number in the array is : %d",uni(a,size));
	return 0;
}

int uni(int a[], int size)
{
	int i , x=0;
	for(i=0 ; i<size ; i++)
		x^=a[i];
	return x;
}
