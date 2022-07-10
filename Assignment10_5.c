#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
   int iCnt = 0;
   int iMult = 1;
   int iCount = 0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]>0)
      {
        if((Arr[iCnt]%2)!= 0)
        {
          iCount++;
          iMult = iMult * Arr[iCnt];
        }
      }
   }
   if(iCount>0)
   {
      return iMult;
   }
   else
   {
      return 0;
   }
}
int main()
{
   int iSize = 0;
   int iCnt = 0;
   int iRet = 0;
   int *p = NULL;
   
   printf("Enter the number of element:\n");
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
      scanf("%d",&p[iCnt]);
   }
   
   iRet=Product(p,iSize);
   printf("Product is:%d\n",iRet);
   
   free(p);
   return 0;
}
