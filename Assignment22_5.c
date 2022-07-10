// Accept division of student from user and display time of exam

#include<stdio.h>

void DisplaySchedule(char ch)
{
   float iTime = '\0';
   if((ch=='a')||(ch=='A'))
   {
       iTime = 7;
       printf("%f\n",iTime);
   }
   else if((ch=='b')||(ch=='B'))
   {
       iTime = 8.30;
       printf("%f\n",iTime);
   }
   else if((ch=='c')||(ch=='C'))
   {
       iTime = 9.20;
       printf("%f\n",iTime);
   }
   else if((ch=='d')||(ch=='D'))
   {
       iTime = 10.30;
       printf("%f\n",iTime);
   }
}

int main()
{
   char cValue = '\0';
   
   printf("Enter the character: ");
   scanf("%c",&cValue);
   
   DisplaySchedule(cValue);
   
   return 0;
}
