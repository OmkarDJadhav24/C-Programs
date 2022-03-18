#include<stdio.h>
int main()
{
	int num=0;
	int i=10;
	printf("Enter the number:");
	scanf("%d",&num);
	
	do
	{
		printf("\n%d",i);
		i++;
	}while(num>i);
	return 0;
}