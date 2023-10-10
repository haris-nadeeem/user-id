#include <stdio.h>
 int main(){
	int a=7;
	int b=1;
	for(int c = 2; c*c < a; c++){
		if(a%c==0){
			b=0;
		}
	}
	if(b){printf("the number %d is prime",a);
	}
	else{
		printf("the number %d is not prime",a);
	}
	return 0;
}
