#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float a;
	float b;
	float h;
	float area;
	printf("Enter base 1 of trapezium\n");
	scanf("%f",&a);
		printf("Enter base 2 of trapezium\n");
			scanf("%f",&b);
				printf("Enter height of trapezium\n");
	scanf("%f",&h);
	area=h/2*(a+b);
	printf("Area of trapezium is:%0.4f",area);
	getch();
	return 0;
}
