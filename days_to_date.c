#include<stdio.h>
#define DIY 365  // Days in a year
#define DIM 30   // Days in a month
#define DIW 7	 // Days in a week

int main()
{
	int days;
	int year, month, week, day;

	printf("Days: ");
	scanf("%d", &days);

	year = days / DIY;
	month = (days - (year * DIY)) / DIM;
	week = (days - (year * DIY + month * DIM)) / DIW;
        day = (days - (year * DIY + month * DIM + week * DIW));

	printf("%d years %d months %d weeks %d days.", year, month, week, day);	
}
