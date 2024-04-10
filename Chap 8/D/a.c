#include<stdio.h>
int main()
{
	int num[25]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5};
	int i,se,t=0;

	/*printf("Enter the 25 numbers\n");
	for(i=0;i<25;i++)
	{
		scanf("%d\n",&num[i]);
	}*/
	
	printf("Entered number array is: ");
	for(i=0;i<25;i++)
			printf("%d ",num[i]);
	
	printf("\n\nEnter the number you want search\n");
	scanf("%d",&se);
	
	for(i=0; i<25; i++)
	{
		if(num[i]==se)
		{
			t++;
		}
	}
	printf("Entered no %d present %d no. of times\n",se,t);
}