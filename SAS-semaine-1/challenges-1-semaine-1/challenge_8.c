#include <stdio.h>

int main(){

	int a,b,c,d;
	float reste;
	char ch;
	printf("Donner moi a:\t");
	scanf("%d",&a);
	printf("Donner moi b:\t");
	scanf("%d",&b);
	
	printf("Donner moi c:\t");
	scanf("%d",&c);
	printf("Donner moi d:\t");
	scanf("%d",&d);
	int somme;
	float moy = (a+b+c+d)/4;
	
	printf("\nLa somme de a = %d et b= %d et c = %d et d= %d est : %d",a,b,c,d,somme);
	printf("\nLa diffirence entre de a = %d et b= %d et c = %d et d= %d est : %.2f",a,b,c,d,moy);
	return 0;
}
