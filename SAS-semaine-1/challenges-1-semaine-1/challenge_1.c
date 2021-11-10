#include <stdio.h>

/*
	Algorithme demander les information d'utilisatur:
	Debut
	var age: entier
		name: chaine de caracter
		numero_tel: chaine de carractaire
		ecrire('donner age,prenom');
		lire('donner age,prenom');
		ecrire('age,prenom');
		lire('donner age,prenom');
		ecrire('resultats');	
	fin
*/
int main(){
	int age;
	char num[12];
	char sexe[12];
	char prenom[30];
	char nom[30];
	printf("Comment t'appelles-tu (votre nom et prenom!) ? ");
    scanf("%s %s",&prenom,&nom);
	printf("\nsexe ? ");
    scanf("%s",&sexe);
	printf("\nvotre age ? ");
    scanf("%d",&age);
    if(age <= 0){
		do{
    		printf("\nerror, attention votre age doit ete positive");
    		printf("\npensee a entrer un entier positive!! : ");
			printf("\nvotre age ? ");
	   		scanf("%d",&age);
		}while(age <= 0);
	}
	
	printf("\nvotre num de tel :  ");
    scanf("%s",&num);
	
	
	printf("\nSalut, votre nom complet est %s %s ",prenom,nom);
	printf("\nvous ete : %s ",sexe);
	printf("\nvotre age est %d ",age);
	printf("\nvotre num de tel est %s",num);
	return 0;
}
