#include<stdio.h>
int prime(int);
void factors(int);
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num>0)
		factors(num);
	else
		printf("This is not a positive number");
}

void factors(int num)
{
	int i,flag=0;
	printf("Prime factors of %d are\n",num);
	while(num !=1 )
	{
		for(i=2;i<=num;i++)
		{
			flag=prime(i);
			if(flag==1)
			{
				while(num%i==0)
				{
					num=num/i;
					printf("%d\n",i);
				}
			}
		}
	}
}

int prime(int p)
{
	int flag=1;
	if(p==2)
			flag=1;
	else if(p !=2)
		{
			for(int i=2;i<p;i++)
			{
				if(p%i==0)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag==1)
		 	return 1;
		else
			return 0;
}