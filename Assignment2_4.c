#include<stdio.h>

void Display(int value1,int value2)
{
	int i=0;
	for(i=0;i<value2;i++)
	{
		printf("\n%d",value1);
	}
}

int main()
{
	int iNo1=0;
	int iNo2=0;
	
	printf("\nEnter the first number:");
	scanf("%d",&iNo1);
	
	printf("\nEnter the second number:");
	scanf("%d",&iNo2);
	
	Display(iNo1,iNo2);
	
	return 0;
}