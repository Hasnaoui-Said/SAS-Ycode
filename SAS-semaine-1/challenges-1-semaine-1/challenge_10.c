#include <stdio.h>

main(){

	float r;
	float cercle;
	const float pi = 3.14;
	printf("Donner moi la rayon r=:\t");
	scanf("%f",&r);
	
	cercle = 2*r*pi;
	
	printf("\nCirconférence de cette cercle est: %.3f ",cercle);

}
