#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(iNo==Arr[iCnt])
      {
         break;
      }
   }
   
   if(iCnt == iLength)
   {
      return -1;
   }
   else
   {
      return iCnt;
   }
}
int main()
{
   int iSize = 0;
   int iValue = 0;
   int iCnt = 0;
   int iRet = 0;
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
   
   iRet = FirstOcc(p,iSize,iValue);
   
   if(iRet==-1)
   {
      printf("There is no such number\n");
   }
   else
   {
      printf("First occurance of number is %d\n",iRet);
   }
   
   free(p);
    
   return 0;
}
