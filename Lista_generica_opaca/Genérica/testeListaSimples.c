#include <stdlib.h>
#include <stdio.h>
#include "cell.h"
#include "ListSimp.h"


typedef struct bomba{
	char nome[30];
} bomba;


int main(){
	ListSimp *l;
	int i;
	Cell *c;
	bomba* bmb;
	
	l = criaLista();
	for(i = 0; i<10; i++){
		c = criaCelula();
		bmb = malloc(sizeof(bomba *));
		bmb->nome[0] = 'a' + i;
		bmb->nome[1] = 0;
		setInfoCelula(c, bmb);
		l = insereFimList(l, c);
	}
	
	for(i = 0; i<10; i++){
		c = getCelulaList(l, i);
		bmb = (bomba *) getInfoCelula(c);
		printf("%s \n", bmb->nome);
		printf("\n");
	}
	
	liberaLista(l);
	return 0;
}


// ANOTAÇÃO :D

/*
int main(){
	Cell *k[10];
	int i;
	bomba *tmpI;
	for(i = 0; i<10; i++){
		k[i] = criaCelula();
		tmpI = malloc(sizeof(bomba *));
		tmpI->nome[0] = 'a' + i;
		tmpI->nome[1] = 0;
		
		setInfoCelula(k[i], tmpI);
		
	}
	
	
	for(i = 0; i<10; i++){
		printf("\n");
		tmpI = (bomba *) getInfoCelula(k[i]);
		printf("%s \n", tmpI->nome);
		printf("\n");
		liberaCelula(k[i]);
	}

** Se eu quiser mudar o que ela vale, basta eu mudar todos os ints
** pra esse tipo. No vídeo, tem exemplo do tipo bomba.
** Tenho q setar uma struct tbm caso seja char, ver o vídeo.
** 1:22:00 min pra trás.

	return 0;
}
*/