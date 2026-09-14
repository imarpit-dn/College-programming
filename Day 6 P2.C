#include<stdio.h>
int main(){
	int d,n,c=0;
	printf("Enter a number:", n);
	scanf("%d", &n);
	while(n!=0){
	d=n%10;
	n=n/10;
	c=c+d;
}
printf("The sum of all digits are: %d", c);
return 0;	
}
