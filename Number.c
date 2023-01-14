#include<stdio.h>
#include<stdbool.h>

bool Perfect(int iValue)
{
    int iCnt=0,iSum=0;
    bool bFlag=false;

    for(iCnt=1;iCnt<=(iValue/2);iCnt++)
    {
        if(iValue % iCnt==0)
        {
            iSum=iSum + iCnt;
        }
    }
    if(iSum==iValue)
    {
        return true;
    }
    else
    {
        return bFlag;
    }    
}
//////////////////////////////////////////////////////////////////////////////////////////////////

int Reverse(int iValue)
{
     int iCnt=0;
     int iDigit=0,iRev=0;

     while(iValue!=0)
     {
        iDigit=iValue % 10;
        iRev=(iRev * 10) + iDigit;
        iValue=iValue / 10;
     }
     return iRev;
}

bool Pallindrome(int iValue)
{
    int iRet=0;
    iRet=Reverse(iValue);
    if(iRet==iValue)
    {
        return true;
    }
    else
    {
        return false;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iCnt=0,iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo % 10;
        iCnt=iCnt + 1;
        iNo=iNo / 10;
    }
    return iCnt;
}

int Power(int iBase,int iIndex)
{
    int iCnt=0;
    int iSum=1;

    for(iCnt=1;iCnt<=iIndex;iCnt++)
    {
       iSum=iSum * iBase;
    }
    return iSum;
}

bool Armstrong(int iValue)
{
    int iTemp=iValue;
    int iDigit=0,iRet=0;
    int iAns=0,iSum=0;

    iRet=Count(iValue);

    while(iValue!=0)
    {
        iDigit=iValue % 10;
        iAns=Power(iDigit,iRet);
        iSum=iSum +  iAns;
        iValue=iValue / 10;
    }
    if(iSum==iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iValue)
{
    int iCnt=0;
    for(iCnt=2;iCnt<=(iValue/2);iCnt++)
    {
        if(iValue % iCnt==0)
        {
            return false;
        }
        return true;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo=0;
    int iChoice=0;
    bool bRet=false;
     
    printf("Welocme to Problems on Number  Application Written by Sukanya:\n");
    while(1)
    {
          printf("----------------------------------------:\n");

          printf("1:Please Display Perfect Number:\n");
          printf("2:Please Display Pallindrome Number:\n");
          printf("3:Please Display Armstrong Number:\n");
          printf("4:Please Display Prime Number:\n");

          printf("Please Select Desired Option:\n");
          scanf("%d",&iChoice);
          
          switch(iChoice)
          {
                case 1:
                    printf("Please Enter The Number:\n");
                    scanf("%d",&iNo);

                    bRet=Perfect(iNo);

                    if(bRet==true)
                    {
                        printf("%d Number is perfect Number:\n",iNo);
                    }
                    else
                    {
                        printf("%d Number is Not Perfect Number:\n",iNo);
                    }
                    break;

                case 2:
                    printf("Please Enter the Number:\n");
                    scanf("%d",&iNo);

                    bRet=Pallindrome(iNo);    

                    if(bRet==true)
                    {
                        printf("%d Number is Pallindrome Number:\n",iNo);
                    }
                    else
                    {
                        printf("%d Number is Not Pallindrome Number:\n",iNo);
                    }
                    break;

                case 3:
                    printf("Please Enter the Number:\n");
                    scanf("%d",&iNo);

                    bRet=Armstrong(iNo);

                    if(bRet==true)
                    {
                        printf("%d is Armstrong Number:\n",iNo);
                    }
                   else
                    {
                        printf("%d is Not Armstrong Number:\n",iNo);
                    }
                    break;

                case 4:
                    printf("Please Enter the Number:\n");
                    scanf("%d",&iNo);

                    bRet=CheckPrime(iNo);    
                    if(bRet==true)
                    {
                        printf("%d Number is Prime Number:\n",iNo);
                    }
                    else
                    {
                        printf("%d Number is Not Prime Number:\n",iNo);
                    }

                case 5:
                    printf("Thank you For using the  Application:\n");
                    break;

                case 6:
                    printf("Invalid Option:\n");      
          }
          printf("________________________________________________\n");
    }   
    return 0;

}