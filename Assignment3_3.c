#include<stdio.h>

void Check(int value)
{
	
	int j=0;
	int i=0;
	for(i=1;i<value;i++)
	{
		if(value%i==0)
		{
			Arr[j]=i;
			j++;
		}
	}
	
	for(j=0;j<10;j++)
	{
		printf("\n%d",Arr[j]);
	}
}
int main()
{
	int iNo=0;
	
	printf("\nEnter the number:");
	scanf("%d",&iNo);

	Check(iNo);
	return 0;
}