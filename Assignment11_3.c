//Accept N numbers from user and return the difference between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
  int iCnt = 0;
  int iMax = 0;
  int iMin = 0;
  iMin = Arr[0];
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     if(iMax<Arr[iCnt])
     {
        iMax = Arr[iCnt];
     }
     
     if(iMin>Arr[iCnt])
     {
        iMin = Arr[iCnt];
     }
  }
  return iMax - iMin;
}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int iRet = 0;
  int *p = NULL;
  
  printf("Enter the number of elements:\n");
  scanf("%d",&iSize);
  
  p=(int *)malloc(iSize * sizeof(int));
  
  if(p==NULL)
  {
     printf("Unable to allocate the memory\n");
     return -1;
  }
  
  printf("Enter %d elements:\n",iSize);
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     printf("Enter element :%d\n",iCnt+1);
     scanf("%d",&p[iCnt]);
  }
  
  iRet=Difference(p,iSize);
  printf("Difference is:%d\n",iRet);
  
  free(p);
  return 0;
}
