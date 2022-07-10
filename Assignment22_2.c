// Accept character from user and check whether it is capital or not

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
   BOOL iCnt = 0;
   if((ch>='A') && (ch<='Z'))
   {
       iCnt++;
   }
   
   if(iCnt==1)
   {
       return True;
   }
   else if(iCnt==0)
   {
       return False;
   }
}

int main()
{
   char cValue = '\0';
   BOOL bRet = False;
   
   printf("Enter the character: ");
   scanf("%c",&cValue);
   
   bRet = ChkCapital(cValue);
   
   if(bRet==True)
   {
       printf("It is Capital Character\n");
   }
   else
   {
       printf("It is not a Capital Character\n");
   }
   
   return 0;
}
