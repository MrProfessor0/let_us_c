#include<stdio.h>
main()
{
	int c,d,temp;
	printf("Enter the 2 number");
	scanf("%d%d",&c,&d);
/*	temp=c;
	c=d;
	d=temp;
	printf("%d\n%d\n",c,d);*/
	
	d=d-c;
	c=d+c;
	printf("%d\n%d\n",c,d);
	}