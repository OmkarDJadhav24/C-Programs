#include<stdio.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
   if((iNo%2)==0)
   {
      return true;
   }
   
   else
   {
      return false;
   }
}

int main()
{
   int iValue = 0;
   BOOL iRet=false;
   
   printf("Enter number:\n");
   scanf("%d",&iValue);
   
   iRet=ChkEven(iValue);
   
   if(iRet==true)
   {
      printf("%d is even number\n",iValue);
   }
   
   else
   {
      printf("%d is odd number\n",iValue);
   }
   
   return 0;
}
