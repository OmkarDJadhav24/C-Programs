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

int SumDigit(PNODE head)
{
   int iNo = 0;
   int iSum = 0;
   iNo = head->data;
   
   while(iNo>0)
   {
      iSum = iSum + iNo%10;
      iNo = iNo/10;
   }
   return iSum;
}

int main()
{
   PNODE first = NULL;
   PNODE head = NULL;
   
   int iRet = 0;
   
   InsertFirst(&first,640);
   InsertFirst(&first,240);
   InsertFirst(&first,20);
   InsertFirst(&first,230);
   InsertFirst(&first,110);
   
   head = first;
   
   while(head != NULL)
   {
      iRet = SumDigit(head);
      printf("| %d |=>",iRet);
      
      head = head->next;
   }
   
   
   return 0; 
}
