#include<stdio.h>
#include<stdlib.h>
#define  pragma pack(1)

typedef struct node
{
    int iData;
    struct node *next;
}NODE,*PNODE,**PPNODE;
//typedef struct node NODE; 
//C-Struct Keyword used Compalsaory,c++ is a Optional

//Reciever
void InsertFirst(struct node **Head,int iNo)
{
    struct node *newn=NULL;
    newn=((struct node*)malloc(sizeof(struct node)));  //12byte

    newn->iData=iNo;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(struct node **Head,int iNo)
{
    struct node *newn=NULL;
    struct node *temp=*Head;
    newn=((struct node*)malloc(sizeof(struct node)));  //12byte

    newn->iData=iNo;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(struct node **Head)
{
    struct node *temp=*Head;
    
    if(*Head==NULL)
    {
        printf("Linked list is Empty:\n");
        return;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        *Head=(*Head)->next;
        free(temp);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(struct node **Head)
{
    struct node *temp=*Head;
    if(*Head==NULL)
    {
        printf("Linked list is Empty:\n");
        return;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)   //Douts
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL; 
    }
}
/////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    PNODE temp=Head;
    int iCnt=0;

    while(temp!=NULL)
    {
        iCnt++;
        temp=temp->next;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,int iNo,int iPos)
{
    int iCount=0;
    PNODE temp=*Head;
    int i=0;
    iCount=Count(*Head);
    
    if((iPos<0) || (iPos>(iCount+1)))
    {
        printf("Invalid Postion:\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(Head,iNo);
    }
    else if(iPos==(iCount+1))
    {
        InsertLast(Head,iNo);
    }
    else
    {
        PNODE newn=NULL;
        newn=((PNODE)malloc(sizeof(NODE)));

        newn->iData=iNo;
        newn->next=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }

}
///////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,int iPos)
{
    int iCount=0,i=0;
    PNODE temp1=*Head;
    PNODE temp2=NULL;
    iCount=Count(*Head);

    if((iPos<0) || (iPos>(iCount)))
    {
        printf("Invalid Postion:\n");
        return;
    }
    
    if(iPos==1)
    {
        DeleteFirst(Head);
    }
    else if(iPos==(iCount))
    {
        DeleteLast(Head);
    }
    else
    {
        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    PNODE temp=Head;
    while(temp!=NULL)
    {
        printf(" | %d |->",temp->iData);
        temp=temp->next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////////////////////////////////////////
//Sender
int main()   //User-Interaction-Function(communication)
{
    struct node *First=NULL;

    int iChoice=0,iNo=0,iPos=0,iRet=0;
    int iCount=0;
   
    printf("Welcome to linked list Application:\n");

    while(1)
    {
            printf("1:Insert First Element Of linked list:\n");
            printf("2:Insert Last Element Of linked list:\n");
            printf("3:Delete First Element Of linked list:\n");
            printf("4:Delete Last Element Of linked list:\n");
            printf("5:Element Insert At Any Position of linked list:\n");
            printf("6:Element Delete At Any Position of linked list:\n");
            printf("7:Display All linked List Elements:\n");
            printf("8:Count of Linked List:\n");
            printf("9:To Terminated  the Singly Linear Linked list Application:\n");

            printf("Enter the Choice:\n");
            scanf("%d",&iChoice);

            switch(iChoice)
            {
                case 1:
                    printf("Please Enter Elements:\n");
                    scanf("%d",&iNo);

                    InsertFirst(&First,iNo);
                    Display(First);
                    break;

                case 2:   
                    printf("Please Enter Elements:\n");
                    scanf("%d",&iNo);

                    InsertLast(&First,iNo);
                    Display(First);
                    break;

                case 3:
                    if(First==NULL)
                    {
                        printf("Lined list is Empty:\n");
                        continue;   //Itration Again Start B
                    }
                    DeleteFirst(&First);

                    Display(First);
                    break;

                case 4:
                    if(First==NULL)
                    {
                        printf("Lined list is Empty:\n");
                        continue;
                    }
                    DeleteLast(&First);
                    Display(First);
                    break;

                case 5:
                    iCount=Count(First);
                
                    printf("Please Enter the Position:\n");
                    scanf("%d",&iPos);

                    if((iPos<0)||(iPos>(iCount+1)))
                    {
                        printf("Invalid Position:\n");
                        continue;
                    }
   
                    printf("Please Enter the Elements:\n");
                    scanf("%d",&iNo);

                    InsertAtPos(&First,iNo,iPos);
                    Display(First);
                    break;
                       
                case 6:
                    iCount=Count(First);

                    printf("Please Enter the Position:\n");
                    scanf("%d",&iPos);
                    
                    if((iPos<0)||(iPos>iCount))
                    {
                        printf("Invalid Position:\n");
                        continue;
                    }
                 
                    DeleteAtPos(&First,iPos);
                    Display(First);
                    break;

                case 7:
                    Display(First);
                    break;

                case 8:
                    iRet=Count(First); 
                    printf("Count Of linked list:%d\n",iRet);   
                    break;          

                case 9:
                    printf("Thank You For Using  Our Application:\n");  //Loop Break
                    return 0;

                default:
                    printf("Invalid Case:\n");    

            }  //End With Switch Case()

       } //End With While Loop(break,return 0)

    return 0;
}