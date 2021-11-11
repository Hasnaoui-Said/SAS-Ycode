#include <stdio.h>

int main(){

	int a,b;
	float reste;
	printf("Donner moi a:\t");
	scanf("%d",&a);
	printf("Donner moi b:\t");
	scanf("%d",&b);
	
	reste = a%b;
	printf("\nLa somme de a = %d et b= %d est : %d",a,b,a+b);
	printf("\nLa diffirence entre de a = %d et b= %d est : %d",a,b,a-b);
	printf("\nLa multupcation de a = %d et b= %d est : %d",a,b,a*b);
	printf("\nLa division de a = %d et b= %d est : %d et le reste est: %.2f",a,b,a/b,reste);
	return 0;
}
