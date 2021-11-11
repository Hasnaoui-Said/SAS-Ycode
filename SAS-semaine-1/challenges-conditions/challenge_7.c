#include <stdio.h>

int main(){
	float note;
	do{
	printf("Donner la note (la note doit etre entre 0 et 20): ");
	scanf("%f",&note);
	}while( note < 0 || note > 20);
	if(note < 10)
		printf("Vous etes recale.");
	else if(note < 12 )
		printf("Mention passable.");
	else if(note < 14 )
		printf("Mention assez bien.");
	else if(note < 16 )
		printf("Mention bien.");
	else
		printf("Mention tres bien.");
		
	return 0;
}
