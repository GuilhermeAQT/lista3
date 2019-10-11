#include <stdio.h>

int main(void){
	
	int i, soma=0 ;
	
	for(i=0;i<=100;i++){
		soma = soma + i;
	}
	
	printf("A soma dos 100 primeiros numeros eh: %d\n ", soma);

	return 0;
}
