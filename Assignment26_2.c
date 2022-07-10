//Accept string and one character and count the frequency of that character


#include<stdio.h>

int CountChar(char *str,char ch)
{
   int iCnt = 0;
   
   while(*str != '\0')
   {
       if(*str == ch)
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
   char cValue='m';
   int iRet = 0;
   
   printf("Enter the string: ");
   scanf("%[^'\n']s",Arr);
   
   iRet = CountChar(Arr,cValue);
   printf("Count of Character is:%d\n",iRet);
   
   return 0;
}
