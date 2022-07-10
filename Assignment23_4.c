//Accept character from user and check whether it is a special sysmbol or not

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL iCnt = 0;
    
    if(((ch>=33) && (ch<=47)) || (ch==64))
    {
        iCnt++;
    }
    
    if(iCnt == 1)
    {
        return True;
    }
    else if(iCnt==0)
    {
        return False;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;
    
    printf("Enter character: ");
    scanf("%c",&cValue);
    
    bRet=ChkSpecial(cValue);
    
    if(bRet==True)
    {
        printf("It is a special Character\n");
    }
    else if(bRet==False)
    {
        printf("It is not a special character\n");
    }
    
    return 0;
}
