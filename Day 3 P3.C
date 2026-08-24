#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);
	c=a, a=b, b=c;
	printf("After swap: a=%d, b=%d", a,b);
	return 0;
}
