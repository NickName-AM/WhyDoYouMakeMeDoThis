#include<stdio.h>

int main()
{
	float c, f;
	printf("Temp in celsius: ");
	scanf("%f", &c);

	f = c * 1.8 + 32;
	printf("%f degree Fahrenheit\n", f);
}
