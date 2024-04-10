#include<stdio.h>
main()
{
	float fahrenheit,centi;
	printf("Enter the temprature in fahrenheit");
	scanf("%f",&fahrenheit);
	centi=fahrenheit/32;
	printf("In centigrate= %f",centi);
}