#include<stdio.h>
#include<stdlib.h>

double prom(double x, double y){
	return (x+y)/2;
}

int main(){
	double Can1, Can2, media;
	printf("Ingrese la primer cantidad: \n");
	scanf("%lf", &Can1);
	printf("Ingrese la segunda cantidad: \n");
	scanf("%lf", &Can2);
	media=prom(Can1, Can2);
	printf("El promedio es: %lf2", media);
	
}
	

