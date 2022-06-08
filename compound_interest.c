#include<stdio.h>
#include<math.h>

int main()
{
	float p,r,i,t,y;

	printf("Enter principal, rate and time\n");
	scanf("%f%f%f", &p, &r, &t);

	y = (1 + r/100);
	
	i = p * (pow(y,t) - 1);

	printf("Compound interest: %f", i);
}
