#include<stdio.h>
#include<stdlib.h>

int main(){
	int valor_ascii;
	
	printf("Ingrese un valor ascii: ");
	scanf("%d", &valor_ascii);
	if(valor_ascii >= 48 && valor_ascii <= 57){
		printf("El valor %d es digito", valor_ascii);
	}else{
		if(valor_ascii>=65 && valor_ascii<=90){
			printf("El valor %d es mayuscula", valor_ascii);
		}else
		if(valor_ascii>=97 && valor_ascii<=122){
			printf("El valor %d es minuscula", valor_ascii);
		}else
		printf("El valor %d es un caracter especial", valor_ascii);
	}
	return 0;
}
