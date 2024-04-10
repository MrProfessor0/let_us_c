#include<stdio.h>
int main()
{
	int num[5][5],i,j,b ;
	
	printf("Enter the Elements\n");
	for(i=0; i<5; i++)
	{
		printf("Enter the %d Row\n",i);
		for(j=0; j<5; j++)
		{
			scanf("%d ",&num[i][j]);
		}
	}
	
	printf(" 5*5 Matrix\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",num[i][j]);
		}
	printf("\n");
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			if(num[i][j] > num[i][j+1])
					b=num[i][j];
			num[i][j]=b;
		}
	}
	
	printf("Largest number is%d\n",b);		
}