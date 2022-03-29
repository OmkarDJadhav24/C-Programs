#include<stdio.h>

int Check(int No)
{
	int Arr[3];
	int N=0;
	int i=0;
	
	
	
	
	while(No>0)
	{
		N=No%10;
		Arr[i]=N;
		i=i+1;
		printf("\n%d",N);
		No=No/10;	
	}
	for(i=3;i>=0;i--)
	{
		printf("\n%d",Arr[i]);
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