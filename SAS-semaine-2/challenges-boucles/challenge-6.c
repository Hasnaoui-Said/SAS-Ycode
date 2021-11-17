#include <stdio.h>

int main(void)
{
	int p,n,i,a;
	printf("entrer le nombre n ");
	scanf("%d",&n);
	for(p=2;p<n;p++)
	{
		a = 1;
		for(i=2;i<p;i++)
		{
			if(p%i == 0)
			{
				i = p;
				a = 0;
			}
		}
		if(a == 1)
			printf("%d ",p);
		
	}
}
