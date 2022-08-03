// Write a program to count last occurance of number in Linked List Elements.

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

int LLLastOcc(PNODE Head,int iNo)
{
     int iLast = 0,iCnt=0;
     
     while(Head != NULL)
     {
         iCnt++;
         if(iNo == Head->Data)
         {
             iLast = iCnt;
         }
         Head = Head->next;
     }
     
     if(iLast == 0)
     {
         return 0;
     }
     else
     {
         return iLast;
     }
}

int main()
{
     PNODE First = NULL;
     int LLResult = 0;
     
     InsertFirst(&First,21);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     InsertFirst(&First,6);
     
     LLDisplay(First);
     
     LLResult = LLLastOcc(First,10);
     if(LLResult == 0)
     {
         printf("Element is not there in linked list\n");
     }
     else
     {
         printf("Last occurance of number in linked list is : %d\n",LLResult);
     }
     return 0;
}


