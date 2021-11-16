#include <stdio.h>
int main()
{
    int i, j, s, ligne;
  
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&ligne);
  
    for(i=1; i<=ligne*2; ++i){
        for(j=1; j<=ligne*2-i; j++)
        	printf(" ");
    	if(i%2 != 0)
	    	for(s = 0; s<i; s++)
	        	printf("* ");
    	printf("\n");
    }
    
    return 0;
}
