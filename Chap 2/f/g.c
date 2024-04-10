#include<stdio.h>
main()
{
	float s1,s2,s3;
	printf("Entered the three sides of triangle\n");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	if(s1==s2 || s1==s3 || s2==s3)
	{
		printf("From given sides triangle is isosceles\n");
	}
	if(s1==s2 && s2==s3 && s1==s3)
	{
		printf("From given sides triangle is equilateral\n");
	}
	if(s1 != s2 && s2 != s3 && s1 != s3)
	{
		printf("From the given side is triangle is scalene\n");
	}
	if( (s3*s3 == (s1*s1)+(s2*s2)) || (s2*s2 == (s1*s1)+(s3*s3)) || (s1*s1 == (s2*s2)+(s3*s3)) )
	{
		printf("from given sides trianle is right angled triangle");
	}
}
