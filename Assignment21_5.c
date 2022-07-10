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

void DisplayLarge(PNODE head)
{
   int iNo = 0;
   int iMax = 0;
   int iChk = 0;
   
   while(head != NULL)
   {
      iNo = 0;
      iMax = 0;
      iChk = 0;
      
      iNo=head->data;
      
      while(iNo>0)
      {
         iMax = iNo%10;
         if(iChk<iMax)
         {
            iChk = iMax;
         }
         iNo = iNo/10;
      }
      printf("Largest digit of element %d  is : %d\n",head->data,iChk);
      
      head = head->next;
   }
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,419);
   InsertFirst(&first,532);
   InsertFirst(&first,250);
   InsertFirst(&first,11);
   
   DisplayLarge(first);
   
   
   return 0; 
}
