#ifndef __ListSimp_h_
#define __ListSimp_h_
typedef Cell ListSimp;

ListSimp *criaLista();


ListSimp *insereFimList(ListSimp *l, Cell *c);

void printLista(ListSimp *l);

void liberaLista(ListSimp *l);


#endif