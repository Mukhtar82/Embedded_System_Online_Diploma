//find area of the circle by passing arguments to macros
#include <stdio.h>
#define Pl 3.1415
#define Area(r) ((r)*(r)*Pl)

int main(void) {
	int radius;
	float Area;
	printf("Enter the radius of the circle to calculate the Area of it: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&radius);
	Area=Area(radius);
	printf("The Area of the circle = %.2f",Area);
	return 0;
}
