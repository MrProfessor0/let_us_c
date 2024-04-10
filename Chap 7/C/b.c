#include<stdio.h>
#define CHARS(c) { if(c>=97 && c<=122) \
									printf("Character is small\n"); \
								else \
									printf("Character is not small case\n"); \
								}
#define CHARU(c) { if(c>=65 && c<=90) \
									printf("Character is Upper case\n"); \
								else \
									printf("Character is a not Upper case\n"); \
								}
			
int main()
{
	char c;
	
	printf("Enter the character\n");
	scanf("%c",&c);
	
	 CHARS(c); 
	 CHARU(c);
}