#include<stdio.h>

int main()
{
	int c, h;
	c=-5;
	h=10;

	c += h;
	h = c - h;
	c -= h;

	printf("c: %d\n", c);
	printf("h: %d", h);
}
