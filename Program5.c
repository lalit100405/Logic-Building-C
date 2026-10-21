

#include <stdio.h>	
int main()
{
	int iFirstNumber=0;
	int iSecNumber =0;
	int iResult =0;

	printf("Enter first number");
	scanf("%d",&iFirstNumber);

	printf("Enter second number");
	scanf("%d",&iSecNumber);

	iResult=iFirstNumber+iSecNumber;

	printf("Addition=%d",iResult);

	return 0;


}