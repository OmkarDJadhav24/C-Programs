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
	
	printf("\nThe Address of object is:%d",&obj);
	printf("\nThe Address of object is:%d",p);

	
	return 0;
}