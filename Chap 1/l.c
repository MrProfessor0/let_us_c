#include<stdio.h>
int main()
{
	int total_sp,total_profit;
	float sp,profit,cp;
	printf("Enter the the selling price of 15 item\n");
	scanf("%d",&total_sp);
	printf("Enter the the total profit of 15 item\n");
	scanf("%d",&total_profit);
	
		sp=total_sp/15;
		profit=total_profit/15;
		cp=sp-profit;
		printf("The cost price of each item is %f",cp);
}