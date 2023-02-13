#include<iostream>
using namespace std;

struct node
{
    int iNo;
    struct node *next;
};
typedef node NODE;    
typedef node *PNODE;

class Queue
{
    //Characteristices
    public:
        PNODE Head;
        int Count;
        Queue();

    //Behaviour
        bool IsQueueEmpty();
        void EnQueue(int iData);     
        int DeQueue();
        void Display();
};

Queue::Queue()
{
    Head=NULL;
    Count=0;
}

////////////////////////////////////////////////////////////////////////////////////////////

bool Queue::IsQueueEmpty()
{
    if(Count==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////

void Queue::EnQueue(int iData)
{
    PNODE newn=0;
    newn=new NODE;
    PNODE temp=Head;

    newn->iNo=iData;
    newn->next=NULL;

    if(Head==NULL)
    {
        Head=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    Count++;
}

///////////////////////////////////////////////////////////////////////////////////////////

int Queue::DeQueue()
{
    PNODE temp=Head;
    if(Head==NULL)
    {
        return -1;
    }
    else
    {
        int Value=Head->iNo;
        Head=Head->next;

        delete temp;
        Count--;

        return Value;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////

void Queue::Display()
{
    PNODE temp=Head;
    
    if(Head==NULL)
    {
        cout<<"Queue is Empty:"<<endl;
        return;
    }
    else
    {
        cout<<"Elements of Queue are:"<<endl;
        while(temp!=NULL)
        {
            cout<<"|"<<temp->iNo<<"|->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Queue obj;
    int iChoice=0,iNo=0,iRet=0;
    
    while(1)     //Infinite Hearing Loop 
    {
            printf("\nImplementation Of Queue Using Linked List:\n");

            printf("1.Enqueue:\n");
            printf("2.Dequeue:\n");
            printf("3:Exit:\n");  

            printf("\nEnter Your Choice:");
            scanf("%d",&iChoice);

            switch(iChoice)
            {
                case 1:
                    printf("\nEnter the Value Insert:");
                    scanf("%d",&iNo);

                    obj.EnQueue(iNo);
                    obj.Display();
                    break;

                case 2:
                    iRet=obj.DeQueue();
                   
                    if(iRet==-1)
                    {
                        printf("Queue is Empty:\n");
                    }
                    else
                    {
                        printf("Dequeue Element is:%d\n",iRet);
                    }
                    obj.Display();
                    break;

                case 3:
                    printf("Thank You for Using Our Application:\n");
                    return 0;

                default:
                    printf("Wrong Choice:\n");            
            }  //Switch case End

    }//While loop end
    return 0;
  
}