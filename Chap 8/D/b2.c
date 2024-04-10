// Insertion Sort


#include<stdio.h>
int main()
{
	int a[25]={111,222,333,444,555,68,79,88,99,10,112,32,43,54,65,66,77,58,91,60,11,42,53,74,55};	
	int i,j,k,l,temp ;
	
	printf("The numbers are:");
	for(i=0; i<25; i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0; i<24; i++)
	{
		for(j=0; j<=i+1; j++)
		{
			if(a[i+1] < a[j] )
			{
				temp = a[i+1];
				
				for(k=i+1; k>j ; k--)
				{
					a[k] = a[k-1];
				}
				a[j] = temp;
			}
		}
	}
	printf("\nSorted array:");
	for(i=0; i<25; i++)
	{
		printf("%d ",a[i]);
	}
}