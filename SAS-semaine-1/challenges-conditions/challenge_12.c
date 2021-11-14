#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	float x1,x2,y1,y2,xp,yp,m,cst,x_min,x_max,y_min,y_max;
	
	printf("Donner les coordonnees du premier point A(x1,y1) du segment: ");
	scanf("%f %f", &x1, &y1);
	printf("Donner les coordonnees du second point B(x2,y2) du segment: ");
	scanf("%f %f", &x2, &y2);
	
	if(x1 < x2){
		x_min = x1;
		x_max = x2;
	}else {
		x_min = x2;
		x_max = x1;
	}
	if(y1 < y2){
		y_min = y1;
		y_max = y2;
	}else {
		y_min = y2;
		y_max = y1;
	}
	
	if((x1-x2 ) == 0) 
		m = 0;
	else 
		m = (y1-y2)/(x1-x2);
	
	cst = x1 - m*y1;
	
	
	printf("Donner les coordonnees du P(xp,yp): ");
	scanf("%f %f", &xp, &yp);
	
	if( xp == (m*yp + cst)){
		printf("M est sur la droite formée par (AB).\n");
		/*if(x1 == xp && y1 == yp && x2 == xp && y2 == yp) 
			printf("M confondu avec A et B ");
		else */
		if(x1 == xp && y1 == yp) 
			printf("M confondu avec A ");
		else if(x2 == xp && y2 == yp) 
			printf("M confondu avec B ");
		else if((x_min < xp && y_min < yp) && (x_max > xp && y_max > yp)) 
			printf("M appartient au segment [AB]");
		else 
			printf("M est  en dehors du segment");
	}else
		printf("M est en dehors de la droite donc en dehors du segment");
	
	/*
	if ((x2-x1)/(y2-y1) == (xp-x1)/(yp-y1)) {
	  // M est sur la droite formée par A-B
	  if( xp<=x2 && xp>=x1) {
	    // M est sur le segment A-B
	  } else {
	    // M est sur la droite mais en dehors du segment
	  }
	} else {
	  // M est en dehors de la droite donc en dehors du segment
	}*/
    return 0;
}
