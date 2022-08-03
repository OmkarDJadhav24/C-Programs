// Write a program for addtion of digits of elements of Linked List.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
     PNODE newn = NULL;
     newn = (PNODE)malloc(sizeof(NODE));
     newn->Data = iNo;
     newn->next = NULL;
     
     if(*Head == NULL)
     {
         *Head = newn;
     }
     else
     {
         newn->next = *Head;
         *Head = newn;
     }
}

void LLDisplay(PNODE Head)
{
     PNODE Temp = NULL;
     Temp = Head;
     while(Temp != NULL)
     {
         printf("|%d|=>",Temp->Data);
         Temp = Temp->next;
     }
     printf("NULL\n");
}

void LLDigitAddition(PNODE Head)
{
     int iDigit = 0,iNo=0,iSum=0;
     PNODE Temp = Head;
     while(Temp != NULL)
     {
         iNo = Temp->Data;
         while(iNo>0)
         {
             iSum = iSum + (iNo%10);
             iNo = iNo/10;
         }
         printf("Addition of digits of number %d \t is %d\t\n",Temp->Data,iSum);
         Temp = Temp->next;
         iSum = 0;
     }
}

int main()
{
     PNODE First = NULL;
     int LLResult = 0;
     
     InsertFirst(&First,496);
     InsertFirst(&First,40);
     InsertFirst(&First,28);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     InsertFirst(&First,6);
     
     LLDisplay(First);
     
     LLDigitAddition(First);
         
     return 0;
}


