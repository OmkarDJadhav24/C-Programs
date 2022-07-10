// Accept string from user and copy all capital characters from that string into the another string

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src>='a') && (*src<='z'))
        {
            *dest = *src - 32;
            dest++;
        }
        else
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);
    
    StrCpyCap(Arr,Brr);
    
    printf("%s\n",Brr);
    
    return 0;
}
