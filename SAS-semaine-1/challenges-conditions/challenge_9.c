#include <stdio.h>
#include <string.h>

int main(){
	int jj,mm,yy;

	do{
	printf("Jour : ");
	scanf("%d",&jj);
	}while(jj <= 0 || jj>=31);
	do{
	printf("Mois : ");
	scanf("%d",&mm);
	}while(mm <= 0 || mm>12);
	do{
	printf("Annee : ");
	scanf("%d",&yy);
	}while(yy <= 0);
	printf("\n Avant:\tdate %d/%d/%d:",jj,mm,yy);

	switch(mm){
		case 1: {
			printf("\n Apres:\tdate %d-janvier-%d:",jj,yy);
			break;
		}case 2: {
			printf("\n Apres:\tdate %d-fevrier-%d:",jj,yy);
			break;
		}case 3: {
			printf("\n Apres:\tdate %d-mars-%d:",jj,yy);
			break;
		}case 4: {
			printf("\n Apres:\tdate %d-avril-%d:",jj,yy);
			break;
		}case 5: {
			printf("\n Apres:\tdate %d-mai%d:",jj,yy);
			break;
		}case 6: {
			printf("\n Apres:\tdate %d-juin-%d:",jj,yy);
			break;
		}case 7: {
			printf("\n Apres:\tdate %d-juillet6%d:",jj,yy);
			break;
		}case 8: {
			printf("\n Apres:\tdate %d-aout-%d:",jj,yy);
			break;
		}case 9: {
			printf("\n Apres:\tdate %d-septembre-%d:",jj,yy);
			break;
		}case 10: {
			printf("\n Apres:\tdate %d-octobre-%d:",jj,yy);
			break;
		}case 11: {
			printf("\n Apres:\tdate %d-novembre-%d:",jj,yy);
			break;
		}default :{
			printf("\n Apres:\tdate %d-decembre-%d:",jj,yy);
			break;
		}	
	}
	
	
	return 0;
}
