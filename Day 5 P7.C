#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter Number=");
    scanf("%d",&n);
    for(i=0;n!=0;n=n/10)
    {
        count++;
    }
    printf("Number of digits=%d",count);
    return 0;
}
