#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   
   for(iCnt=(iLength-1);iCnt>=0;iCnt--)
   {
      if(iNo==Arr[iCnt])
      {
         break;
      }
   }
   return iCnt;
}
int main()
{
   int iSize = 0;
   int iValue = 0;
   int iCnt = 0;
   int iRet = 0;
   int *p = NULL;
   
   printf("Enter the number of elements:\n");
   scanf("%d",&iSize);
   
   printf("Enter the number:\n");
   scanf("%d",&iValue);
   
   p=malloc(iSize * sizeof(int));
   
   if(p==NULL)
   {
      printf("Unable to allocate the memory");
      return -1;
   }
   
   printf("Enter %d numbers:\n",iSize);
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&p[iCnt]);
   }
   
   iRet=LastOcc(p,iSize,iValue);
   
   if(iRet==-1)
   {
      printf("There is no such number");
   }
   else
   {
      printf("Last occurance of number is : %d",iRet);
   }
   
   free(p);
   
   return 0;
}
