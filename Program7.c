#include<stdio.h>
int addition (int iFirstNumber,int iSecondNumber)
{
	return iFirstNumber+iSecondNumber;
}
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
	printf("Addition=>%d",iResult);
	return 0;

}
