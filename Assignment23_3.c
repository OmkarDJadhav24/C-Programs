// Accept character from user. If character is Capital then print all characters from that number till Z.Or if character is small display all characters in reverse order 

#include<stdio.h>

void Display(char ch)
{
    if((ch>=65) && (ch<=90))
    {
        while(ch<=90)
        {
           printf("%c ",ch);
           ch++;
        }
    }
    else if((ch>=97) && (ch<=122))
    {
        while(ch>=97)
        {
           printf("%c ",ch);
           ch--;
        }
    }
    
    printf("\n");
}
int main()
{
    char cValue = '\0';
    
    printf("Enter the character: ");
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return 0;
}
