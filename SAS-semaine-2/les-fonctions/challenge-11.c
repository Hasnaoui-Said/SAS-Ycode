#include<stdio.h>
#include<stdlib.h>
void Permuter(float *p,float *q){
    float tmp = *p;
    *p = *q;
    *q = tmp;
}
int main(){
    float a,b;
    printf("Entrez deux nombres reels:\n");
    scanf("%f%f",&a,&b);
    printf("Avant la permutation: a = %f et b = %f\n",a,b);
    Permuter(&a,&b);
    printf("Apres la permutation: a = %f et b = %f\n",a,b);
    return 0;
}
