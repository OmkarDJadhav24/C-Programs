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

int AdditionEven(PNODE head)
{  
    int iNo = 0;
    int iSum = 0;
    while(head != NULL)
    {
        iNo = head->data;
        if((iNo%2)==0)
        {
           iSum = iSum + iNo;
        }
        head = head->next;
    }
    return iSum;
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,41);
   InsertFirst(&first,32);
   InsertFirst(&first,20);
   InsertFirst(&first,11);
   
   iRet=AdditionEven(first);
   printf("Addition of all even elements is : %d\n",iRet);
   
   return 0; 
}
