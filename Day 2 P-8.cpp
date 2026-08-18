#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,discriminant,root1,root2;
	printf("enter value of a,b,c\n");
	scanf("%f %f %f", &a,&b,&c);
	discriminant=b*b-4*a*c;
	if (discriminant==0)
	{
	printf("the roots are real and equal");
	root1=-b/(2*a);
	root2=-b/(2*a);
	printf("root 1 is %f and root 2 is %f", root1, root2);
	}
	else if (discriminant>0)
	{
		printf("roots are real and different\n");
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("root 1 is %f and root 2 is %f", root1, root2);
		}
		else {
			printf("roots are imaginary\n");
		}
		return 0;
}
