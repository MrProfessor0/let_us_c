#include<stdio.h>
float product(int , float);
int main()
{
	int i;
	float f,pro;
	printf("Enter the integer & float respectively\n");
	scanf("%d%f",&i,&f);
	pro=product(i,f);
	printf("The product of %d & %f is %f",i,f,pro);
}
float product(int i,float j)
{
	float pro;
	pro=i*j;
	return(pro);
}