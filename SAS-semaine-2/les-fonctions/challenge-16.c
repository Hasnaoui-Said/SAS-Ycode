#include<stdio.h>

int somme(int a){
	if(a == 1)
		return 1;
	else 
		return a + somme(a-1);
}

int main(){
	int n;
	
	printf("Donner moi un nombre: ");
	scanf("%d",&n);
	
	printf("La somme des entiers entre 0 et %d est %d",n,somme(n));
	return 0;
}
