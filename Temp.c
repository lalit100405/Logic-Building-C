#include <stdio.h>

int addition(int First1,int First2)
{
    {
        if(First1<0)
        First1 = -First1;
    }
    {
         if(First2<0)
        First2 = -First2;
    }
    return First1+First2;
}
int main()
{
    int First = 0;
    int Second = 0;
    int Add = 0;

    printf("Enter First Number");
    scanf("%d",&First);

    printf("Enter Second Number");
    scanf("%d",&Second);

    Add=addition(First,Second);

    printf("Addition=>%d\n",Add);

    return 0;

}
