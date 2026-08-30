/*
program(8)
sloution(2)->user define values.
*/

#include<stdio.h>
int main()
{
	int a,b,temp;
	
	printf("\n Enter First number:");
	scanf("%d",&a);
	printf("\n Enter Second number:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("\n After Swaping:\n");
	printf("\n First Number=%d \n",a);
	printf("\n Second number=%d \n",b);
	
	return 0;
}
	