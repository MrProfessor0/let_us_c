#include<stdio.h>
main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("The absolute value of a number %d",num);
	}
	else if(num<0)
	{
		num=(-1)*num;
		printf("The absolute value of a number %d",num);
	}
}