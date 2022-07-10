// Accept string from user and copy that characters of string into the another string by removing all white spaces
#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
   while(*src != '\0')
   {
       if(*src != ' ')
       {
          *dest = *src;
          dest++;
       }
       src++;
   }
   *dest = '\0';
}

int main()
{
   char Arr[20];
   char Brr[20];
   
   printf("Enter the String:");
   scanf("%[^'\n']s",Arr);
   
   StrCpyX(Arr,Brr);
   
   printf("%s\n",Brr);
   
   return 0;
}
