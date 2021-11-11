#include <stdio.h>

int main(){

	float x,y;
	printf("Entrer un numbre \t");
	scanf("%f",&x);
	printf("\nEntrer un autre numbre \t");
	scanf("%f",&y);
	
	printf("\n\tAvant x = %.0f et de y = %.0f ",x,y);
	if(x != y || x < y){
		int p = x;
		x = y;
		y = p;
		printf("\n\tApres la permutation  x = %.0f ,y = %.0f",x,y);
	}else{
		printf("la valeur de x est egale a y ou superieur a y !!");
	}

	return 0;
}
