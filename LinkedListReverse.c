// Write a program to Reverse the LinkedList.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

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
    while(Head != NULL)
    {
        printf("|%d|=>",Head->Data);
        Head = Head->next;
    }
    printf("NULL\n");
    
}

void LLReverse(PPNODE Head)
{
    PNODE Next = NULL;
    PNODE Current = *Head;
    PNODE Previous = NULL;
    
    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;
    }
    *Head = Previous;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
     
    LLDisplay(First); 
     
    LLReverse(&First);
    
    LLDisplay(First);
    
    return 0;
}
