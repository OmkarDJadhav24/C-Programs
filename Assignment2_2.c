#include<stdio.h>

void Display(int Value)
{
	int i=0;
	while(Value>i)
	{
		printf("* ");
		Value--;
	}
}

int main()
{
	int iNo=0;
	printf("Enter the number:");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}