#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0


int Check(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char ch='\0';
	int Result=0;
	printf("\nEnter the character:");
	scanf("%c",&ch);
	
	Result=Check(ch);
	printf("%d",Result);
	
	return 0;
}