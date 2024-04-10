#include<stdio.h>
int factorial(int );
main()
{
	int num,fact;
	printf("Enter the number\n");
	scanf("%d",&num);
	fact=factorial(num);
	printf("Factorial is %d",fact);
}
factorial(int a)
{
	int f=1,i;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return(f);
}