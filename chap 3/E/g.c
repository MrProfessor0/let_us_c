#include<stdio.h>
main()
{
	int i,j,k,l,m=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
			{
				printf("%d",m);
				printf(" ");
				m++;
			}
	printf("\n");
	}
}