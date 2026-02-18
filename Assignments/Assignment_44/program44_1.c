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

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        temp = temp->next;
        free(*first);
        *first = temp;
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    
    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
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

void DeleteAtPos(PPNODE first, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    PNODE tnode = NULL;
    int iSize = Count(*first);
    int iCnt = 0;

    if((iPos < 0) || (iPos > iSize))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        tnode = temp->next;
        temp->next = temp->next->next;
        free(tnode);
    }
}

bool Search(PNODE first, int no)
{
    while(first != NULL)
    {
        if(first->data == no)
        {
            return true;
        }
        first = first->next;
    }
    return false;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;
    int iNo = 0;

  //  printf("\n---------------------------SINGLY LINEAR LINKED LIST-----------------------------\n");

   // printf("-------------------------------------------------------------------------------------");
   // printf("\n@@@ INSERT FIRST @@@\n");
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
   // Display(head);
   // iRet = Count(head);
   // printf("Number of nodes are : %d\n",iRet);

   // printf("--------------------------------------------------------------------------------------");
   // printf("\n@@@ INSERT LAST @@@\n");
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
  //  Display(head);
   // iRet = Count(head);
   // printf("Number of nodes are : %d\n",iRet);

   // printf("--------------------------------------------------------------------------------------");
  //  printf("\n@@@ INSERT AT POSITION @@@\n");
    InsertAtPos(&head,55,4);
   // Display(head);
   // iRet = Count(head);
   // printf("Number of nodes are : %d\n",iRet);

   // printf("--------------------------------------------------------------------------------------");
   // printf("\n@@@ DELETE AT POSITION @@@\n");
    DeleteAtPos(&head,4);
   // Display(head);
   // iRet = Count(head);
   // printf("Number of nodes are : %d\n",iRet);

   // printf("--------------------------------------------------------------------------------------");
   // printf("\n@@@ DELETE FIRST @@@\n");
    DeleteFirst(&head);
   // Display(head);
   // iRet = Count(head);
   // printf("Number of nodes are : %d\n",iRet);

  //  printf("--------------------------------------------------------------------------------------");
   // printf("\n@@@ DELETE LAST @@@\n");
    DeleteLast(&head);
   // Display(head);
   // iRet = Count(head);
   // printf("Number of nodes are : %d\n\n\n",iRet);

    printf("Enter the element that you want to search in the linked list : ");
    scanf("%d",&iNo);

  //  printf("--------------------------------------------------------------------------------------");
   // printf("\n@@@ SEARCH ELEMENT @@@\n");
    bRet = Search(head,iNo);

    if(bRet == true)
    {
        printf("Element is present in the linked list\n");
    }
    else
    {
        printf("Element is not present in the linked list\n");
    }
   // printf("---------------------------------------------------------------------------------------");
   


    
    
    

    return 0;
}