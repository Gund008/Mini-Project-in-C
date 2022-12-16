#include<iostream>
using namespace std;

//Class Declaration
class StudentExam_Timetable
{
    public:
    //Characteristics
    int Tdiv;    
    //Constructor
    StudentExam_Timetable();
    //Behaviour
    void DisplaySchedule(char); 
};

StudentExam_Timetable::StudentExam_Timetable()
{
    Tdiv=0;
}

/*
###########################################################################################
##
##  Function Name :DisplaySchedule
##  Input : Character
##  Output : None
##  Description : It is used to DisplaySchedule in Student Exam.
##  Author : Sukanya Hanumant Gund
##  Date :16/12/2022
##
##########################################################################################
*/

//Defination
void StudentExam_Timetable::DisplaySchedule(char cDiv)
{
    
    if((cDiv=='A') || (cDiv=='a'))
    {
        cout<<"Your exam at 7 AM"<<endl;
        cout<<"Your Exam subject:Marathi"<<endl;
        Tdiv++;
    }
    else if((cDiv=='B') || (cDiv=='b'))
    {
        cout<<"Your exam is 8.30 AM"<<endl;
        cout<<"Your Exam subject:Hindi"<<endl;
        Tdiv++;
    }
    else if((cDiv=='C') || (cDiv=='c'))
    {
        cout<<"Your exam is 9.20am"<<endl;
        cout<<"Your Exam subject:English"<<endl;
        Tdiv++;
    }
    else if((cDiv=='D') || (cDiv=='d'))
    {
        cout<<"Your exam is 10.30"<<endl;
        cout<<"Your Exam subject:Geography"<<endl;
        Tdiv++;
    } 
    else if((cDiv=='E') || (cDiv=='e'))
    {
        cout<<"Your exam is 12.30"<<endl;
        cout<<"Your Exam subject:Economics"<<endl;
        Tdiv++;
    } 
    else
    {
        cout<<"Invalid Exam time"<<endl;
    }

}
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue='\0';
  
    StudentExam_Timetable obj;
  
    cout<<"Enter Your division"<<endl;
    cin>>cValue;

    obj.DisplaySchedule(cValue);

    cout<<"Count of Division:"<<obj.Tdiv<<endl;

    return 0;

}