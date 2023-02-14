#include<stdio.h>
#include<stdbool.h>

#define SANDWITCH 70
#define PIZZA 100
#define RICE 95
#define PAROTTA  15
#define NOODLES 60
#define CHICKENRICE 80
#define CHICKENBIRYANI 90
#define HOTCOFFEE 120
#define PANEERSANDWITCH 30
#define BURGER 50
#define PAVBHAJI 30
#define COLDCOFFE 60

void SelectSandwitch(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=SANDWITCH * iOrder;

    *iTotal=iRet + *iTotal;
   
}

/////////////////////////////////////////////////////////////////////////////////////

void SelectPizza(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=PIZZA * iOrder ;

    *iTotal=iRet + *iTotal;
}

/////////////////////////////////////////////////////////////////////////////////////

void SelectRice(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=RICE * iOrder;

    *iTotal=iRet + *iTotal;

}

////////////////////////////////////////////////////////////////////////////////////

void SelectParotta(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=PAROTTA * iOrder;

    *iTotal=iRet + *iTotal;
}

////////////////////////////////////////////////////////////////////////////////////

void SelectNoodles(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=NOODLES * iOrder;

    *iTotal=iRet + *iTotal;
}

////////////////////////////////////////////////////////////////////////////////////

void SelectChickenRice(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=CHICKENRICE * iOrder;

    *iTotal=iRet + *iTotal;

}

/////////////////////////////////////////////////////////////////////////////////////

void SelectChickenBiryani(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=CHICKENBIRYANI * iOrder;

    *iTotal=iRet + *iTotal;
}

/////////////////////////////////////////////////////////////////////////////////////

void SelectPaneerSandwitch(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=HOTCOFFEE * iOrder;

    *iTotal=iRet + *iTotal;

}

/////////////////////////////////////////////////////////////////////////////////////

void SelectHotCoffee(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=PANEERSANDWITCH * iOrder;

    *iTotal=iRet + *iTotal;

}

/////////////////////////////////////////////////////////////////////////////////////

void SelectBurger(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=BURGER * iOrder;

    *iTotal=iRet + *iTotal;

}

/////////////////////////////////////////////////////////////////////////////////////

void SelectPavbhaji(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=PAVBHAJI * iOrder;

    *iTotal=iRet + *iTotal;

}

//////////////////////////////////////////////////////////////////////////////////////

void SelectColdCoffee(int iOrder,int *iTotal)
{
    int iRet=0;

    iRet=COLDCOFFE * iOrder;

    *iTotal=iRet + *iTotal;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Client Based Function
int main()
{
    int iChoice=0;
    int iTotal=0;
    int iOrder=0;
    bool bFlag=true;
    char cValue='\0';
 
  
    printf("\nYou Have Most Welcome Our Sai Hotel................\n");


    while(bFlag)
    {
                printf("\nMENU CARD\n");
                printf(" 1:Sandwich\n");
                printf(" 2:Pizza\n");
                printf(" 3:Rice\n");
                printf(" 4:Parotta\n");
                printf(" 5:Noodles\n");
                printf(" 6:Chicken Rice\n");
                printf(" 7:Chicken Biryani\n");
                printf(" 8:PaneerSandwitch\n");
                printf(" 9:HotCoffee\n");
                printf(" 10:Burger\n");
                printf(" 11:Pavbhaji\n");
                printf(" 12:ColdCoffee\n");
                printf(" 13:Exit:\n");

                printf("\nPlease Enter Your Choice:\n");
                scanf("%d",&iChoice);
 
                switch(iChoice)    //The User will decide which statement excuted.(only integer,character)
                {
                        case 1:
                        
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);

                            SelectSandwitch(iOrder,&iTotal);

                            break;
                            
                            
                        case 2:
                    
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);

                            SelectPizza(iOrder,&iTotal);

                            break;

                        case 3:
                          
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);
    
                            SelectRice(iOrder,&iTotal);
                           
                            break;    

                        case 4:
    
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);
                              
                            SelectParotta(iOrder,&iTotal);
                           
                            break;    

                        case 5:
                           
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);
        
                            SelectNoodles(iOrder,&iTotal);
                            
                            break;   

                        
                        case 6:
                         
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);

                            SelectChickenRice(iOrder,&iTotal);
                           
                            break;   

                         
                        case 7:
                         
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);

                            SelectChickenBiryani(iOrder,&iTotal);
                           
                            break;     

                          
                        case 8:
                           
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);

                            SelectPaneerSandwitch(iOrder,&iTotal);
                          
                            break;      

                         case 9:
                            
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);

                            SelectHotCoffee(iOrder,&iTotal);
                          
                            break;     

                        
                         case 10:
                          
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);
                            
                            SelectBurger(iOrder,&iTotal);
                            
                            break;  

                        
                         case 11:
                         
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);
                            
                            SelectPavbhaji(iOrder,&iTotal);
                        
                            break;         

                         case 12:
                          
                            printf("How Many Items Would you Like to order:\n");
                            scanf("%d",&iOrder);
                            
                            SelectColdCoffee(iOrder,&iTotal);
                            
                            break;    
      
                        case 13:
                            printf("Thank You for Our Visit Sai Hotel---------------:\n");
                            return 0;   

                        default:
                            printf("Sorry Unavailable:\n");      
                }

                printf("do You Want Anything more ?(y/n)\n");
                fflush(stdin);
                scanf("%c",&cValue);

                if(cValue=='y'|| cValue=='Y')
                {
                    continue;
                }
                else if(cValue=='n' || cValue=='N')
                {
                    bFlag=false;
                }
                else
                {
                    printf("Invalid Option:\n");
                    return 0;
                }
    }
    printf("Total amount is:%d\n",iTotal);

    return 0;
    
} 