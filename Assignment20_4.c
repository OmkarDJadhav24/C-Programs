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

int SecMaximum(PNODE head)
{  
    int iNo = 0;
    int iMax = 0;
    int iSMax = 0;
    while(head != NULL)
    {
        iNo = head->data;
        if(iNo>iMax)
        {
           iSMax = iMax;
           iMax = iNo;
        }
        if((iNo<iMax) && (iNo>iSMax))
        {
           iSMax = iNo;
        }
        
        head = head->next;
    }
    return iSMax;
}

int main()
{
   PNODE first = NULL;
   int iRet = 0;
   
   InsertFirst(&first,240);
   InsertFirst(&first,320);
   InsertFirst(&first,230);
   InsertFirst(&first,110);
   
   iRet=SecMaximum(first);
   printf("Second maximum elements is : %d\n",iRet);
   
   return 0; 
}
