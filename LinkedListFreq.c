// Write a program to count frequency of number in Linked List Elements.

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

int LLFrequency(PNODE Head,int iNo)
{
     int iFreq = 0;
     PNODE Temp = Head;
     
     while(Temp != NULL)
     {
         if(Temp->Data == iNo)
         {
             iFreq++;
         }
         Temp = Temp->next;
     }
     return iFreq;
}

int main()
{
     PNODE First = NULL;
     int LLResult = 0;
     
     InsertFirst(&First,20);
     InsertFirst(&First,40);
     InsertFirst(&First,30);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     InsertFirst(&First,20);
     
     LLDisplay(First);
     
     LLResult = LLFrequency(First,20);
     printf("Frequency of number in  Linked List is: %d\n",LLResult);
     
     return 0;
}


