// Accept character from user and check whether it is alphabet or not

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
   BOOL iCnt = 0;
   if(((ch>='A') && (ch<='Z'))||((ch>='a') && (ch<='z')))
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
   
   bRet = ChkAlpha(cValue);
   
   if(bRet==True)
   {
       printf("It is Character\n");
   }
   else
   {
       printf("It is not a Character\n");
   }
   
   return 0;
}
