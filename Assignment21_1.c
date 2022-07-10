#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int BOOL;

struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
   PNODE newn = NULL;
   
   newn = (PNODE)malloc(sizeof(NODE));     //malloc(sizeof(12));
   
   newn->data = no;
   newn->next = NULL;
   
   if(*head == NULL)
   {
      *head = newn;
   }
   else
   {
      newn->next = *head;        //200->next = 100;
      *head = newn;
   }
   
}

void Reverse(PNODE head)
{
   while(head->next->next != NULL)
   {
      head = head->next; 
   }
   printf("|%d|=>",head->next->data);
   free(head->next);
   head->next = NULL;
}

int main()
{
   PNODE first = NULL;
   PNODE head = NULL;
   int iRet = 0;
   
   InsertFirst(&first,89);
   InsertFirst(&first,6);
   InsertFirst(&first,41);
   InsertFirst(&first,17);
   InsertFirst(&first,28);
   InsertFirst(&first,11);
   
   head=first;
   while(head != NULL)
   {
      Reverse(head);
   }
   return 0; 
}
