// Accept string from user and copy the contents of that string into the another string.

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);
    
    StrCpyX(Arr,Brr);
    
    printf("%s\n",Brr);
    
    return 0;
}
