#include<stdio.h>

void func1(void){
	printf("Segunda Funcion\n");
	return;
}
	void func2(void){
		printf("Tercera Funcion\n");
		return;
	}
	int main(){
		printf("Primera funcion llamada main\n");
		func1();
		func2();
		printf("Fin del main\n");
		return 0;
	}

