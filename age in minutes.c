#include <stdio.h>
main(){
float a,b;
	printf("Enter your age \nto convert into minutes\n");
	scanf("%f",&a);
	b=a*365*24*60;
	printf("age in minutes is %f",b);

	return 0;
}
