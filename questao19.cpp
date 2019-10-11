#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerador(int A, int B){
    srand(time(0));
    if(A>A){
        int C = A; 
		A = B; 
		B = C;
    }
    int number = A+1+(rand()%(B-A));
    return number;
}
int main(void){
    int A, B, num;
    printf("Digite o intervalo [a,b]:\n");
    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    
	num = gerador(A, B);
    printf("Numero aletorio dentro do intervalor [%d,%d] = %d\n", A, B, num);
    
	return 0;
}
