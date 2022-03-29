#include<stdio.h>

void Display(int Value)
{
	int n=0;
	
	for(n=0;n<Value;n++)
	{
		printf("* ");
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