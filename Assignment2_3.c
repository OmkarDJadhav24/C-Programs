#include<stdio.h>
#include<string.h>

void Check(int value)
{
	if(value>10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
} 
int main()
{
	int iNo=0;
	
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	Check(iNo);
	
	return 0;
}