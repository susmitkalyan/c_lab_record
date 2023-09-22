#include<stdio.h>
int main()
{
	float p,r,t,s;
	printf("Input the Principal: ");
	scanf("%f", &p);
	printf("Input the Rate of Interest: ");
	scanf("%f", &r);
	printf("Input the Time Period: ");
	scanf("%f", &t);
	s=(p*r*t)/100;
	printf("The Simple Interest is %f",s);
	getch();
}
