#include <stdio.h>	
int main()
{
	int firstNumber=0;
	int secNumber =0;
	int result =0;

	printf("Enter first number");
	scanf("%d",&firstNumber);

	printf("Enter second number");
	scanf("%d",&secNumber);

	result=firstNumber+secNumber;

	printf("Addition=%d",result);

	return 0;


}