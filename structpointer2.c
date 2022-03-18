#include<stdio.h>
struct Demo
{
   int iNo;
   float fValue;
   int iValue;
};

int main()
{
	struct Demo obj;
	
	struct Demo *p=NULL;
	p=&obj;
	
	p->iNo=11;
	p->fValue=10.11;
	p->iValue=21;
	
	printf("\nValue of ivalue using arow symbol %d",p->iValue);
	printf("\nValue of ivalue using dot symbol %d",obj.iValue);

	
	return 0;
}