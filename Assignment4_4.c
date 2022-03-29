#include<stdio.h>

int Check(int N1)
{
	int icnt=0;
	int i=0;
	for(i=1;i<N1;i++)
	{
		if((N1%i)!=0)
		{
			icnt=icnt+i;
		}
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
	printf("%d",Result);
	
	return 0;
}