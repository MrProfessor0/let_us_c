#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	
	printf("Enter the Number\n");
	scanf("%d",&n);
	
		if(n==0)
	{
		fact=1;
		printf("Factorial of %d is %d\n",n,fact);
	}
	else
	{
		while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d\n",n,fact);
	}
}