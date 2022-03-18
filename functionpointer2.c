//Substraction with function pointer

#include<stdio.h>

int Substraction(int,int);

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
	pointer=Substraction;
	
	iRet=pointer(iNo1,iNo2);
	printf("\nSubstraction is:%d",iRet);
	return 0;
}

int Substraction(int A,int B)
{
	int iAns=0;
	iAns=A -B;
	return iAns;
}