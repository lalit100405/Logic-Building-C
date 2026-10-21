#include <stdio.h>	
void addition(int iValue1,int iValue2)
{
	int iResult = 0;
	iResult=iValue1+iValue2;
	printf("Addition=%d",iResult);
}

int main()
{
	int iFirstNumber=0;
	int iSecNumber =0;
	

	printf("Enter first number");
	scanf("%d",&iFirstNumber);

	printf("Enter second number");
	scanf("%d",&iSecNumber);

	addition(iFirstNumber,iSecNumber);

	return 0;


}