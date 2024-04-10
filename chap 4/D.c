#include<stdio.h>
main()
{
	int cl,su,grace;
	
	printf("Enter the class obtained by the student\nNumber of sub he has failed in\n");
	scanf("%d%d",&cl,&su);
	
	switch(cl)
	{
		case 1:
			if(su>3)
			{
				printf("No Grace\n");
			}
			else if(su<=3)
			{
				grace=5*su;
				printf("Students get total %d grace marks\n",grace);
			}
			break;
			
			case 2:
				if(su>2)
				{
					printf("No grace\n");
				}
				else if(su<=2)
				{
					grace=4*su;
					printf("Students get total %d grace marks\n",grace);
				}
				break;
				
			case 3:
				if(su>1)
				{
					printf("No grace\n");
				}
				else if(su<=1)
				{
					grace=5*su;
					printf("Students get total %d grace marks\n",grace);
				}
	}
}