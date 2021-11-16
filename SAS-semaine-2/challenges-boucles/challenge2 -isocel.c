#include <stdio.h>

int main(void)
{
	int n,x,i,j,a;
	printf("donner un nombre  ");
	scanf("%d",&n);
	int tab[n];
	for(j=0,x=1 ; j<n ; x++)
	{
		a = 1;
		for(i=2;i<x;i++)
		{
			if(x%i == 0)
			{
				i = x+10; // pour sortir de la boucle
				a = 0;
			}
		}
		if(a == 1)
		{
			tab[j] = x;
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<tab[i];j++)
			printf("*");
		printf("\n");
	}
}
