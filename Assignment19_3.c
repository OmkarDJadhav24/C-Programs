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

int Addition(PNODE head,int no)
{
   int iSum = 0;
   while(head != NULL)
   { 
      iSum = iSum + head->data;
      head = head->next;
   }
   
   return iSum;
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,40);
   InsertFirst(&first,30);
   InsertFirst(&first,20);
   InsertFirst(&first,10);
   
   iRet=Addition(first,30);
   printf("Addition is:%d\n",iRet);
   
   return 0; 
}
