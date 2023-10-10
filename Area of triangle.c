#include <stdio.h>
#include <conio.h>
main(){
	float height;
	float base;
	float area;
	printf("Enter value of height\n");
	scanf("%f",&height);
	printf("Enter value of base\n");
	scanf("%f",&base);
	area=height*base/2;
	printf("Area of triangle is:%f",area);
	return 0;
}
