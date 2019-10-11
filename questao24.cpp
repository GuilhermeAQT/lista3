#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inversor(char *nome){
	int tam, x;
	tam = strlen(nome)-1;

	printf("De tras para frente eh: ");
		for (x = tam-1; x >= 0; x--){
			printf("%c",nome[x]);
		}
			return 0;
}

int main(void){
	char nome[30];
	printf("Digite uma palavra ou frase: ");
	fgets(nome, 150, stdin);

	inversor(nome);	
		
	return 0;
}
