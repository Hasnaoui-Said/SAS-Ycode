#include <stdio.h>
#include <string.h>
int main(){
    int i,k = 0,x = 0,somme = 0,max = 0;
    char tab[10];
    char quite;
  
    do{
	    printf("Entrez le nombre de lignes(quiter tape 0): ");
	    scanf("%d",&x);
	    if ( x<100 && x>=0 ){
			tab[k] = x;
			k++;
		} 
	}while(x != 0);
	
	for(i=0;i<k;i++) {
		printf("%d, ",tab[i]);
		somme += tab[i];
		if(max < tab[i]) 
			max = tab[i];
	}
	printf("\nLa somme est : %d, ",somme);
	printf("\nLe max des elements est : %d, ",max);
    return 0;
}
