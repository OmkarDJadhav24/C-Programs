#include<stdio.h>
#define true 1
#define false 0

int Check(int N)
{
	if((N%10)==0)
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
	int No=0;
	int Result=0;
	
	printf("Enter the number:");
	scanf("%d",&No);
	
	Result=Check(No);
	
	if((Result)==true)
	{
		printf("It contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	
	return 0;
}