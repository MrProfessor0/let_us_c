#include<stdio.h>
main()
{
	char health,live,gender,policy;
	int age,premium;
	
	printf("Enter the person health status (Excellent= Y or y Bad= N or n)\n");
	scanf("%c",&health);
	printf("Enter the age of Person\n");
	scanf("%d",&age);
	fflush(stdin);
	printf("Enter the Person location (city=C or c village=V or v)\n");
	scanf("%c",&live);
	fflush(stdin);
	printf("Enter the Gender\n(male= M || m) && (Female= F &&f)");
	scanf("%c",&gender);
	
	
	if( ((health=='Y') || (health=='y')) &&  (age>=25 && age<=35) && (live=='C' || live=='c') && (gender=='M' || gender=='m'))
	{
		premium=4;
		printf("Person is Insured for policy with the %d premium. \nBut Policy amount cannot exceed Rs 2 lakhs.",premium);
	}
	else if( ((health=='Y') || (health=='y')) &&  (age>=25 && age<=35) && (live=='C' || live=='c') && (gender=='F' || gender=='f'))
	{
		premium=3;
		printf("Person is Insured for policy with the %d premium. \nBut Policy amount cannot exceed Rs 1 lakhs.",premium);
	}
	else if( ((health=='N') || (health=='n')) &&  (age>=25 && age<=35) && (live=='V' || live=='v') && (gender=='M' || gender=='m'))
	{
		premium=6;
		printf("Person is Insured for policy with the %d premium. \nBut Policy amount cannot exceed Rs 10,000.",premium);
	}
	else
	{
		printf("Person is not Insured\n");
	}
}