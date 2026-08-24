#include<stdio.h>
int main()
{
	int total_sec;
	int hours, minutes, seconds;
	printf("Enter time in sec: ");
	scanf("%d", &total_sec);
	hours= total_sec/3600;
	minutes=((total_sec)/3600)/60;
	seconds=((total_sec)%3600)%60;
	printf(" hours=%d minutes=%d seconds=%d", hours, minutes, seconds);
	return 0;
}
