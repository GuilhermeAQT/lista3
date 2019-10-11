#include <stdio.h>

int main(void){
	int num, j=1, cont=0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(j=2; j <= num/2; j++){
		if(num%j==0){
			cont++;
			break;
		}
	}
	if (cont == 0){
		puts("Numero eh primo!");
	}
	else {
		puts("Numero nao eh primo!");
	}
	
	return 0;
}
