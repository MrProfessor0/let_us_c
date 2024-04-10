#include<stdio.h>
void modify(int *, int );
int main()
{
	int arr[10]={ 1,2,3,4,5,6,7,8,9,10 };
	int i;
	
	printf("Elements are: ");
	for(i=0; i<10; i++)
			printf("%d ",arr[i]);
	
	modify(arr, 10);
	
	printf("\nNew array set: ");
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
}

void modify(int *a, int n)
{
	int i;
	for(i=0; i<10; i++)
	{
	//	*(a+i) = *(a+i) * 3;
		*a = *a*3;
		a++;
	}
}