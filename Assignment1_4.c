#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

int Check(int no)
{
	if(no%5==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue=0;
	bool bret=false;
	
	printf("\nEnter the number:");
	scanf("%d",&iValue);
	
	bret=Check(iValue);
	
	if((bret)==true)
	{
		printf("Number is divisible by 5");
	}
	else
	{
		printf("Number is not divisible by 5");
	}
	
	return 0;
}