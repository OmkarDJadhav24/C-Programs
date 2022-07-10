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

int Maximum(PNODE head)
{
   int iMax = 0;
   while(head != NULL)
   {
      if(head->data>iMax)
      {
         iMax = head->data;
      }
      head = head->next;
   }
   return iMax;
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,240);
   InsertFirst(&first,320);
   InsertFirst(&first,230);
   InsertFirst(&first,110);
   
   iRet=Maximum(first);
   printf("Maximum number is:%d\n",iRet);
   
   return 0; 
}
