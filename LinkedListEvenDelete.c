// Write a program to delete the even elements of Linked List.

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

void DeleteEven(PPNODE Head)
{
    PNODE Temp = *Head;
    PNODE DTemp = NULL;
    PNODE Previous  = NULL;
    
    if(Temp == NULL)
    {
        return;
    }
    
    if((*Head)->next == NULL)
    {
        if((((*Head)->Data)%2)==0)
        {
            free(*Head);
            *Head = NULL;
            return;
        }
    }
    
    while(Temp != NULL)
    {
        if(((Temp->Data)%2)==0)
        {
            DTemp = Temp;
            if(Previous == NULL)
            {
                Temp = Temp->next;
                free(DTemp);
                *Head = Temp;
            }
            else
            {
               Previous->next = Temp->next;
               free(DTemp);
               Temp = Previous->next;
            }
        }
        else
        {
            Previous = Temp;
            Temp = Temp->next;
        }
        
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,41);
    InsertFirst(&First,20);
    InsertFirst(&First,9);
    InsertFirst(&First,10);
    InsertFirst(&First,21);
    InsertFirst(&First,71);
    InsertFirst(&First,80);
    
    LLDisplay(First); 
     
    DeleteEven(&First);
    
    LLDisplay(First);
    
    return 0;
}
