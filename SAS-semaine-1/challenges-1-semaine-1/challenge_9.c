#include <stdio.h>
#include <math.h>

int main(){
	float a1,b1,a2,b2,dist;
	printf("donner les coordonees du 1er point \t");
	scanf("%f %f",&a1,&a2);
	printf("donner les coordonees du 2eme point \t");
	scanf("%f %f",&b1,&b2);
	distance = sqrt( pow((a1-b1),2) + pow((a2-b2),2) );
	printf("la distance entre les 2 points est %f",distance);
	
	return 0;
}
