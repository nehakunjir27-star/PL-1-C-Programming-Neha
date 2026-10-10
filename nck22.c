/*
program(22)--> write a program to read two matrix of the same order,perfrom matrix addition ,&display the resultant matix using two dimentional array.
solution(1):using for loop
*/
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k;
	printf("Enter element of Matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of MatrixB:\n");
	for(j=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n Resultant Matrix:\n");
	for(k=0;k<3;k++)
	{
		printf("%d",c[i][j]);
	}
	printf("\n");
 return 0;
}
 
		