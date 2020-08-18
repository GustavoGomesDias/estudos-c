#ifndef __cell_h__
#define __cell_h__

typedef struct Cell Cell;

Cell *createCell();

void setNext(Cell *arg1, Cell *arg2);

Cell *getNext(Cell *arg1);

void setInfo(Cell *arg1, int num);

int getInfo(Cell *arg1);

#endif