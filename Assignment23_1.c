// Display ASCII Table

#include<stdio.h>
#include<string.h>

void DisplayASCII()
{
   int iCnt = 0;
   char ch = '\0';
   for(iCnt=0;iCnt<=127;iCnt++)
   {
       printf("%d\t",iCnt);
       printf("%x\t",iCnt);
       printf("%o\t",iCnt);
       printf("%c\t\n",iCnt);
   }
}

int main()
{
   DisplayASCII();
   
   return 0;
}
