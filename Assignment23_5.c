// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

#include<stdio.h>

void Display(char ch)
{
    printf("%c\t",ch);
    printf("%d\t",ch);
    printf("%o\t",ch);
    printf("%x\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter character: ");
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return 0;
}
