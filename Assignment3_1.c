//Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
   int iCnt=0;
   int iEven=0;
   if(iNo<0)
   {
      return;
   }
   else
   {
      while(iNo>iCnt)
      {
          iEven=iEven+2;
          iCnt++;
          printf("%d\n",iEven);
      }
   }
}
int main()
{
   int iValue=0;
   
   printf("Enter the number:\n");
   scanf("%d",&iValue);
   
   PrintEven(iValue);
   return 0;
}
