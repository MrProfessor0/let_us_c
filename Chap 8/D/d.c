#include<stdio.h>
int main()
{
	int a[25];
	int e,b,c,d;
	e=b=c=d=0;
	
	printf("Enter the 25 elements\n");
	for(int i=0; i<25; i++)
	{
		scanf("%d\n",&a[i]);
	}
	
	for(int i=0; i<25; i++)
	{
		if(a[i]>0)
			e++;
		if(a[i]<0)
			b++;
		if(a[i]%2==0)
			c++;
		if(a[i]%2 != 0)
			d++;
	}
	
	printf("In the given array %d Positive, %d Negative, %d Even, %d Odd",e,b,c,d);
}