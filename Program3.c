#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
   int iCnt = 0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==11)
      {
         break;
      }
   }
   
   if(iCnt == iLength)
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
   BOOL bRet = false;
   int iCnt = 0;
   int *ptr = NULL;
   
   printf("Enter number of elements\n");
   scanf("%d",&iSize);
   
   ptr=(int *)malloc(iSize * sizeof(int));
   
   if(ptr==NULL)
   {
      printf("Unable to allocate the memory\n");
      return -1;
   }
   
   printf("Enter %d elements:\n",iSize);
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       printf("Enter element:%d\n",iCnt+1);
       scanf("%d",&ptr[iCnt]);
   }
   
   bRet=Check(ptr,iSize);
  
   if(bRet == true)
   {
      printf("11 is present\n");
   }
   else
   {
      printf("11 is absent");
   }

   free(ptr);
   
   return 0;
}
