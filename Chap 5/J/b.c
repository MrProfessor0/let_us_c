#include<stdio.h>
void prime(int);
int main()
{
	int a,num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("The prime factors are: ");
		prime(num);
	}
	else
		printf("This is not a positive number\n");
}
void prime(int num)
{
	int i;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d,",i);
			prime(num/i);
			break;
		}		
	}
}
