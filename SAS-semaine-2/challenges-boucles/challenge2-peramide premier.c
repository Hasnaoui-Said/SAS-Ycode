#include<stdio.h>
#include<stdlib.h>
/*
Ecrire le programme pour avoir un pyramide d'�toile, 
le nombre des lignes � composer est demand� � l�utilisateur
(chaque ligne doit avoir un nombre premier d'�toiles).
*/

int main()
{
    int nombre=1, cpt=0;
    int k,j,i,r,n;
    printf("Donner le nombr de ligne: ");
    scanf("%d",&n);

    for (i=1 ; i<=n ; i++)
    	printf(" ");
    	printf("*\n");
    while(cpt<n-1){
         r=0;
         nombre++;
         for (i=1 ; i<=nombre ; i++)
         {
             if ((nombre%i)==0) 
                r++;
         }
         if(r==2)
         {
         	for(j = 0; j<nombre;j++){
         		for(k=1 ;k <= (n-nombre+j);k++)
            		printf(" ");
            	printf("*");
			 }
            printf("\n");
            cpt++;
         }
   }
	return 0;
}
