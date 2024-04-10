#include<stdio.h>
int f(int,int,int);
int main()
{
	printf("The Fibaopnacii sequence for 1st 25 terms is\n");
	f(0,1,1);
}
int f(int a, int b, int c)
{
	int sum;
	if(c<26)
	{
		sum=a+b;
		printf("%d\n",sum);
		b=a;
		a=sum;
		c++;
		f(a,b,c);
	}
}