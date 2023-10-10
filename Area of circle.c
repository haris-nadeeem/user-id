#include <stdio.h>
#include <conio.h>
main(){
	float radius;
	float area;
	printf("ENTER THE RADIUS OF THE CIRCLE\n");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("Area of circle is: %f",area);
	return 0;
}
