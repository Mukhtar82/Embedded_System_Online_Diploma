
#include <stdio.h>
struct Sstudents
{
	char name[50];
	int roll;
	float marks;
};
int main(void) {
	struct Sstudents x;
	printf("enter information of students:\n");
	printf("enter the name:");
	fflush(stdin); fflush(stdout);
	scanf("%s",x.name);
	printf("enter the roll number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x.roll);
	printf("enter your mark: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.marks);
	fflush(stdin); fflush(stdout);
	printf("\n Displaying Information\n");
	printf(" Name:%s\n Roll:%d\n Marks:%.2f\n",x.name ,x.roll, x.marks);

	return 0;
}
