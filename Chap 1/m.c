#include<stdio.h>
main()
{
	int num,a,b,c,d,e;
	printf("Enter the 5 digit number\n");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	e=num%10;
	num=num/10;
	
	num=((e+1)*10000)+((d+1)*1000)+((c+1)*100)+((b+1)*10)s+(a+1);
	printf("%d",num);
}