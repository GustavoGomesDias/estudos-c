#ifndef __ListSimp_h_
#define __ListSimp_h_
typedef Cell ListSimp;

ListSimp *criaLista();

ListSimp *insereFimList(ListSimp *l, Cell *c);

// void printLista(ListSimp *l); ->morto

Cell *getCelulaList(ListSimp *l, int pos);

void liberaLista(ListSimp *l);


#endif