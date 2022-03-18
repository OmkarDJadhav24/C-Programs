#include<stdio.h>
void swap(int *,int *);

int main()
{
	int a=0;
	int b=0;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	
	printf("\nEnter the second number:");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("\nAfter swapping the values are:%d %d",a,b);
	
	return 0;
}

void swap(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}