#include<stdio.h>

int main()
{
	int i, c, y;
	i = 10;
	c = 20;

	y = i;
	i=c;
	c=y;

	printf("i: %d\n", i);
	printf("c: %d", c);
}
