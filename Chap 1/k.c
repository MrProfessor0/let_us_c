#include<stdio.h>
int main()
{
	int amount,ten,fifty,hundred;
	printf("Amount enter in hundred\n ");
	scanf("%d",&amount);
	ten=amount/10;
	fifty=amount/50;
	hundred=amount/100;
	
	printf("Each currency nots of \nten=%d \nfifty=%d \nhundred=%d",ten,fifty,hundred);
}