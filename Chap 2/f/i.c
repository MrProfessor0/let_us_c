#include<stdio.h>
main()
{
	float a,b;
	printf("Enter the marks for main subject A\n");scanf("%f",&a);
	printf("Enter the marks for main subject B\n");scanf("%f",&b);	

	if(a>55 && b>=45)
	{
		printf("Student has been Passed\n");
	}
	else if( (a == 55) && (b>=55) && (a>45))
	{
		printf("Student has been passed\n");
	}
	else if(a>=65 && b<45)
	{
		printf("He is Allowed for reappear in an exam\n");
	}
	else
	{
		printf("he has been failed\n");
	}
}