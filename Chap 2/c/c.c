#include<stdio.h>
main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	
	if(year%4==0) 
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("%d is a leap year",year);
			}
			else
			{
				printf("%d is not a leap yerar",year);
			}
		}
		else
		{
			printf("%d is a leap year",year);
		}
	}
	else
	{
		printf("%d is not leap year",year);
	}
}