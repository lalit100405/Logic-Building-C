#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;

    printf("Enter First Number");
    scanf("%d",&a);

    printf("Enter Second Number");
    scanf("%d",&b);
    
    c=a+b;
    d=a*b;

    printf("Addition=%d\n",c);
    printf("Mult=%d\n",d);

    return 0;
}