#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
   int iCnt = 0;
   int iMax = 0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(iMax<Arr[iCnt])
      {
         iMax = Arr[iCnt];
      }
   }
   return iMax;
}
int main()
{
   int iSize = 0;
   int iCnt = 0;
   int iRet = 0;
   int *p = NULL;
   
   printf("Enter the number of elements:\n");
   scanf("%d",&iSize);
   
   p=(int *)malloc(iSize * sizeof(int));
   
   if(p==NULL)
   {
      printf("Unable to allocate the memory");
      return -1;
   }
   
   printf("Enter %d elements:\n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      printf("Enter element:%d\n",iCnt+1);
      scanf("%d",&p[iCnt]);
   }
   
   iRet = Maximum(p,iSize);
   printf("Largest number is:%d\n",iRet);
   
   free(p);
   
   return 0;
}
