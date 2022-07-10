//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>

void Patturn(int iNo)
{
   int iCnt = 0;
   int iVal = 0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      iVal = iVal +2;
      printf("%d\t",iVal);
   }
}
int main()
{
   int iValue = 0;
   
   printf("Enter number of elements:\n");
   scanf("%d",&iValue);
   
   Patturn(iValue);
   
   return 0;
}
