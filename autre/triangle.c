#include <stdio.h>

int main(){
	int i,j;
	
	printf("\n\t\t");
	for(i=0;i<9;i++){
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n\t\t");
	}
	return 0;
}
