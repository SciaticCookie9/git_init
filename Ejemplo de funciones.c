#include<stdio.h>

int letra(int num);

int main(){
	int num, x;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	x=letra(num);
	printf("%c", x);
	
	return 0;
}

int letra(int num){
	if(num>0){ 
	
		return 'P';
		
	}else
	
	return 'N';
}
