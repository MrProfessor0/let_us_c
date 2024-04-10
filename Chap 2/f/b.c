#include<stdio.h>
main()
{
	char a;
	printf("Enter the Character\n" );
	scanf("%c",&a);
	printf("Ascii value: %d\n",a);
	
	if(a>=65 && a<=90)
	{
		printf("Entered Character is Capital Letter\n");
	}
	else if(a>=97 && a<=122)
	{
		printf("Entered Character is Small Leter\n");
	}
	else if(a>=0 && a<=9)
	{
		printf("Enter characterd is Number\n");
	}
	else if( (a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127) )
	{
		printf("Enter Character is special symbol\n");
	}

}