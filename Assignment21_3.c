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
   
   while(head != NULL)
   {
      iNo = 0;
      iSum = 1;
      
      iNo=head->data;
      
      while(iNo>0)
      {
         if(iSum == 0)
         {
            iSum =1;
         }
         iSum = iSum * iNo%10;
         iNo = iNo/10;
      }
      printf("Addition of digits is : %d\n",iSum);
      
      head = head->next;
   }
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,41);
   InsertFirst(&first,32);
   InsertFirst(&first,20);
   InsertFirst(&first,11);
   
   Display(first);
   
   
   return 0; 
}
