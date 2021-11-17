#include <stdio.h>



int main(void)
{
	char x[250],cache,i,j;
	printf("donner un entier ");
	scanf("%s",&x);
	for(i=0,j=strlen(x)-1;i<j;i++,j--)
	{
		cache = x[i];
		x[i] = x[j];
		x[j] = cache;
	}
	printf("le nombre inverse  %s",x);
	
	return 0;
}
