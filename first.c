#include<stdio.h>
int main()
{
	int T=0;
	printf("\nEnter the test cases:");
	scanf("%d",&T);
	
	int N=0,X=0,P=0;
	
	for(int i=0;i<T;i++)
	{
		printf("\nEnter the Values of N,X,P:");
		scanf("%d",&N);
		scanf("%d",&X);
		scanf("%d",&P);
		
		if((X*3 - (N-X)*1)>=P)
		{
			printf("\nPASS");
		}
		else
		{
			printf("\nFail");
		}
	}
	return 0;
}