#include<stdio.h>

int main(){
	int a,n,i=0,pow = 1;
	
	do{
		printf("Donner moi la base: ");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Donner moi l'exposant: ");
		scanf("%d",&n);
	}while(n<0);
	
	while(i<n){
		pow = a*pow;
		i++;
	}
	printf("%d pouissance %d est = %d",a,n,pow);
	
	return 0;
}
