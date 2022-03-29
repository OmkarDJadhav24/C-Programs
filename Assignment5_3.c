#include<stdio.h>

int Check(int No)
{
	int N=0;
	int count=0;
	while(No>0)
	{
		N=No%10;
		if(N==2)
		{
			count=count+1;
		}
		No=No/10;
	}
	return count;
}

int main()
{
	int No=0;
	int Result=0;
	
	printf("\nEnter the number:");
	scanf("%d",&No);
	
	Result=Check(No);
	printf("\nThe frequency of 2 is:  %d",Result);
	
	return 0;
}