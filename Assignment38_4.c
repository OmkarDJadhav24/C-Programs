// Write a recursive program which accept one number from user and return factorial of that number

#include<stdio.h>

int Fact(int No)
{
    static int iFact = 1;
    static int iCnt = 1;
    
    if(iCnt<=5)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Fact(iCnt);
    }
    
    return iFact;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    
    printf("Enter the number: ");
    scanf("%d",&Value);
    
    
    iRet=Fact(Value);
    printf("Factorial of Number is: %d\n",iRet);
    return 0;
}
