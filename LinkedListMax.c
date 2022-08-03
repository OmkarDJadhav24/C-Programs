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

int LLMaximum(PNODE Head)
{
     if(Head == NULL)
     {
         return;
     }
     
     int LLMax = Head->Data;
     PNODE Temp = NULL;
     Temp = Head->next;
     
     while(Temp != NULL)
     {
          if(LLMax<Temp->Data)
          {
              LLMax = Temp->Data;
          }
          Temp = Temp->next;
     }
     
     return LLMax;
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
     
     LLResult = LLMaximum(First);
     printf("Maximum number of Linked List is: %d\n",LLResult);
     
     return 0;
}


