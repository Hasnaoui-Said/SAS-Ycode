#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char jours[7][20] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    int randomnumber = 0;
	srand(time(NULL));
    int nRandonNumber = rand()%10-2;
    printf("%s\n", jours[nRandonNumber]);
    return 0;
}
