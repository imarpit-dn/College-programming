#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3 );
	// comparisn of numbers 
	if (n1>=n2 && n1>=n3){
	printf("The greatest number is %d\n", n1);
    }
    else if(n2>=n1 && n2>=n3){
    	printf("The greatest number is %d\n", n2);
    	}
    	else {
    		printf("The greatest number is %d\n", n3);
		}
    	return 0;
}
