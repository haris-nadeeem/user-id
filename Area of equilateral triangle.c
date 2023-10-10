#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float side;
	float area;
	printf("Enter value of side of equilateral triangle\n");
	scanf("%f",&side);
	area=(sqrt(3)/4)*(side*side);
	printf("Area of equilateral triangle is:%f",area);
	return 0;
}
