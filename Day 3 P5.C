#include<stdio.h>
int main()
{
	float basic,salary;
	printf("Enter basic: \n");
	scanf("%f", &basic);
	salary=(basic + (0.1*basic) + (0.5*basic) + 5000);
	printf("The Annual salary is %f ", salary*12);
	
	return 0;
}
