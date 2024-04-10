#include<stdio.h>
main()
{
	int i=1;
	switch(i-2)
	{
		case -1:
			printf("Feeding fish\n");
		case 0:
			printf("weeding grass\n");
		case 1:
			printf("mending roof\n");
		default :
			printf("just to survive\n");
	}
}