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

void DisplayPerfect(PNODE head)
{
    int iNo = 0;
   
    while(head != NULL)
    {
       int iCnt = 0;
       int iSum = 0;
       iNo = head->data;
       for(iCnt=1;iCnt<=(iNo/2);iCnt++)
       {
           if((iNo%iCnt)==0)
           {
               iSum = iSum + iCnt;
           }
       }
       if(iNo == iSum)
       {
          printf("%d is a perfect number\n",iNo);
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
   InsertFirst(&first,41);
   InsertFirst(&first,17);
   InsertFirst(&first,28);
   InsertFirst(&first,11);
   
   DisplayPerfect(first);
   
   return 0; 
}
