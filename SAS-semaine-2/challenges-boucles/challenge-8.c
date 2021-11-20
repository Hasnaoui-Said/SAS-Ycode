#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float x,y,m,fx,fy,fm;
    x=-15;
    y=-10;
    while(y-x>0.0000001){
       m=x+(y-x)/2;
       fx=pow(x,3)+12*pow(x,2)+1;
       fy=pow(y,3)+12*pow(y,2)+1;
       fm=pow(m,3)+12*pow(m,2)+1;
       
       if(fx*fm<=0) y=m;
       else x=m;
    }
    fx=pow(x,3)+12*pow(x,2)+1;
    printf("solution est x= %.5f y = %.5f\n",x,fx);
    
    return 0;
}
