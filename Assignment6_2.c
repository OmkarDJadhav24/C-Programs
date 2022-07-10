#include<stdio.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
   int iDigit = 0;
   BOOL bFlag = false;
   
   if(iNo<0)
   {
      iNo = -iNo;
   }
   
   while(iNo>0)
   {
      iDigit = iNo%10;
      if(iDigit==0)
      {
         bFlag = true;
         break;
      }
      iNo = iNo/10;      
   }
   return bFlag;
}
int main()
{
   int iValue = 0;
   BOOL bRet = false;
   
   printf("Enter number:\n");
   scanf("%d",&iValue);
   
   bRet = ChkZero(iValue);
   if(bRet==true)
   {
      printf("It Contains Zero\n");
   }
   else
   {
      printf("There is no zero\n");
   }
   
   return 0;
}
