//program to calculate sum of first and last digit
#include<stdio.h>
main()
{
	int num,sum;
	printf("Enter the 4 digit number\n");
	scanf("%d",&num);
	sum=num%10;
	num=num/1000;
	sum=sum+(num%10);
	printf("%d",sum);
}