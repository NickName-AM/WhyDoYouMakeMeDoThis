#include<stdio.h>
#define PI 3.14

int main()
{
	float r1,r2,r3;
	float a1,a2,a3;

	printf("Three radii\n");
	scanf("%f%f%f", &r1, &r2, &r3);
	a1= PI * r1 * r1;
	a2 = PI * r2 * r2;
	a3 = PI * r3 * r3;

	printf("r: %f\tArea: %f\n", r1,a1);
	printf("r: %f\tArea: %f\n", r2,a2);
	printf("r: %f\tArea: %f\n", r3,a3);

}
