#include<stdio.h>
main()
{
	int ms=21,u_choice,c_choice;
	
	while(ms>1)
	{
		printf("Enter the your choice 1,2,3,4\n");
		scanf("%d",&u_choice);
		
		if(u_choice>4)
		{
			printf("Invalid choice");
			break;
		}
		
		c_choice=5-u_choice;
		printf("Computer choice is %d\n",c_choice);
		
		ms=ms-(u_choice + c_choice);
		printf("Remainig match stick are %d\n",ms);
		printf("\n");
		
		if(ms==1)
		{
			printf("\n You have been lost by computer\n");
			break;
		}
	
	}
}