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

int DisplayPrime(PNODE head)
{
   int iNo = 0;
   int iCnt = 0;
   iNo = head->data;
   for(iCnt=2;iCnt<=(iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         break;
      }
   }
   if(iCnt == (iNo/2)+1)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   PNODE first = NULL;
   PNODE head = NULL;
   int iRet = 0;
   
   InsertFirst(&first,89);
   InsertFirst(&first,22);
   InsertFirst(&first,41);
   InsertFirst(&first,17);
   InsertFirst(&first,20);
   InsertFirst(&first,11);
   
   head = first;
   
   while(head != NULL)
   {
      iRet=DisplayPrime(head);
      if(iRet==true)
      {
         printf("%d is a prime number\n",head->data);
      }
     
      head = head->next;
   }
   
   return 0; 
}
