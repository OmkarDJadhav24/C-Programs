// write a recursive program which accept string from user and count number of characters in it.
// Input : Hello
// Output : 5


#include<stdio.h>

int StrlenX(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
       iCnt++;
       str++;
       StrlenX(str);
    }
    
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter string:");
    scanf("%s",arr);
    
    iRet=StrlenX(arr);
    printf("Number of characters are: %d\n",iRet);
    
    return 0;
}
