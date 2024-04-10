#include<stdio.h>
main()
{
	int a,b,i,power=1;
	
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	i=b;
	while(i>0)
	{
		power=power*a;
		i--;
	}
	printf("%d is raised to power %d is %d\n",a,b,power);
}