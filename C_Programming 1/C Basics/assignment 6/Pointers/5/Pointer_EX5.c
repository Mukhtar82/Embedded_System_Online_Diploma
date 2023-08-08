// program to show a pointer to an array which contents are pointer to structure.

#include <stdio.h>
#include <stdlib.h>
struct employee
{
	char *name;
	int id;
};
int main(void) {
	static struct employee emp1={"John",1001} , emp2={"Alex",1002} , emp3={"Taylor",1003};
	struct employee (*arr[])={&emp1, &emp2 , &emp3};
	struct employee (*(*ptr)[3])=&arr;

	printf("Employee Name : %s \n",(**(*ptr+1)).name);
	printf("Employee ID : %d \n",(*(*ptr+1))->id);

	return 0;
}
