#include<stdio.h>
int main()
{
    int firstNumber= 0;
    int secNumber= 0;
    int Addition= 0;
    int Mult=0;
    int Division= 0;
    int Sub= 0;

    printf("Enter First Number");
    scanf("%d",&firstNumber);

    printf("Enter Second Number");
    scanf("%d",&secNumber);

    Addition= firstNumber+secNumber;
    Mult= firstNumber*secNumber;
    Division= firstNumber/secNumber;
    Sub= firstNumber-secNumber;
    
    printf("Addition=%d\n",Addition);
    printf("Multiplication=%d\n",Mult);
    printf("Division=%d\n",Division);
    printf("Substraction=%d\n",Sub);
    
    return 0;
}