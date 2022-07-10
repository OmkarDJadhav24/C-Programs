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

int Minimum(PNODE head)
{
   int iMin = head->data;
   while(head != NULL)
   {
      if(head->data < iMin)
      {
         iMin = head->data;
      }
      head = head->next;
   }
   return iMin;
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,640);
   InsertFirst(&first,240);
   InsertFirst(&first,20);
   InsertFirst(&first,230);
   InsertFirst(&first,110);
   
   iRet=Minimum(first);
   printf("Minimum number is:%d\n",iRet);
   
   return 0; 
}
