//Accept one parameter from user and convert case of that character

#include<stdio.h>

void DisplayConvert(char cValue)
{
   if((cValue>='A') && (cValue<='Z'))
   {
        cValue = tolower(cValue);
        printf("%c\n",cValue);     
   }
   else if((cValue>='a') && (cValue<='z'))
   {
        cValue = toupper(cValue);
        printf("%c\n",cValue);
   }
}
int main()
{ 
   char cValue='\0';
   
   printf("Enter character:\n");
   scanf("%c",&cValue);
   
   DisplayConvert(cValue);
   
   return 0;
}
