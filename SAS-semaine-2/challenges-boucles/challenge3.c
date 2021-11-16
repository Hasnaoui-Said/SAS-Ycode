#include<stdio.h>

int main(){
	
	int x,i;
	printf("Donner un nombre: ");
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(x%i == 0){
			printf("ce n'est pas un nombre premier");
			return 0;
		}
	}
	printf("c'est un nombre premier");
	return 0;
}
