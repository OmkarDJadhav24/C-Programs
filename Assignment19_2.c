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

int SearchLastOcc(PNODE head,int no)
{
   int iPos = 0;
   int iCnt = 0;
   while(head != NULL)
   { 
      iCnt++;
      if((head->data) == no)
      {
         iPos = iCnt;
      }
      head = head->next;
   }
   
   return iPos;
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,70);
   InsertFirst(&first,30);
   InsertFirst(&first,50);
   InsertFirst(&first,40);
   InsertFirst(&first,30);
   InsertFirst(&first,20);
   InsertFirst(&first,10);
   
   iRet=SearchLastOcc(first,30);
   
   if(iRet>0)
   {
      printf("Element is at position : %d\n",iRet);
   }
   else
   {
      printf("Element is not present in Linked List\n");
   }
   
   return 0; 
}
