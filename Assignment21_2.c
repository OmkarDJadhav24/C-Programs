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

void Display(PNODE head)
{
   int iNo = 0;
   int iSum = 0;
   int iRev = 0;
   while(head != NULL)
   {
      iNo = 0;
      iSum = 0;
      iRev = 0;
      iNo=head->data;
      
      while(iNo>0)
      {
         iRev = iNo%10;
         iSum = iSum*10 + iRev;
         iNo = iNo/10;
      }
      if(iSum == head->data)
      {
          printf("%d is a palindrome number\n",head->data);
      }
      head = head->next;
   }
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,89);
   InsertFirst(&first,6);
   InsertFirst(&first,414);
   InsertFirst(&first,17);
   InsertFirst(&first,28);
   InsertFirst(&first,11);
   
   Display(first);
   
   
   return 0; 
}
