#include<stdio.h>

int main()
{
	float h, a, b;
	printf("Base and height\n");
	scanf("%f%f", &b, &h);
	
	a = 0.5 * b * h;

	printf("Area: %f\n", a);

}
