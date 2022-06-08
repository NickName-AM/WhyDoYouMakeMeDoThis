// Use of pow() function


#include<stdio.h>
#include<math.h>

int main()
{
	double p, e, a;
	printf("Coeff and power\n");
	scanf("%lf%lf", &a, &e);

	p = pow(a,e);
	printf("Power: %lf\n", p);
}
