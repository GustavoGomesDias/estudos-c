#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cell.h"
#include "fila.h"

Queue *createFila(){
    return NULL;
}

Queue *push(Queue *queue, info_t info){
    Cell *tmp = queue;
    if(tmp == NULL){
        Cell *newCell = createCell();
        setInfo(newCell, info);
        return newCell;
    }
    while (getNext(tmp) != NULL){
        tmp = getNext(tmp);
    }
    Cell *newCell = createCell();
    setInfo(newCell, info);
    setNext(tmp, newCell);
    return queue;
}

void *pop(Queue *queue){
    Cell *tmp = queue;
    Cell *aux = queue;
    setNext(aux, getNext(tmp));
    printf("%d for retirado.", getInfo(tmp));
    setNext(tmp, NULL);
}
