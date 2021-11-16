#include <stdio.h>
#include <string.h>

int main()
{
	char chaine[50];
	int i,j;
	printf("donner la chaine   ");
	scanf("%s",&chaine);
	strlwr(chaine);
	
	for(i=0,j=strlen(chaine)-1;i<j;i++,j--)
	{
		if(chaine[i] != chaine[j])
		{
			printf("ce n'est pas un palindrome'");
			return 0;
		}
	}
	printf("c'est un palindrome");
}
