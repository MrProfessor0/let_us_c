#include<stdio.h>
main()
{
	int a,b,c,d=1,e,f;
	
	while(d<=501)
	{
		e=d;
		a=d%10;
		d=d/10;
		
		b=d%10;
		d=d/10;
		
		c=d%10;
		d=d/10;
		
		f=(a*a*a)+(b*b*b)+(c*c*c);
		
		if(e==f)
		{
			printf("%d is a armstrong Number\n",e);
		}
		d=e;
		d++;
	}
}