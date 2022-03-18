#include<stdio.h>

int Addition(int,int);

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	
	printf("\nEnter the first number:");
	scanf("%d",&iNo1);
	
	printf("\nEnter the second number:");
	scanf("%d",&iNo2);
	
	iRet=Addition(iNo1,iNo2);
	printf("\nAddition is:%d",iRet);
	
	return 0;
}

int Addition(int A,int B)
{
	int iAns=0;
	iAns=A + B;
	return iAns;
}