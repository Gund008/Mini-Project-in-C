#include<stdio.h>

int main()
{
    int iCnt=0;

    printf("_____________________________________________\n");
    printf("ASCII table\n");
    printf("______________________________________________\n");

    printf("Chracter\t  Decimal\t  Hex \t Octal");
   
    for(iCnt=0;iCnt<=127;iCnt++)
    {
         printf("%c \t %d \t %x \t  %o\n",iCnt,iCnt,iCnt,iCnt);
    }
    printf("\n____________________________________________\n");
   
    return 0;
}