#include <stdio.h>
#include <string.h>

int main (void){
	int fora=0, dentro=0, k, l, dig;
	char num[10];
	
	printf("Quantidades de numeros dentro e fora do intervalo [10,50]\n");
	
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &dig);
		num[k] = dig;
	}
	for(k=0;k<10;k++){
		if(num[k]>=10 && num[k]<=50){
			dentro++;
		}
		else {
			fora++;
		}
	}
	printf("%d numero estao dentro e %d numeros estao fora do intervalo", dentro, fora);
	
	return 0;
}
