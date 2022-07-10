// Accept string from user and convert it into upper case

#include<stdio.h>

void struprX(char *str)
{
   while(*str != '\0')
   {
      if((*str>='a') && (*str<='z'))
      {
          *str = *str - 32;                //ASCII
      }
      str++;
   }
}

int main()
{
   char Arr[20];
   
   printf("Enter the string:");
   scanf("%[^'\n']s",Arr);
   
   struprX(Arr);
   
   printf("Modified string is: %s\n",Arr);
   
   return 0;
}
