#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPremier_2(int x);
bool isPremier(int x);

int main(){
	int x;
	printf("Donner mois un nombre: ");
	scanf("%d",&x);
	if(isPremier(x))
		printf("is a numbre premier");
	else
		printf("is not a numbre premier");
	return 0;
}

bool isPremier_2(int x){
	int i,r=0;
	bool bool1 = false;
	for(i=1;i<=x;i++){
		if(x%i == 0) r++;
	}
	if(r==2) 
	  bool1 = true;
	return bool1;
}
bool isPremier(int x){
	int i,r=0;
	for(i=1;i<=x;i++){
		if(x%i == 0) r++;
	} 
	return r == 2;
}
