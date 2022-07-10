//Input : 5
//Output : A  B  C  D  E

#include<stdio.h>

void Patturn(int iNo)
{
   int iCnt = 0;
   int Cvalue = 'A';
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf("%c\t",Cvalue);
      Cvalue++;
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
