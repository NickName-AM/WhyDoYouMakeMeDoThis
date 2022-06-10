#include<stdio.h>

int main()
{
	int a=7, b=13, c=17;

	printf("a>b && b>c: %d\n", a>b && b>c);
	printf("a>b || b<c: %d\n", a>b || b<c);
	printf("!(a>b): %d", !(a>b));	
}
