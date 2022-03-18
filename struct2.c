//Second way to initialize the variables value

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
	struct Demo obj2={11,10.11,21};				////Second way to initialize the variables value
	obj.iNo=11;
	obj.fValue=10.11;
	obj.iValue=21;
	
	printf("%d\n",obj.iNo);
	printf("%f\n",obj2.fValue);
	printf("%d\n",obj.iValue);
	printf("Size of obj is:%d",sizeof(obj));
	return 0;
}