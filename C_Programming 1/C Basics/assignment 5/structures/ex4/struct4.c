
#include <stdio.h>
struct Sstudents
{
	char name[50];
	int roll;
	float marks;
};
int main(void) {
	struct Sstudents x[10];
	int i;
	printf("Enter information of students:\n");
	for(i=0 ; i<10 ; i++)
	{
		x[i].roll=i+1;
		printf("\nFor roll number %d\n",x[i].roll);
		printf("\nEnter the name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s",x[i].name);
		printf("Enter Marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&x[i].marks);
		printf("\n");
	}
	printf("Displaying information of students:\n");
	for(i=0 ; i<10 ; i++)
	{
		printf("\n information for roll number %d\n",i+1);
		printf("Name: %s \n", x[i].name);

		printf("Marks:%.2f\n",x[i].marks);
	}
	return 0;
}
