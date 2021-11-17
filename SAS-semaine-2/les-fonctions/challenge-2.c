#include<stdio.h>
void echanger(int a , int b) {
	
	if(a==b)
		printf("a=b");
	else {
		int c;
		c=a;
		a=b;
		b=c;
		printf("au sien de function: a = %d, b = %d \n",a,b);
	}
}
int main(){
	int a,b;
	printf("Donner deux nombre: ");
	scanf("%d %d",&a,&b);
	printf("avant l'appel: a = %d, b = %d \n",a,b);
	
	echanger(a,b);
	
	printf("apres l'appel: a = %d, b = %d \n",a,b);
	return 0;
}
