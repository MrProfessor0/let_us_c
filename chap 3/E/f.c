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
		
		for(l=2;l<2*i-1;l++)
		{
			printf(" ");
		}
		
		for(k=72-i;k>64;k--)
		{
			if(k==71)
			continue;
			printf("%c",k);		
		}
		printf("\n");
	}
}