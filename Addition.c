#include<stdio.h>
int Add(int,int);
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	
	printf("\nEnter the second number:");
	scanf("%d",&b);
	
	c=Add(a,b);
	printf("Addition is:%d",c);
	
	return 0;
}

int Add(int a,int b)
{
	int ans=0;
	ans=a+b;
	return ans;
}