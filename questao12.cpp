#include <stdio.h>

int main(void) {
	int i, j, cont=0, contNumero=0, sexto, doze;
	
	for(i=2; i<100; i++){
		for(j=i; j>1; j--){
			if(i%j == 0){
				cont++;
			}
		}
		if(cont == 1){
			contNumero++;
				if(contNumero == 6){
					sexto=i;			
				}
				if(contNumero == 12){
					doze=i;
				}
		}
		cont = 0;		
	}
	
	printf("A diferenca entre o sexto e decimo segundo numero primo eh: %d", (doze-sexto));
		
	return 0;
}
