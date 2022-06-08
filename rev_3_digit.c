// Reverse three digit integer
#include<stdio.h>

int main()
{
	int n,r1,r2,r3;
	scanf("%d", &n);
	r1 = n % 10;
	n /= 10;
	r2 = n % 10;
	r3 = n /  10;

	printf("Reverse: %d",r1*100+r2*10+r3 );

}
