#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

#define pragma pack(1)

typedef struct Student
{
    char StudentName[50];   
    char StudentAddress[40];  
    int StudentRollNumber;
    int StudentMarks;
    unsigned long long StudentPhoneNumber;
    struct Student *next;   //self Refrential  Structure
}SOBJ,*PSOBJ;

class StudentManagement
{
     //Characteristices
    public:
        PSOBJ Head;
        StudentManagement();

     //Behaviour
     void StudentAdd(char*,int,int,char*,unsigned long long);
     void SearchStudentByMarks(int iMarks);
     void SearchStudentByRollNumber(int iRollNo);
     void SearchStudentByName(char[100]);
     void StudentDelete(int iRollNo);
     void DisplayAll();
};

StudentManagement::StudentManagement()
{
    Head=NULL;
}

void StudentManagement::StudentAdd(char cName[100],int iRollNo,int iMarks, char cAddress[40],unsigned long long iPhnNo ) 
{
    PSOBJ newn=NULL;                      //(struct node *newn) 
    newn=(PSOBJ)malloc(sizeof(SOBJ));    //74 Byte
  
    newn->StudentRollNumber=iRollNo;
    newn->StudentMarks=iMarks;
    strcpy(newn->StudentName,cName);   //String-Directly Initialised Karta Yet Nahi
    strcpy(newn->StudentAddress,cAddress);
    newn->StudentPhoneNumber=iPhnNo;
    newn->next=NULL;

    if(Head==NULL)  //Atleast one name
    {
        Head=newn; 
    }
    else     //One Or more Node
    {
        newn->next=Head;
        Head=newn;
    } 
}
/////////////////////////////////////////////////////////////////////////////////////////////////

void StudentManagement::SearchStudentByName(char *cName)
{
    PSOBJ temp=Head;

    while(temp!=NULL)
    {
        if(strcmp(temp->StudentName,cName)==0)  //if(temp->studentname==cname) String comapare
        {
            break;
        }
        temp=temp->next;
    }

    if(temp==NULL) 
    {
        printf("name is Not Found:\n");
    }
    else
    {
        printf("Student Name is:%s\n",temp->StudentName);
        printf("Student RollNumber is:%d\n",temp->StudentRollNumber);
        printf("Student Marks is:%d\n",temp->StudentMarks);
        printf("Student Address is:%s\n",temp->StudentAddress);  
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////

void StudentManagement::SearchStudentByMarks(int iMarks)
{
    PSOBJ temp=Head;
    if(temp->StudentMarks!=iMarks)
    {
        printf("Marks is Not Available:\n");
        return;
    }
  
    while(temp!=NULL)
    { 
        if(temp->StudentMarks==iMarks)
        {
            printf("Student RollNumber is:%d\n",temp->StudentRollNumber);
            printf("Student Name is:%s\n",temp->StudentName);
            printf("Student Marks is:%d\n",temp->StudentMarks);
            printf("Student Address is:%s\n",temp->StudentAddress);
            printf("______________________________________________\n");
        }
        temp=temp->next;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////

void StudentManagement::SearchStudentByRollNumber(int iRollNo)
{
    PSOBJ temp=Head;

    while(temp!=NULL)
    {
        if(temp->StudentRollNumber==iRollNo)
        {
            break;
        }
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("Student RollNumber is Not Available:\n");
    }
    else
    {
        printf("Student RollNumber is:%d\n",temp->StudentRollNumber);
        printf("Student Name is:%s\n",temp->StudentName);
        printf("Student Marks is:%d\n",temp->StudentMarks);
        printf("Student Address is:%s\n",temp->StudentAddress);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////

void StudentManagement::StudentDelete(int iRollNo)  //struct student **Head
{
    PSOBJ temp1=Head;
    PSOBJ temp2=Head;  
  
    while(temp1!=NULL)
    {
        if(temp1->StudentRollNumber==iRollNo)  //Nested If-else
        {
            if(temp1==temp2)
            {
                Head=(Head)->next;   //delete First
                free(temp1); 
            }     
            else
            {
                temp2->next=temp1->next;   //delete middle,last node
                free(temp1);
            }
        }
        temp2=temp1;  //temp2=100
        temp1=temp1->next;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void StudentManagement::DisplayAll()  //(struct student *head)
{
    PSOBJ temp=Head;

    if(Head==NULL)
    {
        printf("Student Information is Not Available:\n");
    }

    printf("Display Student Record:\n");

    while(temp!=NULL)
    {
        printf("Name:%s\n",temp->StudentName);
        printf("RollNo:%d\n",temp->StudentRollNumber);
        printf("Marks:%d\n",temp->StudentMarks);
        printf("PhoneNo :%llu\n",temp->StudentPhoneNumber);
        printf("Address:%s\n",temp->StudentAddress);
        printf("_______________________________________\n");
        temp=temp->next;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    StudentManagement obj;

    int iChoice=0;
    char cName[40];
    char cAddress[50];
    int iMarks=0,iRollNo=0;
    unsigned long long iPhnNo=0;

    printf("Welcome to Application Student Management System--------:\n");

    while(1)  //    Infinte Loop
    {
              
              printf("\n______________________________________________________\n");
              printf("case 1:StudentAdd:\n");
              printf("case 2:Search Student RollNumber:\n");
              printf("case 3:Search Student Marks:\n");
              printf("case 4:Search Student Name:\n");
              printf("case 5:Student Delete:\n");
              printf("case 6:Display All Student Record:\n");
              printf("case 7:To Terminated Student Management System Application:\n");

              printf("Please Enter the Case of Student Information:\n");
              scanf("%d",&iChoice);

              switch(iChoice)
              {
                  case 1:

                       printf("Please Enter the Student Name:\n");
                       scanf(" %[^'\n']s",cName);
                       
                       printf("Please Enter the Student RollNumber:\n");
                       scanf("%d",&iRollNo);

                       printf("Please Enter the Student Marks:\n");
                       scanf("%d",&iMarks);

                       printf("Please Enter the Student Address:\n");
                       scanf("%s",&cAddress);

                       printf("Please Enter the Student Phone Number:\n");
                       scanf("%llu",&iPhnNo);

                       obj.StudentAdd(cName,iRollNo,iMarks,cAddress,iPhnNo);
                       obj.DisplayAll();
                       break;

                case 2:
                       printf("Please Enter the Student RollNumber:\n");
                       scanf("%d",&iRollNo);

                       obj.SearchStudentByRollNumber(iRollNo);
                       break;  
                
                case 3:
                       printf("Please Enter the Student Marks:\n");
                       scanf("%d",&iMarks);

                       obj.SearchStudentByMarks(iMarks);
                       break;

                case 4:
                      printf("Please Enter the Student Name:\n");
                      scanf("%s",cName);

                      obj.SearchStudentByName(cName);
                      break;

                case 5:
                      printf("Please Enter the Student Roll Number:\n");
                      scanf("%d",&iRollNo);

                      obj.StudentDelete(iRollNo);  
                      break;    

                case 6:
                       obj.DisplayAll();
                       break;

                case 7:
                      printf("Thank You for using Our Application:\n");  //Loop Stop
                      return 0;

                default:
                      printf("Invalid Student Information Case:\n");            
              }
              printf("__________________________________________________\n");
    }
    return 0;
}

