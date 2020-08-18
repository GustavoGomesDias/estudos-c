#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex7.h"

int main(){
	tipoString *c[3];
	int i;
	char teste[100] = "Gustavo";
	char teste2[100] = "Gomes";
	for(i = 0; i<3; i++){
		if(i == 0){
			c[i] = criar();
			criaString(c[i], teste, 7);
			imprime(c[i]);
		}else if(i == 1){
			printf("//////////////////////////////////\n");
			c[i] = criar();
			criaString(c[i], teste2, 5);
			imprime(c[i]);
		}else{
			printf("//////////////////////////////////\n");
			c[i] = criar();
			concatena(c[i], teste, teste2, 7, 5);
			imprime(c[i]);
		}
	}
	
	
	
	return 0;
}