// Accept string from user and Display it in reverse order

#include<stdio.h>

void Reverse(char *str)
{
   char *start = NULL;
   char *end = NULL;
   char Temp = '\0';
   
   start = str;
   end = str;
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
   
   
   /*while(*str != '\0')
   {
       printf("%s")
   }*/
}

int main()
{
   char Arr[20];
   
   printf("Enter the string:");
   scanf("%[^'\n']s",Arr);
   
   Reverse(Arr);
   
   printf("String in Reverse:%s\n",Arr);
   
   return 0;
}
