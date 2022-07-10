//Accept number from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
   int iCnt = 0;
   int Copy_elem = 0;
   int iDigit = 0;
   int iAns = 0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      Copy_elem = Arr[iCnt];
      while(Copy_elem>0)
      {
         iDigit = Copy_elem % 10;
         iAns = iAns + iDigit;
         Copy_elem = Copy_elem/10;
      }
      printf("Sum of digits of %d is %d\n",Arr[iCnt],iAns);
      iAns = 0;
   }
}
int main()
{
   int iSize = 0;
   int iCnt = 0;
   int *p = NULL;
   
   printf("Enter number of elements:\n");
   scanf("%d",&iSize);
   
   p=(int *)malloc(iSize * sizeof(int));
   
   if(p==NULL)
   {
      printf("Unable to allocate the memory\n");
      return -1;
   } 
   
   printf("Enter %d elements:\n",iSize);
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      printf("Enter element:%d\n",iCnt+1);
      scanf("%d",&p[iCnt]);
   }
   
   DigitsSum(p,iSize);
   
   free(p);
   return 0;
}
