#include <stdio.h>

int main(){

	float C,F;
	printf("Quelle est la temp�rature en Fahrenheit ? \t");
	scanf("%f",&F);
	C = (F-32)/1.8;
	
	printf("\n\tla transforme de Fahrenheit en degr� Celsius est: %f�C",C);
	return 0;
}
