#include <stdio.h>

int main(){
   float c,f;
   do{
   printf("Donner le cout d unitaire: ");
   scanf("%f",&c);
   }while(c<0);
   
   if(c<=50)
    return 0;
}
