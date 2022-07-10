// write a recursive program which accept number number from user and display below patturn

// Input : 5
// Output :  5  *  4  *  3  *  2  *  1  *

#include<stdio.h>

void Display(int No)
{   
    if(No>0)
    {
        printf("%d\t*\t",No);
        No--;
        Display(No);
    }
    
}

int main()
{
    int iCnt = 0;
    
    printf("Enter number: ");
    scanf("%d",&iCnt);
    
    Display(iCnt);
    
    return 0;
}
