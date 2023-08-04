
#include <stdio.h>
union set
{
	char name[32];
	float salary;
	int worker_no;
}U;

struct set1
{
	char name[32];
float salary;
int worker_no;
}x;

int main(void) {
	printf("size of union=%d\n",sizeof(U));
	printf("size of structure=%d", sizeof(x));
	return 0;
}
