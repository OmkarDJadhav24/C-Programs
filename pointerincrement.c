#include<stdio.h>
int main()
{
   int Arr[5]={10,20,30,40,50};
   int *p=&(Arr[0]);
   int *q=&(Arr[4]);
   
   printf("Values before increment:%d",p);
   p++;
   printf("Value after increment:%d",p);
   return 0;
}