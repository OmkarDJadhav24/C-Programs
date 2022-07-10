//Input : iRow 4  iCol 4
/*
   Output 
      2 4 6 8 10
      1 3 5 7 9
      2 4 6 8 10
      1 3 5 7 9
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i = 0;
   int j = 0;
   int iNo1 = 1;
   int iNo2 = 2;
   
   for(i=1;i<=iRow;i++)
   {
      for(j=0;j<=iCol;j++)
      {
         if((i%2)!=0)
         {
            printf("%d\t",iNo2);
            iNo2 = iNo2 +2;
         }
         else
         {
            printf("%d\t",iNo1);
            iNo1 = iNo1 + 2;
         }
      }
      printf("\n");
      iNo1 = 1;
      iNo2 = 2;
   }
}
int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   
   printf("Enter number of rows:\n");
   scanf("%d",&iValue1);
   
   printf("Enter number of columns:\n");
   scanf("%d",&iValue2);
   
   Pattern(iValue1,iValue2);
   
   return 0;
}
