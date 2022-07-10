// Accept string from user and check whether it contains vowels in it or not

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL iCnt = 0;
    
    if(*str == '\0')
    {
        return 0;
    }
    
    while(*str != '\0')
    {
        if((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U')|| (*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
        {
             iCnt++;
             break;
        }
        str++;
    }
    if(iCnt == 0)
    {
        return False;
    }
    else if(iCnt == 1)
    {
        return True;
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = False;
    
    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);
    
    bRet = ChkVowel(Arr);
    
    if(bRet == True)
    {
        printf("It contains vowel\n");
    }
    else
    {
        printf("It does not contains vowel\n");
    }
    return 0;
}
