// Selection sort
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
	
	//selection sort
	for(i=0; i<25; i++)	// for iteration
	{
		for(j=i; j<25; j++) //
		{
			for(k=i; k<24; k++)
			{
				if(a[j] > a[k+1])
				{
					temp=a[j];
					a[j]=a[k+1];
					a[k+1]=temp;
				}
			}
		}
	}
	
	printf("\nSorted array:");
	for(i=0; i<25; i++)
	{
		printf("%d ",a[i]);
	}
}