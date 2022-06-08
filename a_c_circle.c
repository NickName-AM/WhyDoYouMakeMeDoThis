// Area and circumference of circle

#include<stdio.h>
#define PI 3.14

int main()
{
	double c, a, r;
	printf("radius: ");
	scanf("%lf", &r);

	a = PI * r * r;
	c = 2 * PI * r;

	printf("Area: %lf\nCircumference: %lf", a,c);
}
