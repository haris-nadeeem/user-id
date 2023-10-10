#include <stdio.h>
#include <conio.h>
main(){
	float a,d,e;
		printf("enter radius of sphere\n");
	scanf("%f",&a);



	d=3.14*4/3*a*a*a;
	e=4*3.14*a*a;
	printf("volume is:%f\n",d);
	printf("surface area is:%f",e);
	return 0;
}
