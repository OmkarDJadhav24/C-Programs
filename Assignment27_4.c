// Accept string from user and copy the small characters from that string into the another string

#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src>='a') && (*src<='z'))
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
   
   StrCpySmall(Arr,Brr);

   printf("%s\n",Brr);

   return 0;
}
