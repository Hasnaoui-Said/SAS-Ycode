#include <stdio.h>

int main(){

	int x,y;
	printf("Entrer un numbre \t");
	scanf("%d",&x);
	printf("\nEntrer un autre numbre \t");
	scanf("%d",&y);
	
	printf("\n\tAvant x = %d et de y = %d ",x,y);
	if(x != y){
		printf("\n\tLa somme de x = %d et y = %d est :somme = %d",x,y,x+y);
	}else{
		printf("Le triple de la somme(%d,%d) est : %d",x,y,(x+y)*3);
	}

	return 0;
}
