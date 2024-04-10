#include<stdio.h>
main()
{
	float angle1,angle2,angle3,total;
	printf("Enter the 3 angle of triangle respectively\n");
	scanf("%f%f%f",&angle1,&angle2,&angle3);
	
	total=angle1+angle2+angle3;
	
	if(total<=180)
	{
		printf("From the Entred angle given triangle is valid\n");
	}
	else
	{
		printf("From the Entred angle given triangle is not valid\n");
	}
}