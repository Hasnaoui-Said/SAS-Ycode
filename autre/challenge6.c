#include<stdio.h>

int main(){
	
	int x,i,p,r;
	printf("Donner un nombre: ");
	scanf("%d",&x);
	for(p=1;p<=x;p++){
		r = 0;
		for(i=1;i<=p;i++){
			if(p%i == 0){
				r++;
			}
		}
		if(r == 2) printf("%d -",p);
	}
	return 0;
}
