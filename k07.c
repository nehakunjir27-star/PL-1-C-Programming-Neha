/*
program(7)->write a c program to swap 2 numbers using temporary variable.
solution(1)user define values
*/

#include<stdio.h>
int main()
{
	int a,b,temp;
	
	a=111;
	b=222;
	printf("\n Before Swapping:");
	printf("\n a=%d, b=%d \n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n After Swapping:");
	printf("\n a=%d, b=%d\n", a,b);
	
	return 0;
}

