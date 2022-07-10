// Accept character from user and check whether it is small case or not

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
   BOOL iCnt = 0;
   if((ch>='a') && (ch<='z'))
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
   
   bRet = ChkSmall(cValue);
   
   if(bRet==True)
   {
       printf("It is Small Case Character\n");
   }
   else
   {
       printf("It is not a Small Case Character\n");
   }
   
   return 0;
}
