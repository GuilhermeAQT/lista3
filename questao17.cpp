#include <stdio.h>

float conversor(float x){
	float tempf = x*9/5+32;
	return tempf;
}

int main(void){
	float tempf, tempc;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &tempc);
	
	tempf = conversor(tempc);
	printf("%.2f graus celsius foram convertidos para %.2f graus em fahrenheit.", tempc, tempf);
	
	
	return 0;
}
