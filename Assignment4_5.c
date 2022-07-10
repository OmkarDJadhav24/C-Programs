//write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int iAns=0;
    int FactSum=0;
    int NonFactSum=0;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
       if((iNo%iCnt)==0)
       {
          FactSum=FactSum+iCnt;
       }
       else
       {
          NonFactSum=NonFactSum+iCnt;
       }
    }
    
    iAns=NonFactSum-FactSum;
    if(iAns<0)
    {
       iAns = -iAns;
    }
    
    return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
    
    iRet=FactDiff(iValue);
    printf("%d\n",iRet);
    
    return 0;
}
