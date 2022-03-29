#include<stdio.h>

int Check(int No)
{
	int i=0;
	int N=0;
	int icnt=0;
	while(No>0)
	{
		N=No%10;
		if(N==4)
		{
			icnt=icnt+1;
		}
		No=No/10;
	}
	return icnt;
}

int main()
{
	int No=0;
	int Result=0;
	printf("\nEnter the number:");
	scanf("%d",&No);
	
	Result=Check(No);
	printf("Frequency of number: %d",Result);
	
	return 0;
}