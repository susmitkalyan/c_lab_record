#include<stdio.h>
int main()
{
	int i,d1,d2,d3,d4,d5,f1,f2,f3,r;
	printf("Input a 5 digit number\n");
	scanf("%d", &i);
	d1=i/10000;
	f1=i%10000;
	d2=f1/1000;
	f2=f1%1000;
	d3=f2/100;
	f3=f2%100;
	d4=f3/10;
	d5=f3%10;
	r=d1+d2+d3+d4+d5;
	printf("The result is %d",r);
	getch();
}
