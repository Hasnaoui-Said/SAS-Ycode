#include <stdio.h>

int main(){

	float C,F;
	printf("Quelle est la temp�rature en Fahrenheit ? \t");
	scanf("%f",&F);
	C = (F-32)/1.8;
	
	printf("\n\tla transforme de Fahrenheit en degr� Celsius est: %f",C);
	printf("\n\tIl est");
	if(C < -20){
		printf("\tIl est tres froid.");
	}else if(C > -20 && C < 15){
		printf("\tIl est froid.");
	}else if(C > 15 && C < 37){
		printf("\tIl est chaud.");
	}else if(C > 37){
		printf("\tIl est tres chaud.");
	}
	return 0;
}
