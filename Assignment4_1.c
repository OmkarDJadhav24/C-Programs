#include<stdio.h>

int Check(int N1)
{
	int icnt=1;
	for(int i=1;i<N1;i++)
	{
		if((N1%i)==0)
		{
			icnt=icnt*i;
		}
	}
	return icnt;
}

int main()
{
	int Result=0;
	int No1=0;
	
	printf("\nEnter the Number:");
	scanf("%d",&No1);
	
	Result=Check(No1);
	printf("\nMultiplication of factors is:%d",Result);
	
	return 0;
}