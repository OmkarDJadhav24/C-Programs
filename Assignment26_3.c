//Accept string and one character and display the index of that character


#include<stdio.h>

int FirstChar(char *str,char ch)
{
   int iCnt = 0;
   
   while(*str != '\0')
   {
      if(*str == ch)
      {
         break;
      }
      iCnt++;
      str++;
   }
   return iCnt;
}

int main()
{
   char Arr[20];
   char cValue='m';
   int iRet = 0;
   
   printf("Enter the string: ");
   scanf("%[^'\n']s",Arr);
   
   iRet = FirstChar(Arr,cValue);
   printf("Character location is:%d\n",iRet);
   
   return 0;
}
