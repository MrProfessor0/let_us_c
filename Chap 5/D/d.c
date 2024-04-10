#include<stdio.h>
void leap(int);
int main()
{
	int year;
	printf("Enter year to check leap year or not\n");
	scanf("%d",&year);
	leap(year);
}
void leap(int num)
{
	if(num%4==0)
	{
		if(num%100==0)
		{
			if(num%400==0)
				printf("%d is leap year\n",num);
			else 
				printf("%d is not a leap year\n",num);
		}
		else
			printf("%d is a leap year",num);
	}
	else
		printf("%d is not a leap year\n",num);
}