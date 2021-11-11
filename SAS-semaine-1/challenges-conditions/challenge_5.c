#include <stdio.h>

int main(){

	int a,b,c;
	float deltat,x1,x2;
	
	do{
	printf("Entrer un numbre a = ");
	scanf("%d",&a);
	}while(a == 0);
	printf("Entrer un numbre b = ");
	scanf("%d",&b);
	printf("Entrer un numbre c = ");
	scanf("%d",&c);
	deltat = pow(-b,2) - 4*a*c;
	printf("deltat = %f\n",deltat);
	if(deltat < 0){
		printf("pas de solutions dans l'ensemble reel\n'");
	}else if(deltat == 0){
		x1 = -b/2/a;
		printf("L equation a un solution unique  x = %f",x1);
	}else{
		x1 = (-b-sqrt(deltat))/2/a;
		x2 = (-b+sqrt(deltat))/2/a;
		printf("premiere solution x1 = %f seconde solution x2 = %f",x1,x2);
	}
	

	return 0;
}
