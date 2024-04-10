#include<stdio.h>
main()
{
	int i,j,k,l;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		int m=1;
		for(k=1;k<=i;k++)
			{
				printf("%d",m);
				printf(" ");
				m=m*(i-k)/k;
			}
	printf("\n");
	}
}
