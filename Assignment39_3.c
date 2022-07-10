// Write a recursive program which accept string from user and return count of small characters


#include<stdio.h>

int Small(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
       if((*str>='a') && (*str<='z'))
       {
           printf("h");
           iCnt++;
       }
       str++;
       Small(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the string: \n");
    scanf("%['^'\n]s",Arr);
    
    iRet = Small(Arr);
    printf("Count of Small Characters is: %d\n",iRet);
    
    return 0;
}
