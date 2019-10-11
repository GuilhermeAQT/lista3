#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, cont =0;
	
	for (i=1000; i<2000; i++){
		if(i%11==5){
			cont++;
			printf("%d numero: %d \n",cont, i);
			if(cont>=20){
				exit(0);
			}
		}
	}
		
	return 0;
}
