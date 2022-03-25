#include<stdio.h>
int main()
{
	int T=0;
	printf("\nEnter the number for Test Cases:");
	scanf("%d",&T);
	
	int X=0,Y=0,Z=0;
	for(int i=0;i<T;i++)
	{
		printf("\nEnter the values of X,Y,Z:");
		scanf("%d",&X);
		scanf("%d",&Y);
		scanf("%d",&Z);
		
		if((X + Z*2)>=Y)
		{
			printf("\nRCB will Win");
		}
		else
		{
			printf("\nRCB will Lose");
		}
	}
	return 0;
}