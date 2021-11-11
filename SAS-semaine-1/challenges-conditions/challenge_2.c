#include <stdio.h>

int main(){

	int x;
	do{
	printf("Entrer un nombre aliatoire ?(taper 0 pour quiter) \t");
	scanf("%d",&x);
	
	int i = x%2;
	if(i == 0){
		printf("\n\t\t%d est paire.\n\n",x);
		if(x == 0) 
		printf("\n\t\tArreter!!\n");
	}else if(i != 0){
		printf("\n\t\t%d est impaire.\n\n",x);
	}else {
		printf("\n\t\tArreter!!\n");
	}
	}while(x != 0);
	return 0;
}
