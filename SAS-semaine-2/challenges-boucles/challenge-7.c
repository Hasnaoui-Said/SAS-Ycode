
#include<stdio.h>
int fibo(int n) {
    if ( n <= 1 )
      return 1;
    else
      return fibo(n-2) + fibo(n-1);
} 


int main(){
  	int n,i,u,u1=1,u2=1;
  	n = 4;
  	
    do{
        printf("entrer un entier superieur ou egale a 2  ");
        scanf("%d",&n);
    } while (n<2);
    
  	printf("on utilsant les fonction F(%d) = %d\n\n",n,fibo(n));
    for(i=2;i<=n;i++){
        u = u1 + u2;
        u2 = u1;
        u1 = u;
    }
    printf("le terme U(%d) = %d",n,u);
  	
	return 0;
}
