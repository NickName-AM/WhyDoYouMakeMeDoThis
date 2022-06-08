// To determine whether the number is +ve or -ve

#include<stdio.h>

int main()
{
	double n;
	scanf("%lf", &n);

	if(n>0){
		printf("+ve\n");
	}else if(n<0){
		printf("-ve\n");
	}
}
