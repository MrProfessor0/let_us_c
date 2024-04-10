#include<stdio.h>
main()
{
	int ram, shyam , ajay;
	printf("Entered the ages of Ram , Shyam , Ajay Respectfully \n");
	scanf("%d%d%d",&ram,&shyam,&ajay);
	
	if(ram<shyam && ram<ajay)
	{
		printf("The youngest brother is ram \n");
	}
	else if(shyam<ram && shyam<ajay)
	{
		printf("The youngest brother is Shyam");
	}
	else if(ajay<ram && ajay<shyam)
	{
		printf("The youngest brother is ajay \n");
	}
}