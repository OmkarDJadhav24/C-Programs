#include<stdio.h>

int Check(int N1)
{
	int i=0;
	for(i=1;i<N1;i++)
	{
		if((N1%i)!=0)
		{
			printf("\n%d",i);
		}
	}
}

int main()
{
	int No=0;
	
	printf("\nEnter the number:");
	scanf("%d",&No);
	
	Check(No);
	
	return 0;
}