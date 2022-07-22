#include<stdio.h>

void highlow(float *, float *, float *);

int main()
{
	int i;
	float num[10], s, d;
	printf("Enter 10 numbers\n");
	for(i=0; i<10; ++i)
	{
		scanf("%f", &num[i]);
	}
	highlow(num, &s, &d);
	printf("In main():\n");
	printf("Sum of highest and lowest: %f\n", s);
	printf("Difference of highest and lowest: %f\n", d);

	return 0;
}

void highlow(float *a, float *b, float *c)
{
	int i,j,k;
	float max, min;
	max = a[0];
	j=0;		// Yo rakhena vane index print garda wrong value aauna sakxa
	for(i=1; i<10; ++i)
	{
		if(a[i] > max)
		{
			max = a[i];
			j=i;
		}
	}
	min = a[0];
	k = 0;		// Yo rakhena vane index print garda wrong value aauna sakxa
	for(i=1; i<10; ++i)
	{
		if(a[i] < min)
		{
			min = a[i];
			k = i;
		}
	}
	printf("In highlow():\n");
	printf("Max: num[%d] %f\n", j, max);
	printf("Min: num[%d] %f\n\n", k, min);
	*b = max + min;		// Location of 's' in main()
	*c = max - min;		// Location of 'd' in main()
	
}