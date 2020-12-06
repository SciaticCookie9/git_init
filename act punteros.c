#include<stdio.h>
#include<stdlib.h> 
#include<string.h>




struct datos{
	int mat;
	int p1, p2, pia;
	float final;
}datos[10];
int main (){
	FILE *ap;
	int i;
	ap=fopen("punteros.xlsx","w");
	for(i=0;i<10;i++){
	datos[i].mat=1729201-i;
	datos[i].p1=10-i;
	datos[i].p2=10-i;
	datos[i].pia=10-i;
	datos[i].final=10-i;
	fprintf(ap,"%d &d %d &d %.2f \n",datos[i].mat, datos[i].p1, datos[i].p2, datos[i].pia, datos[i].final);
	}
	fclose(ap);
	printf("Archivo guardado");
	
	ap=fopen("punteros.xlsx","r");
	for(i=0; i<10; i++)
	{
		fscanf(ap, "%d &d %d &d %.2f \n",datos[i].mat, datos[i].p1, datos[i].p2, datos[i].pia, datos[i].final);
		fprintf(ap, "%d &d %d &d %.2f \n",datos[i].mat, datos[i].p1, datos[i].p2, datos[i].pia, datos[i].final);
	}
	fclose(ap);
	
	
	return 0;
}

