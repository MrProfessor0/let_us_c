//program to calculate to find salary

#include <stdio.h>
int main()
{
	int basic_salary;
	float d_allowance,house_rent,gross_salary;
	printf("Enter the basic salary\n");
	scanf("%d",&basic_salary);
	d_allowance=(basic_salary*40)/100;
	house_rent=(basic_salary*20)/100;
	gross_salary=d_allowance+house_rent+basic_salary;
	printf("Gross salary= %f",gross_salary);
}
