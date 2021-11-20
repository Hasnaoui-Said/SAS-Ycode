#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int trier_tabs(int a[]);
int main(){
	int t, tab[18];
    srand((unsigned)time(0));
	for ( t = 0; t < 18; ++t)
       tab[t] = rand()%100;
	for(t = 0; t < 18; t++)
		printf("%d ",tab[t]);	
	printf("\n-----------Avant--------------\n");
	*tab = trier_tabs(tab);
	for(t = 0; t < 18; t++)
		printf("%d ",tab[t]);
	printf("\n------------Apres-------------\n");
	return 0;
}


int trier_tabs(int tableau[]){
	int i,t,k=0;
	for(t = 0; t < 18; t++){
		for(i=0; i < 18; i++){
			if(tableau[t] < tableau[i]){
				k = tableau[t];
				tableau[t] = tableau[i];
				tableau[i] = k;
			}
		}
	}
	return *tableau;
}

