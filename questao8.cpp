#include <stdio.h>
  
int main(void) {
	int i, j;
	
	printf("Digite um numero natural: ");
	scanf("%d", &i);
     
	for (j = 1; j <= 10; j = j + 1) {
    printf("%d x %d = %d\n", i, j, i * j);
	}
			
    return 0;
}
