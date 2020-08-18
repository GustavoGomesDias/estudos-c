#ifndef __cell_h_
#define __cell_h_

typedef int TIPO;	// celula com valores opacos-> Tipo = nome pra int, mas da pra usar int ainda
					// Pode mudar pra float, mas tem que mudar nas funções tbm
struct Cell;

typedef struct Cell Cell;


Cell *criaCelula();


void liberaCelula(Cell *arg);


void printCelula(Cell *arg1);



Cell *getProxCelula(Cell *arg1);



void setProxCelula(Cell *arg1, Cell *arg2);

int getInfoCelula(Cell *arg1);

void setInfoCelula(Cell *arg1, TIPO arg2);


#endif