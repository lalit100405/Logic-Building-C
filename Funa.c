#include<stdio.h>
addition(int Value1,int Value2);
int main()
{
	int Lalit1=0;
	int Lalit2=0;
	int Result=0;

	printf("Enter First Number");
	scanf("%d",&Lalit1);


	printf("Enter Second Number");
	scanf("%d",&Lalit2);

	Result = addition(Lalit1,Lalit2);

	printf("Addition=>%d",Result);

	return 0;

}