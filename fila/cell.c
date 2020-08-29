#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cell.h"

struct Cell{
    info_t num;
    struct Cell *next;
};

Cell *createCell(){
    Cell *newCell = (Cell *)malloc(sizeof(Cell));
    setNext(newCell, NULL);
    return newCell;
}

info_t getInfo(Cell *arg1){
    return arg1->num;
}

void setInfo(Cell *arg1, info_t info){
    arg1->num = info;
}


Cell *getNext(Cell *arg1){
    return arg1->next;
}

void setNext(Cell *arg1, Cell *arg2){
    arg1->next = arg2;
}