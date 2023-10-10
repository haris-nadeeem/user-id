#include <stdio.h>
#include <conio.h>
main(){
	float a,b,d,e;
		printf("enter radius of cylinder\n");
	scanf("%f",&a);

	printf("enter height of cylinder\n");
	scanf("%f",&b);


	d=3.14*a*a*b;
	e=(2*3.14*a*b)+(2*3.14*a*a);
	printf("volume is:%f\n",d);
	printf("surface area is:%f",e);
	return 0;
}
