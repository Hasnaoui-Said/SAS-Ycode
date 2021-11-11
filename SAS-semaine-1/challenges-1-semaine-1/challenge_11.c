#include <stdio.h>

main(){

	float a,b;
	float rect;
	const float pi = 3.14;
	printf("Donner moi longeur L=:\t");
	scanf("%f",&a);
	printf("Donner moi la largeur l=:\t");
	scanf("%f",&b);
	
	rect = 2*(a+b);
	
	printf("\nCirconférence de ce rectangle est: %.2f ",rect);

}
