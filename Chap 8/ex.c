#include<stdio.h>
int main()
{
	int threed[3][2][3]={
										{
											{1,2,3},
											{4,5,6}
										},
										{
											{7,8,9,},
											{10,11,12}
										},
										{
											{13,14,15},
											{16,17,18}
										}
									};
									
	printf("first element=%d\n",threed[0][0][0]);
	printf("Last element=%d",threed[2][1][2]);
}