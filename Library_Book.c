#include<stdio.h>

struct Library
{
    int iLNo;
    char iLName[44];
    float fAvr;
    int iEnglish;
    int iHindi;
    int iChemistry;
    int iHistory;
    int iMath;
};
/////////////////////////////////////////////////////////////////////////////////////////////

float Average(int Eng,int Hindi,int Chem,int His,int Math)
{
    float fAverage=0.0;
    fAverage=(Eng + Hindi + Chem + His +Math)/5;
    return fAverage;
}

//////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo=0;
    int iCnt=0;
    float fAvr=0.0;
    struct Library L[iNo];
    printf("Number of Library:\n");
    scanf("%d",&iNo);

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Enter the Library number:\n");
        scanf("%d",&(L[iCnt].iLNo));

        printf("Enter the Name:\n");
        scanf("%s",&(L[iCnt].iLName));

        printf("Enter the  Books of English:\n");
        scanf("%d",&(L[iCnt].iEnglish));

        printf("Enter the  Books of Hindi:\n");
        scanf("%d",&(L[iCnt].iHindi));

        printf("Enter the  Books of Chemistry:\n");
        scanf("%d",&(L[iCnt].iChemistry));

        printf("Enter the  Books of History:\n");
        scanf("%d",&(L[iCnt].iHistory));

        printf("Enter the  Books of Math:\n");
        scanf("%d",&(L[iCnt].iMath));
    }
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

        printf("iLNo:%d\n",L[iCnt].iLNo);
        
        printf("iLName:%s\n",L[iCnt].iLName);
        
        printf("Books of English:%d\n",L[iCnt].iEnglish);
        
        printf("Books of Hindi:%d\n",L[iCnt].iHindi);

        printf("Books of Chemistry:%d\n",L[iCnt].iChemistry);

        printf("Books of History :%d\n",L[iCnt].iHistory);

        printf("Books of Math:%d\n",L[iCnt].iMath);
        
        L[iCnt].fAvr=Average(L[iCnt].iEnglish,L[iCnt].iHindi,L[iCnt].iChemistry,L[iCnt].iHistory,L[iCnt].iMath);
        printf("Average of Library are:%f\n",L[iCnt].fAvr);


    if(L[iCnt].fAvr>=40 && L[iCnt].fAvr<60)
    {
        printf("less Books:Available in Library");
    }
    else if(L[iCnt].fAvr>=60 && L[iCnt].fAvr<90)
    {
       printf("Minimum Books:Available in Library");
    }
    else if(L[iCnt].fAvr>=90 && L[iCnt].fAvr<100)
    {
       printf("Maximum Books:Available in Library");
    }
    else
    {
        printf("Books Not:Available in Library");
    }
}
    return 0;
}

