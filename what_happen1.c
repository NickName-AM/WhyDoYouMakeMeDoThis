#include<stdio.h>
int main()
{
	unsigned char a='A';
	a = a + 255;
	printf("%c : %d", a, a);
}
