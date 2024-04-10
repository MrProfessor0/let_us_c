#include<stdio.h>
main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float percentage;
	printf("Enter the 5 subject marks respectively out of 100");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	percentage=(total*100)/500;
	printf("%d %f",total,percentage);
}