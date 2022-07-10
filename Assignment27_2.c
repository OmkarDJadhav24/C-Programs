// Accept string from user and copy the contents of that string into the another string.

#include<stdio.h>

void StrCpyX(char *src,char *dest,int iPos)
{
    int iCnt = 1;
    while(*src != '\0'  &&  iCnt<=iPos)
    {
        *dest = *src;
        dest++;
        src++;
        iCnt++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);
    
    
    StrCpyX(Arr,Brr,10);
    
    printf("%s\n",Brr);
    
    return 0;
}
