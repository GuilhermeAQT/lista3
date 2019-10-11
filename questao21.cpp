#include <stdio.h>
#include <string.h>

int tabela(char * entrada){
    int i, j, k;
    int tam = strlen(entrada)-1;
    
    for(i=0; i<=tam; i++){
        if(entrada[i]>=48 && entrada[i]<=57){
            k = entrada[i] - 48;
            for(j=0; j<k; j++){
                printf("*");
           }
            printf("\n");
        }
    }
    return 0;
}
int main(void){
    char entrada[40];
    printf("Insira os elementos em forma de (1, 6, 9, 10, 3, ... , n): ");
    fgets(entrada, 40, stdin);
    tabela(entrada);    
	
	return 0;    
}
