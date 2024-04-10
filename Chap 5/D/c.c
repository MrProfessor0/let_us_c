#include<stdio.h>
void roman(int);
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	roman(num);
}
void roman(int num)
{
	 if(num>=1000)
	{
		printf("m");
		roman(num-1000);
	}
	else if(num>=500)
	{
		printf("d");
		roman(num-500);
	}
	else if(num>=100)
	{
		printf("c");
		roman(num-100);
	}
	else if(num>=50)
	{
		printf("l");
		roman(num-50);
	}
	else if(num>=10)
	{
		printf("x");
		roman(num-10);
	}
	else if(num>=5)
	{
		printf("v");
		roman(num-5);
	}
	else if(num>=1)
	{
		printf("i");
		roman(num-1);
	}
}