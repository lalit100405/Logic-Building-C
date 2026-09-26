#include<stdio.h>
int addition(int Sang1,int Sang2)
{
    return Sang1 + Sang2;
}
int main()

{
int lal = 0;
int lal1 = 0;
int result = 0;

printf("enter first number");
scanf("%d",&lal);

printf("enter second number");
scanf("%d",&lal1);

result = addition(lal,lal1);

printf("Addition=>%d\n",result);

return 0;
}



