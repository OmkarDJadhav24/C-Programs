// Accept string from user and difference between frequency of small characters and capital characters

#include<stdio.h>

int Difference(char *str)
{
    int iCapCnt = 0;
    int iSmallCnt = 0;
    
    if(*str == '\0')
    {
        return 0;
    }
    
    while(*str != '\0')
    {
         if((*str>='A') && (*str<='Z'))
         {
             iCapCnt++;
         }
         else if ((*str>='a') && (*str<='z'))
         {
             iSmallCnt++;
         }
         str++;
    }
    return iCapCnt - iSmallCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);
    
    iRet = Difference(Arr);
    printf("%d\n",iRet);
    
    return 0;
}
