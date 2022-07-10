//Accept one parameter from user and check whether that character is vowel(a,e,i,o,u) or not.

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;

int ChkVowel(char cValue)
{
   if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u')
   {
       return true;
   }
   else
   {
       return false;
   }

}
int main()
{  
   char cValue = '\0';
   BOOL iRet=false;
   
   printf("Enter character:\n");
   scanf("%c",&cValue);
   
   iRet=ChkVowel(cValue);
   
   if(iRet==true)
   {
      printf("It is vowel\n");
   }
   else
   {
      printf("It is not vowel\n");
   }

   return 0;
} 
