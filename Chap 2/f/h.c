#include<stdio.h>
main()
{
	float time;
	printf("Enter the time taken by worker to Complete a job\n");
	scanf("%f",&time);
	
	if(time<3)
	{
		printf("Worker is highly Efficient\n");
	}
	else if(time>3 && time<=4)
	{
		printf("Worker has to order to increase speed");
	}
	else if(time>4 && time<=5)
	{
		printf("Worker has to give training to increase speed");
	}
	else if(time>5)
	{
		printf("Worker has to leave a company\n");
	}
}