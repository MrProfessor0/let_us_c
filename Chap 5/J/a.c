#include<stdio.h>
int sum_wr(int);
int sum_r(int);
int main()
{
	int a,wr,r;
	printf("Enter the digit numbers\n");
	scanf("%d",&a);
	
	if(10000<=a && 99999>=a)
	{
		wr = sum_wr(a);
		r = sum_r(a);
	}
	else
		printf("You entered wrong digit number\n");
		
	printf("Addition of digit without recursion= %d\n",wr);
	printf("Addition of digit with recursion= %d",r);
}
int sum_wr(int a)
{
	int b,c,d,e,f,sum=0;
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	a=a/10;
	f=a%10;
	sum=b+c+d+e+f;
	return(sum);
}
int sum_r(int a)
{
	int b,sum=0;
	if(a<9)
		return(a);
	else
		{
			b=a%10;
			sum = b+sum_r(a/10);
		}
	return(sum);
}