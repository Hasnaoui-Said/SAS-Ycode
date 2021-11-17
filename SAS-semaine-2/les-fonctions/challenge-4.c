#include <stdbool.h> 
#include <stdio.h>

float div(int a,int n){
	return a/n.f;	
}

bool isPremier(int x);
bool divededby(int n,int a){
	printf("la division de %d par %d est: %d",n,a,n/a);
	return isPremier(n/a);
}

int main(){ 
	int x,a;
	printf("Donner mois deux nombre: ");
	scanf("%d %d",&x,&a);
	printf("Div de a sur n est: %f",div(x,a));
	return 0; 
} 

bool isPremier(int x){
	int i,r=0;
	for(i=1;i<=x;i++){
		if(x%i == 0) r++;
	} 
	return r == 2;
}
