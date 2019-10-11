#include <stdio.h>

int main(void){
	int i, j, soma=0, cont=0;
	printf("Media aritmetica dos numeros pares compreendidos entre 13 e 73\n");
	for(i=13;i<=73; i++){
		if(i%2 == 0){
			soma = i + soma;
			cont++;
		}
	}
	j = soma/cont;
	printf("A media aritmetica eh: %d", j);
	
	return 0;
}
