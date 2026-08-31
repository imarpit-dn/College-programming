#include<stdio.h>
int main()
{
	int y;
	printf("Enter year: ");
	scanf("%d", &y);
	if(y%400==0){
		printf("The year is a Leap Year\n");
	}
	else if(y%100==0){
		printf("The year is not a Leap Year\n");
	}
	else if(y%4==0){
		printf("The year is a Leap Year\n");
	}
	else {
		printf("The year is not a Leap Year");
	}
	return 0;
}
