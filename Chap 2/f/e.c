#include<stdio.h>
main()
{
	int day;
	float fine;
	printf("Enter the Number of Days the Member is late to return the Book\n");
	scanf("%d",&day);
	
	if(day<5)
	{
		fine=0.50;
		printf("The Fine is %f",fine);
	}
	else if(day>6 && day<10)
	{
		fine=1;
		printf("The Fine is %f",fine);
	}
	else if(day>10 && day<30)
	{
		fine=5;
		printf("The Fine is %f",fine);
	}
	else if(day>30)
	{
		printf( "Your Membership is Cancelled");
	}
}