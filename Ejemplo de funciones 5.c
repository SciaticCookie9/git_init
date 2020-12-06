#include<stdio.h>
#include<stdlib.h>


int Max(int x, int y){
	int ans=0;
	if(x>y){
		return x;
	}
	    return y;	
}

int main(){
	system("color 0B");
	
	int Num1;
	int Num2;
	
	printf("Ingrese un numero: \n");
	scanf("%d", &Num1);
    system("cls");
    printf("Ingrese otro numero: \n");
    scanf("%d", &Num2);
    printf("El numero mayor es: %d", Max(Num1,Num2));
    
    return 0;
	
}
