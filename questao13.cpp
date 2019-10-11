#include <stdio.h>

int main(void){
	int fib1=1, fib2=2, fib3=3, num;
	int soma = 1;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while (fib3<num){
		fib1=fib2;
		fib2=fib3;
		if (fib2%2 !=0){
			soma = soma+fib2;
		}
		fib3 = fib1 + fib2;
		printf("%d | ", fib3);
	}
	printf("\nnumero = %d\n", soma);
	
	return 0;
}
