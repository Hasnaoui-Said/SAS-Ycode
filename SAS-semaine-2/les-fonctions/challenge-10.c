#include <stdio.h>
#include <math.h>
#include <string.h>

void Affiche_Carre (int tab[]){
	int t;
	for(t = 0; t < 18; t++)
		printf("%d ",tab[t]*tab[t]);
	
}
int Carre (int a){
	return a*a;
}
int main(){
	int t, tab[18];
    srand((unsigned)time(0));
	for ( t = 0; t < 18; ++t)
       tab[t] = rand()%10;	
	for(t = 0; t < 18; t++)
		printf("%d ",tab[t]);
	printf("\n-----------Appel Affeche_Carre--------------\n");
	Affiche_Carre(tab);
	printf("\n------------Carre-------------\n");
	for(t = 0; t < 18; t++)
		printf("%d ",Carre(tab[t]));
	return 0;
}
