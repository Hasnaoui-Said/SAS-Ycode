#include <stdio.h>

int main(){

	float Dist_metre;
	float Dist_Mile;
	printf("Donner la distance chez vous et YouCode en Mile ? \t");
	scanf("%f",&Dist_Mile);
	Dist_metre = Dist_Mile*1.609 ;
	
	printf("\n\tla distance chez vous et YouCode en Mile est: \n\t %.4f Mile",Dist_Mile);
	printf("\n\tla distance chez vous et YouCode en metre est: \n\t %f m",Dist_metre);
	return 0;
}
