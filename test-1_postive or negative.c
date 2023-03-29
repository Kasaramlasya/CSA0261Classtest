#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if (a>0)
	printf("%d is positive number.",a);
	else if (a<0)
	printf("%d is negative number.",a);
	else if (a==0)
	printf("%d is non negative nor positive.",a);
	return 0;
}
