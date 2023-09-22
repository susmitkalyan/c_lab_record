#include<stdio.h>
int main()
{
	int i,x,a,y,z,r;
	printf("Input a 3 digit number\n");
	scanf("%d", &i);
	x=i/100;
	a=i%100;
	y=a/10;
	z=a%10;
	r=x+y+z;
	printf("The result is %d",r);
	getch();
}
