#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int h1,h2,m1,m2,s1,s2,t1,t2;
	
	do{
		printf("Donner le premiere instant(HH:MM:SS):\t");
		scanf("%d %d %d",&h1 , &m1, &s1);
	}while( h1 < 0 || h1 >= 24 || m1 < 0 || m1 >= 60 || s1 < 0 || s1 >= 60);
	
	do{
		printf("Donner le second instant(HH:MM:SS):\t");
		scanf("%d %d %d",&h2 , &m2, &s2);
	}while( h2 < 0 || h2 >= 24 || m2 < 0 || m2 >= 60 || s2 < 0 || s2 >= 60);
	
	t1 = h1*3600 + m1*60 + s1;
	t2 = h2*3600 + m2*60 + s2;
	
	if(t1 == t2)
		printf("il s'agit du meme instant.");
	else if(t1 < t2)
		printf("Le premier instant vient avant le deuxieme.");
	else
		printf("Le deuxieme instant vient avant le premier.");
	
	
    return 0;
}
