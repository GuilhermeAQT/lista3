#include<stdio.h>
#include <math.h>

int main(){
float x,l=0;

	printf("Digite um numero : ");
	scanf("%f",&l);

    x = pow(l,0.5) + 1;

	printf ("Menor inteiro positivo:%2.0f\n",x);

    return 0;
	
}
