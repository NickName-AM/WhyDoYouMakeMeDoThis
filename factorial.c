// Factorial

#include<stdio.h>

int main()
{
	long int f,i,n;
	f=1;
	printf("Factorial of ");
	scanf("%ld", &n);

	for(i=2; i<=n; ++i)
	{
		f*=i;
	}
	printf("Factorial: %ld", f);
}
