#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int i, p=97, m=122, cont=0; 
	char frase[40];
	//zerando array
	for(i=0; i<40; i++){
		frase[i]=0;
	}

	printf("Digite uma frase: ");
	fgets(frase, 40, stdin);
	for(i=0; i<40; i++){
	frase[i] = tolower(frase[i]);
	}
	
		for(i=0 ; i<40; i++){
			if(frase[i] == p){
				cont++;
			}
		}
		printf("A = %d\n", cont);
	
	cont=0;
	
		for(i=0 ; i<40; i++){
			if(frase[i] == p+1){
				cont++;
			}
		}
		printf("B = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+2){
				cont++;
			}
		}
		printf("C = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+3){
				cont++;
			}
		}
		printf("D = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+4){
				cont++;
			}
		}
		printf("E = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+5){
				cont++;
			}
		}
		printf("F = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+6){
				cont++;
			}
		}
		printf("G = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+7){
				cont++;
			}
		}
		printf("H = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+8){
				cont++;
			}
		}
		printf("I = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+9){
				cont++;
			}
		}
		printf("J = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+10){
				cont++;
			}
		}
		printf("K = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+11){
				cont++;
			}
		}
		printf("L = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+12){
				cont++;
			}
		}
		printf("M = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+13){
				cont++;
			}
		}
		printf("N = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+14){
				cont++;
			}
		}
		printf("O = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+15){
				cont++;
			}
		}
		printf("P = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+16){
				cont++;
			}
		}
		printf("Q = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+17){
				cont++;
			}
		}
		printf("R = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+18){
				cont++;
			}
		}
		printf("S = %d\n", cont);
	
	cont=0;	

	for(i=0 ; i<40; i++){
			if(frase[i] == p+19){
				cont++;
			}
		}
		printf("T = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+20){
				cont++;
			}
		}
		printf("U = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+21){
				cont++;
			}
		}
		printf("V = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+22){
				cont++;
			}
		}
		printf("W = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+23){
				cont++;
			}
		}
		printf("Y = %d\n", cont);
	
	cont=0;
	
	for(i=0 ; i<40; i++){
			if(frase[i] == p+24){
				cont++;
			}
		}
		printf("Z = %d\n", cont);
	
	cont=0;		
	
	
	return 0;
}

