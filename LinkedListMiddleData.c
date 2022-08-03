// Write a program to count last occurance of number in Linked List Elements.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
     PNODE newn = NULL;
     newn = (PNODE)malloc(sizeof(NODE));
     newn->Data = iNo;
     newn->next = NULL;
     
     if(*Head == NULL)
     {
         *Head = newn;
     }
     else
     {
         newn->next = *Head;
         *Head = newn;
     }
}

void LLDisplay(PNODE Head)
{
     PNODE Temp = NULL;
     Temp = Head;
     while(Temp != NULL)
     {
         printf("|%d|=>",Temp->Data);
         Temp = Temp->next;
     }
     printf("NULL\n");
}

void LLMiddleNodeData(PNODE Head)
{
     int iCnt = 0,i=0;
     PNODE Temp = Head;
     while(Temp != NULL)
     {
         iCnt++;
         Temp = Temp->next;
     }
     
     for(i=1;i<=(iCnt/2);i++)
     {
         Head = Head->next;
     }
     
     printf("Data of Middle node is : %d\n",Head->Data);
}

int main()
{
     PNODE First = NULL;
     int LLResult = 0;
     
     InsertFirst(&First,21);
     InsertFirst(&First,20);
     InsertFirst(&First,78);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     //InsertFirst(&First,6);
     
     LLDisplay(First);
     
     LLMiddleNodeData(First);
         
     return 0;
}


