//Input : iRow 4  iCol  4
/*  Output :
    A B C D
    a b c d
    A B C D
    a b c d
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   char cValue1 = 'A';
   char cValue2 = 'a';
   
   int i = 0,j = 0;
   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
      {
         if((i%2)!=0)
         {
            printf("%c\t",cValue2);
            cValue2++;
         }
         else
         {
            printf("%c\t",cValue1);
            cValue1++;
         }
      }
      printf("\n");
      cValue1 = 'A';
      cValue2 = 'a';
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
