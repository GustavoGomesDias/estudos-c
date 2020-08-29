#ifndef __cell_h__
#define __cell_h__

typedef float info_t;

struct Cell;
typedef struct Cell Cell;

Cell *createCell();

info_t getInfo(Cell *arg1);

void setInfo(Cell *arg1, info_t info);

Cell *getNext(Cell *arg1);

void setNext(Cell *arg1, Cell *arg2);

#endif