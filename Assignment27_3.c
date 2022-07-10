// Accept string from user and copy the capital characters from that string into the another string

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src>='A') && (*src<='Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

}
int main()
{
   char Arr[20];
   char Brr[20];
   
   printf("Enter the string:");
   scanf("%[^'\n']s",Arr);
   
   StrCpyCap(Arr,Brr);

   printf("%s\n",Brr);

   return 0;
}
