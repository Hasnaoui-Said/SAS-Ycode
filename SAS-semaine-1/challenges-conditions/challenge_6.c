#include <stdio.h>
#include <string.h>

int main(){
	char tab[50];
	int i,j;

	printf("Donner moi un mot: \t");
	scanf("%s",&tab);
	
	for(i=0,j=strlen(tab)-1;i<strlen(tab);i++,j--){
		if(tab[i] != tab[j]) {
			printf("Ce n'est pas un palindrone.");
			return 0;
		}	
	}
	
	printf("C'est un palindrone.");
	return 0;
}
