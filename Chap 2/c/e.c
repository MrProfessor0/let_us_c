#include<stdio.h>
main()
{
	int num,a,b,c,d,e,num1;
	printf("Enter a digit Number\n");
	scanf("%d",&num);
	
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	e=num%10;
	
	num=(e*10000)+(d*1000)+(c*100)+
	(b*10)+a;
	printf("Entered number is =%d\n",num);
	
	num1=(a*10000)+(b*1000)+(c*100)+
	(d*10)+e;
	printf("Reversed number is =%d \n",num1);
	
	if(num==num1)
	printf("Entered number & revesed number are equal\n");
	else
	printf("Entered number & reversed number are not equal\n");
}