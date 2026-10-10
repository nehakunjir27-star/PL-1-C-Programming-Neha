/*
program(18)->
solution(2):user define program+using all types of loops + Implicit ways to write the program.
*/
#include<stdio.h>
int main()
{
	int var1[5];
	float var2[5];
	char var3[5];
	int i,j,k;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter your integer value:");
		scanf("%d",&var1[i]);
	}
	for(i=0;i<=4;i++);
	{ 
	   printf("At index %d",i);
	   printf("The value of var1 is %d",var1[i]);
	   printf(" and address is %d",var1[i]);
	}
	   printf("\n\n");
	   
	   j=0;
	   while(j<=4);
	   {
	   	printf("Enter your float/decimal value:");
	   	scanf("%f",&var2[j]);
	   	j++;
	   }
	   j=0;
	   while(j<=4);
	   {
	   	printf("At index%d",j);
	   	printf("The value of var2 is %f",var2[j]);
	   	printf("and address is %d",&var2[j]);
	   }
	   printf("\n\n");
	   
	   k=0;
	   do
	   {
	   	printf("Enter a caracter value ");
	   	scanf("%c",&var3[k]);
	   	k++;
	   }while (k<=4);
	   
	   k=0;
	   do
	   {
	   	printf("At index%d ",k);
	   	printf("The value of var3[k] of indexi is %c",var3[k] );
	   	printf("and address is %d",&var3[k]);
	   	
	   	k++;
	   }while(k<=4);
	   
	   return 0;
}
	   
	 