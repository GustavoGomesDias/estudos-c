#include <stdlib.h>
#include <stdio.h>
#include "cell.h"


typedef struct Cell{
	TIPO info;
	struct Cell *prox;
} Cell;


Cell *criaCelula(){
	Cell *nova = (Cell *)malloc(sizeof(Cell));
	setProxCelula(nova, NULL); // Preciosismo, mas dps perde isso
	return nova;
}

void liberaCelula(Cell *arg){
	//free(arg1);  Tem q liberar nada, quem faz isso
				// é quem malloca, ou seja, lista
	printf("Celula liberada ");
}

void printCelula(Cell *arg1){
	printf("%d", getInfoCelula(arg1));
}


Cell *getProxCelula(Cell *arg1){
	return arg1->prox;
}


void setProxCelula(Cell *arg1, Cell *arg2){
	arg1->prox = arg2;
}

int getInfoCelula(Cell *arg1){
	return arg1->info;
}

void setInfoCelula(Cell *arg1, TIPO arg2){
	arg1->info = arg2;
}

/*
int main(){
	Cell *k[10];
	int i;
	for(i = 0; i<10; i++){
		k[i] = criaCelula();
		setInfoCelula(k[i], i);
		printf("\n");
		printCelula(k[i]);
		printf("\n");
		liberaCelula(k[i]);
	}
	
	
	
	
	
	return 0;
}
*/













































