// Accept one string and reverse it.

#include<stdio.h>

void StrRevX(char *str)
{
   char *start = str;
   char *end = str;
   char Temp = '\0';
   
   while(*end != '\0')
   {
      end++;
   }
   end--;
   while(start<end)
   {
       Temp = *start;
       *start = *end;
       *end = Temp;
       
       start++;
       end--;
   }
}

int main()
{
   char Arr[20];
   
   printf("Enter the string: ");
   scanf("%[^'\n']s",Arr);
   
   StrRevX(Arr);
   
   printf("Modified string:%s\n",Arr);
   
   return 0;
}
