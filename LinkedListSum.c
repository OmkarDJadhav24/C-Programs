// Write a program for Summation of Linked List Elements.

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

int SumOfLL(PNODE Head)
{
     int LLSum = 0;
     PNODE Temp = NULL;
     Temp = Head;
     
     while(Temp != NULL)
     {
         LLSum = LLSum + Temp->Data;
         Temp = Temp->next;
     }
     
     return LLSum;
}
int main()
{
     PNODE First = NULL;
     int LLResult = 0;
     
     InsertFirst(&First,50);
     InsertFirst(&First,40);
     InsertFirst(&First,30);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     
     LLResult = SumOfLL(First);
     printf("Addition of Linked List Elements is: %d\n",LLResult);
     
     return 0;
}


