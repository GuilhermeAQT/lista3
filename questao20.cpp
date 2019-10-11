#include <stdio.h>

int primo(int nump){
  int ind = 2;
  printf("%d =", nump);

  while(nump > 1){
      while(nump % ind == 0){
          printf(" %d", ind);
          nump = nump / ind; 
          if(nump > 1){
        printf(" *");
            }
        }
      ind++;   
    }
    return 0;
}

int main(void){
	int num, p;

	printf("digite um numero: ");
	scanf("%d", &num);
	printf("Decomposicao de %d em fatores primos:\n", num);  

	p = primo(num);
  
	return 0;
}
