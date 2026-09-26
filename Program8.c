#include<stdio.h>

    void addition(int Lalit1,int Lalit2)

   { int result = 0;
    result =  Lalit1 + Lalit2;
    printf("Add=%d",result);
   }

int main()
{
    int a = 0;
    int b = 0;

    printf("Enter first Number");
    scanf("%d",&a);

    printf("Enter second Number");
    scanf("%d",&b);

    addition(a,b);
    
    return 0;

}


