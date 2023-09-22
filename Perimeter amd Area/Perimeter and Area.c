#include<stdio.h>
int main()
{
	float r,a,p;
	printf("Input The Radius\n");
	scanf("%f", &r);
	a=3.14*r*r;
	p=2*3.14*r;
	printf("The perimeter is %f",p);
	printf("\nThe area is %f",a);
}
