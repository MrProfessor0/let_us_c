#include<stdio.h>
int main()
{
	int total_population=80000,total_literacy;
	int men,literacy_men,illetrate_men;
	int women,literacy_women,illetrate_women;
	
	total_literacy=(48*80000)/100;
	men=(52*80000)/100;
	literacy_men=(total_population*35)/100;
	illetrate_men=(men-literacy_men);
	
	women=total_population-men;
	literacy_women=total_literacy-literacy_men;
	illetrate_women=women-literacy_women;
	
		printf("total Illetrate men are %d \ntotal illetrate women are %d",illetrate_men,illetrate_women);
}