#include<stdio.h>
void display(int ivalue)
{
	int icnt = 0;
	for(icnt=2;icnt<=ivalue;icnt = icnt+2)//Advance Step
	{
		printf("%d\n",icnt);
	}
}
int main()
{
	int ivalue = 0;
	printf("Enter the number of your choice\n");
	scanf("%d",&ivalue);

	display(ivalue);

	return 0;
}