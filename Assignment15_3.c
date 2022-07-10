// Input : iRow 5  iCol 5
/*
   Output : 
     a b c d e
     1 2 3 4 5
     a b c d e
     1 2 3 4 5
     a b c d e
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i = 0,j = 0;
   char cValue = 'a';
   
   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
      {
         if((i%2)!=0)
         {
            printf("%c\t",cValue);
            cValue++;
         }
         else
         {
            printf("%d\t",j);
         }
      }
      printf("\n");
      cValue = 'a';
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
