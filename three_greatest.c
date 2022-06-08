// Greatest number among three numbers

#include<stdio.h>

int main()
{
	float n1,n2,n3;
	printf("Enter three numbers\n");
	scanf("%f%f%f", &n1, &n2, &n3);

	if(n1>n2 && n1>n3)
	{
		printf("%f is greater\n", n1);
	}else if(n2>n1 && n2>n3)
	{
		printf("%f is greater\n", n2);
	}else
	{
		printf("%f is greater\n", n3);
	}
}
