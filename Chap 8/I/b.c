#include<stdio.h>
int main()
{
	int n,i,a,b;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the array elements\n");
	for(i=0; i<n ; i++)
	{
			scanf("%d\n",&arr[i]);
	}
	
	printf("Given array is: ");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	for(i=0; i<=n; i++)
	{
		b=i+1;
		a=n-b;
		
		if(arr[i] == arr[a])
				printf("arr[%d] = arr[%d-%d]\n",i,n,b);
	}
}