#include<stdio.h>

int main(){
	int i,x;
	
	printf("Donner moi un numbre: ");
	scanf("%d",&x);
	printf("\n\t\t\t\t");
	for(i=0;i<10;i++){
		printf("%d * %d = %d",x,i,x*i);
		printf("\n\t\t\t\t");
	}

	return 0;
}
