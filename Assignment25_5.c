// Accept string from user and count number of white spaces in it

#include<stdio.h>

int CountWhite(char *str)
{
   int iCnt = 0;
   while(*str != '\0')
   {
      if(*str==' ')
      {
         iCnt++;
      }
      str++;
   }
   return iCnt;
}

int main()
{
   char Arr[20];
   int iRet = 0;
   
   printf("Enter the string: ");
   scanf("%[^'\n']s",Arr);
   
   iRet=CountWhite(Arr);
   printf("%d\n",iRet);
   
   return 0;
}
