#include <stdio.h>
#include <string.h>

int tabela(int elemento[], int total){
    int i, j ,k;
    int max = elemento[0];
    for (i = 1; i < total; ++i){
        if (elemento[i] > max) max = elemento[i];
    }
    for (k = max; k >= 1; --k){
        for (j = 0; j < total; ++j){
            if (elemento[j] >= k)
                printf("*");
            else 
                printf(" ");
        } 
        printf("\n"); 
    }
    return 0;
}   
int main(void){
    int i, j=0; 
	char num[100];
    int num2[100];
    
    //zerando arrays
	for(i=0; i<100; i++){
        num[i] = 0;
        num2[i] = 0;
    }

	printf("Insira os elementos em forma de (1, 6, 9, 10, 3, ... , n):  ");
	fgets(num, 40, stdin);
	int tamanho = strlen(num);

	for(i=0; i<tamanho; i++){
		if(num[i]>=48 && num[i]<=57){
			num2[j] = num[i]-48;
			j++;
		}
	}	
    tamanho = strlen(num);
    tabela(num2, tamanho);
    
    return 0;
}
