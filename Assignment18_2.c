// Input : iRow = 4  iCol = 4
/*
   Output : 
     
     *  *  *  #
     *  *  #  @
     *  #  @  @
     #  @  @  @
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i = 0,j = 0;
   
   if(iRow != iCol)
   {
      return;
   }
   
   for(i=1;i<=iRow;i++)
   {
      for(j=iCol;j>=1;j--)
      {
         if(i==j)
         {
            printf("#\t");
         }
         else if(i<j)
         {
            printf("*\t");
         }
         else
         {
            printf("@\t");
         }
      }
      printf("\n");
   }
}
int main()
{
   int iValue1 = 0,iValue2 = 0;
   
   printf("Enter number of rows:\n");
   scanf("%d",&iValue1);
   
   printf("Enter number of column:\n");
   scanf("%d",&iValue2);
   
   Pattern(iValue1,iValue2);
   
   return 0;
}
