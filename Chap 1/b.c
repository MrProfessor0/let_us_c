#include<stdio.h>
main()
{
	float km,m,feet,inch,cm;
	printf("Enter the distance between two cities");
	scanf("%f",&km);
	m=km*100;
	cm=m*100;
	inch=cm/2.54;
	feet=cm/30.48;
	printf("meter= %f \n cm= %f\n inch=%f \n feet= %f\n",m,cm,inch,feet);
} 		