#include<iostream>
using namespace std;

struct node
{
    int iNo;
    struct node *next;
};
typedef node NODE;    
typedef node *PNODE;

class Stack
{
    //Characteristices
    public:
        PNODE Head;
        int Count;
        Stack();   

    //Behaviour
        bool IsStackEmpty();
        void Push(int iData);     
        int Pop();
        void Display();
};

Stack::Stack()
{
    Head=NULL;
    Count=0;
}

////////////////////////////////////////////////////////////////////////////////////////////

bool Stack::IsStackEmpty()
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

void Stack:: Push(int iData)
{
    PNODE newn=0;
    newn=new NODE;

    newn->iNo=iData;
    newn->next=NULL;

    if(Head==NULL)
    {
        Head=newn;
    }
    else
    {
        newn->next=Head;
        Head=newn;
    }
    Count++;
}

///////////////////////////////////////////////////////////////////////////////////////////

int Stack::Pop()
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

void Stack::Display()
{
    PNODE temp=Head;
    if(Head==NULL)
    {
        cout<<"Stack is empty:"<<endl;
        return;
    }
    else
    {
        cout<<"\nElements of linked list:"<<endl;
        while(temp!=NULL)
        {
            cout<<temp->iNo<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Stack sobj;
    int iChoice=0,iNo=0,iRet=0;
    bool bRet=false;
  

  while(1)
  {
                printf("\nImplementation of Stack Application........\n");

                printf("1:Push\n");
                printf("2:Pop\n");
                printf("3:Exit\n");

                printf("Please Enter the Choice:\n");
                scanf("%d",&iChoice);

               switch(iChoice)
               {
                    case 1:
                        cout<<"Please Enter the Elements of Stack:"<<endl;
                        cin>>iNo;

                        sobj.Push(iNo);
                        
                        sobj.Display();
                        continue;

                    case 2:
                        iRet=sobj.Pop();

                        if(-1==iRet)
                        {
                            cout<<"Stack is Empty:"<<endl;
                        }
                        else
                        {
                            cout<<"Poped Element are:"<<iRet<<endl;
                        }
                        sobj.Display();
                        continue;
        
                   case 3:
                        cout<<"Thank you for using Stack Application:"<<endl;
                        return 0;  

                   default:
                        cout<<"Invalid Case:"<<endl;    
                }
                printf("_____________________________________________________\n");
    }

    return 0;
}

   
    