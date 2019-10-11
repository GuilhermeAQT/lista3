#include <stdio.h>

int fatorial(int x){
	int retorno;
	if(x == 0){
		return 1;
	}
	retorno = x * fatorial(x-1);
	return retorno;
}

int main(void){
	int a, b;
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	b = fatorial(a);
	printf("%d! = %d", a, b);
	
	
	return 0;
}
