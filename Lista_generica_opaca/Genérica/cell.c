#include <stdlib.h>
#include <stdio.h>
#include "cell.h"


struct Cell{
	TIPO *info;
	struct Cell *prox;
};



Cell *criaCelula(){
	Cell *nova = (Cell *)malloc(sizeof(Cell));
	setProxCelula(nova, NULL); // Preciosismo, mas dps perde isso
	return nova;
}

void liberaCelula(Cell *arg1){
	free(arg1->info);
	
	//printf("Celula liberada "); -> só pra ver se funfo
}
/*
void printCelula(Cell *arg1){
	printf("%p ", (void *) getInfoCelula(arg1)); 
	** %p ->imprime a memória, p de pointer
	** máximo q da pra fazer com essa função é imprimir a memória, 
	** quase n serve pra mais nada
	
}*/

Cell *getProxCelula(Cell *arg1){
	return arg1->prox;
}


void setProxCelula(Cell *arg1, Cell *arg2){
	arg1->prox = arg2;
}

Cell *getInfoCelula(Cell *arg1){
	return arg1->info;
}

void setInfoCelula(Cell *arg1, TIPO *arg2){
	arg1->info = arg2;
}



