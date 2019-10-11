#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char texto[40];
    int i, j, z=0, pala=1;

	printf("Digite um texto: ");
    fgets(texto, 150, stdin);
	
	for(i=0; i<texto[40]; i++){
	if (texto[i] == 32 ){
		z++;
		}
	}
	
//	printf("Deixa eu ver os espacos %d\n", z);
	
    j = strlen(texto) - z;

    printf("Numero de letras = %d\n", j);


// quantidade de plavras

    for(i=0; texto[i] != '\0'; i++){

        if(texto[i] == 32 ){
			pala++;
        }
        if(texto[i] == 32 && texto[i+1] == 32){
        	pala--;
		}
    }
	printf("Numero de palavras =  %d",pala);

    return 0;
}
