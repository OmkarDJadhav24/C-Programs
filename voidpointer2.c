#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	void *p=NULL;
	void *q=NULL;
	p=arr;
	q=&arr[4];
	printf("%d\n",p);
	printf("%d\n",q);
	
	printf("%d\n",(int *)p+1);
	printf("%d\n",(int *)(q-p));
	
	int brr[5]={5,6,7,8,9};
	int *a=NULL;
	int *b=NULL;
	
	a=brr;
	b=&brr[4];
	printf("%d\n",a);
	printf("%d\n",b);
	printf("\nAddition:%d",a+1);
	printf("\nSubstraction:%d",b-a);
	printf("\nSubstraction:%d",b-1);

	return 0;
}