#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float p;
	float q;
	float area;
	printf("Enter 1st diagonal of rhombus\n");
	scanf("%f",&p);
		printf("Enter 2nd diagonal\n");
			scanf("%f",&q);
	area=p*q/2;
    	printf("Area of rhombus is:%0.3f",area);
	getch();
	return 0;
}
