#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<301;i++)
	{
		if(i==2)
		{
			printf("%d is prime number\n",i);
		}
		else if(i)
		{	
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				{
					break;
				}
				else
				{
					printf("%d is prime number\n",i);
					break;
				}
			}
		}
	}
}