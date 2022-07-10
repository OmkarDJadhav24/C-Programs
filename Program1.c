#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
   int iCnt = 0;
   int EvenCnt = 0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if((Arr[iCnt]%2)==0)
      {
         EvenCnt++;
      }
   }
   return EvenCnt;
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
   
   iRet=CountEven(ptr,iSize);
   printf("Result is:%d\n",iRet);
   
   free(ptr);
   
   return 0;
}
