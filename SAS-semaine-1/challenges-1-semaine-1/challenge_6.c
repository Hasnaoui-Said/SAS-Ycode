#include <stdio.h>

int main(){

	float C,F;
	printf("Quelle est la temp�rature en degr� Celsius ? \t");
	scanf("%f",&C);
	F = (C*1.8)+32;
	
	printf("\n\tla transforme de degr� Celsius en Fahrenheit est: %.2f",F);
	return 0;
}
