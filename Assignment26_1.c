//Accept one string and one character and check that character is present in string or not.
#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{  
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCnt++;
           break;
        }
        str++;
    }
    
    
    if(iCnt == 1)
    {
        return True;
    }
    else if(iCnt == 0)
    {
        return False;
    }
}

int main()
{
    char Arr[20];
    
    char cValue = 'e';
    
    BOOL bRet = False;
    
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    
    
    bRet=ChkChar(Arr,cValue);
    
    if(bRet == True)
    {
        printf("character found\n");
    }
    else
    {
        printf("character not found\n");
    }
    return 0;
}
