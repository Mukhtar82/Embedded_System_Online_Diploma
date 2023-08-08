
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   char str[50] , rev[50];
   char* ptr =str ;
   char* rvptr =rev ;
   int i =-1;
   printf("Input the string that you want to reverse :\n");
   fflush(stdin); fflush(stdout);
   scanf("%s",str);
   while(*ptr)
   {
	   ptr++;
	   i++;
   }
   while(i>=0)
   {
	   ptr--;
	   *rvptr = *ptr;
	   rvptr++;
	   --i;
   }
   *rvptr='\0';
   printf("\nThe reversed string is : \n");
   printf("%s",rev);

	return 0;
}
