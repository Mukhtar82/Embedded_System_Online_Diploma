// reverse array

#include <stdio.h>
#include <stdlib.h>
void rev(int*x , int size);
int main(void) {
	int x[]={1,2,3,4,5},i,size;
	size= sizeof(x)/sizeof(*x);
	rev(x,size);
	for(i=0 ; i<size ; i++)
		printf("%d ", x[i]);
	return 0;
}

void rev(int*x , int size)
{
	int i , b[20] , j=0;
	for(i=0; i<size; i++)
	{
		b[j]=x[size-1-i];
		j++;
	}
	for(i=0; i<size ; i++)
		x[i]=b[i];

}
