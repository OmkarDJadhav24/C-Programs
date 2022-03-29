#include<stdio.h>
#include<ctype.h>

int Check(char s)
{
	if(s>='a' && s<='z')
	{
		s=toupper(s);
		return s;
	}
	else if(s>='A' && s<='Z')
	{
		s=tolower(s);
		return s;
	}
}

int main()
{
	char ch='\0';
	char result='\0';
	printf("\nEnter the character:");
	scanf("%c",&ch);
	
	result=Check(ch);
	printf("%c",result);
	
	
	return 0;
}