#include <stdio.h>
main(){
	int a,b;
	printf("enter number\n");
	scanf("%d",&a);
	if(a==0){
		printf("undefined");
	}
	else{
		printf("ans = 1/%d",a);
	}
	return 0;
}
