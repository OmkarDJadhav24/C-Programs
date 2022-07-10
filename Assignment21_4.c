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

void DisplaySmall(PNODE head)
{
   int iNo = 0;
   int iMin = 0;
   int iChk = 0;
   
   while(head != NULL)
   {
      iNo = 0;
      iMin = 0;
      iChk = head->data;
      
      iNo=head->data;
      
      while(iNo>0)
      {
         iMin = iNo%10;
         if(iChk>iMin)
         {
            iChk = iMin;
         }
         iNo = iNo/10;
      }
      printf("Smallest digit of element %d  is : %d\n",head->data,iChk);
      
      head = head->next;
   }
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,415);
   InsertFirst(&first,532);
   InsertFirst(&first,250);
   InsertFirst(&first,11);
   
   DisplaySmall(first);
   
   
   return 0; 
}
