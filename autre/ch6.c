#include<stdio.h>

int main(){
	
	int n,i,p,r = 2;
	printf("Donner un numbre: ");
	scanf("%d",&n);
	
	for(p = 2; p<n ; p++){
		r = 2 ;
		for(i=1;i<=p;i++)
			if(p%i == 0) r++;
			
		if(r == 2)printf("%d",p);
	}
	return 0;
}
