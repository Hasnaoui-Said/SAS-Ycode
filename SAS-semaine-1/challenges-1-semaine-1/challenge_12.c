#include <stdio.h>

main(){

	int x,inverse,x_1,x_2,x_3;
	printf("Donner moi un nombre(le nombre doit ete un etier et de trois chiffres):\t");
	scanf("%d",&x);
	
	x_1 = x/100;
	x_2 = x/10-x_1*10;
	x_3 = x-x_1*100-x_2*10;
	
	inverse = x_3*100+x_2*10+x_1;
	
	printf("\n%d",inverse);

}
