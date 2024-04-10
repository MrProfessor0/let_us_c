#include<stdio.h>
int main()
{
	int a,ch,fact=1,prime;
	while(1)
	{
		printf("Enter the number\n");
		scanf("%d",&a);
		
		while(2)
		{
					printf("\nChoose the Action\n 1.factorial of a number\n 2.Prime or not\n 3.Odd or even\n 4.exit\n");
		scanf("%d",&ch);
		
		switch (ch)
		{
			case 1:
					for(int i=1;i<=a;i++)
					{
						fact=fact*i;
					}
					printf("Factorial %d",fact);
				break;
					
			case 2:
					if(a==2)
						printf("%d is a prime number",a);
					else
					{
						for(int i=2;i<a;i++)
						{
							if(a%i==0)
							{
								//printf("%d is not a prime number\n",a);
							 prime=1;
							}
						}
						if(prime==1)
								printf("%d is not a prime number\n",a);
						else
								printf("%d is a prime number\n",a);

						
					}
					break;
						
			case 3:
				if(a%2==0)
						printf("Number is a even\n");
				else
						printf("Number is odd\n");
				break;
						
			case 4:
				exit( 1);
			break;
			
			default:
				printf("You entered a wrong option\n"); 
				
		}
		}
	}
}