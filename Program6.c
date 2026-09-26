#include<stdio.h>
 int addition(int Value1,int Value2)
{
    return Value1 + Value2;
}

int substraction(int Value3,int Value4)
{
    return Value3 - Value4;
}

int multi(int Value5,int Value6)
{
    return Value5 * Value6;
}

int main()
{
    int First = 0;
    int Second = 0;
    int Result = 0;
    int Result2 = 0;
    int Result3 = 0;
 
    printf("Enter first number");
    scanf("%d",&First);

    printf("Enter second number");
    scanf("%d",&Second);

    Result = addition(First,Second);
    Result2 = substraction(First,Second);
    Result3 = multi(First,Second);
  
    printf("%d\n", Result);
    printf("%d\n", Result2);
    printf("%d\n", Result3);
    
    return 0;
}


