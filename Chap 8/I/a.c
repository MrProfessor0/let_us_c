#include<stdio.h>
int main()
{
	int a[5]={0,1,2,3,4,5};
	int b[5],i,j;
	
	for(i=0; i<6; i++)
	{
		for(j=5-i; j>-1; j--)
		{
			b[j]=a[i];
			break;
		}
	}
	
	for(i=0; i<6; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<6; i++)
	{
		printf("%d ",b[i]);
	}
}