// Accept string from user and convert it into lower case

#include<stdio.h>

void strlwrX(char *str)
{
   while(*str != '\0')
   {
      if((*str>='A') && (*str<='Z'))
      {
          *str = *str + 32;                //ASCII
      }
      str++;
   }
}

int main()
{
   char Arr[20];
   
   printf("Enter the string:");
   scanf("%[^'\n']s",Arr);
   
   strlwrX(Arr);
   
   printf("Modified string is: %s\n",Arr);
   
   return 0;
}
