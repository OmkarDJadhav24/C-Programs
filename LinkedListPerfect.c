// Write a program to count frequency of number in Linked List Elements.

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

int LLPerfectCount(PNODE Head)
{
     int iCnt = 0,i=0,iNo=0;
     PNODE Temp = Head;
     int iSum = 0;
     
     while(Temp != NULL)
     {
         for(i=1,iNo=Temp->Data;i<=(iNo/2);i++)
         {
             if((iNo%i)==0)
             {
                 iSum = iSum + i;
             }
         }
         if((Temp->Data) == iSum)
         {
             iCnt++;
         }
         iSum = 0;
         Temp = Temp->next;
     }
     return iCnt;
}

int main()
{
     PNODE First = NULL;
     int LLResult = 0;
     
     InsertFirst(&First,496);
     InsertFirst(&First,40);
     InsertFirst(&First,28);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
     InsertFirst(&First,6);
     
     LLDisplay(First);
     
     LLResult = LLPerfectCount(First);
     printf("Perfect numbers in Linked List are : %d\n",LLResult);
     
     return 0;
}


