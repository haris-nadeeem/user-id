#include <stdio.h>
#include <conio.h>
main(){
	float a,b,c;
	printf("enter length of the sides of cube\n");
	scanf("%f",&a);
	b=a*a*a;
	c=6*a*a;
	printf("volume of cube is:%f\n",b);
	printf("surface area of cube is:%f",c);
	return 0;
}
