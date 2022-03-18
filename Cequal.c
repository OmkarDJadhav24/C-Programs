// To check Both Values are Equal or Not

#include<stdio.h>
int main()
{
	int A=0;
	int B=0;
	printf("\n Enter the value of A:");
	scanf("%d",&A);
	
	printf("\n Enter the value of B:");
	scanf("%d",&B);
	
	if(A==B)
	{
		printf("A is equal to B");
	}
	else if(A>B)
	{
		printf("A is greater than B");
	}
	else
	{
		printf("B is greater than A");
	}
	return 0;
}