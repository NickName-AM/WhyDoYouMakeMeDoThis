// Sum of natural numbers

#include<stdio.h>

int main()
{
	long int n,sum;
	scanf("%ld", &n);

	sum = n * (n + 1)/2;

	printf("Sum: %ld\n",sum);
}
