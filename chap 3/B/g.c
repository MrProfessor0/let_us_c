#include<stdio.h>
main()
{
	int a, positive=0, negative=0 , zero=0;
	char b;
	
	printf("Enter you warnt to enter a number Y/y or N/n\n");
	scanf("%c",&b);
	
	if(b=='Y' || b=='y')
	{
		while(b=='Y' || b=='y')
		{
			printf("Enter the number\n");
			scanf("%d",&a);
			
			if(a>0)
			{
				positive++;
			}
			else if(a<0)
			{
				negative++;
			}
			else if(a==0)
			{
				zero++;
			}
			
			printf("\nYou want to Enter number\n");
			fflush(stdin);
			scanf("%c",&b);
		}
	}
	printf("Count of Numbers are.\n Positive=%d\n Negative=%d\n Zero=%d",positive,negative, zero);
}