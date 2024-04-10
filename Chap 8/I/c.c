#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	
	int a[n],i,j,temp,k;
	int *b;
		
	printf("Enter the elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	b=a ;
					
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<i+1; j++)
		{
			if( *(b + (i+1)) < *(b+j) )
			{
				temp = *(b+(i+1));
				
				for(k=i+1; k>j; k--)
				{
					*(b+(i+1)) = *(b+(i+1)-k) ;
					*(b+((i+1)-k)) = temp;
				}
			}
		}
	}
	
	/*
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<i+1; j++)
		{
			if( a[i+1] < a[j] )
			{
				temp = a[i+1];
				for(k=i+1; k>j; k--)
				{
					a[i+1]=a[(i+1)-k];
					a[(i+1)-k]=temp;
				}
			}
		}
	}
	*/
		
	printf("smallest no is '%d' ", *b);
}