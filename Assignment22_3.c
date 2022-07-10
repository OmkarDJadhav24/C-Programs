// Accept character from user and check whether it is digit or not

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
   BOOL iCnt = 0;
   if(((ch>='A') && (ch<='Z'))||((ch>='a') && (ch<='z')))
   {
       iCnt++;
   }
  
   if(iCnt==1)
   {
       return False;
   }
   else if(iCnt==0)
   {
       return True;
   }
}

int main()
{
   char cValue = '\0';
   BOOL bRet = False;
   
   printf("Enter the character: ");
   scanf("%c",&cValue);
   
   bRet = ChkDigit(cValue);
   
   if(bRet==True)
   {
       printf("It is Digit\n");
   }
   else
   {
       printf("It is not a Digit\n");
   }
   
   return 0;
}
