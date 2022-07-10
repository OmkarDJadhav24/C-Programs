#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(iNo==Arr[iCnt])
      {
         break;
      }
   }
   if(iCnt==iLength)
   {
      return false;
   }
   else
   {
      return true;
   }
}
int main()
{
   int iSize = 0;
   int iValue = 0;
   int iCnt = 0;
   BOOL bRet = false;
   int *p = NULL;
   
   printf("Enter number of elements:\n");
   scanf("%d",&iSize);
   
   printf("Enter the number:\n");
   scanf("%d",&iValue);
   
   p=(int *)malloc(iSize * sizeof(int));
   
   if(p==NULL)
   {
      printf("Unable to allocate the memory");
      return -1;
   }
   
   printf("Enter %d elements:\n",iSize);
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&p[iCnt]);
   }
   
   bRet = Check(p,iSize,iValue);
   
   if(bRet==true)
   {
      printf("Number is present\n");
   }
   else
   {
      printf("Number is not present\n");
   }
   
   free(p);
   return 0;
}
