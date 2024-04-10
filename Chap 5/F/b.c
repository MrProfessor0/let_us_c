#include<stdio.h>
#include<math.h>
void sd(int, int, int, int, int, int *, float *, float *);
main()
{
	int a,b,c,d,e,sum=0;
	float avg,std;
	
	printf("Enter the 5 numbers\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	sd(a,b,c,d,e,&sum,&avg,&std);
	
	printf("Sum=%d\n",sum);
	printf("Average=%f\n",avg);
	printf("Standard deviation=%f\n",std);
}
void sd(int a, int b, int c, int d, int e, int *sum, float *avg, float *std)
{
	float var;
	*sum=a+b+c+d+e;
	*avg= *sum/5;

	a=a - *avg;
	b=b - *avg;
	c=c - *avg;
	d=d - *avg;
	e=e - *avg;
	
	var=((a*a)+(b*b)+(c*c)+(d*d)+(e*e))/5;
	
	*std=sqrt(var);
}