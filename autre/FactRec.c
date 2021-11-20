#include<stdio.h>

long FactRec(int n) {
    if ( n <= 1 )
      return 1;
    else
      return FactRec(n-1) * n;
  }

 int main() {
    long N = 20;
    int n;
    printf("%d! = %d",N,FactRec(N));
} 

