#include<stdio.h>
main()
{
	float s1,s2,s3;
	printf("Enter the three side of triangle respectfully\n");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	if(s1>s2 && s1>s3)
	{
		sum=s2+s3;
		if(s1<sum)
		{
			printf("The triangle is valid\n");
		}
		else
		{
			printf("The triangle is not valid\n");
		}
	}
	else if(s2>s1 && s2>s3)
	{
		sum=s1+s3;
		if(s2<sum)
		{
			printf("The triangle is valid\n");
		}
		else
		{
			printf("The triangle is not valid\n");
		}
	}
	else if(s3>s1 && s3>s2)
	{
		sum=s1+s2;
		if(s1>sum)
		{
			printf("The triangle is valid\n");
		}
		else
		{
			printf("The triangle is not valid\n");
		}
	}
}