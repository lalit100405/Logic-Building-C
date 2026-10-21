#include<stdio.h>
int addition(int,int);
int main()
{
	int iFirstNumber = 0;
	int iSecondNumber = 0;
	int iResult = 0;

	printf("Enter First Number");
	scanf("%d",&iFirstNumber);

	printf("Enter Second Number");
	scanf("%d",&iSecondNumber);

	iResult = addition(iFirstNumber,iSecondNumber);
	printf("Addition=%d\n",iResult);
	return 0;

}