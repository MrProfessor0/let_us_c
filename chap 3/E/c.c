#include<stdio.h>
main()
{
	int i,j;
	float fact=1.0,sum=0;
	
	for(i=1;i<=7;i++)
	{
		for(j=i;j>0;j--)
		{
			fact=fact*j;
		}
		fact=i/fact;
		sum=sum+fact;
	}
	printf("%f\n",sum);
}