#include <stdio.h>
#include <string.h>

int main(void){
	int i, tamanho, cont=0;
	char nome[1000],carac = 97;
	
	printf("Escreva uma frase: ");
	fgets(nome, 1000, stdin);
	
	tamanho = strlen(nome)-1;
	for(i=0;i<=tamanho;i++){
		if(nome[i] == 97 || nome[i] == 65 ){
			cont++;
		}
	}
	printf("A quantidade de letras %c e: %d", carac, cont);
			
	return 0;
}
