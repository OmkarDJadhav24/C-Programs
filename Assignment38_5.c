// Write a recursive program which accept one number from user and return its product of digits

#include<stdio.h>

int Mult(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;
    
    if(iNo>0)
    {
       iDigit = iNo%10;;
       iMult = iMult * iDigit;
       
       iNo = iNo/10;
       
       Mult(iNo);
    }
    
    return iMult;
}

int main()
{
    int value = 0;
    int iRet = 0;
    
    printf("Enter number:");
    scanf("%d",&value);
    
    
    iRet=Mult(value);
    printf("Product of digits is: %d\n",iRet);
    
    return 0;
}
