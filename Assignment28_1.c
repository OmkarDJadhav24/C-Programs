// Accept string from user and and copy that characters of string into the another string in reverse order

#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
    int iCnt = 0;
    int i = 0;
    
    while(*src != '\0')
    {
       iCnt++;
       src++;
    }
    src--;
    for(i=1;i<=iCnt;i++)
    {
        *dest = *src;
        src--;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);
    
    StrCpyRev(Arr,Brr);
    
    printf("%s\n",Brr);
    
    return 0;
}
