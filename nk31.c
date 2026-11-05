/*program(31)->
solution(3):No argument,return a value
*/
#include<stdio.h>
float area Triangle()
{
	float base,height;
	printf("Enter base:");
	scanf("%f",&base);
	printf("Enter height:");
	scanf("%f",&height);
	
	return 0.5*base*height;
}
int main()
{
	float area;
	area=area Triangle();
	printf("Area of Triangle=%f",area);
	return 0;
}
