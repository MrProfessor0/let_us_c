#include<stdio.h>
main()
{
	int i,j,k,l;
	
	for(i=1;i<=7;i++)
	{
		
		for(j=65;j<=72-i;j++)
		{
			printf("%c",j);
		}
		
		for(l=1;l<2*i;l++)
		{
			printf(" ");
		}
		
		for(k=71-i;k>64;k--)
		{
			printf("%c",k);		
		}
		printf("\n");
	}
} 