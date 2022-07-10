// Accept two strings from user and concate first string after second string

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
    while(*src != '\0')
    {
       src++;
    }
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
   char Arr[50];
   char Brr[30];
   
   printf("Enter the string:");
   scanf("%[^'\n']s",Arr);
   
   printf("Enter the second string:");
   scanf(" %[^'\n']s",Brr);
   
   StrCatX(Arr,Brr);

   printf("%s\n",Brr);

   return 0;
}
