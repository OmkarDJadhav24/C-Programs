// Write a recursive program which accept number from user and return smallest number

#include<stdio.h>

int Min(int iNo)
{
   int iDigit = 0;
   
   if(iNo<=0)
   {
       iNo = -iNo;
   }
   
   static int iMin = iNo;
   
   if(iNo>0)
   {
      iDigit = iNo%10;
      if(iMin>iDigit)
      {
         iMin = iDigit;
      }
      iNo = iNo/10;
      Min(iNo);
   }
   return iMin;
}

int main()
{
   int iValue = 0;
   int iRet = 0;
   
   printf("Enter the number: \n");
   scanf("%d",&iValue);
   
   iRet = Min(iValue);
   printf("Smallest number is: %d\n",iRet);
   
   return 0;
}
