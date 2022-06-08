// Reverse 5 digit integer
#include<stdio.h>

int main()
{
	int n,r1,r2,r3,r4,r5;
	scanf("%d", &n);
	r1 = n % 10;
	n /= 10;
	r2 = n % 10;
	n /= 10;
	r3 = n % 10;
	n /= 10;
	r4 = n % 10;
	r5 = n / 10;

	printf("Reverse: %d\nSum: %d",r1*10000+r2*1000+r3*100+r4*10+r5, r1+r2+r3+r4+r5 );

}
