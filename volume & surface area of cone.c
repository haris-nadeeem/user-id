#include <stdio.h>
#include <conio.h>
main(){
	float a,b,d,e;
		printf("enter radius of cone\n");
	scanf("%f",&a);

	printf("enter height of cone\n");
	scanf("%f",&b);


	d=3.14*a*a*b/3;
	e=3.14*a*(a+sqrt(a*a+b*b));
	printf("volume is:%f\n",d);
	printf("surface area is:%f",e);
	return 0;
}
