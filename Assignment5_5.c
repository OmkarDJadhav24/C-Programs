#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt=0;
   int iFactSum=0;
   int iNonFact=0;
   
   if(iNo<0)
   {
      iNo = -iNo;
   }
   
   for(iCnt=1;iCnt<iNo;iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         iFactSum=iFactSum+iCnt;
      }
      else if((iNo%iCnt) != 0)
      {
         iNonFact=iNonFact+iCnt;
      }
   }
   
   
   return iFactSum - iNonFact;
     
}
int main()
{
   int iValue=0;
   int iRet=0;
   
   printf("Enter the number:\n");
   scanf("%d",&iValue);
   
   iRet=FactDiff(iValue);
   printf("%d",iRet);
   
   return 0;
}
