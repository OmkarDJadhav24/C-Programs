//Addition with function pointer

#include<stdio.h>

int Addition(int A,int B)
{
	int iAns=0;
	iAns=A + B;
	return iAns;
}

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	
	printf("\nEnter the first number:");
	scanf("%d",&iNo1);
	
	printf("\nEnter the second number:");
	scanf("%d",&iNo2);
	
	int (*pointer)(int,int);
	pointer=Addition;
	
	iRet=pointer(iNo1,iNo2);
	printf("\nAddition is:%d",iRet);
	return 0;
}