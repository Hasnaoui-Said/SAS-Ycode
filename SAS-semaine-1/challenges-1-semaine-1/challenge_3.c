#include <stdio.h>

int main(){

	int Dist_metre;
	float Dist_Mile;
	printf("Donner la distance chez vous et YouCode en Metre ? \t");
	scanf("%d",&Dist_metre);
	Dist_Mile = Dist_metre/1000/1.609;
	
	printf("\n\tla distance chez vous et YouCode en metre est: \n\t %d m",Dist_metre);
	printf("\n\tla distance chez vous et YouCode en Mile est: \n\t %.4f Mile",Dist_Mile);
	return 0;
}
