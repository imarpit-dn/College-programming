#include<stdio.h>
int main()
{
	float F,C;
	F=100;
	C=(F-32/1.8);
	printf("The value of celcius is %f", C);
	C=45;
	F=(C*1.8)+32;
	printf(" The value of fahrenheit is %f", F);
	return 0;
}
