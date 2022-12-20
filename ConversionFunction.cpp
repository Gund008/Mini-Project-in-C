#include<iostream>
using namespace std;

//Class Declaration
class Conversion
{
    public:
       int DollerToINR(int);
       double SquareMeter(int);
       double FHtoCs(float);
       double CircleArea(float);
       int KMtoMeter(int);
       double RectArea(float,float);
};

////////////////////////////////////////////////////////////////////////////////////////////
/*
Function name :DollerToINR
Input : Integer
Output : Integer
Description : It is used to Convert Doller to Integer.
Author : Sukanya Hanumant Gund.
Date :16/12/2022
*/

int Conversion:: DollerToINR(int iNo)
{
    int iValue=70;
    int iCnt=0;
    int iDoller=0;

    //1$=700r (10 * 70)
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iDoller=iValue * iCnt;
    } 
    return iDoller;
}

////////////////////////////////////////////////////////////////////////////////////////////
/*
Function name :SquareMeter
Input : Integer
Output : Double
Description : It is used to Conversion of square to meter.
Author : Sukanya Hanumant Gund.
Date :16/12/2022
*/

double Conversion:: SquareMeter(int fRadius)
{
      int iCnt=1;
      float fSquare=0.0929;
      double fSquare1=0.0;


    for(iCnt=1;iCnt<=fRadius;iCnt++)
    {
       fSquare1=fSquare * iCnt;
    }
    return fSquare1;
}
/////////////////////////////////////////////////////////////////////////////////////////////

/*
Function name :FHtoCs
Input : Float
Output : Double
Description : It is used to Conversion of Farenhait to celcious.
Author : Sukanya Hanumant Gund.
Date :16/12/2022
*/

double Conversion::FHtoCs(float fRadius)
{
      double dFah=0.0;
      float iNo=32;
      float iNo1=5;
      float iNo2=9;
    
     dFah=(fRadius - iNo)*(iNo1/iNo2);

     return dFah;
}
///////////////////////////////////////////////////////////////////////////////////////////
/*
Function name :CircleArea
Input : Float
Output : Double
Description : It is used to calculate the Area of Circle.
Author : Sukanya Hanumant Gund.
Date :16/12/2022
*/
double Conversion:: CircleArea(float fRadius)
{
     double dArea=0.0;
     double PI=3.14;
     
     dArea=(PI * fRadius * fRadius);
    
    return dArea;
    
}
///////////////////////////////////////////////////////////////////////////////////////////////
/*
Function name :KMtoMeter
Input : Integer
Output : Integer
Description : It is used to Conversion of Kilometer to Meter.
Author : Sukanya Hanumant Gund.
Date :16/12/2022
*/

int Conversion::KMtoMeter(int iNo)
{
     int iCnt=1;
     int iMeter=1000;
     int iMeter1=0;
    
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
        iMeter1=iMeter * iCnt;
   }
   return iMeter1;
}
//////////////////////////////////////////////////////////////////////////////////////////////
/*
Function name : RectArea
Input : Float,Float
Output : Double
Description : It is used to calculate Area of Reactangle.
Author : Sukanya Hanumant Gund.
Date :16/12/2022
*/

double Conversion::RectArea(float iWidth,float iHeight )
{
    double dArea=0.0;
    dArea=iWidth * iHeight;
    return dArea;
}
/////////////////////////////////////////////////////////////////////////////////////////////

void  Select()
{
    Conversion obj;
    int Choice=0;
    int iNo=0;
  
    cout<<"Please choose the option:"<<endl;
    cout<<"1.DollerToInteger"<<endl;
    cout<<"2.SquareMeter"<<endl;
    cout<<"3.Faharenhait to celciuous"<<endl;
    cout<<"4. Area of Circle"<<endl;
    cout<<"5. Kilometer to meter"<<endl;
    cout<<"6. Area of Reactangle"<<endl;
    cout<<"Please Select below choice:"<<endl;
    cin>>Choice;

    switch(Choice)
    {
        case '1':
        {
            int iNo=0;

            cout<<"Please enter the Number:\n";
            cin>>iNo;

            int iRet=obj.DollerToINR(iNo);
            cout<<"Value in INR:"<<iRet<<endl;
        }
        break;
       
        case '2':
        {
            int iNo=0;

            cout<<"Please enter the  Number:\n";
            cin>>iNo;

            double dRet=obj.SquareMeter(iNo);
            cout<<"squaremeter:"<<dRet<<endl;
        }
        break;

        case '3':
        {
            float iNo=0.0;

            cout<<"Please enter the  Number:\n";
            cin>>iNo;

            double dRet=obj.FHtoCs(iNo);
            cout<<"Faharenhait to celciuous:"<<dRet<<endl;
        }
        break;

        case '4':
        {
            float iNo=0;

            cout<<"Please enter the  Number:\n";
            cin>>iNo;

            double dRet=obj.CircleArea(iNo);
            cout<<"Area of Circle:"<<dRet<<endl;
        }
        break;

        case '5':
        {
            int iNo=0;

            cout<<"Please enter the Number:\n";
            cin>>iNo;

            int iRet=obj.KMtoMeter(iNo);
            cout<<"Kilometer to Meter:"<<iRet<<endl;
        }
        break;

        case '6':
        {
            float iNo1,iNo2=0.0f;
            cout<<"Please enter the First Number:\n";
            cin>>iNo1;

            cout<<"Please enter the Second Number:\n";
            cin>>iNo2;

            double dRet=obj.RectArea(iNo1,iNo2);
            cout<<"Area of ReactAngle:"<<dRet<<endl;
        }
        break;  
    }
}

int main()
{
    Select(); //helper function call
    return 0;
}