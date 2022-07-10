// write a recursive program which accept number from user and display summation of its digits
// Input : 879
// Output : 24


#include<stdio.h>

int Sum(int No)
{
    static int iSum = 0;
    
    if(No>0)
    {
        iSum = iSum + No%10;
        No = No/10;
        Sum(No);
    }
    
    return iSum;
    
}

int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iNo);
    
    iRet=Sum(iNo);
    printf("Summation of digits is: %d\n",iRet);
    
    return 0;
}
