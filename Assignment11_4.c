//Accept N numbers from user and display all such numbers which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
  int iCnt = 0;
  int iCount = 0;
  int Copy_elem = 0;
  
  printf("Numbers which contains 3 digits are:\n");
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     Copy_elem = Arr[iCnt];
     
     while(Copy_elem>0)
     {
        Copy_elem = Copy_elem/10;
        iCount++;
     }
     if(iCount==3)
     {
        printf("%d\n",Arr[iCnt]);
     }
     iCount = 0;
  }
}
int main()
{
  int iSize = 0;
  int iCnt = 0;
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
  
  Digits(p,iSize);
  
  free(p);
  return 0;
}
