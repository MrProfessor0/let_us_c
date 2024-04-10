#include<stdio.h>
int sum(int);
int main()
{
	int a;
	a=sum(1);
	
	printf("The sum of first 25 natural number is %d",a);	
}
int sum(int a)
{
	int s;
	
	if(a==25)
		return (25);
	else
	{
		s=a+sum(a+1);
	}
	return s;
}