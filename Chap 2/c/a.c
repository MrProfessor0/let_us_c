#include<stdio.h>
main()
{
	int cp,sp,profit;
	printf("Enter the Costprice & selling Price\n");
	scanf("\n %d %d",&cp,&sp);
	
	profit=sp-cp;
	
	if(profit>0)
	printf("Seller has Mode a Profit of %d",profit);
	else
	printf("Seller has Made a loss of%d",profit);
	
}