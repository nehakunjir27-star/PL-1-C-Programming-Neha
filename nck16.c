/*program(16)->write a program to generate the multiplication take of any number using while loop,do while loop & for loop.
solution(1):using while loop*/

#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter a number :");
	scanf("%d",&num);
	
	printf("\n Multiplication Table of %d\n",num);
	for(i=1;i<=10;i++)
	{
		printf("%d×%d=%d\n",num,i,num*i);
	}
	return 0;
}