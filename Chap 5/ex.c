#include<stdio.h>
int main()
{
	int sum=0,i,a=1,b=-1;
	for(i=1;i<=26;i++)
	{
		sum=a+b;
		printf("%d %d %d ",i,a,b);
		printf("%d \n",sum);
		b=a;
		a=sum;
		
	}
}