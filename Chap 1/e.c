#include<stdio.h>
main()
{
	float length,breadth,radius,area_r,perimeter,circum,area_c;
	printf("Enter the length & breadth respectively");
	scanf("%f%f",&length,&breadth);
	area_r=length*breadth;
	perimeter=2*(length+breadth);
	printf("perimeter of rectangle =%f\narea of rectagle=%f",perimeter,area_r);
	
	printf("\nEnter the Radius");
	scanf("%f",&radius);
	circum=2*3.24*radius;
	area_c=3.14*radius*radius;
	printf("Circumference of circle= %f\narea of circle",circum,area_r);
}