#include<stdio.h>

int Check(int N1)
{
	int i=0;
	for(i=N1-1;i>0;i--)
	{
		if((N1%i)==0)
		{
			printf("%d\n",i);
		}
	}
}

int main()
{
	int No1=0;
	int Result[10];
	
	printf("\nEnter the number:");
	scanf("%d",&No1);
	
	Check(No1);
	
	return 0;
}