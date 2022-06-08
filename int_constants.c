// Convesion to and from integer constants

#include<stdio.h>

int main()
{
	int a,b,c;
	a=10;
	b=010;
	c=0xA;

	printf("Decimal constant: %d", a);
	printf("Octal constant: %o", b);
	printf("Hexadecimal constant: %x", c);
}
