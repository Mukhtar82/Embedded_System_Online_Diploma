
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alph[27];
	int i;
	char* pt = alph;

	for (i=0 ; i<26 ; i++)
	{
		*pt=i+'A';
		pt++;
	}
	pt=alph;
	printf("The Alphabets are : \n");

	for (i=0 ; i<26 ; i++)
	{
		printf(" %c", *pt);
		pt++;
	}

	return 0;
}
