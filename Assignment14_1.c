//Input : iRow 4   iCol 4
/* Output :  
   A B C D
   A B C D
   A B C D
   A B C D
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   char cValue = 'A';
   int i = 0,j = 0;
   
   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
      {
         printf("%c\t",cValue);
         cValue++;
      }
      printf("\n");
      cValue = 'A';
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
