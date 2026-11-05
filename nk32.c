/*program(32)-->
solution(4):Argument,Result a value
*/
#include<stdio.h>
float area Triangle(float base,float height)

{
	return 0.5*base*height;
}
int main()
{
	float base,height,area;
	printf("Enter base:");
	scanf("%f",&base);
	printf("Enter height:");
	scanf("%f",&height);
	
	area=area Triangle(base,height);
	printf("Area of triangle=%f",area);
	return 0;
}
