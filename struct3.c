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
	obj.iNo=11;
	obj.fValue=10.11;
	obj.iValue=21;
	
	printf("\nThe Address of object is:%d",&obj);
	
	return 0;
}