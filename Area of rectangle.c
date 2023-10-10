#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float length;
	float width;
	float area;
	printf("Enter length of rectangle\n");
	scanf("%f",&length);
		printf("Enter width of rectangle\n");
			scanf("%f",&width);
	area=length*width;
	printf("Area of rectangle is:%f",area);
	return 0;
}
