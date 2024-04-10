#include<stdio.h>
#include<math.h>
float triArea(int, int, int);
int main()
{
	int a,b,c;
	printf("Enter the triangles side\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("Area= %f",triArea(a,b,c));
}
float triArea(int a, int b, int c)
{
	float s,area;
	 s=(a+b+c)/2;
	area = (s*(s-a)*(s-b)*(s-c));
	area = sqrt(area);
	return(area);
}