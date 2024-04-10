#include<stdio.h>
main()
{
	int i,hr,ot;
	i=1;
	
	while(i<=10)
	{
		printf("Enter the Hour worked in Factory\n");
		scanf("%d",&hr);
		
		if(hr>40)
		{
			ot=hr-40;
			ot=ot*12;
			printf("The overtime of workers is %d\n",ot);
		}
		else
		{
			printf("The worker do'nt have overtime\n");
		}
		i++;
	}
}