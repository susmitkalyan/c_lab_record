#include<stdio.h>
int main()
{
	int x,f1,f2,c1,c2,c3;
	printf("Welcome to Bank of OUTR!");
	printf("\n");
	printf("[Available Denominations are 500,200,100]");
	printf("\n");
	printf("\n");
	printf("Please enter your required Amount: ");
	scanf("%d", x);
	c1=x/500;
	f1=x%500;
	c2=f1/200;
	f2=f1%200;
	c3=f2/100;
	printf("No. of Rs.500: %d",c1);
	printf("\n");
	printf("No. of Rs.200: %d",c2);
	printf("\n");
	printf("No. of Rs.100: %d",c3);
	getch();
}
