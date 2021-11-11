#include <stdio.h>

int main(){
	
	char c;
	printf("Donner moi un caractere: ");
	scanf("%c",&c);
	
	if(((c >= 'a') && (c  <='z')) || ((c >= 'A') && (c  <='Z'))){
		if((c >= 'a') && (c  <='z'))
			printf("oui, et en plus elle est minuscule.");
		else 
			printf("oui, et en plus elle est majuscule.");
	}else
	 	printf("non");
	
	return 0;
}
