#include<stdio.h>

int main()
{
	double p,t,r,si;
	printf("Enter principal, time(in years) and rate\n");
	scanf("%lf%lf%lf", &p, &t, &r);

	si = ( p * t * r ) / 100;

	printf("SI: %lf\n", si);
}
