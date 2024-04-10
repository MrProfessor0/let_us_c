//program to calculate sum of digit
#include<stdio.h>
main()
{
	int num,sum;
	printf("Enter the 5 digit number");
	scanf("%d",&num);
	sum=num%10;
	num=num/10;
	sum=sum+(num%10);
	num=num/10;
	sum=sum+(num%10);
	num=num/10;
	sum=sum+(num%10);
	num=num/10;
	sum=sum+(num%10);
	printf("%d",sum);
}