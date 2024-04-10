#include<stdio.h>
main()
{
	int l,b,area,perimeter;
	printf("Enter the Length & Breadth of rectangle respectively \n");
	scanf("%d %d",&l,&b);
	
	area=l*b;
	perimeter=2*(l+b);
	
	if(area>perimeter)
	printf("The area of the rectangle with length= %d and breadth= %d is greater than it's perimeter\n",l,b);
	else if(area<perimeter)
	printf("The area of the rectangle with length= %d and breadth= %d is smaller than it's perimeter\n",l,b);

}