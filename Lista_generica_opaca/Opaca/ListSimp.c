#include <stdlib.h>
#include <stdio.h>
#include "cell.h"
#include "ListSimp.h"

ListSimp *criaLista(){
	return NULL;
}


ListSimp *insereFimList(ListSimp *l, Cell *c){
	// Insere -> precisa de lista e celula, 
	// celula pq a lista é composta por celulas
	
	Cell *tmp = l;
	if(tmp == NULL){
		// Lista vazia pra n quebrar
		return c;
	}
	
	while(getProxCelula(tmp) != NULL){
		tmp = getProxCelula(tmp); // Tmp é uma celula
	}
	
	setProxCelula(tmp, c); // Seta prox de tmp com a lista
	return l;
}

void printLista(ListSimp *l){
	Cell *tmp = l;

	
	if(tmp == NULL){
		printf("Vazia");
		return;
	}
	
	while(tmp != NULL){
		printCelula(tmp);
		printf("\n");
		tmp = getProxCelula(tmp);
	}
}

void liberaLista(ListSimp *l){
	Cell *tmp = l;
	Cell *aux; // Aux q pega a anterior pra free
	while(tmp != NULL){
		aux = tmp;
		tmp = getProxCelula(tmp);
		liberaCelula(aux);
		free(aux);
	}
	
}



int main(){
	ListSimp *l;
	int i;
	Cell *c;
	l = criaLista();
	for(i = 0; i<10; i++){
		c = criaCelula();
		setInfoCelula(c, i);
		l = insereFimList(l, c);
	}
	printLista(l);
	liberaLista(l);
	return 0;
}
















