#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cell.h"

struct Cell{
    int info;
    struct Cell *next;
};

Cell *createCell(){
    Cell *newCell = (Cell *)malloc(sizeof(Cell));
    setNext(newCell, NULL);
    return newCell;
}

void setNext(Cell *arg1, Cell *arg2){
    arg1->next = arg2;
}

Cell *getNext(Cell *arg1){
    return arg1->next;
}

void setInfo(Cell *arg1, int num){
    arg1->info = num;
}

int getInfo(Cell *arg1){
    return arg1->info;
}