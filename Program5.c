#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   int iCount = 0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(iNo==Arr[iCnt])
      {
         iCount++;
      }
   }
   return iCount;
}
int main()
{
   int iSize = 0,iCnt = 0,iNo = 0, iRet = 0;
   int *p = NULL;
   
   printf("ENter number of elements:\n");
   scanf("%d",&iSize);
   
   p=(int *)malloc(iSize * sizeof(int));
   
   if(p==NULL)
   {
      printf("Unable to allocate memory\n");
      return -1;
   }
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       printf("Enter element:%d\n",iCnt+1);
       scanf("%d",&p[iCnt]);
   }
   
   printf("Enter the number\n");
   scanf("%d",&iNo);
   
   iRet=Frequency(p,iSize,iNo);
   printf("Result is:%d\n",iRet);
   
   free(p);
   return 0;
}
