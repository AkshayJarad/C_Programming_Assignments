#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next = NULL;
    }
}

void Display(PNODE first)
{
    printf("Elements of linked list are : \n");

    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCnt = 0;

    while(first != NULL)
    {
        first = first->next;
        iCnt++;
    }
    return iCnt;
}

void InsertAtPos(PPNODE first, int no , int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iSize = Count(*first);
    int iCnt = 0;

    if((iPos < 0) || (iPos > iSize+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,no);
    }
    else if(iPos == iSize+1)
    {
        InsertLast(first,no);
    }
    else
    {
        temp = *first;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}

void ReplaceNegative(PPNODE first)
{
   PNODE temp = *first;

   while(temp != NULL)
   {
        if(temp->data < 0)
        {
            temp->data = 0;
        }
        temp = temp->next;
   }
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head,55);
    InsertFirst(&head,-24);
    InsertFirst(&head,10);
   
    InsertLast(&head,-124);
    InsertLast(&head,12);
    InsertLast(&head,-121);
 
    InsertAtPos(&head,54,4);
    
    Display(head);

    ReplaceNegative(&head);

    Display(head);

    return 0;
}