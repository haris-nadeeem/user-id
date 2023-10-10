#include <stdio.h>
int main(){
	int id;
	int pass;
	printf("enter id\n");
	scanf("%d",&id);
	printf("enter pass");
	scanf("%d",&pass);
	if(id==15 && pass==15){
		printf("your name is M.Haris\n");
	}
	else if(id==17 && pass==17){
		printf("your name is 	Hafiz Sami Noor ");
	}
	else if(id==2 && pass==2){
		printf("your name is Usman");
	}
		else if(id==3 && pass==3){
		printf("your name is M.Junaid");
		}
				else if(id==4 && pass==4){
		printf("your name is Rao Amir Javed");
		}
		
	else{
		printf("your id is incorrect");
	}
	return 0;
}
