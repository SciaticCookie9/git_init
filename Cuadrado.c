#include<stdio.h>
#include<stdlib.h>

int main(){
	int largo=20, base=30, i, j;
	for(i=1; i<=largo; i++){
		if(i==1 || i==largo){
		 }else{
			for(j=1; j<base-1; j++){
				if(i==1 || i==largo){
				printf("-");
			  }
			  else{
			  	printf(" ");
			  }
			}
			if(i!=1 || i!=largo){
				printf("*");
			}else{
				printf("|");
			}
		}
			printf("\n");
   }

   
	return 0;
}
