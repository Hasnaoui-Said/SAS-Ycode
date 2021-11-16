#include <stdio.h>

int main(){
	int i,j,k;
	
	printf("\n\t\t");
	for(i=0;i<2;i++){
		for(j=i;j>=0;j--){
			for(k=0;k<2;k++){
				printf("  ");
		}
			printf(" * ");
		}
		printf("\n\t\t");
	}
	return 0;
}
