/*
solution(2)->user define values
*/

#include<stdio.h>
int main()
{
	int rollnum;
	float per;
	char grade;
	
	printf("\n Enter Students Roll Number :");
	scanf("%d",&rollnum);
	printf("\n Enter Students percentage :");
	scanf("%f",&per);
	printf("\n Enter student Grade:");
	scanf("  %c", &grade);
	
	printf("\n----Student Information----\n");
	printf("\n Roll Number is :%d",rollnum);
	printf("\n percentage is :%f ",per);
	printf("\n Grade          : %c",grade);
	
	return 0;
}
