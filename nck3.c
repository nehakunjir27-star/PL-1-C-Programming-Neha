/*
program(3)-> write a program to calculate the area of a circle.
solution(1)->predefine values
*/

#include<stdio.h>
int main()
{
	float radius=1.1;
	float area;
	
	area=(3.14*radius*radius);
	printf("\n Area of Circle=%f",area);
	
	return 0;
}