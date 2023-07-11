#include <stdio.h>
#include <string.h>

int main(void) {
	int i , j=0;
	char a[100], temp;
	printf("Enter the sentence :");
	fflush(stdin); fflush(stdout);
	gets(a);
	 i=0;
	 j=strlen(a)-1;
	 while (i<j)
	 {
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
		 i++;
		 j--;
	 }
	printf("The reversed of it is: %s",a);
return 0;
}
