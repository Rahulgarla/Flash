#include<stdio.h>
main()
{
	int n;
	printf("\n enter a number :");
	scanf("%d",&n);
	if(n<0)
    printf("\n %d is negative",n);
	else if (n==0)
    printf("\n %d is zero",n);
    else   
    printf("\n %d is positive",n);
}
