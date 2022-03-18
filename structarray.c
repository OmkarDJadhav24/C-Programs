#include<stdio.h>
struct Demo
{
   int iNo;
   float fValue;
   int iValue;
};

int main()
{
	struct Demo arr[4];					//object array we have created 4 obj in array format
	
	arr[0].iNo=11;
	arr[0].fValue=10.11;
	arr[0].iValue=21;
	
	arr[1].iNo=51;
	arr[1].fValue=20.11;
	arr[1].iValue=101;
	
	return 0;
}