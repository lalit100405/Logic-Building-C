#include<stdio.h>
void display(int ivalue)
{
	if(ivalue<0)
	{
		ivalue = -ivalue;
	}
	int icnt = 0;
	for(icnt=1;icnt<=ivalue;icnt++)
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