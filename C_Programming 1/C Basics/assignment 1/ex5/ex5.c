#include <stdio.h>
main(void)
{
	 char a ;
	printf("Enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c", &a);
	printf("AscII value of %c = %d", a ,a);
	return 0;
}
