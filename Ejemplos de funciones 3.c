#include<stdio.h>
#include<stdlib.h>

float capturar(){
	float num;
	do{
		printf("Ingrese un numero positivo: ");
		scanf("%f", &num);
	}while(num<=0.0);
	
	return num;
}

float calcular_Area(float a, float b){
	return a*b;
}

int main(){
	float b, h;
	
	printf("Ingrese la base del rectangulo: ");
	b=capturar();
	printf("Ingrese la altura: ");
	h=capturar();
	printf("El area del rectangulo es: %.2f", calcular_Area(b, h));
	
	return 0;
	
}
