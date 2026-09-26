#include<stdio.h>
 int addition(int Value1,int Value2)
{
    return Value1 + Value2;
}
int main()
{
    int First = 0;
    int Second = 0;
    int Result = 0;

    printf("Enter first number");
    scanf("%d",&First);

    printf("Enter second number");
    scanf("%d",&Second);

    Result = addition(First,Second);

    printf("%d\n", Result);

    return 0; 
}