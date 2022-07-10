#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength)
{
   int iCnt = 0;
   int iEvenCnt = 0;
   int iOddCnt = 0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if((Arr[iCnt]%2)==0)
      {
         iEvenCnt++;
      }
      else
      {
         iOddCnt++;
      }
   }
   return iEvenCnt - iOddCnt;
}
int main()
{
   int iSize = 0;
   int iRet = 0;
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
   
   iRet=Frequency(ptr,iSize);
   printf("Result is:%d\n",iRet);
   
   free(ptr);
   
   return 0;
}
