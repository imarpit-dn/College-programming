#include<stdio.h>
int main()
{
	int total_days;
	int years, months, days;
	printf("Enter age: ");
	scanf("%d", &total_days);
	years=total_days/365;
	months=((total_days)/365)/30;
	days=((total_days)%365)%30;
	printf("years=%d  months=%d  days=%d", years, months, days);
	return 0;
	
	}
