#include<stdio.h>
int add(int a , int b) {
	return a+b;
}
int main(){
	int n,x;
	printf("Donner deux nombre: ");
	scanf("%d %d",&n,&x);
	
	printf("la somme : %d",add(n,x));
	return 0;
}
