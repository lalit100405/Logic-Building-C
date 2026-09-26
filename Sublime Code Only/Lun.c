#include<stdio.h>
addition(int,int);
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Enter First Number");
	scanf("%d",&a);


	printf("Enter Second Number");
	scanf("%d",&b);

	c = addition(a,b);

	printf("Addition-->%d",c);

	return 0; 


}