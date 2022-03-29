#include<stdio.h>

int Check(int N1)
{
	int i=0;
	int fcnt=0;
	int ncnt=0;
	int icnt=0;
	for(i=1;i<N1;i++)
	{
		if((N1%i)==0)
		{
			fcnt=fcnt+i;
			printf("%d",i);
		}
		else
		{
			ncnt=ncnt+i;
		}
	}
	icnt=fcnt-ncnt;
	return icnt;
}

int main()
{
	int No1=0;
	int Result=0;
	
	printf("\nEnter the number:");
	scanf("%d",&No1);
	
	Result=Check(No1);
	printf("\nThe Difference is:%d",&Result);
	
	return 0;
}