#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float side;
	float base;
	float area;
	printf("Enter value of side of right angle triangle\n");
	scanf("%f",&side);
		printf("Enter value of base of right angle triangle\n");
			scanf("%f",&base);
	area=side*base/2;
	printf("Area of right angle triangle is:%f",area);
	return 0;
}
