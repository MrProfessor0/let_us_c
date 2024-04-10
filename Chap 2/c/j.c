#include<stdio.h>
main()
{
	int x1,y1,x2,y2,x3,y3,area;
	printf("Enter the x1 and y1\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the x2 and y2\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter the x3 and y3\n");
	scanf("%d%d",&x3,&y3);
	
	area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	
	if(area==0)
	{
		printf("The given co-ordinate fall on one straight line");
	}
	else
	{
		printf("The given co- ordinate not fall on one straight line");
	}
}
