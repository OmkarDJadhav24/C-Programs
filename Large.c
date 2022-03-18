// TO check which is large number

#include<stdio.h>
int main()
{
	int iNo1=0;
	int iNo2=0;
	
	printf("\nEnter the first number:");
	scanf("%d",&iNo1);
	
	printf("\nEnter the second number:");
	scanf("%d",&iNo2);
	
	if(iNo1>iNo2)
	{
		printf("First number is greater than second");
	}
	else
	{
		printf("Second number is greater than first");
	}
	return 0;
}