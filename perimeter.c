#include <stdio.h>
#include <conio.h>
main(){
	int letter;
	printf("select the shape\nfor circle press 1\nfor rectangle press 2\nfor triangle press 3\n");
	scanf("%d",&letter);
	switch(letter)
	{
		case 1:
			{
				float a,b;
				printf("enter the radius of the circle\n");
				scanf("%f",&a);
				b=2*3.14*a;
				printf("parameter of the circle is:%f",b);
				break;
			}
			case 2:
				{
					float a,b,c;
					printf("enter the length of rectangle\n");
					scanf("%f",&a);
					printf("enter the width of rectangle\n");
					scanf("%f",&b);
					c=(a+b)*2;
						printf("parameter of the rectangle is:%f",c);
						break;
						
				}
				case 3:
					{
						float a,b,c,d;
						printf("enter the sides of triangle\n");
						scanf("%f %f %f",&a,&b,&c);
						d=a+b+c;
						printf("parameter of the triangle is:%f",d);
						break;
						
					}
					default:
						{
							printf("invalid choice\n");
							break;
							
						}
	}
	

}
