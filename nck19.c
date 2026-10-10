/*
program(19)--> write a program to accept the elemnts of a one dimentional array and calculate the sum od all its elements.
solution(1):using for loop.
*/
#include<stdio.h>
int main()
{
	int arr[5],i,sum=0;
	for(i=0;i<5; i++)
	{
		printf("Enter element at index %d:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5; i++)
	{
		sum= sum+arr[i];
	}
	printf("\n sum of all array elements=%d",sum);
	return 0;
}