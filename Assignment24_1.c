// Accept string from user and count number of capital charatcer

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL CountCapital(char *str)
{
    int iCnt = 0;
    
    if(*str == '\0')
    {
        return iCnt;
    }
    
    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCapital(Arr);
    printf("%d\n",iRet);
    
    return 0;
}
