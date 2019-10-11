#include <stdio.h>

float conversor(float x){
	float tempc = (x-32)*5/9;
	return tempc;
}

int main(void){
	float tempf, tempc;
	
	printf("Digite a temperatura em Farenheit: ");
	scanf("%f", &tempf);
	
	tempc = conversor(tempf);
	printf("%.2f graus Farenheit foram convertidos para %.2f graus em Celsius.", tempf, tempc);
	
	
	return 0;
}
