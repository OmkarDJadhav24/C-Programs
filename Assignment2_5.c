#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

bool check(int value)
{
	if(value%2==0)
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
	bool Result=false;
	printf("\nEnter the number:");
	scanf("%d",&No);
	
	Result=check(No);
	printf("%d",Result);
	
	return 0;
}