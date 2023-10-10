#include <stdio.h>
#include <conio.h>
main(){
	float a,b,c,d,e;
		printf("enter length of cuboid\n");
	scanf("%f",&a);

	printf("enter width of cuboid\n");
	scanf("%f",&b);
	printf("enter height of cuboid\n");
	scanf("%f",&c);
	d=a*b*c;
	e=(2*a*b)+(2*a*c)+(2*c*b);
	printf("volume is:%f\n",d);
	printf("surface area is:%f",e);
	return 0;
}
