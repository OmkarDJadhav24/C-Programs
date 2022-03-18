// Check character is upper case letter or not

#include<stdio.h>
int main()
{
	char ch='\0';
	
	printf("Enter the character to check upper case letter or not:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("This letter is Upper Case letter");
	}
	else
	{
		printf("This letter is not Upper Case letter");
	}
	return 0;
}