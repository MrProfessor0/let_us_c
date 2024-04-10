#include<stdio.h>
void subject(int, int , int , float *, float *);
int main()
{
	int s1,s2,s3;
	float avg,percentage;
	
	printf("Enter the marks\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	subject(s1,s2,s3,&avg,&percentage);
	
	printf("Average= %f\n",avg);
	printf("Percentage= %f\n",percentage);
}
void subject(int a,int b, int c, float *avg, float *percentage)
{
	*avg= (a+b+c)/3;
	*percentage= ((a+b+c) * 100)/300;
}