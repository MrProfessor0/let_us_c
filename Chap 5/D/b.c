#include<stdio.h>
int power(int , int);
main()
{
	int a,b,po;
	printf("Enter the number\n");
	scanf("%d%d",&a,&b);
	po=power(a,b);
	printf("%d raised to %d is %d",a,b,po);
}
int power(int a, int b)
{
	int po=1;
	for(int i=1;i<=b;i++)
	{
		po=po*a;
	}
	return(po);
}