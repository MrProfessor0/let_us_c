#include<stdio.h>
void swap(int *,int *,int *);
int main()
{
	int x,y,z;
	printf("Enter the 3 number\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("x=%d, y=%d, z=%d\n",x,y,z);
	swap(&x,&y,&z);
	printf("x=%d, y=%d, z=%d",x,y,z);
}
void swap(int *a, int *b, int *c)
{
	int t;
	t = *a;
	*a=*c;
	*c=*b;
	*b=t;
}