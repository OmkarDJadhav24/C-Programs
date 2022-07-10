// Accept Character and display its corresponding small case or capital case letter

#include<stdio.h>

void Display(char ch)
{
    if((ch>='A') && (ch<='Z'))
    {
        ch = ch + 32;                         //ASCII 
    }
    else if((ch>='a') && (ch<='z'))
    {
        ch = ch - 32;
    }
    
    printf("%c\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character:");
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return 0;
}
