#include<stdio.h>
int summation(int Value1)
{
	int sum = 0;
	int icnt = 0;

	for(icnt = 2;icnt<=Value1;icnt = icnt + 2)
	{
		sum = sum+icnt;
		
	}
	return sum;
	
}
int main()
{
	int iValue = 0;
	int iResult = 0;

	printf("Enter Ending Number Of Your Choice:\n");
	scanf("%d",&iValue);

	iResult = summation(iValue);
	printf("Summation=>%d\n",iResult);
	
	return 0;
}